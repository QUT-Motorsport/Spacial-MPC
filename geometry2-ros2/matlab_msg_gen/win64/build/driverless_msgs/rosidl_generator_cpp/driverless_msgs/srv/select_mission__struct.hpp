// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driverless_msgs:srv\SelectMission.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__SRV__SELECT_MISSION__STRUCT_HPP_
#define DRIVERLESS_MSGS__SRV__SELECT_MISSION__STRUCT_HPP_

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
# define DEPRECATED__driverless_msgs__srv__SelectMission_Request __attribute__((deprecated))
#else
# define DEPRECATED__driverless_msgs__srv__SelectMission_Request __declspec(deprecated)
#endif

namespace driverless_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelectMission_Request_
{
  using Type = SelectMission_Request_<ContainerAllocator>;

  explicit SelectMission_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission = "";
    }
  }

  explicit SelectMission_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : mission(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission = "";
    }
  }

  // field types and members
  using _mission_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _mission_type mission;

  // setters for named parameter idiom
  Type & set__mission(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->mission = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driverless_msgs::srv::SelectMission_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const driverless_msgs::srv::SelectMission_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driverless_msgs::srv::SelectMission_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driverless_msgs::srv::SelectMission_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::srv::SelectMission_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::srv::SelectMission_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::srv::SelectMission_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::srv::SelectMission_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driverless_msgs::srv::SelectMission_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driverless_msgs::srv::SelectMission_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driverless_msgs__srv__SelectMission_Request
    std::shared_ptr<driverless_msgs::srv::SelectMission_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driverless_msgs__srv__SelectMission_Request
    std::shared_ptr<driverless_msgs::srv::SelectMission_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelectMission_Request_ & other) const
  {
    if (this->mission != other.mission) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelectMission_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelectMission_Request_

// alias to use template instance with default allocator
using SelectMission_Request =
  driverless_msgs::srv::SelectMission_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace driverless_msgs

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
# define DEPRECATED__driverless_msgs__srv__SelectMission_Response __attribute__((deprecated))
#else
# define DEPRECATED__driverless_msgs__srv__SelectMission_Response __declspec(deprecated)
#endif

namespace driverless_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelectMission_Response_
{
  using Type = SelectMission_Response_<ContainerAllocator>;

  explicit SelectMission_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirmation = "";
    }
  }

  explicit SelectMission_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : confirmation(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirmation = "";
    }
  }

  // field types and members
  using _confirmation_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _confirmation_type confirmation;

  // setters for named parameter idiom
  Type & set__confirmation(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->confirmation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driverless_msgs::srv::SelectMission_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const driverless_msgs::srv::SelectMission_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driverless_msgs::srv::SelectMission_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driverless_msgs::srv::SelectMission_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::srv::SelectMission_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::srv::SelectMission_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driverless_msgs::srv::SelectMission_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driverless_msgs::srv::SelectMission_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driverless_msgs::srv::SelectMission_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driverless_msgs::srv::SelectMission_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driverless_msgs__srv__SelectMission_Response
    std::shared_ptr<driverless_msgs::srv::SelectMission_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driverless_msgs__srv__SelectMission_Response
    std::shared_ptr<driverless_msgs::srv::SelectMission_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelectMission_Response_ & other) const
  {
    if (this->confirmation != other.confirmation) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelectMission_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelectMission_Response_

// alias to use template instance with default allocator
using SelectMission_Response =
  driverless_msgs::srv::SelectMission_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace driverless_msgs

namespace driverless_msgs
{

namespace srv
{

struct SelectMission
{
  using Request = driverless_msgs::srv::SelectMission_Request;
  using Response = driverless_msgs::srv::SelectMission_Response;
};

}  // namespace srv

}  // namespace driverless_msgs

#endif  // DRIVERLESS_MSGS__SRV__SELECT_MISSION__STRUCT_HPP_
