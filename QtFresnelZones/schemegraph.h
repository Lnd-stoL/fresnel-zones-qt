#ifndef SCHEMEGRAPH_H
#define SCHEMEGRAPH_H

#include "fresnel.h"
#include "drawer.h"
#include "introwindow.h"
#include "zonesgraph.h"

#include <QWidget>
//#include <QGLWidget>
#include <QMouseEvent>
#include <QResizeEvent>

class SchemeGraph : public QWidget
{
    Q_OBJECT
public:
    enum SchemeType { MovingScheme, PhasePlateScheme, AmplitudePlateScheme };

    QVector<double> plateX;
    QVector<double> plateY;
    QPointF         holeCenterPosition;
    QPointF         eyePosition;
    double          holeCenterXRelativePosition         = 0.2;     // Hole center position relative to graph width
    double          eyeCenterXRelativePosition          = 0.8;     // Eye position relative to graph width
    double          holeRelativeSize                    = 0.57;     // Hole size relative to graph height
    double          eyeRelativeSize                     = 0.1;     // Eye size relative to graph height
    int             platePenWidth                       = 4;
    int             wallPenWidth                        = 8;
    int             eyePenWidth                         = 2;
    int             axisPenWidth                        = 3;
    int             oneSideRayCount                     = 2;
    bool            animating                           = false;
    SchemeType      schemeType                          = SchemeType::PhasePlateScheme;

    bool            isMousePressed                      = false;
    QPoint          cursorOld;
    ZonesGraph     *zonesGraph = nullptr;

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

    void     drawPhasePlateScheme (QPainter& painter);
    void     drawAmplitudePlateScheme (QPainter& painter);
    void     drawMovingScheme (QPainter& painter);

signals:
    void     fresnelChanged();

public slots:

private:
    bool isMouseOnEye(QPoint cursor);

protected:
    void paintEvent (QPaintEvent *event);
    void mousePressEvent (QMouseEvent *event);
    void mouseReleaseEvent (QMouseEvent *event);
    void mouseMoveEvent (QMouseEvent *event);
    void resizeEvent (QResizeEvent *event);

};

#endif // SCHEMEGRAPH_H
