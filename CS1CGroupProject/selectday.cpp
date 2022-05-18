#include "selectday.h"
#include "ui_selectday.h"


/* ==== SelectDay::Constructor ==================================
    Constructor used to initialize the ui and QSqlQueryModels
    itemModel and memberModel.
================================================================== */
SelectDay::SelectDay(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SelectDay)
{
    ui->setupUi(this);
    itemModel = new QSqlQueryModel;
    memberModel = new QSqlQueryModel;
}

/* ==== SelectDay::Destructor ====================================
    Destructor used to delete the ui and QSqlQueryModels
    itemModel and memberModel.
================================================================== */
SelectDay::~SelectDay()
{
    delete ui;
    delete itemModel;
    delete memberModel;
}

/* ==== SelectDay::viewReportClicked =============================
    viewReportClicked used to view the main report of members who
    shopped and items purchased on indicated day.
================================================================== */
void SelectDay::viewReportClicked()
{
    QString name = "";
    QString regular = "Regular";
    QString executive = "Executive";
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
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date1 + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);

        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date1 + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);

        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date1 + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date1 + "\" AND memberType =\"" + executive + "\" ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->costLabel->setText("0.00");


        QSqlQuery q("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date1 + "\" AND memberType =\"" + regular + "\"");
        if (q.next()) ui->regularCount->setText(QString::number(q.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date1 + "\" AND memberType =\"" + executive + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
    } else if(input == "Day 2")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date2 + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
      memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date2 + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date2 + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date2 + "\" AND memberType =\"" + executive + "\" ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->costLabel->setText("0.00");
        QSqlQuery q("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date2 + "\" AND memberType =\"" + regular + "\"");
        if (q.next()) ui->regularCount->setText(QString::number(q.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date2 + "\" AND memberType =\"" + executive + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");

    }else if(input == "Day 3")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date3 + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date3 + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date3 + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date3 + "\" AND memberType =\"" + executive + "\"ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery q("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date3 + "\" AND memberType =\"" + regular + "\"");
        if (q.next()) ui->regularCount->setText(QString::number(q.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date3 + "\" AND memberType =\"" + executive + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
    }else if(input == "Day 4")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date4 + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date4 + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date4 + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date4 + "\" AND memberType =\"" + executive + "\"ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery q("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date4 + "\" AND memberType =\"" + regular + "\"");
        if (q.next()) ui->regularCount->setText(QString::number(q.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date4 + "\" AND memberType =\"" + executive + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
    }else if(input == "Day 5")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date5 + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date5 + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date5 + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date5 + "\" AND memberType =\"" + executive + "\"ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery q("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date5 + "\" AND memberType =\"" + regular + "\"");
        if (q.next()) ui->regularCount->setText(QString::number(q.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date5 + "\" AND memberType =\"" + executive + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
    }else if(input == "Day 6")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date6 + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date6 + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date6 + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date6 + "\" AND memberType =\"" + executive + "\"ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery q("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date6 + "\" AND memberType =\"" + regular + "\"");
        if (q.next()) ui->regularCount->setText(QString::number(q.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date6 + "\" AND memberType =\"" + executive + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
    }else if(input == "Day 7")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date7 + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date7 + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date7 + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date7 + "\" AND memberType =\"" + executive + "\"ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery q("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date7 + "\" AND memberType =\"" + regular + "\"");
        if (q.next()) ui->regularCount->setText(QString::number(q.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date7 + "\" AND memberType =\"" + executive + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
    }
    else
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item");
        ui->itemTable->setModel(itemModel);

        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item");
        ui->memberTable->setModel(memberModel);

        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE memberType =\"" + executive + "\"ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery q("SELECT COUNT(DISTINCT memberName) FROM item WHERE memberType =\"" + regular + "\"");
        if (q.next()) ui->regularCount->setText(QString::number(q.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE memberType =\"" + executive + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
    }
}

/* ==== SelectDay::on_memberTable_clicked ========================
    on_memberTable_clicked used to view the report of items
    purchased by the member selected on the indicated day.
================================================================== */
void SelectDay::on_memberTable_clicked(const QModelIndex &index) {
    QString memberType = "Executive";
    QString input = ui->dayInput->currentText();
    QString date1 = "4/1/2021";
    QString date2 = "4/2/2021";
    QString date3 = "4/3/2021";
    QString date4 = "4/4/2021";
    QString date5 = "4/5/2021";
    QString date6 = "4/6/2021";
    QString date7 = "4/7/2021";
    name = index.siblingAtColumn(0).data().toString();
    if(input == "Day 1")
    {
        itemModel->setQuery("SELECT  itemName, itemPrice, quantity FROM item WHERE date =\"" + date1 + "\" AND memberName =\"" + name + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date1 + "\" AND memberName = \"" + name + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date1 + "\" AND memberName = \"" + name + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");


    }
    else if(input == "Day 2")
    {
        itemModel->setQuery("SELECT  itemName, itemPrice, quantity FROM item WHERE date =\"" + date2 + "\" AND memberName =\"" + name + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date2 + "\" AND memberName = \"" + name + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date2 + "\" AND memberName = \"" + name + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");


    }
    else if(input == "Day 3")
    {
        itemModel->setQuery("SELECT  itemName, itemPrice, quantity FROM item WHERE date =\"" + date3 + "\" AND memberName =\"" + name + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date3 + "\" AND memberName = \"" + name + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date3 + "\" AND memberName = \"" + name + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");


    }
    else if(input == "Day 4")
    {
        itemModel->setQuery("SELECT  itemName, itemPrice, quantity FROM item WHERE date =\"" + date4 + "\" AND memberName =\"" + name + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date4 + "\" AND memberName = \"" + name + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date4 + "\" AND memberName = \"" + name + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");


    }
    else if(input == "Day 5")
    {
        itemModel->setQuery("SELECT  itemName, itemPrice, quantity FROM item WHERE date =\"" + date5 + "\" AND memberName =\"" + name + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date5 + "\" AND memberName = \"" + name + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date5 + "\" AND memberName = \"" + name + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");

    }
    else if(input == "Day 6")
    {
        itemModel->setQuery("SELECT  itemName, itemPrice, quantity FROM item WHERE date =\"" + date6 + "\" AND memberName =\"" + name + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date6 + "\" AND memberName = \"" + name + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date6 + "\" AND memberName = \"" + name + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");

    }
    else if(input == "Day 7")
    {
        itemModel->setQuery("SELECT  itemName, itemPrice, quantity FROM item WHERE date =\"" + date7 + "\" AND memberName =\"" + name + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date7 + "\" AND memberName = \"" + name + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date7 + "\" AND memberName = \"" + name + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");


    }
    else
    {
        itemModel->setQuery("SELECT  itemName, itemPrice, quantity FROM item WHERE memberName =\"" + name + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE memberName = \"" + name + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE memberName = \"" + name + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");

    }

}

/* ==== SelectDay::regularButtonClicked ==========================
    regularButtonClicked used to view the report of members who
    shopped and the items purchased on the indicated day by
    members with the regular membership.
================================================================== */
void SelectDay::regularButtonClicked()
{
    QString memberType = "Regular";
    QString name = "";
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
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date1 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);

        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date1 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date1 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        if (ui->rebateLabel->text() != "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date1 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->regularCount->setText(QString::number(s.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");
        ui->executiveCount->setText("0");
    } else if(input == "Day 2")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date2 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
      memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date2 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date2 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        if (ui->rebateLabel->text() != "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date2 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->regularCount->setText(QString::number(s.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");
        ui->executiveCount->setText("0");
    }else if(input == "Day 3")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date3 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date3 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date3 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        if (ui->rebateLabel->text() != "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date3 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->regularCount->setText(QString::number(s.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");
        ui->executiveCount->setText("0");
    }else if(input == "Day 4")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date4 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date4 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date4 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        if (ui->rebateLabel->text() != "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date4 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->regularCount->setText(QString::number(s.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");
        ui->executiveCount->setText("0");
    }else if(input == "Day 5")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date5 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date5 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date5 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        if (ui->rebateLabel->text() != "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date5 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->regularCount->setText(QString::number(s.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");
        ui->executiveCount->setText("0");
    }else if(input == "Day 6")
    {
        itemModel->setQuery("SELECT itemName, itemPrice quantity FROM item WHERE date =\"" + date6 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date6 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date6 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        if (ui->rebateLabel->text() != "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date6 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->regularCount->setText(QString::number(s.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");
        ui->executiveCount->setText("0");
    }else if(input == "Day 7")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date7 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date7 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date7 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        if (ui->rebateLabel->text() != "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date7 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->regularCount->setText(QString::number(s.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");
        ui->executiveCount->setText("0");
    }
    else
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");
        if (ui->rebateLabel->text() != "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE memberType =\"" + memberType + "\"");
        if (s.next()) ui->regularCount->setText(QString::number(s.value(0).toInt()));
        if (ui->regularCount->text() == "") ui->regularCount->setText("0");
        ui->executiveCount->setText("0");
    }
}

/* ==== SelectDay::executiveButtonClicked ==========================
    executiveButtonClicked used to view the report of members who
    shopped and the items purchased on the indicated day by
    members with the executive membership.
================================================================== */
void SelectDay::executiveButtonClicked()
{
    QString memberType = "Executive";
    QString name = "";
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
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date1 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);

        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date1 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date1 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date1 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
         if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date1 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
        ui->regularCount->setText("0");

    } else if(input == "Day 2")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date2 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
      memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date2 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date2 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date2 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
         if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date2 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
        ui->regularCount->setText("0");
    }else if(input == "Day 3")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date3 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date3 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date3 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date3 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date3 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
         if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");
        ui->regularCount->setText("0");
    }else if(input == "Day 4")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date4 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date4 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date4 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date4 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
         if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date4 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
        ui->regularCount->setText("0");
    }else if(input == "Day 5")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date5 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date5 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date5 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date5 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
         if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date5 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
        ui->regularCount->setText("0");
    }else if(input == "Day 6")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date6 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date6 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->memberTable->setModel(memberModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date6 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date6 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
         if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date6 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
        ui->regularCount->setText("0");
    }else if(input == "Day 7")
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE date =\"" + date7 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE date =\"" + date7 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE date =\"" + date7 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE date =\"" + date7 + "\" AND memberType = \"" + memberType + "\" ORDER BY memberId");
         if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE date =\"" + date7 + "\" AND memberType =\"" + memberType + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
        ui->regularCount->setText("0");
    }
    else
    {
        itemModel->setQuery("SELECT itemName, itemPrice, quantity FROM item WHERE memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        memberModel->setQuery("SELECT DISTINCT memberName, memberType, memberId FROM item WHERE memberType = \"" + memberType + "\" ORDER BY memberId");
        ui->itemTable->setModel(itemModel);
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 1.0775) FROM item WHERE memberType = \"" + memberType + "\" ORDER BY memberId");
        if (query.next()) ui->costLabel->setText(QString::number(query.value(0).toDouble(), 'f', 2));
        if (ui->costLabel->text() == "") ui->costLabel->setText("0.00");

        QSqlQuery x("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE memberType = \"" + memberType + "\" ORDER BY memberId");
         if (x.next()) ui->rebateLabel->setText(QString::number(x.value(0).toDouble(), 'f', 2));
        if (ui->rebateLabel->text() == "") ui->rebateLabel->setText("0.00");

        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE memberType =\"" + memberType + "\"");
        if (s.next()) ui->executiveCount->setText(QString::number(s.value(0).toInt()));
        if (ui->executiveCount->text() == "") ui->executiveCount->setText("0");
        ui->regularCount->setText("0");
    }
}

/* ==== SelectDay::on_itemButton_clicked ==========================
    on_itemButton_clicked used to hide current ui and show
    ItemInfo ui.
================================================================== */
void SelectDay::on_itemButton_clicked()
{
    hide();
    //delete ui;
    ItemInfo* itemWindow = new ItemInfo(this);
    itemWindow->show();
}

/* ==== SelectDay::on_searchItem_clicked ==========================
    on_searchItem_clicked used to hide current ui and show
    SearchItem ui.
================================================================== */
void SelectDay::on_searchItem_clicked()
{
    hide();
    //delete ui;
    SearchItem* item = new SearchItem(this);
    item->show();
}

/* ==== SelectDay::on_searchMember_clicked ==========================
    on_searchMember_clicked used to hide current ui and show
    searchMember ui.
================================================================== */
void SelectDay::on_searchMember_clicked()
{
    hide();
   //delete ui;
    searchMember* member = new searchMember(this);
    member->show();

}




