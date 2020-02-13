#pragma once

#include <QObject>

#include "piwiktracker.h"

class TestLibrary : public QObject {
    Q_OBJECT
   private:
    PiwikTracker *_piwikTracker;

   private Q_SLOTS:
    void initTestCase();
    void testSendEvent();
    void testSendVisit();
};
