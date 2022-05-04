#include "managerwindow.h"
#include "ui_managerwindow.h"

ManagerWindow::ManagerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManagerWindow)
{
    ui->setupUi(this);
    memberFile = "../CS1CGroupProject/member.txt";
    parser.memberImport(memberFile); // comment out when using persistent database.

    for(int i=1; i<=7; i++)
    {
        itemFile = "../CS1CGroupProject/day" + std::to_string(i) + ".txt";
        parser.itemImport(itemFile);
    }
}

ManagerWindow::~ManagerWindow()
{
    delete ui;
}

void ManagerWindow::displayButtonClicked()
{
    hide();
    delete ui;
    selectWindow = new SelectDay(this);
    selectWindow->show();
}
void ManagerWindow::memberButtonClicked()
{
    hide();
    delete ui;
    memberWindow = new MemberInfo(this);
    memberWindow->show();
}
