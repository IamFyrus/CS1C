#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H

#include <QMainWindow>
#include <QObject>
#include "parser.h"
#include "selectday.h"
#include "memberinfo.h"

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
    std::string memberFile;
    std::string itemFile;
    parser parser;
    SelectDay* selectWindow;
    MemberInfo* memberWindow;
};

#endif // MANAGERWINDOW_H
