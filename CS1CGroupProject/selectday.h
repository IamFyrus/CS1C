#ifndef SELECTDAY_H
#define SELECTDAY_H

#include <QMainWindow>
#include <QSqlQueryModel>

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

private:
    Ui::SelectDay *ui;
    QSqlQueryModel* itemModel;
    QSqlQueryModel* memberModel;
};

#endif // SELECTDAY_H
