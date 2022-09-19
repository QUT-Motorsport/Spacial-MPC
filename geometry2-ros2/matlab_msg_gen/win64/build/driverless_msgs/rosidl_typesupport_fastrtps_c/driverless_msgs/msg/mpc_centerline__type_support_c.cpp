// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from driverless_msgs:msg\MPCCenterline.idl
// generated code does not contain a copyright notice
#include "driverless_msgs/msg/mpc_centerline__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "driverless_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "driverless_msgs/msg/mpc_centerline__struct.h"
#include "driverless_msgs/msg/mpc_centerline__functions.h"
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

#include "driverless_msgs/msg/mpc_path_point__functions.h"  // path

// forward declare type support functions
size_t get_serialized_size_driverless_msgs__msg__MPCPathPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_driverless_msgs__msg__MPCPathPoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, msg, MPCPathPoint)();


using _MPCCenterline__ros_msg_type = driverless_msgs__msg__MPCCenterline;

static bool _MPCCenterline__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MPCCenterline__ros_msg_type * ros_message = static_cast<const _MPCCenterline__ros_msg_type *>(untyped_ros_message);
  // Field name: path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, msg, MPCPathPoint
      )()->data);
    size_t size = ros_message->path.size;
    auto array_ptr = ros_message->path.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _MPCCenterline__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MPCCenterline__ros_msg_type * ros_message = static_cast<_MPCCenterline__ros_msg_type *>(untyped_ros_message);
  // Field name: path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, msg, MPCPathPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->path.data) {
      driverless_msgs__msg__MPCPathPoint__Sequence__fini(&ros_message->path);
    }
    if (!driverless_msgs__msg__MPCPathPoint__Sequence__init(&ros_message->path, size)) {
      return "failed to create array for field 'path'";
    }
    auto array_ptr = ros_message->path.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driverless_msgs
size_t get_serialized_size_driverless_msgs__msg__MPCCenterline(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MPCCenterline__ros_msg_type * ros_message = static_cast<const _MPCCenterline__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name path
  {
    size_t array_size = ros_message->path.size;
    auto array_ptr = ros_message->path.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_driverless_msgs__msg__MPCPathPoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MPCCenterline__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_driverless_msgs__msg__MPCCenterline(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driverless_msgs
size_t max_serialized_size_driverless_msgs__msg__MPCCenterline(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: path
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_driverless_msgs__msg__MPCPathPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MPCCenterline__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_driverless_msgs__msg__MPCCenterline(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MPCCenterline = {
  "driverless_msgs::msg",
  "MPCCenterline",
  _MPCCenterline__cdr_serialize,
  _MPCCenterline__cdr_deserialize,
  _MPCCenterline__get_serialized_size,
  _MPCCenterline__max_serialized_size
};

static rosidl_message_type_support_t _MPCCenterline__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MPCCenterline,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, msg, MPCCenterline)() {
  return &_MPCCenterline__type_support;
}

#if defined(__cplusplus)
}
#endif
