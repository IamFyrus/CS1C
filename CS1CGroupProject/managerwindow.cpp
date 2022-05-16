#include "managerwindow.h"
#include "ui_managerwindow.h"


ManagerWindow::ManagerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManagerWindow)
{
    ui->setupUi(this);

}

ManagerWindow::~ManagerWindow()
{
    delete ui;
}

void ManagerWindow::displayButtonClicked()
{
    hide();
    delete ui;
    SelectDay* selectWindow = new SelectDay(this);
    selectWindow->show();
}
void ManagerWindow::memberButtonClicked()
{
    hide();
    delete ui;
    MemberInfo* memberWindow = new MemberInfo(this);
    memberWindow->show();
}
