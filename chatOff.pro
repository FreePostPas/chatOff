#-------------------------------------------------
#
# Project created by QtCreator 2014-07-29T18:59:54
#
#-------------------------------------------------

QT += core gui
QT += widgets network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = chatOff
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    packet.cpp \
    user.cpp

HEADERS  += mainwindow.h \
    packet.h \
    user.h

FORMS    +=
