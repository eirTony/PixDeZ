#ifndef NUMERICTRAITS_H
#define NUMERICTRAITS_H

#include <QMap>
#include <QMetaType>
#include <QVariant>

#include <pdzBase/BasicName.h>

#include "../TInteger.h"

class NumericTraits
{
public:
//    NumericTraits(void);
    bool isSigned(void) const;
    int bits(void) const;

private:
    struct Values
    {
        QVariant variant;
        quint64 Signed      : 1,
                Bits        : 8,
                Available   : 55;
    };

private:
    NumericTraits(const QVariant & variant,
                  const BasicName::VariantPairList & traitList);
    void setValues(const BasicName::VariantPairList & traitList);
    void setValue(const BasicName & name,
                  const QVariant & variant);

private:
    Values mValues;

private: // static
    const static BasicName::VariantPairList csmDefaultTraitList;
    static QMap<int, NumericTraits *> smTypeTraitsMap;
};

#endif // NUMERICTRAITS_H
