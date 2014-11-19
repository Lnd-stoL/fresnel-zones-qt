#include "phaseplatewindow.h"
#include "ui_phaseplatewindow.h"

PhasePlateWindow::PhasePlateWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PhasePlateWindow)
{
    ui->setupUi(this);
}

PhasePlateWindow::~PhasePlateWindow()
{
    delete ui;
}
