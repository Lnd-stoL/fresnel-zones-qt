#ifndef FONTSCALABLESPINBOX_H
#define FONTSCALABLESPINBOX_H

#include <QWidget>
#include <QDoubleSpinBox>

class FontScalableSpinBox : public QDoubleSpinBox
{
    Q_OBJECT

protected:
    bool _fontAdjusted = false;
    bool _integerPartOnly = false;

protected:
    virtual void resizeEvent (QResizeEvent* evt);
    virtual QString textFromValue (double) const;

public:
    void displayIntegerPartOnly();
    explicit FontScalableSpinBox (QWidget *parent = 0);
};

#endif // FONTSCALABLESPINBOX_H
