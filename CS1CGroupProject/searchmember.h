#ifndef SEARCHMEMBER_H
#define SEARCHMEMBER_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
namespace Ui {
class searchMember;
}

class searchMember : public QMainWindow
{
    Q_OBJECT

public:
    explicit searchMember(QWidget *parent = nullptr);
    ~searchMember();

private slots:
    void on_searchName_clicked();

    void on_searchId_clicked();

private:
    Ui::searchMember *ui;
    QSqlQueryModel* itemModel;
};

#endif // SEARCHMEMBER_H
