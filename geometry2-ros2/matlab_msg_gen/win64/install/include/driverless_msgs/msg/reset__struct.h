// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:msg\Reset.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__RESET__STRUCT_H_
#define DRIVERLESS_MSGS__MSG__RESET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Reset in the package driverless_msgs.
typedef struct driverless_msgs__msg__Reset
{
  bool reset;
} driverless_msgs__msg__Reset;

// Struct for a sequence of driverless_msgs__msg__Reset.
typedef struct driverless_msgs__msg__Reset__Sequence
{
  driverless_msgs__msg__Reset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driverless_msgs__msg__Reset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__MSG__RESET__STRUCT_H_
