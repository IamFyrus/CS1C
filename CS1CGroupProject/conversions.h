#ifndef CONVERSIONS_H
#define CONVERSIONS_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include "parser.h"
#include "adminwindow.h"

namespace Ui {
class Conversions;
}

/*! \class Conversions
 *  \brief Allows admin to view who should convert memberships.
 *  This class allows the admin to view the executive and regular members who should convert their membership to the other type(regular to executive, or vice versa).
 */

class Conversions : public QMainWindow
{
    Q_OBJECT

public:
    /*! Constructor
     *
     *      Constructor used to initialize the ui and QSqlQueryModels regModel and execModel. It also uses the helper function convert to calculate which members should convert their memberships. It then setsw the tables regConversions and execConversions to display which members of each type, regular and executive, should convert their memberships.
     */
    explicit Conversions(QWidget *parent = nullptr);
    /*! Destructor
     *
     *      Destructor used to delete the ui and QSqlQueryModels regModel and execModel.
     */
    ~Conversions();
    /*! @fn  void convert()
     *
     *  Method used to calculate the amount of regular and executive members who should convert their membership to the opposite type.
     */
    void convert();

private slots:
    /*! @fn void on_returnButton_clicked()
     *
     *  Method used to return to the previous window.
     */
    void on_returnButton_clicked();

private:
    /*! @var Ui::Conversions *ui;
     *  Conversions ui;
     */
    Ui::Conversions *ui;
    /*! @var std::vector <QString> convName;
     *  Holds names of users who should convert their membership;
     */
    std::vector <QString> convName;
    /*! @var std::vector <QString> convType;
     *  Holds types of users who should convert their membership;
     */
    std::vector <QString> convType;
    /*! @var QSqlQueryModel* regModel;
     *  Used to update table of regular members;
     */
    QSqlQueryModel* regModel;
    /*! @var QSqlQueryModel* execModel;
     *  Used to update table of executive members;
     */
    QSqlQueryModel* execModel;
};

#endif // CONVERSIONS_H
