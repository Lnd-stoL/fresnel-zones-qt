#ifndef DRAWER_H
#define DRAWER_H

#include <QPainter>

class Drawer
{
private:
    Drawer ();
public:
    static void drawArrow (QPainter& painter, double x0, double y0, double x1, double y1, double k1 = 15.0, double k2 = 10.0);
};

#endif // DRAWER_H
