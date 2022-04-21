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
    hide();
    delete ui;
    managerWindow = new ManagerWindow(this);
    managerWindow->show();

}

