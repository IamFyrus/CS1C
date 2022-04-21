/********************************************************************************
** Form generated from reading UI file 'managerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERWINDOW_H
#define UI_MANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagerWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ManagerWindow)
    {
        if (ManagerWindow->objectName().isEmpty())
            ManagerWindow->setObjectName(QString::fromUtf8("ManagerWindow"));
        ManagerWindow->resize(800, 600);
        menubar = new QMenuBar(ManagerWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        ManagerWindow->setMenuBar(menubar);
        centralwidget = new QWidget(ManagerWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ManagerWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ManagerWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ManagerWindow->setStatusBar(statusbar);

        retranslateUi(ManagerWindow);

        QMetaObject::connectSlotsByName(ManagerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ManagerWindow)
    {
        ManagerWindow->setWindowTitle(QCoreApplication::translate("ManagerWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagerWindow: public Ui_ManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERWINDOW_H
