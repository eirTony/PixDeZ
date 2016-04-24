#include "MetaType.h"

MetaType::MetaType(void) {;}

MetaType::MetaType(const QVariant & var)
    : mIntType(QVariant::Type::Invalid == var.type()
               ? var.userType() : int(var.type()))
    , mVarName(var.typeName())
    , mVarType(var.type())
    , mMetaName(QMetaType::typeName(mIntType))
{

}

MetaType::MetaType(const MetaName & metaName)
    : mIntType(QMetaType::type(metaName))
    , mVarName(metaName)
    , mVarType(QVariant::nameToType(metaName))
    , mMetaName(metaName)
{
    mVariant.convert(mVarType);
}

MetaType::Key MetaType::metaType(void) const
{
    return QMetaType::type(mMetaName);
}

MetaType::Key MetaType::key(void) const
{
    return metaType();
}

QQVariant MetaType::variant(void) const
{
    return mVariant;
}

MetaType::operator int (void) const
{
    return metaType();
}
