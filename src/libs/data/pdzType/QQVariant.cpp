#include "QQVariant.h"

#include <QVariant>

QQVariant::QQVariant(void) {;}
QQVariant::QQVariant(const QVariant & variant) : QVariant(variant) {;}

QQVariant::operator bool (void) const { return QVariant::toBool(); }
