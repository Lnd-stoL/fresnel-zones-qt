#include "fontscalableradiobutton.h"


FontScalableRadioButton::FontScalableRadioButton(QWidget *parent) :
    QRadioButton(parent)
{
}


void FontScalableRadioButton::resizeEvent(QResizeEvent *evt)
{
    QRadioButton::resizeEvent(evt);

    QFont oldFont = this->font();
    int fontSize = 1;
    QRect cRect = this->contentsRect();

    int oldFontSize = oldFont.pixelSize();
    while (fontSize < oldFontSize + 5)
    {
        oldFont.setPixelSize(fontSize);
        QRect r = QFontMetrics(oldFont).boundingRect(this->text());
        if (r.height() <= cRect.height() && r.width() <= cRect.width()) fontSize++;
        else break;
    }

    //this->setFont(oldFont);
}
