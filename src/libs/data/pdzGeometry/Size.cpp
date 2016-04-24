#include "Size.h"

Size::Size(void) {;}
Size::Size(const float x, const float y) : mX(x), mY(y) {;}
Size::Size(const Signed x, const Signed y) : mX(x), mY(y) {;}
Size::Size(const Rational x, const Rational y) : mX(x), mY(y) {;}
Size::Size(const Size & other) : mX(other.mX), mY(other.mY) {;}


Rational Size::rows(void) const
{
    return mX;
}

Rational Size::cols(void) const
{
    return mY;
}
