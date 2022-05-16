#include "edititem.h"
#include "ui_edititem.h"

EditItem::EditItem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditItem)
{
    ui->setupUi(this);
    itemModel = new QSqlQueryModel;
    QString i = "1";
    itemModel->setQuery("SELECT DISTINCT itemName, itemPrice FROM item WHERE activeItem =\"" + i + "\"");
    ui->editItemTable->setModel(itemModel);
}

EditItem::~EditItem()
{
    delete ui;
}

void EditItem::on_editItemTable_clicked(const QModelIndex &index)
{
    QString name;
    name = index.siblingAtColumn(0).data().toString();
    ui->itemNameLine->setText(name);
    QSqlQuery query("SELECT DISTINCT itemPrice FROM item WHERE itemName = \"" + name + "\"");
    if (query.next()) ui->itemPriceLine->setText(query.value(0).toString());
}


void EditItem::on_addItemButton_clicked()
{
    QString q;
    QSqlQuery query;
    QString name = ui->itemNameLine->text();
    QString price = ui->itemPriceLine->text();
    QString i = "1";
    query.prepare("SELECT * FROM bulkClub WHERE name=:name");
    query.bindValue(":name", name);
    q = "INSERT INTO item (itemName, itemPrice, memberName, memberId, memberType, expDate, quantity, date, expCost, activeMember, activeItem) VALUES (\"" + name + "\", \"" + price + "\", \"" + "" + "\", \"" + "" + "\", \"" + " " + "\", \"" + " " + "\", \""+ " " + "\", \"" + "\", \"" + "\", \"" + "" + "\", \"" + i + "\");";
    if (!query.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
    itemModel->setQuery("SELECT DISTINCT itemName, itemPrice FROM item WHERE activeItem =\"" + i + "\"");
    ui->editItemTable->setModel(itemModel);
}


void EditItem::on_editItemButton_clicked()
{
    QString q;
    QSqlQuery query;
    QString name = ui->itemNameLine->text();
    QString price = ui->itemPriceLine->text();
    QString i = "1";
    query.prepare("SELECT * FROM bulkClub WHERE name=:name");
    query.bindValue(":name", name);
    q = "UPDATE item SET itemPrice =\"" + price + "\" WHERE itemName =\"" + name + "\";";
    if (!query.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
    itemModel->setQuery("SELECT DISTINCT itemName, itemPrice FROM item WHERE activeItem =\"" + i + "\"");
    ui->editItemTable->setModel(itemModel);
}


void EditItem::on_deleteItemButton_clicked()
{
    QString q;
    QSqlQuery query;
    QString name = ui->itemNameLine->text();
    QString price = ui->itemPriceLine->text();
    QString i = "0";
    QString j = "1";

    q = "UPDATE item SET activeItem =\"" + i + "\" WHERE itemName =\"" + name + "\" AND itemPrice =\"" + price + "\"";
    if (!query.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
    itemModel->setQuery("SELECT DISTINCT itemName, itemPrice FROM item WHERE activeItem =\"" + j + "\"");
    ui->editItemTable->setModel(itemModel);

}

