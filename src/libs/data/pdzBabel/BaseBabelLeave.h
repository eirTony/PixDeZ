#ifndef BASEBABELLEAVE_H
#define BASEBABELLEAVE_H

#include "Babel.h"

class BaseBabelLeaveBehavior;

class BaseBabelLeave
{
public:
    BaseBabelLeave(const Babel & babel,
                   BaseBabelLeaveBehavior * behavior);
    Babel babel(void) const;
    BaseBabelLeaveBehavior * leaveBehavior(void) const;

private:
    const Babel cmBabel;
    BaseBabelLeaveBehavior * mpLeaveBehavior = 0;
};

#endif // BASEBABELLEAVE_H
