#ifndef FRESNEL_H
#define FRESNEL_H

#include "complex.h"

#include <QVector>

class Fresnel
{
    typedef QVector<Complex> ComplexVector;
    typedef QVector<double>  DoubleVector;
    typedef QVector<bool>    BoolVector;

    enum PhasePlate {
        SIMPLE,
        STAGING,
        LENS,
        FLAT_LENS,
    };

private:
    double      waveLength;
    double      waveNumber;
    double      initialAmplitude;
    double      holeRadius;
    double      observerDistance;
    double      sourceDistance;
    BoolVector  openedZones;

    void        updateAmplitudePlate(int oldFN);

public:
    static constexpr double nano_to_si_exp      = 10e-9;
    static constexpr double milli_to_si_exp     = 10e-3;

    //
    //---- 'scale' = milli -----
    //
    // to change scale change ONLY 'scale_to_si_exp'
    static constexpr double scale_to_si_exp     = milli_to_si_exp;                    // scale -> System International (meter)
    static constexpr double scale_to_nano_exp   = scale_to_si_exp / nano_to_si_exp;   // scale -> nano
    static constexpr double scale_to_milli_exp  = scale_to_si_exp / milli_to_si_exp;  // scale -> milli

    static constexpr double si_to_scale_exp     = 1.0 / scale_to_si_exp;
    static constexpr double nano_to_scale_exp   = nano_to_si_exp * si_to_scale_exp;   // nano -> scale
    static constexpr double milli_to_scale_exp  = milli_to_si_exp * si_to_scale_exp;  // milli -> scale

    // ALL constants are in 'scale'
    static constexpr double radius_min = 0.001;
    static constexpr double radius_max = 0.1;
    static constexpr double radius_def = 0.01;
    static constexpr double dist_min   = 0.1;
    static constexpr double dist_max   = 2;
    static constexpr double dist_def   = 0.5;
    static constexpr double wave_min   = 100 * nano_to_scale_exp;
    static constexpr double wave_max   = 1000 * nano_to_scale_exp;
    static constexpr double wave_def   = 500 * nano_to_scale_exp;

    double      accuracyPlot;
    double      accuracySpiral;
    double      refractiveIndex;
    PhasePlate  phasePlateType;
    bool        amplitudePlate;
    bool        phasePlate;

    Fresnel();

    void        setDefaults();
    double      intensity();
    Complex     amplitude(double innerR    = 0.0,
                          double outerR    = -1.0);
    double      amplitudeOnPlate(double r);
    double      phaseOnPlate(double r);
    double      zoneOuterRadius(unsigned n);
    unsigned    fresnelNumber(double r = -1.0);
    void        spiral(DoubleVector &spiralX, DoubleVector &doubleY);
    double      getWaveLength() const;
    void        setWaveLength(double value);
    double      getHoleRadius() const;
    void        setHoleRadius(double value);
    double      getObserverDistance() const;
    void        setObserverDistance(double value);
    bool        isZoneOpened(unsigned i);
    void        setZoneOpenness(unsigned i, bool isOpen);
    double      getPhasePlateWidthOnRing(double r);
};

#endif // FRESNEL_H
