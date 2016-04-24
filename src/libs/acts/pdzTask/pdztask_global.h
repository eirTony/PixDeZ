#ifndef PDZTASK_GLOBAL_H
#define PDZTASK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PDZTASK_LIBRARY)
#  define PDZTASKSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PDZTASKSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PDZTASK_GLOBAL_H
