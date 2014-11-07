
#include "spiralgraph.h"
#include <math.h>
#include <QDebug>


SpiralGraph::SpiralGraph (QWidget *parent) :
    QGLWidget (QGLFormat (QGL::SampleBuffers), parent)
{
    //setAutoFillBackground (false);
}


void SpiralGraph::drawArrow (QPainter& painter, unsigned x0, unsigned y0, unsigned x1, unsigned y1)
{
    double tx = (double)x1 - (double)x0;
    double ty = (double)y1 - (double)y0;
    double length = sqrt (tx*tx + ty*ty);

    double ptx = -ty / 15.0;
    double pty = tx / 15.0;

    double anchor_x = (double)x1 - tx/10.0;
    double anchor_y = (double)y1 - ty/10.0;

    painter.drawLine (x0, y0, x1, y1);
    painter.drawLine (x1, y1, anchor_x + ptx, anchor_y + pty);
    painter.drawLine (x1, y1, anchor_x - ptx, anchor_y - pty);
}


void SpiralGraph::paintEvent (QPaintEvent *event)
{
    QPainter painter;
    painter.begin (this);
    painter.setRenderHint (QPainter::Antialiasing);

    unsigned width = size().width();
    unsigned height = size().height();

    painter.setBrush (QBrush (QColor (250, 250, 250)));  // Background
    painter.drawRect (0, 0, width, height);

    painter.setPen (QPen (QBrush (QColor (128, 128, 128)), 2));
    painter.drawLine (width/2, 0, width/2, height);
    painter.drawLine (0, height/2, width, height/2);

    painter.setPen (QPen (QBrush (QColor (255, 50, 50)), 3));

    double maxX = 0;
    double maxY = 0;
    for (int i = 0; i < spiralX.size(); ++i)
    {
        if (fabs (spiralX[i]) > maxX)  maxX = fabs (spiralX[i]);
        if (fabs (spiralY[i]) > maxY)  maxY = fabs (spiralY[i]);
    }

    unsigned squareSide = std::min (width, height);\
    unsigned dispX = width/2;
    unsigned dispY = height;

    int prevX = 0, prevY = 0;
    for (int i = 0; i < spiralX.size(); ++i)
    {
        int nextX = (spiralX[i] / maxX) * ((double)squareSide/2  - 30.0);
        int nextY = (spiralY[i] / maxY) * ((double)squareSide - 30.0);

        drawArrow (painter, prevX + dispX, dispY - prevY, nextX + dispX, dispY - nextY);

        prevX = nextX;
        prevY = nextY;
    }

    painter.setFont (QFont ("Times", 25));
    //painter.drawText (QRect (0, 0, this->size().width(), this->size().height()), Qt::AlignCenter, QStringLiteral ("Qttest"));

    painter.end();
}
