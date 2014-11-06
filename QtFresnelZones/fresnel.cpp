#include "fresnel.h"
#include <QDebug>
#include <cmath>

Fresnel::Fresnel()
{
    this->setDefaults();
}

void Fresnel::setDefaults()
{
    this->initialAmplitude    = 100;                        // E0
    this->waveLength          = wave_def;                   // l
    this->holeRadius          = radius_def;                 // R
    this->observerDistance    = dist_def;                   // b
    this->sourceDistance      = 0.05;                       // a
    this->accuracyPlot        = 0.0001;                     // dr in plot integral
    this->accuracySpiral      = 10;                         // Number of spiral vectors in one zone
    this->waveNumber          = 2.0 * M_PI / waveLength;    // k
    this->refractiveIndex     = 2.0;                        // n
    this->phasePlateType      = PhasePlate::LENS;
    this->amplitudePlate      = false;
    this->phasePlate          = false;
    this->openedZones         = QVector<bool>(this->fresnelNumber() + 1, true);
}

double Fresnel::getWaveLength() const
{
    return waveLength;
}

void Fresnel::setWaveLength(double value)
{
    int oldFN = fresnelNumber();
    waveLength = value;
    waveNumber = 2.0 * M_PI / waveLength;
    updateAmplitudePlate(oldFN);
}

double Fresnel::getHoleRadius() const
{
    return holeRadius;
}

void Fresnel::setHoleRadius(double value)
{
    int oldFN = fresnelNumber();
    holeRadius = value;
    updateAmplitudePlate(oldFN);
}

double Fresnel::getObserverDistance() const
{
    return observerDistance;
}

void Fresnel::setObserverDistance(double value)
{
    int oldFN = fresnelNumber();
    observerDistance = value;
    updateAmplitudePlate(oldFN);
}

bool Fresnel::isZoneOpened(unsigned i)
{
    return i < openedZones.count() ? openedZones[i] : false;
}

void Fresnel::setZoneOpenness(unsigned i, bool isOpen)
{
    if (i < openedZones.count()) {
        openedZones[i] = isOpen;
    }
}

void Fresnel::updateAmplitudePlate(int oldFN)
{
    int currentFN = fresnelNumber();

    if (currentFN > oldFN) {
        for (int i = 0; i < currentFN - oldFN; ++i) {
            openedZones.push_back(true);
        }
    } else {
        openedZones.remove(openedZones.count() - (oldFN - currentFN), oldFN - currentFN);
    }
}

double Fresnel::intensity()
{
    Complex amp = this->amplitude();
    return amp.sqAbs() * 3e+11 / (8.0 * M_PI);
}

//
// Integrate from innerR to outerR:
// PI / l * E0 * e^(-k * (d - b)) / d * r * (cos(phi) + 1)) * dr
//
Complex Fresnel::amplitude(double innerR,
                           double outerR)
{
    if (outerR < 0) {
        outerR = this->holeRadius;
    }

    Complex amp;
    unsigned n;
    double r, dr, d, arg, p, phi;
    double R = outerR - innerR;

    dr = this->accuracyPlot < R ? this->accuracyPlot : R / 2.0;
    n = R / dr + 1;
    dr = R / n;

    double l = this->waveLength;
    double a = this->sourceDistance;
    double k = this->waveNumber;
    double b = this->observerDistance;
    double b2 = b * b;
    double intK = M_PI / l * dr;

    for (unsigned i = 0; i < n; ++i) {
        r = innerR + i * dr;
        d = sqrt(r*r + b2);
        phi = atan(r / a) + atan(r / b);

        p = 1.0;
        p = 1.0 / d;            // Sphere wave factor
        p *= r;                 // Jacobian
        p *= cos(phi) + 1.0;    // K(phi)
        p *= amplitudeOnPlate(r);

        arg = -k * (d - b) + phaseOnPlate(r);     // Phase
        amp.re += -p * sin(arg);
        amp.im += p * cos(arg);
    }

    amp *= intK;
    return amp;
}

double Fresnel::amplitudeOnPlate(double r)
{
    unsigned fn = fresnelNumber(r);
    if (amplitudePlate && fn < openedZones.count()) {
        return openedZones[fn] ? initialAmplitude : 0.0;
    } else {
        return initialAmplitude;
    }
}

double Fresnel::phaseOnPlate(double r)
{
    if (!phasePlate) {
        return 0.0;
    }

    double n = refractiveIndex;
    double k = waveNumber;
    double deltaPhase = n * k * getPhasePlateWidthOnRing(r);

    return deltaPhase;
}

double Fresnel::getPhasePlateWidthOnRing(double r)
{
    double n = refractiveIndex;
    double k = waveNumber;
    double b = observerDistance;
    double width = 0.0;

    if (phasePlateType == PhasePlate::SIMPLE) {
        unsigned zoneNumber = fresnelNumber(r);
        if (zoneNumber & 1) {
            width = M_PI / n / k;
        }
    }

    if (phasePlateType == PhasePlate::STAGING) {
        unsigned fn = fresnelNumber();
        unsigned zoneNumber = fresnelNumber(r);
        double dWidth = M_PI / n / k;

        width = (fn - zoneNumber + fn & 1 + 2) * dWidth;
    }

    if (phasePlateType == PhasePlate::LENS) {
        width = (3.0 / 2.0 * M_PI + k * (sqrt(b*b + r*r) - b)) / n / k;
    }

    return width;
}

double Fresnel::zoneOuterRadius(unsigned n)
{
    double b = this->observerDistance;
    double l = this->waveLength;
    return sqrt((n + 1)*(n + 1) * l*l / 4.0 + l * (n + 1) * b);
}

unsigned Fresnel::fresnelNumber(double r)
{
    if (r < 0) {
        r = this->holeRadius;
    }
    double b = this->observerDistance;
    double l = this->waveLength;
    return (unsigned int) (2.0 * (sqrt(b*b + r*r) - b) / l);
}

void Fresnel::spiral(DoubleVector &spiralX, DoubleVector &spiralY)
{
    spiralX.clear();
    spiralY.clear();
    spiralX.push_back(0.0);
    spiralY.push_back(0.0);

    unsigned fn = this->fresnelNumber();
    double R = this->holeRadius;
    double innerR = 0.0;
    double outerR = 0.0;
    double dr = 0.0;
    Complex sp;

    for (unsigned n = 0; n < fn + 1; ++n) {
        outerR = this->zoneOuterRadius(n);
        dr = (outerR - innerR) / accuracySpiral;

        for (unsigned i = 0; i < accuracySpiral; ++i) {
            if (innerR > R) {
                break;
            }

            sp += this->amplitude(innerR, innerR + dr);
            spiralX.push_back(sp.im);
            spiralY.push_back(sp.re);
            innerR += dr;
        }
    }
}
