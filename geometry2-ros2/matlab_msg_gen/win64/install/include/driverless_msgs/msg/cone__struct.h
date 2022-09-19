// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:msg\Cone.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__CONE__STRUCT_H_
#define DRIVERLESS_MSGS__MSG__CONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BLUE'.
enum
{
  driverless_msgs__msg__Cone__BLUE = 0
};

/// Constant 'YELLOW'.
enum
{
  driverless_msgs__msg__Cone__YELLOW = 1
};

/// Constant 'ORANGE_BIG'.
enum
{
  driverless_msgs__msg__Cone__ORANGE_BIG = 2
};

/// Constant 'ORANGE_SMALL'.
enum
{
  driverless_msgs__msg__Cone__ORANGE_SMALL = 3
};

/// Constant 'UNKNOWN'.
enum
{
  driverless_msgs__msg__Cone__UNKNOWN = 4
};

// Include directives for member types
// Member 'location'
#include "geometry_msgs/msg/point__struct.h"

// Struct defined in msg/Cone in the package driverless_msgs.
typedef struct driverless_msgs__msg__Cone
{
  geometry_msgs__msg__Point location;
  uint8_t color;
} driverless_msgs__msg__Cone;

// Struct for a sequence of driverless_msgs__msg__Cone.
typedef struct driverless_msgs__msg__Cone__Sequence
{
  driverless_msgs__msg__Cone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driverless_msgs__msg__Cone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__MSG__CONE__STRUCT_H_
