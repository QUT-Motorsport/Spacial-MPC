// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from driverless_msgs:msg\MPCState.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__MPC_STATE__TRAITS_HPP_
#define DRIVERLESS_MSGS__MSG__MPC_STATE__TRAITS_HPP_

#include "driverless_msgs/msg/mpc_state__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 't'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<driverless_msgs::msg::MPCState>()
{
  return "driverless_msgs::msg::MPCState";
}

template<>
struct has_fixed_size<driverless_msgs::msg::MPCState>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<driverless_msgs::msg::MPCState>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

#endif  // DRIVERLESS_MSGS__MSG__MPC_STATE__TRAITS_HPP_
