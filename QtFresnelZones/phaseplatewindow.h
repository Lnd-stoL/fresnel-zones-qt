#ifndef PHASEPLATEWINDOW_H
#define PHASEPLATEWINDOW_H

#include <QMainWindow>
#include "fresnel.h"


namespace Ui {
class PhasePlateWindow;
}


class PhasePlateWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PhasePlateWindow (Fresnel *fresnel);
    ~PhasePlateWindow();

protected:
    Fresnel *_fresnel;

private slots:
    void _update();
    void _updateSpiralGraph();
    void button_Back_Pressed();
    void button_SimplePlate_Pressed();
    void button_StagingPlate_Pressed();
    void button_LensPlate_Pressed();
    void button_FlatLensPlate_Pressed();

private:
    Ui::PhasePlateWindow *ui;
};

#endif // PHASEPLATEWINDOW_H
