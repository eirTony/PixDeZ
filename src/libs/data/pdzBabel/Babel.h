#ifndef BASEL_H
#define BASEL_H
#include "pdzBabel.h"

#include <pdzBase/BasicId.h>
#include <pdzType/MetaType.h>
#include <pdzType/QQVariant.h>

class BaseBabelEnter;
class BaseBabelLeave;
class BaseBabelEnterBehavior;
class BaseBabelLeaveBehavior;

class PDZBABELSHARED_EXPORT Babel
{
public:
    Babel(void);
    Babel(const  QVariant & variant);
    Babel(const QQVariant & variant);
    BaseBabelEnter * enter(const QQVariant & variant);
    BaseBabelLeave * leave(void);
    QQVariant variant(void) const;

public: // static
    static QQVariant option(const BasicId & id,
                           const QQVariant & defaultVariant=QQVariant());
    static void muster(const QQVariant & exampleVariant,
                       BaseBabelEnterBehavior * enterBehavior,
                       BaseBabelLeaveBehavior * leaveBehavior);

private:
    MetaType mMetaType;

private: // static
    static QMap<MetaType::Key, BaseBabelEnterBehavior *> smTypeEnterMap;
    static QMap<MetaType::Key, BaseBabelLeaveBehavior *> smTypeLeaveMap;
    static BasicId::VariantMap smBabelOptions;
};

#endif // BASEL_H
