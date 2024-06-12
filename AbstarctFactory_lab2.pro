QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    myclass.cpp \
    unit.cpp \
    classunit.cpp \
    methodunit.cpp \
    printoperatorunit.cpp \
    cppmethodunit.cpp \
    csharpmethodunit.cpp \
    javamethodunit.cpp \
    cppclassunit.cpp \
    javaclassunit.cpp \
    csharpclassunit.cpp \
    factory.cpp \
    cppfactory.cpp \
    javafactory.cpp \
    csharpfactory.cpp \
    javaprintoperatorunit.cpp \
    csharpprintoperatorunit.cpp \
    cppprintoperatorunit.cpp

HEADERS += \
    myclass.h \
    unit.h \
    classunit.h \
    methodunit.h \
    printoperatorunit.h \
    cppmethodunit.h \
    csharpmethodunit.h \
    javamethodunit.h \
    cppclassunit.h \
    javaclassunit.h \
    csharpclassunit.h \
    factory.h \
    cppfactory.h \
    javafactory.h \
    csharpfactory.h \
    javaprintoperatorunit.h \
    csharpprintoperatorunit.h \
    cppprintoperatorunit.h
