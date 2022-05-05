#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include "editmember.h"

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();
public slots:
    void editMemberClicked();
    void editItemClicked();
private:
    Ui::AdminWindow *ui;
    EditMember* editMember;
};

#endif // ADMINWINDOW_H
