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
    QLabel *reportLabel;
    QLabel *reportLabel_2;
    QTableView *itemTable;
    QLabel *label_2;
    QLabel *costLabel;
    QTableView *memberTable;
    QLabel *label_3;
    QPushButton *RegularButton;
    QPushButton *ExecutiveButton;
    QLabel *label_4;
    QLabel *executiveCount;
    QLabel *regularCount;
    QLabel *label_5;
    QLabel *rebateLabel;
    QPushButton *itemButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SelectDay)
    {
        if (SelectDay->objectName().isEmpty())
            SelectDay->setObjectName(QString::fromUtf8("SelectDay"));
        SelectDay->resize(912, 641);
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
        dayInput->addItem(QString());
        dayInput->setObjectName(QString::fromUtf8("dayInput"));
        dayInput->setGeometry(QRect(110, 100, 141, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 70, 221, 16));
        QFont font;
        label->setFont(font);
        viewReportButton = new QPushButton(centralwidget);
        viewReportButton->setObjectName(QString::fromUtf8("viewReportButton"));
        viewReportButton->setGeometry(QRect(110, 180, 131, 51));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewReportButton->sizePolicy().hasHeightForWidth());
        viewReportButton->setSizePolicy(sizePolicy);
        viewReportButton->setMaximumSize(QSize(16777215, 16777215));
        reportLabel = new QLabel(centralwidget);
        reportLabel->setObjectName(QString::fromUtf8("reportLabel"));
        reportLabel->setGeometry(QRect(590, 60, 281, 71));
        QFont font1;
        font1.setPointSize(25);
        reportLabel->setFont(font1);
        reportLabel_2 = new QLabel(centralwidget);
        reportLabel_2->setObjectName(QString::fromUtf8("reportLabel_2"));
        reportLabel_2->setGeometry(QRect(280, 60, 281, 71));
        reportLabel_2->setFont(font1);
        itemTable = new QTableView(centralwidget);
        itemTable->setObjectName(QString::fromUtf8("itemTable"));
        itemTable->setGeometry(QRect(590, 130, 281, 381));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(590, 510, 121, 51));
        QFont font2;
        font2.setPointSize(16);
        label_2->setFont(font2);
        costLabel = new QLabel(centralwidget);
        costLabel->setObjectName(QString::fromUtf8("costLabel"));
        costLabel->setGeometry(QRect(700, 510, 121, 51));
        costLabel->setFont(font2);
        memberTable = new QTableView(centralwidget);
        memberTable->setObjectName(QString::fromUtf8("memberTable"));
        memberTable->setGeometry(QRect(280, 130, 281, 381));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 510, 191, 51));
        label_3->setFont(font2);
        RegularButton = new QPushButton(centralwidget);
        RegularButton->setObjectName(QString::fromUtf8("RegularButton"));
        RegularButton->setGeometry(QRect(110, 250, 131, 51));
        sizePolicy.setHeightForWidth(RegularButton->sizePolicy().hasHeightForWidth());
        RegularButton->setSizePolicy(sizePolicy);
        RegularButton->setMaximumSize(QSize(16777215, 16777215));
        ExecutiveButton = new QPushButton(centralwidget);
        ExecutiveButton->setObjectName(QString::fromUtf8("ExecutiveButton"));
        ExecutiveButton->setGeometry(QRect(110, 320, 131, 51));
        sizePolicy.setHeightForWidth(ExecutiveButton->sizePolicy().hasHeightForWidth());
        ExecutiveButton->setSizePolicy(sizePolicy);
        ExecutiveButton->setMaximumSize(QSize(16777215, 16777215));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 540, 191, 51));
        label_4->setFont(font2);
        executiveCount = new QLabel(centralwidget);
        executiveCount->setObjectName(QString::fromUtf8("executiveCount"));
        executiveCount->setGeometry(QRect(470, 510, 121, 51));
        executiveCount->setFont(font2);
        regularCount = new QLabel(centralwidget);
        regularCount->setObjectName(QString::fromUtf8("regularCount"));
        regularCount->setGeometry(QRect(470, 540, 121, 51));
        regularCount->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(590, 540, 281, 51));
        label_5->setFont(font2);
        rebateLabel = new QLabel(centralwidget);
        rebateLabel->setObjectName(QString::fromUtf8("rebateLabel"));
        rebateLabel->setGeometry(QRect(760, 540, 121, 51));
        rebateLabel->setFont(font2);
        itemButton = new QPushButton(centralwidget);
        itemButton->setObjectName(QString::fromUtf8("itemButton"));
        itemButton->setGeometry(QRect(110, 390, 131, 51));
        sizePolicy.setHeightForWidth(itemButton->sizePolicy().hasHeightForWidth());
        itemButton->setSizePolicy(sizePolicy);
        itemButton->setMaximumSize(QSize(16777215, 16777215));
        SelectDay->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SelectDay);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 912, 21));
        SelectDay->setMenuBar(menubar);
        statusbar = new QStatusBar(SelectDay);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SelectDay->setStatusBar(statusbar);

        retranslateUi(SelectDay);
        QObject::connect(viewReportButton, SIGNAL(clicked()), SelectDay, SLOT(viewReportClicked()));
        QObject::connect(RegularButton, SIGNAL(clicked()), SelectDay, SLOT(regularButtonClicked()));
        QObject::connect(ExecutiveButton, SIGNAL(clicked()), SelectDay, SLOT(executiveButtonClicked()));

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
        dayInput->setItemText(7, QCoreApplication::translate("SelectDay", "All Days", nullptr));

        label->setText(QCoreApplication::translate("SelectDay", "Select Day to View:", nullptr));
        viewReportButton->setText(QCoreApplication::translate("SelectDay", "View Report", nullptr));
        reportLabel->setText(QCoreApplication::translate("SelectDay", "Item Report", nullptr));
        reportLabel_2->setText(QCoreApplication::translate("SelectDay", "Member Report", nullptr));
        label_2->setText(QCoreApplication::translate("SelectDay", "Total Price: ", nullptr));
        costLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("SelectDay", "Executive Members: ", nullptr));
        RegularButton->setText(QCoreApplication::translate("SelectDay", "Regular Report", nullptr));
        ExecutiveButton->setText(QCoreApplication::translate("SelectDay", "Executive Report", nullptr));
        label_4->setText(QCoreApplication::translate("SelectDay", "Regular Members:", nullptr));
        executiveCount->setText(QString());
        regularCount->setText(QString());
        label_5->setText(QCoreApplication::translate("SelectDay", "Executive Rebate: ", nullptr));
        rebateLabel->setText(QString());
        itemButton->setText(QCoreApplication::translate("SelectDay", "View Item List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectDay: public Ui_SelectDay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTDAY_H
