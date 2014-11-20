#include "intensitygraphwindow.h"
#include "fresnel.h"
#include "ui_intensitygraphwindow.h"
#include "qvectormax.h"

#include <QDebug>


IntensityGraphWindow::IntensityGraphWindow (Fresnel *fresnel) :
    QMainWindow (0),
    ui (new Ui::IntensityGraphWindow),
    _fresnel (fresnel)
{
    ui->setupUi (this);

    connect (ui->pushButton_Back, SIGNAL(clicked()), this, SLOT(button_Back_Pressed()));
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

    _fresnel->amplitudePlate = false;
    _fresnel->phasePlate     = false;

    _initFresnelBasedSliders();
    _update();
}


IntensityGraphWindow::~IntensityGraphWindow()
{
    delete ui;
}


void IntensityGraphWindow::_initFresnelBasedSliders()
{
    double scaling = Fresnel::scale_to_micro_exp;

    double minWaveLength = Fresnel::wave_min * scaling;
    double maxWaveLength = Fresnel::wave_max * scaling;
    double defaultWaveLength = Fresnel::wave_def * scaling;

    double minHoleRadius = Fresnel::radius_min * scaling;
    double maxHoleRadius = Fresnel::radius_max * scaling;
    double defaultHoleRadius = Fresnel::radius_def * scaling;

    double minxDistance = Fresnel::dist_min * scaling;
    double maxxDistance = Fresnel::dist_max * scaling;
    double defaultxDistance = Fresnel::dist_def * scaling;

    ui->slider_HoleRadius->setRange (minHoleRadius * _sliderScaling, maxHoleRadius * _sliderScaling);
    ui->slider_HoleRadius->setValue (defaultHoleRadius * _sliderScaling);
    ui->spin_HoleRadius->setValue (defaultHoleRadius);
    ui->spin_HoleRadius->setRange (minHoleRadius, maxHoleRadius);

    ui->slider_WaveLength->setRange (minWaveLength * _sliderScaling * 10, maxWaveLength * _sliderScaling * 10);
    ui->slider_WaveLength->setValue (defaultWaveLength * _sliderScaling * 10);
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
    double scaling = Fresnel::scale_to_micro_exp;

    double scaledWaveLength = waveLength * scaling;
    double scaledHoleRadius = holeRadius * scaling;
    double scaledxDistance  = xDistance * scaling;

    ui->spin_HoleRadius->setValue (scaledHoleRadius);
    ui->spin_WaveLength->setValue (scaledWaveLength);
    ui->spin_xDistance->setValue  (scaledxDistance);

    _update();
}


void IntensityGraphWindow::_update()
{
    _update_FresnelModel();
    if (_waveLength_ChangedSinceLastUpdate ||
        _xDependenceMode && _holeRadius_ChangedSinceLastUpdate ||
        (!_xDependenceMode) && _xDistance_ChangedSinceLastUpdate)
    {
        ui->widget_Graph->useMode (_xDependenceMode);
        ui->widget_Graph->update (_fresnel);
    }

    _updateSpiralGraph();
    _updateZoneGraph();
}


void IntensityGraphWindow::_update_FresnelModel()
{
    double scaling = Fresnel::micro_to_scale_exp;

    double newXDistance = scaling * ui->spin_xDistance->value();
    double newHoleRadius = scaling * ui->spin_HoleRadius->value();
    double newWaveLength = scaling * ui->spin_WaveLength->value();

    _xDistance_ChangedSinceLastUpdate  = _fresnel->getObserverDistance() == newXDistance;
    _holeRadius_ChangedSinceLastUpdate = _fresnel->getHoleRadius()       == newHoleRadius;
    _waveLength_ChangedSinceLastUpdate = _fresnel->getWaveLength()       == newWaveLength;

    _fresnel->setObserverDistance (newXDistance);
    _fresnel->setHoleRadius (newHoleRadius);
    _fresnel->setWaveLength (newWaveLength);
}

//----------------------------------------------------------------------------------------------------------------------

void IntensityGraphWindow::button_Back_Pressed()
{
    this->close();
}


void IntensityGraphWindow::slider_xDistance_Changed (int value)
{
    ui->spin_xDistance->setValue ((double)value / _sliderScaling);
}

void IntensityGraphWindow::slider_WaveLength_Changed (int value)
{
    ui->spin_WaveLength->setValue ((double)value / (_sliderScaling * 10));
}

void IntensityGraphWindow::slider_HoleRadius_Changed (int value)
{
    ui->spin_HoleRadius->setValue ((double)value / _sliderScaling);
}

void IntensityGraphWindow::update_Needed()
{
    _update();
}


void IntensityGraphWindow::spin_xDistance_Changed (double value)
{
    ui->slider_xDistance->setValue (value * _sliderScaling);
}

void IntensityGraphWindow::spin_WaveLength_Changed (double value)
{
    ui->slider_WaveLength->setValue (value * _sliderScaling * 10);
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
    ui->label_xMode->setFont (f);

    f = ui->label_hMode->font();
    f.setUnderline (false);
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
    ui->label_hMode->setFont (f);

    f = ui->label_xMode->font();
    f.setUnderline (false);
    ui->label_xMode->setFont (f);
}


void IntensityGraphWindow::_changeParams_ZoneOpened (unsigned zoneNum)
{
    _changeParameters (_fresnel->getObserverDistanceForZone (zoneNum) * 1.0003,
                       _fresnel->getHoleRadius(), _fresnel->getWaveLength());
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
