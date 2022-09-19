// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:msg\MPCPathPoint.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__MPC_PATH_POINT__STRUCT_H_
#define DRIVERLESS_MSGS__MSG__MPC_PATH_POINT__STRUCT_H_

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

// Struct defined in msg/MPCPathPoint in the package driverless_msgs.
typedef struct driverless_msgs__msg__MPCPathPoint
{
  geometry_msgs__msg__Point location;
  double track_angle;
  double curvature;
  double s;
} driverless_msgs__msg__MPCPathPoint;

// Struct for a sequence of driverless_msgs__msg__MPCPathPoint.
typedef struct driverless_msgs__msg__MPCPathPoint__Sequence
{
  driverless_msgs__msg__MPCPathPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driverless_msgs__msg__MPCPathPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__MSG__MPC_PATH_POINT__STRUCT_H_
