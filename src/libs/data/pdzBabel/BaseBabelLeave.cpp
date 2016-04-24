#include "BaseBabelLeave.h"

#include "BaseBabelLeaveBehavior.h"

BaseBabelLeave::BaseBabelLeave(const Babel & babel,
                               BaseBabelLeaveBehavior * behavior)
    : cmBabel(babel)
    , mpLeaveBehavior(behavior) {;}

Babel BaseBabelLeave::babel(void) const
{
    return cmBabel;
}

BaseBabelLeaveBehavior *BaseBabelLeave::leaveBehavior(void) const
{
    return mpLeaveBehavior;
}
