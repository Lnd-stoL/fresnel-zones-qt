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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
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
    QLabel *label_2;
    QPushButton *pushButton_simplePlate;
    QPushButton *pushButton_stagingPlate;
    QPushButton *pushButton_lensPlate;
    QPushButton *pushButton_flatLensPlate;
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
        frame_3->setFrameShape(QFrame::StyledPanel);
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
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
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
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(frame_6);

        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_7);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(frame_7);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);

        verticalLayout_3->addWidget(label_2);

        pushButton_simplePlate = new QPushButton(frame_7);
        pushButton_simplePlate->setObjectName(QStringLiteral("pushButton_simplePlate"));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(16);
        pushButton_simplePlate->setFont(font3);

        verticalLayout_3->addWidget(pushButton_simplePlate);

        pushButton_stagingPlate = new QPushButton(frame_7);
        pushButton_stagingPlate->setObjectName(QStringLiteral("pushButton_stagingPlate"));
        pushButton_stagingPlate->setFont(font3);

        verticalLayout_3->addWidget(pushButton_stagingPlate);

        pushButton_lensPlate = new QPushButton(frame_7);
        pushButton_lensPlate->setObjectName(QStringLiteral("pushButton_lensPlate"));
        pushButton_lensPlate->setFont(font3);

        verticalLayout_3->addWidget(pushButton_lensPlate);

        pushButton_flatLensPlate = new QPushButton(frame_7);
        pushButton_flatLensPlate->setObjectName(QStringLiteral("pushButton_flatLensPlate"));
        pushButton_flatLensPlate->setFont(font3);

        verticalLayout_3->addWidget(pushButton_flatLensPlate);


        horizontalLayout_2->addWidget(frame_7, 0, Qt::AlignTop);


        verticalLayout->addWidget(frame_4);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy3);
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
        pushButton_Back->setText(QApplication::translate("PhasePlateWindow", "\320\222\320\253\320\245\320\236\320\224", 0));
        label->setText(QApplication::translate("PhasePlateWindow", "\320\244\320\260\320\267\320\276\320\262\320\260\321\217 \320\277\320\273\320\260\321\201\321\202\320\270\320\275\320\272\320\260", 0));
        pushButton_Back_2->setText(QApplication::translate("PhasePlateWindow", "\320\222\320\237\320\225\320\240\320\225\320\224", 0));
        label_2->setText(QApplication::translate("PhasePlateWindow", "\320\242\320\270\320\277 \321\204\320\260\320\267\320\276\320\262\320\276\320\271 \320\277\320\273\320\260\321\201\321\202\320\270\320\275\320\272\320\270:", 0));
        pushButton_simplePlate->setText(QApplication::translate("PhasePlateWindow", "\320\227\321\203\320\261\321\207\320\260\321\202\320\260\321\217", 0));
        pushButton_stagingPlate->setText(QApplication::translate("PhasePlateWindow", "\320\241\321\202\321\203\320\277\320\265\320\275\321\207\320\260\321\202\320\260\321\217", 0));
        pushButton_lensPlate->setText(QApplication::translate("PhasePlateWindow", "\320\237\320\273\320\276\321\201\320\272\320\276-\320\262\321\213\320\277\321\203\320\272\320\273\320\260\321\217 \320\273\320\270\320\275\320\267\320\260", 0));
        pushButton_flatLensPlate->setText(QApplication::translate("PhasePlateWindow", "\320\237\320\273\320\276\321\201\320\272\320\260\321\217 \320\273\320\270\320\275\320\267\320\260 \320\244\321\200\320\265\320\275\320\265\320\273\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class PhasePlateWindow: public Ui_PhasePlateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHASEPLATEWINDOW_H
