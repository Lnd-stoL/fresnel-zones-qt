#include "fresnel.h"
#include <QDebug>
#include <cmath>

Fresnel::Fresnel ()
{
    setDefaults ();
}

void Fresnel::setDefaults ()
{
    initialAmplitude      = 100;                        // E0
    waveLength            = wave_def;                   // l
    holeRadius            = radius_def;                 // R
    observerDistance      = dist_def;                   // b
    sourceDistance        = 0.05;                       // a
    accuracyPlot          = 0.0001;                     // dr in amplitude integral
    accuracySpiral        = 10;                         // Number of spiral vectors in one zone
    waveNumber            = 2.0 * M_PI / waveLength;    // k
    currentFresnelNumber  = fresnelNumber (holeRadius); // fn
    refractiveIndex       = 2.0;                        // n
    phasePlateType        = PhasePlate::SIMPLE;
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
        for (int i = 0; i < currentFresnelNumber - oldFN; ++i) {
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
    double l        = waveLength;
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
    int    fn = (int) (2.0 * (sqrt (b*b + r*r) - b) / l);
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

        for (int i = 0; i < accuracySpiral; ++i) {
            innerR = sqrt (innerD*innerD - b2);

            innerD += dd;
            outerR  = sqrt (innerD*innerD - b2);

            if (outerR >= R) {
                break;
            }

            sp += amplitude (innerR, outerR);
            spiralX.push_back (sp.im);
            spiralY.push_back (sp.re);
        }
    }
}
