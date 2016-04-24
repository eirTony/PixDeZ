#include "Babel.h"

#include <pdzBase/Diagnostic.h>

#include "BaseBabelEnter.h"
#include "BaseBabelEnterBehavior.h"
#include "BaseBabelLeave.h"
#include "BaseBabelLeaveBehavior.h"

BasicId::VariantMap Babel::smBabelOptions;
QMap<MetaType::Key, BaseBabelEnterBehavior *> Babel::smTypeEnterMap;
QMap<MetaType::Key, BaseBabelLeaveBehavior *> Babel::smTypeLeaveMap;

Babel::Babel(void) {;}

Babel::Babel(const  QVariant & variant)
    : mMetaType(variant) {;}

Babel::Babel(const QQVariant & variant)
    : mMetaType(variant) {;}

QQVariant Babel::variant(void) const
{
    return mMetaType.variant();
}


// static
QQVariant Babel::option(const BasicId & id,
                const QQVariant & defaultVariant)
{
    QVariant variant = defaultVariant;
    if (smBabelOptions.contains(id))
        variant = smBabelOptions.value(id);
    return variant;
}

// static
void Babel::muster(const QQVariant & exampleVariant,
                   BaseBabelEnterBehavior * enterBehavior,
                   BaseBabelLeaveBehavior * leaveBehavior)
{
    MetaType metaType(exampleVariant);
    if ( !! enterBehavior)
        smTypeEnterMap.insert(metaType.key(),
                              enterBehavior);
    if ( !! leaveBehavior)
        smTypeLeaveMap.insert(metaType.key(),
                              leaveBehavior);
}

BaseBabelEnter * Babel::enter(const QQVariant & variant)
{
    USE(variant); TODO(); return 0;
}

BaseBabelLeave * Babel::leave(void)
{
    return new BaseBabelLeave(mMetaType.variant(),
                     smTypeLeaveMap.value(mMetaType.key()));
}
