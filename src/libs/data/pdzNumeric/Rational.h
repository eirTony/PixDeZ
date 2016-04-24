#ifndef RATIONAL_H
#define RATIONAL_H
#include "pdzNumeric.h"

#include "TInteger.h"

class PDZNUMERICSHARED_EXPORT Rational
{
public:
    Rational(void);
    Rational(const Signed dividend,
             const Signed divisor);
    Rational(const Signed integer);
    Rational(const float dividend,
             const float divisor);
    Rational(const float fValue);
    Rational(const double ratio);

    bool isNull(void) const;

    double toDouble(void) const;

    operator double (void) const;

private:
    Signed mDividend;
    Signed mDivisor;
};

#endif // RATIONAL_H
