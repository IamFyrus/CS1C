#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include "editmember.h"
#include "edititem.h"
#include "addpurchases.h"
#include "conversions.h"

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
private slots:
    void on_editItemButton_clicked();

    void on_addPurchaseButton_clicked();

    void on_conversionsButton_clicked();

private:
    Ui::AdminWindow *ui;
    EditMember* editMember;
    EditItem* editItem;
    AddPurchases* addPurchase;
    Conversions* conversions;
};

#endif // ADMINWINDOW_H
