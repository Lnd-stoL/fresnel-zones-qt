#ifndef DRAWER_H
#define DRAWER_H

#include <QPainter>

class Drawer
{
private:
    Drawer ();
public:
    static void drawArrow (QPainter& painter, unsigned x0, unsigned y0, unsigned x1, unsigned y1, double k1 = 15.0, double k2 = 10.0);
};

#endif // DRAWER_H
