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

/*! \class parser
 *  \brief Reads information from files into database.
 *  This class reads the member and item information from the files indicated and stores the values in a SQLite database.
 */
class parser
{
public:
    /*! Constructor
     *
     *  Constructor used to connect and initialize the databases. After first initialization the database does not reinitialize instances.
     */
    parser();

    /*! @fn  void memberImport(std::string name);
     *
     *  Method used to read in all member data from input files provided.
     */
    void memberImport(std::string name);

    /*! @fn  void itemImport(std::string name);
     *
     *  Method used to read in all item data from input files provided and store it and the member information into the database.
     */
    void itemImport(std::string name);

    /* used for testing
    int getMemberNameSize();
    std::string getMemberName(int i);
    std::string getMemberType(int i);
    std::string getItemName(int i);
    std::string getItemPrice(int i);
    int getQuantity(int i);
    int getItemNameSize();
*/




private:
    /*! @fn void init();
     *  Method used to initialize all tables used in the database.
     */
    void init();

    /*! @fn void connect();
     *  Used to connect the program to SQLite so that the database can be created. The database can be set to either be persistent, or initialize on each run.
     */
    void connect();

    /*! @var static bool isInit;
     *  Used to indicate if the database has already been initialized or not;
     */
    static bool isInit;

    /*! @var std::vector<std::string> memberName;
     *  vector of member names;
     */
    std::vector<std::string> memberName;

    /*! @var std::vector<std::string> memberId;
     *  vector of member id numbers;
     */
    std::vector<std::string> memberId;

    /*! @var std::vector<std::string> memberType;
     *  vector of member types;
     */
    std::vector<std::string> memberType;

    /*! @var std::vector<std::string> expDate;
     *  vector of member expiration dates;
     */
    std::vector<std::string> expDate;

    /*! @var std::vector<std::string> itemName;
     *  vector of item names;
     */
    std::vector<std::string> itemName;

    /*! @var std::vector<std::string> itemPrice;
     *  vector of item prices;
     */
    std::vector<std::string> itemPrice;

    /*! @var std::vector<int> quantity;
     *  vector of item quantities;
     */
    std::vector<int> quantity;
};

#endif // PARSER_H
