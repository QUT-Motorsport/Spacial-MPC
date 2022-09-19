// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from driverless_msgs:msg\RES.idl
// generated code does not contain a copyright notice
#include "driverless_msgs/msg/res__rosidl_typesupport_fastrtps_cpp.hpp"
#include "driverless_msgs/msg/res__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace driverless_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driverless_msgs
cdr_serialize(
  const driverless_msgs::msg::RES & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sw_k2
  cdr << (ros_message.sw_k2 ? true : false);
  // Member: bt_k3
  cdr << (ros_message.bt_k3 ? true : false);
  // Member: estop
  cdr << (ros_message.estop ? true : false);
  // Member: loss_of_signal_shutdown_notice
  cdr << (ros_message.loss_of_signal_shutdown_notice ? true : false);
  // Member: radio_quality
  cdr << ros_message.radio_quality;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driverless_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  driverless_msgs::msg::RES & ros_message)
{
  // Member: sw_k2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sw_k2 = tmp ? true : false;
  }

  // Member: bt_k3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bt_k3 = tmp ? true : false;
  }

  // Member: estop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.estop = tmp ? true : false;
  }

  // Member: loss_of_signal_shutdown_notice
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.loss_of_signal_shutdown_notice = tmp ? true : false;
  }

  // Member: radio_quality
  cdr >> ros_message.radio_quality;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driverless_msgs
get_serialized_size(
  const driverless_msgs::msg::RES & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sw_k2
  {
    size_t item_size = sizeof(ros_message.sw_k2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bt_k3
  {
    size_t item_size = sizeof(ros_message.bt_k3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: estop
  {
    size_t item_size = sizeof(ros_message.estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: loss_of_signal_shutdown_notice
  {
    size_t item_size = sizeof(ros_message.loss_of_signal_shutdown_notice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: radio_quality
  {
    size_t item_size = sizeof(ros_message.radio_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driverless_msgs
max_serialized_size_RES(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: sw_k2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bt_k3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: estop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: loss_of_signal_shutdown_notice
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: radio_quality
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RES__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const driverless_msgs::msg::RES *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RES__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<driverless_msgs::msg::RES *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RES__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const driverless_msgs::msg::RES *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RES__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RES(full_bounded, 0);
}

static message_type_support_callbacks_t _RES__callbacks = {
  "driverless_msgs::msg",
  "RES",
  _RES__cdr_serialize,
  _RES__cdr_deserialize,
  _RES__get_serialized_size,
  _RES__max_serialized_size
};

static rosidl_message_type_support_t _RES__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RES__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace driverless_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_driverless_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<driverless_msgs::msg::RES>()
{
  return &driverless_msgs::msg::typesupport_fastrtps_cpp::_RES__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, driverless_msgs, msg, RES)() {
  return &driverless_msgs::msg::typesupport_fastrtps_cpp::_RES__handle;
}

#ifdef __cplusplus
}
#endif
