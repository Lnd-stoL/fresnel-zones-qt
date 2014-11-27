#ifndef SCHEMEGRAPH_H
#define SCHEMEGRAPH_H

#include "fresnel.h"
#include "drawer.h"

#include <QWidget>
#include <QGLWidget>

class SchemeGraph : public QGLWidget
{
    Q_OBJECT
public:
    QVector<double> plateX;
    QVector<double> plateY;
    QPointF         holeCenterPosition;
    QPointF         eyePosition;
    double          holeCenterXRelativePosition         = 0.2;     // Hole center position relative to graph width
    double          eyeCenterXRelativePosition          = 0.8;     // Eye position relative to graph width
    double          holeRelativeSize                    = 0.6;     // Hole size relative to graph height
    double          eyeRelativeSize                     = 0.1;     // Eye size relative to graph height
    int             platePenWidth                       = 3;
    int             wallPenWidth                        = 8;
    int             eyePenWidth                         = 1;
    int             axisPenWidth                        = 2;
    int             oneSideRayCount                     = 2;
    bool            animating                           = false;

    Fresnel        *fresnel = nullptr;

public:
    explicit SchemeGraph (QWidget *parent = 0);

    double   getScaling ();
    double   getStretch ();

    void     drawWall (QPainter& painter);
    void     drawPlate (QPainter& painter);
    void     drawEye (QPainter& painter);
    void     drawAxis (QPainter& painter);
    void     drawSourceRays (QPainter& painter);
    void     drawDiffractedRays (QPainter& painter);
    void     drawFresnelZoneRays (QPainter& painter);

    void     drawScheme (QPainter& painter);

signals:

public slots:

protected:
    void paintEvent (QPaintEvent *event);

};

#endif // SCHEMEGRAPH_H
