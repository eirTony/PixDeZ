#-------------------------------------------------
#
# Project created by QtCreator 2016-01-08T18:57:10
#
#-------------------------------------------------

##PDZ## Need gui module for QIcon in VersionInfo
#QT       -= gui

TARGET = pdzType
TEMPLATE = lib

DEFINES += PDZTYPE_LIBRARY

include (../common.pri)

LIBS *= -lpdzBase

win32:RC_FILE = WinRes.rc

SOURCES += pdzType.cpp \
    MetaType.cpp \
    QQVariant.cpp

HEADERS += pdzType.h\
        pdztype_global.h \
    ../../../BranchVersion.h \
    ../../../CommonVersion.h \
    LibraryVersion.h \
    MetaType.h \
    QQVariant.h

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
