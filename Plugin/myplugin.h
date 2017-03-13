#ifndef MYPLUGIN_H
#define MYPLUGIN_H
#include <QObject>
#include <QDebug>
#include "plugininterface.h"
class myPlugin :public QObject, myPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "Tests.Plugin.Chiacplus.MyInterface")
    Q_INTERFACES(myPluginInterface)
public:
    myPlugin();
    void Print() Q_DECL_OVERRIDE;
private:
    int a;
    int b;
    int c;
};

#endif // MYPLUGIN_H
