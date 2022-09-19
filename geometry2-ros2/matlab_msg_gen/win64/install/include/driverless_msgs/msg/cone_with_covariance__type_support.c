// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from driverless_msgs:msg\ConeWithCovariance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "driverless_msgs/msg/cone_with_covariance__rosidl_typesupport_introspection_c.h"
#include "driverless_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "driverless_msgs/msg/cone_with_covariance__struct.h"


// Include directives for member types
// Member `cone`
#include "driverless_msgs/msg/cone.h"
// Member `cone`
#include "driverless_msgs/msg/cone__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember driverless_msgs__msg__cone_with_covariance__rosidl_typesupport_introspection_c__ConeWithCovariance_message_member_array[2] = {
  {
    "cone",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driverless_msgs__msg__ConeWithCovariance, cone),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(driverless_msgs__msg__ConeWithCovariance, covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers driverless_msgs__msg__cone_with_covariance__rosidl_typesupport_introspection_c__ConeWithCovariance_message_members = {
  "driverless_msgs__msg",  // message namespace
  "ConeWithCovariance",  // message name
  2,  // number of fields
  sizeof(driverless_msgs__msg__ConeWithCovariance),
  driverless_msgs__msg__cone_with_covariance__rosidl_typesupport_introspection_c__ConeWithCovariance_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t driverless_msgs__msg__cone_with_covariance__rosidl_typesupport_introspection_c__ConeWithCovariance_message_type_support_handle = {
  0,
  &driverless_msgs__msg__cone_with_covariance__rosidl_typesupport_introspection_c__ConeWithCovariance_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_driverless_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, msg, ConeWithCovariance)() {
  driverless_msgs__msg__cone_with_covariance__rosidl_typesupport_introspection_c__ConeWithCovariance_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, msg, Cone)();
  if (!driverless_msgs__msg__cone_with_covariance__rosidl_typesupport_introspection_c__ConeWithCovariance_message_type_support_handle.typesupport_identifier) {
    driverless_msgs__msg__cone_with_covariance__rosidl_typesupport_introspection_c__ConeWithCovariance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &driverless_msgs__msg__cone_with_covariance__rosidl_typesupport_introspection_c__ConeWithCovariance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
