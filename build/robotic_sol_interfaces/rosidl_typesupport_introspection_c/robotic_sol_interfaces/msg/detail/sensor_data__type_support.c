// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotic_sol_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotic_sol_interfaces/msg/detail/sensor_data__rosidl_typesupport_introspection_c.h"
#include "robotic_sol_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotic_sol_interfaces/msg/detail/sensor_data__functions.h"
#include "robotic_sol_interfaces/msg/detail/sensor_data__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotic_sol_interfaces__msg__SensorData__init(message_memory);
}

void robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_fini_function(void * message_memory)
{
  robotic_sol_interfaces__msg__SensorData__fini(message_memory);
}

size_t robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__size_function__SensorData__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__get_const_function__SensorData__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__get_function__SensorData__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__fetch_function__SensorData__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__get_const_function__SensorData__data(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__assign_function__SensorData__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__get_function__SensorData__data(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__resize_function__SensorData__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[2] = {
  {
    "sensor_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotic_sol_interfaces__msg__SensorData, sensor_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotic_sol_interfaces__msg__SensorData, data),  // bytes offset in struct
    NULL,  // default value
    robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__size_function__SensorData__data,  // size() function pointer
    robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__get_const_function__SensorData__data,  // get_const(index) function pointer
    robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__get_function__SensorData__data,  // get(index) function pointer
    robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__fetch_function__SensorData__data,  // fetch(index, &value) function pointer
    robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__assign_function__SensorData__data,  // assign(index, value) function pointer
    robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__resize_function__SensorData__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_members = {
  "robotic_sol_interfaces__msg",  // message namespace
  "SensorData",  // message name
  2,  // number of fields
  sizeof(robotic_sol_interfaces__msg__SensorData),
  robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array,  // message members
  robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_init_function,  // function to initialize message memory (memory has to be allocated)
  robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle = {
  0,
  &robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotic_sol_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotic_sol_interfaces, msg, SensorData)() {
  if (!robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle.typesupport_identifier) {
    robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotic_sol_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
