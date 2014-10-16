#include "spiralgraph.h"

SpiralGraph::SpiralGraph (QWidget *parent) :
    QGLWidget (QGLFormat (QGL::SampleBuffers), parent)
{
    //setAutoFillBackground (false);
}


void SpiralGraph::paintEvent (QPaintEvent *event)
{
    QPainter painter;
    painter.begin (this);
    painter.setRenderHint (QPainter::Antialiasing);

    int width = size().width();
    int height = size().height();

    painter.setBrush (QBrush (QColor (0, 0, 0)));  // Background
    painter.drawRect (0, 0, width, height);

    painter.setPen (QPen (QBrush (QColor (128, 128, 128)), 1, Qt::DashDotDotLine));
    painter.drawLine (width/2, 0, width/2, height);
    painter.drawLine (0, height/2, width, height/2);

    painter.setPen (QPen (QBrush (QColor (255, 255, 255)), 2));
    painter.setBrush (QBrush (QColor (0, 0, 0, 0)));
    painter.drawEllipse (QPoint (width / 2, height / 2), 100, 100);

    //painter.translate (100, 100);
    painter.setFont (QFont ("Times", 25));
    //painter.drawText (QRect (0, 0, this->size().width(), this->size().height()), Qt::AlignCenter, QStringLiteral ("Qttest"));

    painter.end();
}
