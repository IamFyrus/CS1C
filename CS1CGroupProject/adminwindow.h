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


/*! \class AdminWindow
 *  \brief Allows admin to select a choice.
 *  This class allows the admin to select whether they would like to edit members, items, add purchases, or view what members should convert memberships.
 */

class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*! Constructor
     *
     *      Constructor used to initialize the ui.
     */
    explicit AdminWindow(QWidget *parent = nullptr);
    /*! Destructor
     *
     *      Destructor used to delete the ui.
     */
    ~AdminWindow();
public slots:
    /*! @fn void editMemberClicked()
     *
     *  Method used to open the editMember ui, and hide the current ui.
     */
    void editMemberClicked();
private slots:
    /*! @fn void on_editItemButton_clicked()
     *
     *  Method used to open the editItem ui, and hide the current ui.
     */
    void on_editItemButton_clicked();
    /*! @fn void on_addPurchaseButton_clicked()
     *
     *  Method used to open the addPurchases ui, and hide the current ui.
     */
    void on_addPurchaseButton_clicked();
    /*! @fn void conversionsClicked()
     *
     *  Method used to open the conversions ui, and hide the current ui.
     */
    void conversionsClicked();

private:
    /*! @var Ui::AdminWindow *ui;
     *  AdminWindow ui;
     */
    Ui::AdminWindow *ui;
    //EditMember* editMember;
    //EditItem* editItem;
    //Conversions* conversions;
};

#endif // ADMINWINDOW_H
