#include "fontscalablespinbox.h"
#include "hidpiscaler.h"

#include <QDebug>
#include <stdlib.h>
#include <stdio.h>


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


QString FontScalableSpinBox::textFromValue (double) const
{
    char valueStr[1000] = "";
    sprintf (valueStr, "%#3.2f", this->value());
    if (_integerPartOnly)  sprintf (valueStr, "%d", (int) this->value());

    /*
    unsigned maxNumbers = 3;

    if (strchr (valueStr, ',') == 0 || strchr (valueStr, ',') == valueStr + strlen (valueStr) - 1)
    {
        if (strlen (valueStr) >= maxNumbers)  valueStr[maxNumbers] = 0;
        else
        {
            char tmp[1000] = "";
            for (unsigned i = 0; i < maxNumbers - strlen (valueStr); ++i)  tmp[i] = '0';
            tmp[maxNumbers - strlen (valueStr)] = 0;
            strcpy (tmp + maxNumbers - strlen (valueStr), valueStr);
            strcpy (valueStr, tmp);
        }
    }

    else
    {
        unsigned numCounted = 0;
        for (unsigned i = 0; valueStr[i]; ++i)
        {
            if (numCounted >= 3)
            {
                valueStr[i] = 0;
                break;
            }

            if (valueStr[i] >= '0' && valueStr[i] <= '9' || valueStr[i] == '.' || valueStr[i] == ',')
                numCounted++;
        }
    }
*/
    return QString (valueStr);
}


void FontScalableSpinBox::displayIntegerPartOnly()
{
    _integerPartOnly = true;
}


FontScalableSpinBox::FontScalableSpinBox (QWidget *parent) :
    QDoubleSpinBox (parent)
{
}
