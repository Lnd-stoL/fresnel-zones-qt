#ifndef INTENSITYGRAPHWINDOW_H
#define INTENSITYGRAPHWINDOW_H

#include <QMainWindow>
#include "fresnel.h"
#include "qcustomplot.h"

namespace Ui {
class IntensityGraphWindow;
}


class IntensityGraphWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit IntensityGraphWindow (Fresnel *fresnel);
    ~IntensityGraphWindow();


private:
    Fresnel* _fresnel = nullptr;
    bool _xDependenceMode = true;
    void _update();

    void _update_FresnelModel();
    void _updateZoneGraph();
    void _updateSpiralGraph();


private slots:
    void button_Back_Pressed();

    void slider_xDistance_Changed  (int value);
    void slider_WaveLength_Changed (int value);
    void slider_HoleRadius_Changed (int value);

    void update_Needed();

    void spin_xDistance_Changed  (int value);
    void spin_WaveLength_Changed (int value);
    void spin_HoleRadius_Changed (int value);

    void radio_xDependence();
    void radio_holeDependence();


private:
    Ui::IntensityGraphWindow *ui;
};

#endif // INTENSITYGRAPHWINDOW_H
