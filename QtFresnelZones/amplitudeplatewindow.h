#ifndef AMPLITUDEPLATEWINDOW_H
#define AMPLITUDEPLATEWINDOW_H

#include <QMainWindow>
#include "fresnel.h"


namespace Ui {
class AmplitudePlateWindow;
}


class AmplitudePlateWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AmplitudePlateWindow (Fresnel *fresnel);
    ~AmplitudePlateWindow();

protected:
    Fresnel *_fresnel;

private slots:
    void _update();
    void button_Back_Pressed();

private:
    Ui::AmplitudePlateWindow *ui;
};

#endif // AMPLITUDEPLATEWINDOW_H
