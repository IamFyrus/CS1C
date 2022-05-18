#include "login.h"

#include <QApplication>

/*! @mainpage CS1C Bulk CLub
 *
 *  This Qt program is designed to allow a store to keep track of their members and items
 *  @authors Cyrus Azad
 *  @authors Julie Nazzario
 *  @authors Neda
 *  @authors Saul
 *  @authors Parsa
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w;
    w.show();
    return a.exec();
}
