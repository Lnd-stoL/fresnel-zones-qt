#include "schemegraph.h"
#include "qvectormax.h"
#include "colortransform.h"
#include "hidpiscaler.h"

#include <QDebug>

SchemeGraph::SchemeGraph (QWidget *parent) :
    QGLWidget  (QGLFormat (QGL::SampleBuffers), parent)
{
}

void SchemeGraph::drawPhasePlateScheme (QPainter& painter)
{
    drawPlate (painter);
    drawAxis (painter);
    drawEye (painter);
    drawSourceRays (painter);
    //drawDiffractedRays (painter);
    drawFresnelZoneRays (painter);
    drawWall (painter);
}

void SchemeGraph::drawAmplitudePlateScheme(QPainter &painter)
{
    drawPlate (painter);
    drawWall (painter);
}

void SchemeGraph::drawMovingScheme (QPainter& painter)
{
    drawAxis (painter);
    drawEye (painter);
    drawSourceRays (painter);
    //drawDiffractedRays (painter);
    drawFresnelZoneRays (painter);
    drawWall (painter);
}

bool SchemeGraph::isMouseOnEye(QPoint cursor)
{
    double eyeSize = size ().height () * eyeRelativeSize;
    if (fabs(cursor.x () - eyePosition.x()) <= eyeSize &&
        fabs(cursor.y () - eyePosition.y()) <= eyeSize) {
        return true;
    } else {
        return false;
    }
}

void SchemeGraph::drawWall (QPainter &painter)
{
    double  width       = size ().width ();
    double  height      = size ().height ();
    double  holeRadius  = height * holeRelativeSize / 2.0;
    double  centerY     = holeCenterPosition.y ();
    double  edgeScaling = 2;
    QPointF holeTop       (holeCenterPosition.x(), centerY - (holeRadius + wallPenWidth / 2.0));
    QPointF holeBottom    (holeCenterPosition.x(), centerY + (holeRadius + wallPenWidth / 2.0));

    painter.setPen (QPen (QBrush (QColor (10, 10, 10)), wallPenWidth));

    painter.drawLine (QPointF (holeCenterPosition.x (), 0.0), holeTop);                           //   ||
    painter.drawLine (QPointF (holeTop.x () - edgeScaling * wallPenWidth, holeTop.y ()),          //   ||
                      QPointF (holeTop.x () + edgeScaling * wallPenWidth, holeTop.y ()));         //  ====

    painter.drawLine (QPointF (holeCenterPosition.x (), height), holeBottom);                     //  ====
    painter.drawLine (QPointF (holeBottom.x () - edgeScaling * wallPenWidth, holeBottom.y ()),    //   ||
                      QPointF (holeBottom.x () + edgeScaling * wallPenWidth, holeBottom.y ()));   //   ||
}

void SchemeGraph::drawAxis (QPainter &painter)
{
    double  width       = size ().width ();
    double  height      = size ().height ();
    double  centerY     = height / 2.0;

    QPointF holePosition = fresnel->phasePlate ?
                           QPointF (plateX[plateX.length () / 2] + 1,
                                    centerY)
                         : holeCenterPosition;

    painter.setPen (QPen (QBrush (QColor (160, 160, 160)), axisPenWidth));
    painter.drawLine (holePosition, eyePosition);
}

void SchemeGraph::drawEye (QPainter &painter)
{
    double  width           = size ().width ();
    double  height          = size ().height ();
    double  centerX         = eyePosition.x ();
    double  centerY         = eyePosition.y ();
    double  eyeSize         = height * eyeRelativeSize;
    double  eyeLidSize      = eyeSize * sqrt (5.0) / 2.0;
    double  orbSize         = eyeSize * 3.0 / 8.0;
    double  orbRadius       = eyeSize / 6.0;
    double  eyeCenterRadius = orbRadius / 2.0;
    double  eyeCenterSize   = orbSize / 2.0;
    QPointF lidTop            (centerX, centerY - eyeSize / 2.0);
    QPointF lidBottom         (centerX, centerY + eyeSize / 2.0);
    QPointF lidEnd            (centerX + eyeSize, centerY);
    QPointF orbPosition       (centerX + orbRadius, centerY);
    QPointF eyeCenterPosition (centerX + eyeCenterRadius, centerY);
    QColor  color             (80, 80, 80);

    painter.setPen (QPen (QBrush (QColor (255, 255, 255)), eyePenWidth * 2));
    painter.setBrush(QBrush (QColor (255, 255, 255)));
    painter.drawRect(lidTop.x(), lidTop.y(), eyeSize, eyeSize);

    painter.setPen (QPen (QBrush (color), eyePenWidth * 2));
    painter.drawLine (lidTop, lidEnd);
    painter.drawLine (lidBottom, lidEnd);

    painter.setPen (QPen (QBrush (color), eyePenWidth * 2));
    painter.setBrush (QBrush (QColor (250, 250, 250)));
    painter.drawEllipse (orbPosition, orbRadius, orbSize);
    painter.setBrush (QBrush (ColorTransform::getRGBfromLambda (fresnel->getWaveLength() * Fresnel::scale_to_nano_exp)));
    painter.drawEllipse (eyeCenterPosition, eyeCenterRadius, eyeCenterSize);
}

void SchemeGraph::drawSourceRays (QPainter &painter)
{
    double  width           = size ().width ();
    double  height          = size ().height ();
    double  holeRadius      = height * holeRelativeSize / 2.0;
    double  centerY         = holeCenterPosition.y ();
    QPointF holeTop           (holeCenterPosition.x (), centerY - (holeRadius + wallPenWidth / 2.0));
    QPointF holeBottom        (holeCenterPosition.x (), centerY + (holeRadius + wallPenWidth / 2.0));
    double  deltaY          = (holeBottom.y () - holeTop.y ()) / (oneSideRayCount * 2);
    double  y               = holeTop.y () + deltaY / 2.0;

    painter.setPen (QPen (QBrush (ColorTransform::getRGBfromLambda (fresnel->getWaveLength() * Fresnel::scale_to_nano_exp)),
                    axisPenWidth));

    for (double topY = y; topY > 0; topY -= deltaY) {
        Drawer::drawArrow (painter, 0.0, topY, holeCenterPosition.x () - 10, topY);
    }

    for (int i = -oneSideRayCount; i < oneSideRayCount; ++i) {
        Drawer::drawArrow (painter, 0.0, y, holeCenterPosition.x () - 10, y);
        y += deltaY;
    }
    y = holeBottom.y () - deltaY / 2.0;
    for (double bottomY = y; bottomY < height; bottomY += deltaY) {
        Drawer::drawArrow (painter, 0.0, bottomY, holeCenterPosition.x () - 10, bottomY);
    }
}

void SchemeGraph::drawDiffractedRays (QPainter &painter)
{
    double  width           = size ().width ();
    double  height          = size ().height ();
    double  holeRadius      = height * holeRelativeSize / 2.0;
    double  centerY         = holeCenterPosition.y ();
    QPointF holeTop           (holeCenterPosition.x (), centerY - (holeRadius + wallPenWidth / 2.0));
    QPointF holeBottom        (holeCenterPosition.x (), centerY + (holeRadius + wallPenWidth / 2.0));
    double  deltaY          = (holeBottom.y () - holeTop.y ()) / (oneSideRayCount * 2);
    double  x               = fresnel->phasePlate ? maximum (plateX) : holeCenterPosition.x ();
    double  y               = holeTop.y () + deltaY / 2.0;
    double  eyeDeltaY       = eyeRelativeSize * height / (oneSideRayCount * 2);
    double  eyeY            = eyePosition.y () - eyeRelativeSize * height / 2.0 + eyeDeltaY / 2.0;
    int     fn              = fresnel->fresnelNumber();

    for (int i = -oneSideRayCount; i < oneSideRayCount; ++i) {
        painter.setPen (QPen (QBrush (QColor (50, 50, 50)), axisPenWidth));

        QString text = "x";
        if (i != 0) {
            text += " + ";
            if (i > 1 || i < -1) {
                text += QString::number (i < 0 ? -i : i);
            }
            text += "λ/2";
        }
        painter.drawText (x + 15, y + (i > 0 ? 10 : -10), text);

        if (abs(i) <= fn) {
            painter.setPen (QPen (QBrush (ColorTransform::getRGBfromLambda (fresnel->getWaveLength() * Fresnel::scale_to_nano_exp)),
                            axisPenWidth));
        } else {
            painter.setPen (QPen (QBrush (QColor (100, 100, 100, 100)), axisPenWidth));
        }
        Drawer::drawArrow (painter, x + 10, y, eyePosition.x () - 15, eyeY, 120, 30);
        y    += deltaY;
        eyeY += eyeDeltaY;
    }
}

void SchemeGraph::drawFresnelZoneRays (QPainter &painter)
{
    double  width           = size ().width ();
    double  height          = size ().height ();
    double  holeRadius      = height * holeRelativeSize / 2.0;
    double  centerY         = holeCenterPosition.y ();
    QPointF holeTop           (holeCenterPosition.x (), centerY - (holeRadius + wallPenWidth / 2.0));
    QPointF holeBottom        (holeCenterPosition.x (), centerY + (holeRadius + wallPenWidth / 2.0));
    double  deltaY          = (holeBottom.y () - holeTop.y ()) / (oneSideRayCount * 2);
    double  x               = fresnel->phasePlate ? maximum (plateX) : holeCenterPosition.x ();
    double  y               = holeTop.y () + deltaY / 2.0;
    int     fn              = fresnel->fresnelNumber ();
    double  scaling         = holeRadius / fresnel->getHoleRadius ();
    int     showingZonesCount = fn;

    if (schemeType == SchemeType::MovingScheme) {
        showingZonesCount = 0;
        while (centerY + fresnel->zoneOuterRadius(showingZonesCount++) * scaling < height);
    }
    double  eyeDeltaY       = eyeRelativeSize * height / (showingZonesCount * 2);
    double  eyeY            = eyePosition.y ();
    double  zoneOuterEdges[showingZonesCount + 1];
    zoneOuterEdges[0] = centerY;
    for (int i = 1; i < showingZonesCount + 1; ++i) {
        zoneOuterEdges[i] = centerY - fresnel->zoneOuterRadius (i - 1) * scaling;
    }

    QFont font = QFont ("Arial");
    QVector2D dpiScaling = HiDpiScaler::scalingFactors ();
    font.setPixelSize (std::min (dpiScaling.x(), dpiScaling.y()) * 1.3 * this->fontMetrics().height());
    font.setBold (true);
    painter.setFont (font);

    painter.setPen (QPen (QBrush (QColor (150, 150, 150)), axisPenWidth));
    painter.drawLine (holeTop, holeBottom);

    for (int i = showingZonesCount; i >= 0; --i) {
        if (abs(i) <= fn) {
            painter.setPen (QPen (QBrush (ColorTransform::getRGBfromLambda (fresnel->getWaveLength() * Fresnel::scale_to_nano_exp)),
                            axisPenWidth));
        } else {
            painter.setPen (QPen (QBrush (QColor (100, 100, 100, 100)), axisPenWidth));
        }

        Drawer::drawArrow(painter, x + 15, zoneOuterEdges[i], eyePosition.x () - 15, eyeY - i * eyeDeltaY, 220, 50);
        Drawer::drawArrow(painter, x + 15, height - zoneOuterEdges[i], eyePosition.x () - 15, eyeY + i * eyeDeltaY, 220, 50);

        if (i < 3) {
            QString text;
            if (i == 0) {
                text = "Ход луча: х";
            } else {
                text = "x";
            }
            if (i > 0) {
                text += " + ";
                if (i > 1) {
                    text += QString::number (i);
                }
                text += "λ/2";
            }
            painter.setPen (QPen (QBrush (QColor (50, 50, 50)), axisPenWidth));
            painter.drawText (x + 15, zoneOuterEdges[i] - 5, text);
            if (i != 0) {
                painter.drawText (x + 15, height - (zoneOuterEdges[i] + 5), text);
            }
        }

        painter.setPen (QPen (QBrush (QColor (50, 50, 50)), axisPenWidth));
        painter.drawLine (holeCenterPosition.x () - 10, zoneOuterEdges[i], holeCenterPosition.x () + 10, zoneOuterEdges[i]);
        painter.drawLine (holeCenterPosition.x () - 10, height - zoneOuterEdges[i], holeCenterPosition.x () + 10, height - zoneOuterEdges[i]);
    }
}

double SchemeGraph::getScaling ()
{
    return holeRelativeSize * size ().height () / fresnel->getHoleRadius () / 2.0;
}

double SchemeGraph::getStretch ()
{
    double maxX     = maximum (plateX);
    double maxY     = maximum (plateY);
    double k        = 5.0;
    if (fresnel->phasePlateType == Fresnel::PhasePlate::STAGING) {
        k = 3.0;
    }
    return maxY / k / maxX;
}

void SchemeGraph::drawPlate (QPainter& painter)
{
    if (!fresnel) {
        return;
    }

    double width    = size ().width ();
    double height   = size ().height ();
    double scaling  = getScaling ();
    double x        = 0.0;
    double radius   = fresnel->getHoleRadius();
    double step     = radius / 1000;
    double centerX  = holeCenterPosition.x ();
    double centerY  = holeCenterPosition.y ();

    if (schemeType == SchemeType::PhasePlateScheme) {
        plateX.clear ();
        plateY.clear ();

        plateX.push_back (0);
        plateY.push_back (radius * scaling);
        plateX.push_back (0);
        plateY.push_back (-radius * scaling);

        for (double y = -radius; y <= radius; y += step) {
            x = fresnel->getPhasePlateWidthOnRing (y);
            plateX.push_back (x * scaling);
            plateY.push_back (y * scaling);
        }
        plateX.push_back (0);
        plateY.push_back (radius * scaling);

        double stretch = getStretch ();

        painter.setPen (QPen (QBrush (QColor (60, 60, 178)), platePenWidth));

        for (int i = 0; i < plateX.length(); ++i) {
            plateX[i] = centerX + plateX[i] * stretch;
            plateY[i] = centerY + plateY[i];
        }

        for (int i = 0; i < plateX.length() - 1; ++i) {
            painter.drawLine (plateX[i], plateY[i], plateX[i + 1], plateY[i + 1]);
        }
    }

    if (schemeType == SchemeType::AmplitudePlateScheme) {
        int fn = fresnel->fresnelNumber();
        double r1, r2;

        for (int i = 0; i < fn; ++i) {
            r1 = scaling * (i == 0 ? 0 : fresnel->zoneOuterRadius(i - 1));

            if (i > 0) {
                painter.setPen (QPen (QBrush (QColor (150, 150, 150)), axisPenWidth));
                painter.drawLine (centerX - 10, centerY + r1, centerX + 10, centerY + r1);
                painter.drawLine (centerX - 10, centerY - r1, centerX + 10, centerY - r1);
            }

            if (!fresnel->isZoneOpened(i)) {
                r1 += wallPenWidth / 2;
                r2 = scaling * fresnel->zoneOuterRadius(i) - wallPenWidth / 2;
                painter.setPen (QPen (QBrush (QColor (60, 60, 60)), wallPenWidth));
                painter.drawLine (centerX, centerY + r1, centerX, centerY + r2);
                painter.drawLine (centerX, centerY - r1, centerX, centerY - r2);
            }
        }
    }
}

void SchemeGraph::paintEvent (QPaintEvent *event)
{
    if (fresnel == nullptr) {
        return;
    }
    QPainter painter;
    double height = size ().height ();
    double width  = size ().width ();

    painter.begin (this);
    painter.setRenderHint (QPainter::Antialiasing);

    painter.setBrush (QBrush (QColor (255, 255, 255)));  // Background
    painter.drawRect (0, 0, width, height);

    switch (schemeType) {
    case SchemeType::MovingScheme:
        holeCenterXRelativePosition = 0.04;
        drawMovingScheme (painter);
        break;

    case SchemeType::PhasePlateScheme:
        drawPhasePlateScheme (painter);
        break;

    case SchemeType::AmplitudePlateScheme:
        holeRelativeSize = 0.8;
        holeCenterXRelativePosition = 0.5;
        drawAmplitudePlateScheme (painter);
        break;
    }

    painter.end ();
}

void SchemeGraph::mousePressEvent(QMouseEvent *event)
{
    if (schemeType == SchemeType::MovingScheme) {
        cursorOld = event->pos ();
        if (isMouseOnEye(cursorOld)) {
            isMousePressed = true;
        }
    }
}

void SchemeGraph::mouseReleaseEvent(QMouseEvent *event)
{
    if (isMousePressed) {
        emit fresnelChanged();
    }
    isMousePressed = false;
}

void SchemeGraph::mouseMoveEvent(QMouseEvent *event)
{
    double width  = size ().width ();
    double height = size ().height ();

    if (isMousePressed &&
        (eyePosition.x () +  event->pos().x () - cursorOld.x () > holeCenterPosition.x () + 40.0) &&
         eyePosition.x () +  event->pos().x () - cursorOld.x () < width - 40.0) {

        double  eyeSize = height * eyeRelativeSize;
        eyePosition.setX (eyePosition.x () +  event->pos().x () - cursorOld.x ());
        fresnel->setObserverDistance (Fresnel::dist_min +
                                      (eyePosition.x () - holeCenterXRelativePosition * width) /
                                      (width - holeCenterXRelativePosition * width - eyeSize) *
                                      (Fresnel::dist_max - Fresnel::dist_min));
        cursorOld = event->pos ();
        this->repaint ();
    }
}

void SchemeGraph::resizeEvent(QResizeEvent *event)
{
    double width  = size ().width ();
    double height = size ().height ();

    holeCenterPosition = QPointF (width * holeCenterXRelativePosition, height / 2.0);
    if (schemeType == SchemeType::MovingScheme) {
        double eyeSize = height * eyeRelativeSize;
        eyePosition = QPointF ((fresnel->getObserverDistance() - Fresnel::dist_min) /
                               (Fresnel::dist_max - Fresnel::dist_min) *
                               (width - holeCenterXRelativePosition * width - eyeSize) +
                               holeCenterXRelativePosition * width,

                               height / 2.0);
    } else {
        eyePosition        = QPointF (width * eyeCenterXRelativePosition, height / 2.0);
    }
}
