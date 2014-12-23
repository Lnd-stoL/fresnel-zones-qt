#include "fresnel.h"
#include <QDebug>
#include <cmath>


const double M_PI = 3.141592653589793238463;

const double Fresnel::nano_to_si_exp      = 1e-9;
  const double Fresnel::milli_to_si_exp     = 1e-3;
  const double Fresnel::micro_to_si_exp     = 1e-6;
  const double Fresnel::centi_to_si_exp     = 1e-2;

//
//-------------- 'scale' = centi -----------------
// * To change scale change ONLY 'scale_to_si_exp'
//
  const double Fresnel::scale_to_si_exp     = centi_to_si_exp;                    // scale -> System International (meter)
  const double Fresnel::scale_to_nano_exp   = scale_to_si_exp / nano_to_si_exp;   // scale -> nano
  const double Fresnel::scale_to_micro_exp  = scale_to_si_exp / micro_to_si_exp;   // scale -> nano
  const double Fresnel::scale_to_milli_exp  = scale_to_si_exp / milli_to_si_exp;  // scale -> milli

  const double Fresnel::si_to_scale_exp     = 1.0 / scale_to_si_exp;
  const double Fresnel::nano_to_scale_exp   = nano_to_si_exp * si_to_scale_exp;   // nano -> scale
  const double Fresnel::micro_to_scale_exp  = micro_to_si_exp * si_to_scale_exp;   // nano -> scale
  const double Fresnel::milli_to_scale_exp  = milli_to_si_exp * si_to_scale_exp;  // milli -> scale

//
//-------------------------------------- MODEL SCALING -----------------------------------------
// * ALL variables, arguments and return values are defined in 'scale'
// * To convert values MULTIPLY, NOT DIVIDE by appropriate exp defined above to avoid confusions
//
  const double Fresnel::radius_min = 0.1;
  const double Fresnel::radius_max = 0.5;
  const double Fresnel::radius_def = 0.37;
  const double Fresnel::dist_min   = 400;
  const double Fresnel::dist_max   = 8000;
  const double Fresnel::dist_def   = 1800;
  const double Fresnel::src_dist_def = 0.7;
  const double Fresnel::wave_min   = 410 * nano_to_scale_exp;
  const double Fresnel::wave_max   = 650 * nano_to_scale_exp;
  const double Fresnel::wave_def   = 495 * nano_to_scale_exp;
  const double Fresnel::accuracyPlot = radius_max / 100.0;                     // dr in amplitude integral
  const double Fresnel::accuracySpiral = 10;                         // Number of spiral vectors in one zone



Fresnel::Fresnel ()
{
    setDefaults ();
}

void Fresnel::setDefaults ()
{
    initialAmplitude      = 0.1;                        // E0
    waveLength            = wave_def;                   // l
    holeRadius            = radius_def;                 // R
    observerDistance      = dist_def;                   // b
    sourceDistance        = src_dist_def;               // a
    waveNumber            = 2.0 * M_PI / waveLength;    // k
    currentFresnelNumber  = fresnelNumber (holeRadius); // fn
    refractiveIndex       = 2.0;                        // n
    phasePlateType        = PhasePlate::LENS;
    amplitudePlate        = false;
    phasePlate            = false;
    openedZones           = QVector<bool> (currentFresnelNumber + 1, true);
}

double Fresnel::getWaveLength () const
{
    return waveLength;
}

void Fresnel::setWaveLength (double value)
{
    int oldFN            = currentFresnelNumber;
    waveLength           = value;
    waveNumber           = 2.0 * M_PI / waveLength;
    currentFresnelNumber = fresnelNumber (holeRadius);
    updateAmplitudePlate (oldFN);
}

double Fresnel::getHoleRadius () const
{
    return holeRadius;
}

void Fresnel::setHoleRadius (double value)
{
    int oldFN            = currentFresnelNumber;
    holeRadius           = value;
    currentFresnelNumber = fresnelNumber (holeRadius);
    updateAmplitudePlate (oldFN);
}

double Fresnel::getObserverDistance () const
{
    return observerDistance;
}

void Fresnel::setObserverDistance (double value)
{
    int oldFN            = currentFresnelNumber;
    observerDistance     = value;
    currentFresnelNumber = fresnelNumber (holeRadius);
    updateAmplitudePlate (oldFN);
}

void Fresnel::updateAmplitudePlate (int oldFN)
{
    if (oldFN < 0) {
        return;
    }

    if (currentFresnelNumber > oldFN) {
        for (int i = 0; i <= currentFresnelNumber - oldFN; ++i) {
            openedZones.push_back (true);
        }
    } else {
        //openedZones.remove (openedZones.count () - (oldFN - currentFresnelNumber), oldFN - currentFresnelNumber);
    }
}

bool Fresnel::isZoneOpened (int i) const
{
    return i >= 0 && i < openedZones.count () ? openedZones[i] : false;
}

void Fresnel::setZoneOpenness (int i, bool isOpen)
{
    if (i >= 0 && i < openedZones.count ()) {
        openedZones[i] = isOpen;
    }
}

double Fresnel::intensity () const
{
    Complex amp = amplitude ();
    return amp.sqAbs () * 3e+11 / (8.0 * M_PI);
}

//
// Integrate from innerR to outerR:
// PI / l * E0 * e^(-k * (d - b)) / d * r * (cos(phi) + 1)) * dr
//
Complex Fresnel::amplitude (double innerR,
                            double outerR) const
{
    if (outerR < 0) {
        outerR = holeRadius;
    }

    Complex amp;
    double d, arg, p, phi;

    double R    = outerR - innerR;
    int    n    = R / (accuracyPlot < R ? accuracyPlot : R / 2.0);
    double dr   = R / n;
    double r    = innerR + dr / 2.0;
    double l    = waveLength;
    double a    = sourceDistance;
    double k    = waveNumber;
    double b    = observerDistance;
    double b2   = b * b;
    double intK = M_PI / l * dr;

    for (int i = 0; i < n; ++i) {
        d   = sqrt (r*r + b2);
        phi = atan (r / a) + atan (r / b);

        p  = 1.0 / d;               // Sphere wave factor
        p *= r;                     // Jacobian
        p *= cos (phi) + 1.0;       // K(phi)
        p *= amplitudeOnPlate (r);

        arg     = -(k * (d - b) + phaseOnPlate (r));     // Phase
        amp.re += -p * sin (arg);
        amp.im +=  p * cos (arg);
        r  += dr;
    }

    amp *= intK;
    return amp;
}

double Fresnel::amplitudeOnPlate (double r) const
{
    int fn = fresnelNumber (r);

    if (amplitudePlate && fn < openedZones.count ()) {
        return openedZones[fn] ? initialAmplitude : 0.0;
    } else {
        return initialAmplitude;
    }
}

double Fresnel::phaseOnPlate (double r) const
{
    if (!phasePlate) {
        return 0.0;
    }

    double n          = refractiveIndex;
    double k          = waveNumber;
    double deltaPhase = n * k * getPhasePlateWidthOnRing (r);

    return deltaPhase;
}

double Fresnel::getPhasePlateWidthOnRing (double r) const
{
    r = fabs (r);

    double n        = refractiveIndex;
    double k        = waveNumber;
    double b        = observerDistance;
//    double l        = waveLength;
    double width    = 0.0;

    if (phasePlateType == PhasePlate::SIMPLE) {
        int zoneNumber = fresnelNumber (r);
        if (zoneNumber & 1) {
            width  = M_PI / n / k;
        }
    }

    if (phasePlateType == PhasePlate::STAGING) {
        int fn         = currentFresnelNumber;
        int zoneNumber = fresnelNumber (r);
        double dWidth  = M_PI / n / k;

        width  = fn - zoneNumber + (fn & 1) + 2;
        width *= dWidth;
    }

    if (phasePlateType == PhasePlate::LENS || phasePlateType == PhasePlate::FLAT_LENS) {
        double minWidth = M_PI / 2.0 - k * (sqrt (b*b + holeRadius*holeRadius) - b);
        width           = M_PI / 2.0 - k * (sqrt (b*b + r*r) - b);
        width          += ceil (fabs (minWidth) / (2.0 * M_PI)) * 2.0 * M_PI;

        if (phasePlateType == PhasePlate::LENS) {
        }

        if (phasePlateType == PhasePlate::FLAT_LENS) {
            width = fmod (width, 2.0 * M_PI);
        }

        width /= n * k;
    }

    return width;
}


double Fresnel::getObserverDistanceForZone (int n) const
{
    double factor = (n + 1) * waveLength;
    double r2 = holeRadius * holeRadius;

    return r2 / factor - 0.25 * factor;
}


double Fresnel::zoneOuterRadius (int n) const
{
    if (n < 0) {
        return 0.0;
    }

    double b = observerDistance;
    double l = waveLength;
    return sqrt ((n + 1)*(n + 1) * l*l / 4.0 + l * (n + 1) * b);
}

int Fresnel::fresnelNumber (double r) const
{
    if (r < 0) {
        return currentFresnelNumber;
    }
    double b  = observerDistance;
    double l  = waveLength;
    int    fn = (int) (2.0 * (sqrt (b*b + r*r) - b) / l + 0.001);
    return fn;
}

void Fresnel::spiral (DoubleVector &spiralX, DoubleVector &spiralY) const
{
    spiralX.clear ();
    spiralY.clear ();
    spiralX.push_back (0.0);
    spiralY.push_back (0.0);

    Complex sp;

    int    fn     = currentFresnelNumber;
    double R      = holeRadius;
    double b      = observerDistance;
    double b2     = b * b;
    double innerR = 0.0;
    double outerR = 0.0;
    double innerD = b;
    double outerD = 0.0;
    double dd     = 0.0;

    for (int n = 0; n < fn + 1; ++n) {
        outerR = zoneOuterRadius (n);
        outerD = sqrt (outerR*outerR + b2);
        dd     = (outerD - innerD) / accuracySpiral;
        bool stop = false;

        for (int i = 0; i < accuracySpiral && !stop; ++i) {
            innerR = sqrt (innerD*innerD - b2);

            innerD += dd;
            outerR  = sqrt (innerD*innerD - b2);

            if (outerR >= R) {
                outerR = R;
                stop = true;
            }

            sp += amplitude (innerR, outerR);
            spiralX.push_back (sp.im);
            spiralY.push_back (sp.re);
        }
    }
}
