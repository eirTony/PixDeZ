#ifndef PDZIMAGE_GLOBAL_H
#define PDZIMAGE_GLOBAL_H

#include <QtCore/qglobal.h>

#ifndef LIBRARY_NAME
#  define LIBRARY_NAME "pdzImage"
#endif

#if defined(PDZIMAGE_LIBRARY)
#  define PDZIMAGESHARED_EXPORT Q_DECL_EXPORT
#else
#  define PDZIMAGESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PDZIMAGE_GLOBAL_H
