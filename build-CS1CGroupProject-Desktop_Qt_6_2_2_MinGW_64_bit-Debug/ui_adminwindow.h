/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QWidget *centralwidget;
    QPushButton *editMemberbutton;
    QPushButton *editItemButton;
    QPushButton *addPurchaseButton;
    QPushButton *editMemberbutton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QString::fromUtf8("AdminWindow"));
        AdminWindow->resize(566, 306);
        centralwidget = new QWidget(AdminWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        editMemberbutton = new QPushButton(centralwidget);
        editMemberbutton->setObjectName(QString::fromUtf8("editMemberbutton"));
        editMemberbutton->setGeometry(QRect(90, 50, 151, 81));
        editItemButton = new QPushButton(centralwidget);
        editItemButton->setObjectName(QString::fromUtf8("editItemButton"));
        editItemButton->setGeometry(QRect(330, 50, 151, 81));
        addPurchaseButton = new QPushButton(centralwidget);
        addPurchaseButton->setObjectName(QString::fromUtf8("addPurchaseButton"));
        addPurchaseButton->setGeometry(QRect(90, 160, 151, 81));
        editMemberbutton_3 = new QPushButton(centralwidget);
        editMemberbutton_3->setObjectName(QString::fromUtf8("editMemberbutton_3"));
        editMemberbutton_3->setGeometry(QRect(330, 160, 151, 81));
        AdminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 566, 21));
        AdminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AdminWindow->setStatusBar(statusbar);

        retranslateUi(AdminWindow);
        QObject::connect(editMemberbutton, SIGNAL(clicked()), AdminWindow, SLOT(editMemberClicked()));
        QObject::connect(editItemButton, SIGNAL(clicked()), AdminWindow, SLOT(editItemClicked()));

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "MainWindow", nullptr));
        editMemberbutton->setText(QCoreApplication::translate("AdminWindow", "Edit Members", nullptr));
        editItemButton->setText(QCoreApplication::translate("AdminWindow", "Edit Items", nullptr));
        addPurchaseButton->setText(QCoreApplication::translate("AdminWindow", "Add Purchases", nullptr));
        editMemberbutton_3->setText(QCoreApplication::translate("AdminWindow", "Check Conversions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
