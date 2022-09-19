// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from driverless_msgs:msg\MPCCenterline.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "driverless_msgs/msg/mpc_centerline__rosidl_typesupport_introspection_c.h"
#include "driverless_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "driverless_msgs/msg/mpc_centerline__struct.h"


// Include directives for member types
// Member `path`
#include "driverless_msgs/msg/mpc_path_point.h"
// Member `path`
#include "driverless_msgs/msg/mpc_path_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__size_function__MPCPathPoint__path(
  const void * untyped_member)
{
  const driverless_msgs__msg__MPCPathPoint__Sequence * member =
    (const driverless_msgs__msg__MPCPathPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__get_const_function__MPCPathPoint__path(
  const void * untyped_member, size_t index)
{
  const driverless_msgs__msg__MPCPathPoint__Sequence * member =
    (const driverless_msgs__msg__MPCPathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__get_function__MPCPathPoint__path(
  void * untyped_member, size_t index)
{
  driverless_msgs__msg__MPCPathPoint__Sequence * member =
    (driverless_msgs__msg__MPCPathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__resize_function__MPCPathPoint__path(
  void * untyped_member, size_t size)
{
  driverless_msgs__msg__MPCPathPoint__Sequence * member =
    (driverless_msgs__msg__MPCPathPoint__Sequence *)(untyped_member);
  driverless_msgs__msg__MPCPathPoint__Sequence__fini(member);
  return driverless_msgs__msg__MPCPathPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__MPCCenterline_message_member_array[1] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driverless_msgs__msg__MPCCenterline, path),  // bytes offset in struct
    NULL,  // default value
    driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__size_function__MPCPathPoint__path,  // size() function pointer
    driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__get_const_function__MPCPathPoint__path,  // get_const(index) function pointer
    driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__get_function__MPCPathPoint__path,  // get(index) function pointer
    driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__resize_function__MPCPathPoint__path  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__MPCCenterline_message_members = {
  "driverless_msgs__msg",  // message namespace
  "MPCCenterline",  // message name
  1,  // number of fields
  sizeof(driverless_msgs__msg__MPCCenterline),
  driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__MPCCenterline_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__MPCCenterline_message_type_support_handle = {
  0,
  &driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__MPCCenterline_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_driverless_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, msg, MPCCenterline)() {
  driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__MPCCenterline_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, msg, MPCPathPoint)();
  if (!driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__MPCCenterline_message_type_support_handle.typesupport_identifier) {
    driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__MPCCenterline_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &driverless_msgs__msg__mpc_centerline__rosidl_typesupport_introspection_c__MPCCenterline_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
