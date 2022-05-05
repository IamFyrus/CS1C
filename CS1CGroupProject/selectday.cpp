#include "selectday.h"
#include "ui_selectday.h"

SelectDay::SelectDay(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SelectDay)
{
    ui->setupUi(this);
    itemModel = new QSqlQueryModel;
    memberModel = new QSqlQueryModel;
}

SelectDay::~SelectDay()
{
    delete ui;
}

void SelectDay::viewReportClicked()
{
    QString input = ui->dayInput->currentText();
    QString date1 = "4/1/2021";
    QString date2 = "4/2/2021";
    QString date3 = "4/3/2021";
    QString date4 = "4/4/2021";
    QString date5 = "4/5/2021";
    QString date6 = "4/6/2021";
    QString date7 = "4/7/2021";
    if(input == "Day 1")
    {
        itemModel->setQuery("SELECT itemName, quantity FROM item WHERE date =\"" + date1 + "\"");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT memberId FROM item WHERE date =\"" + date1 + "\"");
        ui->memberTable->setModel(memberModel);
    } else if(input == "Day 2")
    {
        itemModel->setQuery("SELECT itemName, quantity FROM item WHERE date =\"" + date2 + "\"");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT memberId FROM item WHERE date =\"" + date1 + "\"");
        ui->memberTable->setModel(memberModel);
    }else if(input == "Day 3")
    {
        itemModel->setQuery("SELECT itemName, quantity FROM item WHERE date =\"" + date3 + "\"");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT memberId FROM item WHERE date =\"" + date1 + "\"");
        ui->memberTable->setModel(memberModel);
    }else if(input == "Day 4")
    {
        itemModel->setQuery("SELECT itemName, quantity FROM item WHERE date =\"" + date4 + "\"");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT memberId FROM item WHERE date =\"" + date1 + "\"");
        ui->memberTable->setModel(memberModel);
    }else if(input == "Day 5")
    {
        itemModel->setQuery("SELECT itemName, quantity FROM item WHERE date =\"" + date5 + "\"");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT memberId FROM item WHERE date =\"" + date1 + "\"");
        ui->memberTable->setModel(memberModel);
    }else if(input == "Day 6")
    {
        itemModel->setQuery("SELECT itemName, quantity FROM item WHERE date =\"" + date6 + "\"");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT memberId FROM item WHERE date =\"" + date1 + "\"");
        ui->memberTable->setModel(memberModel);
    }else if(input == "Day 7")
    {
        memberModel->setQuery("SELECT memberId FROM item WHERE date =\"" + date1 + "\"");
        ui->itemTable->setModel(itemModel);
    }
}
