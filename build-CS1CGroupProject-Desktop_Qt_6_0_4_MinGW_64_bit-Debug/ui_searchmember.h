/********************************************************************************
** Form generated from reading UI file 'searchmember.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHMEMBER_H
#define UI_SEARCHMEMBER_H

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

class Ui_searchMember
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLineEdit *memberNameLine;
    QLabel *label_2;
    QPushButton *searchName;
    QLabel *label_3;
    QLineEdit *memberIdLine;
    QPushButton *searchId;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *priceLabel;
    QLabel *quantLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *searchMember)
    {
        if (searchMember->objectName().isEmpty())
            searchMember->setObjectName(QString::fromUtf8("searchMember"));
        searchMember->resize(800, 600);
        centralwidget = new QWidget(searchMember);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(250, 60, 281, 381));
        widget->setAcceptDrops(false);
        widget->setAutoFillBackground(true);
        memberNameLine = new QLineEdit(widget);
        memberNameLine->setObjectName(QString::fromUtf8("memberNameLine"));
        memberNameLine->setGeometry(QRect(120, 70, 141, 20));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 81, 21));
        searchName = new QPushButton(widget);
        searchName->setObjectName(QString::fromUtf8("searchName"));
        searchName->setGeometry(QRect(20, 180, 111, 41));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 81, 21));
        memberIdLine = new QLineEdit(widget);
        memberIdLine->setObjectName(QString::fromUtf8("memberIdLine"));
        memberIdLine->setGeometry(QRect(120, 110, 141, 20));
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        memberIdLine->setFont(font);
        memberIdLine->setInputMethodHints(Qt::ImhDigitsOnly);
        searchId = new QPushButton(widget);
        searchId->setObjectName(QString::fromUtf8("searchId"));
        searchId->setGeometry(QRect(150, 180, 111, 41));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 240, 121, 51));
        QFont font1;
        font1.setPointSize(16);
        label_5->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(270, 350, 141, 51));
        label_6->setFont(font1);
        priceLabel = new QLabel(centralwidget);
        priceLabel->setObjectName(QString::fromUtf8("priceLabel"));
        priceLabel->setGeometry(QRect(380, 300, 121, 51));
        priceLabel->setFont(font1);
        quantLabel = new QLabel(centralwidget);
        quantLabel->setObjectName(QString::fromUtf8("quantLabel"));
        quantLabel->setGeometry(QRect(410, 350, 121, 51));
        quantLabel->setFont(font1);
        searchMember->setCentralWidget(centralwidget);
        menubar = new QMenuBar(searchMember);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        searchMember->setMenuBar(menubar);
        statusbar = new QStatusBar(searchMember);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        searchMember->setStatusBar(statusbar);

        retranslateUi(searchMember);

        QMetaObject::connectSlotsByName(searchMember);
    } // setupUi

    void retranslateUi(QMainWindow *searchMember)
    {
        searchMember->setWindowTitle(QCoreApplication::translate("searchMember", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("searchMember", "memberName", nullptr));
        searchName->setText(QCoreApplication::translate("searchMember", "Search Name", nullptr));
        label_3->setText(QCoreApplication::translate("searchMember", "memberId", nullptr));
        searchId->setText(QCoreApplication::translate("searchMember", "Search Id", nullptr));
        label_5->setText(QCoreApplication::translate("searchMember", "Total Price: ", nullptr));
        label_6->setText(QCoreApplication::translate("searchMember", "Total Quantity: ", nullptr));
        priceLabel->setText(QString());
        quantLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class searchMember: public Ui_searchMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHMEMBER_H
