// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from driverless_msgs:msg\MPCPathPoint.idl
// generated code does not contain a copyright notice
#include "driverless_msgs/msg/mpc_path_point__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "driverless_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "driverless_msgs/msg/mpc_path_point__struct.h"
#include "driverless_msgs/msg/mpc_path_point__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/point__functions.h"  // location

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_driverless_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_driverless_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_driverless_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _MPCPathPoint__ros_msg_type = driverless_msgs__msg__MPCPathPoint;

static bool _MPCPathPoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MPCPathPoint__ros_msg_type * ros_message = static_cast<const _MPCPathPoint__ros_msg_type *>(untyped_ros_message);
  // Field name: location
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->location, cdr))
    {
      return false;
    }
  }

  // Field name: track_angle
  {
    cdr << ros_message->track_angle;
  }

  // Field name: curvature
  {
    cdr << ros_message->curvature;
  }

  // Field name: s
  {
    cdr << ros_message->s;
  }

  return true;
}

static bool _MPCPathPoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MPCPathPoint__ros_msg_type * ros_message = static_cast<_MPCPathPoint__ros_msg_type *>(untyped_ros_message);
  // Field name: location
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->location))
    {
      return false;
    }
  }

  // Field name: track_angle
  {
    cdr >> ros_message->track_angle;
  }

  // Field name: curvature
  {
    cdr >> ros_message->curvature;
  }

  // Field name: s
  {
    cdr >> ros_message->s;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driverless_msgs
size_t get_serialized_size_driverless_msgs__msg__MPCPathPoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MPCPathPoint__ros_msg_type * ros_message = static_cast<const _MPCPathPoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name location

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->location), current_alignment);
  // field.name track_angle
  {
    size_t item_size = sizeof(ros_message->track_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curvature
  {
    size_t item_size = sizeof(ros_message->curvature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name s
  {
    size_t item_size = sizeof(ros_message->s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MPCPathPoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_driverless_msgs__msg__MPCPathPoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driverless_msgs
size_t max_serialized_size_driverless_msgs__msg__MPCPathPoint(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: location
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }
  // member: track_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: curvature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MPCPathPoint__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_driverless_msgs__msg__MPCPathPoint(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MPCPathPoint = {
  "driverless_msgs::msg",
  "MPCPathPoint",
  _MPCPathPoint__cdr_serialize,
  _MPCPathPoint__cdr_deserialize,
  _MPCPathPoint__get_serialized_size,
  _MPCPathPoint__max_serialized_size
};

static rosidl_message_type_support_t _MPCPathPoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MPCPathPoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, msg, MPCPathPoint)() {
  return &_MPCPathPoint__type_support;
}

#if defined(__cplusplus)
}
#endif
