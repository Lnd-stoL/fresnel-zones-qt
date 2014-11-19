/********************************************************************************
** Form generated from reading UI file 'intensitygraphwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTENSITYGRAPHWINDOW_H
#define UI_INTENSITYGRAPHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "fontscalablelabel.h"
#include "fontscalablepushbutton.h"
#include "fontscalablespinbox.h"
#include "intensityplot.h"
#include "spiralgraph.h"
#include "zonesgraph.h"

QT_BEGIN_NAMESPACE

class Ui_IntensityGraphWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QFrame *frame_3;
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    FontScalablePushButton *pushButton_Back;
    QSpacerItem *horizontalSpacer_2;
    FontScalableLabel *label;
    QSpacerItem *horizontalSpacer;
    FontScalablePushButton *pushButton_Back_2;
    IntensityPlot *widget_Graph;
    QFrame *frame_2;
    QGridLayout *gridLayout_5;
    SpiralGraph *widget_spiralGraph;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    ZonesGraph *widget_Zones;
    QFrame *frame_4;
    QGridLayout *gridLayout_6;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout;
    FontScalableLabel *label_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QRadioButton *radioButton_xDependance;
    FontScalableLabel *label_xMode;
    QRadioButton *radioButton_holeDependance;
    FontScalableLabel *label_hMode;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    FontScalableLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QSlider *slider_xDistance;
    FontScalableSpinBox *spin_xDistance;
    QFrame *line;
    QVBoxLayout *verticalLayout_6;
    FontScalableLabel *label_holeRadius;
    QHBoxLayout *horizontalLayout_3;
    QSlider *slider_HoleRadius;
    FontScalableSpinBox *spin_HoleRadius;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_4;
    FontScalableLabel *label_WaveLength;
    QHBoxLayout *horizontalLayout_2;
    QSlider *slider_WaveLength;
    FontScalableSpinBox *spin_WaveLength;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_5;
    FontScalablePushButton *pushButton_params1;
    FontScalablePushButton *pushButton_params2;
    FontScalablePushButton *pushButton_params3;
    FontScalablePushButton *pushButton_params4;
    FontScalablePushButton *pushButton_params5;
    QSpacerItem *horizontalSpacer_3;
    FontScalablePushButton *pushButton_paramsDefault;

    void setupUi(QMainWindow *IntensityGraphWindow)
    {
        if (IntensityGraphWindow->objectName().isEmpty())
            IntensityGraphWindow->setObjectName(QStringLiteral("IntensityGraphWindow"));
        IntensityGraphWindow->resize(1024, 768);
        IntensityGraphWindow->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230);"));
        centralwidget = new QWidget(IntensityGraphWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(6);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(frame_3);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_Back = new FontScalablePushButton(widget);
        pushButton_Back->setObjectName(QStringLiteral("pushButton_Back"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_Back->sizePolicy().hasHeightForWidth());
        pushButton_Back->setSizePolicy(sizePolicy1);
        pushButton_Back->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        pushButton_Back->setFont(font);
        pushButton_Back->setStyleSheet(QLatin1String("background-color:white;\n"
"padding-top:5%;\n"
"padding-bottom:5%;\n"
"padding-left:5%;\n"
"padding-right:5%"));
        pushButton_Back->setAutoDefault(false);
        pushButton_Back->setDefault(true);
        pushButton_Back->setFlat(false);

        horizontalLayout_4->addWidget(pushButton_Back, 0, Qt::AlignLeft);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label = new FontScalableLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_Back_2 = new FontScalablePushButton(widget);
        pushButton_Back_2->setObjectName(QStringLiteral("pushButton_Back_2"));
        sizePolicy1.setHeightForWidth(pushButton_Back_2->sizePolicy().hasHeightForWidth());
        pushButton_Back_2->setSizePolicy(sizePolicy1);
        pushButton_Back_2->setMinimumSize(QSize(0, 0));
        pushButton_Back_2->setFont(font);
        pushButton_Back_2->setStyleSheet(QLatin1String("background-color:white;\n"
"padding-top:5%;\n"
"padding-bottom:5%;\n"
"padding-left:5%;\n"
"padding-right:5%"));
        pushButton_Back_2->setFlat(false);

        horizontalLayout_4->addWidget(pushButton_Back_2);


        gridLayout_3->addWidget(widget, 0, 0, 1, 1);

        widget_Graph = new IntensityPlot(frame_3);
        widget_Graph->setObjectName(QStringLiteral("widget_Graph"));
        widget_Graph->setMaximumSize(QSize(16777215, 16000000));

        gridLayout_3->addWidget(widget_Graph, 1, 0, 1, 1);


        gridLayout_2->addWidget(frame_3, 2, 0, 1, 3);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_2);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_spiralGraph = new SpiralGraph(frame_2);
        widget_spiralGraph->setObjectName(QStringLiteral("widget_spiralGraph"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_spiralGraph->sizePolicy().hasHeightForWidth());
        widget_spiralGraph->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(widget_spiralGraph, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame_2, 3, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_Zones = new ZonesGraph(frame);
        widget_Zones->setObjectName(QStringLiteral("widget_Zones"));

        gridLayout_4->addWidget(widget_Zones, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 0, 1, 1);

        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy3);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_4);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        sizePolicy.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy);
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_5);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 6, 6);
        label_5 = new FontScalableLabel(frame_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_5->setFont(font2);

        verticalLayout->addWidget(label_5);

        widget_2 = new QWidget(frame_5);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(0, 60));
        gridLayout_8 = new QGridLayout(widget_2);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        radioButton_xDependance = new QRadioButton(widget_2);
        radioButton_xDependance->setObjectName(QStringLiteral("radioButton_xDependance"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(radioButton_xDependance->sizePolicy().hasHeightForWidth());
        radioButton_xDependance->setSizePolicy(sizePolicy4);
        QFont font3;
        font3.setPointSize(18);
        radioButton_xDependance->setFont(font3);
        radioButton_xDependance->setChecked(true);

        gridLayout_7->addWidget(radioButton_xDependance, 0, 0, 1, 1);

        label_xMode = new FontScalableLabel(widget_2);
        label_xMode->setObjectName(QStringLiteral("label_xMode"));
        sizePolicy2.setHeightForWidth(label_xMode->sizePolicy().hasHeightForWidth());
        label_xMode->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(16);
        font4.setUnderline(true);
        label_xMode->setFont(font4);

        gridLayout_7->addWidget(label_xMode, 0, 1, 1, 1);

        radioButton_holeDependance = new QRadioButton(widget_2);
        radioButton_holeDependance->setObjectName(QStringLiteral("radioButton_holeDependance"));
        sizePolicy4.setHeightForWidth(radioButton_holeDependance->sizePolicy().hasHeightForWidth());
        radioButton_holeDependance->setSizePolicy(sizePolicy4);
        radioButton_holeDependance->setFont(font3);

        gridLayout_7->addWidget(radioButton_holeDependance, 1, 0, 1, 1);

        label_hMode = new FontScalableLabel(widget_2);
        label_hMode->setObjectName(QStringLiteral("label_hMode"));
        sizePolicy2.setHeightForWidth(label_hMode->sizePolicy().hasHeightForWidth());
        label_hMode->setSizePolicy(sizePolicy2);
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        font5.setPointSize(16);
        label_hMode->setFont(font5);

        gridLayout_7->addWidget(label_hMode, 1, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_2);


        gridLayout_6->addWidget(frame_5, 0, 0, 1, 1);

        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        sizePolicy.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy);
        frame_6->setMinimumSize(QSize(0, 200));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new FontScalableLabel(frame_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy5);
        label_4->setMaximumSize(QSize(500, 36));
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setPointSize(16);
        font6.setItalic(true);
        label_4->setFont(font6);
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        slider_xDistance = new QSlider(frame_6);
        slider_xDistance->setObjectName(QStringLiteral("slider_xDistance"));
        slider_xDistance->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(slider_xDistance);

        spin_xDistance = new FontScalableSpinBox(frame_6);
        spin_xDistance->setObjectName(QStringLiteral("spin_xDistance"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(spin_xDistance->sizePolicy().hasHeightForWidth());
        spin_xDistance->setSizePolicy(sizePolicy6);
        spin_xDistance->setMinimumSize(QSize(0, 0));
        QFont font7;
        font7.setPointSize(15);
        spin_xDistance->setFont(font7);
        spin_xDistance->setAutoFillBackground(false);
        spin_xDistance->setStyleSheet(QStringLiteral("background-color: white;"));

        horizontalLayout->addWidget(spin_xDistance);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        line = new QFrame(frame_6);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_holeRadius = new FontScalableLabel(frame_6);
        label_holeRadius->setObjectName(QStringLiteral("label_holeRadius"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_holeRadius->sizePolicy().hasHeightForWidth());
        label_holeRadius->setSizePolicy(sizePolicy7);
        label_holeRadius->setMaximumSize(QSize(500, 16777215));
        label_holeRadius->setFont(font6);
        label_holeRadius->setScaledContents(false);
        label_holeRadius->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_6->addWidget(label_holeRadius);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(15);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        slider_HoleRadius = new QSlider(frame_6);
        slider_HoleRadius->setObjectName(QStringLiteral("slider_HoleRadius"));
        slider_HoleRadius->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(slider_HoleRadius);

        spin_HoleRadius = new FontScalableSpinBox(frame_6);
        spin_HoleRadius->setObjectName(QStringLiteral("spin_HoleRadius"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(spin_HoleRadius->sizePolicy().hasHeightForWidth());
        spin_HoleRadius->setSizePolicy(sizePolicy8);
        spin_HoleRadius->setMinimumSize(QSize(0, 0));
        spin_HoleRadius->setFont(font7);
        spin_HoleRadius->setStyleSheet(QStringLiteral("background-color: white;"));

        horizontalLayout_3->addWidget(spin_HoleRadius);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_6);

        line_2 = new QFrame(frame_6);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_WaveLength = new FontScalableLabel(frame_6);
        label_WaveLength->setObjectName(QStringLiteral("label_WaveLength"));
        sizePolicy5.setHeightForWidth(label_WaveLength->sizePolicy().hasHeightForWidth());
        label_WaveLength->setSizePolicy(sizePolicy5);
        QFont font8;
        font8.setFamily(QStringLiteral("Arial"));
        font8.setPointSize(16);
        font8.setBold(false);
        font8.setItalic(true);
        font8.setWeight(50);
        label_WaveLength->setFont(font8);
        label_WaveLength->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_4->addWidget(label_WaveLength);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        slider_WaveLength = new QSlider(frame_6);
        slider_WaveLength->setObjectName(QStringLiteral("slider_WaveLength"));
        slider_WaveLength->setFont(font7);
        slider_WaveLength->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slider_WaveLength);

        spin_WaveLength = new FontScalableSpinBox(frame_6);
        spin_WaveLength->setObjectName(QStringLiteral("spin_WaveLength"));
        sizePolicy8.setHeightForWidth(spin_WaveLength->sizePolicy().hasHeightForWidth());
        spin_WaveLength->setSizePolicy(sizePolicy8);
        spin_WaveLength->setMinimumSize(QSize(0, 0));
        spin_WaveLength->setFont(font7);
        spin_WaveLength->setStyleSheet(QStringLiteral("background-color: white;"));

        horizontalLayout_2->addWidget(spin_WaveLength);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_4);


        gridLayout_6->addWidget(frame_6, 2, 0, 1, 1);

        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        sizePolicy1.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy1);
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_7);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 6, 6, 6);
        pushButton_params1 = new FontScalablePushButton(frame_7);
        pushButton_params1->setObjectName(QStringLiteral("pushButton_params1"));
        sizePolicy6.setHeightForWidth(pushButton_params1->sizePolicy().hasHeightForWidth());
        pushButton_params1->setSizePolicy(sizePolicy6);
        pushButton_params1->setMinimumSize(QSize(30, 0));
        QFont font9;
        font9.setFamily(QStringLiteral("Arial Black"));
        font9.setPointSize(11);
        pushButton_params1->setFont(font9);

        horizontalLayout_5->addWidget(pushButton_params1);

        pushButton_params2 = new FontScalablePushButton(frame_7);
        pushButton_params2->setObjectName(QStringLiteral("pushButton_params2"));
        sizePolicy6.setHeightForWidth(pushButton_params2->sizePolicy().hasHeightForWidth());
        pushButton_params2->setSizePolicy(sizePolicy6);
        pushButton_params2->setMinimumSize(QSize(30, 0));
        pushButton_params2->setFont(font9);

        horizontalLayout_5->addWidget(pushButton_params2);

        pushButton_params3 = new FontScalablePushButton(frame_7);
        pushButton_params3->setObjectName(QStringLiteral("pushButton_params3"));
        sizePolicy6.setHeightForWidth(pushButton_params3->sizePolicy().hasHeightForWidth());
        pushButton_params3->setSizePolicy(sizePolicy6);
        pushButton_params3->setMinimumSize(QSize(30, 0));
        pushButton_params3->setFont(font9);

        horizontalLayout_5->addWidget(pushButton_params3);

        pushButton_params4 = new FontScalablePushButton(frame_7);
        pushButton_params4->setObjectName(QStringLiteral("pushButton_params4"));
        sizePolicy6.setHeightForWidth(pushButton_params4->sizePolicy().hasHeightForWidth());
        pushButton_params4->setSizePolicy(sizePolicy6);
        pushButton_params4->setMinimumSize(QSize(30, 0));
        pushButton_params4->setFont(font9);

        horizontalLayout_5->addWidget(pushButton_params4);

        pushButton_params5 = new FontScalablePushButton(frame_7);
        pushButton_params5->setObjectName(QStringLiteral("pushButton_params5"));
        sizePolicy6.setHeightForWidth(pushButton_params5->sizePolicy().hasHeightForWidth());
        pushButton_params5->setSizePolicy(sizePolicy6);
        pushButton_params5->setMinimumSize(QSize(30, 0));
        pushButton_params5->setFont(font9);

        horizontalLayout_5->addWidget(pushButton_params5);

        horizontalSpacer_3 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        pushButton_paramsDefault = new FontScalablePushButton(frame_7);
        pushButton_paramsDefault->setObjectName(QStringLiteral("pushButton_paramsDefault"));
        sizePolicy6.setHeightForWidth(pushButton_paramsDefault->sizePolicy().hasHeightForWidth());
        pushButton_paramsDefault->setSizePolicy(sizePolicy6);
        pushButton_paramsDefault->setMinimumSize(QSize(100, 0));
        QFont font10;
        font10.setFamily(QStringLiteral("Arial Black"));
        pushButton_paramsDefault->setFont(font10);
        pushButton_paramsDefault->setStyleSheet(QLatin1String("padding-left:5%;\n"
"padding-right:5%;"));

        horizontalLayout_5->addWidget(pushButton_paramsDefault);


        gridLayout_6->addWidget(frame_7, 1, 0, 1, 1, Qt::AlignBottom);


        gridLayout_2->addWidget(frame_4, 3, 1, 1, 1);

        gridLayout_2->setRowStretch(2, 11);
        gridLayout_2->setRowStretch(3, 10);
        IntensityGraphWindow->setCentralWidget(centralwidget);

        retranslateUi(IntensityGraphWindow);

        QMetaObject::connectSlotsByName(IntensityGraphWindow);
    } // setupUi

    void retranslateUi(QMainWindow *IntensityGraphWindow)
    {
        IntensityGraphWindow->setWindowTitle(QApplication::translate("IntensityGraphWindow", "MainWindow", 0));
        pushButton_Back->setText(QApplication::translate("IntensityGraphWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        label->setText(QApplication::translate("IntensityGraphWindow", "\320\230\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\320\265 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\320\270 \320\275\320\260 \321\206\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\276\320\271 \320\276\321\201\320\270", 0));
        pushButton_Back_2->setText(QApplication::translate("IntensityGraphWindow", "\320\222\320\277\320\265\321\200\320\265\320\264", 0));
        label_5->setText(QApplication::translate("IntensityGraphWindow", "\320\227\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\321\214 \320\276\321\202:", 0));
        radioButton_xDependance->setText(QString());
        label_xMode->setText(QApplication::translate("IntensityGraphWindow", " \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\321\217 \320\264\320\276 \320\276\321\202\320\262\320\265\321\200\321\201\321\202\320\270\321\217", 0));
        radioButton_holeDependance->setText(QString());
        label_hMode->setText(QApplication::translate("IntensityGraphWindow", " \321\200\320\260\320\264\320\270\321\203\321\201\320\260 \320\276\321\202\320\262\320\265\321\200\321\201\321\202\320\270\321\217", 0));
        label_4->setText(QApplication::translate("IntensityGraphWindow", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\276 \320\276\321\202\320\262\320\265\321\200\321\201\321\202\320\270\321\217:", 0));
        spin_xDistance->setSuffix(QApplication::translate("IntensityGraphWindow", " \320\274\320\272\320\274", 0));
        label_holeRadius->setText(QApplication::translate("IntensityGraphWindow", "\320\240\320\260\320\264\320\270\321\203\321\201 \320\276\321\202\320\262\320\265\321\200\321\201\321\202\320\270\321\217:", 0));
        spin_HoleRadius->setSuffix(QApplication::translate("IntensityGraphWindow", " \320\274\320\272\320\274", 0));
        label_WaveLength->setText(QApplication::translate("IntensityGraphWindow", "\320\224\320\273\320\270\320\275\320\260 \320\262\320\276\320\273\320\275\321\213:", 0));
        spin_WaveLength->setSuffix(QApplication::translate("IntensityGraphWindow", " \320\274\320\272\320\274", 0));
        pushButton_params1->setText(QApplication::translate("IntensityGraphWindow", "1", 0));
        pushButton_params2->setText(QApplication::translate("IntensityGraphWindow", "2", 0));
        pushButton_params3->setText(QApplication::translate("IntensityGraphWindow", "3", 0));
        pushButton_params4->setText(QApplication::translate("IntensityGraphWindow", "4", 0));
        pushButton_params5->setText(QApplication::translate("IntensityGraphWindow", "5", 0));
        pushButton_paramsDefault->setText(QApplication::translate("IntensityGraphWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class IntensityGraphWindow: public Ui_IntensityGraphWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTENSITYGRAPHWINDOW_H
