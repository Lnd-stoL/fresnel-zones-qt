#include "hidpiscaler.h"

#include <QDebug>
#include <QDesktopWidget>
#include <QApplication>


HiDpiScaler::HiDpiScaler()
{
}


QVector2D HiDpiScaler::scalingFactors()
{
    double dpiScaleWidth = (double) QApplication::desktop()->screenGeometry().height() / 768.0;
    double dpiScaleHeight = (double) QApplication::desktop()->screenGeometry().width() / 1024.0;
    return QVector2D (dpiScaleWidth, dpiScaleHeight);
}
