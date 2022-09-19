// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:msg\PathStamped.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__PATH_STAMPED__STRUCT_H_
#define DRIVERLESS_MSGS__MSG__PATH_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'path'
#include "driverless_msgs/msg/path_point__struct.h"

// Struct defined in msg/PathStamped in the package driverless_msgs.
typedef struct driverless_msgs__msg__PathStamped
{
  std_msgs__msg__Header header;
  driverless_msgs__msg__PathPoint__Sequence path;
} driverless_msgs__msg__PathStamped;

// Struct for a sequence of driverless_msgs__msg__PathStamped.
typedef struct driverless_msgs__msg__PathStamped__Sequence
{
  driverless_msgs__msg__PathStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driverless_msgs__msg__PathStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__MSG__PATH_STAMPED__STRUCT_H_
