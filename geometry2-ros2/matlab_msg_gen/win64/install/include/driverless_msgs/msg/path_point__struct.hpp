// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driverless_msgs:msg\PathPoint.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__PATH_POINT__STRUCT_HPP_
#define DRIVERLESS_MSGS__MSG__PATH_POINT__STRUCT_HPP_

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
// Member 'location'
#include "geometry_msgs/msg/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__driverless_msgs__msg__PathPoint __attribute__((deprecated))
#else
# define DEPRECATED__driverless_msgs__msg__PathPoint __declspec(deprecated)
#endif

namespace driverless_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathPoint_
{
  using Type = PathPoint_<ContainerAllocator>;

  explicit PathPoint_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : location(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_intensity = 0.0f;
    }
  }

  explicit PathPoint_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : location(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_intensity = 0.0f;
    }
  }

  // field types and members
  using _location_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _location_type location;
  using _turn_intensity_type =
    float;
  _turn_intensity_type turn_intensity;

  // setters for named parameter idiom
  Type & set__location(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__turn_intensity(
    const float & _arg)
  {
    this->turn_intensity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driverless_msgs::msg::PathPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const driverless_msgs::msg::PathPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driverless_msgs::msg::PathPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driverless_msgs::msg::PathPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::PathPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::PathPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::PathPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::PathPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driverless_msgs::msg::PathPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driverless_msgs::msg::PathPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driverless_msgs__msg__PathPoint
    std::shared_ptr<driverless_msgs::msg::PathPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driverless_msgs__msg__PathPoint
    std::shared_ptr<driverless_msgs::msg::PathPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPoint_ & other) const
  {
    if (this->location != other.location) {
      return false;
    }
    if (this->turn_intensity != other.turn_intensity) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPoint_

// alias to use template instance with default allocator
using PathPoint =
  driverless_msgs::msg::PathPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace driverless_msgs

#endif  // DRIVERLESS_MSGS__MSG__PATH_POINT__STRUCT_HPP_
