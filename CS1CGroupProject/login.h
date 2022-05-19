#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "managerwindow.h"
#include "adminwindow.h"
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

/*! \class login
 *  \brief Allows user to login.
 *  This class allows the manager or admin to login to the program.
 */

class login : public QMainWindow
{
    Q_OBJECT

public:
    /*! Constructor
     *
     *  Constructor used to initialize the ui and (if not persistent) read the data from files provided and create a database to enter them into. It does this using helper functions memberImport and itemImport.
     */
    login(QWidget *parent = nullptr);

    /*! Destructor
     *
     *  Destructor used to delete the ui.
     */
    ~login();
public slots:
    /*! @fn  void buttonClickHandler();
     *
     *  Method used to clear the text from the lineEdits userLabel and passwordLabel.
     */
    void buttonClickHandler();

    /*! @fn  void loginButtonClicked();
     *
     *  Method used to check whether the username and password input are valid. If the username and password indicate that a manager is using the program, then it takes the user to the manager window. If the username and password indicates that an admin is using the program, it takes them to the admin window.
     */
    void loginButtonClicked();
private:
    /*! @var Ui::login *ui;
     *  login ui;
     */
    Ui::login *ui;

    /*! @var std::string memberFile;
     *  file containing member information;
     */
    std::string memberFile;

    /*! @var std::string itemFile;
     *  file containing item information;
     */
    std::string itemFile;

    /*! @var parser parser;
     *  variable used to access methods to read in item and member files
     */
    parser parser;

};
#endif // LOGIN_H
