/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QPushButton *loginButton;
    QPushButton *clearButton;
    QLineEdit *userLabel;
    QLineEdit *passwordLabel;
    QLabel *Username;
    QLabel *Password;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(393, 255);
        login->setMaximumSize(QSize(400, 400));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(210, 170, 80, 24));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(100, 170, 80, 24));
        userLabel = new QLineEdit(centralwidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        userLabel->setGeometry(QRect(140, 70, 113, 24));
        passwordLabel = new QLineEdit(centralwidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(140, 120, 113, 24));
        passwordLabel->setEchoMode(QLineEdit::Password);
        Username = new QLabel(centralwidget);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setGeometry(QRect(80, 70, 61, 21));
        Password = new QLabel(centralwidget);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(80, 120, 61, 20));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 393, 17));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);
        QObject::connect(clearButton, SIGNAL(clicked()), login, SLOT(buttonClickHandler()));
        QObject::connect(loginButton, SIGNAL(clicked()), login, SLOT(loginButtonClicked()));

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "Login", nullptr));
        clearButton->setText(QCoreApplication::translate("login", "Clear", nullptr));
        Username->setText(QCoreApplication::translate("login", "Username", nullptr));
        Password->setText(QCoreApplication::translate("login", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
