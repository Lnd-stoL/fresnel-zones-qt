#include "fontscalablepushbutton.h"
#include <QApplication>
#include <QDesktopWidget>
#include <stdlib.h>


void FontScalablePushButton::resizeEvent(QResizeEvent *evt)
{
    QPushButton::resizeEvent (evt);
    if (fontAdjusted)  return;

    QFont oldFont = this->font();
    int fontSize = 1;
    QRect cRect = this->contentsRect();

    double k1 = (double) QApplication::desktop()->screenGeometry().height() / 768.0;
    double k2 = (double) QApplication::desktop()->screenGeometry().width() / 1024.0;
    oldFont.setPixelSize (std::min (k1, k2) * 0.95 * this->fontMetrics().height());
    this->setFont(oldFont);

    fontAdjusted = true;
}


FontScalablePushButton::FontScalablePushButton(QWidget *parent) :
    QPushButton(parent),
    fontAdjusted(false)
{
}
