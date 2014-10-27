#include "fontscalablespinbox.h"
#include <QDebug>
#include <QResizeEvent>
#include <QApplication>
#include <QDesktopWidget>
#include <stdlib.h>


void FontScalableSpinBox::resizeEvent(QResizeEvent *evt)
{
    QSpinBox::resizeEvent (evt);
    if (fontAdjusted)  return;

    QFont oldFont = this->font();
    int fontSize = 1;
    QRect cRect = this->contentsRect();

    double k1 = (double) QApplication::desktop()->screenGeometry().height() / 768.0;
    double k2 = (double) QApplication::desktop()->screenGeometry().width() / 1024.0;
    oldFont.setPixelSize (std::min (k1, k2) * 0.95 * this->fontMetrics().height());
    this->setFont(oldFont);

    fontAdjusted = true;

    //this->setFont(oldFont);
}


FontScalableSpinBox::FontScalableSpinBox(QWidget *parent) :
    QSpinBox(parent),
    fontAdjusted(false)
{

}
