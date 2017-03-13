#ifndef FILTER_H
#define FILTER_H
#include "plugininterface.h"
#include <QObject>
#include <QDebug>

class filter:public QObject,public myPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID"Tests.Plugin.Chiacplus.MyInterface")
    Q_INTERFACES(myPluginInterface)
public:
    filter();
    void Print() Q_DECL_OVERRIDE;
};

#endif // FILTER_H
