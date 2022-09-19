// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from driverless_msgs:msg\ConeDetectionStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "driverless_msgs/msg/cone_detection_stamped__rosidl_typesupport_introspection_c.h"
#include "driverless_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "driverless_msgs/msg/cone_detection_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `cones`
#include "driverless_msgs/msg/cone.h"
// Member `cones`
#include "driverless_msgs/msg/cone__rosidl_typesupport_introspection_c.h"
// Member `cones_with_cov`
#include "driverless_msgs/msg/cone_with_covariance.h"
// Member `cones_with_cov`
#include "driverless_msgs/msg/cone_with_covariance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__size_function__Cone__cones(
  const void * untyped_member)
{
  const driverless_msgs__msg__Cone__Sequence * member =
    (const driverless_msgs__msg__Cone__Sequence *)(untyped_member);
  return member->size;
}

const void * driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__get_const_function__Cone__cones(
  const void * untyped_member, size_t index)
{
  const driverless_msgs__msg__Cone__Sequence * member =
    (const driverless_msgs__msg__Cone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__get_function__Cone__cones(
  void * untyped_member, size_t index)
{
  driverless_msgs__msg__Cone__Sequence * member =
    (driverless_msgs__msg__Cone__Sequence *)(untyped_member);
  return &member->data[index];
}

bool driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__resize_function__Cone__cones(
  void * untyped_member, size_t size)
{
  driverless_msgs__msg__Cone__Sequence * member =
    (driverless_msgs__msg__Cone__Sequence *)(untyped_member);
  driverless_msgs__msg__Cone__Sequence__fini(member);
  return driverless_msgs__msg__Cone__Sequence__init(member, size);
}

size_t driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__size_function__ConeWithCovariance__cones_with_cov(
  const void * untyped_member)
{
  const driverless_msgs__msg__ConeWithCovariance__Sequence * member =
    (const driverless_msgs__msg__ConeWithCovariance__Sequence *)(untyped_member);
  return member->size;
}

const void * driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__get_const_function__ConeWithCovariance__cones_with_cov(
  const void * untyped_member, size_t index)
{
  const driverless_msgs__msg__ConeWithCovariance__Sequence * member =
    (const driverless_msgs__msg__ConeWithCovariance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__get_function__ConeWithCovariance__cones_with_cov(
  void * untyped_member, size_t index)
{
  driverless_msgs__msg__ConeWithCovariance__Sequence * member =
    (driverless_msgs__msg__ConeWithCovariance__Sequence *)(untyped_member);
  return &member->data[index];
}

bool driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__resize_function__ConeWithCovariance__cones_with_cov(
  void * untyped_member, size_t size)
{
  driverless_msgs__msg__ConeWithCovariance__Sequence * member =
    (driverless_msgs__msg__ConeWithCovariance__Sequence *)(untyped_member);
  driverless_msgs__msg__ConeWithCovariance__Sequence__fini(member);
  return driverless_msgs__msg__ConeWithCovariance__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__ConeDetectionStamped_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driverless_msgs__msg__ConeDetectionStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driverless_msgs__msg__ConeDetectionStamped, cones),  // bytes offset in struct
    NULL,  // default value
    driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__size_function__Cone__cones,  // size() function pointer
    driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__get_const_function__Cone__cones,  // get_const(index) function pointer
    driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__get_function__Cone__cones,  // get(index) function pointer
    driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__resize_function__Cone__cones  // resize(index) function pointer
  },
  {
    "cones_with_cov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driverless_msgs__msg__ConeDetectionStamped, cones_with_cov),  // bytes offset in struct
    NULL,  // default value
    driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__size_function__ConeWithCovariance__cones_with_cov,  // size() function pointer
    driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__get_const_function__ConeWithCovariance__cones_with_cov,  // get_const(index) function pointer
    driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__get_function__ConeWithCovariance__cones_with_cov,  // get(index) function pointer
    driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__resize_function__ConeWithCovariance__cones_with_cov  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__ConeDetectionStamped_message_members = {
  "driverless_msgs__msg",  // message namespace
  "ConeDetectionStamped",  // message name
  3,  // number of fields
  sizeof(driverless_msgs__msg__ConeDetectionStamped),
  driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__ConeDetectionStamped_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__ConeDetectionStamped_message_type_support_handle = {
  0,
  &driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__ConeDetectionStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_driverless_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, msg, ConeDetectionStamped)() {
  driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__ConeDetectionStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__ConeDetectionStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, msg, Cone)();
  driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__ConeDetectionStamped_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, msg, ConeWithCovariance)();
  if (!driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__ConeDetectionStamped_message_type_support_handle.typesupport_identifier) {
    driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__ConeDetectionStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &driverless_msgs__msg__cone_detection_stamped__rosidl_typesupport_introspection_c__ConeDetectionStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
