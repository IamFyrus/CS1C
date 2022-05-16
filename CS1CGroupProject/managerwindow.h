#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H

#include <QMainWindow>
#include <QObject>
#include "parser.h"
#include "selectday.h"
#include "memberinfo.h"
#include "login.h"

namespace Ui {
class ManagerWindow;
}

class ManagerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManagerWindow(QWidget *parent = nullptr);
    ~ManagerWindow();
public slots:
    void displayButtonClicked();
    void memberButtonClicked();
private:
    Ui::ManagerWindow *ui;
    //SelectDay* selectWindow;
    //MemberInfo* memberWindow;
};

#endif // MANAGERWINDOW_H
