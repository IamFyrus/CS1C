#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
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
    managerWindow = new ManagerWindow(this);
    managerWindow->show();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Incorrect username or password");
    }

}

