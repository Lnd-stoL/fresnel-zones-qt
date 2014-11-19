#include "intensityplot.h"
#include "hidpiscaler.h"


IntensityPlot::IntensityPlot (QWidget *parent) :
    QCustomPlot (parent)
{
    this->addGraph();

    QVector2D dpiScaling = HiDpiScaler::scalingFactors();
    QFont labelFont ("Arial", std::min (dpiScaling.x(), dpiScaling.y()) * 14);
    QPen axisPen(QBrush (QColor (0, 0, 0)), 2);
    xAxis->setLabelFont (labelFont);
    yAxis->setLabelFont (labelFont);
    xAxis->setTickLabelFont (labelFont);
    xAxis->setBasePen (axisPen);
    yAxis->setBasePen (axisPen);
    yAxis->setTickLabels (false);

    this->graph(0)->setPen (QPen (QBrush (QColor (60, 60, 255)), 3));
    yAxis->setLabel ("Интенсивность");

    _switchToXDependence();
}


IntensityPlot::~IntensityPlot()
{
    this->clearItems();
}


void IntensityPlot::useMode (bool xDependence)
{
    if (xDependence == _xDependenceMode)  return;

    _xDependenceMode = xDependence;
    if (xDependence)   _switchToXDependence();
    else               _switchToRDependence();
}


void IntensityPlot::_switchToXDependence()
{
    xAxis->setLabel ("Расстояние (мкм)");

    this->clearItems();

    _backLine = new QCPItemLine (this);
    QPen backLinePen (QColor (255, 100, 100, 100));
    backLinePen.setWidth(5);
    _backLine->setPen (backLinePen);
    this->addItem (_backLine);

    _line = new QCPItemLine (this);
    QPen linePen (Qt::red);
    linePen.setWidth(5);
    _line->setPen (linePen);
    this->addItem (_line);
}


void IntensityPlot::_switchToRDependence()
{
    xAxis->setLabel ("Размер отверстия (мкм)");
    this->clearItems();
}


void IntensityPlot::_updateGraphData (double highest, double step, double lowest,
                                      Fresnel *fresnel, std::function<double(double)> calculator)
{
    unsigned valuesCount = (highest - lowest) / step;
    _plotX.resize (valuesCount);
    _plotY.resize (valuesCount);

    unsigned i = 0;
    double maxY = 0;
    for (double x = lowest; i < valuesCount; x += step, ++i)
    {
        _plotX[i] = x * _scaling;
        _plotY[i] = calculator (x);

        if (_plotY[i] > maxY)  maxY = _plotY[i];
    }

    this->graph(0)->setData (_plotX, _plotY);

    xAxis->setRange (lowest * _scaling, highest * _scaling);
    yAxis->setRange (0, maxY * 1.05);
}


void IntensityPlot::_updateXDependence (Fresnel *fresnel)
{
    double lowest  = Fresnel::dist_min;
    double highest = Fresnel::dist_max;
    double step = (double) Fresnel::nano_to_scale_exp * 500;

    double oldDistance = fresnel->getObserverDistance();    // this is to save the current observer distance
    _updateGraphData (highest, step, lowest, fresnel, [fresnel](double x) {
        fresnel->setObserverDistance (x);
        return fresnel->intensity();
    });
    fresnel->setObserverDistance (oldDistance);

    _backLine->start->setCoords (fresnel->getObserverDistance() * _scaling, 0);
    _backLine->end->setCoords (fresnel->getObserverDistance() * _scaling, yAxis->range ().size ());

    _line->start->setCoords (fresnel->getObserverDistance() * _scaling, 0);
    _line->end->setCoords (fresnel->getObserverDistance() * _scaling, fresnel->intensity());
}


void IntensityPlot::_updateRDependence (Fresnel *fresnel)
{
    double lowest  = Fresnel::radius_min;
    double highest = Fresnel::radius_max;
    double step = (double) Fresnel::nano_to_scale_exp * 100;

    double oldHoleRadius = fresnel->getHoleRadius();
    _updateGraphData (highest, step, lowest, fresnel, [fresnel](double x) {
        fresnel->setHoleRadius (x);
        return fresnel->intensity();
    });
    fresnel->setHoleRadius (oldHoleRadius);


    this->clearItems();

    QPen zoneLinePen (QColor (100, 100, 100));
    zoneLinePen.setWidth (1);

    double nextZone = 0;
    for (int n = 0; nextZone < highest && n < ZoneLinesMax; ++n)
    {
        _zoneLines[n] = new QCPItemLine (this);
        _zoneLines[n]->setPen (zoneLinePen);

        double nextZone = fresnel->zoneOuterRadius (n);
        nextZone *= _scaling;
        _zoneLines[n]->start->setCoords (nextZone, 0);
        _zoneLines[n]->end->setCoords (nextZone, yAxis->range().size());
        this->addItem (_zoneLines[n]);
    }

     _backLine = new QCPItemLine (this);
    QPen backLinePen (QColor (255, 100, 100, 100));
    backLinePen.setWidth(5);
    _backLine->setPen (backLinePen);
    this->addItem (_backLine);

    _line = new QCPItemLine (this);
    QPen linePen (Qt::red);
    linePen.setWidth(5);
    _line->setPen (linePen);
    this->addItem (_line);

    _backLine->start->setCoords (fresnel->getHoleRadius() * _scaling, 0);
    _backLine->end->setCoords (fresnel->getHoleRadius() * _scaling, yAxis->range().size());

    _line->start->setCoords (fresnel->getHoleRadius() * _scaling, 0);
    _line->end->setCoords (fresnel->getHoleRadius() * _scaling, fresnel->intensity());
}


void IntensityPlot::update (Fresnel *fresnel)
{
    if (_xDependenceMode)  _updateXDependence (fresnel);
    else                   _updateRDependence (fresnel);

    this->replot();
}
