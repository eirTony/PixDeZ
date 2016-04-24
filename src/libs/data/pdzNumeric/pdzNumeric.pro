#-------------------------------------------------
#
# Project created by QtCreator 2016-01-08T18:54:04
#
#-------------------------------------------------

##PDZ## Need gui module for QIcon in VersionInfo
#QT       -= gui

TARGET = pdzNumeric
TEMPLATE = lib

DEFINES += PDZNUMERIC_LIBRARY

include (../common.pri)

LIBS *= -lpdzBase
LIBS *= -lpdzType


win32:RC_FILE = WinRes.rc

SOURCES += pdzNumeric.cpp \
    Rational.cpp \
    traits/NumericTraits.cpp \
    Number.cpp \
    NumberList.cpp

HEADERS += pdzNumeric.h\
        pdznumeric_global.h \
    ../../../BranchVersion.h \
    ../../../CommonVersion.h \
    LibraryVersion.h \
    Rational.h \
    TInteger.h \
    traits/NumericTraits.h \
    Number.h \
    NumberList.h

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
