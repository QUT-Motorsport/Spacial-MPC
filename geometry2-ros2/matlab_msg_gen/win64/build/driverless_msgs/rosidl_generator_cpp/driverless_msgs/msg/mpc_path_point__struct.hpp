// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driverless_msgs:msg\MPCPathPoint.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__MPC_PATH_POINT__STRUCT_HPP_
#define DRIVERLESS_MSGS__MSG__MPC_PATH_POINT__STRUCT_HPP_

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
# define DEPRECATED__driverless_msgs__msg__MPCPathPoint __attribute__((deprecated))
#else
# define DEPRECATED__driverless_msgs__msg__MPCPathPoint __declspec(deprecated)
#endif

namespace driverless_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MPCPathPoint_
{
  using Type = MPCPathPoint_<ContainerAllocator>;

  explicit MPCPathPoint_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : location(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->track_angle = 0.0;
      this->curvature = 0.0;
      this->s = 0.0;
    }
  }

  explicit MPCPathPoint_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : location(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->track_angle = 0.0;
      this->curvature = 0.0;
      this->s = 0.0;
    }
  }

  // field types and members
  using _location_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _location_type location;
  using _track_angle_type =
    double;
  _track_angle_type track_angle;
  using _curvature_type =
    double;
  _curvature_type curvature;
  using _s_type =
    double;
  _s_type s;

  // setters for named parameter idiom
  Type & set__location(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__track_angle(
    const double & _arg)
  {
    this->track_angle = _arg;
    return *this;
  }
  Type & set__curvature(
    const double & _arg)
  {
    this->curvature = _arg;
    return *this;
  }
  Type & set__s(
    const double & _arg)
  {
    this->s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driverless_msgs::msg::MPCPathPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const driverless_msgs::msg::MPCPathPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driverless_msgs::msg::MPCPathPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driverless_msgs::msg::MPCPathPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::MPCPathPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::MPCPathPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::MPCPathPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::MPCPathPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driverless_msgs::msg::MPCPathPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driverless_msgs::msg::MPCPathPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driverless_msgs__msg__MPCPathPoint
    std::shared_ptr<driverless_msgs::msg::MPCPathPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driverless_msgs__msg__MPCPathPoint
    std::shared_ptr<driverless_msgs::msg::MPCPathPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MPCPathPoint_ & other) const
  {
    if (this->location != other.location) {
      return false;
    }
    if (this->track_angle != other.track_angle) {
      return false;
    }
    if (this->curvature != other.curvature) {
      return false;
    }
    if (this->s != other.s) {
      return false;
    }
    return true;
  }
  bool operator!=(const MPCPathPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MPCPathPoint_

// alias to use template instance with default allocator
using MPCPathPoint =
  driverless_msgs::msg::MPCPathPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace driverless_msgs

#endif  // DRIVERLESS_MSGS__MSG__MPC_PATH_POINT__STRUCT_HPP_
