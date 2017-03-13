TEMPLATE = lib
CONFIG += plugin
QT += core
HEADERS += \
    filter.h

SOURCES += \
    filter.cpp
INCLUDEPATH += ../TestPlugin
TARGET = $$qtLibraryTarget(filterPlugin)
DESTDIR = ./plugins
