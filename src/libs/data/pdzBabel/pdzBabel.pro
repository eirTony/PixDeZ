#-------------------------------------------------
#
# Project created by QtCreator 2016-01-14T00:52:57
#
#-------------------------------------------------

QT       += xml

##PDZ## Need gui module for QIcon in VersionInfo
#QT       -= gui

TARGET = pdzBabel
TEMPLATE = lib

DEFINES += PDZBABEL_LIBRARY

include (../common.pri)

LIBS *= -lpdzBase
LIBS *= -lpdzType

win32:RC_FILE = WinRes.rc

SOURCES += pdzBabel.cpp \
    Babel.cpp \
    BaseBabelEnterBehavior.cpp \
    BaseBabelLeaveBehavior.cpp \
    Readable.cpp \
    BaseBabelLeave.cpp \
    BaseBabelEnter.cpp \
    Writable.cpp \
    StringBabelLeave.cpp

HEADERS += pdzBabel.h\
        pdzbabel_global.h \
    Babel.h \
    BaseBabelEnterBehavior.h \
    BaseBabelLeaveBehavior.h \
    Readable.h \
    BaseBabelLeave.h \
    BaseBabelEnter.h \
    Writable.h \
    StringBabelLeave.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
