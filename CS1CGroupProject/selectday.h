#ifndef SELECTDAY_H
#define SELECTDAY_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include "parser.h"
#include "iteminfo.h"
namespace Ui {
class SelectDay;
}

class SelectDay : public QMainWindow
{
    Q_OBJECT

public:
    explicit SelectDay(QWidget *parent = nullptr);
    ~SelectDay();

public slots:
    void viewReportClicked();
    void on_memberTable_clicked(const QModelIndex &index);
    void executiveButtonClicked();
    void regularButtonClicked();
private slots:
    void on_itemButton_clicked();

private:
    Ui::SelectDay *ui;
    QSqlQueryModel* itemModel;
    QSqlQueryModel* memberModel;
    std::vector <std::string> members;
    QString name;
    ItemInfo* itemWindow;
};

#endif // SELECTDAY_H
