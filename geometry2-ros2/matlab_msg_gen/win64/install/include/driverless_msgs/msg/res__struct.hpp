// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driverless_msgs:msg\RES.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__RES__STRUCT_HPP_
#define DRIVERLESS_MSGS__MSG__RES__STRUCT_HPP_

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
# define DEPRECATED__driverless_msgs__msg__RES __attribute__((deprecated))
#else
# define DEPRECATED__driverless_msgs__msg__RES __declspec(deprecated)
#endif

namespace driverless_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RES_
{
  using Type = RES_<ContainerAllocator>;

  explicit RES_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->sw_k2 = false;
      this->bt_k3 = false;
      this->estop = false;
      this->loss_of_signal_shutdown_notice = false;
      this->radio_quality = 0;
    }
  }

  explicit RES_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->sw_k2 = false;
      this->bt_k3 = false;
      this->estop = false;
      this->loss_of_signal_shutdown_notice = false;
      this->radio_quality = 0;
    }
  }

  // field types and members
  using _sw_k2_type =
    bool;
  _sw_k2_type sw_k2;
  using _bt_k3_type =
    bool;
  _bt_k3_type bt_k3;
  using _estop_type =
    bool;
  _estop_type estop;
  using _loss_of_signal_shutdown_notice_type =
    bool;
  _loss_of_signal_shutdown_notice_type loss_of_signal_shutdown_notice;
  using _radio_quality_type =
    uint8_t;
  _radio_quality_type radio_quality;

  // setters for named parameter idiom
  Type & set__sw_k2(
    const bool & _arg)
  {
    this->sw_k2 = _arg;
    return *this;
  }
  Type & set__bt_k3(
    const bool & _arg)
  {
    this->bt_k3 = _arg;
    return *this;
  }
  Type & set__estop(
    const bool & _arg)
  {
    this->estop = _arg;
    return *this;
  }
  Type & set__loss_of_signal_shutdown_notice(
    const bool & _arg)
  {
    this->loss_of_signal_shutdown_notice = _arg;
    return *this;
  }
  Type & set__radio_quality(
    const uint8_t & _arg)
  {
    this->radio_quality = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driverless_msgs::msg::RES_<ContainerAllocator> *;
  using ConstRawPtr =
    const driverless_msgs::msg::RES_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driverless_msgs::msg::RES_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driverless_msgs::msg::RES_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::RES_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::RES_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::msg::RES_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::msg::RES_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driverless_msgs::msg::RES_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driverless_msgs::msg::RES_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driverless_msgs__msg__RES
    std::shared_ptr<driverless_msgs::msg::RES_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driverless_msgs__msg__RES
    std::shared_ptr<driverless_msgs::msg::RES_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RES_ & other) const
  {
    if (this->sw_k2 != other.sw_k2) {
      return false;
    }
    if (this->bt_k3 != other.bt_k3) {
      return false;
    }
    if (this->estop != other.estop) {
      return false;
    }
    if (this->loss_of_signal_shutdown_notice != other.loss_of_signal_shutdown_notice) {
      return false;
    }
    if (this->radio_quality != other.radio_quality) {
      return false;
    }
    return true;
  }
  bool operator!=(const RES_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RES_

// alias to use template instance with default allocator
using RES =
  driverless_msgs::msg::RES_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace driverless_msgs

#endif  // DRIVERLESS_MSGS__MSG__RES__STRUCT_HPP_
