// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from driverless_msgs:msg\TrackDetectionStamped.idl
// generated code does not contain a copyright notice
#include "driverless_msgs/msg/track_detection_stamped__rosidl_typesupport_fastrtps_cpp.hpp"
#include "driverless_msgs/msg/track_detection_stamped__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace driverless_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const driverless_msgs::msg::ConeWithCovariance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  driverless_msgs::msg::ConeWithCovariance &);
size_t get_serialized_size(
  const driverless_msgs::msg::ConeWithCovariance &,
  size_t current_alignment);
size_t
max_serialized_size_ConeWithCovariance(
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
  const driverless_msgs::msg::TrackDetectionStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: cones
  {
    size_t size = ros_message.cones.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      driverless_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.cones[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driverless_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  driverless_msgs::msg::TrackDetectionStamped & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: cones
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.cones.resize(size);
    for (size_t i = 0; i < size; i++) {
      driverless_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.cones[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driverless_msgs
get_serialized_size(
  const driverless_msgs::msg::TrackDetectionStamped & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: cones
  {
    size_t array_size = ros_message.cones.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        driverless_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.cones[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driverless_msgs
max_serialized_size_TrackDetectionStamped(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: cones
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        driverless_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ConeWithCovariance(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TrackDetectionStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const driverless_msgs::msg::TrackDetectionStamped *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrackDetectionStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<driverless_msgs::msg::TrackDetectionStamped *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrackDetectionStamped__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const driverless_msgs::msg::TrackDetectionStamped *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrackDetectionStamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TrackDetectionStamped(full_bounded, 0);
}

static message_type_support_callbacks_t _TrackDetectionStamped__callbacks = {
  "driverless_msgs::msg",
  "TrackDetectionStamped",
  _TrackDetectionStamped__cdr_serialize,
  _TrackDetectionStamped__cdr_deserialize,
  _TrackDetectionStamped__get_serialized_size,
  _TrackDetectionStamped__max_serialized_size
};

static rosidl_message_type_support_t _TrackDetectionStamped__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrackDetectionStamped__callbacks,
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
get_message_type_support_handle<driverless_msgs::msg::TrackDetectionStamped>()
{
  return &driverless_msgs::msg::typesupport_fastrtps_cpp::_TrackDetectionStamped__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, driverless_msgs, msg, TrackDetectionStamped)() {
  return &driverless_msgs::msg::typesupport_fastrtps_cpp::_TrackDetectionStamped__handle;
}

#ifdef __cplusplus
}
#endif
