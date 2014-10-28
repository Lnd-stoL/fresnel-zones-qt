#ifndef FONTSCALABLEPUSHBUTTON_H
#define FONTSCALABLEPUSHBUTTON_H

#include <QWidget>
#include <QPushButton>


class FontScalablePushButton : public QPushButton
{
    Q_OBJECT

protected:
    bool fontAdjusted;
    QString labelText;
    virtual void resizeEvent (QResizeEvent* evt);

public:
    explicit FontScalablePushButton(QWidget *parent = 0);

signals:

public slots:

};

#endif // FONTSCALABLEPUSHBUTTON_H
