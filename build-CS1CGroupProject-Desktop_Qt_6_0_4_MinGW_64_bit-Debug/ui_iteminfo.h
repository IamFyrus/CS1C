/********************************************************************************
** Form generated from reading UI file 'iteminfo.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMINFO_H
#define UI_ITEMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemInfo
{
public:
    QWidget *centralwidget;
    QTableView *itemTable;
    QTableView *quantTable;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *totalQuantity;
    QLabel *totalPrice;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ItemInfo)
    {
        if (ItemInfo->objectName().isEmpty())
            ItemInfo->setObjectName(QString::fromUtf8("ItemInfo"));
        ItemInfo->resize(800, 600);
        centralwidget = new QWidget(ItemInfo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        itemTable = new QTableView(centralwidget);
        itemTable->setObjectName(QString::fromUtf8("itemTable"));
        itemTable->setGeometry(QRect(60, 80, 211, 371));
        quantTable = new QTableView(centralwidget);
        quantTable->setObjectName(QString::fromUtf8("quantTable"));
        quantTable->setGeometry(QRect(370, 80, 281, 371));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 490, 121, 51));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 450, 151, 51));
        label_3->setFont(font);
        totalQuantity = new QLabel(centralwidget);
        totalQuantity->setObjectName(QString::fromUtf8("totalQuantity"));
        totalQuantity->setGeometry(QRect(510, 450, 151, 51));
        totalQuantity->setFont(font);
        totalPrice = new QLabel(centralwidget);
        totalPrice->setObjectName(QString::fromUtf8("totalPrice"));
        totalPrice->setGeometry(QRect(510, 490, 151, 51));
        totalPrice->setFont(font);
        ItemInfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ItemInfo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ItemInfo->setMenuBar(menubar);
        statusbar = new QStatusBar(ItemInfo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ItemInfo->setStatusBar(statusbar);

        retranslateUi(ItemInfo);

        QMetaObject::connectSlotsByName(ItemInfo);
    } // setupUi

    void retranslateUi(QMainWindow *ItemInfo)
    {
        ItemInfo->setWindowTitle(QCoreApplication::translate("ItemInfo", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("ItemInfo", "Total Price: ", nullptr));
        label_3->setText(QCoreApplication::translate("ItemInfo", "Total Quantity: ", nullptr));
        totalQuantity->setText(QString());
        totalPrice->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ItemInfo: public Ui_ItemInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMINFO_H
