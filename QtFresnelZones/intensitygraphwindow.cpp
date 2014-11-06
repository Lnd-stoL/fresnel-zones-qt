#include "intensitygraphwindow.h"
#include "fresnel.h"
#include "ui_intensitygraphwindow.h"
#include "qvectormax.h"
#include "colortransform.h"

#include <QDebug>
#include <QDesktopWidget>
#include <QApplication>


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

    connect (ui->spin_xDistance,  SIGNAL(valueChanged(int)), this, SLOT(spin_xDistance_Changed(int)));
    connect (ui->spin_HoleRadius, SIGNAL(valueChanged(int)), this, SLOT(spin_HoleRadius_Changed(int)));
    connect (ui->spin_WaveLength, SIGNAL(valueChanged(int)), this, SLOT(spin_WaveLength_Changed(int)));

    // Signals for graph update
    connect (ui->spin_xDistance,  SIGNAL(editingFinished()), this, SLOT(update_Needed()));
    connect (ui->spin_HoleRadius, SIGNAL(editingFinished()), this, SLOT(update_Needed()));
    connect (ui->spin_WaveLength, SIGNAL(editingFinished()), this, SLOT(update_Needed()));

    connect (ui->slider_HoleRadius, SIGNAL(sliderReleased()), this, SLOT(update_Needed()));
    connect (ui->slider_xDistance,  SIGNAL(sliderReleased()), this, SLOT(update_Needed()));
    connect (ui->slider_WaveLength, SIGNAL(sliderReleased()), this, SLOT(update_Needed()));


    // Fresnel-based sliders ranges and values setting
    double scaling = Fresnel::scale_to_nano_exp;
    int minWaveLength = Fresnel::wave_min * scaling;
    int maxWaveLength = Fresnel::wave_max * scaling;
    int defaultWaveLength = Fresnel::wave_def * scaling;
    int minHoleRadius = Fresnel::radius_min * scaling;
    int maxHoleRadius = Fresnel::radius_max * scaling;
    int defaultHoleRadius = Fresnel::radius_def * scaling;
    int minxDistance = Fresnel::dist_min * scaling;
    int maxxDistance = Fresnel::dist_max * scaling;
    int defaultxDistance = Fresnel::dist_def * scaling;

    ui->slider_HoleRadius->setRange (minHoleRadius, maxHoleRadius);
    ui->spin_HoleRadius->setRange (minHoleRadius, maxHoleRadius);
    ui->slider_HoleRadius->setValue (defaultHoleRadius);
    ui->spin_HoleRadius->setValue (defaultHoleRadius);

    ui->slider_WaveLength->setRange (minWaveLength, maxWaveLength);
    ui->spin_WaveLength->setRange (minWaveLength, maxWaveLength);
    ui->slider_WaveLength->setValue (defaultWaveLength);
    ui->spin_WaveLength->setValue (defaultWaveLength);

    ui->slider_xDistance->setRange (minxDistance, maxxDistance);
    ui->spin_xDistance->setRange (minxDistance, maxxDistance);
    ui->spin_xDistance->setValue (defaultxDistance);
    ui->slider_xDistance->setValue (defaultxDistance);

    _update();
}


IntensityGraphWindow::~IntensityGraphWindow()
{
    delete ui;
}


void IntensityGraphWindow::_updateZoneGraph()
{
    ui->widget_Zones->zones.clear();
    for (unsigned n = 0; n < _fresnel->fresnelNumber(); ++n)
    {
        double nextZone = _fresnel->zoneOuterRadius (n);
        ui->widget_Zones->zones.push_back (nextZone);
    }

    ui->widget_Zones->holeRadius = _fresnel->getHoleRadius();
    ui->widget_Zones->backgroundColor = ColorTransform::getRGBfromLambda (_fresnel->getWaveLength());
    ui->widget_Zones->repaint();
}


void IntensityGraphWindow::_updateSpiralGraph()
{
    _fresnel->spiral (ui->widget_spiralGraph->spiralX, ui->widget_spiralGraph->spiralY);
    ui->widget_spiralGraph->repaint();
}


void IntensityGraphWindow::_update()
{
    _update_FresnelModel();
    ui->widget_Graph->useMode (_xDependenceMode);
    ui->widget_Graph->update (_fresnel);

    _updateSpiralGraph();
    _updateZoneGraph();
}


void IntensityGraphWindow::_update_FresnelModel()
{
    double scaling = Fresnel::nano_to_scale_exp;

    _fresnel->setObserverDistance (scaling * ui->slider_xDistance->value());
    _fresnel->setHoleRadius (scaling * ui->slider_HoleRadius->value());
    _fresnel->setWaveLength (scaling * ui->slider_WaveLength->value());
}

//----------------------------------------------------------------------------------------------------------------------

void IntensityGraphWindow::button_Back_Pressed()
{
    this->close();
}


void IntensityGraphWindow::slider_xDistance_Changed (int value)
{
    ui->spin_xDistance->setValue (value);
}

void IntensityGraphWindow::slider_WaveLength_Changed (int value)
{
    ui->spin_WaveLength->setValue (value);
}

void IntensityGraphWindow::slider_HoleRadius_Changed (int value)
{
    ui->spin_HoleRadius->setValue (value);
}

void IntensityGraphWindow::update_Needed()
{
    _update();
}


void IntensityGraphWindow::spin_xDistance_Changed (int value)
{
    ui->slider_xDistance->setValue (value);
}

void IntensityGraphWindow::spin_WaveLength_Changed (int value)
{
    ui->slider_WaveLength->setValue (value);
}

void IntensityGraphWindow::spin_HoleRadius_Changed (int value)
{
    ui->slider_HoleRadius->setValue (value);
}


void IntensityGraphWindow::radio_xDependence()
{
    if (_xDependenceMode == false)
    {
        _xDependenceMode = true;
        this->_update();
    }
}


void IntensityGraphWindow::radio_holeDependence()
{
    if (_xDependenceMode == true)
    {
        _xDependenceMode = false;
        this->_update();
    }
}
