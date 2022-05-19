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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagerWindow
{
public:
    QWidget *centralwidget;
    QPushButton *displayButton;
    QPushButton *memberButton;
    QPushButton *returnButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ManagerWindow)
    {
        if (ManagerWindow->objectName().isEmpty())
            ManagerWindow->setObjectName(QString::fromUtf8("ManagerWindow"));
        ManagerWindow->resize(577, 290);
        centralwidget = new QWidget(ManagerWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        displayButton = new QPushButton(centralwidget);
        displayButton->setObjectName(QString::fromUtf8("displayButton"));
        displayButton->setGeometry(QRect(90, 80, 151, 81));
        memberButton = new QPushButton(centralwidget);
        memberButton->setObjectName(QString::fromUtf8("memberButton"));
        memberButton->setGeometry(QRect(300, 80, 151, 81));
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(0, 0, 80, 24));
        ManagerWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ManagerWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 577, 21));
        ManagerWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ManagerWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ManagerWindow->setStatusBar(statusbar);

        retranslateUi(ManagerWindow);
        QObject::connect(memberButton, SIGNAL(clicked()), ManagerWindow, SLOT(memberButtonClicked()));
        QObject::connect(displayButton, SIGNAL(clicked()), ManagerWindow, SLOT(displayButtonClicked()));

        QMetaObject::connectSlotsByName(ManagerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ManagerWindow)
    {
        ManagerWindow->setWindowTitle(QCoreApplication::translate("ManagerWindow", "MainWindow", nullptr));
        displayButton->setText(QCoreApplication::translate("ManagerWindow", "Display Report", nullptr));
        memberButton->setText(QCoreApplication::translate("ManagerWindow", "View Member Info", nullptr));
        returnButton->setText(QCoreApplication::translate("ManagerWindow", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagerWindow: public Ui_ManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERWINDOW_H
