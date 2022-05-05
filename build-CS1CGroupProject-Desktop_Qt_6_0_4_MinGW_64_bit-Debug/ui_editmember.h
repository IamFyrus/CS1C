/********************************************************************************
** Form generated from reading UI file 'editmember.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITMEMBER_H
#define UI_EDITMEMBER_H

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

class Ui_EditMember
{
public:
    QWidget *centralwidget;
    QTableView *rest_tableView;
    QLabel *label;
    QWidget *widget;
    QPushButton *searchMemberButton;
    QPushButton *editMemberButton;
    QPushButton *deleteMemberButton;
    QPushButton *addMemberButton;
    QLineEdit *memberNameLine;
    QLineEdit *memberIdLine;
    QLineEdit *memberTypeLine;
    QLineEdit *expDateLine;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EditMember)
    {
        if (EditMember->objectName().isEmpty())
            EditMember->setObjectName(QString::fromUtf8("EditMember"));
        EditMember->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush5(QColor(240, 240, 240, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        QBrush brush6(QColor(227, 227, 227, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        QBrush brush7(QColor(160, 160, 160, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        QBrush brush8(QColor(105, 105, 105, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        QBrush brush9(QColor(245, 245, 245, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        EditMember->setPalette(palette);
        EditMember->setAcceptDrops(false);
        EditMember->setAutoFillBackground(true);
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
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(320, 80, 241, 381));
        widget->setAcceptDrops(false);
        widget->setAutoFillBackground(true);
        searchMemberButton = new QPushButton(widget);
        searchMemberButton->setObjectName(QString::fromUtf8("searchMemberButton"));
        searchMemberButton->setGeometry(QRect(40, 310, 91, 18));
        editMemberButton = new QPushButton(widget);
        editMemberButton->setObjectName(QString::fromUtf8("editMemberButton"));
        editMemberButton->setGeometry(QRect(140, 310, 91, 18));
        deleteMemberButton = new QPushButton(widget);
        deleteMemberButton->setObjectName(QString::fromUtf8("deleteMemberButton"));
        deleteMemberButton->setGeometry(QRect(140, 270, 91, 18));
        addMemberButton = new QPushButton(widget);
        addMemberButton->setObjectName(QString::fromUtf8("addMemberButton"));
        addMemberButton->setGeometry(QRect(40, 270, 91, 18));
        memberNameLine = new QLineEdit(widget);
        memberNameLine->setObjectName(QString::fromUtf8("memberNameLine"));
        memberNameLine->setGeometry(QRect(90, 50, 113, 20));
        memberIdLine = new QLineEdit(widget);
        memberIdLine->setObjectName(QString::fromUtf8("memberIdLine"));
        memberIdLine->setGeometry(QRect(90, 90, 113, 20));
        memberTypeLine = new QLineEdit(widget);
        memberTypeLine->setObjectName(QString::fromUtf8("memberTypeLine"));
        memberTypeLine->setGeometry(QRect(90, 130, 113, 20));
        expDateLine = new QLineEdit(widget);
        expDateLine->setObjectName(QString::fromUtf8("expDateLine"));
        expDateLine->setGeometry(QRect(90, 170, 113, 20));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 61, 21));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 61, 21));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 130, 61, 21));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 170, 61, 21));
        EditMember->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditMember);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        EditMember->setMenuBar(menubar);
        statusbar = new QStatusBar(EditMember);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EditMember->setStatusBar(statusbar);

        retranslateUi(EditMember);
        QObject::connect(addMemberButton, SIGNAL(clicked()), EditMember, SLOT(addMemberButtonClicked()));
        QObject::connect(deleteMemberButton, SIGNAL(clicked()), EditMember, SLOT(deleteMemberButtonClicked()));
        QObject::connect(searchMemberButton, SIGNAL(clicked()), EditMember, SLOT(searchMemberButtonClicked()));
        QObject::connect(editMemberButton, SIGNAL(clicked()), EditMember, SLOT(editMemberButtonClicked()));

        QMetaObject::connectSlotsByName(EditMember);
    } // setupUi

    void retranslateUi(QMainWindow *EditMember)
    {
        EditMember->setWindowTitle(QCoreApplication::translate("EditMember", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("EditMember", "Members", nullptr));
        searchMemberButton->setText(QCoreApplication::translate("EditMember", "Search Member", nullptr));
        editMemberButton->setText(QCoreApplication::translate("EditMember", "Edit Member", nullptr));
        deleteMemberButton->setText(QCoreApplication::translate("EditMember", "Delete Member", nullptr));
        addMemberButton->setText(QCoreApplication::translate("EditMember", "Add Member", nullptr));
        label_2->setText(QCoreApplication::translate("EditMember", "Member Name", nullptr));
        label_3->setText(QCoreApplication::translate("EditMember", "Member Id", nullptr));
        label_6->setText(QCoreApplication::translate("EditMember", "Member Type", nullptr));
        label_7->setText(QCoreApplication::translate("EditMember", "Expiration Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditMember: public Ui_EditMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITMEMBER_H
