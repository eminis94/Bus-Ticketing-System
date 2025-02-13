QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    booking.cpp \
    database.cpp \
    history.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    navigation.cpp \
    ticketdetails.cpp

HEADERS += \
    booking.h \
    database.h \
    history.h \
    login.h \
    mainwindow.h \
    navigation.h \
    ticketdetails.h

FORMS += \
    booking.ui \
    history.ui \
    login.ui \
    mainwindow.ui \
    navigation.ui \
    ticketdetails.ui

TRANSLATIONS += \
    BusTicketSystem_en_TZ.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
