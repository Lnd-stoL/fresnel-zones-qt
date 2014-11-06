#ifndef TITLEWINDOW_H
#define TITLEWINDOW_H

#include <QMainWindow>
#include "fresnel.h"

namespace Ui {
class TitleWindow;
}


class TitleWindow : public QMainWindow
{
    Q_OBJECT

private:
    Fresnel fresnel;

public:
    explicit TitleWindow (QWidget *parent = 0);
    ~TitleWindow();

private slots:
    void openIntensityGraphWindow();
    void openAmplitudePlateWindow();
    void exitApplication();

private:
    Ui::TitleWindow *ui;
};

#endif // TITLEWINDOW_H
