/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"
#include "spiralgraph.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *line;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *tab_4;
    QWidget *tab_2;
    QCustomPlot *customPlot;
    QFrame *frame;
    QFrame *frame_2;
    SpiralGraph *widget;
    QLabel *label_3;
    QSlider *horizontalSlider;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_5;
    QFrame *frame_3;
    SpiralGraph *widget_2;
    QGroupBox *groupBox;
    QLabel *label_6;
    QSlider *horizontalSlider_2;
    QDoubleSpinBox *doubleSpinBox_2;
    QSlider *horizontalSlider_3;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_3;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *tab_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1246, 804);
        MainWindow->setDocumentMode(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 40, 691, 52));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(0);
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        line = new QFrame(tab);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(110, 110, 981, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 260, 621, 71));
        QFont font1;
        font1.setPointSize(18);
        pushButton->setFont(font1);
        pushButton->setAutoFillBackground(false);
        pushButton->setCheckable(false);
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 350, 621, 71));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 170, 621, 71));
        pushButton_3->setFont(font1);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setCheckable(false);
        pushButton_3->setFlat(false);
        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        customPlot = new QCustomPlot(tab_2);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(10, 10, 1201, 371));
        frame = new QFrame(customPlot);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1201, 371));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(tab_2);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(850, 390, 361, 341));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        widget = new SpiralGraph(frame_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 341, 321));
        widget->setAutoFillBackground(true);
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(900, 730, 281, 21));
        horizontalSlider = new QSlider(tab_2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 540, 401, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 560, 231, 21));
        doubleSpinBox = new QDoubleSpinBox(tab_2);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(336, 560, 81, 27));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(600, 730, 231, 21));
        frame_3 = new QFrame(tab_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(470, 390, 361, 341));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        widget_2 = new SpiralGraph(frame_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 10, 341, 321));
        widget_2->setAutoFillBackground(true);
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 510, 421, 221));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 630, 231, 21));
        horizontalSlider_2 = new QSlider(tab_2);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(20, 610, 401, 16));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        doubleSpinBox_2 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(336, 630, 81, 27));
        horizontalSlider_3 = new QSlider(tab_2);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(20, 680, 401, 16));
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 700, 231, 21));
        doubleSpinBox_3 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(336, 700, 81, 27));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 390, 401, 111));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 30, 401, 21));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 60, 401, 21));
        tabWidget->addTab(tab_2, QString());
        groupBox->raise();
        customPlot->raise();
        frame_2->raise();
        label_3->raise();
        horizontalSlider->raise();
        label_4->raise();
        doubleSpinBox->raise();
        label_5->raise();
        frame_3->raise();
        label_6->raise();
        horizontalSlider_2->raise();
        doubleSpinBox_2->raise();
        horizontalSlider_3->raise();
        label_7->raise();
        doubleSpinBox_3->raise();
        groupBox_2->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\227\320\276\320\275\321\213 \320\244\321\200\320\265\320\275\320\265\320\273\321\217", 0));
        label->setText(QApplication::translate("MainWindow", "\320\227\320\276\320\275\321\213 \320\244\321\200\320\265\320\275\320\265\320\273\321\217", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\321\214 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\320\270 \320\276\321\202 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\321\217", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\321\214 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\320\270 \320\276\321\202 \321\200\320\260\320\264\320\270\321\203\321\201\320\260 \320\276\321\202\320\262\320\265\321\200\321\201\321\202\320\270\321\217", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \320\267\320\276\320\275 \320\244\321\200\320\265\320\275\320\265\320\273\321\217", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\227\320\260\320\263\320\273\320\260\320\262\320\275\320\260\321\217 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\320\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \320\267\320\276\320\275 \320\244\321\200\320\265\320\275\320\265\320\273\321\217", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\320\265 \320\260\320\274\320\277\320\273\320\270\321\202\321\203\320\264\321\213", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\276 \320\276\321\202\320\262\320\265\321\200\321\201\321\202\320\270\321\217", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\227\320\276\320\275\321\213 \320\244\321\200\320\265\320\275\320\265\320\273\321\217", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\321\200\320\260\320\272\321\202\320\270\320\262\320\275\321\213\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", 0));
        label_6->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\264\320\270\321\203\321\201 \320\276\321\202\320\262\320\265\321\200\321\201\321\202\320\270\321\217", 0));
        label_7->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 \320\262\320\276\320\273\320\275\321\213", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\222\320\270\320\264 \320\263\321\200\320\260\321\204\320\270\320\272\320\260", 0));
        radioButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\321\214 \320\276\321\202 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\321\217 \320\264\320\276 \320\276\321\202\320\262\320\265\321\200\321\201\321\202\320\270\321\217", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\321\214 \320\276\321\202 \321\200\320\260\320\264\320\270\321\203\321\201\320\260 \320\276\321\202\320\262\320\265\321\200\321\201\321\202\320\270\321\217", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272\320\270 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\320\270 \320\275\320\260 \321\206\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\276\320\271 \320\276\321\201\320\270", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214 \320\276\321\202 \321\210\320\270\321\200\320\270\320\275\321\213 \320\276\321\202\320\262\320\265\321\200\321\201\321\202\320\270\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
