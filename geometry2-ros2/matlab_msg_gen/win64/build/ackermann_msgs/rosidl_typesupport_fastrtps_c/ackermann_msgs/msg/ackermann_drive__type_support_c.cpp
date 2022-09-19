// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ackermann_msgs:msg\AckermannDrive.idl
// generated code does not contain a copyright notice
#include "ackermann_msgs/msg/ackermann_drive__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ackermann_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ackermann_msgs/msg/ackermann_drive__struct.h"
#include "ackermann_msgs/msg/ackermann_drive__functions.h"
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


using _AckermannDrive__ros_msg_type = ackermann_msgs__msg__AckermannDrive;

static bool _AckermannDrive__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AckermannDrive__ros_msg_type * ros_message = static_cast<const _AckermannDrive__ros_msg_type *>(untyped_ros_message);
  // Field name: steering_angle
  {
    cdr << ros_message->steering_angle;
  }

  // Field name: steering_angle_velocity
  {
    cdr << ros_message->steering_angle_velocity;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: acceleration
  {
    cdr << ros_message->acceleration;
  }

  // Field name: jerk
  {
    cdr << ros_message->jerk;
  }

  return true;
}

static bool _AckermannDrive__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AckermannDrive__ros_msg_type * ros_message = static_cast<_AckermannDrive__ros_msg_type *>(untyped_ros_message);
  // Field name: steering_angle
  {
    cdr >> ros_message->steering_angle;
  }

  // Field name: steering_angle_velocity
  {
    cdr >> ros_message->steering_angle_velocity;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: acceleration
  {
    cdr >> ros_message->acceleration;
  }

  // Field name: jerk
  {
    cdr >> ros_message->jerk;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ackermann_msgs
size_t get_serialized_size_ackermann_msgs__msg__AckermannDrive(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AckermannDrive__ros_msg_type * ros_message = static_cast<const _AckermannDrive__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name steering_angle
  {
    size_t item_size = sizeof(ros_message->steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle_velocity
  {
    size_t item_size = sizeof(ros_message->steering_angle_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration
  {
    size_t item_size = sizeof(ros_message->acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name jerk
  {
    size_t item_size = sizeof(ros_message->jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AckermannDrive__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ackermann_msgs__msg__AckermannDrive(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ackermann_msgs
size_t max_serialized_size_ackermann_msgs__msg__AckermannDrive(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: steering_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_angle_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: jerk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AckermannDrive__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ackermann_msgs__msg__AckermannDrive(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AckermannDrive = {
  "ackermann_msgs::msg",
  "AckermannDrive",
  _AckermannDrive__cdr_serialize,
  _AckermannDrive__cdr_deserialize,
  _AckermannDrive__get_serialized_size,
  _AckermannDrive__max_serialized_size
};

static rosidl_message_type_support_t _AckermannDrive__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AckermannDrive,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ackermann_msgs, msg, AckermannDrive)() {
  return &_AckermannDrive__type_support;
}

#if defined(__cplusplus)
}
#endif
