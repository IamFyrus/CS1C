#ifndef EDITMEMBER_H
#define EDITMEMBER_H

#include <QMainWindow>

namespace Ui {
class EditMember;
}

class EditMember : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditMember(QWidget *parent = nullptr);
    ~EditMember();

private:
    Ui::EditMember *ui;
};

#endif // EDITMEMBER_H
