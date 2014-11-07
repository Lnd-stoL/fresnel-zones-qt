#ifndef FONTSCALABLESPINBOX_H
#define FONTSCALABLESPINBOX_H

#include <QWidget>
#include <QSpinBox>

class FontScalableSpinBox : public QSpinBox
{
    Q_OBJECT

protected:
    bool _fontAdjusted = false;

protected:
    virtual void resizeEvent (QResizeEvent* evt);

public:
    explicit FontScalableSpinBox (QWidget *parent = 0);
};

#endif // FONTSCALABLESPINBOX_H
