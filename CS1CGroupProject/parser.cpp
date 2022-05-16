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
        query.exec("CREATE TABLE item (memberName TEXT, itemName TEXT, memberID INTEGER, date TEXT, itemPrice INTEGER, quantity INTEGER);");
}



void parser::memberImport(std::string name)
{
    QString q;
    QSqlQuery query;
    std::string memberNames, memberIds, memberTypes, dates, temp;
    std::string s;
    std::ifstream infile;
    infile.open(name);
    while(getline(infile, memberNames) && getline(infile, memberIds) && getline(infile, memberTypes) && getline(infile, dates))
    {
    memberName.push_back(memberNames);
    memberId.push_back(memberIds);
    memberType.push_back(memberTypes);
    expDate.push_back(dates);
    /*query.prepare("INSERT INTO bulkClub VALUES (:memberName, :memberId, :memberType, :expDate)");

    //bind college information to their respective columns
    query.bindValue(":memberName", id);
    query.bindValue(":NAME", name);
    query.bindValue(":STATE", state);
    query.bindValue(":UNDERGRADS", undergrads);
    query.bindValue(":DISTANCES", distanceText);
    query.bindValue(":SOUVENIRS", souvenirsText);

    //ensure that the college was successfully added to the database
    if (query.exec())
    {
        qDebug() << "College successfully added to database";

        return true;
    }
    else
    {
        qDebug() << "Error: Could not add college to database";

        //debugging tools for determining the possible errors for why the college wasn't added to the database
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();

        return false;
    }

    if(temp != memberName)
    {
    s = "INSERT INTO member (memberName, memberId, memberType, expDate) VALUES (\"" + memberName + "\", \"" + memberId + "\", \"" + memberType + "\", \"" + date + "\");";
    q = QString::fromStdString(s);
    if (!query.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();
    temp = memberName;
    }*/
    }infile.close();
}
void parser::itemImport(std::string name)
{
    QString q;
    QSqlQuery query;
    std::string itemName, memberIds, itemPrice, quantity, date, temp;
    std::string s;
    std::ifstream infile;
    int j;
    infile.open(name);
    while(getline(infile, date) && getline(infile, memberIds) && getline(infile, itemName) && getline(infile, itemPrice) && getline(infile, quantity))
    {
    int i = 0;
    temp = date + " " + memberIds + " " + itemName + " " + itemPrice + " " + quantity;
    for(j = 0; j < memberId.size(); j++)
    {
        if(memberIds == memberId[j])
            i = j;
    }
    receipt.push_back(temp);
    query.prepare("SELECT * FROM bulkClub WHERE date=:date");
    query.bindValue(":date", QString::fromStdString(date));
    if (!query.exec()) qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();
    if (query.next()) continue;



    s = "INSERT INTO item (memberName, itemName, memberId, itemPrice, quantity, date) VALUES (\"" + memberName[i] + "\",\"" + itemName + "\", \"" + memberIds + "\", \"" + itemPrice + "\", \"" + quantity + "\", \"" + date + "\");";
    q = QString::fromStdString(s);
    if (!query.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();
    temp = itemName;
    }infile.close();
}

void parser::createDatabase()
{

}
