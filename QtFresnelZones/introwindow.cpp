
#include "introwindow.h"
#include "ui_introwindow.h"
#include "titlewindow.h"


IntroWindow::IntroWindow (Fresnel *fresnel, TitleWindow *tw) :
    QMainWindow (nullptr),
    ui (new Ui::IntroWindow),
    titleWindow (tw),
    _fresnel (fresnel)
{
    ui->setupUi (this);

    fresnel->amplitudePlate = false;
    fresnel->phasePlate = false;
    fresnel->setObserverDistance(Fresnel::dist_max * 0.5);
    fresnel->setHoleRadius(Fresnel::radius_def);
    ui->widget_schemeGraph->fresnel = _fresnel;
    ui->widget_schemeGraph->schemeType = SchemeGraph::SchemeType::MovingScheme;

    connect (ui->pushButton_Back, SIGNAL(clicked()), this, SLOT(button_Back_Pressed()));
    connect (ui->widget_schemeGraph, SIGNAL(fresnelChanged()), this, SLOT(fresnelChanged()));
    connect (ui->pushButton_Next, SIGNAL(clicked()), this, SLOT(button_Next_Pressed()));

    this->_update();
}


IntroWindow::~IntroWindow()
{
    delete ui;
}


void IntroWindow::button_Back_Pressed()
{
    this->close();
}


void IntroWindow::button_Next_Pressed()
{
    this->close();
    titleWindow->openIntensityGraphWindow();
}


void IntroWindow::fresnelChanged()
{
    this->_update();
}


void IntroWindow::_update()
{
    ui->widget_intensityPlot->update(_fresnel);
    ui->widget_schemeGraph->update();
    ui->widget_zonesGraph->update(_fresnel);

    ui->distance_label->setText (QString::number(_fresnel->getObserverDistance() * Fresnel::scale_to_si_exp, 'f', 2));
    ui->radius_label->setText (QString::number(_fresnel->getHoleRadius() * Fresnel::scale_to_milli_exp, 'f', 2));
    ui->waveLength_label->setText (QString::number(_fresnel->getWaveLength() * Fresnel::scale_to_nano_exp, 'f', 2));
}
