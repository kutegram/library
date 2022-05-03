QT += network sql

load(mobilityconfig)
contains(MOBILITY_CONFIG, systeminfo) {
    CONFIG += mobility
    MOBILITY += systeminfo
    DEFINES += MOBILITY_READY=1
    message(Mobility API enabled)
} else {
    message(Mobility API not available)
}

include(qt-json/qt-json.pri)
include(thirdparty/thirdparty.pri)

symbian:LIBS += -llibcrypto

!symbian:!android:unix:LIBS += -lz
!symbian:!android:unix:LIBS += -lcrypto

android:LIBS += -lz
android:LIBS += -LC:/QtAndroid/openssl -lcrypto
android:INCLUDEPATH += C:/QtAndroid/openssl/include

win32:include(zlib/zlib.pri)
win32:LIBS += -LC:/OpenSSL-Win32/lib -llibcrypto
win32:INCLUDEPATH += C:/OpenSSL-Win32/include

HEADERS += \
    $$PWD/telegramclient.h \
    $$PWD/apivalues.default.h \
    $$PWD/apivalues.h \
    $$PWD/telegramstream.h \
    $$PWD/telegramsession.h \
    $$PWD/mtschema.h \
    $$PWD/tlschema.h \
    $$PWD/crypto.h \
    $$PWD/qcompressor.h \
    $$PWD/systemname.h

SOURCES += \
    $$PWD/telegramclient.cpp \
    $$PWD/telegramstream.cpp \
    $$PWD/telegramsession.cpp \
    $$PWD/mtschema.cpp \
    $$PWD/tlschema.cpp \
    $$PWD/crypto.cpp \
    $$PWD/mthandling.cpp \
    $$PWD/telegramapi.cpp \
    $$PWD/messageslayer.cpp \
    $$PWD/fileslayer.cpp \
    $$PWD/updateslayer.cpp \
    $$PWD/qcompressor.cpp \
    $$PWD/tl.cpp \
    $$PWD/systemname.cpp \
    $$PWD/telegramclient_db.cpp

INCLUDEPATH += $$PWD
