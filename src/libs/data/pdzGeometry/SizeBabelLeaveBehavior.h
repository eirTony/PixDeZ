#ifndef SIZEBABELLEAVEBEHAVIOR_H
#define SIZEBABELLEAVEBEHAVIOR_H

#include <QString>

#include <pdzType/MetaType.h>
#include <pdzBabel/BaseBabelLeaveBehavior.h>

class Babel;

class SizeBabelLeaveBehavior : public BaseBabelLeaveBehavior
{
public:
    SizeBabelLeaveBehavior(void);
    virtual ~SizeBabelLeaveBehavior();
    virtual MetaType::KeyList supportedTypes(void) const;
    virtual QString readable(const Babel & babel) const;
};
Q_DECLARE_METATYPE(SizeBabelLeaveBehavior)

#endif // SIZEBABELLEAVEBEHAVIOR_H
