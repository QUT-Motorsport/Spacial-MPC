// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from driverless_msgs:srv\SelectMission.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__SRV__SELECT_MISSION__TRAITS_HPP_
#define DRIVERLESS_MSGS__SRV__SELECT_MISSION__TRAITS_HPP_

#include "driverless_msgs/srv/select_mission__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<driverless_msgs::srv::SelectMission_Request>()
{
  return "driverless_msgs::srv::SelectMission_Request";
}

template<>
struct has_fixed_size<driverless_msgs::srv::SelectMission_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<driverless_msgs::srv::SelectMission_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<driverless_msgs::srv::SelectMission_Response>()
{
  return "driverless_msgs::srv::SelectMission_Response";
}

template<>
struct has_fixed_size<driverless_msgs::srv::SelectMission_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<driverless_msgs::srv::SelectMission_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<driverless_msgs::srv::SelectMission>()
{
  return "driverless_msgs::srv::SelectMission";
}

template<>
struct has_fixed_size<driverless_msgs::srv::SelectMission>
  : std::integral_constant<
    bool,
    has_fixed_size<driverless_msgs::srv::SelectMission_Request>::value &&
    has_fixed_size<driverless_msgs::srv::SelectMission_Response>::value
  >
{
};

template<>
struct has_bounded_size<driverless_msgs::srv::SelectMission>
  : std::integral_constant<
    bool,
    has_bounded_size<driverless_msgs::srv::SelectMission_Request>::value &&
    has_bounded_size<driverless_msgs::srv::SelectMission_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // DRIVERLESS_MSGS__SRV__SELECT_MISSION__TRAITS_HPP_
