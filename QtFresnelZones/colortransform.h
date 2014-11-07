#ifndef COLORTRANSFORM_H
#define COLORTRANSFORM_H

#include <QColor>


class ColorTransform
{
public:
    ColorTransform();
    static QColor getRGBfromLambda (unsigned lambda);
};


#endif // COLORTRANSFORM_H
