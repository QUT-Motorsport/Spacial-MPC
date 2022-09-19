// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from driverless_msgs:msg\PathStamped.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__PATH_STAMPED__TRAITS_HPP_
#define DRIVERLESS_MSGS__MSG__PATH_STAMPED__TRAITS_HPP_

#include "driverless_msgs/msg/path_stamped__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<driverless_msgs::msg::PathStamped>()
{
  return "driverless_msgs::msg::PathStamped";
}

template<>
struct has_fixed_size<driverless_msgs::msg::PathStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<driverless_msgs::msg::PathStamped>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // DRIVERLESS_MSGS__MSG__PATH_STAMPED__TRAITS_HPP_
