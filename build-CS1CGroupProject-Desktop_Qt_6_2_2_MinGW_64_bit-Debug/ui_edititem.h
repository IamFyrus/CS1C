/********************************************************************************
** Form generated from reading UI file 'edititem.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITITEM_H
#define UI_EDITITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditItem
{
public:
    QWidget *centralwidget;
    QTableView *editItemTable;
    QWidget *widget;
    QPushButton *deleteItemButton;
    QPushButton *addItemButton;
    QLineEdit *itemNameLine;
    QLineEdit *itemPriceLine;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *editItemButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EditItem)
    {
        if (EditItem->objectName().isEmpty())
            EditItem->setObjectName(QString::fromUtf8("EditItem"));
        EditItem->resize(800, 600);
        centralwidget = new QWidget(EditItem);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        editItemTable = new QTableView(centralwidget);
        editItemTable->setObjectName(QString::fromUtf8("editItemTable"));
        editItemTable->setGeometry(QRect(30, 90, 281, 381));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editItemTable->sizePolicy().hasHeightForWidth());
        editItemTable->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        editItemTable->setFont(font);
        editItemTable->setFocusPolicy(Qt::NoFocus);
        editItemTable->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(225, 225, 225);\n"
"selection-background-color: rgb(159, 11, 25);\n"
"selection-color: rgb(0, 0, 0);"));
        editItemTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        editItemTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        editItemTable->setAutoScroll(false);
        editItemTable->setAutoScrollMargin(5);
        editItemTable->setDragDropOverwriteMode(false);
        editItemTable->setAlternatingRowColors(true);
        editItemTable->setSelectionMode(QAbstractItemView::SingleSelection);
        editItemTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        editItemTable->setShowGrid(false);
        editItemTable->setGridStyle(Qt::SolidLine);
        editItemTable->setSortingEnabled(false);
        editItemTable->horizontalHeader()->setVisible(false);
        editItemTable->horizontalHeader()->setMinimumSectionSize(50);
        editItemTable->horizontalHeader()->setDefaultSectionSize(200);
        editItemTable->verticalHeader()->setVisible(false);
        editItemTable->verticalHeader()->setHighlightSections(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(420, 90, 301, 381));
        widget->setAcceptDrops(false);
        widget->setAutoFillBackground(true);
        deleteItemButton = new QPushButton(widget);
        deleteItemButton->setObjectName(QString::fromUtf8("deleteItemButton"));
        deleteItemButton->setGeometry(QRect(100, 300, 111, 41));
        addItemButton = new QPushButton(widget);
        addItemButton->setObjectName(QString::fromUtf8("addItemButton"));
        addItemButton->setGeometry(QRect(100, 180, 111, 41));
        itemNameLine = new QLineEdit(widget);
        itemNameLine->setObjectName(QString::fromUtf8("itemNameLine"));
        itemNameLine->setGeometry(QRect(110, 70, 141, 20));
        itemPriceLine = new QLineEdit(widget);
        itemPriceLine->setObjectName(QString::fromUtf8("itemPriceLine"));
        itemPriceLine->setGeometry(QRect(110, 110, 141, 20));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 81, 21));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 61, 21));
        editItemButton = new QPushButton(widget);
        editItemButton->setObjectName(QString::fromUtf8("editItemButton"));
        editItemButton->setGeometry(QRect(100, 240, 111, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 281, 31));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        EditItem->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditItem);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        EditItem->setMenuBar(menubar);
        statusbar = new QStatusBar(EditItem);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EditItem->setStatusBar(statusbar);

        retranslateUi(EditItem);

        QMetaObject::connectSlotsByName(EditItem);
    } // setupUi

    void retranslateUi(QMainWindow *EditItem)
    {
        EditItem->setWindowTitle(QCoreApplication::translate("EditItem", "MainWindow", nullptr));
        deleteItemButton->setText(QCoreApplication::translate("EditItem", "Delete Item", nullptr));
        addItemButton->setText(QCoreApplication::translate("EditItem", "Add Item", nullptr));
        label_2->setText(QCoreApplication::translate("EditItem", "Item Name", nullptr));
        label_3->setText(QCoreApplication::translate("EditItem", "Item Price", nullptr));
        editItemButton->setText(QCoreApplication::translate("EditItem", "Edit Item", nullptr));
        label->setText(QCoreApplication::translate("EditItem", "Inventory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditItem: public Ui_EditItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITITEM_H
