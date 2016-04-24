#-------------------------------------------------
#
# Project created by QtCreator 2016-02-01T01:16:29
#
#-------------------------------------------------

##PDZ## Need gui module for QIcon in VersionInfo
#QT       -= gui

TARGET = pdzTask
TEMPLATE = lib

DEFINES += PDZTASK_LIBRARY

include (../common.pri)

LIBS *= -lpdzBase

win32:RC_FILE = WinRes.rc

SOURCES += pdzTask.cpp \
    BaseTaskInterface.cpp \
    BaseTaskPlugin.cpp

HEADERS += pdzTask.h\
        pdztask_global.h \
    BaseTaskInterface.h \
    BaseTaskPlugin.h \
    LibraryVersion.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    WinRes.rc
