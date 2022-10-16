#ifndef DRIVERLESS_MSGS__VISIBILITY_CONTROL_H_
#define DRIVERLESS_MSGS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define DRIVERLESS_MSGS_EXPORT __attribute__ ((dllexport))
    #define DRIVERLESS_MSGS_IMPORT __attribute__ ((dllimport))
  #else
    #define DRIVERLESS_MSGS_EXPORT __declspec(dllexport)
    #define DRIVERLESS_MSGS_IMPORT __declspec(dllimport)
  #endif
  #ifdef DRIVERLESS_MSGS_BUILDING_LIBRARY
    #define DRIVERLESS_MSGS_PUBLIC DRIVERLESS_MSGS_EXPORT
  #else
    #define DRIVERLESS_MSGS_PUBLIC DRIVERLESS_MSGS_IMPORT
  #endif
  #define DRIVERLESS_MSGS_PUBLIC_TYPE DRIVERLESS_MSGS_PUBLIC
  #define DRIVERLESS_MSGS_LOCAL
#else
  #define DRIVERLESS_MSGS_EXPORT __attribute__ ((visibility("default")))
  #define DRIVERLESS_MSGS_IMPORT
  #if __GNUC__ >= 4
    #define DRIVERLESS_MSGS_PUBLIC __attribute__ ((visibility("default")))
    #define DRIVERLESS_MSGS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define DRIVERLESS_MSGS_PUBLIC
    #define DRIVERLESS_MSGS_LOCAL
  #endif
  #define DRIVERLESS_MSGS_PUBLIC_TYPE
#endif
#endif  // DRIVERLESS_MSGS__VISIBILITY_CONTROL_H_
// Generated 05-Oct-2022 16:10:28
 