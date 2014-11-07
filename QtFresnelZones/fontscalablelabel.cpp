
#include "fontscalablelabel.h"
#include "hidpiscaler.h"

#include <QDebug>
#include <QResizeEvent>
#include <stdlib.h>


void FontScalableLabel::resizeEvent (QResizeEvent *evt)
{
    QLabel::resizeEvent (evt);
    if (_fontAdjusted)  return;

    QVector2D dpiScaling = HiDpiScaler::scalingFactors();
    auto mutableFont = this->font();
    mutableFont.setPixelSize (std::min (dpiScaling.x(), dpiScaling.y()) * 0.9 * this->fontMetrics().height());

    this->setFont (mutableFont);
    this->adjustSize();

    _fontAdjusted = true;
}


FontScalableLabel::FontScalableLabel (QWidget *parent) :
    QLabel (parent)
{
}
