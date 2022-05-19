#include "adminwindow.h"
#include "ui_adminwindow.h"

/* ==== AdminWindow::Constructor =================================
    Constructor used to initialize the ui.
================================================================== */
AdminWindow::AdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
}
/* ==== AdminWindow::Destructor ==================================
    Destructor used to delete the ui.
================================================================== */
AdminWindow::~AdminWindow()
{
    delete ui;
}
/* ==== AdminWindow::editMemberClicked ============================
    editMemberClicked used to open the editMember ui, and hide the
    current ui.
=================================================================== */
void AdminWindow::editMemberClicked()
{
    hide();
    delete ui;
    EditMember* editMember = new EditMember(this);
    editMember->show();
}

/* ==== AdminWindow::on_editItemButton_clicked ====================
    on_editItemButton_clicked used to open the editItem ui, and
    hide the current ui.
=================================================================== */
void AdminWindow::on_editItemButton_clicked()
{
    hide();
    delete ui;
   EditItem* editItem = new EditItem(this);
    editItem->show();
}

/* ==== AdminWindow::on_addPurchaseButton_clicked =================
    on_addPurchaseButton_clicked used to open the addPurchases ui,
    and hide the current ui.
=================================================================== */
void AdminWindow::on_addPurchaseButton_clicked()
{
    hide();
    //delete ui;
    AddPurchases* addPurchase = new AddPurchases(this);
    addPurchase->show();
}



/* ==== AdminWindow::conversionsClicked ===========================
    conversionsClicked used to open the conversions ui, and hide
    the current ui.
=================================================================== */
void AdminWindow::conversionsClicked()
{
    hide();
    //delete ui;
    Conversions* conversions = new Conversions(this);
    conversions->show();
}


void AdminWindow::on_returnButton_clicked()
{
    hide();
    //delete ui;
    login* loginWindow = new login(this);
    loginWindow->show();
}

