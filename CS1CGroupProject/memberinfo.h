#ifndef MEMBERINFO_H
#define MEMBERINFO_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QTableWidget>
#include "managerwindow.h"
namespace Ui {
class MemberInfo;
}

class MemberInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberInfo(QWidget *parent = nullptr);
    ~MemberInfo();
    void displayMembers();
private slots:
    void on_expButton_clicked();


private:
    Ui::MemberInfo *ui;
    QSqlQueryModel* memberModel;
};

#endif // MEMBERINFO_H
