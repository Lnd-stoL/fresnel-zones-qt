#ifndef FRESNEL_H
#define FRESNEL_H

#include "complex.h"

#include <QVector>

class Fresnel
{
public:
    typedef QVector<Complex> ComplexVector;
    typedef QVector<double>  DoubleVector;
    typedef QVector<bool>    BoolVector;

    enum PhasePlate {
        SIMPLE,         // Phase plate with PI phase shift on odd zones (0-indexed)
        STAGING,        // Pyramidal plate with PI fold phase shift on odd zones and 2*PI fold phase shift on even zones
        LENS,           // Ideal (smooth staging) phase plate with maximum phase on the whole hole with phase shifr from 0 to X usually greater than 2*PI
        FLAT_LENS,      // Ideal (smooth discontinous) phase plate with maximum phase on the whole hole with phase shift from 0 to 2*PI
    };

private:
    double      waveLength;             // l
    double      waveNumber;             // k
    double      initialAmplitude;       // E0
    double      holeRadius;             // R
    double      observerDistance;       // b
    double      sourceDistance;         // a
    double      currentFresnelNumber;   // fn
    BoolVector  openedZones;

    void        updateAmplitudePlate (int oldFN);

public:
    static constexpr double nano_to_si_exp      = 1e-9;
    static constexpr double milli_to_si_exp     = 1e-3;
    static constexpr double micro_to_si_exp     = 1e-6;

    //
    //-------------- 'scale' = milli -----------------
    // * To change scale change ONLY 'scale_to_si_exp'
    //
    static constexpr double scale_to_si_exp     = milli_to_si_exp;                    // scale -> System International (meter)
    static constexpr double scale_to_nano_exp   = scale_to_si_exp / nano_to_si_exp;   // scale -> nano
    static constexpr double scale_to_micro_exp  = scale_to_si_exp / micro_to_si_exp;   // scale -> nano
    static constexpr double scale_to_milli_exp  = scale_to_si_exp / milli_to_si_exp;  // scale -> milli

    static constexpr double si_to_scale_exp     = 1.0 / scale_to_si_exp;
    static constexpr double nano_to_scale_exp   = nano_to_si_exp * si_to_scale_exp;   // nano -> scale
    static constexpr double micro_to_scale_exp  = micro_to_si_exp * si_to_scale_exp;   // nano -> scale
    static constexpr double milli_to_scale_exp  = milli_to_si_exp * si_to_scale_exp;  // milli -> scale

    //
    //-------------------------------------- MODEL SCALING -----------------------------------------
    // * ALL variables, arguments and return values are defined in 'scale'
    // * To convert values MULTIPLY, NOT DIVIDE by appropriate exp defined above to avoid confusions
    //
    static constexpr double radius_min = 0.007;
    static constexpr double radius_max = 0.05;
    static constexpr double radius_def = 0.023;
    static constexpr double dist_min   = 0.2;
    static constexpr double dist_max   = 2;
    static constexpr double dist_def   = 0.55;
    static constexpr double wave_min   = 400 * nano_to_scale_exp;
    static constexpr double wave_max   = 650 * nano_to_scale_exp;
    static constexpr double wave_def   = 495 * nano_to_scale_exp;

    double      accuracyPlot;       // dr in amplitude integral
    double      accuracySpiral;     // Number of spiral vectors in one zone
    double      refractiveIndex;    // n (refractive index of phase plate)
    PhasePlate  phasePlateType;
    bool        amplitudePlate;     // Amplitude plate is on <=> amplitudePlate = true
    bool        phasePlate;         // Phase plate is on     <=> phasePlate = true

    //
    // Sets default parameters by calling setDefaults ()
    //
    Fresnel ();

    double      getWaveLength () const;
    void        setWaveLength (double value);
    double      getHoleRadius () const;
    void        setHoleRadius (double value);
    double      getObserverDistance () const;
    void        setObserverDistance (double value);

    //
    // Set default, GOOD parameters of the model
    //
    void        setDefaults ();

    //
    // Calculate intensity of the light at the central axis on observerDistance
    //
    double      intensity () const;

    //
    // Calculate complex amplitude of the light at the central axis on observerDistance:
    // - Of the whole hole if no arguments are passed
    // - Of the ring of the hole with innerR inner radius and outerR outer radius if arguments are passed
    //
    Complex     amplitude (double innerR = 0.0,
                           double outerR = -1.0) const;

    //
    // Get initial amplitude at the ring with radius = r of the hole:
    // - initialAmplitude if Fresnel zone of the ring is open or the amplitude plate is off (amplitudePlate = false)
    // - 0 if Fresnel zone of the ring is closed and the amplitude plate is on (amplitudePlate = true)
    //
    double      amplitudeOnPlate (double r) const;

    //
    // Get phase shift at the ring with radius = r of the hole:
    // - Calculated phase shift on the phase plate if the phase plate is on (phasePlate = true)
    // - 0 if the phase plate is off (phasePlate = false)
    //
    double      phaseOnPlate (double r) const;

    //
    // Get outer radius of the n-th Fresnel zone (0-indexed)
    //
    double      zoneOuterRadius (int n) const;

    //
    // Get Fresnel number (number of completely visible Fresnel zones):
    // - Current Fresnel number if no argument is passed
    // - Fresnel number for hole with radius = r if r is passed (not changing current model)
    //
    int         fresnelNumber (double r = -1.0) const;

    //
    // Calculate amplitude spiral plot points (spiralX[i], spiralY[i]) without resulting vector
    //
    void        spiral (DoubleVector &spiralX,
                        DoubleVector &spiralY) const;

    //
    // Check if i-th zone (0-indexed) is open
    //
    bool        isZoneOpened (int i) const;

    //
    // Set i-th zone (0-indexed) openness:
    // - Open if   isOpen = true
    // - Closed if isOpen = false
    //
    void        setZoneOpenness (int  i,
                                 bool isOpen);

    //
    // Use this to draw phase plate:
    // - Pass r as Y-coordinate [-holeRadius; +holeRadius]
    // - Retrive   X-coordinate [0, maximum plate width]
    //
    double      getPhasePlateWidthOnRing (double r) const;


    double      getObserverDistanceForZone (int d) const;
};

#endif // FRESNEL_H
