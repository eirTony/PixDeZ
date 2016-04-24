#ifndef SIZE_H
#define SIZE_H
#include "pdzGeometry.h"

#include <QList>
#include <QSize>
#include <QSizeF>

#include <pdzNumeric/Rational.h>

#include <pdzNumeric/TInteger.h>

#include "Aspect.h"

class PDZGEOMETRYSHARED_EXPORT Size
{
public:
    typedef QList<Size> List;

public:
    Size(void);
    Size(const QSize qsz);
    Size(const QSizeF qszf);
    Size(const Signed x, const Signed y);
    Size(const float x, const float y);
    Size(const Rational x, const Rational y);
    Size(const int x, const Aspect ratio=1.0);
    Size(const Size & other);

    void set(const QSize qsz);
    void set(const int x, const int y);
    void set(const float x, const float y);
    void set(const Rational x, const Rational y);
    void set(const int x, const Aspect ratio);
    void set(const Size & other);

    bool isNull(void) const;
    bool isEMpty(void) const;
    Rational area(void) const;
    Rational rows(void) const;
    Rational cols(void) const;

private:
    Rational mX;
    Rational mY;
};
Q_DECLARE_METATYPE(Size);

#endif // SIZE_H
