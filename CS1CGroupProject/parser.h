#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <fstream>
#include <string>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlError>
#include <QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QSqlDatabase>
#include <vector>

class parser
{
public:
    parser();

    void memberImport(std::string name);

    void itemImport(std::string name);
    int getMemberNameSize();
    std::string getMemberName(int i);
    std::string getMemberType(int i);
    std::string getItemName(int i);
    std::string getItemPrice(int i);
    int getQuantity(int i);
    int getItemNameSize();





private:
    void init();

    void connect();

    static bool isInit;

    std::vector<std::string> memberName;

    std::vector<std::string> memberId;

    std::vector<std::string> memberType;

    std::vector<std::string> expDate;

    std::vector<std::string> receipt;

    std::vector<std::string> itemName;

    std::vector<std::string> itemPrice;

    std::vector<int> quantity;
};

#endif // PARSER_H
