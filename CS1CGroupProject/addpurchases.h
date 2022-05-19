#ifndef ADDPURCHASES_H
#define ADDPURCHASES_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include "adminwindow.h"

namespace Ui {
class AddPurchases;
}

/*! \class AddPurchases
 *  \brief Allows admin to add purchases to members
 *  This class allows the admin to add purchases to existing members
 *
 */

class AddPurchases : public QMainWindow
{
    Q_OBJECT

public:
    /*! Constructor
     *
     *      Constructor used to initialize SQLQueryModels itemModel and memberModel, set itemTable and membetTable to display the current items and members, and create a QIntValidator so only numbers can be typed into the quantity lineEdit.
     */
    explicit AddPurchases(QWidget *parent = nullptr);

    /*! Destructor
     *
     *      Destructor used to delete the ui and QSqlQueryModels itemModel and memberModel.
     */
    ~AddPurchases();

private slots:

    /*! @fn void on_memberTable_clicked(const QModelIndex &index)
     *
     *  Method used to set the text in the lineEdit memberLine equal to the name of the member that was clicked.
     */
    void on_memberTable_clicked(const QModelIndex &index);

    /*! @fn void on_itemTable_clicked(const QModelIndex &index)
     *
     *  Method used to set the text in the lineEdit itemLine equal to the name of the item that was clicked.
     */
    void on_itemTable_clicked(const QModelIndex &index);

    /*! @fn void on_addPurchase_clicked()
     *
     *  Method used to get the text in the lineEdits itemLine, memberLine, dateLine, and quantityLine, and create a purchase for the user input based on the information entered in these line edits. It stores all of the member and purchase information into the database.
     */
    void on_addPurchase_clicked();

    /*! @fn void on_returnButton_clicked()
     *
     *  Method used to return to the previous window.
     */
    void on_returnButton_clicked();

private:
    /*! @var Ui::AddPurchases *ui;
     *  AddPurchases ui;
     */
    Ui::AddPurchases *ui;

    /*! @var QSqlQueryModel* itemModel;
     *  itemModel used to display item information;
     */
    QSqlQueryModel* itemModel;

    /*! @var QSqlQueryModel* memberModel;
     *  memberModel used to display member information;
     */
    QSqlQueryModel* memberModel;
};

#endif // ADDPURCHASES_H
