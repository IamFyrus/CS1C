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
    memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item ORDER BY expDate");
    ui->memberTable->setModel(memberModel);
}

void MemberInfo::on_expButton_clicked()
{
    QString input = ui->monthInput->currentText();
    QString jan = "01";
    QString feb = "02";
    QString mar = "03";
    QString apr = "04";
    QString may = "05";
    QString jun = "06";
    QString jul = "07";
    QString aug = "08";
    QString sep = "09";
    QString oct = "10";
    QString nov = "11";
    QString dec = "12";
    if(input == "January")
    {
        memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item WHERE SUBSTRING(expDate, 1, 2) =\"" + jan + "\" ORDER BY expDate");
        ui->memberTable->setModel(memberModel);
    }
    else if(input == "February")
    {
        memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item WHERE SUBSTRING(expDate, 1, 2) =\"" + feb + "\" ORDER BY expDate");
        ui->memberTable->setModel(memberModel);
    }
    else if(input == "March")
    {
        memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item WHERE SUBSTRING(expDate, 1, 2) =\"" + mar + "\" ORDER BY expDate");
        ui->memberTable->setModel(memberModel);
    }
    else if(input == "April")
    {
        memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item WHERE SUBSTRING(expDate, 1, 2) =\"" + apr + "\" ORDER BY expDate");
        ui->memberTable->setModel(memberModel);
    }
    else if(input == "May")
    {
        memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item WHERE SUBSTRING(expDate, 1, 2) =\"" + may + "\" ORDER BY expDate");
        ui->memberTable->setModel(memberModel);
    }
    else if(input == "June")
    {
        memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item WHERE SUBSTRING(expDate, 1, 2) =\"" + jun + "\" ORDER BY expDate");
        ui->memberTable->setModel(memberModel);
    }
    else if(input == "July")
    {
        memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item WHERE SUBSTRING(expDate, 1, 2) =\"" + jul + "\" ORDER BY expDate");
        ui->memberTable->setModel(memberModel);
    }
    else if(input == "August")
    {
        memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item WHERE SUBSTRING(expDate, 1, 2) =\"" + aug + "\" ORDER BY expDate");
        ui->memberTable->setModel(memberModel);
    }
    else if(input == "September")
    {
        memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item WHERE SUBSTRING(expDate, 1, 2) =\"" + sep + "\" ORDER BY expDate");
        ui->memberTable->setModel(memberModel);
    }
    else if(input == "October")
    {
        memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item WHERE SUBSTRING(expDate, 1, 2) =\"" + oct + "\" ORDER BY expDate");
        ui->memberTable->setModel(memberModel);
    }
    else if(input == "November")
    {
        memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item WHERE SUBSTRING(expDate, 1, 2) =\"" + nov + "\" ORDER BY expDate");
        ui->memberTable->setModel(memberModel);
    }
    else if(input == "December")
    {
        memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item WHERE SUBSTRING(expDate, 1, 2) =\"" + dec + "\" ORDER BY expDate");
        ui->memberTable->setModel(memberModel);
    }
    else
    {
        memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate, expCost FROM item ORDER BY expDate");
    }
}



