#ifndef FONTSCALABLEPUSHBUTTON_H
#define FONTSCALABLEPUSHBUTTON_H

#include <QWidget>
#include <QPushButton>


class FontScalablePushButton : public QPushButton
{
    Q_OBJECT

protected:
    bool _fontAdjusted = false;

protected:
    virtual void resizeEvent (QResizeEvent* evt);

public:
    explicit FontScalablePushButton (QWidget *parent = 0);
};

#endif // FONTSCALABLEPUSHBUTTON_H
