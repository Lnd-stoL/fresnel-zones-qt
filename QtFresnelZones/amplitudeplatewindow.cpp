
#include "amplitudeplatewindow.h"
#include "ui_amplitudeplatewindow.h"


AmplitudePlateWindow::AmplitudePlateWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AmplitudePlateWindow)
{
    ui->setupUi(this);

    connect (ui->pushButton_Back, SIGNAL(clicked()), this, SLOT(button_Back_Pressed()));
}


AmplitudePlateWindow::~AmplitudePlateWindow()
{
    delete ui;
}


void AmplitudePlateWindow::button_Back_Pressed()
{
    this->close();
}
