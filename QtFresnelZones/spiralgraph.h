#ifndef SPIRALGRAPH_H
#define SPIRALGRAPH_H

#include <QWidget>
#include <QGLWidget>

class SpiralGraph : public QGLWidget
{
    Q_OBJECT

public:
    explicit SpiralGraph(QWidget *parent = 0);

signals:

public slots:

protected:
    void paintEvent (QPaintEvent *event);
};

#endif // SPIRALGRAPH_H
