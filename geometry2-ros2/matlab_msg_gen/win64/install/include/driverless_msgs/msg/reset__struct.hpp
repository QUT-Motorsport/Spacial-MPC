// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driverless_msgs:msg\Reset.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__RESET__STRUCT_HPP_
#define DRIVERLESS_MSGS__MSG__RESET__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__driverless_msgs__msg__Reset __attribute__((deprecated))
#else
# define DEPRECATED__driverless_msgs__msg__Reset __declspec(deprecated)
#endif

namespace driverless_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Reset_
{
  using Type = Reset_<ContainerAllocator>;

  explicit Reset_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset = false;
    }
  }

  explicit Reset_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset = false;
    }
  }

  // field types and members
  using _reset_type =
    bool;
  _reset_type reset;

  // setters for named parameter idiom
  Type & set__reset(
    const bool & _arg)
  {
    this->reset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driverless_msgs::msg::Reset_<ContainerAllocator> *;
  using ConstRawPtr =
    const driverless_msgs::msg::Reset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driverless_msgs::msg::Reset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driverless_msgs::msg::Reset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::Reset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::Reset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::Reset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::Reset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driverless_msgs::msg::Reset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driverless_msgs::msg::Reset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driverless_msgs__msg__Reset
    std::shared_ptr<driverless_msgs::msg::Reset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driverless_msgs__msg__Reset
    std::shared_ptr<driverless_msgs::msg::Reset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reset_ & other) const
  {
    if (this->reset != other.reset) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reset_

// alias to use template instance with default allocator
using Reset =
  driverless_msgs::msg::Reset_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace driverless_msgs

#endif  // DRIVERLESS_MSGS__MSG__RESET__STRUCT_HPP_
