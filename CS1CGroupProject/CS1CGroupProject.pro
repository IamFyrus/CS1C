QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addpurchases.cpp \
    adminwindow.cpp \
    conversions.cpp \
    edititem.cpp \
    editmember.cpp \
    iteminfo.cpp \
    login.cpp \
    main.cpp \
    managerwindow.cpp \
    memberinfo.cpp \
    parser.cpp \
    selectday.cpp

HEADERS += \
    addpurchases.h \
    adminwindow.h \
    conversions.h \
    edititem.h \
    editmember.h \
    iteminfo.h \
    login.h \
    managerwindow.h \
    memberinfo.h \
    parser.h \
    selectday.h

FORMS += \
    addpurchases.ui \
    adminwindow.ui \
    conversions.ui \
    edititem.ui \
    editmember.ui \
    iteminfo.ui \
    login.ui \
    managerwindow.ui \
    memberinfo.ui \
    selectday.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    day1.txt \
    day2.txt \
    day3.txt \
    day4.txt \
    day5.txt \
    day6.txt \
    day7.txt \
    member.txt \
    warehouse shoppers.txt \
    warehouse shoppers.txt \
    warehouse shoppers.txt
