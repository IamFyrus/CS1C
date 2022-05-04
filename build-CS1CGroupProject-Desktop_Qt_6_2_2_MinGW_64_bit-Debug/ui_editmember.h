/********************************************************************************
** Form generated from reading UI file 'editmember.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITMEMBER_H
#define UI_EDITMEMBER_H

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

class Ui_EditMember
{
public:
    QWidget *centralwidget;
    QTableView *rest_tableView;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *widget;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EditMember)
    {
        if (EditMember->objectName().isEmpty())
            EditMember->setObjectName(QString::fromUtf8("EditMember"));
        EditMember->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QBrush brush3(QColor(240, 240, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush4(QColor(227, 227, 227, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        QBrush brush5(QColor(160, 160, 160, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        QBrush brush6(QColor(105, 105, 105, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        QBrush brush7(QColor(233, 231, 227, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        QBrush brush8(QColor(247, 247, 247, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        EditMember->setPalette(palette);
        centralwidget = new QWidget(EditMember);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        rest_tableView = new QTableView(centralwidget);
        rest_tableView->setObjectName(QString::fromUtf8("rest_tableView"));
        rest_tableView->setGeometry(QRect(20, 70, 241, 381));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rest_tableView->sizePolicy().hasHeightForWidth());
        rest_tableView->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        rest_tableView->setFont(font);
        rest_tableView->setFocusPolicy(Qt::NoFocus);
        rest_tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(225, 225, 225);\n"
"selection-background-color: rgb(159, 11, 25);\n"
"selection-color: rgb(0, 0, 0);"));
        rest_tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        rest_tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        rest_tableView->setAutoScroll(false);
        rest_tableView->setAutoScrollMargin(5);
        rest_tableView->setDragDropOverwriteMode(false);
        rest_tableView->setAlternatingRowColors(true);
        rest_tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        rest_tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        rest_tableView->setShowGrid(false);
        rest_tableView->setGridStyle(Qt::SolidLine);
        rest_tableView->setSortingEnabled(false);
        rest_tableView->horizontalHeader()->setVisible(false);
        rest_tableView->horizontalHeader()->setMinimumSectionSize(50);
        rest_tableView->horizontalHeader()->setDefaultSectionSize(200);
        rest_tableView->verticalHeader()->setVisible(false);
        rest_tableView->verticalHeader()->setHighlightSections(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 241, 31));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 230, 80, 18));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 290, 80, 18));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(390, 320, 80, 18));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(320, 70, 241, 381));
        widget->setAcceptDrops(false);
        widget->setAutoFillBackground(true);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 190, 80, 18));
        EditMember->setCentralWidget(centralwidget);
        rest_tableView->raise();
        label->raise();
        widget->raise();
        pushButton->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        menubar = new QMenuBar(EditMember);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        EditMember->setMenuBar(menubar);
        statusbar = new QStatusBar(EditMember);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EditMember->setStatusBar(statusbar);

        retranslateUi(EditMember);

        QMetaObject::connectSlotsByName(EditMember);
    } // setupUi

    void retranslateUi(QMainWindow *EditMember)
    {
        EditMember->setWindowTitle(QCoreApplication::translate("EditMember", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("EditMember", "Members", nullptr));
        pushButton->setText(QCoreApplication::translate("EditMember", "Add Member", nullptr));
        pushButton_3->setText(QCoreApplication::translate("EditMember", "Delete Member", nullptr));
        pushButton_4->setText(QCoreApplication::translate("EditMember", "Search Member", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EditMember", "Edit Member", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditMember: public Ui_EditMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITMEMBER_H
