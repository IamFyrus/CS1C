/********************************************************************************
** Form generated from reading UI file 'selectday.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTDAY_H
#define UI_SELECTDAY_H

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

class Ui_SelectDay
{
public:
    QWidget *centralwidget;
    QComboBox *dayInput;
    QLabel *label;
    QPushButton *viewReportButton;
    QTableView *itemTable;
    QLabel *reportLabel;
    QLabel *reportLabel_2;
    QTableView *memberTable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SelectDay)
    {
        if (SelectDay->objectName().isEmpty())
            SelectDay->setObjectName(QString::fromUtf8("SelectDay"));
        SelectDay->resize(876, 578);
        centralwidget = new QWidget(SelectDay);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        dayInput = new QComboBox(centralwidget);
        dayInput->addItem(QString());
        dayInput->addItem(QString());
        dayInput->addItem(QString());
        dayInput->addItem(QString());
        dayInput->addItem(QString());
        dayInput->addItem(QString());
        dayInput->addItem(QString());
        dayInput->setObjectName(QString::fromUtf8("dayInput"));
        dayInput->setGeometry(QRect(110, 100, 141, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 70, 221, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        label->setFont(font);
        viewReportButton = new QPushButton(centralwidget);
        viewReportButton->setObjectName(QString::fromUtf8("viewReportButton"));
        viewReportButton->setGeometry(QRect(110, 290, 131, 51));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewReportButton->sizePolicy().hasHeightForWidth());
        viewReportButton->setSizePolicy(sizePolicy);
        viewReportButton->setMaximumSize(QSize(16777215, 16777215));
        itemTable = new QTableView(centralwidget);
        itemTable->setObjectName(QString::fromUtf8("itemTable"));
        itemTable->setGeometry(QRect(290, 130, 281, 381));
        reportLabel = new QLabel(centralwidget);
        reportLabel->setObjectName(QString::fromUtf8("reportLabel"));
        reportLabel->setGeometry(QRect(290, 60, 281, 71));
        QFont font1;
        font1.setPointSize(25);
        reportLabel->setFont(font1);
        reportLabel_2 = new QLabel(centralwidget);
        reportLabel_2->setObjectName(QString::fromUtf8("reportLabel_2"));
        reportLabel_2->setGeometry(QRect(590, 60, 281, 71));
        reportLabel_2->setFont(font1);
        memberTable = new QTableView(centralwidget);
        memberTable->setObjectName(QString::fromUtf8("memberTable"));
        memberTable->setGeometry(QRect(590, 130, 281, 381));
        SelectDay->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SelectDay);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 876, 21));
        SelectDay->setMenuBar(menubar);
        statusbar = new QStatusBar(SelectDay);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SelectDay->setStatusBar(statusbar);

        retranslateUi(SelectDay);
        QObject::connect(viewReportButton, SIGNAL(clicked()), SelectDay, SLOT(viewReportClicked()));

        QMetaObject::connectSlotsByName(SelectDay);
    } // setupUi

    void retranslateUi(QMainWindow *SelectDay)
    {
        SelectDay->setWindowTitle(QCoreApplication::translate("SelectDay", "MainWindow", nullptr));
        dayInput->setItemText(0, QCoreApplication::translate("SelectDay", "Day 1", nullptr));
        dayInput->setItemText(1, QCoreApplication::translate("SelectDay", "Day 2", nullptr));
        dayInput->setItemText(2, QCoreApplication::translate("SelectDay", "Day 3", nullptr));
        dayInput->setItemText(3, QCoreApplication::translate("SelectDay", "Day 4", nullptr));
        dayInput->setItemText(4, QCoreApplication::translate("SelectDay", "Day 5", nullptr));
        dayInput->setItemText(5, QCoreApplication::translate("SelectDay", "Day 6", nullptr));
        dayInput->setItemText(6, QCoreApplication::translate("SelectDay", "Day 7", nullptr));

        label->setText(QCoreApplication::translate("SelectDay", "Select Day to View:", nullptr));
        viewReportButton->setText(QCoreApplication::translate("SelectDay", "View Report", nullptr));
        reportLabel->setText(QCoreApplication::translate("SelectDay", "Item Report", nullptr));
        reportLabel_2->setText(QCoreApplication::translate("SelectDay", "Member Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectDay: public Ui_SelectDay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTDAY_H
