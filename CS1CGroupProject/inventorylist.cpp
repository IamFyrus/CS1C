#include "inventorylist.h"
#include "ui_inventorylist.h"
#include "QSqlTableModel"

inventoryList::inventoryList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inventoryList)
{
    ui->setupUi(this);
}

inventoryList::~inventoryList()
{
    delete ui;
}

void inventoryList::closeDatabase()
{
    list.close();
    list.removeDatabase("first");
}

void inventoryList::openDatabase()
{

    //Close database to make sure nothing is open before opening a new one
    closeDatabase();

    //Add database
    list = QSqlDatabase::addDatabase("QSQLITE", "first");
    list.setDatabaseName("/Users/morer/OneDrive/Desktop/CS1C/CS1CGroupProject/Bulk_Club1.db");

    //Open database and display if it has been openeed
    if (list.open()) {
        QMessageBox::information(this, "Success", "Database has been connected!");
    }

    //If databse has not been opened display warning messsage and exit page
    else {
        QMessageBox::warning(this, "Fail", "Database has not been opened!");
        this->close();
    }
}
void inventoryList::on_ShowList_clicked()
{
    //close database
    list.close();
    list.removeDatabase("first");

    QSqlDatabase listDatabase = QSqlDatabase::addDatabase("QSQLITE", "first");
    listDatabase.setDatabaseName("/Users/morer/OneDrive/Desktop/CS1C/CS1CGroupProject/Bulk_Club1.db");

    if (listDatabase.open()) {
       // QMessageBox::information(this, "Database success", "Database Is Connected!");

        //Create query always pass database name into it
        QSqlQuery query(listDatabase);


        //Prepare query, run values that you want to retrieve from table
        query.prepare(QString("SELECT * FROM inventory"));

        //Error check
        if (!query.exec()) {
            QMessageBox::warning(this, "Fail", "Query did not execute");
        }
        else
        {
            QSqlQueryModel *search = new QSqlTableModel;
            search->setQuery(query);
            ui->tableView->setModel(search);
        }
    }
}

void inventoryList::on_UpdateList_clicked()
{
    QString original = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                         tr("Name of Product you would like to update:"), QLineEdit::Normal,
                                         QDir::home().dirName());

    QString price = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                         tr("Product Price: $"), QLineEdit::Normal,
                                         QDir::home().dirName());
    //close database
    list.close();
    list.removeDatabase("first");

    QSqlDatabase listDatabase = QSqlDatabase::addDatabase("QSQLITE", "first");
    listDatabase.setDatabaseName("/Users/morer/OneDrive/Desktop/CS1C/CS1CGroupProject/Bulk_Club1.db");

    if (listDatabase.open()) {
       // QMessageBox::information(this, "Database success", "Database Is Connected!");

        //Create query always pass database name into it
        QSqlQuery query(listDatabase);

        //Prepare query, run values that you want to retrieve from table
        query.prepare(QString("UPDATE inventory SET itemPrice = :temp WHERE itemName == :temp2 "));

        query.bindValue(":temp", price);
        query.bindValue(":temp2",original);

        //Error check
        if (!query.exec()) {
            QMessageBox::warning(this, "Fail", "Query did not execute");
        }
        else
        {
            QSqlQueryModel *search = new QSqlTableModel;
            search->setQuery(query);
            ui->tableView->setModel(search);
        }
    }
}

void inventoryList::on_AddList_clicked()
{

    QString name = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                         tr("Product Name:"), QLineEdit::Normal,
                                         QDir::home().dirName());
    QString price = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                         tr("Product Price: $"), QLineEdit::Normal,
                                         QDir::home().dirName());
    QString stock = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                         tr("Is it in stock?:"), QLineEdit::Normal,
                                         QDir::home().dirName());



    //close database
    list.close();
    list.removeDatabase("first");

    QSqlDatabase listDatabase = QSqlDatabase::addDatabase("QSQLITE", "first");
    listDatabase.setDatabaseName("/Users/morer/OneDrive/Desktop/CS1C/CS1CGroupProject/Bulk_Club1 (1).db");

    if (listDatabase.open()) {
       // QMessageBox::information(this, "Database success", "Database Is Connected!");

        //Create query always pass database name into it
        QSqlQuery query(listDatabase);


        //Prepare query, run values that you want to retrieve from table
        query.prepare(QString("INSERT INTO inventory (itemName,itemPrice,inStock) VALUES (:temp,:temp2,:temp3)"));
        query.bindValue(":temp", name);
        query.bindValue(":temp2", price);
        query.bindValue(":temp3",stock);

        //Error check
        if (!query.exec()) {
            QMessageBox::warning(this, "Fail", "Query did not execute");
        }
        else
        {
            QSqlQueryModel *search = new QSqlTableModel;
            search->setQuery(query);
            ui->tableView->setModel(search);
        }
    }
}

void inventoryList::on_DeleteList_clicked()
{
    QString name = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                         tr("Product Name:"), QLineEdit::Normal,
                                         QDir::home().dirName());
    //close database
    list.close();
    list.removeDatabase("first");

    QSqlDatabase listDatabase = QSqlDatabase::addDatabase("QSQLITE", "first");
    listDatabase.setDatabaseName("/Users/morer/OneDrive/Desktop/CS1C/CS1CGroupProject/Bulk_Club1.db");

    if (listDatabase.open()) {
       // QMessageBox::information(this, "Database success", "Database Is Connected!");

        //Create query always pass database name into it
        QSqlQuery query(listDatabase);



        //Prepare query, run values that you want to retrieve from table
        query.prepare(QString("DELETE FROM inventory WHERE itemName == :temp"));
        query.bindValue(":temp",name);

        //Error check
        if (!query.exec()) {
            QMessageBox::warning(this, "Fail", "Query did not execute");
        }
        else
        {
            QSqlQueryModel *search = new QSqlTableModel;
            search->setQuery(query);
            ui->tableView->setModel(search);
        }
    }
}
