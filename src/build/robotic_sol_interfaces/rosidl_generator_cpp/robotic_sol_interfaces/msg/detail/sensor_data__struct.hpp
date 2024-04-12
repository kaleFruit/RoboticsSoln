// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotic_sol_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_SOL_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
#define ROBOTIC_SOL_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotic_sol_interfaces__msg__SensorData __attribute__((deprecated))
#else
# define DEPRECATED__robotic_sol_interfaces__msg__SensorData __declspec(deprecated)
#endif

namespace robotic_sol_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorData_
{
  using Type = SensorData_<ContainerAllocator>;

  explicit SensorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_index = 0ll;
    }
  }

  explicit SensorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_index = 0ll;
    }
  }

  // field types and members
  using _sensor_index_type =
    int64_t;
  _sensor_index_type sensor_index;
  using _data_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__sensor_index(
    const int64_t & _arg)
  {
    this->sensor_index = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotic_sol_interfaces::msg::SensorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotic_sol_interfaces::msg::SensorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotic_sol_interfaces::msg::SensorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotic_sol_interfaces::msg::SensorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotic_sol_interfaces::msg::SensorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotic_sol_interfaces::msg::SensorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotic_sol_interfaces::msg::SensorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotic_sol_interfaces::msg::SensorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotic_sol_interfaces::msg::SensorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotic_sol_interfaces::msg::SensorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotic_sol_interfaces__msg__SensorData
    std::shared_ptr<robotic_sol_interfaces::msg::SensorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotic_sol_interfaces__msg__SensorData
    std::shared_ptr<robotic_sol_interfaces::msg::SensorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorData_ & other) const
  {
    if (this->sensor_index != other.sensor_index) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorData_

// alias to use template instance with default allocator
using SensorData =
  robotic_sol_interfaces::msg::SensorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotic_sol_interfaces

#endif  // ROBOTIC_SOL_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
