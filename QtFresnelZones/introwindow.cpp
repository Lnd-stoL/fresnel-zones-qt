#include "introwindow.h"
#include "ui_introwindow.h"

IntroWindow::IntroWindow(Fresnel *fresnel) :
    QMainWindow(nullptr),
    ui(new Ui::IntroWindow),
    _fresnel(fresnel)
{
    ui->setupUi(this);
}

IntroWindow::~IntroWindow()
{
    delete ui;
}
