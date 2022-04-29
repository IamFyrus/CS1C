#include "editmember.h"
#include "ui_editmember.h"

EditMember::EditMember(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditMember)
{
    ui->setupUi(this);
}

EditMember::~EditMember()
{
    delete ui;
}
