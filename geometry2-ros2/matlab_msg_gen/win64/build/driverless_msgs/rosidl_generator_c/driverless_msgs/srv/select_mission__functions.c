// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from driverless_msgs:srv\SelectMission.idl
// generated code does not contain a copyright notice
#include "driverless_msgs/srv/select_mission__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `mission`
#include "rosidl_generator_c/string_functions.h"

bool
driverless_msgs__srv__SelectMission_Request__init(driverless_msgs__srv__SelectMission_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mission
  if (!rosidl_generator_c__String__init(&msg->mission)) {
    driverless_msgs__srv__SelectMission_Request__destroy(msg);
    return false;
  }
  return true;
}

void
driverless_msgs__srv__SelectMission_Request__fini(driverless_msgs__srv__SelectMission_Request * msg)
{
  if (!msg) {
    return;
  }
  // mission
  rosidl_generator_c__String__fini(&msg->mission);
}

driverless_msgs__srv__SelectMission_Request *
driverless_msgs__srv__SelectMission_Request__create()
{
  driverless_msgs__srv__SelectMission_Request * msg = (driverless_msgs__srv__SelectMission_Request *)malloc(sizeof(driverless_msgs__srv__SelectMission_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(driverless_msgs__srv__SelectMission_Request));
  bool success = driverless_msgs__srv__SelectMission_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
driverless_msgs__srv__SelectMission_Request__destroy(driverless_msgs__srv__SelectMission_Request * msg)
{
  if (msg) {
    driverless_msgs__srv__SelectMission_Request__fini(msg);
  }
  free(msg);
}


bool
driverless_msgs__srv__SelectMission_Request__Sequence__init(driverless_msgs__srv__SelectMission_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  driverless_msgs__srv__SelectMission_Request * data = NULL;
  if (size) {
    data = (driverless_msgs__srv__SelectMission_Request *)calloc(size, sizeof(driverless_msgs__srv__SelectMission_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = driverless_msgs__srv__SelectMission_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        driverless_msgs__srv__SelectMission_Request__fini(&data[i - 1]);
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
driverless_msgs__srv__SelectMission_Request__Sequence__fini(driverless_msgs__srv__SelectMission_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      driverless_msgs__srv__SelectMission_Request__fini(&array->data[i]);
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

driverless_msgs__srv__SelectMission_Request__Sequence *
driverless_msgs__srv__SelectMission_Request__Sequence__create(size_t size)
{
  driverless_msgs__srv__SelectMission_Request__Sequence * array = (driverless_msgs__srv__SelectMission_Request__Sequence *)malloc(sizeof(driverless_msgs__srv__SelectMission_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = driverless_msgs__srv__SelectMission_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
driverless_msgs__srv__SelectMission_Request__Sequence__destroy(driverless_msgs__srv__SelectMission_Request__Sequence * array)
{
  if (array) {
    driverless_msgs__srv__SelectMission_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `confirmation`
// already included above
// #include "rosidl_generator_c/string_functions.h"

bool
driverless_msgs__srv__SelectMission_Response__init(driverless_msgs__srv__SelectMission_Response * msg)
{
  if (!msg) {
    return false;
  }
  // confirmation
  if (!rosidl_generator_c__String__init(&msg->confirmation)) {
    driverless_msgs__srv__SelectMission_Response__destroy(msg);
    return false;
  }
  return true;
}

void
driverless_msgs__srv__SelectMission_Response__fini(driverless_msgs__srv__SelectMission_Response * msg)
{
  if (!msg) {
    return;
  }
  // confirmation
  rosidl_generator_c__String__fini(&msg->confirmation);
}

driverless_msgs__srv__SelectMission_Response *
driverless_msgs__srv__SelectMission_Response__create()
{
  driverless_msgs__srv__SelectMission_Response * msg = (driverless_msgs__srv__SelectMission_Response *)malloc(sizeof(driverless_msgs__srv__SelectMission_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(driverless_msgs__srv__SelectMission_Response));
  bool success = driverless_msgs__srv__SelectMission_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
driverless_msgs__srv__SelectMission_Response__destroy(driverless_msgs__srv__SelectMission_Response * msg)
{
  if (msg) {
    driverless_msgs__srv__SelectMission_Response__fini(msg);
  }
  free(msg);
}


bool
driverless_msgs__srv__SelectMission_Response__Sequence__init(driverless_msgs__srv__SelectMission_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  driverless_msgs__srv__SelectMission_Response * data = NULL;
  if (size) {
    data = (driverless_msgs__srv__SelectMission_Response *)calloc(size, sizeof(driverless_msgs__srv__SelectMission_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = driverless_msgs__srv__SelectMission_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        driverless_msgs__srv__SelectMission_Response__fini(&data[i - 1]);
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
driverless_msgs__srv__SelectMission_Response__Sequence__fini(driverless_msgs__srv__SelectMission_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      driverless_msgs__srv__SelectMission_Response__fini(&array->data[i]);
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

driverless_msgs__srv__SelectMission_Response__Sequence *
driverless_msgs__srv__SelectMission_Response__Sequence__create(size_t size)
{
  driverless_msgs__srv__SelectMission_Response__Sequence * array = (driverless_msgs__srv__SelectMission_Response__Sequence *)malloc(sizeof(driverless_msgs__srv__SelectMission_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = driverless_msgs__srv__SelectMission_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
driverless_msgs__srv__SelectMission_Response__Sequence__destroy(driverless_msgs__srv__SelectMission_Response__Sequence * array)
{
  if (array) {
    driverless_msgs__srv__SelectMission_Response__Sequence__fini(array);
  }
  free(array);
}
