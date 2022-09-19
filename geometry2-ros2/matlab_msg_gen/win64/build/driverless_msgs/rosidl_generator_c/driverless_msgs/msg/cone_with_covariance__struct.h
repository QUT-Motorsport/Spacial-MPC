// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:msg\ConeWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__CONE_WITH_COVARIANCE__STRUCT_H_
#define DRIVERLESS_MSGS__MSG__CONE_WITH_COVARIANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cone'
#include "driverless_msgs/msg/cone__struct.h"

// Struct defined in msg/ConeWithCovariance in the package driverless_msgs.
typedef struct driverless_msgs__msg__ConeWithCovariance
{
  driverless_msgs__msg__Cone cone;
  double covariance[4];
} driverless_msgs__msg__ConeWithCovariance;

// Struct for a sequence of driverless_msgs__msg__ConeWithCovariance.
typedef struct driverless_msgs__msg__ConeWithCovariance__Sequence
{
  driverless_msgs__msg__ConeWithCovariance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driverless_msgs__msg__ConeWithCovariance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__MSG__CONE_WITH_COVARIANCE__STRUCT_H_
