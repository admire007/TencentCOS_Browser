QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    src/fend/uicom/breadwidget.cpp \
    src/fend/uicom/mylineedit.cpp \
    src/fend/uicom/pagewidget.cpp \
    src/fend/uilogin/logindialog.cpp \
    src/fend/uimain/bucketswidget.cpp \
    src/fend/uimain/objectswidget.cpp \
    src/fend/uimain/toolbarwidget.cpp \
    src/fend/uimain/uimain.cpp \
    src/helper/filehelper.cpp

HEADERS += \
    src/fend/uicom/breadwidget.h \
    src/fend/uicom/mylineedit.h \
    src/fend/uicom/pagewidget.h \
    src/fend/uilogin/logindialog.h \
    src/fend/uimain/bucketswidget.h \
    src/fend/uimain/objectswidget.h \
    src/fend/uimain/toolbarwidget.h \
    src/fend/uimain/uimain.h \
    src/helper/filehelper.h

FORMS += \
    src/fend/uicom/breadwidget.ui \
    src/fend/uicom/pagewidget.ui \
    src/fend/uilogin/logindialog.ui \
    src/fend/uimain/bucketswidget.ui \
    src/fend/uimain/objectswidget.ui \
    src/fend/uimain/toolbarwidget.ui \
    src/fend/uimain/uimain.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    static/imgs/logo.png \
    static/qss/default.qss

RESOURCES += \
    resource.qrc \
    resource.qrc
