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
#include "schemegraph.h"
#include "spiralgraph.h"
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
    FontScalablePushButton *pushButton_Back_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    SchemeGraph *widget_scheme;
    FontScalableLabel *label_scheme;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    ZonesGraph *widget_zones;
    FontScalableLabel *label_zones;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    SpiralGraph *widget_spiral;
    FontScalableLabel *label_spiral;

    void setupUi(QMainWindow *IntroWindow)
    {
        if (IntroWindow->objectName().isEmpty())
            IntroWindow->setObjectName(QStringLiteral("IntroWindow"));
        IntroWindow->resize(800, 600);
        centralwidget = new QWidget(IntroWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
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


        verticalLayout->addWidget(widget);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_scheme = new SchemeGraph(frame_2);
        widget_scheme->setObjectName(QStringLiteral("widget_scheme"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_scheme->sizePolicy().hasHeightForWidth());
        widget_scheme->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(widget_scheme);

        label_scheme = new FontScalableLabel(frame_2);
        label_scheme->setObjectName(QStringLiteral("label_scheme"));
        sizePolicy.setHeightForWidth(label_scheme->sizePolicy().hasHeightForWidth());
        label_scheme->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_scheme);


        gridLayout->addWidget(frame_2, 0, 0, 1, 2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget_zones = new ZonesGraph(frame_3);
        widget_zones->setObjectName(QStringLiteral("widget_zones"));

        verticalLayout_3->addWidget(widget_zones);

        label_zones = new FontScalableLabel(frame_3);
        label_zones->setObjectName(QStringLiteral("label_zones"));
        sizePolicy.setHeightForWidth(label_zones->sizePolicy().hasHeightForWidth());
        label_zones->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_zones);


        gridLayout->addWidget(frame_3, 1, 0, 1, 1);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_spiral = new SpiralGraph(frame_4);
        widget_spiral->setObjectName(QStringLiteral("widget_spiral"));

        verticalLayout_4->addWidget(widget_spiral);

        label_spiral = new FontScalableLabel(frame_4);
        label_spiral->setObjectName(QStringLiteral("label_spiral"));
        sizePolicy.setHeightForWidth(label_spiral->sizePolicy().hasHeightForWidth());
        label_spiral->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_spiral);


        gridLayout->addWidget(frame_4, 1, 1, 1, 1);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 1);

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
        pushButton_Back_2->setText(QApplication::translate("IntroWindow", "\320\222\320\277\320\265\321\200\320\265\320\264", 0));
        label_scheme->setText(QApplication::translate("IntroWindow", "\320\241\321\205\320\265\320\274\320\260", 0));
        label_zones->setText(QApplication::translate("IntroWindow", "\320\227\320\276\320\275\321\213", 0));
        label_spiral->setText(QApplication::translate("IntroWindow", "\320\241\320\277\320\270\321\200\320\260\320\273\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class IntroWindow: public Ui_IntroWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTROWINDOW_H
