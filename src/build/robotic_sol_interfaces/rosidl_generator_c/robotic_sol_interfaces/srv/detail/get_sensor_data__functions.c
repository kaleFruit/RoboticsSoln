// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotic_sol_interfaces:srv/GetSensorData.idl
// generated code does not contain a copyright notice
#include "robotic_sol_interfaces/srv/detail/get_sensor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
robotic_sol_interfaces__srv__GetSensorData_Request__init(robotic_sol_interfaces__srv__GetSensorData_Request * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_index
  return true;
}

void
robotic_sol_interfaces__srv__GetSensorData_Request__fini(robotic_sol_interfaces__srv__GetSensorData_Request * msg)
{
  if (!msg) {
    return;
  }
  // sensor_index
}

bool
robotic_sol_interfaces__srv__GetSensorData_Request__are_equal(const robotic_sol_interfaces__srv__GetSensorData_Request * lhs, const robotic_sol_interfaces__srv__GetSensorData_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_index
  if (lhs->sensor_index != rhs->sensor_index) {
    return false;
  }
  return true;
}

bool
robotic_sol_interfaces__srv__GetSensorData_Request__copy(
  const robotic_sol_interfaces__srv__GetSensorData_Request * input,
  robotic_sol_interfaces__srv__GetSensorData_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_index
  output->sensor_index = input->sensor_index;
  return true;
}

robotic_sol_interfaces__srv__GetSensorData_Request *
robotic_sol_interfaces__srv__GetSensorData_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotic_sol_interfaces__srv__GetSensorData_Request * msg = (robotic_sol_interfaces__srv__GetSensorData_Request *)allocator.allocate(sizeof(robotic_sol_interfaces__srv__GetSensorData_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotic_sol_interfaces__srv__GetSensorData_Request));
  bool success = robotic_sol_interfaces__srv__GetSensorData_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotic_sol_interfaces__srv__GetSensorData_Request__destroy(robotic_sol_interfaces__srv__GetSensorData_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotic_sol_interfaces__srv__GetSensorData_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__init(robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotic_sol_interfaces__srv__GetSensorData_Request * data = NULL;

  if (size) {
    data = (robotic_sol_interfaces__srv__GetSensorData_Request *)allocator.zero_allocate(size, sizeof(robotic_sol_interfaces__srv__GetSensorData_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotic_sol_interfaces__srv__GetSensorData_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotic_sol_interfaces__srv__GetSensorData_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__fini(robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotic_sol_interfaces__srv__GetSensorData_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotic_sol_interfaces__srv__GetSensorData_Request__Sequence *
robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * array = (robotic_sol_interfaces__srv__GetSensorData_Request__Sequence *)allocator.allocate(sizeof(robotic_sol_interfaces__srv__GetSensorData_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__destroy(robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__are_equal(const robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * lhs, const robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotic_sol_interfaces__srv__GetSensorData_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotic_sol_interfaces__srv__GetSensorData_Request__Sequence__copy(
  const robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * input,
  robotic_sol_interfaces__srv__GetSensorData_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotic_sol_interfaces__srv__GetSensorData_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotic_sol_interfaces__srv__GetSensorData_Request * data =
      (robotic_sol_interfaces__srv__GetSensorData_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotic_sol_interfaces__srv__GetSensorData_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotic_sol_interfaces__srv__GetSensorData_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotic_sol_interfaces__srv__GetSensorData_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robotic_sol_interfaces__srv__GetSensorData_Response__init(robotic_sol_interfaces__srv__GetSensorData_Response * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__init(&msg->data, 0)) {
    robotic_sol_interfaces__srv__GetSensorData_Response__fini(msg);
    return false;
  }
  return true;
}

void
robotic_sol_interfaces__srv__GetSensorData_Response__fini(robotic_sol_interfaces__srv__GetSensorData_Response * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__double__Sequence__fini(&msg->data);
}

bool
robotic_sol_interfaces__srv__GetSensorData_Response__are_equal(const robotic_sol_interfaces__srv__GetSensorData_Response * lhs, const robotic_sol_interfaces__srv__GetSensorData_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
robotic_sol_interfaces__srv__GetSensorData_Response__copy(
  const robotic_sol_interfaces__srv__GetSensorData_Response * input,
  robotic_sol_interfaces__srv__GetSensorData_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

robotic_sol_interfaces__srv__GetSensorData_Response *
robotic_sol_interfaces__srv__GetSensorData_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotic_sol_interfaces__srv__GetSensorData_Response * msg = (robotic_sol_interfaces__srv__GetSensorData_Response *)allocator.allocate(sizeof(robotic_sol_interfaces__srv__GetSensorData_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotic_sol_interfaces__srv__GetSensorData_Response));
  bool success = robotic_sol_interfaces__srv__GetSensorData_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotic_sol_interfaces__srv__GetSensorData_Response__destroy(robotic_sol_interfaces__srv__GetSensorData_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotic_sol_interfaces__srv__GetSensorData_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__init(robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotic_sol_interfaces__srv__GetSensorData_Response * data = NULL;

  if (size) {
    data = (robotic_sol_interfaces__srv__GetSensorData_Response *)allocator.zero_allocate(size, sizeof(robotic_sol_interfaces__srv__GetSensorData_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotic_sol_interfaces__srv__GetSensorData_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotic_sol_interfaces__srv__GetSensorData_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__fini(robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotic_sol_interfaces__srv__GetSensorData_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotic_sol_interfaces__srv__GetSensorData_Response__Sequence *
robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * array = (robotic_sol_interfaces__srv__GetSensorData_Response__Sequence *)allocator.allocate(sizeof(robotic_sol_interfaces__srv__GetSensorData_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__destroy(robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__are_equal(const robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * lhs, const robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotic_sol_interfaces__srv__GetSensorData_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotic_sol_interfaces__srv__GetSensorData_Response__Sequence__copy(
  const robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * input,
  robotic_sol_interfaces__srv__GetSensorData_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotic_sol_interfaces__srv__GetSensorData_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotic_sol_interfaces__srv__GetSensorData_Response * data =
      (robotic_sol_interfaces__srv__GetSensorData_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotic_sol_interfaces__srv__GetSensorData_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotic_sol_interfaces__srv__GetSensorData_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotic_sol_interfaces__srv__GetSensorData_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
