#ifndef CONVERSIONS_H
#define CONVERSIONS_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include "parser.h"
#include "adminwindow.h"

namespace Ui {
class Conversions;
}

class Conversions : public QMainWindow
{
    Q_OBJECT

public:
    explicit Conversions(QWidget *parent = nullptr);
    ~Conversions();
    void convert();

private slots:
private:
    Ui::Conversions *ui;
    std::vector <QString> regConv;
    std::vector <QString> execConv;
    QSqlQueryModel* regModel;
    QSqlQueryModel* execModel;
};

#endif // CONVERSIONS_H
