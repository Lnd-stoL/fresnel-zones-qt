
#ifndef AUTHORSWINDOW_H
#define AUTHORSWINDOW_H

#include <QMainWindow>
#include "fresnel.h"


namespace Ui {
class AuthorsWindow;
}


class AuthorsWindow : public QMainWindow
{
    Q_OBJECT

private:
    Fresnel fresnel;

public:
    explicit AuthorsWindow (QWidget *parent = 0);
    ~AuthorsWindow();

public slots:
    void exitApplication();

private:
    Ui::AuthorsWindow *ui;
};

#endif // AuthorsWindow_H
