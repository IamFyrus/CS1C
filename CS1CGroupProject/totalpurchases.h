#ifndef TOTALPURCHASES_H
#define TOTALPURCHASES_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QDebug>

/*! \class totalPurchases
  \brief This class defines the totalPurchases class
  It will consist of a GUI that shows the total purchases
  It will also inherit from QDialog that is provided by QT
 */


namespace Ui {
class totalPurchases;
}

class totalPurchases : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief totalPurchases The totalPurchases constructor
     * @param parent
     */
    explicit totalPurchases(QWidget *parent = nullptr);
    ~totalPurchases();

private slots:
    /**
     * @brief on_pushButton_clicked A push button that shows the total Purchases
     */
    void on_pushButton_clicked();

private:
    Ui::totalPurchases *ui; //!< A private variable that holds the ui for the GUI
    QSqlDatabase customers; //!< A sql variable that holds the customers information
};

#endif // TOTALPURCHASES_H
