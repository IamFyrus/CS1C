#include "searchmember.h"
#include "ui_searchmember.h"

searchMember::searchMember(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::searchMember)
{
    ui->setupUi(this);
    ui->memberIdLine->setValidator(new QIntValidator(0, 1000, this));

}

searchMember::~searchMember()
{
    delete ui;
}

void searchMember::on_searchName_clicked()
{
    QString input = ui->memberNameLine->text();

    QSqlQuery q("SELECT SUM(itemPrice * quantity) FROM item WHERE memberName = \"" + input + "\"");
    if (q.next()) ui->priceLabel->setText(QString::number(q.value(0).toDouble(), 'f', 2));
    else
    if (ui->priceLabel->text() == "") ui->priceLabel->setText("0.00");

    QSqlQuery x("SELECT SUM(quantity) FROM item WHERE memberName =\"" + input + "\"");
    if (x.next()) ui->quantLabel->setText(QString::number(x.value(0).toDouble()));
    if (ui->quantLabel->text() == "") ui->quantLabel->setText("0");
}


void searchMember::on_searchId_clicked()
{
    QString input = ui->memberIdLine->text();

    QSqlQuery query("SELECT SUM(itemPrice * quantity) FROM item WHERE memberId = \"" + input + "\"");
    if (query.next()) ui->priceLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
    if (ui->priceLabel->text() == "") ui->priceLabel->setText("0.00");

    QSqlQuery q("SELECT SUM(quantity) FROM item WHERE memberId =\"" + input + "\"");
    if (q.next()) ui->quantLabel->setText(QString::number(q.value(0).toDouble()));
    if (ui->quantLabel->text() == "") ui->quantLabel->setText("0");
}

