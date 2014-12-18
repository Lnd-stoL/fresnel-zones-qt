#ifndef INTENSITYPLOT_H
#define INTENSITYPLOT_H

#include "qcustomplot.h"
#include "fresnel.h"

#include <functional>


class IntensityPlot : public QCustomPlot
{
    Q_OBJECT

protected:
    QVector<double> _plotX;
    QVector<double> _plotY;

    QCPItemLine *_line = nullptr;
    QCPItemLine *_backLine = nullptr;
    bool _xDependenceMode = true;

    bool _xDistance_ChangedSinceLastUpdate  = true;
    bool _holeRadius_ChangedSinceLastUpdate = true;
    bool _waveLength_ChangedSinceLastUpdate = true;

    double _xDistance_SinceLastUpdate  = 0;
    double _holeRadius_SinceLastUpdate = 0;
    double _waveLength_SinceLastUpdate = 0;

    static const int ZoneLinesMax = 1000;
    QCPItemLine *_zoneLines[ZoneLinesMax];
    unsigned _zoneLinesActive = 0;

    double _scaling = Fresnel::scale_to_milli_exp;

    void _switchToXDependence();
    void _switchToRDependence();
    void _updateXDependence (Fresnel *fresnel);
    void _updateRDependence (Fresnel *fresnel);
    void _clearPlotItems();
    void _updateGraphData (double highest, double step, double lowest,
                           Fresnel *fresnel, std::function<double(double)> calculator);


public:
    explicit IntensityPlot (QWidget *parent = 0);
    virtual ~IntensityPlot();

    void useMode (bool xDependence);
    void update (Fresnel *fresnel);
};

#endif // INTENSITYPLOT_H
