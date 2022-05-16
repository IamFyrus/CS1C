#include "searchitem.h"
#include "ui_searchitem.h"

SearchItem::SearchItem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchItem)
{
    ui->setupUi(this);
}

SearchItem::~SearchItem()
{
    delete ui;
}

void SearchItem::on_editItemButton_clicked()
{
    QString input = ui->itemNameLine->text();

    QSqlQuery query("SELECT SUM(itemPrice * quantity) FROM item WHERE itemName = \"" + input + "\"");
    if (query.next()) ui->priceLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
    if (ui->priceLabel->text() == "") ui->priceLabel->setText("0.00");

    QSqlQuery q("SELECT SUM(quantity) FROM item WHERE itemName =\"" + input + "\"");
    if (q.next()) ui->quantLabel->setText(QString::number(q.value(0).toDouble()));
    if (ui->quantLabel->text() == "") ui->quantLabel->setText("0");
}

