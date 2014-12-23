
#include "fresnel.h"
#include <QApplication>
#include "titlewindow.h"
#include "intensitygraphwindow.h"
#include <QStyleFactory>


int main (int argc, char *argv[])
{
    Q_INIT_RESOURCE(icons);

    QApplication::addLibraryPath (".");
    QApplication::setStyle (QStyleFactory::create ("Fusion"));

    QApplication a (argc, argv);
    TitleWindow w;
    w.showFullScreen();

    return a.exec();
}
