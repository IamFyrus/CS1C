#ifndef EDITMEMBER_H
#define EDITMEMBER_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include "adminwindow.h"
namespace Ui {
class EditMember;
}

/*! \class EditMember
 *  \brief Allows admin to edit members in database.
 *  This class allows the admin to choose to add or delete members from the existing database.
 */

class EditMember : public QMainWindow
{
    Q_OBJECT

public:
    /*! Constructor
     *
     *  Constructor used to initialize the ui and QSqlQueryModel memberModel. It also sets the table editMemberTable to display the existing member names, ids, types, and expiration dates from the database, and uses a QIntValidator to make memberIdLine only able to contain numbers.
     */
    explicit EditMember(QWidget *parent = nullptr);

    /*! Destructor
     *
     *  Destructor used to delete the ui and QSqlQueryModel memberModel.
     */
    ~EditMember();

public slots:

    /*! @fn  void addMemberButtonClicked();
     *
     *  Method used to get text from the lineEdits memberNameLine, memberIdLine, memberTypeLine, and expDateLine, and enter a new member into the database using the information provided.
     */
    void addMemberButtonClicked();
    /*! @fn  void deleteMemberButtonClicked();
     *
     *  Method used to get text from the lineEdits memberNameLine, memberIdLine, memberTypeLine, and expDateLine, and delete an existing member from the database using the information provided. This members past purchases will still remain, but they will no longer show up for any member based information or be able to make any new purchases.
     */
    void deleteMemberButtonClicked();


private slots:
    /*! @fn  void on_editMemberTable_clicked(const QModelIndex &index);
     *
     *  Method used to get the text selected from the table editMemberTable and place the according information into lineEdits memberNameLine, memberIdLine, memberTypeLine, and expDateLine.
     */
    void on_editMemberTable_clicked(const QModelIndex &index);
    /*! @fn void on_returnButton_clicked()
     *
     *  Method used to return to the previous window.
     */
    void on_returnButton_clicked();

private:
    /*! @var Ui::EditMember *ui;
     *  EditMember ui;
     */
    Ui::EditMember *ui;
    /*! @var QSqlQueryModel* memberModel;
     *  Used to update and display members in table.
     */
    QSqlQueryModel* memberModel;
};

#endif // EDITMEMBER_H
