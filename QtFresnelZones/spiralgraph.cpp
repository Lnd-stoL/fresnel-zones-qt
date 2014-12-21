
#include "spiralgraph.h"
#include <math.h>
#include <QDebug>

#include "drawer.h"
#include "hidpiscaler.h"
#include "colortransform.h"


SpiralGraph::SpiralGraph (QWidget *parent) :
    QGLWidget (QGLFormat (QGL::SampleBuffers), parent)
{
    //setAutoFillBackground (false);
}


void SpiralGraph::useFresnel (Fresnel *fresnel_)
{
    fresnel = fresnel_;
}\


void SpiralGraph::dontScale (double maxVal)
{
    _maxValue = maxVal;
}


void SpiralGraph::paintEvent (QPaintEvent *event)
{
    QVector2D dpiScaling = HiDpiScaler::scalingFactors();

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
        if (fabs (spiralX[i]*2) > maxVal)  maxVal = fabs (2*spiralX[i]);
        if (fabs (spiralY[i]) > maxVal)    maxVal = fabs (spiralY[i]);
    }
    if (_maxValue != 0)  maxVal = _maxValue;

    unsigned squareSide = std::min (width, height);
    unsigned squareSideY = squareSide;

    if (fresnel != nullptr) {
        if (fresnel->phasePlate) {
            squareSide = height * 0.99;
        }

        if (fresnel->amplitudePlate) {
            //squareSide = height * 0.9;
        }
    }
    unsigned dispX = width/2;
    unsigned dispY = height;

    if (fresnel->amplitudePlate)   dispY -= 50;

    painter.setPen (QPen (QBrush (QColor (158, 158, 158)), 2 * dpiScaling.y()));
    if (!fresnel->phasePlate) {
        double ty = dispY - spiralY[0] / maxVal * ((double)squareSide - 20.0);
        painter.drawLine (0, ty, width, ty);
    }
    painter.drawLine (width/2, 0, width/2, height);

    if (fresnel->phasePlate) {
        painter.setPen (QPen (QBrush (QColor (200, 58, 58)), 3 * dpiScaling.y()));
        double maximum = (_maxValue / maxVal) * ((double)squareSide - 20.0);
        painter.drawLine (width/2 - 10, dispY - maximum, width/2 + 10, dispY - maximum);
    }

    if (maxVal == 0) maxVal = 1;
    painter.setPen (QPen (QBrush (QColor (50, 50, 50)), 2 * dpiScaling.y()));
    int prevX = 0, prevY = 0;
    for (int i = 0; i < spiralX.size(); ++i)
    {
        int nextX = (spiralX[i]*2 / maxVal) * ((double)squareSide/2  - 20.0);
        int nextY = (spiralY[i]   / maxVal) * ((double)squareSide    - 20.0);

        Drawer::drawArrow (painter, prevX + dispX, dispY - prevY, nextX + dispX, dispY - nextY, 10, 5);

        prevX = nextX;
        prevY = nextY;
    }

    painter.setPen (QPen (QBrush (ColorTransform::getRGBfromLambda (fresnel->getWaveLength() * Fresnel::scale_to_nano_exp)),
                          4 * dpiScaling.y()));
    Drawer::drawArrow (painter, width/2, dispY, prevX + dispX, dispY - prevY, 80, 20);

    painter.end();
}
