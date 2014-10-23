#ifndef ZONESGRAPH_H
#define ZONESGRAPH_H

#include <QWidget>

class ZonesGraph : public QWidget
{
    Q_OBJECT

public:
    QVector<double> zones;
    QColor backgroundColor;

public:
    explicit ZonesGraph(QWidget *parent = 0);

signals:

public slots:

protected:
    void paintEvent (QPaintEvent *event);
};

#endif // ZONESGRAPH_H
