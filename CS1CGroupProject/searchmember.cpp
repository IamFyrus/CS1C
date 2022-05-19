#include "searchmember.h"
#include "ui_searchmember.h"

/* ==== searchMember::Constructor ==================================
    Constructor used to initialize the ui and set a QIntValidator
    so that the lineEdit memberIdLine can only contain numbers.
================================================================== */
searchMember::searchMember(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::searchMember)
{
    ui->setupUi(this);
    ui->memberIdLine->setValidator(new QIntValidator(0, 9999999, this));

}

/* ==== searchMember::Destructor ==================================
    Destructor used to delete the ui.
================================================================== */
searchMember::~searchMember()
{
    delete ui;
}

/* ==== searchMember::on_searchName_clicked ======================
    on_searchName_clicked used to take text of memberNameLine and
    display the total amount spent and the quantity of items
    bought by the indicated user.
================================================================== */
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

/* ==== searchMember::on_searchId_clicked ========================
    on_searchId_clicked used to take text of memberIdLine and
    display the total amount spent and the quantity of items
    bought by the indicated user.
================================================================== */
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


void searchMember::on_returnButton_clicked()
{
    hide();
    //delete ui;
    SelectDay* selectWindow = new SelectDay(this);
    selectWindow->show();
}

