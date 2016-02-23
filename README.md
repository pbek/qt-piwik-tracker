# [Qt C++ Piwik Tracker Library](https://github.com/pbek/qt-piwik-tracker)
[![Build Status Linux/OS X](https://travis-ci.org/pbek/qt-piwik-tracker.svg?branch=master)](https://travis-ci.org/pbek/qt-piwik-tracker)
[![Build Status Windows](https://ci.appveyor.com/api/projects/status/github/pbek/qt-piwik-tracker)](https://ci.appveyor.com/project/pbek/qt-piwik-tracker)

PiwikTracker is a C++ Qt 5 library for tracking with the open-source analytics 
platform [Piwik](http://piwik.org/).

## Features

- sending visits
- sending events
- sending pings
- custom dimensions can be sent along with the requests 
- language, screen resolution and operating system will be tracked automatically
- client id will be generated and stored automatically

## How to use this library

- checkout the git repository
- include [piwiktracker.pri](https://github.com/pbek/qt-piwik-tracker/blob/master/piwiktracker.pri) 
  to your project like this: `include (qt-piwik-tracker/piwiktracker.pri)`
- include `piwiktracker.h` in your `.cpp` file
- use the library to talk to your Piwik server

```cpp
// the 3rd parameter is the site id
PiwikTracker *piwikTracker = new PiwikTracker(qApp, QUrl("https://yourserver"), 1);
piwikTracker->setCustomDimension(1, "some dimension");
piwikTracker->sendVisit("my/path");
```
