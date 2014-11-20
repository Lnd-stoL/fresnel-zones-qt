/********************************************************************************
** Form generated from reading UI file 'phaseplatewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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

QT_BEGIN_NAMESPACE

class Ui_PhasePlateWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    FontScalablePushButton *pushButton_Back;
    QSpacerItem *horizontalSpacer_2;
    FontScalableLabel *label;
    QSpacerItem *horizontalSpacer;
    FontScalablePushButton *pushButton_Back_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout;
    SchemeGraph *widget_schemeGraph;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_6;
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
    SpiralGraph *widget_spiralGraph;

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


        gridLayout_2->addWidget(widget, 0, 0, 1, 2);

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
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_schemeGraph = new SchemeGraph(frame_5);
        widget_schemeGraph->setObjectName(QStringLiteral("widget_schemeGraph"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_schemeGraph->sizePolicy().hasHeightForWidth());
        widget_schemeGraph->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(widget_schemeGraph);


        verticalLayout->addWidget(frame_5);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(frame_6);

        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_7);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new FontScalableLabel(frame_7);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);

        verticalLayout_3->addWidget(label_3);

        progressBar_intensity = new QProgressBar(frame_7);
        progressBar_intensity->setObjectName(QStringLiteral("progressBar_intensity"));
        sizePolicy.setHeightForWidth(progressBar_intensity->sizePolicy().hasHeightForWidth());
        progressBar_intensity->setSizePolicy(sizePolicy);
        progressBar_intensity->setValue(24);

        verticalLayout_3->addWidget(progressBar_intensity);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        label_2 = new FontScalableLabel(frame_7);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font2);

        verticalLayout_3->addWidget(label_2);

        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setFrameShape(QFrame::NoFrame);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_8);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        frame_9 = new QFrame(frame_8);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_9->sizePolicy().hasHeightForWidth());
        frame_9->setSizePolicy(sizePolicy3);
        frame_9->setFrameShape(QFrame::NoFrame);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_9);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        radioButton_simplePlate = new QRadioButton(frame_9);
        radioButton_simplePlate->setObjectName(QStringLiteral("radioButton_simplePlate"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(radioButton_simplePlate->sizePolicy().hasHeightForWidth());
        radioButton_simplePlate->setSizePolicy(sizePolicy4);
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(16);
        radioButton_simplePlate->setFont(font3);

        verticalLayout_4->addWidget(radioButton_simplePlate);

        radioButton_stagingPlate = new QRadioButton(frame_9);
        radioButton_stagingPlate->setObjectName(QStringLiteral("radioButton_stagingPlate"));
        sizePolicy4.setHeightForWidth(radioButton_stagingPlate->sizePolicy().hasHeightForWidth());
        radioButton_stagingPlate->setSizePolicy(sizePolicy4);
        radioButton_stagingPlate->setFont(font3);

        verticalLayout_4->addWidget(radioButton_stagingPlate);

        radioButton_lensPlate = new QRadioButton(frame_9);
        radioButton_lensPlate->setObjectName(QStringLiteral("radioButton_lensPlate"));
        sizePolicy4.setHeightForWidth(radioButton_lensPlate->sizePolicy().hasHeightForWidth());
        radioButton_lensPlate->setSizePolicy(sizePolicy4);
        radioButton_lensPlate->setFont(font3);

        verticalLayout_4->addWidget(radioButton_lensPlate);

        radioButton_flatLensPlate = new QRadioButton(frame_9);
        radioButton_flatLensPlate->setObjectName(QStringLiteral("radioButton_flatLensPlate"));
        sizePolicy4.setHeightForWidth(radioButton_flatLensPlate->sizePolicy().hasHeightForWidth());
        radioButton_flatLensPlate->setSizePolicy(sizePolicy4);
        radioButton_flatLensPlate->setFont(font3);

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
        label_4->setFont(font3);

        verticalLayout_5->addWidget(label_4);

        label_5 = new FontScalableLabel(frame_10);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font3);

        verticalLayout_5->addWidget(label_5);

        label_6 = new FontScalableLabel(frame_10);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font3);

        verticalLayout_5->addWidget(label_6);

        label_7 = new FontScalableLabel(frame_10);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);

        verticalLayout_5->addWidget(label_7);


        horizontalLayout_3->addWidget(frame_10);


        verticalLayout_3->addWidget(frame_8);


        horizontalLayout_2->addWidget(frame_7, 0, Qt::AlignTop);


        verticalLayout->addWidget(frame_4);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy5);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_spiralGraph = new SpiralGraph(frame_2);
        widget_spiralGraph->setObjectName(QStringLiteral("widget_spiralGraph"));
        sizePolicy2.setHeightForWidth(widget_spiralGraph->sizePolicy().hasHeightForWidth());
        widget_spiralGraph->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(widget_spiralGraph);


        gridLayout_2->addWidget(frame_2, 1, 1, 1, 1);

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
        pushButton_Back->setText(QApplication::translate("PhasePlateWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        label->setText(QApplication::translate("PhasePlateWindow", "\320\244\320\260\320\267\320\276\320\262\320\260\321\217 \320\277\320\273\320\260\321\201\321\202\320\270\320\275\320\272\320\260", 0));
        pushButton_Back_2->setText(QApplication::translate("PhasePlateWindow", "\320\222\320\277\320\265\321\200\320\265\320\264", 0));
        label_3->setText(QApplication::translate("PhasePlateWindow", "\320\230\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214 \320\262 \321\202\320\276\321\207\320\272\320\265 \320\275\320\260\320\261\320\273\321\216\320\264\320\265\320\275\320\270\321\217", 0));
        label_2->setText(QApplication::translate("PhasePlateWindow", "\320\242\320\270\320\277 \321\204\320\260\320\267\320\276\320\262\320\276\320\271 \320\277\320\273\320\260\321\201\321\202\320\270\320\275\320\272\320\270:", 0));
        radioButton_simplePlate->setText(QString());
        radioButton_stagingPlate->setText(QString());
        radioButton_lensPlate->setText(QString());
        radioButton_flatLensPlate->setText(QString());
        label_4->setText(QApplication::translate("PhasePlateWindow", "\320\227\321\203\320\261\321\207\320\260\321\202\320\260\321\217", 0));
        label_5->setText(QApplication::translate("PhasePlateWindow", "\320\241\321\202\321\203\320\277\320\265\320\275\321\207\320\260\321\202\320\260\321\217", 0));
        label_6->setText(QApplication::translate("PhasePlateWindow", "\320\237\320\273\320\276\321\201\320\272\320\276-\320\262\321\213\320\277\321\203\320\272\320\273\320\260\321\217 \320\273\320\270\320\275\320\267\320\260", 0));
        label_7->setText(QApplication::translate("PhasePlateWindow", "\320\237\320\273\320\276\321\201\320\272\320\260\321\217 \320\273\320\270\320\275\320\267\320\260 \320\244\321\200\320\265\320\275\320\265\320\273\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class PhasePlateWindow: public Ui_PhasePlateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHASEPLATEWINDOW_H
