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

    Fresnel        *fresnel = nullptr;


public:
    explicit SpiralGraph (QWidget *parent = 0);

protected:

signals:

public slots:

protected:
    void paintEvent (QPaintEvent *event);
};

#endif // SPIRALGRAPH_H
