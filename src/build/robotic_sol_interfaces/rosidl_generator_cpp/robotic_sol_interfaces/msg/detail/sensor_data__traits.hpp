// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotic_sol_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_SOL_INTERFACES__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
#define ROBOTIC_SOL_INTERFACES__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotic_sol_interfaces/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotic_sol_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_index
  {
    out << "sensor_index: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_index, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_index: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_index, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robotic_sol_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotic_sol_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotic_sol_interfaces::msg::SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotic_sol_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotic_sol_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotic_sol_interfaces::msg::SensorData & msg)
{
  return robotic_sol_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotic_sol_interfaces::msg::SensorData>()
{
  return "robotic_sol_interfaces::msg::SensorData";
}

template<>
inline const char * name<robotic_sol_interfaces::msg::SensorData>()
{
  return "robotic_sol_interfaces/msg/SensorData";
}

template<>
struct has_fixed_size<robotic_sol_interfaces::msg::SensorData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotic_sol_interfaces::msg::SensorData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robotic_sol_interfaces::msg::SensorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIC_SOL_INTERFACES__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
