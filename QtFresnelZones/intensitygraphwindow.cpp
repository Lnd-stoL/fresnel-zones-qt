
#include "intensitygraphwindow.h"
#include "fresnel.h"
#include "ui_intensitygraphwindow.h"
#include "qvectormax.h"
#include "titlewindow.h"

#include <QDebug>
#include <QTimer>


IntensityGraphWindow::IntensityGraphWindow (Fresnel *fresnel, TitleWindow *tw) :
    QMainWindow (0),
    ui (new Ui::IntensityGraphWindow),
    titleWindow (tw),
    _fresnel (fresnel)
{
    ui->setupUi (this);

    connect (ui->pushButton_Back, SIGNAL(clicked()), this, SLOT(button_Back_Pressed()));
    connect (ui->pushButton_Next, SIGNAL(clicked()), this, SLOT(button_Next_Pressed()));
    connect (ui->radioButton_xDependance, SIGNAL(clicked()), this, SLOT(radio_xDependence()));
    connect (ui->radioButton_holeDependance, SIGNAL(clicked()), this, SLOT(radio_holeDependence()));

    connect (ui->slider_xDistance,  SIGNAL(valueChanged(int)), this, SLOT(slider_xDistance_Changed(int)));
    connect (ui->slider_HoleRadius, SIGNAL(valueChanged(int)), this, SLOT(slider_HoleRadius_Changed(int)));
    connect (ui->slider_WaveLength, SIGNAL(valueChanged(int)), this, SLOT(slider_WaveLength_Changed(int)));

    connect (ui->spin_xDistance,  SIGNAL(valueChanged(double)), this, SLOT(spin_xDistance_Changed(double)));
    connect (ui->spin_HoleRadius, SIGNAL(valueChanged(double)), this, SLOT(spin_HoleRadius_Changed(double)));
    connect (ui->spin_WaveLength, SIGNAL(valueChanged(double)), this, SLOT(spin_WaveLength_Changed(double)));

    // Signals for graph update
    connect (ui->spin_xDistance,  SIGNAL(editingFinished()), this, SLOT(update_Needed()));
    connect (ui->spin_HoleRadius, SIGNAL(editingFinished()), this, SLOT(update_Needed()));
    connect (ui->spin_WaveLength, SIGNAL(editingFinished()), this, SLOT(update_Needed()));

    connect (ui->slider_HoleRadius, SIGNAL(sliderReleased()), this, SLOT(update_Needed()));
    connect (ui->slider_xDistance,  SIGNAL(sliderReleased()), this, SLOT(update_Needed()));
    connect (ui->slider_WaveLength, SIGNAL(sliderReleased()), this, SLOT(update_Needed()));

    connect (ui->pushButton_params1, SIGNAL(clicked()), this, SLOT(parametersSet1()));
    connect (ui->pushButton_params2, SIGNAL(clicked()), this, SLOT(parametersSet2()));
    connect (ui->pushButton_params3, SIGNAL(clicked()), this, SLOT(parametersSet3()));
    connect (ui->pushButton_params4, SIGNAL(clicked()), this, SLOT(parametersSet4()));
    connect (ui->pushButton_params5, SIGNAL(clicked()), this, SLOT(parametersSet5()));
    connect (ui->pushButton_paramsDefault, SIGNAL(clicked()), this, SLOT(parametersSetDefault()));

    _fresnel->setDefaults();
    _fresnel->amplitudePlate = false;
    _fresnel->phasePlate     = false;

    ui->spin_WaveLength->displayIntegerPartOnly();
    ui->widget_spiralGraph->useFresnel (_fresnel);

    _initFresnelBasedSliders();
    _update();
}


IntensityGraphWindow::~IntensityGraphWindow()
{
    delete ui;
}


void IntensityGraphWindow::_initFresnelBasedSliders()
{
    double minWaveLength = Fresnel::wave_min * Fresnel::scale_to_nano_exp;
    double maxWaveLength = Fresnel::wave_max * Fresnel::scale_to_nano_exp;
    double defaultWaveLength = Fresnel::wave_def * Fresnel::scale_to_nano_exp;

    double minHoleRadius = Fresnel::radius_min  * Fresnel::scale_to_milli_exp;
    double maxHoleRadius = Fresnel::radius_max  * Fresnel::scale_to_milli_exp;
    double defaultHoleRadius = Fresnel::radius_def  * Fresnel::scale_to_milli_exp;

    double minxDistance = Fresnel::dist_min * Fresnel::scale_to_si_exp;
    double maxxDistance = Fresnel::dist_max * Fresnel::scale_to_si_exp;
    double defaultxDistance = Fresnel::dist_def *Fresnel::scale_to_si_exp;

    ui->slider_HoleRadius->setRange (minHoleRadius * _sliderScaling, maxHoleRadius * _sliderScaling);
    ui->slider_HoleRadius->setValue (defaultHoleRadius * _sliderScaling);
    ui->spin_HoleRadius->setValue (defaultHoleRadius);
    ui->spin_HoleRadius->setRange (minHoleRadius, maxHoleRadius);

    ui->slider_WaveLength->setRange (minWaveLength, maxWaveLength);
    ui->slider_WaveLength->setValue (defaultWaveLength);
    ui->spin_WaveLength->setRange (minWaveLength, maxWaveLength);
    ui->spin_WaveLength->setValue (defaultWaveLength);

    ui->slider_xDistance->setRange (minxDistance * _sliderScaling, maxxDistance * _sliderScaling);
    ui->slider_xDistance->setValue (defaultxDistance * _sliderScaling);
    ui->spin_xDistance->setRange (minxDistance, maxxDistance);
    ui->spin_xDistance->setValue (defaultxDistance);
}


void IntensityGraphWindow::_updateZoneGraph()
{
    ui->widget_Zones->update (_fresnel);
}


void IntensityGraphWindow::_updateSpiralGraph()
{
    _fresnel->spiral (ui->widget_spiralGraph->spiralX, ui->widget_spiralGraph->spiralY);
    ui->widget_spiralGraph->repaint();
}


void IntensityGraphWindow::_changeParameters (double xDistance, double holeRadius, double waveLength)
{
    double scaledWaveLength = waveLength * Fresnel::scale_to_nano_exp;
    double scaledHoleRadius = holeRadius * Fresnel::scale_to_milli_exp;
    double scaledxDistance  = xDistance * Fresnel::scale_to_si_exp;

    ui->spin_HoleRadius->setValue (scaledHoleRadius);
    ui->spin_WaveLength->setValue (scaledWaveLength);
    ui->spin_xDistance->setValue  (scaledxDistance);

    _fresnel->setObserverDistance (xDistance);
    _fresnel->setWaveLength (waveLength);
    _fresnel->setHoleRadius (holeRadius);

    _update();
}


void IntensityGraphWindow::_update()
{
    ui->widget_Graph->useMode (_xDependenceMode);
    ui->widget_Graph->update (_fresnel);

    _updateSpiralGraph();
    _updateZoneGraph();
    _updateParamsSetButtons();
}

//----------------------------------------------------------------------------------------------------------------------

void IntensityGraphWindow::button_Back_Pressed()
{
    this->close();
}


void IntensityGraphWindow::button_Next_Pressed()
{
    this->close();
    titleWindow->openAmplitudePlateWindow();
}


void IntensityGraphWindow::slider_xDistance_Changed (int value)
{
    double spinVal = ((double) value) / _sliderScaling;
    ui->spin_xDistance->setValue (spinVal);
}


void IntensityGraphWindow::slider_WaveLength_Changed (int value)
{
    double val = (double) value;
    ui->spin_WaveLength->setValue (val);
    _fresnel->setWaveLength (Fresnel::nano_to_scale_exp * val);
}


void IntensityGraphWindow::slider_HoleRadius_Changed (int value)
{
    double val = (double) value / _sliderScaling;
    ui->spin_HoleRadius->setValue (val);
    _fresnel->setHoleRadius (Fresnel::milli_to_scale_exp * val);

    if (!_xDependenceMode)
    {
        if (_updateTimer == nullptr)
        {
            _updateTimer = new QTimer (this);
            connect (_updateTimer, SIGNAL(timeout()), this, SLOT(update_Needed()));
            _updateTimer->start (50);
        }
    }
}


void IntensityGraphWindow::update_Needed()
{
    _update();

    if (_updateTimer != nullptr)
    {
        _updateTimer->stop();
        delete _updateTimer;
        _updateTimer = nullptr;
    }
}


void IntensityGraphWindow::spin_xDistance_Changed (double value)
{
    _fresnel->setObserverDistance (Fresnel::si_to_scale_exp * value);
    //qDebug() << Fresnel::si_to_scale_exp * value;

    if (_xDependenceMode)
    {
        if (_updateTimer == nullptr)
        {
            _updateTimer = new QTimer (this);
            connect (_updateTimer, SIGNAL(timeout()), this, SLOT(update_Needed()));
            _updateTimer->start (50);
        }
    }

    ui->slider_xDistance->setValue (value * _sliderScaling);
}


void IntensityGraphWindow::spin_WaveLength_Changed (double value)
{
    ui->slider_WaveLength->setValue (value);
}

void IntensityGraphWindow::spin_HoleRadius_Changed (double value)
{
    ui->slider_HoleRadius->setValue (value * _sliderScaling);
}


void IntensityGraphWindow::radio_xDependence()
{
    if (_xDependenceMode == false)
    {
        _xDependenceMode = true;
        this->_update();
    }

    auto f = ui->label_xMode->font();
    f.setUnderline (true);
    f.setBold (true);
    ui->label_xMode->setFont (f);

    f = ui->label_hMode->font();
    f.setUnderline (false);
    f.setBold (false);
    ui->label_hMode->setFont (f);
}


void IntensityGraphWindow::radio_holeDependence()
{
    if (_xDependenceMode == true)
    {
        _xDependenceMode = false;
        this->_update();
    }

    auto f = ui->label_hMode->font();
    f.setUnderline (true);
    f.setBold (true);
    ui->label_hMode->setFont (f);

    f = ui->label_xMode->font();
    f.setUnderline (false);
    f.setBold (false);
    ui->label_xMode->setFont (f);
}


void IntensityGraphWindow::_changeParams_ZoneOpened (unsigned zoneNum)
{
    _changeParameters (_fresnel->getObserverDistanceForZone (zoneNum),
                       _fresnel->getHoleRadius(), _fresnel->getWaveLength());
}


void IntensityGraphWindow::_updateParamsSetButtons()
{
    _updateParamsSetButton (ui->pushButton_params1, 0);
    _updateParamsSetButton (ui->pushButton_params2, 1);
    _updateParamsSetButton (ui->pushButton_params3, 2);
    _updateParamsSetButton (ui->pushButton_params4, 3);
    _updateParamsSetButton (ui->pushButton_params5, 4);
}


void IntensityGraphWindow::_updateParamsSetButton (QPushButton *button, unsigned zone)
{
    double observerDist =_fresnel->getObserverDistanceForZone (zone);
    if (observerDist < Fresnel::dist_min || observerDist > Fresnel::dist_max)  button->setEnabled (false);
    else button->setEnabled (true);
}


void IntensityGraphWindow::parametersSet1()
{
    _changeParams_ZoneOpened (0);
}


void IntensityGraphWindow::parametersSet2()
{
    _changeParams_ZoneOpened (1);
}


void IntensityGraphWindow::parametersSet3()
{
    _changeParams_ZoneOpened (2);
}


void IntensityGraphWindow::parametersSet4()
{
   _changeParams_ZoneOpened (3);
}


void IntensityGraphWindow::parametersSet5()
{
   _changeParams_ZoneOpened (4);
}


void IntensityGraphWindow::parametersSetDefault()
{
    _changeParameters (Fresnel::dist_def, Fresnel::radius_def, Fresnel::wave_def);
}
