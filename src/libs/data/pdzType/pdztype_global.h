#ifndef PDZTYPE_GLOBAL_H
#define PDZTYPE_GLOBAL_H

#include <QtCore/qglobal.h>

#ifndef LIBRARY_NAME
#  define LIBRARY_NAME "pdzType"
#endif


#if defined(PDZTYPE_LIBRARY)
#  define PDZTYPESHARED_EXPORT Q_DECL_EXPORT
#else
#  define PDZTYPESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PDZTYPE_GLOBAL_H
