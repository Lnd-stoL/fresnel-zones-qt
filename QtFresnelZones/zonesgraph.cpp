
#include "zonesgraph.h"
#include <QPainter>
#include <stdio.h>
#include <QDebug>

#include "colortransform.h"
#include "hidpiscaler.h"



void ZonesGraph::_drawAmplitudePlate (QPainter &painter, double squareWidth, double maxRad,
                                      QBrush &colorBrush, QBrush &blackBrush)
{
    int width = size().width();
    int height = size().height();

    QVector2D dpiScaling = HiDpiScaler::scalingFactors();

    QPen zonesPen (QBrush (QColor (255, 255, 255)), 2 * dpiScaling.y());
    QFont font = QFont ("Arial", 14 * dpiScaling.y());
    //font.setBold (true);
    painter.setFont (font);

    if (_fresnel->isZoneOpened (_fresnel->fresnelNumber()))  painter.setBrush (colorBrush);
    else  painter.setBrush (blackBrush);

    float wholeRad = squareWidth  * 0.57 * (_fresnel->getHoleRadius() / maxRad);
    painter.drawEllipse (QPoint (width / 2, height / 2), (int)wholeRad, (int)wholeRad);

    QPen dashedPen (QBrush (QColor (110, 110, 110)), 2 * dpiScaling.y(), Qt::PenStyle::DashLine);
    painter.setPen (dashedPen);

    unsigned zonesNumber   = _fresnel->fresnelNumber() - 1;
    if (!_fresnel->amplitudePlate)
    {
        double savedHoleRadius = _fresnel->getHoleRadius();
        _fresnel->setHoleRadius ((width/2) * maxRad / squareWidth);
        zonesNumber   = _fresnel->fresnelNumber();
        _fresnel->setHoleRadius (savedHoleRadius);
    }
    else  painter.setPen (zonesPen);

    unsigned fresnelNumber = _fresnel->fresnelNumber();
    double   prevRadius    = 0.0;

    for (unsigned n = zonesNumber + 1; n != 0; --n)
    {
        double nextZone = _fresnel->zoneOuterRadius (n - 1);
        double radius   = squareWidth * nextZone / maxRad;

        if (_fresnel->isZoneOpened (n - 1))
        {
            if (n >= fresnelNumber + 1)  painter.setBrush (QBrush (QColor (0, 0, 0, 0)));
            else                         painter.setBrush (colorBrush);
        }
        else  painter.setBrush (blackBrush);

        painter.drawEllipse (QPoint (width / 2, height / 2), (int)radius, (int)radius);
        if (n == fresnelNumber + 1)  painter.setPen (zonesPen);
    }

    prevRadius = 0;
    for (unsigned n = 0; n <= fresnelNumber && n < 5 || n == 1; ++n)
    {
        double nextZone = _fresnel->zoneOuterRadius (n);
        double radius   = squareWidth * nextZone / maxRad;
        painter.setPen (QPen (QBrush (QColor (50, 50, 50)), 3 * dpiScaling.y()));
        painter.drawText (QPointF (width / 2 + radius - (radius - prevRadius) / 2.0 - 5 * dpiScaling.x(), height / 2),
                          QString::number (n + 1));
        prevRadius      = radius;
    }
}


void ZonesGraph::_drawPhasePlate (QPainter &painter, double squareWidth, double maxRad,
                                  QBrush &colorBrush, QBrush &blackBrush)
{
    int width = size().width();
    int height = size().height();

    //painter.setPen (QPen (QColor (255, 255, 255), 5 * dpiScaling.y()));
    float wholeRad = squareWidth * (_fresnel->getHoleRadius() / maxRad);
    //painter.drawEllipse (QPoint (width / 2, height / 2), wholeRad, wholeRad);

    double minIntensity = 1e+8, maxIntensity = 0;
    for (double n = 0; n < wholeRad; n += 1)
    {
        double holeRad = (n / squareWidth) * maxRad;
        double colorIntensity = _fresnel->getPhasePlateWidthOnRing (holeRad);

        if (colorIntensity < minIntensity)  minIntensity = colorIntensity;
        if (colorIntensity > maxIntensity)  maxIntensity = colorIntensity;
    }

    painter.setBrush (QBrush (QColor (0, 0, 0, 0)));
    for (double n = 0; n < wholeRad; n += 0.2)
    {
        double holeRad = (n / squareWidth) * maxRad;
        double colorIntensity = _fresnel->getPhasePlateWidthOnRing (holeRad);
        colorIntensity = (1 - colorIntensity / maxIntensity) * 0.75 + 0.25;

        QColor clr = QColor (0, 150, 255);
        painter.setPen (QColor (clr.red() * colorIntensity, clr.green() * colorIntensity, clr.blue() * colorIntensity));
        painter.drawEllipse (QPoint (width / 2, height / 2), (int)n, (int)n);
    }
}


ZonesGraph::ZonesGraph (QWidget *parent) :
    QWidget (parent)
{
}


void ZonesGraph::update (Fresnel *fresnel)
{
    _fresnel = fresnel;
    //emit QPaintEvent (QRect());
    //wa_widget_update (this);
    this->repaint();
}


void ZonesGraph::paintEvent (QPaintEvent *event)
{
    //if (_fresnel == nullptr)  return;

    QVector2D dpiScaling = HiDpiScaler::scalingFactors();

    QPainter painter;
    painter.begin (this);
    painter.setRenderHint (QPainter::Antialiasing);

    int width = size().width();
    int height = size().height();
    double squareWidth = std::min ((height/2), (width/2)) - 5;

    double maxRad = _fresnel->getHoleRadius();
    maxRad = Fresnel::radius_max;
    QBrush colorBrush (ColorTransform::getRGBfromLambda (_fresnel->getWaveLength() * Fresnel::scale_to_nano_exp));
    QBrush blackBrush (QColor (0, 0, 0));

    painter.setBrush (blackBrush);
    painter.drawRect (0, 0, width, height);

    if (_fresnel->phasePlate)  _drawPhasePlate (painter, squareWidth, maxRad, colorBrush, blackBrush);
    else                       _drawAmplitudePlate (painter, squareWidth, maxRad, colorBrush, blackBrush);

    painter.end();
}
