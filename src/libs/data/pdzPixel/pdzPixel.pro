#-------------------------------------------------
#
# Project created by QtCreator 2016-01-08T19:02:45
#
#-------------------------------------------------

##PDZ## Need gui module for QIcon in VersionInfo
#QT       -= gui

TARGET = pdzPixel
TEMPLATE = lib

DEFINES += PDZPIXEL_LIBRARY

include (../common.pri)

LIBS *= -lpdzBase


win32:RC_FILE = WinRes.rc

SOURCES += pdzPixel.cpp

HEADERS += pdzPixel.h\
        pdzpixel_global.h \
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
