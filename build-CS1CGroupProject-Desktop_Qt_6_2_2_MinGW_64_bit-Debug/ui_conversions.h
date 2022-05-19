/********************************************************************************
** Form generated from reading UI file 'conversions.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERSIONS_H
#define UI_CONVERSIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Conversions
{
public:
    QWidget *centralwidget;
    QTableView *regConversions;
    QTableView *execConversions;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *reportLabel_2;
    QLabel *reportLabel_3;
    QLabel *regMembers;
    QLabel *execMembers;
    QPushButton *returnButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Conversions)
    {
        if (Conversions->objectName().isEmpty())
            Conversions->setObjectName(QString::fromUtf8("Conversions"));
        Conversions->resize(800, 600);
        centralwidget = new QWidget(Conversions);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        regConversions = new QTableView(centralwidget);
        regConversions->setObjectName(QString::fromUtf8("regConversions"));
        regConversions->setGeometry(QRect(60, 90, 271, 381));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(regConversions->sizePolicy().hasHeightForWidth());
        regConversions->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        regConversions->setFont(font);
        regConversions->setFocusPolicy(Qt::NoFocus);
        regConversions->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(225, 225, 225);\n"
"selection-background-color: rgb(159, 11, 25);\n"
"selection-color: rgb(0, 0, 0);"));
        regConversions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        regConversions->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        regConversions->setAutoScroll(false);
        regConversions->setAutoScrollMargin(5);
        regConversions->setDragDropOverwriteMode(false);
        regConversions->setAlternatingRowColors(true);
        regConversions->setSelectionMode(QAbstractItemView::SingleSelection);
        regConversions->setSelectionBehavior(QAbstractItemView::SelectRows);
        regConversions->setShowGrid(false);
        regConversions->setGridStyle(Qt::SolidLine);
        regConversions->setSortingEnabled(false);
        regConversions->horizontalHeader()->setVisible(false);
        regConversions->horizontalHeader()->setMinimumSectionSize(50);
        regConversions->horizontalHeader()->setDefaultSectionSize(200);
        regConversions->verticalHeader()->setVisible(false);
        regConversions->verticalHeader()->setHighlightSections(true);
        execConversions = new QTableView(centralwidget);
        execConversions->setObjectName(QString::fromUtf8("execConversions"));
        execConversions->setGeometry(QRect(430, 90, 271, 381));
        sizePolicy.setHeightForWidth(execConversions->sizePolicy().hasHeightForWidth());
        execConversions->setSizePolicy(sizePolicy);
        execConversions->setFont(font);
        execConversions->setFocusPolicy(Qt::NoFocus);
        execConversions->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(225, 225, 225);\n"
"selection-background-color: rgb(159, 11, 25);\n"
"selection-color: rgb(0, 0, 0);"));
        execConversions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        execConversions->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        execConversions->setAutoScroll(false);
        execConversions->setAutoScrollMargin(5);
        execConversions->setDragDropOverwriteMode(false);
        execConversions->setAlternatingRowColors(true);
        execConversions->setSelectionMode(QAbstractItemView::SingleSelection);
        execConversions->setSelectionBehavior(QAbstractItemView::SelectRows);
        execConversions->setShowGrid(false);
        execConversions->setGridStyle(Qt::SolidLine);
        execConversions->setSortingEnabled(false);
        execConversions->horizontalHeader()->setVisible(false);
        execConversions->horizontalHeader()->setMinimumSectionSize(50);
        execConversions->horizontalHeader()->setDefaultSectionSize(200);
        execConversions->verticalHeader()->setVisible(false);
        execConversions->verticalHeader()->setHighlightSections(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(430, 480, 191, 51));
        QFont font1;
        font1.setPointSize(16);
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 480, 191, 51));
        label_4->setFont(font1);
        reportLabel_2 = new QLabel(centralwidget);
        reportLabel_2->setObjectName(QString::fromUtf8("reportLabel_2"));
        reportLabel_2->setGeometry(QRect(60, 40, 271, 51));
        QFont font2;
        font2.setPointSize(20);
        reportLabel_2->setFont(font2);
        reportLabel_3 = new QLabel(centralwidget);
        reportLabel_3->setObjectName(QString::fromUtf8("reportLabel_3"));
        reportLabel_3->setGeometry(QRect(430, 40, 271, 51));
        reportLabel_3->setFont(font2);
        regMembers = new QLabel(centralwidget);
        regMembers->setObjectName(QString::fromUtf8("regMembers"));
        regMembers->setGeometry(QRect(240, 480, 191, 51));
        regMembers->setFont(font1);
        execMembers = new QLabel(centralwidget);
        execMembers->setObjectName(QString::fromUtf8("execMembers"));
        execMembers->setGeometry(QRect(620, 480, 191, 51));
        execMembers->setFont(font1);
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(0, 0, 80, 24));
        Conversions->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Conversions);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Conversions->setMenuBar(menubar);
        statusbar = new QStatusBar(Conversions);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Conversions->setStatusBar(statusbar);

        retranslateUi(Conversions);

        QMetaObject::connectSlotsByName(Conversions);
    } // setupUi

    void retranslateUi(QMainWindow *Conversions)
    {
        Conversions->setWindowTitle(QCoreApplication::translate("Conversions", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("Conversions", "Executive Members: ", nullptr));
        label_4->setText(QCoreApplication::translate("Conversions", "Regular Members:", nullptr));
        reportLabel_2->setText(QCoreApplication::translate("Conversions", "Regular Conversions:", nullptr));
        reportLabel_3->setText(QCoreApplication::translate("Conversions", "Executive Conversions:", nullptr));
        regMembers->setText(QString());
        execMembers->setText(QString());
        returnButton->setText(QCoreApplication::translate("Conversions", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Conversions: public Ui_Conversions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERSIONS_H
