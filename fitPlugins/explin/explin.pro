QMAKE_PROJECT_DEPTH = 0
linux-g++-64: libsuff=64

include(../../config.pri)
TARGET = explin
TEMPLATE = lib
CONFIG += dll
CONFIG -= qt
CONFIG += release
DESTDIR = ../

INSTALLS += target
unix {
    contains(CONFIG, flatpak): target.path = /app/lib$${libsuff}/AlphaPlot/plugins
    else: target.path = /usr/lib$${libsuff}/AlphaPlot/plugins
}
win32: target.path = ../../output/plugins


unix:LIBS += -L/usr/lib$${libsuff} -lgsl -lgslcblas
#unix:LIBS += /usr/lib/libgsl.a /usr/lib/libgslcblas.a

SOURCES = explin.c

