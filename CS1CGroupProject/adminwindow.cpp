#include "adminwindow.h"
#include "ui_adminwindow.h"

AdminWindow::AdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::editMemberClicked()
{
    hide();
    delete ui;
    editMember = new EditMember(this);
    editMember->show();
}

void AdminWindow::editItemClicked()
{}
