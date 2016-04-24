#include "StringBabelLeave.h"

#include "BaseBabelLeave.h"
#include "BaseBabelLeaveBehavior.h"

StringBabelLeave::StringBabelLeave(BaseBabelLeave * pLeave)
    : mpLeave(pLeave)
{
}

QString StringBabelLeave::readable(void)
{
    return mpLeave->leaveBehavior()->readable(mpLeave->babel());
}
