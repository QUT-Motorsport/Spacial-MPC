// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from driverless_msgs:msg\MPCCenterline.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "driverless_msgs/msg/mpc_centerline__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace driverless_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__MPCCenterline__path(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<driverless_msgs::msg::MPCPathPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MPCCenterline__path(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<driverless_msgs::msg::MPCPathPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__MPCCenterline__path(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<driverless_msgs::msg::MPCPathPoint> *>(untyped_member);
  return &member[index];
}

void resize_function__MPCCenterline__path(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<driverless_msgs::msg::MPCPathPoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MPCCenterline_message_member_array[1] = {
  {
    "path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<driverless_msgs::msg::MPCPathPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driverless_msgs::msg::MPCCenterline, path),  // bytes offset in struct
    nullptr,  // default value
    size_function__MPCCenterline__path,  // size() function pointer
    get_const_function__MPCCenterline__path,  // get_const(index) function pointer
    get_function__MPCCenterline__path,  // get(index) function pointer
    resize_function__MPCCenterline__path  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MPCCenterline_message_members = {
  "driverless_msgs::msg",  // message namespace
  "MPCCenterline",  // message name
  1,  // number of fields
  sizeof(driverless_msgs::msg::MPCCenterline),
  MPCCenterline_message_member_array  // message members
};

static const rosidl_message_type_support_t MPCCenterline_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MPCCenterline_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace driverless_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<driverless_msgs::msg::MPCCenterline>()
{
  return &::driverless_msgs::msg::rosidl_typesupport_introspection_cpp::MPCCenterline_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, driverless_msgs, msg, MPCCenterline)() {
  return &::driverless_msgs::msg::rosidl_typesupport_introspection_cpp::MPCCenterline_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
