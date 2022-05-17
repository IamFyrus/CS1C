/********************************************************************************
** Form generated from reading UI file 'addpurchases.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPURCHASES_H
#define UI_ADDPURCHASES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_AddPurchases
{
public:
    QWidget *centralwidget;
    QTableView *memberTable;
    QTableView *itemTable;
    QLineEdit *quantityLine;
    QLabel *label;
    QPushButton *addPurchase;
    QLineEdit *memberLine;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *itemLine;
    QLabel *label_4;
    QComboBox *dateLine;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddPurchases)
    {
        if (AddPurchases->objectName().isEmpty())
            AddPurchases->setObjectName(QString::fromUtf8("AddPurchases"));
        AddPurchases->resize(800, 600);
        centralwidget = new QWidget(AddPurchases);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        memberTable = new QTableView(centralwidget);
        memberTable->setObjectName(QString::fromUtf8("memberTable"));
        memberTable->setGeometry(QRect(20, 70, 271, 381));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(memberTable->sizePolicy().hasHeightForWidth());
        memberTable->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        memberTable->setFont(font);
        memberTable->setFocusPolicy(Qt::NoFocus);
        memberTable->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(225, 225, 225);\n"
"selection-background-color: rgb(159, 11, 25);\n"
"selection-color: rgb(0, 0, 0);"));
        memberTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        memberTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        memberTable->setAutoScroll(false);
        memberTable->setAutoScrollMargin(5);
        memberTable->setDragDropOverwriteMode(false);
        memberTable->setAlternatingRowColors(true);
        memberTable->setSelectionMode(QAbstractItemView::SingleSelection);
        memberTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        memberTable->setShowGrid(false);
        memberTable->setGridStyle(Qt::SolidLine);
        memberTable->setSortingEnabled(false);
        memberTable->horizontalHeader()->setVisible(false);
        memberTable->horizontalHeader()->setMinimumSectionSize(50);
        memberTable->horizontalHeader()->setDefaultSectionSize(200);
        memberTable->verticalHeader()->setVisible(false);
        memberTable->verticalHeader()->setHighlightSections(true);
        itemTable = new QTableView(centralwidget);
        itemTable->setObjectName(QString::fromUtf8("itemTable"));
        itemTable->setGeometry(QRect(380, 70, 271, 381));
        sizePolicy.setHeightForWidth(itemTable->sizePolicy().hasHeightForWidth());
        itemTable->setSizePolicy(sizePolicy);
        itemTable->setFont(font);
        itemTable->setFocusPolicy(Qt::NoFocus);
        itemTable->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(225, 225, 225);\n"
"selection-background-color: rgb(159, 11, 25);\n"
"selection-color: rgb(0, 0, 0);"));
        itemTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        itemTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        itemTable->setAutoScroll(false);
        itemTable->setAutoScrollMargin(5);
        itemTable->setDragDropOverwriteMode(false);
        itemTable->setAlternatingRowColors(true);
        itemTable->setSelectionMode(QAbstractItemView::SingleSelection);
        itemTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        itemTable->setShowGrid(false);
        itemTable->setGridStyle(Qt::SolidLine);
        itemTable->setSortingEnabled(false);
        itemTable->horizontalHeader()->setVisible(false);
        itemTable->horizontalHeader()->setMinimumSectionSize(50);
        itemTable->horizontalHeader()->setDefaultSectionSize(200);
        itemTable->verticalHeader()->setVisible(false);
        itemTable->verticalHeader()->setHighlightSections(true);
        quantityLine = new QLineEdit(centralwidget);
        quantityLine->setObjectName(QString::fromUtf8("quantityLine"));
        quantityLine->setGeometry(QRect(510, 520, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, 520, 141, 21));
        QFont font1;
        font1.setPointSize(13);
        label->setFont(font1);
        addPurchase = new QPushButton(centralwidget);
        addPurchase->setObjectName(QString::fromUtf8("addPurchase"));
        addPurchase->setGeometry(QRect(650, 470, 111, 31));
        memberLine = new QLineEdit(centralwidget);
        memberLine->setObjectName(QString::fromUtf8("memberLine"));
        memberLine->setGeometry(QRect(160, 470, 113, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 500, 141, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 470, 141, 21));
        label_3->setFont(font1);
        itemLine = new QLineEdit(centralwidget);
        itemLine->setObjectName(QString::fromUtf8("itemLine"));
        itemLine->setGeometry(QRect(160, 510, 113, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 470, 141, 21));
        label_4->setFont(font1);
        dateLine = new QComboBox(centralwidget);
        dateLine->addItem(QString());
        dateLine->addItem(QString());
        dateLine->addItem(QString());
        dateLine->addItem(QString());
        dateLine->addItem(QString());
        dateLine->addItem(QString());
        dateLine->addItem(QString());
        dateLine->addItem(QString());
        dateLine->setObjectName(QString::fromUtf8("dateLine"));
        dateLine->setGeometry(QRect(510, 460, 111, 31));
        AddPurchases->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddPurchases);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        AddPurchases->setMenuBar(menubar);
        statusbar = new QStatusBar(AddPurchases);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AddPurchases->setStatusBar(statusbar);

        retranslateUi(AddPurchases);

        QMetaObject::connectSlotsByName(AddPurchases);
    } // setupUi

    void retranslateUi(QMainWindow *AddPurchases)
    {
        AddPurchases->setWindowTitle(QCoreApplication::translate("AddPurchases", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AddPurchases", "Input Quantity:", nullptr));
        addPurchase->setText(QCoreApplication::translate("AddPurchases", "Add Purchase", nullptr));
        label_2->setText(QCoreApplication::translate("AddPurchases", "Item Name:", nullptr));
        label_3->setText(QCoreApplication::translate("AddPurchases", "Member Name:", nullptr));
        label_4->setText(QCoreApplication::translate("AddPurchases", "Input Date:", nullptr));
        dateLine->setItemText(0, QCoreApplication::translate("AddPurchases", "4/1/2021", nullptr));
        dateLine->setItemText(1, QCoreApplication::translate("AddPurchases", "4/2/2021", nullptr));
        dateLine->setItemText(2, QCoreApplication::translate("AddPurchases", "4/3/2021", nullptr));
        dateLine->setItemText(3, QCoreApplication::translate("AddPurchases", "4/4/2021", nullptr));
        dateLine->setItemText(4, QCoreApplication::translate("AddPurchases", "4/5/2021", nullptr));
        dateLine->setItemText(5, QCoreApplication::translate("AddPurchases", "4/6/2021", nullptr));
        dateLine->setItemText(6, QCoreApplication::translate("AddPurchases", "4/7/2021", nullptr));
        dateLine->setItemText(7, QString());

    } // retranslateUi

};

namespace Ui {
    class AddPurchases: public Ui_AddPurchases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPURCHASES_H
