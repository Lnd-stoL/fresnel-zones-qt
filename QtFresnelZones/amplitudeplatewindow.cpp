
#include "amplitudeplatewindow.h"
#include "ui_amplitudeplatewindow.h"


AmplitudePlateWindow::AmplitudePlateWindow (Fresnel *fresnel) :
    QMainWindow (nullptr),
    ui (new Ui::AmplitudePlateWindow),
    _fresnel (fresnel)
{
    ui->setupUi (this);
    connect (ui->pushButton_Back, SIGNAL(clicked()), this, SLOT(button_Back_Pressed()));

    connect (ui->checkBox_Zone0, SIGNAL(clicked()), this, SLOT(_update()));
    connect (ui->checkBox_Zone1, SIGNAL(clicked()), this, SLOT(_update()));
    connect (ui->checkBox_Zone2, SIGNAL(clicked()), this, SLOT(_update()));
    connect (ui->checkBox_Zone3, SIGNAL(clicked()), this, SLOT(_update()));
    connect (ui->checkBox_Zone4, SIGNAL(clicked()), this, SLOT(_update()));
    connect (ui->checkBox_Zone5, SIGNAL(clicked()), this, SLOT(_update()));

    ui->widget_Graph->useMode (true);
    this->_update();
}


AmplitudePlateWindow::~AmplitudePlateWindow()
{
    delete ui;
}


void AmplitudePlateWindow::_update()
{
    _fresnel->setZoneOpenness (0, ui->checkBox_Zone0->isChecked());
    _fresnel->setZoneOpenness (1, ui->checkBox_Zone1->isChecked());
    _fresnel->setZoneOpenness (2, ui->checkBox_Zone2->isChecked());
    _fresnel->setZoneOpenness (3, ui->checkBox_Zone3->isChecked());
    _fresnel->setZoneOpenness (4, ui->checkBox_Zone4->isChecked());
    _fresnel->setZoneOpenness (5, ui->checkBox_Zone5->isChecked());

    ui->widget_Graph->update (_fresnel);

    _fresnel->spiral (ui->widget_spiralGraph->spiralX, ui->widget_spiralGraph->spiralY);
    ui->widget_spiralGraph->repaint();
}


void AmplitudePlateWindow::button_Back_Pressed()
{
    this->close();
}
