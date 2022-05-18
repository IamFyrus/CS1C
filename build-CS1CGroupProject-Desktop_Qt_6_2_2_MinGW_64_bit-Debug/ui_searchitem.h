/********************************************************************************
** Form generated from reading UI file 'searchitem.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHITEM_H
#define UI_SEARCHITEM_H

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

class Ui_SearchItem
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLineEdit *itemNameLine;
    QLabel *label_2;
    QPushButton *searchItemButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *priceLabel;
    QLabel *quantLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SearchItem)
    {
        if (SearchItem->objectName().isEmpty())
            SearchItem->setObjectName(QString::fromUtf8("SearchItem"));
        SearchItem->resize(800, 600);
        centralwidget = new QWidget(SearchItem);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(230, 80, 301, 381));
        widget->setAcceptDrops(false);
        widget->setAutoFillBackground(true);
        itemNameLine = new QLineEdit(widget);
        itemNameLine->setObjectName(QString::fromUtf8("itemNameLine"));
        itemNameLine->setGeometry(QRect(110, 70, 141, 20));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 81, 21));
        searchItemButton = new QPushButton(widget);
        searchItemButton->setObjectName(QString::fromUtf8("searchItemButton"));
        searchItemButton->setGeometry(QRect(90, 110, 111, 41));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 190, 121, 51));
        QFont font;
        font.setPointSize(16);
        label_3->setFont(font);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 260, 141, 51));
        label_4->setFont(font);
        priceLabel = new QLabel(widget);
        priceLabel->setObjectName(QString::fromUtf8("priceLabel"));
        priceLabel->setGeometry(QRect(140, 190, 121, 51));
        priceLabel->setFont(font);
        quantLabel = new QLabel(widget);
        quantLabel->setObjectName(QString::fromUtf8("quantLabel"));
        quantLabel->setGeometry(QRect(170, 260, 121, 51));
        quantLabel->setFont(font);
        SearchItem->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SearchItem);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        SearchItem->setMenuBar(menubar);
        statusbar = new QStatusBar(SearchItem);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SearchItem->setStatusBar(statusbar);

        retranslateUi(SearchItem);

        QMetaObject::connectSlotsByName(SearchItem);
    } // setupUi

    void retranslateUi(QMainWindow *SearchItem)
    {
        SearchItem->setWindowTitle(QCoreApplication::translate("SearchItem", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("SearchItem", "Item Name", nullptr));
        searchItemButton->setText(QCoreApplication::translate("SearchItem", "Search Item", nullptr));
        label_3->setText(QCoreApplication::translate("SearchItem", "Total Price: ", nullptr));
        label_4->setText(QCoreApplication::translate("SearchItem", "Total Quantity:", nullptr));
        priceLabel->setText(QString());
        quantLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SearchItem: public Ui_SearchItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHITEM_H
