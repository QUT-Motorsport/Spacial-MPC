// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:srv\SelectMission.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__SRV__SELECT_MISSION__FUNCTIONS_H_
#define DRIVERLESS_MSGS__SRV__SELECT_MISSION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "driverless_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "driverless_msgs/srv/select_mission__struct.h"

/// Initialize srv/SelectMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * driverless_msgs__srv__SelectMission_Request
 * )) before or use
 * driverless_msgs__srv__SelectMission_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
bool
driverless_msgs__srv__SelectMission_Request__init(driverless_msgs__srv__SelectMission_Request * msg);

/// Finalize srv/SelectMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
void
driverless_msgs__srv__SelectMission_Request__fini(driverless_msgs__srv__SelectMission_Request * msg);

/// Create srv/SelectMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * driverless_msgs__srv__SelectMission_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
driverless_msgs__srv__SelectMission_Request *
driverless_msgs__srv__SelectMission_Request__create();

/// Destroy srv/SelectMission message.
/**
 * It calls
 * driverless_msgs__srv__SelectMission_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
void
driverless_msgs__srv__SelectMission_Request__destroy(driverless_msgs__srv__SelectMission_Request * msg);


/// Initialize array of srv/SelectMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * driverless_msgs__srv__SelectMission_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
bool
driverless_msgs__srv__SelectMission_Request__Sequence__init(driverless_msgs__srv__SelectMission_Request__Sequence * array, size_t size);

/// Finalize array of srv/SelectMission messages.
/**
 * It calls
 * driverless_msgs__srv__SelectMission_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
void
driverless_msgs__srv__SelectMission_Request__Sequence__fini(driverless_msgs__srv__SelectMission_Request__Sequence * array);

/// Create array of srv/SelectMission messages.
/**
 * It allocates the memory for the array and calls
 * driverless_msgs__srv__SelectMission_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
driverless_msgs__srv__SelectMission_Request__Sequence *
driverless_msgs__srv__SelectMission_Request__Sequence__create(size_t size);

/// Destroy array of srv/SelectMission messages.
/**
 * It calls
 * driverless_msgs__srv__SelectMission_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
void
driverless_msgs__srv__SelectMission_Request__Sequence__destroy(driverless_msgs__srv__SelectMission_Request__Sequence * array);

/// Initialize srv/SelectMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * driverless_msgs__srv__SelectMission_Response
 * )) before or use
 * driverless_msgs__srv__SelectMission_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
bool
driverless_msgs__srv__SelectMission_Response__init(driverless_msgs__srv__SelectMission_Response * msg);

/// Finalize srv/SelectMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
void
driverless_msgs__srv__SelectMission_Response__fini(driverless_msgs__srv__SelectMission_Response * msg);

/// Create srv/SelectMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * driverless_msgs__srv__SelectMission_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
driverless_msgs__srv__SelectMission_Response *
driverless_msgs__srv__SelectMission_Response__create();

/// Destroy srv/SelectMission message.
/**
 * It calls
 * driverless_msgs__srv__SelectMission_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
void
driverless_msgs__srv__SelectMission_Response__destroy(driverless_msgs__srv__SelectMission_Response * msg);


/// Initialize array of srv/SelectMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * driverless_msgs__srv__SelectMission_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
bool
driverless_msgs__srv__SelectMission_Response__Sequence__init(driverless_msgs__srv__SelectMission_Response__Sequence * array, size_t size);

/// Finalize array of srv/SelectMission messages.
/**
 * It calls
 * driverless_msgs__srv__SelectMission_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
void
driverless_msgs__srv__SelectMission_Response__Sequence__fini(driverless_msgs__srv__SelectMission_Response__Sequence * array);

/// Create array of srv/SelectMission messages.
/**
 * It allocates the memory for the array and calls
 * driverless_msgs__srv__SelectMission_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
driverless_msgs__srv__SelectMission_Response__Sequence *
driverless_msgs__srv__SelectMission_Response__Sequence__create(size_t size);

/// Destroy array of srv/SelectMission messages.
/**
 * It calls
 * driverless_msgs__srv__SelectMission_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
void
driverless_msgs__srv__SelectMission_Response__Sequence__destroy(driverless_msgs__srv__SelectMission_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__SRV__SELECT_MISSION__FUNCTIONS_H_
