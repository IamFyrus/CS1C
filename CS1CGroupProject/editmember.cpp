#include "editmember.h"
#include "ui_editmember.h"

EditMember::EditMember(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditMember)
{
    ui->setupUi(this);
    memberModel = new QSqlQueryModel;
    QString i = "1";
    memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate FROM item WHERE activeMember =\"" + i + "\"");
    ui->editMemberTable->setModel(memberModel);
}

EditMember::~EditMember()
{
    delete ui;
}

void EditMember::addMemberButtonClicked()
{

    QString q;
    QSqlQuery query;
    QString name = ui->memberNameLine->text();
    QString id = ui->memberIdLine->text();
    QString type = ui->memberTypeLine->text();
    QString date = ui->expDateLine->text();
    QString i = "1";
    query.prepare("SELECT * FROM bulkClub WHERE name=:name");
    query.bindValue(":name", name);
    q = "INSERT INTO item (memberName, memberId, memberType, expDate, itemName, itemPrice, quantity, date, expCost, activeMember, activeItem) VALUES (\"" + name + "\", \"" + id + "\", \"" + type + "\", \"" + date + "\", \"" + " " + "\", \"" + " " + "\", \""+ " " + "\", \"" + "\", \"" + "\", \"" + i + "\", \"" + i + "\");";
    if (!query.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
    memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate FROM item WHERE activeMember =\"" + i + "\"");
    ui->editMemberTable->setModel(memberModel);

}
void EditMember::deleteMemberButtonClicked()
{
    QString name = ui->memberNameLine->text();
    QString id = ui->memberIdLine->text();
    QString type = ui->memberTypeLine->text();
    QString date = ui->expDateLine->text();
    QString q;
    QSqlQuery query;
    QString i = "0";
    QString j = "1";

    q = "UPDATE item SET activeMember =\"" + i + "\" WHERE memberName =\"" + name + "\" AND memberId =\"" + id + "\"";
    if (!query.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
    memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate FROM item WHERE activeMember =\"" + j + "\"");
    ui->editMemberTable->setModel(memberModel);


}



void EditMember::on_editMemberTable_clicked(const QModelIndex &index)
{
    QString name;
    QString id;
    QString type;
    QString date;
    name = index.siblingAtColumn(0).data().toString();
    ui->memberNameLine->setText(name);
    QSqlQuery query("SELECT DISTINCT memberId FROM item WHERE memberName = \"" + name + "\"");
    if (query.next()) ui->memberIdLine->setText(query.value(0).toString());
    QSqlQuery x("SELECT DISTINCT memberType FROM item WHERE memberName = \"" + name + "\"");
    if (x.next()) ui->memberTypeLine->setText(x.value(0).toString());
    QSqlQuery y("SELECT DISTINCT expDate FROM item WHERE memberName = \"" + name + "\"");
    if (y.next()) ui->expDateLine->setText(y.value(0).toString());

}

