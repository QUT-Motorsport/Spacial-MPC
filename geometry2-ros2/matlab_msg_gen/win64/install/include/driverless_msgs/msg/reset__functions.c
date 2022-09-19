// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from driverless_msgs:msg\Reset.idl
// generated code does not contain a copyright notice
#include "driverless_msgs/msg/reset__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
driverless_msgs__msg__Reset__init(driverless_msgs__msg__Reset * msg)
{
  if (!msg) {
    return false;
  }
  // reset
  return true;
}

void
driverless_msgs__msg__Reset__fini(driverless_msgs__msg__Reset * msg)
{
  if (!msg) {
    return;
  }
  // reset
}

driverless_msgs__msg__Reset *
driverless_msgs__msg__Reset__create()
{
  driverless_msgs__msg__Reset * msg = (driverless_msgs__msg__Reset *)malloc(sizeof(driverless_msgs__msg__Reset));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(driverless_msgs__msg__Reset));
  bool success = driverless_msgs__msg__Reset__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
driverless_msgs__msg__Reset__destroy(driverless_msgs__msg__Reset * msg)
{
  if (msg) {
    driverless_msgs__msg__Reset__fini(msg);
  }
  free(msg);
}


bool
driverless_msgs__msg__Reset__Sequence__init(driverless_msgs__msg__Reset__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  driverless_msgs__msg__Reset * data = NULL;
  if (size) {
    data = (driverless_msgs__msg__Reset *)calloc(size, sizeof(driverless_msgs__msg__Reset));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = driverless_msgs__msg__Reset__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        driverless_msgs__msg__Reset__fini(&data[i - 1]);
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
driverless_msgs__msg__Reset__Sequence__fini(driverless_msgs__msg__Reset__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      driverless_msgs__msg__Reset__fini(&array->data[i]);
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

driverless_msgs__msg__Reset__Sequence *
driverless_msgs__msg__Reset__Sequence__create(size_t size)
{
  driverless_msgs__msg__Reset__Sequence * array = (driverless_msgs__msg__Reset__Sequence *)malloc(sizeof(driverless_msgs__msg__Reset__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = driverless_msgs__msg__Reset__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
driverless_msgs__msg__Reset__Sequence__destroy(driverless_msgs__msg__Reset__Sequence * array)
{
  if (array) {
    driverless_msgs__msg__Reset__Sequence__fini(array);
  }
  free(array);
}
