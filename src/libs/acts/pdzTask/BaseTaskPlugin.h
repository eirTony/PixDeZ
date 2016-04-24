#ifndef BASETASK_H
#define BASETASK_H

#include <QObject>

#include <QQueue>
#include <QVariantMap>

typedef QObject PluginObject;
typedef QVariantMap VarMap;
typedef VarMap VarPak;
typedef VarPak SharedVarPak;
typedef VarPak Results;
typedef VarPak Notification;
typedef quint64 NotificationKey;
typedef bool Success;
typedef QQueue<Notification> NotificationQueue;

#include "BaseTaskInterface.h"

class BaseTaskPlugin : public PluginObject
                     , public BaseTaskInterface
{
    Q_OBJECT
public:
    explicit BaseTaskPlugin(QObject * parent=0);
    BaseTaskPlugin(SharedVarPak * context,
             QObject * parent=0);
    BaseTaskPlugin(const VarMap & config,
             SharedVarPak * context,
             QObject * parent=0);
    BaseTaskPlugin(const VarPak & input,
             const VarMap & config,
             SharedVarPak * context,
             QObject * parent=0);
    Results results(void) const;
    Notification takeNotification(void);

protected:
    BaseTaskPlugin * newSubTask(void);

signals:
    void notify(int /*queue.size*/);
    void finished(Success);

public slots:
    void setContext(SharedVarPak * context) {;}
    void configure(const VarMap & config) {;}
    void run(const VarPak & input=VarPak(),
             const VarMap & config=VarMap()) {;}

private:
    ~BaseTaskPlugin() {;}

private slots:
    void subNotify(Notification note) {;}
    void subFinished(Success success) {;}

private:
    SharedVarPak * mpContext;
    VarMap mConfig;
    VarPak mInput;
    Results mResults;
    Success mSubSuccess;
    QSet<BaseTaskPlugin *> mSubTaskSet;
    NotificationQueue mNotificationQueue;
};

#endif // BASETASK_H
