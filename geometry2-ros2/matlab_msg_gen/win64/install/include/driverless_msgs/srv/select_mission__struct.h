// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:srv\SelectMission.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__SRV__SELECT_MISSION__STRUCT_H_
#define DRIVERLESS_MSGS__SRV__SELECT_MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/SelectMission in the package driverless_msgs.
typedef struct driverless_msgs__srv__SelectMission_Request
{
  rosidl_generator_c__String mission;
} driverless_msgs__srv__SelectMission_Request;

// Struct for a sequence of driverless_msgs__srv__SelectMission_Request.
typedef struct driverless_msgs__srv__SelectMission_Request__Sequence
{
  driverless_msgs__srv__SelectMission_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driverless_msgs__srv__SelectMission_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'confirmation'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/SelectMission in the package driverless_msgs.
typedef struct driverless_msgs__srv__SelectMission_Response
{
  rosidl_generator_c__String confirmation;
} driverless_msgs__srv__SelectMission_Response;

// Struct for a sequence of driverless_msgs__srv__SelectMission_Response.
typedef struct driverless_msgs__srv__SelectMission_Response__Sequence
{
  driverless_msgs__srv__SelectMission_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driverless_msgs__srv__SelectMission_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__SRV__SELECT_MISSION__STRUCT_H_
