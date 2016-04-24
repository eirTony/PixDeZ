#ifndef BASEBABELENTER_H
#define BASEBABELENTER_H

#include "Babel.h"

class BaseBabelEnter : public Babel
{
public:
    BaseBabelEnter(const MetaType::Key metaTypeKey,
                   const QString & string);
};

#endif // BASEBABELENTER_H
