/********************************************************************************
** Form generated from reading UI file 'amplitudeplatewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPLITUDEPLATEWINDOW_H
#define UI_AMPLITUDEPLATEWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "fontscalablelabel.h"
#include "fontscalablepushbutton.h"
#include "fontscalablespinbox.h"
#include "schemegraph.h"
#include "spiralgraph.h"
#include "zonesgraph.h"

QT_BEGIN_NAMESPACE

class Ui_AmplitudePlateWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QProgressBar *progressBar;
    FontScalableLabel *label_intensity;
    FontScalableLabel *label_3;
    QWidget *widget_4;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_4;
    FontScalableLabel *label_WaveLength;
    QHBoxLayout *horizontalLayout_12;
    QSlider *slider_WaveLength;
    FontScalableSpinBox *spin_WaveLength;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_13;
    SchemeGraph *widget_schemeGraph;
    ZonesGraph *widget_Zones;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    SpiralGraph *widget_spiralGraph;
    FontScalableLabel *label_2;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    FontScalablePushButton *pushButton_Back;
    QSpacerItem *horizontalSpacer_2;
    FontScalableLabel *label;
    QSpacerItem *horizontalSpacer;
    FontScalablePushButton *pushButton_Next;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *line;
    FontScalablePushButton *pushButton_closeAll;
    FontScalablePushButton *pushButton_openAll;
    FontScalablePushButton *pushButton_OpenOdd;
    QVBoxLayout *verticalLayout;
    FontScalableLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_Zone0;
    FontScalableLabel *label_zone0;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_Zone1;
    FontScalableLabel *label_zone1;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_Zone2;
    FontScalableLabel *label_zone2;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_Zone3;
    FontScalableLabel *label_zone3;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_Zone4;
    FontScalableLabel *label_zone4;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox_Zone5;
    FontScalableLabel *label_zone5;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_Zone6;
    FontScalableLabel *label_zone6;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBox_Zone7;
    FontScalableLabel *label_zone7;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBox_Zone8;
    FontScalableLabel *label_zone8;

    void setupUi(QMainWindow *AmplitudePlateWindow)
    {
        if (AmplitudePlateWindow->objectName().isEmpty())
            AmplitudePlateWindow->setObjectName(QStringLiteral("AmplitudePlateWindow"));
        AmplitudePlateWindow->resize(1024, 768);
        centralwidget = new QWidget(AmplitudePlateWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setMinimumSize(QSize(200, 0));
        frame_4->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_4);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(frame_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 10);
        progressBar = new QProgressBar(widget_3);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        progressBar->setMinimumSize(QSize(30, 0));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        progressBar->setFont(font);
        progressBar->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        progressBar->setValue(24);
        progressBar->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(progressBar);

        label_intensity = new FontScalableLabel(widget_3);
        label_intensity->setObjectName(QStringLiteral("label_intensity"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_intensity->sizePolicy().hasHeightForWidth());
        label_intensity->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QStringLiteral("Courier New"));
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setWeight(75);
        label_intensity->setFont(font1);
        label_intensity->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        verticalLayout_3->addWidget(label_intensity);

        label_3 = new FontScalableLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setFamily(QStringLiteral("Courier New"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setStyleSheet(QLatin1String("padding-left:0;\n"
""));
        label_3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_3, 0, Qt::AlignLeft);


        verticalLayout_5->addWidget(widget_3);

        widget_4 = new QWidget(frame_4);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy3);
        widget_4->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        gridLayout_6 = new QGridLayout(widget_4);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_WaveLength = new FontScalableLabel(widget_4);
        label_WaveLength->setObjectName(QStringLiteral("label_WaveLength"));
        sizePolicy3.setHeightForWidth(label_WaveLength->sizePolicy().hasHeightForWidth());
        label_WaveLength->setSizePolicy(sizePolicy3);
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(16);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        label_WaveLength->setFont(font3);
        label_WaveLength->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_WaveLength->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_4->addWidget(label_WaveLength);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(15);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        slider_WaveLength = new QSlider(widget_4);
        slider_WaveLength->setObjectName(QStringLiteral("slider_WaveLength"));
        QFont font4;
        font4.setPointSize(15);
        slider_WaveLength->setFont(font4);
        slider_WaveLength->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        slider_WaveLength->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(slider_WaveLength);

        spin_WaveLength = new FontScalableSpinBox(widget_4);
        spin_WaveLength->setObjectName(QStringLiteral("spin_WaveLength"));
        sizePolicy.setHeightForWidth(spin_WaveLength->sizePolicy().hasHeightForWidth());
        spin_WaveLength->setSizePolicy(sizePolicy);
        spin_WaveLength->setMinimumSize(QSize(0, 0));
        QFont font5;
        font5.setFamily(QStringLiteral("Trebuchet MS"));
        font5.setPointSize(15);
        spin_WaveLength->setFont(font5);
        spin_WaveLength->setStyleSheet(QStringLiteral("background-color: white;"));
        spin_WaveLength->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_12->addWidget(spin_WaveLength);


        verticalLayout_4->addLayout(horizontalLayout_12);


        gridLayout_6->addLayout(verticalLayout_4, 0, 0, 1, 1);


        verticalLayout_5->addWidget(widget_4);

        widget_5 = new QWidget(frame_4);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        horizontalLayout_13 = new QHBoxLayout(widget_5);
        horizontalLayout_13->setSpacing(7);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        widget_schemeGraph = new SchemeGraph(widget_5);
        widget_schemeGraph->setObjectName(QStringLiteral("widget_schemeGraph"));
        widget_schemeGraph->setStyleSheet(QStringLiteral("background-color:#ffffff;"));
        widget_schemeGraph->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_13->addWidget(widget_schemeGraph);

        widget_Zones = new ZonesGraph(widget_5);
        widget_Zones->setObjectName(QStringLiteral("widget_Zones"));
        sizePolicy.setHeightForWidth(widget_Zones->sizePolicy().hasHeightForWidth());
        widget_Zones->setSizePolicy(sizePolicy);
        widget_Zones->setMinimumSize(QSize(0, 0));
        widget_Zones->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_13->addWidget(widget_Zones);

        horizontalLayout_13->setStretch(0, 2);
        horizontalLayout_13->setStretch(1, 6);

        verticalLayout_5->addWidget(widget_5);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 16);

        gridLayout->addWidget(frame_4, 1, 1, 1, 1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_spiralGraph = new SpiralGraph(frame_2);
        widget_spiralGraph->setObjectName(QStringLiteral("widget_spiralGraph"));
        sizePolicy.setHeightForWidth(widget_spiralGraph->sizePolicy().hasHeightForWidth());
        widget_spiralGraph->setSizePolicy(sizePolicy);
        widget_spiralGraph->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        gridLayout_4->addWidget(widget_spiralGraph, 1, 0, 1, 1);

        label_2 = new FontScalableLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("padding-bottom:6;"));
        label_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);


        gridLayout->addWidget(frame_2, 1, 2, 1, 1);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(frame_3);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        widget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_Back = new FontScalablePushButton(widget);
        pushButton_Back->setObjectName(QStringLiteral("pushButton_Back"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_Back->sizePolicy().hasHeightForWidth());
        pushButton_Back->setSizePolicy(sizePolicy4);
        pushButton_Back->setMinimumSize(QSize(0, 0));
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setWeight(75);
        pushButton_Back->setFont(font6);
        pushButton_Back->setStyleSheet(QLatin1String("background-color:white;\n"
"padding-top:5%;\n"
"padding-bottom:5%;\n"
"padding-left:5%;\n"
"padding-right:5%"));
        pushButton_Back->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushButton_Back->setAutoDefault(false);
        pushButton_Back->setDefault(true);
        pushButton_Back->setFlat(false);

        horizontalLayout_4->addWidget(pushButton_Back, 0, Qt::AlignLeft);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label = new FontScalableLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 50));
        QFont font7;
        font7.setFamily(QStringLiteral("Arial"));
        font7.setPointSize(22);
        font7.setBold(true);
        font7.setUnderline(true);
        font7.setWeight(75);
        label->setFont(font7);
        label->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_Next = new FontScalablePushButton(widget);
        pushButton_Next->setObjectName(QStringLiteral("pushButton_Next"));
        sizePolicy4.setHeightForWidth(pushButton_Next->sizePolicy().hasHeightForWidth());
        pushButton_Next->setSizePolicy(sizePolicy4);
        pushButton_Next->setMinimumSize(QSize(0, 0));
        pushButton_Next->setFont(font6);
        pushButton_Next->setStyleSheet(QLatin1String("background-color:white;\n"
"padding-top:5%;\n"
"padding-bottom:5%;\n"
"padding-left:5%;\n"
"padding-right:5%"));
        pushButton_Next->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushButton_Next->setFlat(false);

        horizontalLayout_4->addWidget(pushButton_Next);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        gridLayout->addWidget(frame_3, 0, 0, 1, 3);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QStringLiteral(""));
        frame->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 72, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        widget_2 = new QWidget(frame);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy5);
        widget_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(widget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        pushButton_closeAll = new FontScalablePushButton(widget_2);
        pushButton_closeAll->setObjectName(QStringLiteral("pushButton_closeAll"));
        sizePolicy2.setHeightForWidth(pushButton_closeAll->sizePolicy().hasHeightForWidth());
        pushButton_closeAll->setSizePolicy(sizePolicy2);
        pushButton_closeAll->setMinimumSize(QSize(100, 0));
        QFont font8;
        font8.setFamily(QStringLiteral("Arial"));
        font8.setPointSize(14);
        pushButton_closeAll->setFont(font8);
        pushButton_closeAll->setStyleSheet(QLatin1String("padding-top:8%;\n"
"padding-bottom:8%;\n"
"padding-left:8%;\n"
"padding-right:8%;\n"
""));
        pushButton_closeAll->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        verticalLayout_2->addWidget(pushButton_closeAll);

        pushButton_openAll = new FontScalablePushButton(widget_2);
        pushButton_openAll->setObjectName(QStringLiteral("pushButton_openAll"));
        sizePolicy2.setHeightForWidth(pushButton_openAll->sizePolicy().hasHeightForWidth());
        pushButton_openAll->setSizePolicy(sizePolicy2);
        pushButton_openAll->setMinimumSize(QSize(100, 0));
        pushButton_openAll->setFont(font8);
        pushButton_openAll->setStyleSheet(QLatin1String("padding-top:8%;\n"
"padding-bottom:8%;\n"
"padding-left:8%;\n"
"padding-right:8%;\n"
""));
        pushButton_openAll->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        verticalLayout_2->addWidget(pushButton_openAll);

        pushButton_OpenOdd = new FontScalablePushButton(widget_2);
        pushButton_OpenOdd->setObjectName(QStringLiteral("pushButton_OpenOdd"));
        sizePolicy2.setHeightForWidth(pushButton_OpenOdd->sizePolicy().hasHeightForWidth());
        pushButton_OpenOdd->setSizePolicy(sizePolicy2);
        pushButton_OpenOdd->setMinimumSize(QSize(100, 0));
        pushButton_OpenOdd->setFont(font8);
        pushButton_OpenOdd->setStyleSheet(QLatin1String("padding-top:8%;\n"
"padding-bottom:8%;\n"
"padding-left:8%;\n"
"padding-right:8%;\n"
"\n"
""));
        pushButton_OpenOdd->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        verticalLayout_2->addWidget(pushButton_OpenOdd);


        gridLayout_3->addWidget(widget_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_8 = new FontScalableLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        QFont font9;
        font9.setFamily(QStringLiteral("Arial"));
        font9.setPointSize(16);
        font9.setBold(true);
        font9.setWeight(75);
        label_8->setFont(font9);
        label_8->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        verticalLayout->addWidget(label_8, 0, Qt::AlignLeft);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone0 = new QCheckBox(frame);
        checkBox_Zone0->setObjectName(QStringLiteral("checkBox_Zone0"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(checkBox_Zone0->sizePolicy().hasHeightForWidth());
        checkBox_Zone0->setSizePolicy(sizePolicy6);
        checkBox_Zone0->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        checkBox_Zone0->setChecked(true);

        horizontalLayout->addWidget(checkBox_Zone0);

        label_zone0 = new FontScalableLabel(frame);
        label_zone0->setObjectName(QStringLiteral("label_zone0"));
        QFont font10;
        font10.setFamily(QStringLiteral("Trebuchet MS"));
        font10.setPointSize(16);
        label_zone0->setFont(font10);
        label_zone0->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout->addWidget(label_zone0);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone1 = new QCheckBox(frame);
        checkBox_Zone1->setObjectName(QStringLiteral("checkBox_Zone1"));
        sizePolicy6.setHeightForWidth(checkBox_Zone1->sizePolicy().hasHeightForWidth());
        checkBox_Zone1->setSizePolicy(sizePolicy6);
        checkBox_Zone1->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        checkBox_Zone1->setChecked(true);

        horizontalLayout_2->addWidget(checkBox_Zone1);

        label_zone1 = new FontScalableLabel(frame);
        label_zone1->setObjectName(QStringLiteral("label_zone1"));
        label_zone1->setFont(font10);
        label_zone1->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_2->addWidget(label_zone1);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone2 = new QCheckBox(frame);
        checkBox_Zone2->setObjectName(QStringLiteral("checkBox_Zone2"));
        sizePolicy6.setHeightForWidth(checkBox_Zone2->sizePolicy().hasHeightForWidth());
        checkBox_Zone2->setSizePolicy(sizePolicy6);
        checkBox_Zone2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        checkBox_Zone2->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_Zone2);

        label_zone2 = new FontScalableLabel(frame);
        label_zone2->setObjectName(QStringLiteral("label_zone2"));
        label_zone2->setFont(font10);
        label_zone2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_3->addWidget(label_zone2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone3 = new QCheckBox(frame);
        checkBox_Zone3->setObjectName(QStringLiteral("checkBox_Zone3"));
        sizePolicy6.setHeightForWidth(checkBox_Zone3->sizePolicy().hasHeightForWidth());
        checkBox_Zone3->setSizePolicy(sizePolicy6);
        checkBox_Zone3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        checkBox_Zone3->setChecked(true);

        horizontalLayout_5->addWidget(checkBox_Zone3);

        label_zone3 = new FontScalableLabel(frame);
        label_zone3->setObjectName(QStringLiteral("label_zone3"));
        label_zone3->setFont(font10);
        label_zone3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_5->addWidget(label_zone3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone4 = new QCheckBox(frame);
        checkBox_Zone4->setObjectName(QStringLiteral("checkBox_Zone4"));
        sizePolicy6.setHeightForWidth(checkBox_Zone4->sizePolicy().hasHeightForWidth());
        checkBox_Zone4->setSizePolicy(sizePolicy6);
        checkBox_Zone4->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        checkBox_Zone4->setChecked(true);

        horizontalLayout_6->addWidget(checkBox_Zone4);

        label_zone4 = new FontScalableLabel(frame);
        label_zone4->setObjectName(QStringLiteral("label_zone4"));
        label_zone4->setFont(font10);
        label_zone4->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_6->addWidget(label_zone4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone5 = new QCheckBox(frame);
        checkBox_Zone5->setObjectName(QStringLiteral("checkBox_Zone5"));
        sizePolicy6.setHeightForWidth(checkBox_Zone5->sizePolicy().hasHeightForWidth());
        checkBox_Zone5->setSizePolicy(sizePolicy6);
        checkBox_Zone5->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        checkBox_Zone5->setChecked(true);

        horizontalLayout_7->addWidget(checkBox_Zone5);

        label_zone5 = new FontScalableLabel(frame);
        label_zone5->setObjectName(QStringLiteral("label_zone5"));
        label_zone5->setFont(font10);
        label_zone5->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_7->addWidget(label_zone5);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone6 = new QCheckBox(frame);
        checkBox_Zone6->setObjectName(QStringLiteral("checkBox_Zone6"));
        sizePolicy6.setHeightForWidth(checkBox_Zone6->sizePolicy().hasHeightForWidth());
        checkBox_Zone6->setSizePolicy(sizePolicy6);
        checkBox_Zone6->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        checkBox_Zone6->setChecked(true);

        horizontalLayout_8->addWidget(checkBox_Zone6);

        label_zone6 = new FontScalableLabel(frame);
        label_zone6->setObjectName(QStringLiteral("label_zone6"));
        label_zone6->setFont(font10);
        label_zone6->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_8->addWidget(label_zone6);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone7 = new QCheckBox(frame);
        checkBox_Zone7->setObjectName(QStringLiteral("checkBox_Zone7"));
        sizePolicy6.setHeightForWidth(checkBox_Zone7->sizePolicy().hasHeightForWidth());
        checkBox_Zone7->setSizePolicy(sizePolicy6);
        checkBox_Zone7->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        checkBox_Zone7->setChecked(true);

        horizontalLayout_9->addWidget(checkBox_Zone7);

        label_zone7 = new FontScalableLabel(frame);
        label_zone7->setObjectName(QStringLiteral("label_zone7"));
        label_zone7->setFont(font10);
        label_zone7->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_9->addWidget(label_zone7);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(10, -1, -1, -1);
        checkBox_Zone8 = new QCheckBox(frame);
        checkBox_Zone8->setObjectName(QStringLiteral("checkBox_Zone8"));
        sizePolicy6.setHeightForWidth(checkBox_Zone8->sizePolicy().hasHeightForWidth());
        checkBox_Zone8->setSizePolicy(sizePolicy6);
        checkBox_Zone8->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        checkBox_Zone8->setChecked(true);

        horizontalLayout_10->addWidget(checkBox_Zone8);

        label_zone8 = new FontScalableLabel(frame);
        label_zone8->setObjectName(QStringLiteral("label_zone8"));
        label_zone8->setFont(font10);
        label_zone8->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_10->addWidget(label_zone8);


        verticalLayout->addLayout(horizontalLayout_10);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 1, 0, 1, 1, Qt::AlignLeft);

        gridLayout->setColumnStretch(1, 3);
        gridLayout->setColumnStretch(2, 2);
        AmplitudePlateWindow->setCentralWidget(centralwidget);

        retranslateUi(AmplitudePlateWindow);

        QMetaObject::connectSlotsByName(AmplitudePlateWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AmplitudePlateWindow)
    {
        AmplitudePlateWindow->setWindowTitle(QApplication::translate("AmplitudePlateWindow", "MainWindow", 0));
        label_intensity->setText(QApplication::translate("AmplitudePlateWindow", "Intensity at the axis: Io", 0));
        label_3->setText(QApplication::translate("AmplitudePlateWindow", "<html><head/><body><p>Io - Intensity in the abscence of the screen with a hole</p></body></html>", 0));
        label_WaveLength->setText(QApplication::translate("AmplitudePlateWindow", "Wavelength:", 0));
        spin_WaveLength->setSuffix(QApplication::translate("AmplitudePlateWindow", " nm", 0));
        label_2->setText(QApplication::translate("AmplitudePlateWindow", "Amplitude at the axis", 0));
        pushButton_Back->setText(QApplication::translate("AmplitudePlateWindow", "Exit", 0));
        label->setText(QApplication::translate("AmplitudePlateWindow", "Amplitude plate", 0));
        pushButton_Next->setText(QApplication::translate("AmplitudePlateWindow", "Next", 0));
        pushButton_closeAll->setText(QApplication::translate("AmplitudePlateWindow", "Close all", 0));
        pushButton_openAll->setText(QApplication::translate("AmplitudePlateWindow", "Open all", 0));
        pushButton_OpenOdd->setText(QApplication::translate("AmplitudePlateWindow", "Close even", 0));
        label_8->setText(QApplication::translate("AmplitudePlateWindow", "Fresnel zones:", 0));
        checkBox_Zone0->setText(QString());
        label_zone0->setText(QApplication::translate("AmplitudePlateWindow", "zone 1", 0));
        checkBox_Zone1->setText(QString());
        label_zone1->setText(QApplication::translate("AmplitudePlateWindow", "zone 2", 0));
        checkBox_Zone2->setText(QString());
        label_zone2->setText(QApplication::translate("AmplitudePlateWindow", "zone 3", 0));
        checkBox_Zone3->setText(QString());
        label_zone3->setText(QApplication::translate("AmplitudePlateWindow", "zone 4", 0));
        checkBox_Zone4->setText(QString());
        label_zone4->setText(QApplication::translate("AmplitudePlateWindow", "zone 5", 0));
        checkBox_Zone5->setText(QString());
        label_zone5->setText(QApplication::translate("AmplitudePlateWindow", "zone 6", 0));
        checkBox_Zone6->setText(QString());
        label_zone6->setText(QApplication::translate("AmplitudePlateWindow", "zone 7", 0));
        checkBox_Zone7->setText(QString());
        label_zone7->setText(QApplication::translate("AmplitudePlateWindow", "zone 8", 0));
        checkBox_Zone8->setText(QString());
        label_zone8->setText(QApplication::translate("AmplitudePlateWindow", "zone 9", 0));
    } // retranslateUi

};

namespace Ui {
    class AmplitudePlateWindow: public Ui_AmplitudePlateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPLITUDEPLATEWINDOW_H
