/********************************************************************************
** Form generated from reading UI file 'authorswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORSWINDOW_H
#define UI_AUTHORSWINDOW_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "fontscalablelabel.h"
#include "fontscalablepushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_AuthorsWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    FontScalableLabel *label_7;
    FontScalableLabel *label_3;
    QVBoxLayout *verticalLayout;
    FontScalableLabel *label_4;
    FontScalableLabel *label_5;
    FontScalableLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    FontScalableLabel *label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_5;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_3;
    FontScalableLabel *label_2;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QFrame *line;
    FontScalablePushButton *pushButton_Menu;
    QLabel *label_9;
    QLabel *label_8;

    void setupUi(QMainWindow *AuthorsWindow)
    {
        if (AuthorsWindow->objectName().isEmpty())
            AuthorsWindow->setObjectName(QStringLiteral("AuthorsWindow"));
        AuthorsWindow->resize(1382, 913);
        centralwidget = new QWidget(AuthorsWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new FontScalableLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        label_7->setFont(font);

        horizontalLayout_4->addWidget(label_7, 0, Qt::AlignHCenter);

        label_3 = new FontScalableLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3, 0, Qt::AlignHCenter);


        gridLayout->addLayout(horizontalLayout_4, 7, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, -1, 6, -1);
        label_4 = new FontScalableLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        font1.setItalic(false);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new FontScalableLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(18);
        font2.setItalic(false);
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        label_6 = new FontScalableLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(36);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setStyleSheet(QStringLiteral("image: url(:/cmc-logo.png);"));

        verticalLayout_2->addWidget(widget_2);

        label = new FontScalableLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(16);
        font4.setItalic(false);
        font4.setKerning(true);
        label->setFont(font4);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignBottom);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        widget_5->setMinimumSize(QSize(0, 260));
        widget_5->setStyleSheet(QStringLiteral("image: url(:sanya.png);"));

        horizontalLayout_3->addWidget(widget_5);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(0, 260));
        widget_4->setStyleSheet(QStringLiteral("image: url(:lenya.png);"));

        horizontalLayout_3->addWidget(widget_4);


        gridLayout->addLayout(horizontalLayout_3, 6, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setStyleSheet(QStringLiteral("image: url(:/phys-logo.png);"));

        verticalLayout_4->addWidget(widget_3);

        label_2 = new FontScalableLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignBottom);


        gridLayout->addLayout(verticalLayout_4, 1, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_7, 12, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 9, 1, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 70));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        gridLayout->addWidget(widget, 11, 1, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 3);

        pushButton_Menu = new FontScalablePushButton(centralwidget);
        pushButton_Menu->setObjectName(QStringLiteral("pushButton_Menu"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_Menu->sizePolicy().hasHeightForWidth());
        pushButton_Menu->setSizePolicy(sizePolicy2);
        pushButton_Menu->setMinimumSize(QSize(0, 50));
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        font5.setPointSize(20);
        font5.setBold(false);
        font5.setWeight(50);
        pushButton_Menu->setFont(font5);
        pushButton_Menu->setStyleSheet(QLatin1String("padding-top:15%;\n"
"padding-bottom:15%"));

        gridLayout->addWidget(pushButton_Menu, 11, 2, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 5, 1, 1, 1, Qt::AlignHCenter);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 10, 1, 1, 1, Qt::AlignHCenter);

        gridLayout->setColumnStretch(0, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        AuthorsWindow->setCentralWidget(centralwidget);

        retranslateUi(AuthorsWindow);

        QMetaObject::connectSlotsByName(AuthorsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AuthorsWindow)
    {
        AuthorsWindow->setWindowTitle(QApplication::translate("AuthorsWindow", "MainWindow", 0));
        label_7->setText(QApplication::translate("AuthorsWindow", "\320\220\320\273\320\265\320\272\321\201\320\260\320\275\320\264\321\200 \320\246\320\260\321\200\321\214\320\272\320\276\320\262", 0));
        label_3->setText(QApplication::translate("AuthorsWindow", "\320\233\320\265\320\276\320\275\320\270\320\264 \320\241\321\202\320\276\320\273\321\217\321\200\320\276\320\262", 0));
        label_4->setText(QApplication::translate("AuthorsWindow", "\320\234\320\276\321\201\320\272\320\276\320\262\321\201\320\272\320\270\320\271 \320\263\320\276\321\201\321\203\320\264\320\260\321\200\321\201\321\202\320\262\320\265\320\275\320\275\321\213\320\271 \321\203\320\275\320\270\320\262\320\265\321\200\321\201\320\270\321\202\320\265\321\202 \320\270\320\274\320\265\320\275\320\270 \320\234.\320\222. \320\233\320\276\320\274\320\276\320\275\320\276\321\201\320\276\320\262\320\260", 0));
        label_5->setText(QApplication::translate("AuthorsWindow", "\320\232\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\275\321\213\320\265 \320\264\320\265\320\274\320\276\320\275\321\201\321\202\321\200\320\260\321\206\320\270\320\270 \320\277\320\276 \320\272\321\203\321\200\321\201\321\203 \320\273\320\265\320\272\321\206\320\270\320\271\n"
"\"\320\244\320\270\320\267\320\270\320\272\320\260 \320\262\320\276\320\273\320\275\320\276\320\262\321\213\321\205 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\320\262\"", 0));
        label_6->setText(QApplication::translate("AuthorsWindow", "\320\227\320\276\320\275\320\275\320\260\321\217 \320\277\320\273\320\260\321\201\321\202\320\270\320\275\320\272\320\260 \320\244\321\200\320\265\320\275\320\265\320\273\321\217", 0));
        label->setText(QApplication::translate("AuthorsWindow", "\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202 \320\222\320\234\320\232", 0));
        label_2->setText(QApplication::translate("AuthorsWindow", "\320\244\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\204\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202", 0));
        pushButton_Menu->setText(QApplication::translate("AuthorsWindow", "\320\222 \320\274\320\265\320\275\321\216", 0));
        label_9->setText(QApplication::translate("AuthorsWindow", "\320\220\320\262\321\202\320\276\321\200\321\213", 0));
        label_8->setText(QApplication::translate("AuthorsWindow", "\320\233\320\265\320\272\321\202\320\276\321\200\321\213: \320\222.\320\237. \320\232\320\260\320\275\320\264\320\270\320\264\320\276\320\262, \320\220.\320\256. \320\247\320\270\320\272\320\270\321\210\320\265\320\262", 0));
    } // retranslateUi

};

namespace Ui {
    class AuthorsWindow: public Ui_AuthorsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORSWINDOW_H
