#-------------------------------------------------
#
# Project created by QtCreator 2016-01-14T00:43:49
#
#-------------------------------------------------

TARGET = pdzGeometry
TEMPLATE = lib

DEFINES += PDZGEOMETRY_LIBRARY

include (../common.pri)

LIBS *= -lpdzBase
LIBS *= -lpdzType
LIBS *= -lpdzBabel
LIBS *= -lpdzNumeric

win32:RC_FILE = WinRes.rc

SOURCES += pdzGeometry.cpp \
    Size.cpp \
    Aspect.cpp \
    SizeBabelLeaveBehavior.cpp

HEADERS += pdzGeometry.h\
        pdzgeometry_global.h \
    Size.h \
    Aspect.h \
    SizeBabelLeaveBehavior.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
