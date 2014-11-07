
#ifndef FONTSCALABLELABEL_H
#define FONTSCALABLELABEL_H

#include <QLabel>


class FontScalableLabel : public QLabel
{
    Q_OBJECT

protected:
    bool _fontAdjusted = false;

protected:
    virtual void resizeEvent (QResizeEvent* evt);


public:
    explicit FontScalableLabel (QWidget *parent = 0);
};

#endif // FONTSCALABLELABEL_H
