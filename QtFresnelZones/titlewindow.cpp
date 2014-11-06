#include "titlewindow.h"
#include "ui_titlewindow.h"
#include "intensitygraphwindow.h"
#include "mainwindow.h"
#include "amplitudeplatewindow.h"

#include <QDebug>
#include <QApplication>


TitleWindow::TitleWindow (QWidget *parent) :
    QMainWindow (parent),
    ui (new Ui::TitleWindow)
{
    ui->setupUi (this);

    connect (ui->pushButton_IntensityGraph, SIGNAL(clicked()), this, SLOT(openIntensityGraphWindow()));
    connect (ui->pushButton_AmplitudePlate, SIGNAL(clicked()), this, SLOT(openAmplitudePlateWindow()));

    connect (ui->pushButton_Exit, SIGNAL(clicked()), this, SLOT(exitApplication()));
}


TitleWindow::~TitleWindow()
{
    delete ui;
}


void TitleWindow::openIntensityGraphWindow()
{
    IntensityGraphWindow *wnd = new IntensityGraphWindow (&fresnel);
    wnd->setAttribute (Qt::WA_DeleteOnClose);
    wnd->showFullScreen();
}


void TitleWindow::openAmplitudePlateWindow()
{
    AmplitudePlateWindow *wnd = new AmplitudePlateWindow();
    wnd->setAttribute (Qt::WA_DeleteOnClose);
    wnd->showFullScreen();
}


void TitleWindow::exitApplication()
{
    this->close();
}
