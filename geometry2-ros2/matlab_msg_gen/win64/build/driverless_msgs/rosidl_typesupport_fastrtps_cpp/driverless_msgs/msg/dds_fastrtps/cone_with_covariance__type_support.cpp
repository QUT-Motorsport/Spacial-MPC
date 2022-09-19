// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from driverless_msgs:msg\ConeWithCovariance.idl
// generated code does not contain a copyright notice
#include "driverless_msgs/msg/cone_with_covariance__rosidl_typesupport_fastrtps_cpp.hpp"
#include "driverless_msgs/msg/cone_with_covariance__struct.hpp"

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
bool cdr_serialize(
  const driverless_msgs::msg::Cone &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  driverless_msgs::msg::Cone &);
size_t get_serialized_size(
  const driverless_msgs::msg::Cone &,
  size_t current_alignment);
size_t
max_serialized_size_Cone(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace driverless_msgs


namespace driverless_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driverless_msgs
cdr_serialize(
  const driverless_msgs::msg::ConeWithCovariance & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cone
  driverless_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cone,
    cdr);
  // Member: covariance
  {
    cdr << ros_message.covariance;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driverless_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  driverless_msgs::msg::ConeWithCovariance & ros_message)
{
  // Member: cone
  driverless_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cone);

  // Member: covariance
  {
    cdr >> ros_message.covariance;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driverless_msgs
get_serialized_size(
  const driverless_msgs::msg::ConeWithCovariance & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cone

  current_alignment +=
    driverless_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cone, current_alignment);
  // Member: covariance
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.covariance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driverless_msgs
max_serialized_size_ConeWithCovariance(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: cone
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        driverless_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cone(
        full_bounded, current_alignment);
    }
  }

  // Member: covariance
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ConeWithCovariance__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const driverless_msgs::msg::ConeWithCovariance *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConeWithCovariance__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<driverless_msgs::msg::ConeWithCovariance *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConeWithCovariance__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const driverless_msgs::msg::ConeWithCovariance *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConeWithCovariance__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ConeWithCovariance(full_bounded, 0);
}

static message_type_support_callbacks_t _ConeWithCovariance__callbacks = {
  "driverless_msgs::msg",
  "ConeWithCovariance",
  _ConeWithCovariance__cdr_serialize,
  _ConeWithCovariance__cdr_deserialize,
  _ConeWithCovariance__get_serialized_size,
  _ConeWithCovariance__max_serialized_size
};

static rosidl_message_type_support_t _ConeWithCovariance__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConeWithCovariance__callbacks,
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
get_message_type_support_handle<driverless_msgs::msg::ConeWithCovariance>()
{
  return &driverless_msgs::msg::typesupport_fastrtps_cpp::_ConeWithCovariance__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, driverless_msgs, msg, ConeWithCovariance)() {
  return &driverless_msgs::msg::typesupport_fastrtps_cpp::_ConeWithCovariance__handle;
}

#ifdef __cplusplus
}
#endif
