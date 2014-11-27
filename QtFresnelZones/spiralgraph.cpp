
#include "spiralgraph.h"
#include <math.h>
#include <QDebug>
#include "drawer.h"


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

    unsigned width = size().width();
    unsigned height = size().height();

    painter.setBrush (QBrush (QColor (250, 250, 250)));  // Background
    painter.drawRect (0, 0, width, height);

    double maxVal = 0;
    for (int i = 0; i < spiralX.size(); ++i)
    {
        if (fabs (spiralX[i]) > maxVal)  maxVal = fabs (spiralX[i]);
        if (fabs (spiralY[i]) > maxVal)  maxVal = fabs (spiralY[i]);
    }

    unsigned squareSide = std::min (width, height);;

    if (fresnel != nullptr) {
        if (fresnel->phasePlate || fresnel->amplitudePlate) {
            squareSide = height;
        }
    }
    unsigned dispX = width/2;
    unsigned dispY = height;

    painter.setPen (QPen (QBrush (QColor (128, 128, 128)), 2));
    if (spiralY.length() < 6)
        painter.drawLine (0, height/2, width, height/2);
    else {
        double ty = dispY - spiralY[5] / maxVal * ((double)squareSide - 20.0);
        painter.drawLine (0, ty, width, ty);
    }
    painter.drawLine (width/2, 0, width/2, height);

    painter.setPen (QPen (QBrush (QColor (255, 50, 50)), 3));
    int prevX = 0, prevY = 0;
    for (int i = 0; i < spiralX.size(); ++i)
    {
        int nextX = (spiralX[i]*2 / maxVal) * ((double)squareSide/2  - 20.0);
        int nextY = (spiralY[i] / maxVal) * ((double)squareSide    - 20.0);

        Drawer::drawArrow (painter, prevX + dispX, dispY - prevY, nextX + dispX, dispY - nextY);

        prevX = nextX;
        prevY = nextY;
    }

    painter.setPen (QPen (QBrush (QColor (30, 30, 255)), 4));
    Drawer::drawArrow (painter, width/2, height, prevX + dispX, dispY - prevY, 80, 20);

    painter.end();
}
