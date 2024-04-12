// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotic_sol_interfaces:srv/GetSensorData.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_SOL_INTERFACES__SRV__DETAIL__GET_SENSOR_DATA__STRUCT_H_
#define ROBOTIC_SOL_INTERFACES__SRV__DETAIL__GET_SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetSensorData in the package robotic_sol_interfaces.
typedef struct robotic_sol_interfaces__srv__GetSensorData_Request
{
  int64_t sensor_index;
} robotic_sol_interfaces__srv__GetSensorData_Request;

// Struct for a sequence of robotic_sol_interfaces__srv__GetSensorData_Request.
typedef struct robotic_sol_interfaces__srv__GetSensorData_Request__Sequence
{
  robotic_sol_interfaces__srv__GetSensorData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotic_sol_interfaces__srv__GetSensorData_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetSensorData in the package robotic_sol_interfaces.
typedef struct robotic_sol_interfaces__srv__GetSensorData_Response
{
  rosidl_runtime_c__double__Sequence data;
} robotic_sol_interfaces__srv__GetSensorData_Response;

// Struct for a sequence of robotic_sol_interfaces__srv__GetSensorData_Response.
typedef struct robotic_sol_interfaces__srv__GetSensorData_Response__Sequence
{
  robotic_sol_interfaces__srv__GetSensorData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotic_sol_interfaces__srv__GetSensorData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIC_SOL_INTERFACES__SRV__DETAIL__GET_SENSOR_DATA__STRUCT_H_
