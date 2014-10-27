#include "fontscalablespinbox.h"
#include <QDebug>
#include <QResizeEvent>
#include <QApplication>
#include <QDesktopWidget>
#include <stdlib.h>


void FontScalableSpinBox::resizeEvent(QResizeEvent *evt)
{
    QSpinBox::resizeEvent (evt);

    QFont oldFont = this->font();
    int fontSize = 1;
    QRect cRect = this->contentsRect();

    double k1 = (double) QApplication::desktop()->screenGeometry().height() / 1080.0;
    double k2 = (double) QApplication::desktop()->screenGeometry().width() / 1920.0;
    oldFont.setPixelSize (std::max ((k1*0.95), k2*1.15) * this->fontMetrics().height());
    this->setFont(oldFont);

    //this->setFont(oldFont);
}


FontScalableSpinBox::FontScalableSpinBox(QWidget *parent) :
    QSpinBox(parent)
{

}
