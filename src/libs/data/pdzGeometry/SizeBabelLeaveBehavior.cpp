#include "SizeBabelLeaveBehavior.h"

#include <pdzBase/Diagnostic.h>
#include <pdzBabel/Babel.h>

SizeBabelLeaveBehavior::SizeBabelLeaveBehavior(void) {;}
SizeBabelLeaveBehavior::~SizeBabelLeaveBehavior() {;}

MetaType::KeyList SizeBabelLeaveBehavior::supportedTypes(void) const
{
    MetaType::KeyList keyList;
    MetaType metaType(MetaName("SizeBabelLeaveBehavior"));
    keyList.append(int(metaType));
    return keyList;
}

QString SizeBabelLeaveBehavior::readable(const Babel & babel) const
{
    bool integral = bool(Babel::option("Size/Leave/integral",
                                       QVariant(true)));
    USE(babel); USE(integral); TODO();
    return QString();
}
