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
    QString name = ui->memberNameLine->text();
    QString id = ui->memberIdLine->text();
    QString type = ui->memberTypeLine->text();
    QString date = ui->expDateLine->text();


}
void EditMember::deleteMemberButtonClicked()
{}

void EditMember::editMemberButtonClicked()
{}

void EditMember::searchMemberButtonClicked()
{}
