#include "login.h"
#include "ui_login.h"

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

login::~login()
{
    delete ui;
}

void login::buttonClickHandler()
{
    this->ui->userLabel->setText("");
    this->ui->passwordLabel->setText("");
}

void login::loginButtonClicked()
{
    QString username = ui->userLabel->text();
    QString password = ui->passwordLabel->text();
    if(username == "manager" && password == "password")
    {
    hide();
    delete ui;
    ManagerWindow* managerWindow = new ManagerWindow(this);
    managerWindow->show();
    }
    else if(username == "admin" && password == "password")
    {
    hide();
    delete ui;
    adminWindow = new AdminWindow(this);
    adminWindow->show();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Incorrect username or password");
    }

}

