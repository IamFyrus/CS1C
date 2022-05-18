#ifndef ITEMINFO_H
#define ITEMINFO_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include "parser.h"
#include "managerwindow.h"

namespace Ui {
class ItemInfo;
}

/*! \class ItemInfo
 *  \brief Allows manager to view item information.
 *  This class allows the manager to view the total price and quantity purchased of each item in the database.
 */

class ItemInfo : public QMainWindow
{
    Q_OBJECT

public:
        /*! Constructor
         *
         *  Constructor used to initialize the ui and QSqlQueryModels itemModel and quantModel. It also uses helper function displayItems to display the current item names in the table itemTable.
         */
        explicit ItemInfo(QWidget *parent = nullptr);

        /*! Destructor
         *
         *  Destructor used to delete the ui and QSqlQueryModels itemModel and quantModel.
         */
        ~ItemInfo();


   //     void initTable();
        /*! @fn  void displayItems();
         *
         *  Method used to display the current item names in the table itemTable.
         */
        void displayItems();

private slots:
        /*! @fn  void on_itemTable_clicked(const QModelIndex &index);
         *
         *  Method used to display the values memberName, itemPrice, and quantity from each purchase of the indicated item onto table quantTable. It also calculates and displays the total sum of all of the purchases in label totalPrice, and calculates and displays the total quantity of the indicated item purchases in label totalQuantity.
         */
        void on_itemTable_clicked(const QModelIndex &index);


private:
        /*! @var Ui::ItemInfo *ui;
         *  ItemInfo ui;
         */
        Ui::ItemInfo *ui;
        /*! @var QSqlQueryModel* itemModel;
         *  Used to update and display information on item table;
         */

        QSqlQueryModel* itemModel;
        /*! @var QSqlQueryModel* quantModel;
         *  Used to update and display information on quantity table;
         */
        QSqlQueryModel* quantModel;

        /*! @var std::vector<std::string> itemName;
         *  vector that holds names of items;
         */
        std::vector<std::string> itemName;
        /*! @var std::vector<std::string> itemPrice;
         *  vector that holds prices of items;
         */

        std::vector<std::string> itemPrice;
        /*! @var std::vector<int> quantity;
         *  vector that holds wuantity of items;
         */

        std::vector<int> quantity;
};

#endif // ITEMINFO_H
