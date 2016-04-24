#ifndef PDZCOLOR_GLOBAL_H
#define PDZCOLOR_GLOBAL_H

#include <QtCore/qglobal.h>

#ifndef LIBRARY_NAME
#  define LIBRARY_NAME "pdzColor"
#endif


#if defined(PDZCOLOR_LIBRARY)
#  define PDZCOLORSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PDZCOLORSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PDZCOLOR_GLOBAL_H
