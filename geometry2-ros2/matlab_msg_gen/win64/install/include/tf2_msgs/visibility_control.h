#ifndef TF2_MSGS__VISIBILITY_CONTROL_H_
#define TF2_MSGS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define TF2_MSGS_EXPORT __attribute__ ((dllexport))
    #define TF2_MSGS_IMPORT __attribute__ ((dllimport))
  #else
    #define TF2_MSGS_EXPORT __declspec(dllexport)
    #define TF2_MSGS_IMPORT __declspec(dllimport)
  #endif
  #ifdef TF2_MSGS_BUILDING_LIBRARY
    #define TF2_MSGS_PUBLIC TF2_MSGS_EXPORT
  #else
    #define TF2_MSGS_PUBLIC TF2_MSGS_IMPORT
  #endif
  #define TF2_MSGS_PUBLIC_TYPE TF2_MSGS_PUBLIC
  #define TF2_MSGS_LOCAL
#else
  #define TF2_MSGS_EXPORT __attribute__ ((visibility("default")))
  #define TF2_MSGS_IMPORT
  #if __GNUC__ >= 4
    #define TF2_MSGS_PUBLIC __attribute__ ((visibility("default")))
    #define TF2_MSGS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define TF2_MSGS_PUBLIC
    #define TF2_MSGS_LOCAL
  #endif
  #define TF2_MSGS_PUBLIC_TYPE
#endif
#endif  // TF2_MSGS__VISIBILITY_CONTROL_H_
// Generated 03-Sep-2022 13:38:56
 