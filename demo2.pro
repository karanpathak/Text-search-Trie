#-------------------------------------------------
#
# Project created by QtCreator 2014-11-03T00:32:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = demo2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    createtrie.cpp \
    searchword.cpp

HEADERS  += mainwindow.h \
    createtrie.h \
    searchword.h \
    node.h

FORMS    += mainwindow.ui \
    createtrie.ui \
    searchword.ui

RESOURCES += \
    demo2.qrc
