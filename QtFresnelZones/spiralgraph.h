#ifndef SPIRALGRAPH_H
#define SPIRALGRAPH_H

#include <QWidget>
#include <QGLWidget>

class SpiralGraph : public QGLWidget
{
    Q_OBJECT

public:
    QVector<double> spiralX;
    QVector<double> spiralY;


public:
    explicit SpiralGraph (QWidget *parent = 0);

protected:
    void drawArrow (QPainter& painter, unsigned x0, unsigned y0, unsigned x1, unsigned y1);

signals:

public slots:

protected:
    void paintEvent (QPaintEvent *event);
};

#endif // SPIRALGRAPH_H
