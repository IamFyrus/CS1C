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


void AdminWindow::on_editItemButton_clicked()
{
    hide();
    delete ui;
    editItem = new EditItem(this);
    editItem->show();
}


void AdminWindow::on_addPurchaseButton_clicked()
{
    hide();
    delete ui;
    addPurchase = new AddPurchases(this);
    addPurchase->show();
}




void AdminWindow::on_conversionsButton_clicked()
{
    hide();
    delete ui;
    conversions = new Conversions(this);
    conversions->show();
}

