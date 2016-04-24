#include "Rational.h"

Rational::Rational(void) {;}

Rational::Rational(const Signed dividend, const Signed divisor)
    : mDividend(dividend) , mDivisor(divisor) {;}

Rational::Rational(const Signed integer)
    : mDividend(integer) , mDivisor(1) {;}

Rational::Rational(const float dividend,
         const float divisor)
    : mDividend(dividend) , mDivisor(divisor) {;}

Rational::Rational(const float fValue)
    : mDividend(fValue), mDivisor(1.0) {;}


double Rational::toDouble(void) const
{
    return qIsNull(double(mDivisor))
           ? double(mDividend) / double(mDivisor)
           : qQNaN();
}


Rational::operator double (void) const
{
    return toDouble();
}
