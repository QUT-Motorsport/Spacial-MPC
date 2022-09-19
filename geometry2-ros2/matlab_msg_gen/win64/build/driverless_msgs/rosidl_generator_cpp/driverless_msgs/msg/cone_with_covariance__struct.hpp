// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driverless_msgs:msg\ConeWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__CONE_WITH_COVARIANCE__STRUCT_HPP_
#define DRIVERLESS_MSGS__MSG__CONE_WITH_COVARIANCE__STRUCT_HPP_

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
// Member 'cone'
#include "driverless_msgs/msg/cone__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__driverless_msgs__msg__ConeWithCovariance __attribute__((deprecated))
#else
# define DEPRECATED__driverless_msgs__msg__ConeWithCovariance __declspec(deprecated)
#endif

namespace driverless_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConeWithCovariance_
{
  using Type = ConeWithCovariance_<ContainerAllocator>;

  explicit ConeWithCovariance_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : cone(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  explicit ConeWithCovariance_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : cone(_alloc, _init),
    covariance(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  // field types and members
  using _cone_type =
    driverless_msgs::msg::Cone_<ContainerAllocator>;
  _cone_type cone;
  using _covariance_type =
    std::array<double, 4>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type & set__cone(
    const driverless_msgs::msg::Cone_<ContainerAllocator> & _arg)
  {
    this->cone = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<double, 4> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator> *;
  using ConstRawPtr =
    const driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driverless_msgs__msg__ConeWithCovariance
    std::shared_ptr<driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driverless_msgs__msg__ConeWithCovariance
    std::shared_ptr<driverless_msgs::msg::ConeWithCovariance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConeWithCovariance_ & other) const
  {
    if (this->cone != other.cone) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConeWithCovariance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConeWithCovariance_

// alias to use template instance with default allocator
using ConeWithCovariance =
  driverless_msgs::msg::ConeWithCovariance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace driverless_msgs

#endif  // DRIVERLESS_MSGS__MSG__CONE_WITH_COVARIANCE__STRUCT_HPP_
