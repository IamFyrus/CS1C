#include "customerconvert.h"
#include "ui_customerconvert.h"
#include <vector>
#include <utility>

customerConvert::customerConvert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerConvert)
{
    ui->setupUi(this);
}

customerConvert::~customerConvert()
{
    delete ui;
}

void customerConvert::on_pushButton_clicked()
{

    ui->textBrowser->clear();
    std::vector<customers> cust;
    std::vector<customers> trying;

    QString ree;
    ///close database
    data.close();
    data.removeDatabase("first");



    QSqlDatabase customerDatabase = QSqlDatabase::addDatabase("QSQLITE", "first");
    customerDatabase.setDatabaseName("/Users/morer/OneDrive/Desktop/CS1C/CS1CGroupProject/Bulk_Club1.db");

    if (customerDatabase.open()) {
       // QMessageBox::information(this, "Database success", "Database Is Connected!");

        //Create query always pass database name into it
        QSqlQuery query(customerDatabase);
        QSqlQuery query2(customerDatabase);


        //Prepare query, run values that you want to retrieve from table
        query.prepare(QString("SELECT * FROM customers"));
        //Prepare query, run values that you want to retrieve from table
        query2.prepare(QString("SELECT * FROM customerPurchases"));

        //Error check
        if (!query.exec()) {
            QMessageBox::warning(this, "Fail", "Query did not execute");
        }
        else {

            while(query.next()) {

                customers temp;
                QString lastName = query.value(1).toString();
                QString membership = query.value(3).toString();
                QString ids  = query.value(2).toString();
                temp.name = lastName;
                temp.id = ids;
                temp.totals = 0;
                temp.mems = membership;
                cust.push_back(temp);

            }

        }





    //Error check
    if (!query2.exec()) {
        QMessageBox::warning(this, "Fail", "Query did not execute");
    }
    else {

        while(query2.next()) {

           customers temp1;
            double total = 0.0;
            QString ids1 = query2.value(3).toString();
            double price = query2.value(6).toDouble();
            double quan = query2.value(7).toDouble();
            total = (price * quan);
            temp1.name = "EMPTY";
            temp1.mems = "EMPTY";
            temp1.id = ids1;
            temp1.totals = total;
            trying.push_back(temp1);



        }




    }

    for(int i = 0; i < trying.size(); ++i){

        for(int j = 0; j < cust.size(); ++j){
            if(trying.at(i).id == cust.at(j).id){
                   cust.at(j).totals += trying.at(i).totals;
            }
        }
    }




    for(int i = 0; i < cust.size(); ++i){
        if(cust.at(i).mems == "Regular"){
            QString test;
            if((cust.at(i).totals *.02) >= 120.00){
                cust.at(i).convert = "Should Convert to Exec Member";
                 test = cust.at(i).name + " " + cust.at(i).convert;
                 qDebug() << cust.at(i).totals * .02;
                 qDebug() << cust.at(i).name << " " <<cust.at(i).totals;
            }else{
                 cust.at(i).convert = "Should not Convert to Exec Member";
                  test = cust.at(i).name + " " + cust.at(i).convert;
            }
             ui->textBrowser->append(test);

        }
    }
    }




}





void customerConvert::on_pushButton_2_clicked()
{
    ui->textBrowser->clear();
    std::vector<customers> cust;
    std::vector<customers> trying;

    QString ree;
    ///close database
    data.close();
    data.removeDatabase("first");



    QSqlDatabase customerDatabase = QSqlDatabase::addDatabase("QSQLITE", "first");
    customerDatabase.setDatabaseName("/Users/morer/OneDrive/Desktop/CS1C/CS1CGroupProject/Bulk_Club1.db");

    if (customerDatabase.open()) {
       // QMessageBox::information(this, "Database success", "Database Is Connected!");

        //Create query always pass database name into it
        QSqlQuery query(customerDatabase);
        QSqlQuery query2(customerDatabase);


        //Prepare query, run values that you want to retrieve from table
        query.prepare(QString("SELECT * FROM customers"));
        //Prepare query, run values that you want to retrieve from table
        query2.prepare(QString("SELECT * FROM customerPurchases"));

        //Error check
        if (!query.exec()) {
            QMessageBox::warning(this, "Fail", "Query did not execute");
        }
        else {

            while(query.next()) {

                customers temp;
                QString lastName = query.value(1).toString();
                QString membership = query.value(3).toString();
                QString ids  = query.value(2).toString();
                temp.name = lastName;
                temp.id = ids;
                temp.totals = 0;
                temp.mems = membership;
                cust.push_back(temp);

            }

        }

  //  qDebug() << cust.at(0).name << " " << cust.at(0).mems << "  " << cust.at(0).totals;











    //Error check
    if (!query2.exec()) {
        QMessageBox::warning(this, "Fail", "Query did not execute");
    }
    else {

        while(query2.next()) {

           customers temp1;
            double total = 0.0;
            QString ids1 = query2.value(3).toString();
            double price = query2.value(6).toDouble();
            double quan = query2.value(7).toDouble();
            total = (price * quan);
            temp1.name = "EMPTY";
            temp1.mems = "EMPTY";
            temp1.id = ids1;
            temp1.totals = total;
            trying.push_back(temp1);




        }




    }

    for(int i = 0; i < trying.size(); ++i){

        for(int j = 0; j < cust.size(); ++j){
            if(trying.at(i).id == cust.at(j).id){
                   cust.at(j).totals += trying.at(i).totals;
            }
        }
    }




    for(int i = 0; i < cust.size(); ++i){
        if(cust.at(i).mems == "Executive"){
            QString test;
            if((cust.at(i).totals * .02) <= 120.00){
                cust.at(i).convert = "Should Convert to Regular Member";
                 test = cust.at(i).name + " " + cust.at(i).convert;
                 qDebug() << cust.at(i).totals * .02;
                 qDebug() << cust.at(i).name << " " <<cust.at(i).totals;
            }else{
                 cust.at(i).convert = "Should not Convert to Regular Member";
                  test = cust.at(i).name + " " + cust.at(i).convert;
            }
             ui->textBrowser->append(test);

        }
    }
    }
}
