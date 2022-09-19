// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from driverless_msgs:msg\RES.idl
// generated code does not contain a copyright notice
#include "driverless_msgs/msg/res__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "driverless_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "driverless_msgs/msg/res__struct.h"
#include "driverless_msgs/msg/res__functions.h"
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


// forward declare type support functions


using _RES__ros_msg_type = driverless_msgs__msg__RES;

static bool _RES__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RES__ros_msg_type * ros_message = static_cast<const _RES__ros_msg_type *>(untyped_ros_message);
  // Field name: sw_k2
  {
    cdr << (ros_message->sw_k2 ? true : false);
  }

  // Field name: bt_k3
  {
    cdr << (ros_message->bt_k3 ? true : false);
  }

  // Field name: estop
  {
    cdr << (ros_message->estop ? true : false);
  }

  // Field name: loss_of_signal_shutdown_notice
  {
    cdr << (ros_message->loss_of_signal_shutdown_notice ? true : false);
  }

  // Field name: radio_quality
  {
    cdr << ros_message->radio_quality;
  }

  return true;
}

static bool _RES__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RES__ros_msg_type * ros_message = static_cast<_RES__ros_msg_type *>(untyped_ros_message);
  // Field name: sw_k2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sw_k2 = tmp ? true : false;
  }

  // Field name: bt_k3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bt_k3 = tmp ? true : false;
  }

  // Field name: estop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->estop = tmp ? true : false;
  }

  // Field name: loss_of_signal_shutdown_notice
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->loss_of_signal_shutdown_notice = tmp ? true : false;
  }

  // Field name: radio_quality
  {
    cdr >> ros_message->radio_quality;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driverless_msgs
size_t get_serialized_size_driverless_msgs__msg__RES(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RES__ros_msg_type * ros_message = static_cast<const _RES__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sw_k2
  {
    size_t item_size = sizeof(ros_message->sw_k2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bt_k3
  {
    size_t item_size = sizeof(ros_message->bt_k3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estop
  {
    size_t item_size = sizeof(ros_message->estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loss_of_signal_shutdown_notice
  {
    size_t item_size = sizeof(ros_message->loss_of_signal_shutdown_notice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radio_quality
  {
    size_t item_size = sizeof(ros_message->radio_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RES__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_driverless_msgs__msg__RES(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driverless_msgs
size_t max_serialized_size_driverless_msgs__msg__RES(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sw_k2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bt_k3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: estop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: loss_of_signal_shutdown_notice
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radio_quality
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RES__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_driverless_msgs__msg__RES(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RES = {
  "driverless_msgs::msg",
  "RES",
  _RES__cdr_serialize,
  _RES__cdr_deserialize,
  _RES__get_serialized_size,
  _RES__max_serialized_size
};

static rosidl_message_type_support_t _RES__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RES,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, msg, RES)() {
  return &_RES__type_support;
}

#if defined(__cplusplus)
}
#endif
