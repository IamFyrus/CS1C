/********************************************************************************
** Form generated from reading UI file 'customerconvert.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERCONVERT_H
#define UI_CUSTOMERCONVERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_customerConvert
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *customerConvert)
    {
        if (customerConvert->objectName().isEmpty())
            customerConvert->setObjectName(QString::fromUtf8("customerConvert"));
        customerConvert->resize(701, 572);
        pushButton = new QPushButton(customerConvert);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 110, 121, 23));
        pushButton_2 = new QPushButton(customerConvert);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 110, 121, 23));
        textBrowser = new QTextBrowser(customerConvert);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(160, 170, 451, 341));

        retranslateUi(customerConvert);

        QMetaObject::connectSlotsByName(customerConvert);
    } // setupUi

    void retranslateUi(QDialog *customerConvert)
    {
        customerConvert->setWindowTitle(QCoreApplication::translate("customerConvert", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("customerConvert", "Executive Convert", nullptr));
        pushButton_2->setText(QCoreApplication::translate("customerConvert", "Regular Convert", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customerConvert: public Ui_customerConvert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERCONVERT_H
