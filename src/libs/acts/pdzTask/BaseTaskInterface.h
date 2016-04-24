#ifndef BASETASKINTERFACE_H
#define BASETASKINTERFACE_H

#include <QObject>
#include <QSet>
#include <QVariantMap>

#include <pdzBase/BasicKey.h>
#include <pdzBase/BasicId.h>

typedef QObject PluginObject;
typedef QVariantMap VarMap;
typedef VarMap VarPak;
typedef VarPak SharedVarPak;
typedef VarPak Results;
typedef VarPak Notification;
typedef bool Success;

class BaseTaskPlugin;

class BaseTaskInterface
{
protected:
    BaseTaskInterface(BaseTaskPlugin * plugin);
    virtual BasicKey taskKey(void) const = 0;
    virtual BasicId taskId(void) const = 0;
    virtual void work(void) = 0;

private:
    SharedVarPak * context(void) const;
    VarMap configuraton(void) const;
    VarPak inputPak(void) const;
    void notify(Notification note) const;
    void setResults(const Results & results) const;
    void finish(const Success success) const;

private:
    const BaseTaskPlugin * cmpPlugin;
};

#endif // BASETASKINTERFACE_H
