#ifndef FONTSCALABLERADIOBUTTON_H
#define FONTSCALABLERADIOBUTTON_H

#include <QWidget>
#include <QRadioButton>


class FontScalableRadioButton : public QRadioButton
{
    Q_OBJECT

protected:
    virtual void resizeEvent (QResizeEvent* evt);

public:
    explicit FontScalableRadioButton(QWidget *parent = 0);

signals:

public slots:

};

#endif // FONTSCALABLERADIOBUTTON_H
