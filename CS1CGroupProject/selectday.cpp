#include "selectday.h"
#include "ui_selectday.h"

SelectDay::SelectDay(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SelectDay)
{
    ui->setupUi(this);
}

SelectDay::~SelectDay()
{
    delete ui;
}
