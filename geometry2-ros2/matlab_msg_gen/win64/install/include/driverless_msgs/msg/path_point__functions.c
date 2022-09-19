// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from driverless_msgs:msg\PathPoint.idl
// generated code does not contain a copyright notice
#include "driverless_msgs/msg/path_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `location`
#include "geometry_msgs/msg/point__functions.h"

bool
driverless_msgs__msg__PathPoint__init(driverless_msgs__msg__PathPoint * msg)
{
  if (!msg) {
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__init(&msg->location)) {
    driverless_msgs__msg__PathPoint__destroy(msg);
    return false;
  }
  // turn_intensity
  return true;
}

void
driverless_msgs__msg__PathPoint__fini(driverless_msgs__msg__PathPoint * msg)
{
  if (!msg) {
    return;
  }
  // location
  geometry_msgs__msg__Point__fini(&msg->location);
  // turn_intensity
}

driverless_msgs__msg__PathPoint *
driverless_msgs__msg__PathPoint__create()
{
  driverless_msgs__msg__PathPoint * msg = (driverless_msgs__msg__PathPoint *)malloc(sizeof(driverless_msgs__msg__PathPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(driverless_msgs__msg__PathPoint));
  bool success = driverless_msgs__msg__PathPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
driverless_msgs__msg__PathPoint__destroy(driverless_msgs__msg__PathPoint * msg)
{
  if (msg) {
    driverless_msgs__msg__PathPoint__fini(msg);
  }
  free(msg);
}


bool
driverless_msgs__msg__PathPoint__Sequence__init(driverless_msgs__msg__PathPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  driverless_msgs__msg__PathPoint * data = NULL;
  if (size) {
    data = (driverless_msgs__msg__PathPoint *)calloc(size, sizeof(driverless_msgs__msg__PathPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = driverless_msgs__msg__PathPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        driverless_msgs__msg__PathPoint__fini(&data[i - 1]);
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
driverless_msgs__msg__PathPoint__Sequence__fini(driverless_msgs__msg__PathPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      driverless_msgs__msg__PathPoint__fini(&array->data[i]);
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

driverless_msgs__msg__PathPoint__Sequence *
driverless_msgs__msg__PathPoint__Sequence__create(size_t size)
{
  driverless_msgs__msg__PathPoint__Sequence * array = (driverless_msgs__msg__PathPoint__Sequence *)malloc(sizeof(driverless_msgs__msg__PathPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = driverless_msgs__msg__PathPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
driverless_msgs__msg__PathPoint__Sequence__destroy(driverless_msgs__msg__PathPoint__Sequence * array)
{
  if (array) {
    driverless_msgs__msg__PathPoint__Sequence__fini(array);
  }
  free(array);
}
