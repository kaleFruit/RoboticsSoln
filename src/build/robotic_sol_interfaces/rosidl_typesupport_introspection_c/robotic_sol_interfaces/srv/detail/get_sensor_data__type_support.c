// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotic_sol_interfaces:srv/GetSensorData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotic_sol_interfaces/srv/detail/get_sensor_data__rosidl_typesupport_introspection_c.h"
#include "robotic_sol_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotic_sol_interfaces/srv/detail/get_sensor_data__functions.h"
#include "robotic_sol_interfaces/srv/detail/get_sensor_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robotic_sol_interfaces__srv__GetSensorData_Request__rosidl_typesupport_introspection_c__GetSensorData_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotic_sol_interfaces__srv__GetSensorData_Request__init(message_memory);
}

void robotic_sol_interfaces__srv__GetSensorData_Request__rosidl_typesupport_introspection_c__GetSensorData_Request_fini_function(void * message_memory)
{
  robotic_sol_interfaces__srv__GetSensorData_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotic_sol_interfaces__srv__GetSensorData_Request__rosidl_typesupport_introspection_c__GetSensorData_Request_message_member_array[1] = {
  {
    "sensor_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotic_sol_interfaces__srv__GetSensorData_Request, sensor_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotic_sol_interfaces__srv__GetSensorData_Request__rosidl_typesupport_introspection_c__GetSensorData_Request_message_members = {
  "robotic_sol_interfaces__srv",  // message namespace
  "GetSensorData_Request",  // message name
  1,  // number of fields
  sizeof(robotic_sol_interfaces__srv__GetSensorData_Request),
  robotic_sol_interfaces__srv__GetSensorData_Request__rosidl_typesupport_introspection_c__GetSensorData_Request_message_member_array,  // message members
  robotic_sol_interfaces__srv__GetSensorData_Request__rosidl_typesupport_introspection_c__GetSensorData_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robotic_sol_interfaces__srv__GetSensorData_Request__rosidl_typesupport_introspection_c__GetSensorData_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotic_sol_interfaces__srv__GetSensorData_Request__rosidl_typesupport_introspection_c__GetSensorData_Request_message_type_support_handle = {
  0,
  &robotic_sol_interfaces__srv__GetSensorData_Request__rosidl_typesupport_introspection_c__GetSensorData_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotic_sol_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotic_sol_interfaces, srv, GetSensorData_Request)() {
  if (!robotic_sol_interfaces__srv__GetSensorData_Request__rosidl_typesupport_introspection_c__GetSensorData_Request_message_type_support_handle.typesupport_identifier) {
    robotic_sol_interfaces__srv__GetSensorData_Request__rosidl_typesupport_introspection_c__GetSensorData_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotic_sol_interfaces__srv__GetSensorData_Request__rosidl_typesupport_introspection_c__GetSensorData_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robotic_sol_interfaces/srv/detail/get_sensor_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robotic_sol_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robotic_sol_interfaces/srv/detail/get_sensor_data__functions.h"
// already included above
// #include "robotic_sol_interfaces/srv/detail/get_sensor_data__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__GetSensorData_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotic_sol_interfaces__srv__GetSensorData_Response__init(message_memory);
}

void robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__GetSensorData_Response_fini_function(void * message_memory)
{
  robotic_sol_interfaces__srv__GetSensorData_Response__fini(message_memory);
}

size_t robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__size_function__GetSensorData_Response__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorData_Response__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__get_function__GetSensorData_Response__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorData_Response__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorData_Response__data(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorData_Response__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__get_function__GetSensorData_Response__data(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorData_Response__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__GetSensorData_Response_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotic_sol_interfaces__srv__GetSensorData_Response, data),  // bytes offset in struct
    NULL,  // default value
    robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__size_function__GetSensorData_Response__data,  // size() function pointer
    robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorData_Response__data,  // get_const(index) function pointer
    robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__get_function__GetSensorData_Response__data,  // get(index) function pointer
    robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorData_Response__data,  // fetch(index, &value) function pointer
    robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorData_Response__data,  // assign(index, value) function pointer
    robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorData_Response__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__GetSensorData_Response_message_members = {
  "robotic_sol_interfaces__srv",  // message namespace
  "GetSensorData_Response",  // message name
  1,  // number of fields
  sizeof(robotic_sol_interfaces__srv__GetSensorData_Response),
  robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__GetSensorData_Response_message_member_array,  // message members
  robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__GetSensorData_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__GetSensorData_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__GetSensorData_Response_message_type_support_handle = {
  0,
  &robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__GetSensorData_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotic_sol_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotic_sol_interfaces, srv, GetSensorData_Response)() {
  if (!robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__GetSensorData_Response_message_type_support_handle.typesupport_identifier) {
    robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__GetSensorData_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotic_sol_interfaces__srv__GetSensorData_Response__rosidl_typesupport_introspection_c__GetSensorData_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robotic_sol_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robotic_sol_interfaces/srv/detail/get_sensor_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robotic_sol_interfaces__srv__detail__get_sensor_data__rosidl_typesupport_introspection_c__GetSensorData_service_members = {
  "robotic_sol_interfaces__srv",  // service namespace
  "GetSensorData",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robotic_sol_interfaces__srv__detail__get_sensor_data__rosidl_typesupport_introspection_c__GetSensorData_Request_message_type_support_handle,
  NULL  // response message
  // robotic_sol_interfaces__srv__detail__get_sensor_data__rosidl_typesupport_introspection_c__GetSensorData_Response_message_type_support_handle
};

static rosidl_service_type_support_t robotic_sol_interfaces__srv__detail__get_sensor_data__rosidl_typesupport_introspection_c__GetSensorData_service_type_support_handle = {
  0,
  &robotic_sol_interfaces__srv__detail__get_sensor_data__rosidl_typesupport_introspection_c__GetSensorData_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotic_sol_interfaces, srv, GetSensorData_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotic_sol_interfaces, srv, GetSensorData_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotic_sol_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotic_sol_interfaces, srv, GetSensorData)() {
  if (!robotic_sol_interfaces__srv__detail__get_sensor_data__rosidl_typesupport_introspection_c__GetSensorData_service_type_support_handle.typesupport_identifier) {
    robotic_sol_interfaces__srv__detail__get_sensor_data__rosidl_typesupport_introspection_c__GetSensorData_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robotic_sol_interfaces__srv__detail__get_sensor_data__rosidl_typesupport_introspection_c__GetSensorData_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotic_sol_interfaces, srv, GetSensorData_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotic_sol_interfaces, srv, GetSensorData_Response)()->data;
  }

  return &robotic_sol_interfaces__srv__detail__get_sensor_data__rosidl_typesupport_introspection_c__GetSensorData_service_type_support_handle;
}
