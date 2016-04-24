#ifndef WRITABLE_H
#define WRITABLE_H

#include "BaseBabelEnter.h"

#include <QString>

#include <pdzType/MetaType.h>

class Writable : public BaseBabelEnter
{
public:
    Writable(const MetaType::Key metaTypeKey,
             const QString & string);
};

#endif // WRITABLE_H
