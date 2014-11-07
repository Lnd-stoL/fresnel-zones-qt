#ifndef HIDPISCALER_H
#define HIDPISCALER_H

#include <QVector2D>

class HiDpiScaler
{
public:
    HiDpiScaler();

    static QVector2D scalingFactors();
};

#endif // HIDPISCALER_H
