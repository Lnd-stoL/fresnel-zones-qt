#ifndef ZONESGRAPH_H
#define ZONESGRAPH_H

#include <QWidget>
#include "fresnel.h"

class ZonesGraph : public QWidget
{
    Q_OBJECT

protected:
    Fresnel *_fresnel = nullptr;


protected:
    void _drawAmplitudePlate (QPainter &painter, QPen &dashedPen, double squareWidth, double maxRad,
                              QBrush &colorBrush, QBrush &blackBrush);

    void _drawPhasePlate (QPainter &painter, QPen &dashedPen, double squareWidth, double maxRad,
                          QBrush &colorBrush, QBrush &blackBrush);


public:
    explicit ZonesGraph (QWidget *parent = 0);
    void update (Fresnel *fresnel);


signals:

public slots:

protected:
    void paintEvent (QPaintEvent *event);
};

#endif // ZONESGRAPH_H
