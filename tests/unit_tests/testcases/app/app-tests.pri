 
APP_SRC_DIR = $$PWD/../../../..

INCLUDEPATH += $$APP_SRC_DIR

HEADERS  += \
    $$PWD/test_*.h \
    $$APP_SRC_DIR/piwiktracker.h

SOURCES += \
    $$PWD/test_*.cpp \
    $$APP_SRC_DIR/piwiktracker.cpp
