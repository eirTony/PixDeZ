#ifndef QQVARIANT_H
#define QQVARIANT_H
#include "pdzType.h"

#include <QVariant>

class PDZTYPESHARED_EXPORT QQVariant : public QVariant
{
public:
    QQVariant(void);
    QQVariant(const QVariant & variant);

    operator bool (void) const;
};

#endif // QQVARIANT_H
