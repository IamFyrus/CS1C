#include "parser.h"
bool parser::isInit = false;
parser::parser()
{
    if (!isInit) {
        connect();
        init();
        isInit = true;
    }
}

void parser::connect()
{
    const QString DRIVER("QSQLITE");

    if(QSqlDatabase::isDriverAvailable(DRIVER)) {
        QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
        db.setDatabaseName(":memory:"); //initializes database on each run.
       // db.setDatabaseName("bulkClubDB"); // Uses memberDB database

        if(!db.open()) qWarning() << "MainWindow::DatabaseConnect - ERROR: " << db.lastError().text();
    } else qWarning() << "MainWindow::DatabaseConnect - ERROR: no driver " << DRIVER << " available";
}

void parser::init()
{
        QSqlQuery query("CREATE TABLE bulkClub (memberName TEXT, memberID INTEGER, memberType TEXT, date TEXT, itemName TEXT, itemPrice INTEGER, quantity INTEGER, expDate TEXT);");
        if(!query.isActive()) qWarning() << "MainWindow::DatabaseInit - ERROR: " << query.lastError().text();
        query.exec("CREATE TABLE member (memberName TEXT, memberID INTEGER, memberType TEXT, expDate TEXT);");
        query.exec("CREATE TABLE item (itemName TEXT, memberID INTEGER, date TEXT, itemPrice INTEGER, quantity INTEGER);");
}



void parser::memberImport(std::string name)
{
    QString q;
    QSqlQuery query;
    std::string memberName, memberId, memberType, date;
    std::string s;
    std::ifstream infile;
    infile.open(name);
    while(infile)
    {
    getline(infile, memberName);
    getline(infile, memberId);
    getline(infile, memberType);
    getline(infile, date);
    query.prepare("SELECT * FROM bulkClub WHERE memberName=:memberName");
    query.bindValue(":memberName", QString::fromStdString(memberName));
    if (!query.exec()) qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();
    if (query.next()) continue;

    s = "INSERT INTO member (memberName, memberId, memberType, expDate) VALUES (\"" + memberName + "\", \"" + memberId + "\", \"" + memberType + "\", \"" + date + "\");";
    q = QString::fromStdString(s);
    if (!query.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();
    }infile.close();
}
void parser::itemImport(std::string name)
{
    QString q;
    QSqlQuery query;
    std::string itemName, memberId, itemPrice, quantity, date;
    std::string s;
    std::ifstream infile;
    infile.open(name);
    while(infile)
    {
    getline(infile, date);
    getline(infile, memberId);
    getline(infile, itemName);
    getline(infile, itemPrice);
    getline(infile, quantity);
    query.prepare("SELECT * FROM bulkClub WHERE date=:date");
    query.bindValue(":date", QString::fromStdString(date));
    if (!query.exec()) qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();
    if (query.next()) continue;



    s = "INSERT INTO item (itemName, memberId, itemPrice, quantity, date) VALUES (\"" + itemName + "\", \"" + memberId + "\", \"" + itemPrice + "\", \"" + quantity + "\", \"" + date + "\");";
    q = QString::fromStdString(s);
    if (!query.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();

    }infile.close();
}

