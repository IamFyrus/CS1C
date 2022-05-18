#include "editmember.h"
#include "ui_editmember.h"


/* ==== EditMember::Constructor ==================================
    Constructor used to initialize the ui and QSqlQueryModel
    memberModel. It also sets the table editMemberTable to display
    the existing member names, ids, types, and expiration dates
    from the database, and uses a QIntValidator to make
    memberIdLine only able to contain numbers.
================================================================== */
EditMember::EditMember(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditMember)
{
    ui->setupUi(this);
    memberModel = new QSqlQueryModel;
    QString i = "1";
    memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate FROM item WHERE activeMember =\"" + i + "\"");
    ui->editMemberTable->setModel(memberModel);
    ui->memberIdLine->setValidator(new QIntValidator(0, 9999999, this));
}
/* ==== EditMember::Destructor ===================================
    Destructor used to delete the ui and QSqlQueryModel
    memberModel.
================================================================== */
EditMember::~EditMember()
{
    delete ui;
    delete memberModel;
}
/* ==== EditMember::addMemberButtonClicked =======================
    addMemberButtonClicked is used to get text from the lineEdits
    memberNameLine, memberIdLine, memberTypeLine, and expDateLine,
    and enter a new member into the database using the information
    provided.
================================================================== */
void EditMember::addMemberButtonClicked()
{

    QString q;
    QSqlQuery query;
    QString name = ui->memberNameLine->text();
    QString id = ui->memberIdLine->text();
    QString type = ui->memberTypeLine->text();
    if(type != "Regular" || type != "Executive" || type != "Regular" || type != "Executive")
    {
        QMessageBox::warning(this, "Member Type", "Please enter Regular or Executive");
        return;
    }
    QString date = ui->expDateLine->text();
    QString i = "1";
    query.prepare("SELECT * FROM bulkClub WHERE name=:name");
    query.bindValue(":name", name);
    q = "INSERT INTO item (memberName, memberId, memberType, expDate, itemName, itemPrice, quantity, date, expCost, activeMember, activeItem) VALUES (\"" + name + "\", \"" + id + "\", \"" + type + "\", \"" + date + "\", \"" + " " + "\", \"" + " " + "\", \""+ " " + "\", \"" + "\", \"" + "\", \"" + i + "\", \"" + i + "\");";
    if (!query.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
    memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate FROM item WHERE activeMember =\"" + i + "\"");
    ui->editMemberTable->setModel(memberModel);

}

/* ==== EditMember::deleteMemberButtonClicked ====================
    deleteMemberButtonClicked is used to get text from the lineEdits
    memberNameLine, memberIdLine, memberTypeLine, and expDateLine,
    and delete an existing member from the database using the
    information provided. This members past purchases will still
    remain, but they will no longer show up for any member based
    information or be able to make any new purchases.
================================================================== */
void EditMember::deleteMemberButtonClicked()
{
    QString name = ui->memberNameLine->text();
    QString id = ui->memberIdLine->text();
    QString type = ui->memberTypeLine->text();
    QString date = ui->expDateLine->text();
    QString q;
    QSqlQuery query;
    QString i = "0";
    QString j = "1";

    q = "UPDATE item SET activeMember =\"" + i + "\" WHERE memberName =\"" + name + "\" AND memberId =\"" + id + "\"";
    if (!query.exec(q)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
    memberModel->setQuery("SELECT DISTINCT memberName, memberId, memberType, expDate FROM item WHERE activeMember =\"" + j + "\"");
    ui->editMemberTable->setModel(memberModel);


}



/* ==== EditMember::on_editMemberTable_clicked ===================
    on_editMemberTable_clicked is used to get the text selected
    from the table editMemberTable and place the according
    information into lineEdits memberNameLine, memberIdLine,
    memberTypeLine, and expDateLine.
================================================================== */
void EditMember::on_editMemberTable_clicked(const QModelIndex &index)
{
    QString name;
    QString id;
    QString type;
    QString date;
    name = index.siblingAtColumn(0).data().toString();
    ui->memberNameLine->setText(name);
    QSqlQuery query("SELECT DISTINCT memberId FROM item WHERE memberName = \"" + name + "\"");
    if (query.next()) ui->memberIdLine->setText(query.value(0).toString());
    QSqlQuery x("SELECT DISTINCT memberType FROM item WHERE memberName = \"" + name + "\"");
    if (x.next()) ui->memberTypeLine->setText(x.value(0).toString());
    QSqlQuery y("SELECT DISTINCT expDate FROM item WHERE memberName = \"" + name + "\"");
    if (y.next()) ui->expDateLine->setText(y.value(0).toString());

}

