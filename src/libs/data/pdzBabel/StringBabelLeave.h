#ifndef STRINGBABELLEAVE_H
#define STRINGBABELLEAVE_H

#include <QString>

#include "Babel.h"

class BaseBabelLeave;

class StringBabelLeave
{
public:
    StringBabelLeave(BaseBabelLeave * pLeave);
    QString readable(void);

private:
    BaseBabelLeave * mpLeave;
};

#endif // STRINGBABELLEAVE_H
