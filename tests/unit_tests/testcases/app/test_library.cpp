#include "test_library.h"

#include <QtTest>

#include "piwiktracker.h"

void TestLibrary::initTestCase() {
    _piwikTracker = new PiwikTracker(qApp, QUrl("http://dummyurl"), 1);
    _piwikTracker->setCustomDimension(1, QString("1.0"));
}

void TestLibrary::testSendVisit() {
    _piwikTracker->sendVisit("test/visit", "test");
    QVERIFY(true);
}

void TestLibrary::testSendEvent() {
    _piwikTracker->sendEvent("test/event", "test", "test", "test", 10);
    QVERIFY(true);
}
