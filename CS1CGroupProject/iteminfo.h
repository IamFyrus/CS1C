#ifndef ITEMINFO_H
#define ITEMINFO_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include "parser.h"

namespace Ui {
class ItemInfo;
}

class ItemInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit ItemInfo(QWidget *parent = nullptr);
    ~ItemInfo();
       void initTable();
       void displayItems();
private slots:
       void on_itemTable_clicked(const QModelIndex &index);

private:
    Ui::ItemInfo *ui;
    QSqlQueryModel* itemModel;
    QSqlQueryModel* quantModel;
    std::vector<std::string> itemName;

    std::vector<std::string> itemPrice;

    std::vector<int> quantity;
};

#endif // ITEMINFO_H
