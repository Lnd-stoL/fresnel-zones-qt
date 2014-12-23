/********************************************************************************
** Form generated from reading UI file 'introwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTROWINDOW_H
#define UI_INTROWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "fontscalablelabel.h"
#include "fontscalablepushbutton.h"
#include "intensityplot.h"
#include "schemegraph.h"
#include "zonesgraph.h"

QT_BEGIN_NAMESPACE

class Ui_IntroWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    FontScalablePushButton *pushButton_Back;
    QSpacerItem *horizontalSpacer_2;
    FontScalableLabel *label;
    QSpacerItem *horizontalSpacer;
    FontScalablePushButton *pushButton_Next;
    QFrame *frame;
    QGridLayout *gridLayout;
    ZonesGraph *widget_zonesGraph;
    IntensityPlot *widget_intensityPlot;
    QVBoxLayout *verticalLayout_2;
    FontScalableLabel *label_2;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_7;
    FontScalableLabel *label_12;
    FontScalableLabel *distance_label;
    FontScalableLabel *label_13;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    FontScalableLabel *label_5;
    FontScalableLabel *radius_label;
    FontScalableLabel *label_6;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    FontScalableLabel *label_3;
    FontScalableLabel *waveLength_label;
    FontScalableLabel *label_4;
    SchemeGraph *widget_schemeGraph;

    void setupUi(QMainWindow *IntroWindow)
    {
        if (IntroWindow->objectName().isEmpty())
            IntroWindow->setObjectName(QStringLiteral("IntroWindow"));
        IntroWindow->setWindowModality(Qt::ApplicationModal);
        IntroWindow->resize(800, 600);
        IntroWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(IntroWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        centralwidget->setFont(font);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(centralwidget);
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
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_Back->setFont(font1);
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
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_Next = new FontScalablePushButton(widget);
        pushButton_Next->setObjectName(QStringLiteral("pushButton_Next"));
        sizePolicy1.setHeightForWidth(pushButton_Next->sizePolicy().hasHeightForWidth());
        pushButton_Next->setSizePolicy(sizePolicy1);
        pushButton_Next->setMinimumSize(QSize(0, 0));
        pushButton_Next->setFont(font1);
        pushButton_Next->setStyleSheet(QLatin1String("background-color:white;\n"
"padding-top:5%;\n"
"padding-bottom:5%;\n"
"padding-left:5%;\n"
"padding-right:5%"));
        pushButton_Next->setFlat(false);

        horizontalLayout_4->addWidget(pushButton_Next);


        verticalLayout->addWidget(widget);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(8);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(7, 8, 0, 0);
        widget_zonesGraph = new ZonesGraph(frame);
        widget_zonesGraph->setObjectName(QStringLiteral("widget_zonesGraph"));

        gridLayout->addWidget(widget_zonesGraph, 2, 0, 1, 1);

        widget_intensityPlot = new IntensityPlot(frame);
        widget_intensityPlot->setObjectName(QStringLiteral("widget_intensityPlot"));

        gridLayout->addWidget(widget_intensityPlot, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new FontScalableLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(16);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);

        verticalLayout_2->addWidget(label_2);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        sizePolicy.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy);
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_12 = new FontScalableLabel(frame_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(16);
        label_12->setFont(font4);

        horizontalLayout_7->addWidget(label_12);

        distance_label = new FontScalableLabel(frame_6);
        distance_label->setObjectName(QStringLiteral("distance_label"));
        sizePolicy2.setHeightForWidth(distance_label->sizePolicy().hasHeightForWidth());
        distance_label->setSizePolicy(sizePolicy2);
        distance_label->setFont(font4);

        horizontalLayout_7->addWidget(distance_label);

        label_13 = new FontScalableLabel(frame_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setFont(font4);

        horizontalLayout_7->addWidget(label_13);


        verticalLayout_2->addWidget(frame_6);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new FontScalableLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setFont(font4);

        horizontalLayout_3->addWidget(label_5);

        radius_label = new FontScalableLabel(frame_3);
        radius_label->setObjectName(QStringLiteral("radius_label"));
        sizePolicy2.setHeightForWidth(radius_label->sizePolicy().hasHeightForWidth());
        radius_label->setSizePolicy(sizePolicy2);
        radius_label->setFont(font4);

        horizontalLayout_3->addWidget(radius_label);

        label_6 = new FontScalableLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font4);

        horizontalLayout_3->addWidget(label_6);


        verticalLayout_2->addWidget(frame_3);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new FontScalableLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setFont(font4);

        horizontalLayout_2->addWidget(label_3);

        waveLength_label = new FontScalableLabel(frame_2);
        waveLength_label->setObjectName(QStringLiteral("waveLength_label"));
        sizePolicy2.setHeightForWidth(waveLength_label->sizePolicy().hasHeightForWidth());
        waveLength_label->setSizePolicy(sizePolicy2);
        waveLength_label->setFont(font4);

        horizontalLayout_2->addWidget(waveLength_label);

        label_4 = new FontScalableLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font4);

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_2->addWidget(frame_2);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        widget_schemeGraph = new SchemeGraph(frame);
        widget_schemeGraph->setObjectName(QStringLiteral("widget_schemeGraph"));

        gridLayout->addWidget(widget_schemeGraph, 2, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);

        verticalLayout->addWidget(frame);

        IntroWindow->setCentralWidget(centralwidget);

        retranslateUi(IntroWindow);

        QMetaObject::connectSlotsByName(IntroWindow);
    } // setupUi

    void retranslateUi(QMainWindow *IntroWindow)
    {
        IntroWindow->setWindowTitle(QApplication::translate("IntroWindow", "MainWindow", 0));
        pushButton_Back->setText(QApplication::translate("IntroWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        label->setText(QApplication::translate("IntroWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \320\267\320\276\320\275 \320\244\321\200\320\265\320\275\320\265\320\273\321\217", 0));
        pushButton_Next->setText(QApplication::translate("IntroWindow", "\320\222\320\277\320\265\321\200\320\265\320\264", 0));
        label_2->setText(QApplication::translate("IntroWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\260\320\271\321\202\320\265  \320\275\320\260\320\261\320\273\321\216\320\264\320\260\321\202\320\265\320\273\321\217 (\320\263\320\273\320\260\320\267) \320\272\321\203\321\200\321\201\320\276\321\200\320\276\320\274 \320\264\320\273\321\217 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\321\217 \320\264\320\276 \320\276\321\202\320\262\320\265\321\200\321\201\321\202\320\270\321\217", 0));
        label_12->setText(QApplication::translate("IntroWindow", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\276 \320\276\321\202\320\262\320\265\321\200\321\201\321\202\320\270\321\217:", 0));
        distance_label->setText(QApplication::translate("IntroWindow", "2", 0));
        label_13->setText(QApplication::translate("IntroWindow", "\320\274", 0));
        label_5->setText(QApplication::translate("IntroWindow", "\320\240\320\260\320\264\320\270\321\203\321\201 \320\276\321\202\320\262\320\265\321\200\321\201\321\202\320\270\321\217:", 0));
        radius_label->setText(QApplication::translate("IntroWindow", "2", 0));
        label_6->setText(QApplication::translate("IntroWindow", "\320\274\320\274", 0));
        label_3->setText(QApplication::translate("IntroWindow", "\320\224\320\273\320\270\320\275\320\260 \320\262\320\276\320\273\320\275\321\213:", 0));
        waveLength_label->setText(QApplication::translate("IntroWindow", "495", 0));
        label_4->setText(QApplication::translate("IntroWindow", "\320\275\320\274", 0));
    } // retranslateUi

};

namespace Ui {
    class IntroWindow: public Ui_IntroWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTROWINDOW_H
