/********************************************************************************
** Form generated from reading UI file 'totalpurchases.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOTALPURCHASES_H
#define UI_TOTALPURCHASES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_totalPurchases
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;

    void setupUi(QDialog *totalPurchases)
    {
        if (totalPurchases->objectName().isEmpty())
            totalPurchases->setObjectName(QString::fromUtf8("totalPurchases"));
        totalPurchases->resize(828, 662);
        lineEdit = new QLineEdit(totalPurchases);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 130, 113, 20));
        lineEdit_2 = new QLineEdit(totalPurchases);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(330, 180, 113, 20));
        lineEdit_3 = new QLineEdit(totalPurchases);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 270, 113, 20));
        lineEdit_4 = new QLineEdit(totalPurchases);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(270, 270, 113, 20));
        tableView = new QTableView(totalPurchases);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(150, 340, 491, 291));
        label = new QLabel(totalPurchases);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 70, 281, 41));
        label_2 = new QLabel(totalPurchases);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 130, 47, 13));
        label_3 = new QLabel(totalPurchases);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 180, 91, 20));
        label_4 = new QLabel(totalPurchases);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 210, 47, 13));
        label_5 = new QLabel(totalPurchases);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 250, 61, 16));
        label_6 = new QLabel(totalPurchases);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(300, 250, 61, 16));
        pushButton = new QPushButton(totalPurchases);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 130, 75, 23));

        retranslateUi(totalPurchases);

        QMetaObject::connectSlotsByName(totalPurchases);
    } // setupUi

    void retranslateUi(QDialog *totalPurchases)
    {
        totalPurchases->setWindowTitle(QCoreApplication::translate("totalPurchases", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("totalPurchases", "Please enter a member ID of First Name and Last Name", nullptr));
        label_2->setText(QCoreApplication::translate("totalPurchases", "ID:", nullptr));
        label_3->setText(QCoreApplication::translate("totalPurchases", "Total Purchases:", nullptr));
        label_4->setText(QCoreApplication::translate("totalPurchases", "OR", nullptr));
        label_5->setText(QCoreApplication::translate("totalPurchases", "First Name", nullptr));
        label_6->setText(QCoreApplication::translate("totalPurchases", "Last Name", nullptr));
        pushButton->setText(QCoreApplication::translate("totalPurchases", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class totalPurchases: public Ui_totalPurchases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTALPURCHASES_H
