#include "fontscalablespinbox.h"
#include "hidpiscaler.h"

#include <QDebug>
#include <stdlib.h>


void FontScalableSpinBox::resizeEvent(QResizeEvent *evt)
{
    QDoubleSpinBox::resizeEvent (evt);
    if (_fontAdjusted)  return;

    QVector2D dpiScaling = HiDpiScaler::scalingFactors();
    auto mutableFont = this->font();
    mutableFont.setPixelSize (std::min (dpiScaling.x(), dpiScaling.y()) * 0.9 * this->fontMetrics().height());

    this->setFont (mutableFont);
    this->adjustSize();

    _fontAdjusted = true;
}


QString FontScalableSpinBox::textFromValue()
{
    return QString::number (this->value(), 'g', 2);
}


FontScalableSpinBox::FontScalableSpinBox (QWidget *parent) :
    QDoubleSpinBox (parent)
{
}
