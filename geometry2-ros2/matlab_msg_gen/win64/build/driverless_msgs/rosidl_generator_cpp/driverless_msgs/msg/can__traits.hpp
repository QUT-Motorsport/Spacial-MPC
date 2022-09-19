// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from driverless_msgs:msg\Can.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__CAN__TRAITS_HPP_
#define DRIVERLESS_MSGS__MSG__CAN__TRAITS_HPP_

#include "driverless_msgs/msg/can__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<driverless_msgs::msg::Can>()
{
  return "driverless_msgs::msg::Can";
}

template<>
struct has_fixed_size<driverless_msgs::msg::Can>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<driverless_msgs::msg::Can>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // DRIVERLESS_MSGS__MSG__CAN__TRAITS_HPP_
