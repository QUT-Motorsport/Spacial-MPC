// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:msg\MPCCenterline.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__MPC_CENTERLINE__STRUCT_H_
#define DRIVERLESS_MSGS__MSG__MPC_CENTERLINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "driverless_msgs/msg/mpc_path_point__struct.h"

// Struct defined in msg/MPCCenterline in the package driverless_msgs.
typedef struct driverless_msgs__msg__MPCCenterline
{
  driverless_msgs__msg__MPCPathPoint__Sequence path;
} driverless_msgs__msg__MPCCenterline;

// Struct for a sequence of driverless_msgs__msg__MPCCenterline.
typedef struct driverless_msgs__msg__MPCCenterline__Sequence
{
  driverless_msgs__msg__MPCCenterline * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driverless_msgs__msg__MPCCenterline__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__MSG__MPC_CENTERLINE__STRUCT_H_
