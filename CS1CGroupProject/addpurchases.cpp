#include "addpurchases.h"
#include "ui_addpurchases.h"

AddPurchases::AddPurchases(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddPurchases)
{
    ui->setupUi(this);
    itemModel = new QSqlQueryModel;
    memberModel = new QSqlQueryModel;
    QString i = "1";
    itemModel->setQuery("SELECT DISTINCT itemName, itemPrice FROM item WHERE activeItem =\"" + i + "\"");
    ui->itemTable->setModel(itemModel);
    memberModel->setQuery("SELECT DISTINCT memberName, memberId FROM item WHERE activeMember =\"" + i + "\"");
    ui->memberTable->setModel(memberModel);
    ui->quantityLine->setValidator(new QIntValidator(0, 100, this));
}

AddPurchases::~AddPurchases()
{
    delete ui;
}

void AddPurchases::on_memberTable_clicked(const QModelIndex &index)
{
    QString name;
    name = index.siblingAtColumn(0).data().toString();
    ui->memberLine->setText(name);
}


void AddPurchases::on_itemTable_clicked(const QModelIndex &index)
{
    QString name;
    name = index.siblingAtColumn(0).data().toString();
    ui->itemLine->setText(name);
}


void AddPurchases::on_addPurchase_clicked()
{
    QString q;
    QSqlQuery s;
    QString itemName = ui->itemLine->text();
    QString memberName = ui->memberLine->text();
    QString memberId, memberType, expDate, itemPrice, expCost;
    QString date = ui->dateLine->currentText();
    QString quantity = ui->quantityLine->text();
    QString i = "1";
    QSqlQuery query("SELECT DISTINCT memberId, memberType, expDate FROM item WHERE memberName = \"" + memberName + "\"");
    if (query.next())
    {
        memberId = query.value(0).toString();
        memberType = query.value(1).toString();
        expDate = query.value(2).toString();
        if(memberType == "Regular")
        {
            expCost = "$65.00";
        }
        else
        {
            expCost = "$120.00";
        }
    }
    QSqlQuery x("SELECT DISTINCT itemPrice FROM item WHERE itemName = \"" + itemName + "\"");
    if (x.next())
    {
        itemPrice = x.value(0).toString();
    }
    s.prepare("SELECT * FROM bulkClub WHERE memberName=:name");
    query.bindValue(":name", memberName);
    q = "INSERT INTO item (memberName, memberType, expDate, itemName, memberId, itemPrice, quantity, date, expCost, activeMember, activeItem) VALUES (\"" + memberName + "\",\"" + memberType + "\",\"" + expDate + "\",\"" + itemName + "\", \"" + memberId + "\", \"" + itemPrice + "\", \"" + quantity + "\", \"" + date + "\", \"" + expCost + "\",\"" + i + "\",\"" + i + "\");";
    if (!s.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
    else QMessageBox::information(this, "Update", "Purchase received!");
}



