#-------------------------------------------------
#
# Project created by QtCreator 2015-08-27T15:28:17
#
#-------------------------------------------------

QT       += core gui

TARGET = wot
TEMPLATE = lib
CONFIG += plugin

DESTDIR = $$[QT_INSTALL_PLUGINS]/generic

SOURCES += genericplugin.cpp

HEADERS += genericplugin.h
OTHER_FILES += wot.json

unix {
    target.path = /usr/lib
    INSTALLS += target
}
