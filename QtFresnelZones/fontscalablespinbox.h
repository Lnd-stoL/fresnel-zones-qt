#ifndef FONTSCALABLESPINBOX_H
#define FONTSCALABLESPINBOX_H

#include <QWidget>
#include <QDoubleSpinBox>

class FontScalableSpinBox : public QDoubleSpinBox
{
    Q_OBJECT

protected:
    bool _fontAdjusted = false;

protected:
    virtual void resizeEvent (QResizeEvent* evt);
    virtual QString textFromValue();

public:
    explicit FontScalableSpinBox (QWidget *parent = 0);
};

#endif // FONTSCALABLESPINBOX_H
