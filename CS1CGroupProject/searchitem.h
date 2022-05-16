#ifndef SEARCHITEM_H
#define SEARCHITEM_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>

namespace Ui {
class SearchItem;
}

class SearchItem : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchItem(QWidget *parent = nullptr);
    ~SearchItem();

private slots:
    void on_editItemButton_clicked();

private:
    Ui::SearchItem *ui;
};

#endif // SEARCHITEM_H
