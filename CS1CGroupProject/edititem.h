#ifndef EDITITEM_H
#define EDITITEM_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include "adminwindow.h"
#include <QDoubleValidator>
namespace Ui {
class EditItem;
}

class EditItem : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditItem(QWidget *parent = nullptr);
    ~EditItem();

private slots:
    void on_editItemTable_clicked(const QModelIndex &index);

    void on_addItemButton_clicked();

    void on_editItemButton_clicked();

    void on_deleteItemButton_clicked();


private:
    Ui::EditItem *ui;
    QSqlQueryModel* itemModel;
};

#endif // EDITITEM_H
