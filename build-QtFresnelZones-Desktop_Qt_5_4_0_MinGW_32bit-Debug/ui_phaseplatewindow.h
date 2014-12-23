/********************************************************************************
** Form generated from reading UI file 'phaseplatewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHASEPLATEWINDOW_H
#define UI_PHASEPLATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "fontscalablelabel.h"
#include "fontscalablepushbutton.h"
#include "schemegraph.h"
#include "spiralgraph.h"
#include "zonesgraph.h"

QT_BEGIN_NAMESPACE

class Ui_PhasePlateWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout;
    SchemeGraph *widget_schemeGraph;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    ZonesGraph *widget_zonesGraph;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_3;
    FontScalableLabel *label_3;
    QProgressBar *progressBar_intensity;
    QSpacerItem *verticalSpacer;
    FontScalableLabel *label_2;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton_simplePlate;
    QRadioButton *radioButton_stagingPlate;
    QRadioButton *radioButton_lensPlate;
    QRadioButton *radioButton_flatLensPlate;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_5;
    FontScalableLabel *label_4;
    FontScalableLabel *label_5;
    FontScalableLabel *label_6;
    FontScalableLabel *label_7;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    FontScalableLabel *label_8;
    SpiralGraph *widget_spiralGraph;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    FontScalablePushButton *pushButton_Back;
    QSpacerItem *horizontalSpacer_2;
    FontScalableLabel *label;
    QSpacerItem *horizontalSpacer;
    FontScalablePushButton *pushButton_Next;

    void setupUi(QMainWindow *PhasePlateWindow)
    {
        if (PhasePlateWindow->objectName().isEmpty())
            PhasePlateWindow->setObjectName(QStringLiteral("PhasePlateWindow"));
        PhasePlateWindow->resize(1024, 768);
        centralwidget = new QWidget(PhasePlateWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(frame_3);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_5);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_schemeGraph = new SchemeGraph(frame_5);
        widget_schemeGraph->setObjectName(QStringLiteral("widget_schemeGraph"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_schemeGraph->sizePolicy().hasHeightForWidth());
        widget_schemeGraph->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(widget_schemeGraph);


        verticalLayout->addWidget(frame_5);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_zonesGraph = new ZonesGraph(frame_4);
        widget_zonesGraph->setObjectName(QStringLiteral("widget_zonesGraph"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_zonesGraph->sizePolicy().hasHeightForWidth());
        widget_zonesGraph->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(widget_zonesGraph);

        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_7);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new FontScalableLabel(frame_7);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        progressBar_intensity = new QProgressBar(frame_7);
        progressBar_intensity->setObjectName(QStringLiteral("progressBar_intensity"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(progressBar_intensity->sizePolicy().hasHeightForWidth());
        progressBar_intensity->setSizePolicy(sizePolicy3);
        progressBar_intensity->setValue(24);

        verticalLayout_3->addWidget(progressBar_intensity);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        label_2 = new FontScalableLabel(frame_7);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setFrameShape(QFrame::NoFrame);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_8);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, -1, 0, 6);
        frame_9 = new QFrame(frame_8);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame_9->sizePolicy().hasHeightForWidth());
        frame_9->setSizePolicy(sizePolicy4);
        frame_9->setFrameShape(QFrame::NoFrame);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_9);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        radioButton_simplePlate = new QRadioButton(frame_9);
        radioButton_simplePlate->setObjectName(QStringLiteral("radioButton_simplePlate"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(radioButton_simplePlate->sizePolicy().hasHeightForWidth());
        radioButton_simplePlate->setSizePolicy(sizePolicy5);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        radioButton_simplePlate->setFont(font1);
        radioButton_simplePlate->setChecked(true);

        verticalLayout_4->addWidget(radioButton_simplePlate);

        radioButton_stagingPlate = new QRadioButton(frame_9);
        radioButton_stagingPlate->setObjectName(QStringLiteral("radioButton_stagingPlate"));
        sizePolicy5.setHeightForWidth(radioButton_stagingPlate->sizePolicy().hasHeightForWidth());
        radioButton_stagingPlate->setSizePolicy(sizePolicy5);
        radioButton_stagingPlate->setFont(font1);

        verticalLayout_4->addWidget(radioButton_stagingPlate);

        radioButton_lensPlate = new QRadioButton(frame_9);
        radioButton_lensPlate->setObjectName(QStringLiteral("radioButton_lensPlate"));
        sizePolicy5.setHeightForWidth(radioButton_lensPlate->sizePolicy().hasHeightForWidth());
        radioButton_lensPlate->setSizePolicy(sizePolicy5);
        radioButton_lensPlate->setFont(font1);

        verticalLayout_4->addWidget(radioButton_lensPlate);

        radioButton_flatLensPlate = new QRadioButton(frame_9);
        radioButton_flatLensPlate->setObjectName(QStringLiteral("radioButton_flatLensPlate"));
        sizePolicy5.setHeightForWidth(radioButton_flatLensPlate->sizePolicy().hasHeightForWidth());
        radioButton_flatLensPlate->setSizePolicy(sizePolicy5);
        radioButton_flatLensPlate->setFont(font1);

        verticalLayout_4->addWidget(radioButton_flatLensPlate);


        horizontalLayout_3->addWidget(frame_9);

        frame_10 = new QFrame(frame_8);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setFrameShape(QFrame::NoFrame);
        frame_10->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_10);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new FontScalableLabel(frame_10);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_5->addWidget(label_4);

        label_5 = new FontScalableLabel(frame_10);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_5->addWidget(label_5);

        label_6 = new FontScalableLabel(frame_10);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        verticalLayout_5->addWidget(label_6);

        label_7 = new FontScalableLabel(frame_10);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        verticalLayout_5->addWidget(label_7);


        horizontalLayout_3->addWidget(frame_10);


        verticalLayout_3->addWidget(frame_8);


        horizontalLayout_2->addWidget(frame_7, 0, Qt::AlignTop);

        horizontalLayout_2->setStretch(1, 3);

        verticalLayout->addWidget(frame_4);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy6);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new FontScalableLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);
        label_8->setFont(font1);
        label_8->setStyleSheet(QLatin1String("padding-bottom:6;\n"
""));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_8);

        widget_spiralGraph = new SpiralGraph(frame_2);
        widget_spiralGraph->setObjectName(QStringLiteral("widget_spiralGraph"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(widget_spiralGraph->sizePolicy().hasHeightForWidth());
        widget_spiralGraph->setSizePolicy(sizePolicy7);

        verticalLayout_2->addWidget(widget_spiralGraph);


        gridLayout_2->addWidget(frame_2, 1, 1, 1, 1);

        widget = new QWidget(frame_3);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);
        widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_Back = new FontScalablePushButton(widget);
        pushButton_Back->setObjectName(QStringLiteral("pushButton_Back"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(pushButton_Back->sizePolicy().hasHeightForWidth());
        pushButton_Back->setSizePolicy(sizePolicy8);
        pushButton_Back->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_Back->setFont(font2);
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
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_Next = new FontScalablePushButton(widget);
        pushButton_Next->setObjectName(QStringLiteral("pushButton_Next"));
        sizePolicy8.setHeightForWidth(pushButton_Next->sizePolicy().hasHeightForWidth());
        pushButton_Next->setSizePolicy(sizePolicy8);
        pushButton_Next->setMinimumSize(QSize(0, 0));
        pushButton_Next->setFont(font2);
        pushButton_Next->setStyleSheet(QLatin1String("background-color:white;\n"
"padding-top:5%;\n"
"padding-bottom:5%;\n"
"padding-left:5%;\n"
"padding-right:5%"));
        pushButton_Next->setFlat(false);

        horizontalLayout_4->addWidget(pushButton_Next);


        gridLayout_2->addWidget(widget, 0, 0, 1, 2);

        gridLayout_2->setColumnStretch(0, 2);
        gridLayout_2->setColumnStretch(1, 1);

        gridLayout->addWidget(frame_3, 0, 0, 1, 2);

        PhasePlateWindow->setCentralWidget(centralwidget);

        retranslateUi(PhasePlateWindow);

        QMetaObject::connectSlotsByName(PhasePlateWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PhasePlateWindow)
    {
        PhasePlateWindow->setWindowTitle(QApplication::translate("PhasePlateWindow", "MainWindow", 0));
        label_3->setText(QApplication::translate("PhasePlateWindow", "\320\230\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214 \320\262 \321\202\320\276\321\207\320\272\320\265 \320\275\320\260\320\261\320\273\321\216\320\264\320\265\320\275\320\270\321\217", 0));
        label_2->setText(QApplication::translate("PhasePlateWindow", "\320\242\320\270\320\277 \321\204\320\260\320\267\320\276\320\262\320\276\320\271 \320\277\320\273\320\260\321\201\321\202\320\270\320\275\320\272\320\270:", 0));
        radioButton_simplePlate->setText(QString());
        radioButton_stagingPlate->setText(QString());
        radioButton_lensPlate->setText(QString());
        radioButton_flatLensPlate->setText(QString());
        label_4->setText(QApplication::translate("PhasePlateWindow", "\320\237\320\276\320\273\321\203\320\262\320\276\320\273\320\275\320\276\320\262\320\260\321\217", 0));
        label_5->setText(QApplication::translate("PhasePlateWindow", "\320\241\321\202\321\203\320\277\320\265\320\275\321\207\320\260\321\202\320\260\321\217", 0));
        label_6->setText(QApplication::translate("PhasePlateWindow", "\320\237\320\273\320\276\321\201\320\272\320\276-\320\262\321\213\320\277\321\203\320\272\320\273\320\260\321\217 \320\273\320\270\320\275\320\267\320\260", 0));
        label_7->setText(QApplication::translate("PhasePlateWindow", "\320\237\320\273\320\276\321\201\320\272\320\260\321\217 \320\273\320\270\320\275\320\267\320\260 \320\244\321\200\320\265\320\275\320\265\320\273\321\217", 0));
        label_8->setText(QApplication::translate("PhasePlateWindow", "\320\220\320\274\320\277\320\273\320\270\321\202\321\203\320\264\320\260 \320\275\320\260 \320\276\321\201\320\270", 0));
        pushButton_Back->setText(QApplication::translate("PhasePlateWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        label->setText(QApplication::translate("PhasePlateWindow", "\320\244\320\260\320\267\320\276\320\262\320\260\321\217 \320\277\320\273\320\260\321\201\321\202\320\270\320\275\320\272\320\260", 0));
        pushButton_Next->setText(QApplication::translate("PhasePlateWindow", "\320\222 \320\275\320\260\321\207\320\260\320\273\320\276", 0));
    } // retranslateUi

};

namespace Ui {
    class PhasePlateWindow: public Ui_PhasePlateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHASEPLATEWINDOW_H
