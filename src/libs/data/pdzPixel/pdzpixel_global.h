#ifndef PDZPIXEL_GLOBAL_H
#define PDZPIXEL_GLOBAL_H

#include <QtCore/qglobal.h>

#ifndef LIBRARY_NAME
#  define LIBRARY_NAME "pdzPixel"
#endif


#if defined(PDZPIXEL_LIBRARY)
#  define PDZPIXELSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PDZPIXELSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PDZPIXEL_GLOBAL_H
