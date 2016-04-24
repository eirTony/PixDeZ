#include "NumericTraits.h"

#include <pdzType/MetaType.h>

const BasicName::VariantPairList NumericTraits::csmDefaultTraitList
    = BasicName::VariantPairList()
        << BasicName::VariantPair("Signed", false)
        << BasicName::VariantPair("Bits", 0)
           ;

QMap<int, NumericTraits *> NumericTraits::smTypeTraitsMap;


#if 0
NumericTraits::NumericTraits(void)
{
}
#endif


bool NumericTraits::isSigned(void) const
{
    return mValues.Signed;
}

int NumericTraits::bits(void) const
{
    return mValues.Bits;
}

/* --------------------- private ------------------- */

NumericTraits::NumericTraits(const QVariant & variant,
                             const BasicName::VariantPairList &traitList)
{
    MetaType mt(variant);
    mValues.variant = variant;
    setValues(csmDefaultTraitList);
    setValues(traitList);
    smTypeTraitsMap.insert(mt, this);
}


void NumericTraits::setValues(const BasicName::VariantPairList & traitList)
{
    foreach (BasicName::VariantPair pair, traitList)
        setValue(pair.first, pair.second);
}

void NumericTraits::setValue(const BasicName & name,
              const QVariant & variant)
{
    if (false) {;}
    else if ("Signed" == name) mValues.Signed = variant.toBool();
    else {;}
}
