
#include "zonesgraph.h"
#include <QPainter>
#include <stdio.h>

#include <QDebug>


ZonesGraph::ZonesGraph (QWidget *parent) :
    QWidget (parent),
    holeRadius (0)
{
}


void ZonesGraph::paintEvent (QPaintEvent *event)
{
    QPainter painter;
    painter.begin (this);
    painter.setRenderHint (QPainter::Antialiasing);

    int width = size().width();
    int height = size().height();
    double squareWidth = std::min ((height/2), (width/2));

    double maxRad = holeRadius;

    painter.setBrush (QBrush (backgroundColor));  // Background
    painter.drawEllipse (QPoint (width / 2, height / 2), squareWidth, squareWidth);

    painter.setPen (QPen (QBrush (QColor (128, 128, 128)), 1, Qt::DashDotDotLine));
    //painter.drawLine (width/2, 0, width/2, height);
    //painter.drawLine (0, height/2, width, height/2);

    painter.setPen (QPen (QBrush (QColor (255, 255, 255)), 3));
    painter.setBrush (QBrush (QColor (0, 0, 0, 0)));

    for (int i = 0; i < zones.size(); ++i)
        painter.drawEllipse (QPoint (width / 2, height / 2), squareWidth * zones[i] / maxRad, squareWidth * zones[i] / maxRad);

    //painter.translate (100, 100);
    painter.setFont (QFont ("Times", 25));
    //painter.drawText (QRect (0, 0, this->size().width(), this->size().height()), Qt::AlignCenter, QStringLiteral ("Qttest"));

    painter.end();
}
