// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from driverless_msgs:srv\SelectMission.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "driverless_msgs/srv/select_mission__rosidl_typesupport_introspection_c.h"
#include "driverless_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "driverless_msgs/srv/select_mission__struct.h"


// Include directives for member types
// Member `mission`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Request_message_member_array[1] = {
  {
    "mission",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driverless_msgs__srv__SelectMission_Request, mission),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Request_message_members = {
  "driverless_msgs__srv",  // message namespace
  "SelectMission_Request",  // message name
  1,  // number of fields
  sizeof(driverless_msgs__srv__SelectMission_Request),
  driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Request_message_type_support_handle = {
  0,
  &driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_driverless_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, srv, SelectMission_Request)() {
  if (!driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Request_message_type_support_handle.typesupport_identifier) {
    driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "driverless_msgs/srv/select_mission__rosidl_typesupport_introspection_c.h"
// already included above
// #include "driverless_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "driverless_msgs/srv/select_mission__struct.h"


// Include directives for member types
// Member `confirmation`
// already included above
// #include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Response_message_member_array[1] = {
  {
    "confirmation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driverless_msgs__srv__SelectMission_Response, confirmation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Response_message_members = {
  "driverless_msgs__srv",  // message namespace
  "SelectMission_Response",  // message name
  1,  // number of fields
  sizeof(driverless_msgs__srv__SelectMission_Response),
  driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Response_message_type_support_handle = {
  0,
  &driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_driverless_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, srv, SelectMission_Response)() {
  if (!driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Response_message_type_support_handle.typesupport_identifier) {
    driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "driverless_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "driverless_msgs/srv/select_mission__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_service_members = {
  "driverless_msgs__srv",  // service namespace
  "SelectMission",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Request_message_type_support_handle,
  NULL  // response message
  // driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_Response_message_type_support_handle
};

static rosidl_service_type_support_t driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_service_type_support_handle = {
  0,
  &driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, srv, SelectMission_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, srv, SelectMission_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_driverless_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, srv, SelectMission)() {
  if (!driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_service_type_support_handle.typesupport_identifier) {
    driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, srv, SelectMission_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driverless_msgs, srv, SelectMission_Response)()->data;
  }

  return &driverless_msgs__srv__select_mission__rosidl_typesupport_introspection_c__SelectMission_service_type_support_handle;
}
