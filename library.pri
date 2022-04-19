QT += network

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

win32:include(zlib/zlib.pri)
!symbian:unix:LIBS += -lz

symbian:LIBS += -llibcrypto
!symbian:unix:LIBS += -lcrypto

win32 {
    exists(C:/OpenSSL-Win32) {
        LIBS += -LC:/OpenSSL-Win32/lib
        LIBS += -llibcrypto
        INCLUDEPATH += C:/OpenSSL-Win32/include
    } else {
        message(OpenSSL-Win32 1.1.1 not found. Install it from https://slproweb.com/ to C:/OpenSSL-Win32)
    }
}

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
    $$PWD/updates.cpp \
    $$PWD/qcompressor.cpp \
    $$PWD/tl.cpp \
    $$PWD/systemname.cpp

INCLUDEPATH += $$PWD
