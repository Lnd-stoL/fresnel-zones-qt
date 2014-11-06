#include "fontscalablespinbox.h"
#include "hidpiscaler.h"

#include <QDebug>
#include <stdlib.h>


void FontScalableSpinBox::resizeEvent(QResizeEvent *evt)
{
    QSpinBox::resizeEvent (evt);
    if (_fontAdjusted)  return;

    QVector2D dpiScaling = HiDpiScaler::scalingFactors();
    auto mutableFont = this->font();
    mutableFont.setPixelSize (std::min (dpiScaling.x(), dpiScaling.y()) * 0.9 * this->fontMetrics().height());

    this->setFont (mutableFont);
    this->adjustSize();

    _fontAdjusted = true;
}


FontScalableSpinBox::FontScalableSpinBox (QWidget *parent) :
    QSpinBox (parent)
{
}
