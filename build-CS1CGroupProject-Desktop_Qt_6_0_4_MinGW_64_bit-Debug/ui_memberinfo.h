/********************************************************************************
** Form generated from reading UI file 'memberinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERINFO_H
#define UI_MEMBERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemberInfo
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTableView *memberTable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MemberInfo)
    {
        if (MemberInfo->objectName().isEmpty())
            MemberInfo->setObjectName(QString::fromUtf8("MemberInfo"));
        MemberInfo->resize(800, 600);
        centralwidget = new QWidget(MemberInfo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 50, 421, 51));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        memberTable = new QTableView(centralwidget);
        memberTable->setObjectName(QString::fromUtf8("memberTable"));
        memberTable->setGeometry(QRect(110, 120, 521, 421));
        MemberInfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MemberInfo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MemberInfo->setMenuBar(menubar);
        statusbar = new QStatusBar(MemberInfo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MemberInfo->setStatusBar(statusbar);

        retranslateUi(MemberInfo);

        QMetaObject::connectSlotsByName(MemberInfo);
    } // setupUi

    void retranslateUi(QMainWindow *MemberInfo)
    {
        MemberInfo->setWindowTitle(QCoreApplication::translate("MemberInfo", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MemberInfo", "Member Information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberInfo: public Ui_MemberInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERINFO_H
