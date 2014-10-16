
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow (QWidget *parent) : QMainWindow(parent),
                                           ui (new Ui::MainWindow)
{
    ui->setupUi (this);

    connect (ui->pushButton, SIGNAL(clicked()), this, SLOT(btnPressed_XDependence()));
    connect (ui->pushButton_2, SIGNAL(clicked()), this, SLOT(btnPressed_RDependence()));

    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
      x[i] = (double)i / 100.0; // x goes from -1 to 1
      y[i] = sin (x[i]) * 10; // let's plot a quadratic function
    }

    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x, y);
    // give the axes some labels:
    ui->customPlot->xAxis->setLabel ("Расстояние (Нм)");
    ui->customPlot->yAxis->setLabel ("Интенсивность");
    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange (0, 1);
    ui->customPlot->yAxis->setRange (0, 10);
    ui->customPlot->replot();
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::btnPressed_XDependence()
{
    ui->tabWidget->setCurrentIndex (2);
}


void MainWindow::btnPressed_RDependence()
{
    ui->tabWidget->setCurrentIndex (3);
}
