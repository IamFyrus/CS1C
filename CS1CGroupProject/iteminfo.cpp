#include "iteminfo.h"
#include "ui_iteminfo.h"


/* ==== ItemInfo::Constructor ====================================
    Constructor used to initialize the ui and QSqlQueryModels
    itemModel and quantModel. It also uses helper function
    displayItems to display the current item names in the table
    itemTable.
================================================================== */
ItemInfo::ItemInfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ItemInfo)
{
    ui->setupUi(this);
    itemModel = new QSqlQueryModel;
    quantModel = new QSqlQueryModel;
    displayItems();
}

/* ==== ItemInfo::Destructor =====================================
    Destructor used to delete the ui and QSqlQueryModels itemModel
    and quantModel.
================================================================== */
ItemInfo::~ItemInfo()
{
    delete ui;
    delete itemModel;
    delete quantModel;
}

/* ==== ItemInfo::displayItems ===================================
    displayItems used to display the current item names in the
    table itemTable.
================================================================== */
void ItemInfo::displayItems()
{
    itemModel->setQuery("SELECT DISTINCT itemName FROM item ORDER BY itemName");
    ui->itemTable->setModel(itemModel);
}

/*void ItemInfo::initTable()
{
    parser p;
    std::string s;
    QString q;
    QSqlQuery query;
    int x;
    int y;
    bool valid = true;
    for(int i = 0; i < p.getItemNameSize(); i++)
    {
        for(int j = 0; j < itemName.size(); j++)
        {
        if(p.getItemName(i) == itemName[j])
            valid = false;
        x = i;
        y = j;

        }
        if(valid==true)
        {
            itemName.push_back(p.getItemName(i));
            quantity.push_back(p.getQuantity(i));
            itemPrice.push_back(p.getItemPrice(i));
        }
        else
        {
            quantity[y] += p.getQuantity(x);
        }
    }

    for(int i = 0; i < itemName.size(); i++)
    {
        s = "INSERT INTO total VALUES (\"" + itemName[i] + "\",\"" + itemPrice[i] + "\",\"" + std::to_string(quantity[i]) + "\");";
        q = QString::fromStdString(s);
        if (!query.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();
    }

}
*/

/* ==== ItemInfo::on_itemTable_clicked ===========================
    on_itemTable_clicked used to display the values memberName,
    itemPrice, and quantity from each purchase of the indicated
    item onto table quantTable. It also calculates and displays
    the total sum of all of the purchases in label totalPrice,
    and calculates and displays the total quantity of the
    indicated item purchases in label totalQuantity.
================================================================== */

void ItemInfo::on_itemTable_clicked(const QModelIndex &index)
{
    QString name;
    name = index.siblingAtColumn(0).data().toString();
    quantModel->setQuery("SELECT  memberName, itemPrice, quantity FROM item WHERE itemName =\"" + name + "\"");
    ui->quantTable->setModel(quantModel);
    QSqlQuery query("SELECT SUM(itemPrice * quantity) FROM item WHERE itemName =\"" + name + "\"");
    if (query.next()) ui->totalPrice->setText(QString::number(query.value(0).toDouble(), 'f', 2));
    if (ui->totalPrice->text() == "") ui->totalPrice->setText("0.00");
    QSqlQuery q("SELECT SUM(quantity) FROM item WHERE itemName =\"" + name + "\"");
    if (q.next()) ui->totalQuantity->setText(QString::number(q.value(0).toDouble()));
    if (ui->totalQuantity->text() == "") ui->totalQuantity->setText("0.00");
}

