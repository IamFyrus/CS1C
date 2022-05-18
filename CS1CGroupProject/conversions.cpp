#include "conversions.h"
#include "ui_conversions.h"

/* ==== Conversions::Constructor =================================
    Constructor used to initialize the ui and QSqlQueryModels
    regModel and execModel. It also uses the helper function
    convert to calculate which members should convert their
    memberships. It then setsw the tables regConversions and
    execConversions to display which members of each type, regular
    and executive, should convert their memberships.
================================================================== */
Conversions::Conversions(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Conversions)
{
    ui->setupUi(this);
    regModel = new QSqlQueryModel;
    execModel = new QSqlQueryModel;
    convert();
    QString regular = "Regular";
    QString executive = "Executive";
    QString b = "0";
    regModel->setQuery("SELECT DISTINCT memberName, memberType FROM item WHERE memberType =\"" + regular + "\" AND conv =\"" + b + "\"");
    ui->regConversions->setModel(regModel);
    execModel->setQuery("SELECT DISTINCT memberName, memberType FROM item WHERE memberType =\"" + executive + "\" AND conv =\"" + b + "\"");
    ui->execConversions->setModel(execModel);
}
/* ==== Conversions::Destructor ==================================
    Destructor used to delete the ui and QSqlQueryModels regModel
    and execModel.
================================================================== */
Conversions::~Conversions()
{
    delete ui;
    delete regModel;
    delete execModel;
}

/* ==== Conversions::convert =====================================
    convert used to calculate the amount of regular and executive
    members who should convert their membership to the opposite
    type.
================================================================== */

void Conversions::convert()
{
    QString name, type;
    QString b = "0";
    QString x;
    int i = 0;
    QSqlQuery l;
    QString regular = "Regular";
    QString executive = "Executive";
    QSqlQuery query("SELECT DISTINCT memberName, memberType FROM item");
    while (query.next())
    {
        convName.push_back(query.value(0).toString());
        convType.push_back(query.value(1).toString());
        i++;
    }
        const int SIZE = i;

    for(i = 0; i < SIZE; i++)
    {
        name = convName[i];
        type = convType[i];
        QSqlQuery q("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE memberName  =\"" + name + "\" AND memberType =\"" + type + "\" ORDER BY memberId");
        if (q.next())
        {
            if(type == regular)
            {
                if(q.value(0).toInt() >= 55)
                {
                    x = "UPDATE item SET conv =\"" + b + "\" WHERE memberName =\"" + name + "\";";
                    if (!l.exec(x)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
                }
            }else
            {
                if(q.value(0).toInt() < 55)
                {
                    x = "UPDATE item SET conv =\"" + b + "\" WHERE memberName =\"" + name + "\";";
                    if (!l.exec(x)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
                }
            }
        }

        regModel->setQuery("SELECT  memberName, memberType FROM item WHERE memberType =\"" + regular + "\" AND conv =\"" + b + "\"  ORDER BY memberId");
        ui->regConversions->setModel(regModel);

        execModel->setQuery("SELECT  memberName, memberType FROM item WHERE memberType =\"" + executive + "\" AND conv =\"" + b + "\" ORDER BY memberId");
        ui->execConversions->setModel(execModel);


        QSqlQuery s("SELECT COUNT(DISTINCT memberName) FROM item WHERE memberType =\"" + regular + "\" AND conv =\"" + b + "\"  ORDER BY memberId");
        if (s.next()) ui->regMembers->setText(QString::number(s.value(0).toInt()));
        if (ui->regMembers->text() == "") ui->regMembers->setText("0");

        QSqlQuery p("SELECT COUNT(DISTINCT memberName) FROM item WHERE memberType =\"" + executive + "\" AND conv =\"" + b + "\"  ORDER BY memberId");
        if (p.next()) ui->execMembers->setText(QString::number(p.value(0).toInt()));
        if (ui->execMembers->text() == "") ui->execMembers->setText("0");


    }
}


