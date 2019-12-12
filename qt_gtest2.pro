TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    swarmitem.cpp \
    test_swarmitem.cpp


INCLUDEPATH += \
            /usr/src/gtest/include/gtest \
            /usr/src/gmock/include/gmock

LIBS += -lgtest -L/usr/local/lib/googletest -lpthread


HEADERS += \
    swarmitem.h

