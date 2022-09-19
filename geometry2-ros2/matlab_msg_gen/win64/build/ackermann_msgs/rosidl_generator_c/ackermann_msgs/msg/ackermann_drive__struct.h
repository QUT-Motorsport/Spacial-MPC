// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ackermann_msgs:msg\AckermannDrive.idl
// generated code does not contain a copyright notice

#ifndef ACKERMANN_MSGS__MSG__ACKERMANN_DRIVE__STRUCT_H_
#define ACKERMANN_MSGS__MSG__ACKERMANN_DRIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AckermannDrive in the package ackermann_msgs.
typedef struct ackermann_msgs__msg__AckermannDrive
{
  float steering_angle;
  float steering_angle_velocity;
  float speed;
  float acceleration;
  float jerk;
} ackermann_msgs__msg__AckermannDrive;

// Struct for a sequence of ackermann_msgs__msg__AckermannDrive.
typedef struct ackermann_msgs__msg__AckermannDrive__Sequence
{
  ackermann_msgs__msg__AckermannDrive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ackermann_msgs__msg__AckermannDrive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACKERMANN_MSGS__MSG__ACKERMANN_DRIVE__STRUCT_H_
