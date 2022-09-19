// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driverless_msgs:msg\Can.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__CAN__STRUCT_HPP_
#define DRIVERLESS_MSGS__MSG__CAN__STRUCT_HPP_

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
# define DEPRECATED__driverless_msgs__msg__Can __attribute__((deprecated))
#else
# define DEPRECATED__driverless_msgs__msg__Can __declspec(deprecated)
#endif

namespace driverless_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Can_
{
  using Type = Can_<ContainerAllocator>;

  explicit Can_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ul;
      this->id = 0ul;
      this->id_type = 0;
      this->dlc = 0;
    }
  }

  explicit Can_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ul;
      this->id = 0ul;
      this->id_type = 0;
      this->dlc = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint32_t;
  _timestamp_type timestamp;
  using _id_type =
    uint32_t;
  _id_type id;
  using _id_type_type =
    uint8_t;
  _id_type_type id_type;
  using _dlc_type =
    uint8_t;
  _dlc_type dlc;
  using _data_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint32_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__id_type(
    const uint8_t & _arg)
  {
    this->id_type = _arg;
    return *this;
  }
  Type & set__dlc(
    const uint8_t & _arg)
  {
    this->dlc = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driverless_msgs::msg::Can_<ContainerAllocator> *;
  using ConstRawPtr =
    const driverless_msgs::msg::Can_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driverless_msgs::msg::Can_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driverless_msgs::msg::Can_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::Can_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::Can_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::Can_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::Can_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driverless_msgs::msg::Can_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driverless_msgs::msg::Can_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driverless_msgs__msg__Can
    std::shared_ptr<driverless_msgs::msg::Can_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driverless_msgs__msg__Can
    std::shared_ptr<driverless_msgs::msg::Can_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Can_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->id_type != other.id_type) {
      return false;
    }
    if (this->dlc != other.dlc) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Can_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Can_

// alias to use template instance with default allocator
using Can =
  driverless_msgs::msg::Can_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace driverless_msgs

#endif  // DRIVERLESS_MSGS__MSG__CAN__STRUCT_HPP_
