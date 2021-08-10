include(qt-json/qt-json.pri)
include(cryptopp/cryptopp.pri)
include(thirdparty/thirdparty.pri)

HEADERS += \
    $$PWD/telegramclient.h \
    $$PWD/apivalues.h

SOURCES += \
    $$PWD/telegramclient.cpp
