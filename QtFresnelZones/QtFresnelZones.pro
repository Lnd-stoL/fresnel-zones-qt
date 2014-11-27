#-------------------------------------------------
#
# Project created by QtCreator 2014-10-14T22:36:12
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtFresnelZones
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
    qcustomplot.cpp \
    spiralgraph.cpp \
    zonesgraph.cpp \
    titlewindow.cpp \
    intensitygraphwindow.cpp \
    complex.cpp \
    fresnel.cpp \
    fontscalablelabel.cpp \
    fontscalablespinbox.cpp \
    fontscalablepushbutton.cpp \
    amplitudeplatewindow.cpp \
    colortransform.cpp \
    intensityplot.cpp \
    hidpiscaler.cpp \
    phaseplatewindow.cpp \
    schemegraph.cpp \
    drawer.cpp \
    introwindow.cpp

HEADERS  += \
    qcustomplot.h \
    spiralgraph.h \
    zonesgraph.h \
    titlewindow.h \
    intensitygraphwindow.h \
    complex.h \
    fresnel.h \
    fontscalablelabel.h \
    fontscalablespinbox.h \
    fontscalablepushbutton.h \
    amplitudeplatewindow.h \
    colortransform.h \
    qvectormax.h \
    intensityplot.h \
    hidpiscaler.h \
    phaseplatewindow.h \
    schemegraph.h \
    drawer.h \
    introwindow.h

FORMS    += \
    titlewindow.ui \
    intensitygraphwindow.ui \
    amplitudeplatewindow.ui \
    phaseplatewindow.ui \
    introwindow.ui
