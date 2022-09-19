// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:msg\RES.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__RES__STRUCT_H_
#define DRIVERLESS_MSGS__MSG__RES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RES in the package driverless_msgs.
typedef struct driverless_msgs__msg__RES
{
  bool sw_k2;
  bool bt_k3;
  bool estop;
  bool loss_of_signal_shutdown_notice;
  uint8_t radio_quality;
} driverless_msgs__msg__RES;

// Struct for a sequence of driverless_msgs__msg__RES.
typedef struct driverless_msgs__msg__RES__Sequence
{
  driverless_msgs__msg__RES * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driverless_msgs__msg__RES__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__MSG__RES__STRUCT_H_
