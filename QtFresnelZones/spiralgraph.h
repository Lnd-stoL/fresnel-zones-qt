#ifndef SPIRALGRAPH_H
#define SPIRALGRAPH_H

#include <drawer.h>

#include "fresnel.h"

#include <QWidget>
#include <QGLWidget>

class SpiralGraph : public QGLWidget
{
    Q_OBJECT

public:
    QVector<double> spiralX;
    QVector<double> spiralY;
    Fresnel         *fresnel = nullptr;
    double          _maxValue = 0;


public:
    explicit SpiralGraph (QWidget *parent = 0);
    void useFresnel (Fresnel *fresnel_);
    void dontScale (double maxVal);

protected:

signals:

public slots:

protected:
    void paintEvent (QPaintEvent *event);
};

#endif // SPIRALGRAPH_H
