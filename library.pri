QT += network

INCLUDEPATH += C:/OpenSSL-Win32/include

include(qt-json/qt-json.pri)
include(thirdparty/thirdparty.pri)

win32:LIBS += -LC:/OpenSSL-Win32/lib -llibcrypto
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
    $$PWD/tlmessages.h \
    $$PWD/tlfiles.h \
    $$PWD/qcompressor.h

SOURCES += \
    $$PWD/telegramclient.cpp \
    $$PWD/telegramstream.cpp \
    $$PWD/telegramsession.cpp \
    $$PWD/mtschema.cpp \
    $$PWD/tlschema.cpp \
    $$PWD/crypto.cpp \
    $$PWD/mthandling.cpp \
    $$PWD/telegramapi.cpp \
    $$PWD/tlmessages.cpp \
    $$PWD/tlfiles.cpp \
    $$PWD/updates.cpp \
    $$PWD/qcompressor.cpp

INCLUDEPATH += $$PWD
