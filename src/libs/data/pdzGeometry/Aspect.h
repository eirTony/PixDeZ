#ifndef ASPECT_H
#define ASPECT_H
#include "pdzGeometry.h"

#include <pdzNumeric/Rational.h>

class PDZGEOMETRYSHARED_EXPORT Aspect
{
public:
    Aspect(void);
    Aspect(const int x, const int y);
    Aspect(const double ratio);

private:
    Rational mRatio;
};
Q_DECLARE_METATYPE(Aspect);

#endif // ASPECT_H
