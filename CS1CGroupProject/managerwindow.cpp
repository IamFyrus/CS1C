#include "managerwindow.h"
#include "ui_managerwindow.h"

/* ==== ManagerWindow::Constructor ===============================
    Constructor used to initialize the ui.
================================================================== */
ManagerWindow::ManagerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManagerWindow)
{
    ui->setupUi(this);

}

/* ==== ManagerWindow::Destructor ================================
    Destructor used to delete the ui.
================================================================== */
ManagerWindow::~ManagerWindow()
{
    delete ui;
}

/* ==== ManagerWindow::displayButtonClicked ======================
    displayButtonClicked used to open the SelectDay ui.
================================================================== */
void ManagerWindow::displayButtonClicked()
{
    hide();
    //delete ui;
    SelectDay* selectWindow = new SelectDay(this);
    selectWindow->show();
}

/* ==== ManagerWindow::memberButtonClicked ======================
    memberButtonClicked used to open the MemberInfo ui.
================================================================== */
void ManagerWindow::memberButtonClicked()
{
    hide();
  //  delete ui;
    MemberInfo* memberWindow = new MemberInfo(this);
    memberWindow->show();
}

void ManagerWindow::on_returnButton_clicked()
{
    hide();
    //delete ui;
    login* loginWindow = new login(this);
    loginWindow->show();
}

