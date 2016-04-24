#-------------------------------------------------
#
# Project created by QtCreator 2016-01-13T22:28:45
#
#-------------------------------------------------

QT       += widgets svg xml multimedia

TARGET = pdzImage
TEMPLATE = lib

DEFINES += PDZIMAGE_LIBRARY

include (../common.pri)

LIBS *= -lpdzBase

SOURCES += pdzImage.cpp \
    ImageScene.cpp

HEADERS += pdzImage.h\
        pdzimage_global.h \
    ImageScene.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
