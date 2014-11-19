#ifndef PHASEPLATEWINDOW_H
#define PHASEPLATEWINDOW_H

#include <QWidget>

namespace Ui {
class PhasePlateWindow;
}

class PhasePlateWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PhasePlateWindow(QWidget *parent = 0);
    ~PhasePlateWindow();

private:
    Ui::PhasePlateWindow *ui;
};

#endif // PHASEPLATEWINDOW_H
