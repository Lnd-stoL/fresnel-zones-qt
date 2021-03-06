#include "drawer.h"


Drawer::Drawer()
{
}


void Drawer::drawArrow (QPainter& painter, double x0, double y0, double x1, double y1, double k1, double k2)
{
    double tx = (double)x1 - (double)x0;
    double ty = (double)y1 - (double)y0;
    double ptx = -ty / k1;
    double pty = tx / k1;

    double anchor_x = (double)x1 - tx/k2;
    double anchor_y = (double)y1 - ty/k2;

    painter.drawLine (x0, y0, x1, y1);
    painter.drawLine (x1, y1, anchor_x + ptx, anchor_y + pty);
    painter.drawLine (x1, y1, anchor_x - ptx, anchor_y - pty);
}
