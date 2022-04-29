QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminwindow.cpp \
    editmember.cpp \
    login.cpp \
    main.cpp \
    managerwindow.cpp \
    parser.cpp \
    selectday.cpp

HEADERS += \
    adminwindow.h \
    editmember.h \
    login.h \
    managerwindow.h \
    parser.h \
    selectday.h

FORMS += \
    adminwindow.ui \
    editmember.ui \
    login.ui \
    managerwindow.ui \
    selectday.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
