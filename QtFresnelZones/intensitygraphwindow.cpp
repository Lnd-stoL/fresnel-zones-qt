#include "intensitygraphwindow.h"
#include "fresnel.h"
#include "ui_intensitygraphwindow.h"

#include <QDebug>


template<typename T>
T maximum(QVector<T> &vec)
{
    T max = vec[0];
    for (typename QVector<T>::iterator elem = vec.begin(); elem < vec.end(); elem++)
    {
        max = qMax (max, *elem);
    }

    return max;
}


IntensityGraphWindow::IntensityGraphWindow (QWidget *parent) :
    QMainWindow (parent),
    ui (new Ui::IntensityGraphWindow),
    readyToDrawGraphs (false)
{
    ui->setupUi (this);

    connect (ui->pushButton_Back, SIGNAL(clicked()), this, SLOT(button_Back_Pressed()));

    connect (ui->slider_xDistance,  SIGNAL(valueChanged(int)), this, SLOT(slider_xDistance_Changed(int)));
    connect (ui->slider_HoleRadius, SIGNAL(valueChanged(int)), this, SLOT(slider_HoleRadius_Changed(int)));
    connect (ui->slider_WaveLength, SIGNAL(valueChanged(int)), this, SLOT(slider_WaveLength_Changed(int)));

    connect (ui->spin_xDistance,  SIGNAL(valueChanged(int)), this, SLOT(spin_xDistance_Changed(int)));
    connect (ui->spin_HoleRadius, SIGNAL(valueChanged(int)), this, SLOT(spin_HoleRadius_Changed(int)));
    connect (ui->spin_WaveLength, SIGNAL(valueChanged(int)), this, SLOT(spin_WaveLength_Changed(int)));


    int minWaveLength = 200, maxWaveLength = 900, defaultWaveLength = 500;
    int minHoleRadius = 1000, maxHoleRadius = 20000, defaultHoleRadius = 10000;
    int minxDistance  = 50, maxxDistance = 60000, defaultxDistance = 10000;

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


    readyToDrawGraphs = true;
    updateGraph();
}


IntensityGraphWindow::~IntensityGraphWindow()
{
    delete ui;
}


void IntensityGraphWindow::updateGraph()
{
    if (!readyToDrawGraphs) return;

    Fresnel fresnel;

    fresnel.observerDistance = 0.0000001 * ui->slider_xDistance->value();
    fresnel.holeRadius = 0.0000001 * ui->slider_HoleRadius->value();
    fresnel.waveLength = 0.0000001 * ui->slider_WaveLength->value();

    double lowest = 0.0000001 * ui->slider_xDistance->minimum();
    double highest = 0.0000001 * ui->slider_xDistance->maximum();
    double step = 0.0000001 * 50;

    //qDebug() << "started";
    QVector<double> plotX, plotY;
    double current = fresnel.observerDistance;
    for (double x = lowest; x < highest; x += step)
    {
        //qDebug() << "calculating for " << x;
        fresnel.observerDistance = x;
        plotX.push_back (x);
        plotY.push_back (fresnel.intensity());
    }
    fresnel.observerDistance = current;
    //qDebug() << "finished";

    ui->widget_Graph->addGraph();
    ui->widget_Graph->graph(0)->setData (plotX, plotY);

    ui->widget_Graph->xAxis->setLabel ("Расстояние (Нм)");
    ui->widget_Graph->yAxis->setLabel ("Интенсивность");

    ui->widget_Graph->xAxis->setRange (lowest, highest);
    ui->widget_Graph->yAxis->setRange (0, maximum (plotY));

    ui->widget_Graph->xAxis->setLabelFont (QFont ("Arial", 20));
    ui->widget_Graph->xAxis->setBasePen (QPen (QBrush (QColor (0, 0, 0)), 2));
    ui->widget_Graph->yAxis->setBasePen (QPen (QBrush (QColor (0, 0, 0)), 2));
    ui->widget_Graph->yAxis->setLabelFont (QFont ("Arial", 20));

    ui->widget_Graph->graph(0)->setPen (QPen (QBrush (QColor (60, 60, 255)), 3));

    ui->widget_Graph->replot();


    Fresnel fresnel2;
    fresnel2.observerDistance = 0.0000001 * ui->slider_xDistance->value();
    fresnel2.holeRadius = 0.0000001 * ui->slider_HoleRadius->value();
    fresnel2.waveLength = 0.0000001 * ui->slider_WaveLength->value();

    fresnel2.spiral (ui->widget_spiralGraph->spiralX, ui->widget_spiralGraph->spiralY);
    qDebug() << "spiral calculated";
    ui->widget_spiralGraph->repaint();

    ui->widget_Zones->zones.clear();
    for (int n = 0; n < fresnel.fresnelNumber(); ++n)
    {
        double nextZone = fresnel.zoneOuterRadius (n);
        ui->widget_Zones->zones.push_back (nextZone);
    }

    ui->widget_Zones->repaint();
}


void IntensityGraphWindow::button_Back_Pressed()
{
    this->close();
}


void IntensityGraphWindow::slider_xDistance_Changed (int value)
{
    ui->spin_xDistance->setValue (value);
    updateGraph();
}

void IntensityGraphWindow::slider_WaveLength_Changed (int value)
{
    ui->spin_WaveLength->setValue (value);
    updateGraph();
}

void IntensityGraphWindow::slider_HoleRadius_Changed (int value)
{
    ui->spin_HoleRadius->setValue (value);
    updateGraph();
}


void IntensityGraphWindow::spin_xDistance_Changed (int value)
{
    ui->slider_xDistance->setValue (value);
    updateGraph();
}

void IntensityGraphWindow::spin_WaveLength_Changed (int value)
{
    ui->slider_WaveLength->setValue (value);
    //updateGraph();
}

void IntensityGraphWindow::spin_HoleRadius_Changed (int value)
{
    ui->slider_HoleRadius->setValue (value);
    //updateGraph();
}
