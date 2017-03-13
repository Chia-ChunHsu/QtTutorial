#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H
#include <QObject>
class myPluginInterface
{
public:
    virtual ~myPluginInterface(){}
    virtual void Print() = 0 ;
};
#define MyInterface_idd "Tests.Plugin.Chiacplus.MyInterface"
Q_DECLARE_INTERFACE(myPluginInterface,MyInterface_idd)
#endif // PLUGININTERFACE_H
