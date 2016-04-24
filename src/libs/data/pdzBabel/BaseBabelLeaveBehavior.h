#ifndef BASEBASELLEAVEBEHAVIOR_H
#define BASEBASELLEAVEBEHAVIOR_H
#include "pdzBabel.h"

#include <pdzType/MetaType.h>

class Babel;

class PDZBABELSHARED_EXPORT BaseBabelLeaveBehavior
{
public:
    BaseBabelLeaveBehavior(void);
    ~BaseBabelLeaveBehavior();
    virtual MetaType::KeyList supportedTypes(void) const = 0;
    virtual QString readable(const Babel & babel) const;

};

#endif // BASEBASELLEAVEBEHAVIOR_H
