// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driverless_msgs:msg\TrackDetectionStamped.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__TRACK_DETECTION_STAMPED__STRUCT_HPP_
#define DRIVERLESS_MSGS__MSG__TRACK_DETECTION_STAMPED__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.hpp"
// Member 'cones'
#include "driverless_msgs/msg/cone_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__driverless_msgs__msg__TrackDetectionStamped __attribute__((deprecated))
#else
# define DEPRECATED__driverless_msgs__msg__TrackDetectionStamped __declspec(deprecated)
#endif

namespace driverless_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackDetectionStamped_
{
  using Type = TrackDetectionStamped_<ContainerAllocator>;

  explicit TrackDetectionStamped_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TrackDetectionStamped_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cones_type =
    std::vector<driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator>, typename ContainerAllocator::template rebind<driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator>>::other>;
  _cones_type cones;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cones(
    const std::vector<driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator>, typename ContainerAllocator::template rebind<driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator>>::other> & _arg)
  {
    this->cones = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driverless_msgs::msg::TrackDetectionStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const driverless_msgs::msg::TrackDetectionStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driverless_msgs::msg::TrackDetectionStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driverless_msgs::msg::TrackDetectionStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::TrackDetectionStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::TrackDetectionStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::TrackDetectionStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::TrackDetectionStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driverless_msgs::msg::TrackDetectionStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driverless_msgs::msg::TrackDetectionStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driverless_msgs__msg__TrackDetectionStamped
    std::shared_ptr<driverless_msgs::msg::TrackDetectionStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driverless_msgs__msg__TrackDetectionStamped
    std::shared_ptr<driverless_msgs::msg::TrackDetectionStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackDetectionStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cones != other.cones) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackDetectionStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackDetectionStamped_

// alias to use template instance with default allocator
using TrackDetectionStamped =
  driverless_msgs::msg::TrackDetectionStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace driverless_msgs

#endif  // DRIVERLESS_MSGS__MSG__TRACK_DETECTION_STAMPED__STRUCT_HPP_
