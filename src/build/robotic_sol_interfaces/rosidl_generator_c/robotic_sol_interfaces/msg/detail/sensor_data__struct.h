// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotic_sol_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_SOL_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
#define ROBOTIC_SOL_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SensorData in the package robotic_sol_interfaces.
typedef struct robotic_sol_interfaces__msg__SensorData
{
  int64_t sensor_index;
  rosidl_runtime_c__double__Sequence data;
} robotic_sol_interfaces__msg__SensorData;

// Struct for a sequence of robotic_sol_interfaces__msg__SensorData.
typedef struct robotic_sol_interfaces__msg__SensorData__Sequence
{
  robotic_sol_interfaces__msg__SensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotic_sol_interfaces__msg__SensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIC_SOL_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
