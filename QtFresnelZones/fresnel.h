#ifndef FRESNEL_H
#define FRESNEL_H

#include "complex.h"

#include <vector>

class Fresnel
{
public:
    typedef std::vector<Complex> ComplexVector;
    double  initialAmplitude;
    double  waveLength;
    double  holeRadius;
    double  observerDistance;
    double  sourceDistance;
    double  accuracyPlot;
    double  accuracySpiral;
    double  waveNumber;
    bool    amplitudePlate;
    bool    phasePlate;

    Fresnel(double  initialAmplitude,
            double  waveLength,
            double  holeRadius,
            double  observerDistance,
            double  sourceDistance,
            double  accuracyPlot,
            double  accuracySpiral,
            bool    amplitudePlate,
            bool    phasePlate);

    double     intensity();
    Complex     amplitude(bool   parting   = true,
                          double innerR    = 0.0,
                          double outerR    = -1.0);
    double      amplitudeOnPlate(double r);
    double      zoneOuterRadius(unsigned n);
    unsigned    fresnelNumber(double r = -1.0);
    void        spiral(ComplexVector &spiral);
};

#endif // FRESNEL_H
