#include "addpurchases.h"
#include "ui_addpurchases.h"


/* ==== AddPurchases::Constructor =================================
    Constructor used to initialize SQLQueryModels itemModel and
    memberModel, set itemTable and membetTable to display the
    current items and members, and create a QIntValidator so only
    numbers can be typed into the quantity lineEdit.
================================================================== */
AddPurchases::AddPurchases(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddPurchases)
{
    ui->setupUi(this);
    itemModel = new QSqlQueryModel;
    memberModel = new QSqlQueryModel;
    QString i = "1";
    itemModel->setQuery("SELECT DISTINCT itemName, itemPrice FROM item WHERE activeItem =\"" + i + "\"");
    ui->itemTable->setModel(itemModel);
    memberModel->setQuery("SELECT DISTINCT memberName, memberId FROM item WHERE activeMember =\"" + i + "\"");
    ui->memberTable->setModel(memberModel);
    ui->quantityLine->setValidator(new QIntValidator(0, 100, this));
}
/* ==== AddPurchases::Destructor =================================
    Destructor used to delete the ui and QSqlQueryModels itemModel
    and memberModel.
================================================================== */
AddPurchases::~AddPurchases()
{
    delete ui;
    delete itemModel;
    delete memberModel;
}

/* ==== AddPurchases::on_memberTable_clicked =====================
    on_memberTable_clicked used to set the text in the lineEdit
    memberLine equal to the name of the member that was clicked.
================================================================== */
void AddPurchases::on_memberTable_clicked(const QModelIndex &index)
{
    QString name;
    name = index.siblingAtColumn(0).data().toString();
    ui->memberLine->setText(name);
}

/* ==== AddPurchases::on_itemTable_clicked =======================
    on_memberTable_clicked used to set the text in the lineEdit
    itemLine equal to the name of the item that was clicked.
================================================================== */
void AddPurchases::on_itemTable_clicked(const QModelIndex &index)
{
    QString name;
    name = index.siblingAtColumn(0).data().toString();
    ui->itemLine->setText(name);
}


/* ==== AddPurchases::on_addPurchase_clicked =====================
    on_addPurchase_clicked used to get the text in the lineEdits
    itemLine, memberLine, dateLine, and quantityLine, and create a
    purchase for the user input based on the information entered
    in these line edits. It stores all of the member and purchase
    informatin into the database.
================================================================== */
void AddPurchases::on_addPurchase_clicked()
{
    QString q;
    QSqlQuery s;
    QString itemName = ui->itemLine->text();
    QString memberName = ui->memberLine->text();
    QString memberId, memberType, expDate, itemPrice, expCost;
    QString date = ui->dateLine->currentText();
    QString quantity = ui->quantityLine->text();
    QString i = "1";
    QSqlQuery query("SELECT DISTINCT memberId, memberType, expDate FROM item WHERE memberName = \"" + memberName + "\"");
    if (query.next())
    {
        memberId = query.value(0).toString();
        memberType = query.value(1).toString();
        expDate = query.value(2).toString();
        if(memberType == "Regular")
        {
            expCost = "$65.00";
        }
        else
        {
            expCost = "$120.00";
        }
    }
    QSqlQuery x("SELECT DISTINCT itemPrice FROM item WHERE itemName = \"" + itemName + "\"");
    if (x.next())
    {
        itemPrice = x.value(0).toString();
    }
    s.prepare("SELECT * FROM bulkClub WHERE memberName=:name");
    query.bindValue(":name", memberName);
    q = "INSERT INTO item (memberName, memberType, expDate, itemName, memberId, itemPrice, quantity, date, expCost, activeMember, activeItem) VALUES (\"" + memberName + "\",\"" + memberType + "\",\"" + expDate + "\",\"" + itemName + "\", \"" + memberId + "\", \"" + itemPrice + "\", \"" + quantity + "\", \"" + date + "\", \"" + expCost + "\",\"" + i + "\",\"" + i + "\");";
    if (!s.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
    else QMessageBox::information(this, "Update", "Purchase received!");
}




void AddPurchases::on_returnButton_clicked()
{
    hide();
    //delete ui;
    AdminWindow* adminWindow = new AdminWindow(this);
    adminWindow->show();
}

