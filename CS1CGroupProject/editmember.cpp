#include "editmember.h"
#include "ui_editmember.h"

EditMember::EditMember(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditMember)
{
    ui->setupUi(this);
    memberModel = new QSqlQueryModel;
    memberModel->setQuery("SELECT * FROM member ORDER BY memberId");
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
    query.prepare("SELECT * FROM bulkClub WHERE name=:name");
    query.bindValue(":name", name);
    q = "INSERT INTO member (memberName, memberId, memberType, expDate) VALUES (\"" + name + "\", \"" + id + "\", \"" + type + "\", \"" + date + "\");";
    if (!query.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
    memberModel->setQuery("SELECT * FROM member ORDER BY memberId");
    ui->editMemberTable->setModel(memberModel);

}
void EditMember::deleteMemberButtonClicked()
{


}

void EditMember::editMemberButtonClicked()
{}

void EditMember::searchMemberButtonClicked()
{}
