#include "searchitem.h"
#include "ui_searchitem.h"

/* ==== SearchItem::Constructor ==================================
    Constructor used to initialize the ui.
================================================================== */
SearchItem::SearchItem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchItem)
{
    ui->setupUi(this);
}


/* ==== SearchItem::Destructor ==================================
    Destructor used to delete the ui.
================================================================== */
SearchItem::~SearchItem()
{
    delete ui;
}

/* ==== SearchItem::on_searchItemButton_clicked ===================
    on_searchItemButton_clicked used to search for item indicated
    in lineEdit itemNameLine. It will display the total price of
    all of the purchases of the indicated item in label priceLabel,
    and show the total quantity bought of the indicated item in
    label quantLabel.
================================================================== */
void SearchItem::on_searchItemButton_clicked()
{
    QString input = ui->itemNameLine->text();

    QSqlQuery query("SELECT SUM(itemPrice * quantity) FROM item WHERE itemName = \"" + input + "\"");
    if (query.next()) ui->priceLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
    if (ui->priceLabel->text() == "") ui->priceLabel->setText("0.00");

    QSqlQuery q("SELECT SUM(quantity) FROM item WHERE itemName =\"" + input + "\"");
    if (q.next()) ui->quantLabel->setText(QString::number(q.value(0).toDouble()));
    if (ui->quantLabel->text() == "") ui->quantLabel->setText("0");
}

