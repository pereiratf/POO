QT += core
QT -= gui

CONFIG += c++11

TARGET = cliente_endereco
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    cliente.cpp \
    endereco.cpp

HEADERS += \
    cliente.h \
    endereco.h
