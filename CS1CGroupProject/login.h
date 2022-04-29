#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "managerwindow.h"
#include <QMessageBox>
#include "inventorylist.h"


QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();
public slots:
    void buttonClickHandler();
    void loginButtonClicked();
private slots:
    void on_inventoryButton_clicked();

private:
    Ui::login *ui;
    ManagerWindow* managerWindow;
};
#endif // LOGIN_H
