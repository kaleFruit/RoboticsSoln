// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotic_sol_interfaces:srv/GetSensorData.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_SOL_INTERFACES__SRV__DETAIL__GET_SENSOR_DATA__BUILDER_HPP_
#define ROBOTIC_SOL_INTERFACES__SRV__DETAIL__GET_SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotic_sol_interfaces/srv/detail/get_sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotic_sol_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSensorData_Request_sensor_index
{
public:
  Init_GetSensorData_Request_sensor_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotic_sol_interfaces::srv::GetSensorData_Request sensor_index(::robotic_sol_interfaces::srv::GetSensorData_Request::_sensor_index_type arg)
  {
    msg_.sensor_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotic_sol_interfaces::srv::GetSensorData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotic_sol_interfaces::srv::GetSensorData_Request>()
{
  return robotic_sol_interfaces::srv::builder::Init_GetSensorData_Request_sensor_index();
}

}  // namespace robotic_sol_interfaces


namespace robotic_sol_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSensorData_Response_data
{
public:
  Init_GetSensorData_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotic_sol_interfaces::srv::GetSensorData_Response data(::robotic_sol_interfaces::srv::GetSensorData_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotic_sol_interfaces::srv::GetSensorData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotic_sol_interfaces::srv::GetSensorData_Response>()
{
  return robotic_sol_interfaces::srv::builder::Init_GetSensorData_Response_data();
}

}  // namespace robotic_sol_interfaces

#endif  // ROBOTIC_SOL_INTERFACES__SRV__DETAIL__GET_SENSOR_DATA__BUILDER_HPP_
