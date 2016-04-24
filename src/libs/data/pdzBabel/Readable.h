#ifndef READABLE_H
#define READABLE_H
#include "pdzBabel.h"

#include <QString>

class Babel;
class BaseBabelLeave;
class StringBabelLeave;

class PDZBABELSHARED_EXPORT Readable : public QString
{
public:
    Readable(Babel babel);

private:
    BaseBabelLeave * mpLeave;
    StringBabelLeave * mpString;
};

#endif // READABLE_H
