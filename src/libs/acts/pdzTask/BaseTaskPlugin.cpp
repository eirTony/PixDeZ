#include "BaseTaskPlugin.h"

BaseTaskPlugin::BaseTaskPlugin(QObject * parent)
    : PluginObject(parent)
    , BaseTaskInterface(this)
{
}
