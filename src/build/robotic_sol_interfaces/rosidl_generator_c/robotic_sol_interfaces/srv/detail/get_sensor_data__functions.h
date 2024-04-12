// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robotic_sol_interfaces:srv/GetSensorData.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_SOL_INTERFACES__SRV__DETAIL__GET_SENSOR_DATA__FUNCTIONS_H_
#define ROBOTIC_SOL_INTERFACES__SRV__DETAIL__GET_SENSOR_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robotic_sol_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robotic_sol_interfaces/srv/detail/get_sensor_data__struct.h"

/// Initialize srv/GetSensorData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotic_sol_interfaces__srv__GetSensorData_Request
 * )) before or use
 * robotic_sol_interfaces__srv__GetSensorData_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
bool
robotic_sol_interfaces__srv__GetSensorData_Request__init(robotic_sol_interfaces__srv__GetSensorData_Request * msg);

/// Finalize srv/GetSensorData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
void
robotic_sol_interfaces__srv__GetSensorData_Request__fini(robotic_sol_interfaces__srv__GetSensorData_Request * msg);

/// Create srv/GetSensorData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotic_sol_interfaces__srv__GetSensorData_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
robotic_sol_interfaces__srv__GetSensorData_Request *
robotic_sol_interfaces__srv__GetSensorData_Request__create();

/// Destroy srv/GetSensorData message.
/**
 * It calls
 * robotic_sol_interfaces__srv__GetSensorData_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
void
robotic_sol_interfaces__srv__GetSensorData_Request__destroy(robotic_sol_interfaces__srv__GetSensorData_Request * msg);

/// Check for srv/GetSensorData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
bool
robotic_sol_interfaces__srv__GetSensorData_Request__are_equal(const robotic_sol_interfaces__srv__GetSensorData_Request * lhs, const robotic_sol_interfaces__srv__GetSensorData_Request * rhs);

/// Copy a srv/GetSensorData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
bool
robotic_sol_interfaces__srv__GetSensorData_Request__copy(
  const robotic_sol_interfaces__srv__GetSensorData_Request * input,
  robotic_sol_interfaces__srv__GetSensorData_Request * output);

/// Initialize array of srv/GetSensorData messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotic_sol_interfaces__srv__GetSensorData_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
bool
robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__init(robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetSensorData messages.
/**
 * It calls
 * robotic_sol_interfaces__srv__GetSensorData_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
void
robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__fini(robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * array);

/// Create array of srv/GetSensorData messages.
/**
 * It allocates the memory for the array and calls
 * robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
robotic_sol_interfaces__srv__GetSensorData_Request__Sequence *
robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetSensorData messages.
/**
 * It calls
 * robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
void
robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__destroy(robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * array);

/// Check for srv/GetSensorData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
bool
robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__are_equal(const robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * lhs, const robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * rhs);

/// Copy an array of srv/GetSensorData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
bool
robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__copy(
  const robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * input,
  robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * output);

/// Initialize srv/GetSensorData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotic_sol_interfaces__srv__GetSensorData_Response
 * )) before or use
 * robotic_sol_interfaces__srv__GetSensorData_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
bool
robotic_sol_interfaces__srv__GetSensorData_Response__init(robotic_sol_interfaces__srv__GetSensorData_Response * msg);

/// Finalize srv/GetSensorData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
void
robotic_sol_interfaces__srv__GetSensorData_Response__fini(robotic_sol_interfaces__srv__GetSensorData_Response * msg);

/// Create srv/GetSensorData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotic_sol_interfaces__srv__GetSensorData_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
robotic_sol_interfaces__srv__GetSensorData_Response *
robotic_sol_interfaces__srv__GetSensorData_Response__create();

/// Destroy srv/GetSensorData message.
/**
 * It calls
 * robotic_sol_interfaces__srv__GetSensorData_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
void
robotic_sol_interfaces__srv__GetSensorData_Response__destroy(robotic_sol_interfaces__srv__GetSensorData_Response * msg);

/// Check for srv/GetSensorData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
bool
robotic_sol_interfaces__srv__GetSensorData_Response__are_equal(const robotic_sol_interfaces__srv__GetSensorData_Response * lhs, const robotic_sol_interfaces__srv__GetSensorData_Response * rhs);

/// Copy a srv/GetSensorData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
bool
robotic_sol_interfaces__srv__GetSensorData_Response__copy(
  const robotic_sol_interfaces__srv__GetSensorData_Response * input,
  robotic_sol_interfaces__srv__GetSensorData_Response * output);

/// Initialize array of srv/GetSensorData messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotic_sol_interfaces__srv__GetSensorData_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
bool
robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__init(robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetSensorData messages.
/**
 * It calls
 * robotic_sol_interfaces__srv__GetSensorData_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
void
robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__fini(robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * array);

/// Create array of srv/GetSensorData messages.
/**
 * It allocates the memory for the array and calls
 * robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
robotic_sol_interfaces__srv__GetSensorData_Response__Sequence *
robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetSensorData messages.
/**
 * It calls
 * robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
void
robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__destroy(robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * array);

/// Check for srv/GetSensorData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
bool
robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__are_equal(const robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * lhs, const robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * rhs);

/// Copy an array of srv/GetSensorData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_sol_interfaces
bool
robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__copy(
  const robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * input,
  robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIC_SOL_INTERFACES__SRV__DETAIL__GET_SENSOR_DATA__FUNCTIONS_H_
