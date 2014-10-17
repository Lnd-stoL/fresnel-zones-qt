#include "fresnel.h"

#include <cmath>

Fresnel::Fresnel(double initialAmplitude    = 100,
                 double waveLength          = 500e-6,
                 double holeRadius          = 0.01,
                 double observerDistance    = 0.5,
                 double sourceDistance      = 0.05,
                 double accuracyPlot        = 0.001,
                 double accuracySpiral      = 10,
                 bool   amplitudePlate      = false,
                 bool   phasePlate          = false) :
    initialAmplitude(initialAmplitude),     // E0
    waveLength(waveLength),                 // l
    holeRadius(holeRadius),                 // R
    observerDistance(observerDistance),     // b
    sourceDistance(sourceDistance),         // a
    accuracyPlot(accuracyPlot),             // dr in plot integral
    accuracySpiral(accuracySpiral),         // Number of spiral vectors in one zone
    waveNumber(2.0 * M_PI / waveLength),    // k
    amplitudePlate(amplitudePlate),
    phasePlate(phasePlate)
{

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
Complex Fresnel::amplitude(bool   parting,
                           double innerR,
                           double outerR)
{
    if (outerR < 0) {
        outerR = this->holeRadius;
    }

    Complex amp;
    unsigned n;
    double r, dr, d, arg, p, phi;
    double R = outerR - innerR;

    if (parting) {
        dr = this->accuracyPlot;
        n = R / dr;
    } else {
        dr = R;
        n = 1;
    }

    double l = this->waveLength;
    double a = this->sourceDistance;
    double k = this->waveNumber;
    double b = this->observerDistance;
    double b2 = b * b;
    double intK = M_PI / l * R / n;

    for (unsigned i = 0; i < n; ++i) {
        r = innerR + i * dr;
        d = sqrt(r*r + b2);
        phi = atan(r / a) + atan(r / b);

        p = 1.0 / d;            // Sphere wave factor
        p *= r;                 // Jacobian
        p *= cos(phi) + 1.0;    // K(phi)

        arg = -k * (d - b);     // Phase
        amp.re += -p * sin(arg);
        amp.im += p * cos(arg);

        amp *= amplitudeOnPlate(r);
    }

    amp *= intK;
    return amp;
}

double Fresnel::amplitudeOnPlate(double r)
{
    return this->initialAmplitude;
}

double Fresnel::zoneOuterRadius(unsigned n)
{
    double b = this->observerDistance;
    double l = this->waveLength;
    return sqrt((n + 1)*(n + 1) * l*l / 4 + l * (n + 1) * b);
}

unsigned Fresnel::fresnelNumber(double r)
{
    if (r < 0) {
        r = this->holeRadius;
    }
    double b = this->observerDistance;
    double l = this->waveLength;
    return (int) (2.0 * (-l * b*b + sqrt(b*b + r*r)) / l);
}

void Fresnel::spiral(ComplexVector &spiral)
{
    spiral.clear();
    spiral.push_back(Complex());

    unsigned fn = this->fresnelNumber();
    double R = this->holeRadius;
    double innerR = 0;
    double outerR = 0;
    double dr = 0;
    Complex sp;

    for (unsigned n = 0; n < fn; ++n) {
        outerR = this->zoneOuterRadius(n);
        dr = (outerR - innerR) / accuracySpiral;

        for (; (innerR < outerR) & (innerR < R); innerR += dr) {
            sp += this->amplitude(false, innerR, innerR + dr);
            spiral.push_back(sp);
        }

        innerR = outerR;
    }
}
