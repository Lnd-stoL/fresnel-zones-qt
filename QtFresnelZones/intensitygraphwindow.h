#ifndef INTENSITYGRAPHWINDOW_H
#define INTENSITYGRAPHWINDOW_H

#include <QMainWindow>

namespace Ui {
class IntensityGraphWindow;
}

class IntensityGraphWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit IntensityGraphWindow(QWidget *parent = 0);
    ~IntensityGraphWindow();

private:
    Ui::IntensityGraphWindow *ui;
};

#endif // INTENSITYGRAPHWINDOW_H
