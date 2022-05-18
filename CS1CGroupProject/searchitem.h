#ifndef SEARCHITEM_H
#define SEARCHITEM_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>

namespace Ui {
class SearchItem;
}

/*! \class SearchItem
 *  \brief Allows manager to search for information on specific item.
 *  This class lets the manager input a specific item name and displays the total price and total quantity bought of all of the purchases of the item.
 */
class SearchItem : public QMainWindow
{
    Q_OBJECT

public:
    /*! Constructor
     *
     *  Constructor used to initialize the ui.
     */
    explicit SearchItem(QWidget *parent = nullptr);

    /*! Destructor
     *
     *  Destructor used to delete the ui.
     */
    ~SearchItem();

private slots:

    /*! @fn  void on_searchItemButton_clicked();
     *
     *  Method used to search for item indicated in lineEdit itemNameLine. It will display the total price of all of the purchases of the indicated item in label priceLabel, and show the total quantity bought of the indicated item in label quantLabel.
     */
    void on_searchItemButton_clicked();

private:
    /*! @var Ui::SearchItem *ui;
     *  SearchItem ui;
     */
    Ui::SearchItem *ui;
};

#endif // SEARCHITEM_H
