#ifndef PDZNUMERIC_GLOBAL_H
#define PDZNUMERIC_GLOBAL_H

#include <QtCore/qglobal.h>

#ifndef LIBRARY_NAME
#  define LIBRARY_NAME "pdzNumeric"
#endif


#if defined(PDZNUMERIC_LIBRARY)
#  define PDZNUMERICSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PDZNUMERICSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PDZNUMERIC_GLOBAL_H
