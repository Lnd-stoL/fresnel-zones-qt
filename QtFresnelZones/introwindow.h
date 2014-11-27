#ifndef INTROWINDOW_H
#define INTROWINDOW_H

#include "fresnel.h"
#include "schemegraph.h"
#include "zonesgraph.h"
#include "spiralgraph.h"

#include <QMainWindow>

namespace Ui {
class IntroWindow;
}

class IntroWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit IntroWindow(Fresnel *fresnel);
    ~IntroWindow();

private:
    Fresnel *_fresnel = nullptr;
    Ui::IntroWindow *ui;
};

#endif // INTROWINDOW_H
