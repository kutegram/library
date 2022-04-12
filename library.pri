QT += network

# load(mobilityconfig)
# contains(MOBILITY_CONFIG, systeminfo) {
#     CONFIG += mobility
#     MOBILITY += systeminfo
#     DEFINES += MOBILITY_READY=1
# } else {
#     message(Mobility API not available)
# }

include(qt-json/qt-json.pri)
include(thirdparty/thirdparty.pri)

symbian:LIBS += -llibcrypto
!symbian {
    win32:LIBS += -LC:/OpenSSL-Win32/lib
    win32:LIBS += -llibcrypto
    win32:INCLUDEPATH += C:/OpenSSL-Win32/include
    win32:include(zlib/zlib.pri)
    unix:LIBS += -lcrypto
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
