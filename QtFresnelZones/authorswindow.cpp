
#include "authorswindow.h"
#include "ui_authorswindow.h"
#include "introwindow.h"
#include "intensitygraphwindow.h"
#include "amplitudeplatewindow.h"
#include "phaseplatewindow.h"
#include "qmessagebox.h"

#include <QDebug>
#include <QApplication>


AuthorsWindow::AuthorsWindow (QWidget *parent) :
    QMainWindow (parent),
    ui (new Ui::AuthorsWindow)
{
    ui->setupUi (this);

    connect (ui->pushButton_Menu, SIGNAL(clicked()), this, SLOT(exitApplication()));
}


AuthorsWindow::~AuthorsWindow()
{
    delete ui;
}

void AuthorsWindow::exitApplication()
{
    this->close();
}
