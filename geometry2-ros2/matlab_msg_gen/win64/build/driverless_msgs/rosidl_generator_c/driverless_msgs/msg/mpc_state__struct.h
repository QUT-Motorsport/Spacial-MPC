// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:msg\MPCState.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__MPC_STATE__STRUCT_H_
#define DRIVERLESS_MSGS__MSG__MPC_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 't'
#include "builtin_interfaces/msg/time__struct.h"

// Struct defined in msg/MPCState in the package driverless_msgs.
typedef struct driverless_msgs__msg__MPCState
{
  double s;
  double ey;
  double etheta;
  double otheta_dot;
  double vx;
  double vy;
  double d;
  builtin_interfaces__msg__Time t;
} driverless_msgs__msg__MPCState;

// Struct for a sequence of driverless_msgs__msg__MPCState.
typedef struct driverless_msgs__msg__MPCState__Sequence
{
  driverless_msgs__msg__MPCState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driverless_msgs__msg__MPCState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__MSG__MPC_STATE__STRUCT_H_
