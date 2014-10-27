#include "fontscalablelabel.h"
#include <QDebug>
#include <QResizeEvent>
#include <QApplication>
#include <QScreen>
#include <QDesktopWidget>


void FontScalableLabel::resizeEvent(QResizeEvent *evt)
{
    QLabel::resizeEvent (evt);
    if (fontAdjusted)  return;
    //labelText = text();
    //setText ("T");
    //adjustSize ();

    QFont oldFont = this->font();
    int fontSize = 1;
    QRect cRect = this->rect();


    int oldFontSize = oldFont.pixelSize();
    for (int i = 0; i < oldFont.pixelSize() + 5; ++i)
    {
        oldFont.setPixelSize(fontSize);
        QRect r = QFontMetrics(oldFont).boundingRect(labelText);
        qDebug() << "testing " << fontSize << " | " << r.width() << " " << cRect.width() << " | " << r.height() << " " << cRect.height();
        if (r.height() < cRect.height() && r.width() < cRect.width() - 10) fontSize++;
        else break;
    }

    //qDebug() << (0.71) * this->fontMetrics ().height ();
    double k1 = (double) QApplication::desktop ()->screenGeometry().height() / 1080.0;
    double k2 = (double) QApplication::desktop ()->screenGeometry().width() / 1920.0;
    oldFont.setPixelSize ((k1 < k2? k1 : k2) * this->fontMetrics ().height ());
    this->setFont(oldFont);
    //this->setText (labelText);
    fontAdjusted = true;

    qDebug() << cRect.width() << " " << cRect.height();
    qDebug() << "resize " << evt->size().width() << " " << evt->size().height() << " from " << evt->oldSize().width() << " " << evt->oldSize().height();
}


FontScalableLabel::FontScalableLabel(QWidget *parent) :
    QLabel(parent),
    fontAdjusted(false),
    labelText ("testttesttteststestest")
{
    //setText ("T");
}
