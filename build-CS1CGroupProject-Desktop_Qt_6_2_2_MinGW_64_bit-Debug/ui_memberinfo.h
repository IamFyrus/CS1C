/********************************************************************************
** Form generated from reading UI file 'memberinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERINFO_H
#define UI_MEMBERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemberInfo
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTableView *memberTable;
    QComboBox *monthInput;
    QLabel *label_2;
    QPushButton *expButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MemberInfo)
    {
        if (MemberInfo->objectName().isEmpty())
            MemberInfo->setObjectName(QString::fromUtf8("MemberInfo"));
        MemberInfo->resize(800, 600);
        centralwidget = new QWidget(MemberInfo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 110, 421, 51));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        memberTable = new QTableView(centralwidget);
        memberTable->setObjectName(QString::fromUtf8("memberTable"));
        memberTable->setGeometry(QRect(290, 170, 451, 331));
        monthInput = new QComboBox(centralwidget);
        monthInput->addItem(QString());
        monthInput->addItem(QString());
        monthInput->addItem(QString());
        monthInput->addItem(QString());
        monthInput->addItem(QString());
        monthInput->addItem(QString());
        monthInput->addItem(QString());
        monthInput->addItem(QString());
        monthInput->addItem(QString());
        monthInput->addItem(QString());
        monthInput->addItem(QString());
        monthInput->addItem(QString());
        monthInput->setObjectName(QString::fromUtf8("monthInput"));
        monthInput->setGeometry(QRect(30, 170, 241, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 110, 421, 51));
        label_2->setFont(font);
        expButton = new QPushButton(centralwidget);
        expButton->setObjectName(QString::fromUtf8("expButton"));
        expButton->setGeometry(QRect(40, 280, 221, 61));
        MemberInfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MemberInfo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MemberInfo->setMenuBar(menubar);
        statusbar = new QStatusBar(MemberInfo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MemberInfo->setStatusBar(statusbar);

        retranslateUi(MemberInfo);
        QObject::connect(expButton, SIGNAL(clicked()), MemberInfo, SLOT(expButtonClicked()));

        QMetaObject::connectSlotsByName(MemberInfo);
    } // setupUi

    void retranslateUi(QMainWindow *MemberInfo)
    {
        MemberInfo->setWindowTitle(QCoreApplication::translate("MemberInfo", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MemberInfo", "Member Information", nullptr));
        monthInput->setItemText(0, QCoreApplication::translate("MemberInfo", "January", nullptr));
        monthInput->setItemText(1, QCoreApplication::translate("MemberInfo", "February", nullptr));
        monthInput->setItemText(2, QCoreApplication::translate("MemberInfo", "March", nullptr));
        monthInput->setItemText(3, QCoreApplication::translate("MemberInfo", "April", nullptr));
        monthInput->setItemText(4, QCoreApplication::translate("MemberInfo", "May", nullptr));
        monthInput->setItemText(5, QCoreApplication::translate("MemberInfo", "June", nullptr));
        monthInput->setItemText(6, QCoreApplication::translate("MemberInfo", "July", nullptr));
        monthInput->setItemText(7, QCoreApplication::translate("MemberInfo", "August", nullptr));
        monthInput->setItemText(8, QCoreApplication::translate("MemberInfo", "September", nullptr));
        monthInput->setItemText(9, QCoreApplication::translate("MemberInfo", "October", nullptr));
        monthInput->setItemText(10, QCoreApplication::translate("MemberInfo", "November", nullptr));
        monthInput->setItemText(11, QCoreApplication::translate("MemberInfo", "December", nullptr));

        label_2->setText(QCoreApplication::translate("MemberInfo", "Select Month", nullptr));
        expButton->setText(QCoreApplication::translate("MemberInfo", "View Expiration Dates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberInfo: public Ui_MemberInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERINFO_H
