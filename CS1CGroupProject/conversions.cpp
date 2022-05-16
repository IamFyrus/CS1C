#include "conversions.h"
#include "ui_conversions.h"

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

Conversions::~Conversions()
{
    delete ui;
}

void Conversions::convert()
{
    QString temp, type;
    QString b = "0";
    QString q;
    QString x;
    QSqlQuery l;
    QString regular = "Regular";
    QString executive = "Executive";
    int total;

    parser p;
    for(int i = 0; i < p.getMemberNameSize(); i++)
    {
        temp = QString::fromStdString(p.getMemberName(i));
        type = QString::fromStdString(p.getMemberType(i));
        if(type == regular)
        {
        QSqlQuery m("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE memberName = \"" + temp + "\" AND memberType = \"" + type + "\" ORDER BY memberId");
        if (m.next())
        {
            total = m.value(0).toInt();
        }
        else
        {
            total = 0;
        }
        if(total >= 120)
        {
            regConv.push_back(regular);
            x = "UPDATE item SET conv =\"" + b + "\" WHERE memberName =\"" + temp + "\"";


         if (!l.exec(x)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
        }
        else
        {
        QSqlQuery query("SELECT SUM(itemPrice * quantity * 0.02) FROM item WHERE memberName = \"" + temp + "\")");
        if (query.next())
        {
            execConv.push_back(executive);
            total = query.value(0).toInt();
        }
        else
        {
            total = 0;
        }
        if(total <= 120)
        {

            x = "UPDATE item SET conv =\"" + b + "\" WHERE memberName =\"" + temp + "\"";

        }
         if (!query.exec(x)) qWarning() << "MainWindow::DatabasePopulate - ERROR: ";
        }
    }
    }

}
