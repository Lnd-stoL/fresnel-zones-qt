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


void spectral_color(double &r,double &g,double &b,double l) // RGB <0,1> <- lambda l <400,700> [nm]
{
    double t;  r=0.0; g=0.0; b=0.0;
         if ((l>=400.0)&&(l<410.0)) { t=(l-400.0)/(410.0-400.0); r=    +(0.33*t)-(0.20*t*t); }
    else if ((l>=410.0)&&(l<475.0)) { t=(l-410.0)/(475.0-410.0); r=0.14         -(0.13*t*t); }
    else if ((l>=545.0)&&(l<595.0)) { t=(l-545.0)/(595.0-545.0); r=    +(1.98*t)-(     t*t); }
    else if ((l>=595.0)&&(l<650.0)) { t=(l-595.0)/(650.0-595.0); r=0.98+(0.06*t)-(0.40*t*t); }
    else if ((l>=650.0)&&(l<700.0)) { t=(l-650.0)/(700.0-650.0); r=0.65-(0.84*t)+(0.20*t*t); }
         if ((l>=415.0)&&(l<475.0)) { t=(l-415.0)/(475.0-415.0); g=             +(0.80*t*t); }
    else if ((l>=475.0)&&(l<590.0)) { t=(l-475.0)/(590.0-475.0); g=0.8 +(0.76*t)-(0.80*t*t); }
    else if ((l>=585.0)&&(l<639.0)) { t=(l-585.0)/(639.0-585.0); g=0.84-(0.84*t)           ; }
         if ((l>=400.0)&&(l<475.0)) { t=(l-400.0)/(475.0-400.0); b=    +(2.20*t)-(1.50*t*t); }
    else if ((l>=475.0)&&(l<560.0)) { t=(l-475.0)/(560.0-475.0); b=0.7 -(     t)+(0.30*t*t); }
}

double Gamma = 0.80;
double IntensityMax = 255;

/** Taken from Earl F. Glynn's web page:
* <a href="http://www.efg2.com/Lab/ScienceAndEngineering/Spectra.htm">Spectra Lab Report</a>
* */
QColor waveLengthToRGB (double Wavelength)
{
    double factor;
    double Red,Green,Blue;

    if((Wavelength >= 380) && (Wavelength<440)){
        Red = -(Wavelength - 440) / (440 - 380);
        Green = 0.0;
        Blue = 1.0;
    }else if((Wavelength >= 440) && (Wavelength<490)){
        Red = 0.0;
        Green = (Wavelength - 440) / (490 - 440);
        Blue = 1.0;
    }else if((Wavelength >= 490) && (Wavelength<510)){
        Red = 0.0;
        Green = 1.0;
        Blue = -(Wavelength - 510) / (510 - 490);
    }else if((Wavelength >= 510) && (Wavelength<580)){
        Red = (Wavelength - 510) / (580 - 510);
        Green = 1.0;
        Blue = 0.0;
    }else if((Wavelength >= 580) && (Wavelength<645)){
        Red = 1.0;
        Green = -(Wavelength - 645) / (645 - 580);
        Blue = 0.0;
    }else if((Wavelength >= 645) && (Wavelength<781)){
        Red = 1.0;
        Green = 0.0;
        Blue = 0.0;
    }else{
        Red = 0.0;
        Green = 0.0;
        Blue = 0.0;
    };

    // Let the intensity fall off near the vision limits

    if((Wavelength >= 380) && (Wavelength<420)){
        factor = 0.3 + 0.7*(Wavelength - 380) / (420 - 380);
    }else if((Wavelength >= 420) && (Wavelength<701)){
        factor = 1.0;
    }else if((Wavelength >= 701) && (Wavelength<781)){
        factor = 0.3 + 0.7*(780 - Wavelength) / (780 - 700);
    }else{
        factor = 0.0;
    };


    int rgb[3];

    // Don't want 0^x = 1 for x <> 0
    rgb[0] = Red==0.0 ? 0 : (int) (IntensityMax * pow(Red * factor, Gamma));
    rgb[1] = Green==0.0 ? 0 : (int) (IntensityMax * pow(Green * factor, Gamma));
    rgb[2] = Blue==0.0 ? 0 : (int) (IntensityMax * pow(Blue * factor, Gamma));

    return QColor (rgb[0], rgb[1], rgb[2]);
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

    double cr, cg, cb;
    spectral_color (cr, cg, cb, ui->slider_WaveLength->value());
    ui->widget_Zones->backgroundColor = waveLengthToRGB (ui->slider_WaveLength->value());
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
