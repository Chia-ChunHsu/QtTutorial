TEMPLATE = lib
CONFIG += plugin
QT += core
HEADERS += \
    myplugin.h

SOURCES += \
    myplugin.cpp

INCLUDEPATH += ../TestPlugin
TARGET = $$qtLibraryTarget(myPlugin)
DESTDIR = ./plugins
