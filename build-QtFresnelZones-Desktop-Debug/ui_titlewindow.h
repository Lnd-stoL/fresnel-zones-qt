/********************************************************************************
** Form generated from reading UI file 'titlewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLEWINDOW_H
#define UI_TITLEWINDOW_H

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
#include <QtWidgets/QWidget>
#include "fontscalablelabel.h"
#include "fontscalablepushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_TitleWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    FontScalablePushButton *pushButton_IntensityGraph;
    QSpacerItem *verticalSpacer;
    FontScalablePushButton *pushButton_Intro;
    QSpacerItem *verticalSpacer_5;
    FontScalablePushButton *pushButton_PhasePlate;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    FontScalablePushButton *pushButton_Exit;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QFrame *line;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    FontScalableLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    FontScalablePushButton *pushButton_PhasePlate_2;
    FontScalablePushButton *pushButton_AmplitudePlate;
    QSpacerItem *verticalSpacer_9;
    QWidget *widget_2;
    QWidget *widget_3;

    void setupUi(QMainWindow *TitleWindow)
    {
        if (TitleWindow->objectName().isEmpty())
            TitleWindow->setObjectName(QStringLiteral("TitleWindow"));
        TitleWindow->resize(1289, 1099);
        centralwidget = new QWidget(TitleWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_IntensityGraph = new FontScalablePushButton(centralwidget);
        pushButton_IntensityGraph->setObjectName(QStringLiteral("pushButton_IntensityGraph"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_IntensityGraph->sizePolicy().hasHeightForWidth());
        pushButton_IntensityGraph->setSizePolicy(sizePolicy);
        pushButton_IntensityGraph->setMinimumSize(QSize(0, 70));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        pushButton_IntensityGraph->setFont(font);
        pushButton_IntensityGraph->setStyleSheet(QLatin1String("padding-top:15%;\n"
"padding-bottom:15%"));

        gridLayout->addWidget(pushButton_IntensityGraph, 7, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 14, 1, 1, 1);

        pushButton_Intro = new FontScalablePushButton(centralwidget);
        pushButton_Intro->setObjectName(QStringLiteral("pushButton_Intro"));
        sizePolicy.setHeightForWidth(pushButton_Intro->sizePolicy().hasHeightForWidth());
        pushButton_Intro->setSizePolicy(sizePolicy);
        pushButton_Intro->setMinimumSize(QSize(0, 0));
        pushButton_Intro->setFont(font);
        pushButton_Intro->setToolTipDuration(-1);
        pushButton_Intro->setStyleSheet(QLatin1String("padding-top:15%;\n"
"padding-bottom:15%"));
        pushButton_Intro->setCheckable(false);
        pushButton_Intro->setDefault(false);
        pushButton_Intro->setFlat(false);

        gridLayout->addWidget(pushButton_Intro, 5, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 6, 1, 1, 1);

        pushButton_PhasePlate = new FontScalablePushButton(centralwidget);
        pushButton_PhasePlate->setObjectName(QStringLiteral("pushButton_PhasePlate"));
        sizePolicy.setHeightForWidth(pushButton_PhasePlate->sizePolicy().hasHeightForWidth());
        pushButton_PhasePlate->setSizePolicy(sizePolicy);
        pushButton_PhasePlate->setMinimumSize(QSize(0, 70));
        pushButton_PhasePlate->setFont(font);
        pushButton_PhasePlate->setStyleSheet(QLatin1String("padding-top:15%;\n"
"padding-bottom:15%"));

        gridLayout->addWidget(pushButton_PhasePlate, 11, 1, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 70));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_Exit = new FontScalablePushButton(widget);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        sizePolicy.setHeightForWidth(pushButton_Exit->sizePolicy().hasHeightForWidth());
        pushButton_Exit->setSizePolicy(sizePolicy);
        pushButton_Exit->setMinimumSize(QSize(0, 0));
        pushButton_Exit->setFont(font);
        pushButton_Exit->setStyleSheet(QLatin1String("background-color:rgb(230, 230, 230);\n"
"padding-top:10%;\n"
"padding-bottom:10%;\n"
"padding-left:10%;\n"
"padding-right:10%"));
        pushButton_Exit->setDefault(true);

        horizontalLayout->addWidget(pushButton_Exit, 0, Qt::AlignHCenter);


        gridLayout->addWidget(widget, 15, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_6, 8, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 2, 1, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 3);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_7, 16, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_8, 10, 1, 1, 1);

        label_3 = new FontScalableLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        pushButton_PhasePlate_2 = new FontScalablePushButton(centralwidget);
        pushButton_PhasePlate_2->setObjectName(QStringLiteral("pushButton_PhasePlate_2"));
        sizePolicy.setHeightForWidth(pushButton_PhasePlate_2->sizePolicy().hasHeightForWidth());
        pushButton_PhasePlate_2->setSizePolicy(sizePolicy);
        pushButton_PhasePlate_2->setMinimumSize(QSize(0, 70));
        pushButton_PhasePlate_2->setFont(font);
        pushButton_PhasePlate_2->setStyleSheet(QLatin1String("padding-top:15%;\n"
"padding-bottom:15%"));

        gridLayout->addWidget(pushButton_PhasePlate_2, 13, 1, 1, 1);

        pushButton_AmplitudePlate = new FontScalablePushButton(centralwidget);
        pushButton_AmplitudePlate->setObjectName(QStringLiteral("pushButton_AmplitudePlate"));
        sizePolicy.setHeightForWidth(pushButton_AmplitudePlate->sizePolicy().hasHeightForWidth());
        pushButton_AmplitudePlate->setSizePolicy(sizePolicy);
        pushButton_AmplitudePlate->setMinimumSize(QSize(0, 70));
        pushButton_AmplitudePlate->setFont(font);
        pushButton_AmplitudePlate->setStyleSheet(QLatin1String("padding-top:15%;\n"
"padding-bottom:15%"));

        gridLayout->addWidget(pushButton_AmplitudePlate, 9, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_9, 12, 1, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/cmc-logo.svg);"));

        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/phys-logo.svg);"));

        gridLayout->addWidget(widget_3, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        TitleWindow->setCentralWidget(centralwidget);

        retranslateUi(TitleWindow);

        QMetaObject::connectSlotsByName(TitleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TitleWindow)
    {
        TitleWindow->setWindowTitle(QApplication::translate("TitleWindow", "MainWindow", 0));
        pushButton_IntensityGraph->setText(QApplication::translate("TitleWindow", "\320\230\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214 \320\275\320\260 \320\276\321\201\320\270", 0));
        pushButton_Intro->setText(QApplication::translate("TitleWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \320\267\320\276\320\275 \320\244\321\200\320\265\320\275\320\265\320\273\321\217", 0));
        pushButton_PhasePlate->setText(QApplication::translate("TitleWindow", "\320\244\320\260\320\267\320\276\320\262\320\260\321\217 \320\277\320\273\320\260\321\201\321\202\320\270\320\275\320\272\320\260", 0));
        pushButton_Exit->setText(QApplication::translate("TitleWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        label_3->setText(QApplication::translate("TitleWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\320\234\320\276\321\201\320\272\320\276\320\262\321\201\320\272\320\270\320\271 \320\223\320\276\321\201\321\203\320\264\320\260\321\200\321\201\321\202\320\262\320\265\320\275\320\275\321\213\320\271 \320\243\320\275\320\270\320\262\320\265\321\200\321\201\320\270\321\202\320\265\321\202 \320\270\320\274. \320\234.\320\222. \320\233\320\276\320\274\320\276\320\275\320\276\321\201\320\276\320\262\320\260</span></p><p align=\"center\"><span style=\" font-size:18pt;\">\320\232\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\275\321\213\320\265 \320\264\320\265\320\274\320\276\320\275\321\201\321\202\321\200\320\260\321\206\320\270\320\270 \320\277\320\276 \320\272\321\203\321\200\321\201\321\203 \320\273\320\265\320\272\321\206\320\270\320\271 &quot;\320\244\320\270\320\267\320\270\320\272\320\260 \320\262\320\276\320\273\320\275\320\276\320\262\321\213\321\205 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320"
                        "\276\320\262&quot;</span></p><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:36pt; font-weight:600;\">\320\227\320\276\320\275\320\275\320\260\321\217 \320\277\320\273\320\260\321\201\321\202\320\270\320\275\320\272\320\260 \320\244\321\200\320\265\320\275\320\265\320\273\321\217</span></p></body></html>", 0));
        pushButton_PhasePlate_2->setText(QApplication::translate("TitleWindow", "\320\220\320\262\321\202\320\276\321\200\321\213", 0));
        pushButton_AmplitudePlate->setText(QApplication::translate("TitleWindow", "\320\220\320\274\320\277\320\273\320\270\321\202\321\203\320\264\320\275\320\260\321\217 \320\277\320\273\320\260\321\201\321\202\320\270\320\275\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class TitleWindow: public Ui_TitleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEWINDOW_H
