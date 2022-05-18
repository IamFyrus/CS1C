#include "login.h"
#include "ui_login.h"



/* ==== login::Constructor =======================================
    Constructor used to initialize the ui and (if not persistent)
    read the data from files provided and create a database to
    enter them into. It does this using helper functions
    memberImport and itemImport.
================================================================== */
login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    memberFile = "../CS1CGroupProject/member.txt";
    parser.memberImport(memberFile); // comment out when using persistent database.

   for(int i=1; i<=7; i++)
    {
        itemFile = "../CS1CGroupProject/day" + std::to_string(i) + ".txt";
        parser.itemImport(itemFile);
    }
}

/* ==== login::Destructor ========================================
    Destructor used to delete the ui.
================================================================== */
login::~login()
{
    delete ui;
}

/* ==== login::buttonClickHandler ================================
    buttonClickHandler used to clear the text from the lineEdits
    userLabel and passwordLabel.
================================================================== */
void login::buttonClickHandler()
{
    this->ui->userLabel->setText("");
    this->ui->passwordLabel->setText("");
}

/* ==== login::loginButtonClicked ================================
    loginButtonClicked used to check whether the username and
    password input are valid. If the username and password
    indicate that a manager is using the program, then it takes
    the user to the manager window. If the username and password
    indicates that an admin is using the program, it takes them
    to the admin window.
================================================================== */
void login::loginButtonClicked()
{
    QString username = ui->userLabel->text();
    QString password = ui->passwordLabel->text();
    if(username == "manager" && password == "password")
    {
    hide();
 //   delete ui;
    ManagerWindow* managerWindow = new ManagerWindow(this);
    managerWindow->show();
    }
    else if(username == "admin" && password == "password")
    {
    hide();
  //  delete ui;
    adminWindow = new AdminWindow(this);
    adminWindow->show();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Incorrect username or password");
    }

}

