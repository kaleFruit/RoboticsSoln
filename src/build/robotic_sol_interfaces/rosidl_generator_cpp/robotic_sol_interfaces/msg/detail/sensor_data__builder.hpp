// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotic_sol_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_SOL_INTERFACES__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define ROBOTIC_SOL_INTERFACES__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotic_sol_interfaces/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotic_sol_interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorData_data
{
public:
  explicit Init_SensorData_data(::robotic_sol_interfaces::msg::SensorData & msg)
  : msg_(msg)
  {}
  ::robotic_sol_interfaces::msg::SensorData data(::robotic_sol_interfaces::msg::SensorData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotic_sol_interfaces::msg::SensorData msg_;
};

class Init_SensorData_sensor_index
{
public:
  Init_SensorData_sensor_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_data sensor_index(::robotic_sol_interfaces::msg::SensorData::_sensor_index_type arg)
  {
    msg_.sensor_index = std::move(arg);
    return Init_SensorData_data(msg_);
  }

private:
  ::robotic_sol_interfaces::msg::SensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotic_sol_interfaces::msg::SensorData>()
{
  return robotic_sol_interfaces::msg::builder::Init_SensorData_sensor_index();
}

}  // namespace robotic_sol_interfaces

#endif  // ROBOTIC_SOL_INTERFACES__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
