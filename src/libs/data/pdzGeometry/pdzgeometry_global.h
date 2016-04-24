#ifndef PDZGEOMETRY_GLOBAL_H
#define PDZGEOMETRY_GLOBAL_H

#include <QtCore/qglobal.h>

#ifndef LIBRARY_NAME
#  define LIBRARY_NAME "pdzGeometry"
#endif

#if defined(PDZGEOMETRY_LIBRARY)
#  define PDZGEOMETRYSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PDZGEOMETRYSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PDZGEOMETRY_GLOBAL_H
