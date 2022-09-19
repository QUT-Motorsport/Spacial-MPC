// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from driverless_msgs:msg\PathStamped.idl
// generated code does not contain a copyright notice
#include "driverless_msgs/msg/path_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `path`
#include "driverless_msgs/msg/path_point__functions.h"

bool
driverless_msgs__msg__PathStamped__init(driverless_msgs__msg__PathStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    driverless_msgs__msg__PathStamped__destroy(msg);
    return false;
  }
  // path
  if (!driverless_msgs__msg__PathPoint__Sequence__init(&msg->path, 0)) {
    driverless_msgs__msg__PathStamped__destroy(msg);
    return false;
  }
  return true;
}

void
driverless_msgs__msg__PathStamped__fini(driverless_msgs__msg__PathStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // path
  driverless_msgs__msg__PathPoint__Sequence__fini(&msg->path);
}

driverless_msgs__msg__PathStamped *
driverless_msgs__msg__PathStamped__create()
{
  driverless_msgs__msg__PathStamped * msg = (driverless_msgs__msg__PathStamped *)malloc(sizeof(driverless_msgs__msg__PathStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(driverless_msgs__msg__PathStamped));
  bool success = driverless_msgs__msg__PathStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
driverless_msgs__msg__PathStamped__destroy(driverless_msgs__msg__PathStamped * msg)
{
  if (msg) {
    driverless_msgs__msg__PathStamped__fini(msg);
  }
  free(msg);
}


bool
driverless_msgs__msg__PathStamped__Sequence__init(driverless_msgs__msg__PathStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  driverless_msgs__msg__PathStamped * data = NULL;
  if (size) {
    data = (driverless_msgs__msg__PathStamped *)calloc(size, sizeof(driverless_msgs__msg__PathStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = driverless_msgs__msg__PathStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        driverless_msgs__msg__PathStamped__fini(&data[i - 1]);
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
driverless_msgs__msg__PathStamped__Sequence__fini(driverless_msgs__msg__PathStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      driverless_msgs__msg__PathStamped__fini(&array->data[i]);
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

driverless_msgs__msg__PathStamped__Sequence *
driverless_msgs__msg__PathStamped__Sequence__create(size_t size)
{
  driverless_msgs__msg__PathStamped__Sequence * array = (driverless_msgs__msg__PathStamped__Sequence *)malloc(sizeof(driverless_msgs__msg__PathStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = driverless_msgs__msg__PathStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
driverless_msgs__msg__PathStamped__Sequence__destroy(driverless_msgs__msg__PathStamped__Sequence * array)
{
  if (array) {
    driverless_msgs__msg__PathStamped__Sequence__fini(array);
  }
  free(array);
}
