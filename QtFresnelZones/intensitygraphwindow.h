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
    bool readyToDrawGraphs;
    void updateGraph();


private slots:
    void button_Back_Pressed();

    void slider_xDistance_Changed  (int value);
    void slider_WaveLength_Changed (int value);
    void slider_HoleRadius_Changed (int value);

    void spin_xDistance_Changed  (int value);
    void spin_WaveLength_Changed (int value);
    void spin_HoleRadius_Changed (int value);


private:
    Ui::IntensityGraphWindow *ui;
};

#endif // INTENSITYGRAPHWINDOW_H
