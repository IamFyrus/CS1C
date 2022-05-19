#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H

#include <QMainWindow>
#include <QObject>
#include "parser.h"
#include "selectday.h"
#include "memberinfo.h"
#include "login.h"

namespace Ui {
class ManagerWindow;
}

/*! \class ManagerWindow
 *  \brief Allows manager to select a choice.
 *  This class allows the manager to select to either view the main report, or view member information.
 */
class ManagerWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*! Constructor
     *
     *  Constructor used to initialize the ui.
     */
    explicit ManagerWindow(QWidget *parent = nullptr);

    /*! Destructor
     *
     *  Destructor used to delete the ui.
     */
    ~ManagerWindow();
public slots:
    /*! @fn  void displayButtonClicked();
     *
     *  Method used to open the SelectDay ui.
     */
    void displayButtonClicked();

    /*! @fn  void memberButtonClicked();
     *
     *  Method used to open the MemberInfo ui.
     */
    void memberButtonClicked();
private slots:
    /*! @fn void on_returnButton_clicked()
     *
     *  Method used to return to the previous window.
     */
    void on_returnButton_clicked();

private:
    /*! @var Ui::ManagerWindow *ui;
     *  ManagerWindow ui;
     */
    Ui::ManagerWindow *ui;
    //SelectDay* selectWindow;
    //MemberInfo* memberWindow;
};

#endif // MANAGERWINDOW_H
