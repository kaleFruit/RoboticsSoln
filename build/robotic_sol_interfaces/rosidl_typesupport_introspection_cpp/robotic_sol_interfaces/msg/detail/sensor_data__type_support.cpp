// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robotic_sol_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robotic_sol_interfaces/msg/detail/sensor_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotic_sol_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SensorData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotic_sol_interfaces::msg::SensorData(_init);
}

void SensorData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotic_sol_interfaces::msg::SensorData *>(message_memory);
  typed_message->~SensorData();
}

size_t size_function__SensorData__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorData__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SensorData__data(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SensorData__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SensorData__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SensorData__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorData_message_member_array[2] = {
  {
    "sensor_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotic_sol_interfaces::msg::SensorData, sensor_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotic_sol_interfaces::msg::SensorData, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__data,  // size() function pointer
    get_const_function__SensorData__data,  // get_const(index) function pointer
    get_function__SensorData__data,  // get(index) function pointer
    fetch_function__SensorData__data,  // fetch(index, &value) function pointer
    assign_function__SensorData__data,  // assign(index, value) function pointer
    resize_function__SensorData__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorData_message_members = {
  "robotic_sol_interfaces::msg",  // message namespace
  "SensorData",  // message name
  2,  // number of fields
  sizeof(robotic_sol_interfaces::msg::SensorData),
  SensorData_message_member_array,  // message members
  SensorData_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robotic_sol_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotic_sol_interfaces::msg::SensorData>()
{
  return &::robotic_sol_interfaces::msg::rosidl_typesupport_introspection_cpp::SensorData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotic_sol_interfaces, msg, SensorData)() {
  return &::robotic_sol_interfaces::msg::rosidl_typesupport_introspection_cpp::SensorData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
