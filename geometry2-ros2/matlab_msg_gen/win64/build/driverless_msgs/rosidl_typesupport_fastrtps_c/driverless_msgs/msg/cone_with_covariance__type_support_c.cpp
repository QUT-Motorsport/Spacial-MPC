// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from driverless_msgs:msg\ConeWithCovariance.idl
// generated code does not contain a copyright notice
#include "driverless_msgs/msg/cone_with_covariance__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "driverless_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "driverless_msgs/msg/cone_with_covariance__struct.h"
#include "driverless_msgs/msg/cone_with_covariance__functions.h"
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

#include "driverless_msgs/msg/cone__functions.h"  // cone

// forward declare type support functions
size_t get_serialized_size_driverless_msgs__msg__Cone(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_driverless_msgs__msg__Cone(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, msg, Cone)();


using _ConeWithCovariance__ros_msg_type = driverless_msgs__msg__ConeWithCovariance;

static bool _ConeWithCovariance__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConeWithCovariance__ros_msg_type * ros_message = static_cast<const _ConeWithCovariance__ros_msg_type *>(untyped_ros_message);
  // Field name: cone
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, msg, Cone
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cone, cdr))
    {
      return false;
    }
  }

  // Field name: covariance
  {
    size_t size = 4;
    auto array_ptr = ros_message->covariance;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ConeWithCovariance__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConeWithCovariance__ros_msg_type * ros_message = static_cast<_ConeWithCovariance__ros_msg_type *>(untyped_ros_message);
  // Field name: cone
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, msg, Cone
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cone))
    {
      return false;
    }
  }

  // Field name: covariance
  {
    size_t size = 4;
    auto array_ptr = ros_message->covariance;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driverless_msgs
size_t get_serialized_size_driverless_msgs__msg__ConeWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConeWithCovariance__ros_msg_type * ros_message = static_cast<const _ConeWithCovariance__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cone

  current_alignment += get_serialized_size_driverless_msgs__msg__Cone(
    &(ros_message->cone), current_alignment);
  // field.name covariance
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->covariance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConeWithCovariance__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_driverless_msgs__msg__ConeWithCovariance(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driverless_msgs
size_t max_serialized_size_driverless_msgs__msg__ConeWithCovariance(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cone
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_driverless_msgs__msg__Cone(
        full_bounded, current_alignment);
    }
  }
  // member: covariance
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ConeWithCovariance__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_driverless_msgs__msg__ConeWithCovariance(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConeWithCovariance = {
  "driverless_msgs::msg",
  "ConeWithCovariance",
  _ConeWithCovariance__cdr_serialize,
  _ConeWithCovariance__cdr_deserialize,
  _ConeWithCovariance__get_serialized_size,
  _ConeWithCovariance__max_serialized_size
};

static rosidl_message_type_support_t _ConeWithCovariance__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConeWithCovariance,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, msg, ConeWithCovariance)() {
  return &_ConeWithCovariance__type_support;
}

#if defined(__cplusplus)
}
#endif
