#ifndef ADDPURCHASES_H
#define ADDPURCHASES_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include "adminwindow.h"

namespace Ui {
class AddPurchases;
}

class AddPurchases : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddPurchases(QWidget *parent = nullptr);
    ~AddPurchases();

private slots:
    void on_memberTable_clicked(const QModelIndex &index);

    void on_itemTable_clicked(const QModelIndex &index);

    void on_addPurchase_clicked();


private:
    Ui::AddPurchases *ui;
    QSqlQueryModel* itemModel;
    QSqlQueryModel* memberModel;
};

#endif // ADDPURCHASES_H
