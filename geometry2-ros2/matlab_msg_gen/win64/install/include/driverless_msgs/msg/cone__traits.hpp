// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from driverless_msgs:msg\Cone.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__CONE__TRAITS_HPP_
#define DRIVERLESS_MSGS__MSG__CONE__TRAITS_HPP_

#include "driverless_msgs/msg/cone__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'location'
#include "geometry_msgs/msg/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<driverless_msgs::msg::Cone>()
{
  return "driverless_msgs::msg::Cone";
}

template<>
struct has_fixed_size<driverless_msgs::msg::Cone>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<driverless_msgs::msg::Cone>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

}  // namespace rosidl_generator_traits

#endif  // DRIVERLESS_MSGS__MSG__CONE__TRAITS_HPP_
