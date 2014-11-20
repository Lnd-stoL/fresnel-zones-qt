
#include "zonesgraph.h"
#include <QPainter>
#include <stdio.h>
#include "colortransform.h"

#include <QDebug>


ZonesGraph::ZonesGraph (QWidget *parent) :
    QWidget (parent)
{
}


void ZonesGraph::update (Fresnel *fresnel)
{
    _fresnel = fresnel;
    this->repaint();
}


void ZonesGraph::paintEvent (QPaintEvent *event)
{
    if (_fresnel == nullptr)  return;

    QPainter painter;
    painter.begin (this);
    painter.setRenderHint (QPainter::Antialiasing);

    int width = size().width();
    int height = size().height();
    double squareWidth = std::min ((height/2), (width/2));

    double maxRad = _fresnel->getHoleRadius();
    QBrush colorBrush (ColorTransform::getRGBfromLambda (_fresnel->getWaveLength() * Fresnel::scale_to_nano_exp));
    QBrush blackBrush (QColor (0, 0, 0));

    if (_fresnel->isZoneOpened (_fresnel->fresnelNumber()))  painter.setBrush (colorBrush);
    else  painter.setBrush (blackBrush);

    painter.drawEllipse (QPoint (width / 2, height / 2), squareWidth, squareWidth);

    painter.setPen (QPen (QBrush (QColor (255, 255, 255)), 3));

    QFont font = QFont ("Arial", 14);
    font.setBold (true);
    painter.setFont (font);

    unsigned fresnelNumber = _fresnel->fresnelNumber();
    double   prevRadius    = 0.0;
    for (int n = fresnelNumber-1; n >= 0; --n)
    {
        double nextZone = _fresnel->zoneOuterRadius (n);
        double radius   = squareWidth * nextZone / maxRad;

        if (_fresnel->isZoneOpened (n))  painter.setBrush (colorBrush);
        else  painter.setBrush (blackBrush);

        painter.drawEllipse (QPoint (width / 2, height / 2), radius, radius);
    }

    for (int n = 0; n < fresnelNumber; ++n)
    {
        double nextZone = _fresnel->zoneOuterRadius (n);
        double radius   = squareWidth * nextZone / maxRad;
        painter.setPen (QPen (QBrush (QColor (40, 40, 40)), 3));
        painter.drawText (QPointF (width / 2 + radius - (radius - prevRadius) / 2.0 - 5, height / 2), QString::number (n));
        prevRadius      = radius;
    }

    painter.end();
}
