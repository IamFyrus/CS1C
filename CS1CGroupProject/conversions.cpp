#include "conversions.h"
#include "ui_conversions.h"

Conversions::Conversions(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Conversions)
{
    ui->setupUi(this);
}

Conversions::~Conversions()
{
    delete ui;
}
