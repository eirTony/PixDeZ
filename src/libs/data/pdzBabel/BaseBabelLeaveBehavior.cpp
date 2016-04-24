#include "BaseBabelLeaveBehavior.h"

#include "Babel.h"

BaseBabelLeaveBehavior::BaseBabelLeaveBehavior(void) {;}
BaseBabelLeaveBehavior::~BaseBabelLeaveBehavior() {;}

QString BaseBabelLeaveBehavior::readable(const Babel & babel) const
{
    return babel.variant().toString();
}
