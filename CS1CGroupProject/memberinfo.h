#ifndef MEMBERINFO_H
#define MEMBERINFO_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QTableWidget>
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
private:
    Ui::MemberInfo *ui;
    QSqlQueryModel* memberModel;
};

#endif // MEMBERINFO_H
