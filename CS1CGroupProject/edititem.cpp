#include "edititem.h"
#include "ui_edititem.h"


/* ==== EditItem::Constructor ====================================
    Constructor used to initialize the ui and QSqlQueryModel
    itemModel. It also sets the table editItemTable to display
    the existing item names and prices, and uses a
    QDoubleValidator to make the editLine itemPriceLine only
    able to accept numbers.
================================================================== */
EditItem::EditItem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditItem)
{
    ui->setupUi(this);
    itemModel = new QSqlQueryModel;
    QString i = "1";
    itemModel->setQuery("SELECT DISTINCT itemName, itemPrice FROM item WHERE activeItem =\"" + i + "\"");
    ui->editItemTable->setModel(itemModel);
    ui->itemPriceLine->setValidator(new QDoubleValidator(0.00, 1000.00, 2));
}
/* ==== EditItem::Destructor =====================================
    Destructor used to delete the ui and QSqlQueryModel
    itemModel.
================================================================== */
EditItem::~EditItem()
{
    delete ui;
    delete itemModel;
}
/* ==== EditItem::on_editItemTable_clicked =======================
    on_editItemTable_clicked used to update the lineEdits
    itemNameLine and itemPriceLine to contain the information
    selected in editItemTable.
================================================================== */
void EditItem::on_editItemTable_clicked(const QModelIndex &index)
{
    QString name;
    name = index.siblingAtColumn(0).data().toString();
    ui->itemNameLine->setText(name);
    QSqlQuery query("SELECT DISTINCT itemPrice FROM item WHERE itemName = \"" + name + "\"");
    if (query.next()) ui->itemPriceLine->setText(query.value(0).toString());
}

/* ==== EditItem::on_addItemButton_clicked =======================
    on_addItemButton_clicked used to get text from the lineEdits
    itemNameLine and itemPriceLine, and enter a new item into the
    database using the information provided.
================================================================== */
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

/* ==== EditItem::on_editItemButton_clicked ======================
    on_editItemButton_clicked used to get text from the lineEdits
    itemNameLine and itemPriceLine, and updates the price of the
    item indicated to contain the price provided in itemPriceLine.
================================================================== */
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


/* ==== EditItem::on_deleteItemButton_clicked ======================
    on_deleteItemButton_clicked used to get text from the lineEdits
    itemNameLine and itemPriceLine, and deletes the item indicated
    from the inventory. It does this by making one of the values
    in the database equal to 0 instead of 1, so that way the
    previous purchases of this item still remain.
================================================================== */
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






void EditItem::on_returnButton_clicked()
{
    hide();
    //delete ui;
    AdminWindow* adminWindow = new AdminWindow(this);
    adminWindow->show();
}

