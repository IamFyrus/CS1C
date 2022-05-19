#ifndef MEMBERINFO_H
#define MEMBERINFO_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QTableWidget>
#include "managerwindow.h"
namespace Ui {
class MemberInfo;
}

/*! \class MemberInfo
 *  \brief Allows manager to view member info.
 *  This class allows the manager to select to either view the main report, or view member information.
 */
class MemberInfo : public QMainWindow
{
    Q_OBJECT

public:
    /*! Constructor
     *
     *  Constructor used to initialize the ui and QSqlQueryModel memberModel. It also uses helper function displayMembers to display all of the current members and member information available in the database.
     */
    explicit MemberInfo(QWidget *parent = nullptr);

    /*! Destructor
     *
     *  Destructor used to delete the ui and QSqlQueryModel memberModel.
     */
    ~MemberInfo();

    /*! @fn  void displayMembers();
     *
     *  Method used to display all of the current members and member information available in the database.
     */
    void displayMembers();
private slots:
    /*! @fn  void on_expButton_clicked();
     *
     *  Method used to display all of the current memberswhose memberships will expire in the month indicated in monthInput.
     */
    void on_expButton_clicked();

    /*! @fn void on_returnButton_clicked()
     *
     *  Method used to return to the previous window.
     */
    void on_returnButton_clicked();

private:
    /*! @var Ui::MemberInfo *ui;
     *  MemberInfo ui;
     */
    Ui::MemberInfo *ui;

    /*! @var QSqlQueryModel* memberModel;
     *  Used to help update and display member information in table;
     */
    QSqlQueryModel* memberModel;
};

#endif // MEMBERINFO_H
