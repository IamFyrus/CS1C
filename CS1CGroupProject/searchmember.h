#ifndef SEARCHMEMBER_H
#define SEARCHMEMBER_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QIntValidator>
#include "managerwindow.h"

namespace Ui {
class searchMember;
}

/*! \class searchMember
 *  \brief Allows manager to search for information on specific member.
 *  This class lets the manager input a specific member name or member id and displays the item name, price, and quantity for each puchase, as well as the total price and total quantity bought of all of the purchases from the member.
 */
class searchMember : public QMainWindow
{
    Q_OBJECT

public:
    /*! Constructor
     *
     *  Constructor used to initialize the ui and set a QIntValidator so that the lineEdit memberIdLine can only contain numbers.
     */
    explicit searchMember(QWidget *parent = nullptr);

    /*! Destructor
     *
     *  Destructor used to delete the ui.
     */
    ~searchMember();

private slots:
    /*! @fn  void on_searchName_clicked();
     *
     *  Method used to  take text of memberNameLine and display the total amount spent and the quantity of items bought by the indicated user.
     */
    void on_searchName_clicked();

    /*! @fn  void on_searchId_clicked();
     *
     *  Method used to take text of memberIdLine and display the total amount spent and the quantity of items bought by the indicated user.
     */
    void on_searchId_clicked();
    /*! @fn void on_returnButton_clicked()
     *
     *  Method used to return to the previous window.
     */
    void on_returnButton_clicked();

private:
    /*! @var Ui::searchMember *ui;
     *  searchMember ui;
     */
    Ui::searchMember *ui;
    /*! @var QSqlQueryModel* itemModel;
     *  Helps display and update item information on itemTable;
     */
    QSqlQueryModel* itemModel;
};

#endif // SEARCHMEMBER_H
