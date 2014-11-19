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

    static const int ZoneLinesMax = 200;
    QCPItemLine *_zoneLines[ZoneLinesMax];
    unsigned _zoneLinesActive = 0;

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
