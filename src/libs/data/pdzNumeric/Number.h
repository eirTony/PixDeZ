#ifndef NUMBER_H
#define NUMBER_H

#include "Rational.h"
#include "TInteger.h"

class Number
{
public:
    typedef int Flags; // for now

public:
    Number(void); // null
    Number(const Flags flags); //null also
    Number(const Signed s,
           const Flags flags=0);
    Number(const Unsigned u,
           const Flags flags=0);
    Number(const SignedMax s,
           const Flags flags=0);
    Number(const UnsignedMax u,
           const Flags flags=0);
    // todo: Float FLoatMax FixedPoint
    Number(const Rational r,
           const Flags Flags=0);
};

#endif // NUMBER_H
