#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <fstream>
#include <string>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>

class parser
{
public:
    parser();

    void memberImport(std::string name);

    void itemImport(std::string name);

private:
    void init();

    void connect();

    static bool isInit;
};

#endif // PARSER_H
