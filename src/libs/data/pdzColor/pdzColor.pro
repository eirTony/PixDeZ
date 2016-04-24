#-------------------------------------------------
#
# Project created by QtCreator 2016-01-08T18:47:26
#
#-------------------------------------------------

##PDZ## Need gui module for QIcon in VersionInfo
#QT       -= gui

TARGET = pdzColor
TEMPLATE = lib

DEFINES += PDZCOLOR_LIBRARY

include (../common.pri)

LIBS *= -lpdzBase

win32:RC_FILE = WinRes.rc

SOURCES += PdzColor.cpp

HEADERS += PdzColor.h\
        pdzcolor_global.h \
    ../../../BranchVersion.h \
    ../../../CommonVersion.h \
    LibraryVersion.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    WinRes.rc \
    ../../../Common.ico \
    ../../../CommonWinRes.rc \
    ../../../README.rst \
    ../../README.md \
