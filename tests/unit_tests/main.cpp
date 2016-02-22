#include <QTest>
#include <QApplication>

//tests
#include <iostream>
#include "testcases/app/test_library.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

    QCoreApplication::setOrganizationDomain("PBE");
    QCoreApplication::setOrganizationName("PBE");
    QCoreApplication::setApplicationName("PiwikTrackerTests");
    QCoreApplication::setApplicationVersion("0.1");

    int allTestsResult = 0
        + QTest::qExec(new TestLibrary(), argc, argv);

    if (allTestsResult == 0)
        qDebug() << "[Tests PASS]";
    else
        qDebug() << "[Tests FAIL]";

    return (allTestsResult != 0 )? 1 : 0;
}
