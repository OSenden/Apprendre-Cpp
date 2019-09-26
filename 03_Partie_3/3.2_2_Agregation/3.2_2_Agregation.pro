TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        equilibreuse.cpp \
        main.cpp \
        microdacqlite.cpp \
        moteur.cpp

HEADERS += \
    equilibreuse.h \
    microdacqlite.h \
    moteur.h
