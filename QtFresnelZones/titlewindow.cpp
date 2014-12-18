
#include "titlewindow.h"
#include "ui_titlewindow.h"
#include "introwindow.h"
#include "intensitygraphwindow.h"
#include "amplitudeplatewindow.h"
#include "phaseplatewindow.h"

#include <QDebug>
#include <QApplication>


TitleWindow::TitleWindow (QWidget *parent) :
    QMainWindow (parent),
    ui (new Ui::TitleWindow)
{
    ui->setupUi (this);

    connect (ui->pushButton_Intro, SIGNAL(clicked()), this, SLOT(openIntroWindow()));
    connect (ui->pushButton_IntensityGraph, SIGNAL(clicked()), this, SLOT(openIntensityGraphWindow()));
    connect (ui->pushButton_AmplitudePlate, SIGNAL(clicked()), this, SLOT(openAmplitudePlateWindow()));
    connect (ui->pushButton_PhasePlate, SIGNAL(clicked()), this, SLOT(openPhasePlateWindow()));

    connect (ui->pushButton_Exit, SIGNAL(clicked()), this, SLOT(exitApplication()));
}


TitleWindow::~TitleWindow()
{
    delete ui;
}


void TitleWindow::openIntroWindow()
{
    IntroWindow *wnd = new IntroWindow (&fresnel, this);
    wnd->setAttribute (Qt::WA_DeleteOnClose);
    wnd->showFullScreen();
}

void TitleWindow::openIntensityGraphWindow()
{
    IntensityGraphWindow *wnd = new IntensityGraphWindow (&fresnel, this);
    wnd->setAttribute (Qt::WA_DeleteOnClose);
    wnd->showFullScreen();
}


void TitleWindow::openAmplitudePlateWindow()
{
    AmplitudePlateWindow *wnd = new AmplitudePlateWindow (&fresnel, this);
    wnd->setAttribute (Qt::WA_DeleteOnClose);
    wnd->showFullScreen();
}


void TitleWindow::openPhasePlateWindow()
{
    PhasePlateWindow *wnd = new PhasePlateWindow (&fresnel, this);
    wnd->setAttribute (Qt::WA_DeleteOnClose);
    wnd->showFullScreen();
}


void TitleWindow::exitApplication()
{
    this->close();
}
