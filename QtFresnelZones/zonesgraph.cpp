
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
    painter.setBrush (QBrush (ColorTransform::getRGBfromLambda (_fresnel->getWaveLength() * Fresnel::scale_to_nano_exp)));
    painter.drawEllipse (QPoint (width / 2, height / 2), squareWidth, squareWidth);

    painter.setPen (QPen (QBrush (QColor (255, 255, 255)), 3));
    painter.setBrush (QBrush (QColor (0, 0, 0, 0)));

    unsigned fresnelNumber = _fresnel->fresnelNumber();
    for (int n = fresnelNumber-1; n >= 0; --n)
    {
        double nextZone = _fresnel->zoneOuterRadius (n);
        painter.drawEllipse (QPoint (width / 2, height / 2), squareWidth * nextZone / maxRad, squareWidth * nextZone / maxRad);
    }

    painter.end();
}
