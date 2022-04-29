#include "parser.h"

parser::parser()
{
    if (!isInit) {
        connect();
        //init();
        isInit = true;
    }
}

void parser::connect()
{
    const QString DRIVER("QSQLITE");

    if(QSqlDatabase::isDriverAvailable(DRIVER)) {
        QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
        db.setDatabaseName(":memory:"); //initializes database on each run.
        db.setDatabaseName("MemberDB"); // Uses RestaurantDB database

        if(!db.open()) qWarning() << "MainWindow::DatabaseConnect - ERROR: " << db.lastError().text();
    } else qWarning() << "MainWindow::DatabaseConnect - ERROR: no driver " << DRIVER << " available";
}

void parser::init()
{


}

void parser::import()
{

}
