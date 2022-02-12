QT += network

INCLUDEPATH += C:/OpenSSL-Win32/include

include(qt-json/qt-json.pri)
include(thirdparty/thirdparty.pri)

win32:LIBS += -LC:/OpenSSL-Win32/lib
win32:LIBS += -llibcrypto
symbian:LIBS += -llibcrypto
unix:LIBS += -lcrypto
win32:INCLUDEPATH += C:/OpenSSL-Win32/include
win32:include(zlib/zlib.pri)

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
    $$PWD/tl.h

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
    $$PWD/tl.cpp

INCLUDEPATH += $$PWD
