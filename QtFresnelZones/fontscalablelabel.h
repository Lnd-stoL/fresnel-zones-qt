#ifndef FONTSCALABLELABEL_H
#define FONTSCALABLELABEL_H

#include <QLabel>

class FontScalableLabel : public QLabel
{
    Q_OBJECT

protected:
    bool fontAdjusted;
    QString labelText;
    virtual void resizeEvent (QResizeEvent* evt);

public:
    explicit FontScalableLabel(QWidget *parent = 0);

signals:

public slots:
};

#endif // FONTSCALABLELABEL_H
