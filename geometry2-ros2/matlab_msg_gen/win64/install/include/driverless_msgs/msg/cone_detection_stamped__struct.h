// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:msg\ConeDetectionStamped.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__CONE_DETECTION_STAMPED__STRUCT_H_
#define DRIVERLESS_MSGS__MSG__CONE_DETECTION_STAMPED__STRUCT_H_

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
// Member 'cones'
#include "driverless_msgs/msg/cone__struct.h"
// Member 'cones_with_cov'
#include "driverless_msgs/msg/cone_with_covariance__struct.h"

// Struct defined in msg/ConeDetectionStamped in the package driverless_msgs.
typedef struct driverless_msgs__msg__ConeDetectionStamped
{
  std_msgs__msg__Header header;
  driverless_msgs__msg__Cone__Sequence cones;
  driverless_msgs__msg__ConeWithCovariance__Sequence cones_with_cov;
} driverless_msgs__msg__ConeDetectionStamped;

// Struct for a sequence of driverless_msgs__msg__ConeDetectionStamped.
typedef struct driverless_msgs__msg__ConeDetectionStamped__Sequence
{
  driverless_msgs__msg__ConeDetectionStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driverless_msgs__msg__ConeDetectionStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__MSG__CONE_DETECTION_STAMPED__STRUCT_H_
