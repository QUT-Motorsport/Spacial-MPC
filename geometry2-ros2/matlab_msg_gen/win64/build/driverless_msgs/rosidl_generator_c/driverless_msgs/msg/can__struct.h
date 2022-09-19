// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:msg\Can.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__CAN__STRUCT_H_
#define DRIVERLESS_MSGS__MSG__CAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/Can in the package driverless_msgs.
typedef struct driverless_msgs__msg__Can
{
  uint32_t timestamp;
  uint32_t id;
  uint8_t id_type;
  uint8_t dlc;
  rosidl_generator_c__uint8__Sequence data;
} driverless_msgs__msg__Can;

// Struct for a sequence of driverless_msgs__msg__Can.
typedef struct driverless_msgs__msg__Can__Sequence
{
  driverless_msgs__msg__Can * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driverless_msgs__msg__Can__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__MSG__CAN__STRUCT_H_
