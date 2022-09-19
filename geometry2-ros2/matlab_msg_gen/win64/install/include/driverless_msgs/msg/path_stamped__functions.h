// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driverless_msgs:msg\PathStamped.idl
// generated code does not contain a copyright notice

#ifndef DRIVERLESS_MSGS__MSG__PATH_STAMPED__FUNCTIONS_H_
#define DRIVERLESS_MSGS__MSG__PATH_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "driverless_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "driverless_msgs/msg/path_stamped__struct.h"

/// Initialize msg/PathStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * driverless_msgs__msg__PathStamped
 * )) before or use
 * driverless_msgs__msg__PathStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
bool
driverless_msgs__msg__PathStamped__init(driverless_msgs__msg__PathStamped * msg);

/// Finalize msg/PathStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
void
driverless_msgs__msg__PathStamped__fini(driverless_msgs__msg__PathStamped * msg);

/// Create msg/PathStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * driverless_msgs__msg__PathStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
driverless_msgs__msg__PathStamped *
driverless_msgs__msg__PathStamped__create();

/// Destroy msg/PathStamped message.
/**
 * It calls
 * driverless_msgs__msg__PathStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
void
driverless_msgs__msg__PathStamped__destroy(driverless_msgs__msg__PathStamped * msg);


/// Initialize array of msg/PathStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * driverless_msgs__msg__PathStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
bool
driverless_msgs__msg__PathStamped__Sequence__init(driverless_msgs__msg__PathStamped__Sequence * array, size_t size);

/// Finalize array of msg/PathStamped messages.
/**
 * It calls
 * driverless_msgs__msg__PathStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
void
driverless_msgs__msg__PathStamped__Sequence__fini(driverless_msgs__msg__PathStamped__Sequence * array);

/// Create array of msg/PathStamped messages.
/**
 * It allocates the memory for the array and calls
 * driverless_msgs__msg__PathStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
driverless_msgs__msg__PathStamped__Sequence *
driverless_msgs__msg__PathStamped__Sequence__create(size_t size);

/// Destroy array of msg/PathStamped messages.
/**
 * It calls
 * driverless_msgs__msg__PathStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driverless_msgs
void
driverless_msgs__msg__PathStamped__Sequence__destroy(driverless_msgs__msg__PathStamped__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DRIVERLESS_MSGS__MSG__PATH_STAMPED__FUNCTIONS_H_
