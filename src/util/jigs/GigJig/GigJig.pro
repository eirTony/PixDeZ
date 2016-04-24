#-------------------------------------------------
#
# Project created by QtCreator 2016-01-13T02:10:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GigJig
TEMPLATE = app

include(../common.pri)

LIBS *= -lpdzBase
LIBS *= -lpdzType
LIBS *= -lpdzBabel
LIBS *= -lpdzNumeric
LIBS *= -lpdzGeometry

SOURCES += main.cpp\
        GigJigMain.cpp \
    FileMenu.cpp \
    ViewMenu.cpp \
    StatusBar.cpp \
    NewImageDialog.cpp

HEADERS  += GigJigMain.h \
    FileMenu.h \
    ViewMenu.h \
    StatusBar.h \
    NewImageDialog.h

FORMS    += GigJigMain.ui
