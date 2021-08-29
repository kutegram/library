QT += network

include(qt-json/qt-json.pri)
include(cryptopp/cryptopp.pri)
include(thirdparty/thirdparty.pri)

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
    $$PWD/tlfiles.h

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
    $$PWD/tlfiles.cpp
