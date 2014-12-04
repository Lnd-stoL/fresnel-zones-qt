#include "introwindow.h"
#include "ui_introwindow.h"

IntroWindow::IntroWindow(Fresnel *fresnel) :
    QMainWindow(nullptr),
    ui(new Ui::IntroWindow),
    _fresnel(fresnel)
{
    ui->setupUi(this);

    fresnel->amplitudePlate = false;
    fresnel->phasePlate = false;
    ui->widget_schemeGraph->fresnel = _fresnel;
    ui->widget_schemeGraph->schemeType = SchemeGraph::SchemeType::MovingScheme;
    connect(ui->widget_schemeGraph, SIGNAL(fresnelChanged()), this, SLOT(fresnelChanged()));

    this->_update();
}

IntroWindow::~IntroWindow()
{
    delete ui;
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
}
