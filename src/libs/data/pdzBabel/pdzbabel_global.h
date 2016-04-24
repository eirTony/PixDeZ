#ifndef PDZBABEL_GLOBAL_H
#define PDZBABEL_GLOBAL_H

#include <QtCore/qglobal.h>

#ifndef LIBRARY_NAME
#  define LIBRARY_NAME "pdzBabel"
#endif

#if defined(PDZBABEL_LIBRARY)
#  define PDZBABELSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PDZBABELSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PDZBABEL_GLOBAL_H
