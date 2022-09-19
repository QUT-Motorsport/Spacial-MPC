// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driverless_msgs:msg\MPCCenterline.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__MPC_CENTERLINE__STRUCT_HPP_
#define DRIVERLESS_MSGS__MSG__MPC_CENTERLINE__STRUCT_HPP_

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
// Member 'path'
#include "driverless_msgs/msg/mpc_path_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__driverless_msgs__msg__MPCCenterline __attribute__((deprecated))
#else
# define DEPRECATED__driverless_msgs__msg__MPCCenterline __declspec(deprecated)
#endif

namespace driverless_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MPCCenterline_
{
  using Type = MPCCenterline_<ContainerAllocator>;

  explicit MPCCenterline_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MPCCenterline_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _path_type =
    std::vector<driverless_msgs::msg::MPCPathPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<driverless_msgs::msg::MPCPathPoint_<ContainerAllocator>>::other>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__path(
    const std::vector<driverless_msgs::msg::MPCPathPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<driverless_msgs::msg::MPCPathPoint_<ContainerAllocator>>::other> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driverless_msgs::msg::MPCCenterline_<ContainerAllocator> *;
  using ConstRawPtr =
    const driverless_msgs::msg::MPCCenterline_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driverless_msgs::msg::MPCCenterline_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driverless_msgs::msg::MPCCenterline_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::MPCCenterline_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::MPCCenterline_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::MPCCenterline_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::MPCCenterline_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driverless_msgs::msg::MPCCenterline_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driverless_msgs::msg::MPCCenterline_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driverless_msgs__msg__MPCCenterline
    std::shared_ptr<driverless_msgs::msg::MPCCenterline_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driverless_msgs__msg__MPCCenterline
    std::shared_ptr<driverless_msgs::msg::MPCCenterline_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MPCCenterline_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const MPCCenterline_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MPCCenterline_

// alias to use template instance with default allocator
using MPCCenterline =
  driverless_msgs::msg::MPCCenterline_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace driverless_msgs

#endif  // DRIVERLESS_MSGS__MSG__MPC_CENTERLINE__STRUCT_HPP_
