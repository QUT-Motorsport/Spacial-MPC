// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ackermann_msgs:msg\AckermannDrive.idl
// generated code does not contain a copyright notice
#include "ackermann_msgs/msg/ackermann_drive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ackermann_msgs__msg__AckermannDrive__init(ackermann_msgs__msg__AckermannDrive * msg)
{
  if (!msg) {
    return false;
  }
  // steering_angle
  // steering_angle_velocity
  // speed
  // acceleration
  // jerk
  return true;
}

void
ackermann_msgs__msg__AckermannDrive__fini(ackermann_msgs__msg__AckermannDrive * msg)
{
  if (!msg) {
    return;
  }
  // steering_angle
  // steering_angle_velocity
  // speed
  // acceleration
  // jerk
}

ackermann_msgs__msg__AckermannDrive *
ackermann_msgs__msg__AckermannDrive__create()
{
  ackermann_msgs__msg__AckermannDrive * msg = (ackermann_msgs__msg__AckermannDrive *)malloc(sizeof(ackermann_msgs__msg__AckermannDrive));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ackermann_msgs__msg__AckermannDrive));
  bool success = ackermann_msgs__msg__AckermannDrive__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ackermann_msgs__msg__AckermannDrive__destroy(ackermann_msgs__msg__AckermannDrive * msg)
{
  if (msg) {
    ackermann_msgs__msg__AckermannDrive__fini(msg);
  }
  free(msg);
}


bool
ackermann_msgs__msg__AckermannDrive__Sequence__init(ackermann_msgs__msg__AckermannDrive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ackermann_msgs__msg__AckermannDrive * data = NULL;
  if (size) {
    data = (ackermann_msgs__msg__AckermannDrive *)calloc(size, sizeof(ackermann_msgs__msg__AckermannDrive));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ackermann_msgs__msg__AckermannDrive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ackermann_msgs__msg__AckermannDrive__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ackermann_msgs__msg__AckermannDrive__Sequence__fini(ackermann_msgs__msg__AckermannDrive__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ackermann_msgs__msg__AckermannDrive__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ackermann_msgs__msg__AckermannDrive__Sequence *
ackermann_msgs__msg__AckermannDrive__Sequence__create(size_t size)
{
  ackermann_msgs__msg__AckermannDrive__Sequence * array = (ackermann_msgs__msg__AckermannDrive__Sequence *)malloc(sizeof(ackermann_msgs__msg__AckermannDrive__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ackermann_msgs__msg__AckermannDrive__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ackermann_msgs__msg__AckermannDrive__Sequence__destroy(ackermann_msgs__msg__AckermannDrive__Sequence * array)
{
  if (array) {
    ackermann_msgs__msg__AckermannDrive__Sequence__fini(array);
  }
  free(array);
}
