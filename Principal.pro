QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    imc.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    imc.h \
    mainwindow.h

FORMS += \
    imc.ui \
    mainwindow.ui

TRANSLATIONS += \
    Principal_es_EC.ts \
    Principal_it_IT.ts


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    iconos/bascula.png \
    iconos/escala.png \
    iconos/levantamiento-de-pesas.png

RESOURCES += \
    Recursos2.qrc \
    recursos.qrc
