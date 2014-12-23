#ifndef INTENSITYGRAPHWINDOW_H
#define INTENSITYGRAPHWINDOW_H

#include <QMainWindow>
#include "fresnel.h"
#include "qcustomplot.h"
#include <QPushButton>

using namespace std;


namespace Ui {
class IntensityGraphWindow;
}

class TitleWindow;


class IntensityGraphWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit IntensityGraphWindow (Fresnel *fresnel, TitleWindow *tw);
    ~IntensityGraphWindow();


private:
    TitleWindow *titleWindow;
    Fresnel *_fresnel = nullptr;
    bool _xDependenceMode = true;

    QTimer *_updateTimer = nullptr;

    const double _sliderScaling = 1000;

    void _update();
    void _initFresnelBasedSliders();

    void _updateZoneGraph();
    void _updateSpiralGraph();

    void _changeParameters (double xDistance, double holeRadius, double waveLength);
    void _changeParams_ZoneOpened (unsigned zoneNum);
    void _updateParamsSetButtons();
    void _updateParamsSetButton (QPushButton *button, unsigned zone);


private slots:
    void button_Back_Pressed();
    void button_Next_Pressed();

    void slider_xDistance_Changed  (int value);
    void slider_WaveLength_Changed (int value);
    void slider_HoleRadius_Changed (int value);

    void update_Needed();

    void spin_xDistance_Changed  (double value);
    void spin_WaveLength_Changed (double value);
    void spin_HoleRadius_Changed (double value);

    void radio_xDependence();
    void radio_holeDependence();

    void parametersSet1();
    void parametersSet2();
    void parametersSet3();
    void parametersSet4();
    void parametersSet5();
    void parametersSetDefault();


private:
    Ui::IntensityGraphWindow *ui;
};

#endif // INTENSITYGRAPHWINDOW_H
