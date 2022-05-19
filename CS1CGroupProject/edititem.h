#ifndef EDITITEM_H
#define EDITITEM_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include "adminwindow.h"
#include <QDoubleValidator>
namespace Ui {
class EditItem;
}

/*! \class EditItem
 *  \brief Allows admin to edit items in database.
 *  This class allows the admin to choose to edit, add, or delete items from the existing database.
 */

class EditItem : public QMainWindow
{
    Q_OBJECT

public:
    /*! Constructor
     *
     *  Constructor used to initialize the ui and QSqlQueryModel itemModel. It also sets the table editItemTable to display the existing item names and prices, and uses a QDoubleValidator to make the editLine itemPriceLine only able to accept numbers.
     */
    explicit EditItem(QWidget *parent = nullptr);
    /*! Destructor
     *
     *  Destructor used to delete the ui and QSqlQueryModel itemModel.
     */
    ~EditItem();

private slots:
    /*! @fn  void on_editItemTable_clicked(const QModelIndex &index)
     *
     *  Method used to update the lineEdits itemNameLine and itemPriceLine to contain the information selected in editItemTable.
     */
    void on_editItemTable_clicked(const QModelIndex &index);
    /*! @fn void on_addItemButton_clicked()
     *
     *  Method used to get text from the lineEdits itemNameLine and itemPriceLine, and enter a new item into the database using the information provided.
     */
    void on_addItemButton_clicked();
    /*! @fn  void on_editItemButton_clicked()
     *
     *  Method used to get text from the lineEdits itemNameLine and itemPriceLine, and updates the price of the item indicated to contain the price provided in itemPriceLine.
     */
    void on_editItemButton_clicked();
    /*! @fn  void on_deleteItemButton_clicked();
     *
     *  Method used to get text from the lineEdits itemNameLine and itemPriceLine, and deletes the item indicated from the inventory. It does this by making one of the values in the database equal to 0 instead of 1, so that way the previous purchases of this item still remain.
     */
    void on_deleteItemButton_clicked();

    /*! @fn void on_returnButton_clicked()
     *
     *  Method used to return to the previous window.
     */
    void on_returnButton_clicked();

private:
    /*! @var Ui::EditItem *ui;
     *  EditItem ui;
     */
    Ui::EditItem *ui;
    /*! @var QSqlQueryModel* itemModel;
     *  Used to update and display items in table.
     */
    QSqlQueryModel* itemModel;
};

#endif // EDITITEM_H
