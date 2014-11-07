
#include "fresnel.h"
#include <QApplication>
#include "titlewindow.h"
#include "intensitygraphwindow.h"


int main (int argc, char *argv[])
{
    QApplication a (argc, argv);
    TitleWindow w;
    w.showFullScreen();

    return a.exec();
}
