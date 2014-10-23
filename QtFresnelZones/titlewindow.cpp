#include "titlewindow.h"
#include "ui_titlewindow.h"
#include "intensitygraphwindow.h"
#include "mainwindow.h"
#include <QDebug>
#include <QApplication>


TitleWindow::TitleWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TitleWindow)
{
    ui->setupUi (this);

    connect (ui->pushButton_IntensityGraph, SIGNAL(clicked()), this, SLOT(openIntensityGraphWindow()));
    connect (ui->pushButton_Exit, SIGNAL(clicked()), this, SLOT(exitApplication()));
}


TitleWindow::~TitleWindow()
{
    delete ui;
}


void TitleWindow::openIntensityGraphWindow()
{
    IntensityGraphWindow *wnd = new IntensityGraphWindow();
    wnd->setAttribute (Qt::WA_DeleteOnClose);
    wnd->showFullScreen();
}


void TitleWindow::exitApplication()
{
    this->close();
}
