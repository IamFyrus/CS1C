#include "memberinfo.h"
#include "ui_memberinfo.h"

MemberInfo::MemberInfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MemberInfo)
{
    ui->setupUi(this);
    memberModel = new QSqlQueryModel;
    displayMembers();
}

MemberInfo::~MemberInfo()
{
    delete ui;
}

void MemberInfo::displayMembers()
{
    memberModel->setQuery("SELECT * FROM member ORDER BY memberId");
    ui->memberTable->setModel(memberModel);
}
