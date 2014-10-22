#include "intensitygraphwindow.h"
#include "ui_intensitygraphwindow.h"

IntensityGraphWindow::IntensityGraphWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::IntensityGraphWindow)
{
    ui->setupUi(this);
}

IntensityGraphWindow::~IntensityGraphWindow()
{
    delete ui;
}
