#ifndef INVENTORYLIST_H
#define INVENTORYLIST_H

#include <QDialog>
#include <QInputDialog>
#include <QLineEdit>
#include <QLabel>
#include <QString>
//==================

#include <QMessageBox>
#include <QTextBrowser>
#include <QTableView>


#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
#include <QtDebug>
#include <QFileInfo>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSqlRecord>

#include <QDir>

/*! \class inventoryList
  \brief This class defines the inventoryList class
  It will consist of a GUI that allows the admin to see the inventory list
  It will also inherit from QDialog that is provided by QT
 */

namespace Ui {
class inventoryList;
}

class inventoryList : public QDialog
{
    Q_OBJECT

public:

    explicit inventoryList(QWidget *parent = nullptr);
    ~inventoryList();

private slots:

    void openDatabase();

    void closeDatabase();

    void on_ShowList_clicked();

    void on_UpdateList_clicked();

    void on_AddList_clicked();

    void on_DeleteList_clicked();

private:
    Ui::inventoryList *ui; //!< A ui that holds the GUI for the class
    QSqlDatabase list; //!< A list that holds the list of customers
};

#endif // INVENTORYLIST_H

