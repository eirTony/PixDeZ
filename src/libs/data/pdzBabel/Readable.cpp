#include "Readable.h"

#include "BaseBabelLeave.h"
#include "StringBabelLeave.h"

Readable::Readable(Babel babel)
    : mpLeave(babel.leave())
    , mpString(new StringBabelLeave(mpLeave))
{
    QString::append(mpString->readable());
}
