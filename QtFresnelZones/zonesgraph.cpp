
#include "zonesgraph.h"
#include <QPainter>
#include <stdio.h>


ZonesGraph::ZonesGraph(QWidget *parent) :
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
    int squareWidth = std::min ((height/2), (width/2));

    double maxRad = 0;
    for (int i = 0; i < zones.size(); ++i)
        if (zones[i] > maxRad) maxRad = zones[i];

    painter.setBrush (QBrush (backgroundColor));  // Background
    painter.drawEllipse (QPoint (width / 2, height / 2), squareWidth * holeRadius / maxRad, squareWidth * holeRadius / maxRad);

    painter.setPen (QPen (QBrush (QColor (128, 128, 128)), 1, Qt::DashDotDotLine));
    //painter.drawLine (width/2, 0, width/2, height);
    //painter.drawLine (0, height/2, width, height/2);

    painter.setPen (QPen (QBrush (QColor (255, 255, 255)), 3));
    painter.setBrush (QBrush (QColor (0, 0, 0, 0)));

    for (int i = 0; i < zones.size() - 1; ++i)
        painter.drawEllipse (QPoint (width / 2, height / 2), squareWidth * zones[i] / maxRad, squareWidth * zones[i] / maxRad);

    //painter.translate (100, 100);
    painter.setFont (QFont ("Times", 25));
    //painter.drawText (QRect (0, 0, this->size().width(), this->size().height()), Qt::AlignCenter, QStringLiteral ("Qttest"));

    painter.end();
}
