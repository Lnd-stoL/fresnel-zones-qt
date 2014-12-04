#ifndef AMPLITUDEPLATEWINDOW_H
#define AMPLITUDEPLATEWINDOW_H

#include <QMainWindow>
#include "fresnel.h"

#include <QCheckBox>
#include <QLabel>

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
    double _progressBarHigh;

    static const unsigned zoneCheckBoxesNum = 10;
    QCheckBox* _zoneCheckBoxes[zoneCheckBoxesNum];
    QLabel* _zoneLabels[zoneCheckBoxesNum];


protected:
    void _initCheckBoxes();
    void _setupSlots();

    void _updateFresnel();
    void _updateProgressBar();


private slots:
    void _update();

    void button_Back_Pressed();
    void button_OpenAll_Pressed();
    void button_CloseAll_Pressed();
    void button_OpenOdd_Pressed();
    void button_Tune_Pressed();

    void slider_WaveLength_Changed (int value);
    void spin_WaveLength_Changed (double value);


private:
    Ui::AmplitudePlateWindow *ui;
};

#endif // AMPLITUDEPLATEWINDOW_H
