// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from driverless_msgs:srv\SelectMission.idl
// generated code does not contain a copyright notice
#include "driverless_msgs/srv/select_mission__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "driverless_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "driverless_msgs/srv/select_mission__struct.h"
#include "driverless_msgs/srv/select_mission__functions.h"
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

#include "rosidl_generator_c/string.h"  // mission
#include "rosidl_generator_c/string_functions.h"  // mission

// forward declare type support functions


using _SelectMission_Request__ros_msg_type = driverless_msgs__srv__SelectMission_Request;

static bool _SelectMission_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SelectMission_Request__ros_msg_type * ros_message = static_cast<const _SelectMission_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mission
  {
    const rosidl_generator_c__String * str = &ros_message->mission;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SelectMission_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SelectMission_Request__ros_msg_type * ros_message = static_cast<_SelectMission_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mission
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mission.data) {
      rosidl_generator_c__String__init(&ros_message->mission);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->mission,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mission'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driverless_msgs
size_t get_serialized_size_driverless_msgs__srv__SelectMission_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SelectMission_Request__ros_msg_type * ros_message = static_cast<const _SelectMission_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mission
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mission.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SelectMission_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_driverless_msgs__srv__SelectMission_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driverless_msgs
size_t max_serialized_size_driverless_msgs__srv__SelectMission_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mission
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SelectMission_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_driverless_msgs__srv__SelectMission_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SelectMission_Request = {
  "driverless_msgs::srv",
  "SelectMission_Request",
  _SelectMission_Request__cdr_serialize,
  _SelectMission_Request__cdr_deserialize,
  _SelectMission_Request__get_serialized_size,
  _SelectMission_Request__max_serialized_size
};

static rosidl_message_type_support_t _SelectMission_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SelectMission_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, srv, SelectMission_Request)() {
  return &_SelectMission_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "driverless_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "driverless_msgs/srv/select_mission__struct.h"
// already included above
// #include "driverless_msgs/srv/select_mission__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_generator_c/string.h"  // confirmation
// already included above
// #include "rosidl_generator_c/string_functions.h"  // confirmation

// forward declare type support functions


using _SelectMission_Response__ros_msg_type = driverless_msgs__srv__SelectMission_Response;

static bool _SelectMission_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SelectMission_Response__ros_msg_type * ros_message = static_cast<const _SelectMission_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: confirmation
  {
    const rosidl_generator_c__String * str = &ros_message->confirmation;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SelectMission_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SelectMission_Response__ros_msg_type * ros_message = static_cast<_SelectMission_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: confirmation
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->confirmation.data) {
      rosidl_generator_c__String__init(&ros_message->confirmation);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->confirmation,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'confirmation'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driverless_msgs
size_t get_serialized_size_driverless_msgs__srv__SelectMission_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SelectMission_Response__ros_msg_type * ros_message = static_cast<const _SelectMission_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name confirmation
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->confirmation.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SelectMission_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_driverless_msgs__srv__SelectMission_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driverless_msgs
size_t max_serialized_size_driverless_msgs__srv__SelectMission_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: confirmation
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SelectMission_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_driverless_msgs__srv__SelectMission_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SelectMission_Response = {
  "driverless_msgs::srv",
  "SelectMission_Response",
  _SelectMission_Response__cdr_serialize,
  _SelectMission_Response__cdr_deserialize,
  _SelectMission_Response__get_serialized_size,
  _SelectMission_Response__max_serialized_size
};

static rosidl_message_type_support_t _SelectMission_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SelectMission_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, srv, SelectMission_Response)() {
  return &_SelectMission_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "driverless_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "driverless_msgs/srv/select_mission.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SelectMission__callbacks = {
  "driverless_msgs::srv",
  "SelectMission",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, srv, SelectMission_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, srv, SelectMission_Response)(),
};

static rosidl_service_type_support_t SelectMission__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SelectMission__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driverless_msgs, srv, SelectMission)() {
  return &SelectMission__handle;
}

#if defined(__cplusplus)
}
#endif
