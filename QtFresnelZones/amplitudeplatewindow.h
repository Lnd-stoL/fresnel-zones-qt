#ifndef AMPLITUDEPLATEWINDOW_H
#define AMPLITUDEPLATEWINDOW_H

#include <QMainWindow>

namespace Ui {
class AmplitudePlateWindow;
}

class AmplitudePlateWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AmplitudePlateWindow(QWidget *parent = 0);
    ~AmplitudePlateWindow();

private slots:
    void button_Back_Pressed();

private:
    Ui::AmplitudePlateWindow *ui;
};

#endif // AMPLITUDEPLATEWINDOW_H
