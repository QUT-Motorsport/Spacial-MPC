// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:msg\PathPoint.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__PATH_POINT__STRUCT_H_
#define DRIVERLESS_MSGS__MSG__PATH_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'location'
#include "geometry_msgs/msg/point__struct.h"

// Struct defined in msg/PathPoint in the package driverless_msgs.
typedef struct driverless_msgs__msg__PathPoint
{
  geometry_msgs__msg__Point location;
  float turn_intensity;
} driverless_msgs__msg__PathPoint;

// Struct for a sequence of driverless_msgs__msg__PathPoint.
typedef struct driverless_msgs__msg__PathPoint__Sequence
{
  driverless_msgs__msg__PathPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driverless_msgs__msg__PathPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__MSG__PATH_POINT__STRUCT_H_
