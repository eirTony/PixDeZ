#ifndef TINTEGER_H
#define TINTEGER_H

class NumericTraits;

template <class INT> class TInteger
{
public:
    TInteger(void)  : mInteger(0) { ctor(); }
    TInteger(const INT other) : mInteger(other) { ctor(); }
    bool isNull(void) const { return 0 == mInteger; }
    operator INT (void) const { return mInteger; }
    INT operator () (void) const { return mInteger; }
    INT operator = (const INT other) { return mInteger = other; }
    NumericTraits * traits(void) const { return mpTraits; }

private:
    void ctor(void) { setBehavior(); }
    bool setBehavior(void) { /* TODO */ return false; }

private:
    INT mInteger = 0;
    NumericTraits * mpTraits = 0;
};

#include <QtGlobal>

typedef TInteger<int>       Signed;
typedef TInteger<qint8>     Signed8;
typedef TInteger<qint16>    Signed16;
typedef TInteger<qint32>    Signed32;
typedef TInteger<qint64>    Signed64;

typedef TInteger<unsigned>  Unsigned;
typedef TInteger<quint8>    Unsigned8;
typedef TInteger<quint16>   Unsigned16;
typedef TInteger<quint32>   Unsigned32;
typedef TInteger<quint64>   Unsigned64;

#ifdef PDZ_OS_WIN32
typedef Signed64 SignedMax;
typedef Unsigned64 UnsignedMax;
#endif
#ifdef PDZ_OS_UNIX64
typedef Signed64 SignedMax; // until we know better about 128
typedef Unsigned64 UnsignedMax;
#endif

#endif // TINTEGER_H
