// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driverless_msgs:msg\MPCState.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__MPC_STATE__STRUCT_HPP_
#define DRIVERLESS_MSGS__MSG__MPC_STATE__STRUCT_HPP_

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
// Member 't'
#include "builtin_interfaces/msg/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__driverless_msgs__msg__MPCState __attribute__((deprecated))
#else
# define DEPRECATED__driverless_msgs__msg__MPCState __declspec(deprecated)
#endif

namespace driverless_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MPCState_
{
  using Type = MPCState_<ContainerAllocator>;

  explicit MPCState_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : t(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = 0.0;
      this->ey = 0.0;
      this->etheta = 0.0;
      this->otheta_dot = 0.0;
      this->vx = 0.0;
      this->vy = 0.0;
      this->d = 0.0;
    }
  }

  explicit MPCState_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : t(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = 0.0;
      this->ey = 0.0;
      this->etheta = 0.0;
      this->otheta_dot = 0.0;
      this->vx = 0.0;
      this->vy = 0.0;
      this->d = 0.0;
    }
  }

  // field types and members
  using _s_type =
    double;
  _s_type s;
  using _ey_type =
    double;
  _ey_type ey;
  using _etheta_type =
    double;
  _etheta_type etheta;
  using _otheta_dot_type =
    double;
  _otheta_dot_type otheta_dot;
  using _vx_type =
    double;
  _vx_type vx;
  using _vy_type =
    double;
  _vy_type vy;
  using _d_type =
    double;
  _d_type d;
  using _t_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _t_type t;

  // setters for named parameter idiom
  Type & set__s(
    const double & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__ey(
    const double & _arg)
  {
    this->ey = _arg;
    return *this;
  }
  Type & set__etheta(
    const double & _arg)
  {
    this->etheta = _arg;
    return *this;
  }
  Type & set__otheta_dot(
    const double & _arg)
  {
    this->otheta_dot = _arg;
    return *this;
  }
  Type & set__vx(
    const double & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const double & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__d(
    const double & _arg)
  {
    this->d = _arg;
    return *this;
  }
  Type & set__t(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->t = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driverless_msgs::msg::MPCState_<ContainerAllocator> *;
  using ConstRawPtr =
    const driverless_msgs::msg::MPCState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driverless_msgs::msg::MPCState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driverless_msgs::msg::MPCState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::MPCState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::MPCState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::MPCState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::MPCState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driverless_msgs::msg::MPCState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driverless_msgs::msg::MPCState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driverless_msgs__msg__MPCState
    std::shared_ptr<driverless_msgs::msg::MPCState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driverless_msgs__msg__MPCState
    std::shared_ptr<driverless_msgs::msg::MPCState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MPCState_ & other) const
  {
    if (this->s != other.s) {
      return false;
    }
    if (this->ey != other.ey) {
      return false;
    }
    if (this->etheta != other.etheta) {
      return false;
    }
    if (this->otheta_dot != other.otheta_dot) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    if (this->t != other.t) {
      return false;
    }
    return true;
  }
  bool operator!=(const MPCState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MPCState_

// alias to use template instance with default allocator
using MPCState =
  driverless_msgs::msg::MPCState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace driverless_msgs

#endif  // DRIVERLESS_MSGS__MSG__MPC_STATE__STRUCT_HPP_
