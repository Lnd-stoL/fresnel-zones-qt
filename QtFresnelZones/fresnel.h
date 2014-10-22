#ifndef FRESNEL_H
#define FRESNEL_H

#include "complex.h"

#include <QVector>

class Fresnel
{
public:
    typedef QVector<Complex> ComplexVector;
    typedef QVector<double>  DoubleVector;
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

    Fresnel();
    Fresnel(double  initialAmplitude,
            double  waveLength,
            double  holeRadius,
            double  observerDistance,
            double  sourceDistance,
            double  accuracyPlot,
            double  accuracySpiral,
            bool    amplitudePlate,
            bool    phasePlate);

    void        setDefaults();
    double      intensity();
    Complex     amplitude(bool   parting   = true,
                          double innerR    = 0.0,
                          double outerR    = -1.0);
    double      amplitudeOnPlate(double r);
    double      zoneOuterRadius(unsigned n);
    unsigned    fresnelNumber(double r = -1.0);
    void        spiral(DoubleVector &spiralX, DoubleVector &doubleY);
};

#endif // FRESNEL_H
