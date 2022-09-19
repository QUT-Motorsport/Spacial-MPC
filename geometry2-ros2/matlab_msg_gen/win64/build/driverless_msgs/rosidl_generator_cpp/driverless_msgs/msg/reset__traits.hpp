// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from driverless_msgs:msg\Reset.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__RESET__TRAITS_HPP_
#define DRIVERLESS_MSGS__MSG__RESET__TRAITS_HPP_

#include "driverless_msgs/msg/reset__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<driverless_msgs::msg::Reset>()
{
  return "driverless_msgs::msg::Reset";
}

template<>
struct has_fixed_size<driverless_msgs::msg::Reset>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<driverless_msgs::msg::Reset>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // DRIVERLESS_MSGS__MSG__RESET__TRAITS_HPP_
