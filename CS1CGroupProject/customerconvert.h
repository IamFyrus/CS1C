#ifndef CUSTOMERCONVERT_H
#define CUSTOMERCONVERT_H

#include <QDialog>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QVariant>
#include <QString>

/*! \class customerConvert
  \brief This class defines the customerConvert class
  It will consist of a GUI that allows the admin to see if a customer should switch their membership
  It will also inherit from QDialog that is provided by QT
 */

namespace Ui {
class customerConvert;
}

class customerConvert : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief customerConvert The customerConvert constructor
     * @param parent Creates a null value to the QWidget parent class
     */
    explicit customerConvert(QWidget *parent = nullptr);


    /**
      * @brief ~customerConvert The customerConvert destructor
      */
    ~customerConvert();

private slots:
    /**
     * @brief on_pushButton_clicked A push button that shows if a regular customer should be an executive
     */
    void on_pushButton_clicked();

    /**
     * @brief on_pushButton_2_clicked A push button that shows if an executive customer should be a regular
     */
    void on_pushButton_2_clicked();

private:
    Ui::customerConvert *ui; //!< A private ui variable that holds the GUI
    QSqlDatabase data; //!< A sql database that holds the data
};


/**
 * @brief The customers struct Holds all the members of the customer class
 */
struct customers{
    QString name;
    QString mems;
    QString id;
    double totals;
    QString convert = "empty";

};


#endif // CUSTOMERCONVERT_H
