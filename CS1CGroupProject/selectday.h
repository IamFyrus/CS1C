#ifndef SELECTDAY_H
#define SELECTDAY_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include "parser.h"
#include "iteminfo.h"
#include "managerwindow.h"
#include "searchitem.h"
#include "searchmember.h"
namespace Ui {
class SelectDay;
}

/*! \class SelectDay
 *  \brief Allows manager to view the basic report, and type specific reports.
 *  This class lets the manager input a specific member name or member id and displays the item name, price, and quantity for each puchase, as well as the total price and total quantity bought of all of the purchases from the member.
 */

class SelectDay : public QMainWindow
{
    Q_OBJECT

public:
    /*! Constructor
     *
     *  Constructor used to initialize the ui and QSqlQueryModels itemModel and memberModel.
     */
    explicit SelectDay(QWidget *parent = nullptr);

    /*! Destructor
     *
     *  Destructor used to delete the ui and QSqlQueryModels itemModel and memberModel.
     */
    ~SelectDay();

public slots:
    /*! @fn  void viewReportClicked();
     *
     *  Method used to view the main report of members who shopped and items purchased on indicated day.
     */
    void viewReportClicked();

    /*! @fn  void on_memberTable_clicked(const QModelIndex &index);
     *
     *  Method used to view the report of items purchased by the member selected on the indicated day.
     */
    void on_memberTable_clicked(const QModelIndex &index);

    /*! @fn  void executiveButtonClicked();
     *
     *  Method used to view the report of members who shopped and the items purchased on the indicated day by members with the executive membership.
     */
    void executiveButtonClicked();

    /*! @fn  void regularButtonClicked();
     *
     *  Method used to view the report of members who shopped and the items purchased on the indicated day by members with the regular membership.
     */
    void regularButtonClicked();
private slots:

    /*! @fn void on_itemButton_clicked();
     *
     *  Method used to hide current ui and show ItemInfo ui.
     */
    void on_itemButton_clicked();

    /*! @fn  void on_searchItem_clicked();
     *
     *  Method used to hide current ui and show SearchItem ui.
     */

    void on_searchItem_clicked();

    /*! @fn  void on_searchMember_clicked();
     *
     *  Method used to hide current ui and show searchMember ui.
     */

    void on_searchMember_clicked();

private:
    /*! @var Ui::SelectDay *ui;
     *  SelectDay ui;
     */
    Ui::SelectDay *ui;

    /*! @var QSqlQueryModel* itemModel;
     *  Helps display and update item information on itemTable;
     */
    QSqlQueryModel* itemModel;

    /*! @var QSqlQueryModel* memberModel;
     *  Helps display and update item information on memberTable;
     */
    QSqlQueryModel* memberModel;

    /*! @var std::vector <std::string> members;
     *  vector of members;
     */
    std::vector <std::string> members;

    /*! @var QString name;
     *  stores selected name;
     */
    QString name;
    //ItemInfo* itemWindow;
};

#endif // SELECTDAY_H
