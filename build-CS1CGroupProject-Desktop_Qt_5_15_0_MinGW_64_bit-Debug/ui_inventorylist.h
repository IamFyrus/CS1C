/********************************************************************************
** Form generated from reading UI file 'inventorylist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORYLIST_H
#define UI_INVENTORYLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_inventoryList
{
public:
    QTableView *tableView;
    QLabel *Lable_7;
    QPushButton *AddList;
    QPushButton *UpdateList;
    QPushButton *ShowList;
    QPushButton *DeleteList;

    void setupUi(QDialog *inventoryList)
    {
        if (inventoryList->objectName().isEmpty())
            inventoryList->setObjectName(QString::fromUtf8("inventoryList"));
        inventoryList->resize(756, 731);
        tableView = new QTableView(inventoryList);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 80, 601, 601));
        Lable_7 = new QLabel(inventoryList);
        Lable_7->setObjectName(QString::fromUtf8("Lable_7"));
        Lable_7->setGeometry(QRect(640, 370, 121, 131));
        AddList = new QPushButton(inventoryList);
        AddList->setObjectName(QString::fromUtf8("AddList"));
        AddList->setGeometry(QRect(650, 80, 75, 23));
        UpdateList = new QPushButton(inventoryList);
        UpdateList->setObjectName(QString::fromUtf8("UpdateList"));
        UpdateList->setGeometry(QRect(650, 120, 75, 23));
        ShowList = new QPushButton(inventoryList);
        ShowList->setObjectName(QString::fromUtf8("ShowList"));
        ShowList->setGeometry(QRect(650, 160, 75, 23));
        DeleteList = new QPushButton(inventoryList);
        DeleteList->setObjectName(QString::fromUtf8("DeleteList"));
        DeleteList->setGeometry(QRect(660, 210, 75, 23));

        retranslateUi(inventoryList);

        QMetaObject::connectSlotsByName(inventoryList);
    } // setupUi

    void retranslateUi(QDialog *inventoryList)
    {
        inventoryList->setWindowTitle(QCoreApplication::translate("inventoryList", "Dialog", nullptr));
        Lable_7->setText(QCoreApplication::translate("inventoryList", "TextLabel", nullptr));
        AddList->setText(QCoreApplication::translate("inventoryList", "PushButton", nullptr));
        UpdateList->setText(QCoreApplication::translate("inventoryList", "PushButton", nullptr));
        ShowList->setText(QCoreApplication::translate("inventoryList", "PushButton", nullptr));
        DeleteList->setText(QCoreApplication::translate("inventoryList", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inventoryList: public Ui_inventoryList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYLIST_H
