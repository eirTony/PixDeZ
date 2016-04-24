#ifndef METATYPE_H
#define METATYPE_H
#include "pdzType.h"

#include <QMetaType>

#include <pdzBase/MetaName.h>

#include "QQVariant.h"

class PDZTYPESHARED_EXPORT MetaType
{
public:
    typedef int Key;
    typedef QList<Key> KeyList;

public:
    MetaType(void);
    MetaType(const QVariant & var);
    MetaType(const MetaName & metaName);
    Key metaType(void) const;
    Key key(void) const;
    QQVariant variant(void) const;
    operator int (void) const;

private:
    Key             mIntType    = 0;
    MetaName        mVarName;
    QVariant::Type  mVarType    = QVariant().type();
    MetaName        mMetaName;
    QQVariant       mVariant;
};

#endif // METATYPE_H
