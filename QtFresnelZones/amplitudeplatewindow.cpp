
#include "amplitudeplatewindow.h"
#include "ui_amplitudeplatewindow.h"
#include "colortransform.h"
#include "titlewindow.h"


AmplitudePlateWindow::AmplitudePlateWindow (Fresnel *fresnel, TitleWindow *tw) :
    QMainWindow (nullptr),
    ui (new Ui::AmplitudePlateWindow),
    titleWindow (tw),
    _fresnel (fresnel)
{
    ui->setupUi (this);

    _fresnel->setDefaults();
    _fresnel->amplitudePlate = true;
    _fresnel->phasePlate = false;

    _initCheckBoxes();
    _setupSlots();

    double minWaveLength = Fresnel::wave_min * Fresnel::scale_to_nano_exp;
    double maxWaveLength = Fresnel::wave_max * Fresnel::scale_to_nano_exp;
    double defaultWaveLength = Fresnel::wave_def * Fresnel::scale_to_nano_exp;

    ui->slider_WaveLength->setRange (minWaveLength, maxWaveLength);
    ui->slider_WaveLength->setValue (defaultWaveLength);
    ui->spin_WaveLength->setRange (minWaveLength, maxWaveLength);
    ui->spin_WaveLength->setValue (defaultWaveLength);
    ui->widget_spiralGraph->fresnel  = _fresnel;

    _fresnel->setHoleRadius (Fresnel::radius_max * 0.85);
    button_Tune_Pressed();
    ui->widget_schemeGraph->fresnel  = _fresnel;
    ui->widget_schemeGraph->schemeType = SchemeGraph::SchemeType::AmplitudePlateScheme;

    for (unsigned i = 1; i < zoneCheckBoxesNum+1; ++i)  _fresnel->setZoneOpenness (i, false);
    _fresnel->setZoneOpenness (0, true);
    _initialIntensity = _fresnel->intensity() * 0.25;
     _progressBarHigh = _initialIntensity * 90;
    for (unsigned i = 1; i < zoneCheckBoxesNum+1; ++i)  _fresnel->setZoneOpenness (i, true);

    ui->progressBar->setTextVisible (false);
    _update();
}


void AmplitudePlateWindow::_initCheckBoxes()
{
    _zoneCheckBoxes[0] = ui->checkBox_Zone0,
    _zoneCheckBoxes[1] = ui->checkBox_Zone1;
    _zoneCheckBoxes[2] = ui->checkBox_Zone2;
    _zoneCheckBoxes[3] = ui->checkBox_Zone3;
    _zoneCheckBoxes[4] = ui->checkBox_Zone4;
    _zoneCheckBoxes[5] = ui->checkBox_Zone5;
    _zoneCheckBoxes[6] = ui->checkBox_Zone6;
    _zoneCheckBoxes[7] = ui->checkBox_Zone7;
    _zoneCheckBoxes[8] = ui->checkBox_Zone8;

    _zoneLabels[0] = ui->label_zone0,
    _zoneLabels[1] = ui->label_zone1;
    _zoneLabels[2] = ui->label_zone2;
    _zoneLabels[3] = ui->label_zone3;
    _zoneLabels[4] = ui->label_zone4;
    _zoneLabels[5] = ui->label_zone5;
    _zoneLabels[6] = ui->label_zone6;
    _zoneLabels[7] = ui->label_zone7;
    _zoneLabels[8] = ui->label_zone8;
}


void AmplitudePlateWindow::_setupSlots()
{
    connect (ui->pushButton_Back, SIGNAL(clicked()), this, SLOT(button_Back_Pressed()));
    connect (ui->pushButton_Next, SIGNAL(clicked()), this, SLOT(button_Next_Pressed()));

    connect (ui->pushButton_closeAll, SIGNAL(clicked()), this, SLOT(button_CloseAll_Pressed()));
    connect (ui->pushButton_openAll, SIGNAL(clicked()), this, SLOT(button_OpenAll_Pressed()));
    connect (ui->pushButton_OpenOdd, SIGNAL(clicked()), this, SLOT(button_OpenOdd_Pressed()));

    for (unsigned i = 0; i < zoneCheckBoxesNum; ++i)
        connect (_zoneCheckBoxes[i], SIGNAL(clicked()), this, SLOT(_update()));

    connect (ui->slider_WaveLength, SIGNAL(valueChanged(int)), this, SLOT(slider_WaveLength_Changed(int)));
    connect (ui->spin_WaveLength, SIGNAL(valueChanged(double)), this, SLOT(spin_WaveLength_Changed(double)));

    connect (ui->spin_WaveLength, SIGNAL(editingFinished()), this, SLOT(_update()));
    connect (ui->slider_WaveLength, SIGNAL(sliderReleased()), this, SLOT(_update()));
}


void AmplitudePlateWindow::_updateFresnel()
{
    double newWaveLength = Fresnel::nano_to_scale_exp * ui->spin_WaveLength->value();
    _fresnel->setWaveLength (newWaveLength);

    unsigned zonesVisible = _fresnel->fresnelNumber() + 1;
    for (unsigned i = 0; i < zoneCheckBoxesNum; ++i)
    {
        bool enabled = i < zonesVisible;
        _zoneCheckBoxes[i]->setEnabled (enabled);
        _zoneLabels[i]->setEnabled (enabled);

        auto f = _zoneLabels[i]->font();
        f.setUnderline (_zoneCheckBoxes[i]->isChecked());
        _zoneLabels[i]->setFont (f);

        _fresnel->setZoneOpenness (i, _zoneCheckBoxes[i]->isChecked());
    }
}


void AmplitudePlateWindow::_updateProgressBar()
{
    QRect r = ui->progressBar->geometry();
    QColor barColor = ColorTransform::getRGBfromLambda (_fresnel->getWaveLength() * Fresnel::scale_to_nano_exp);

    QString st = QString (
                "QProgressBar::chunk {"
                "background-color:rgb(%1,%2,%3);"
                 "}").arg (QString::number (barColor.red()),
                           QString::number (barColor.green()),
                           QString::number (barColor.blue()));

    st.append ("QProgressBar {"
               "border: 2px solid grey;"
               "border-radius: 2px;"
               "text-align: center;"
               "background: #eeeeee;"
               "}");

    ui->progressBar->setStyleSheet (st);
    ui->progressBar->setGeometry (r.x(), r.y() + 3, r.width(), r.height() - 6);

    unsigned progress = round ((_fresnel->intensity() / _progressBarHigh) * 100);
    if (progress < 0)    progress = -progress;
    if (progress > 100)  progress = 100;

    ui->progressBar->setValue (progress);

    ui->label_Intensity->setText (QString ("Интенсивность на оси: ") +
                                  QString::number (_fresnel->intensity() / _initialIntensity, 'g', 4) + " Io");
}


AmplitudePlateWindow::~AmplitudePlateWindow()
{
    delete ui;
}


void AmplitudePlateWindow::_update()
{
    _updateFresnel();
    ui->widget_Zones->update (_fresnel);

    _fresnel->spiral (ui->widget_spiralGraph->spiralX, ui->widget_spiralGraph->spiralY);
    ui->widget_spiralGraph->repaint();
    ui->widget_schemeGraph->repaint();

    _updateProgressBar();
}


void AmplitudePlateWindow::button_Back_Pressed()
{
    this->close();
}


void AmplitudePlateWindow::button_Next_Pressed()
{
    this->close();
    titleWindow->openPhasePlateWindow();
}


void AmplitudePlateWindow::button_OpenAll_Pressed()
{
    for (unsigned i = 0; i < zoneCheckBoxesNum; ++i)
        _zoneCheckBoxes[i]->setChecked (true);

    _update();
}


void AmplitudePlateWindow::button_CloseAll_Pressed()
{
    for (unsigned i = 0; i < zoneCheckBoxesNum; ++i)
        _zoneCheckBoxes[i]->setChecked (false);

    _update();
}


void AmplitudePlateWindow::button_OpenOdd_Pressed()
{
    for (unsigned i = 0; i < zoneCheckBoxesNum; ++i)
        _zoneCheckBoxes[i]->setChecked (i % 2 == 0);

    _update();
}


void AmplitudePlateWindow::button_Tune_Pressed()
{
    _fresnel->setObserverDistance (_fresnel->getObserverDistanceForZone (8));
    _update();
}


void AmplitudePlateWindow::slider_WaveLength_Changed (int value)
{
    ui->spin_WaveLength->setValue ((double) value);
}


void AmplitudePlateWindow::spin_WaveLength_Changed (double value)
{
    ui->slider_WaveLength->setValue (value);
}
