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
    EditMember* editMember = new EditMember(this);
    editMember->show();
}


void AdminWindow::on_editItemButton_clicked()
{
    hide();
    delete ui;
   EditItem* editItem = new EditItem(this);
    editItem->show();
}


void AdminWindow::on_addPurchaseButton_clicked()
{
    hide();
    delete ui;
    AddPurchases* addPurchase = new AddPurchases(this);
    addPurchase->show();
}




void AdminWindow::conversionsClicked()
{
    hide();
    delete ui;
    Conversions* conversions = new Conversions(this);
    conversions->show();
}

