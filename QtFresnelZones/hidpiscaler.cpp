#include "hidpiscaler.h"

#include <QDebug>
#include <QDesktopWidget>
#include <QApplication>
#include <QFontMetrics>


HiDpiScaler::HiDpiScaler()
{
}


QVector2D HiDpiScaler::scalingFactors()
{
    QFont font("arial", 16);
    QFontMetrics fm(font);

    double dpiScaleWidth = (double) 13.0 / fm.width("X") * QApplication::desktop()->screenGeometry().height() / 768.0;
    double dpiScaleHeight = (double) 23.0 / fm.height() * QApplication::desktop()->screenGeometry().width() / 1024.0;
    return QVector2D (dpiScaleWidth, dpiScaleHeight);
}
