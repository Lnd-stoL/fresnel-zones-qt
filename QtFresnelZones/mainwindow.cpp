
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fresnel.h"

template<typename T>
T maximum(QVector<T> &vec)
{
    T max = vec[0];
    for (typename QVector<T>::iterator elem = vec.begin(); elem < vec.end(); elem++) {
        max = qMax(max, *elem);
    }

    return max;
}

MainWindow::MainWindow (QWidget *parent) : QMainWindow(parent),
                                           ui (new Ui::MainWindow)
{
    Fresnel fresnel;
    double lowest = 0.05;
    double highest = 1.5;
    double def = 0.5;
    double step = 0.001;
    ui->setupUi (this);

    connect (ui->pushButton, SIGNAL(clicked()), this, SLOT(btnPressed_XDependence()));
    connect (ui->pushButton_2, SIGNAL(clicked()), this, SLOT(btnPressed_RDependence()));

    // generate some data:
    QVector<double> plotX, plotY; // initialize with entries 0..100
    double current = fresnel.observerDistance;
    for (double x = lowest; x < highest; x += step) {
        fresnel.observerDistance = x;
        plotX.push_back(x);
        plotY.push_back(fresnel.intensity());
    }
    fresnel.observerDistance = current;

    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(plotX, plotY);
    // give the axes some labels:
    ui->customPlot->xAxis->setLabel ("Расстояние (Нм)");
    ui->customPlot->yAxis->setLabel ("Интенсивность");
    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange (lowest, highest);
    ui->customPlot->yAxis->setRange (0, maximum(plotY));
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
