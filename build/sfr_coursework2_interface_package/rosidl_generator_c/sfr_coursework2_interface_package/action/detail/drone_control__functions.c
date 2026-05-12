// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sfr_coursework2_interface_package:action/DroneControl.idl
// generated code does not contain a copyright notice
#include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `desired_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
sfr_coursework2_interface_package__action__DroneControl_Goal__init(sfr_coursework2_interface_package__action__DroneControl_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // desired_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->desired_pose)) {
    sfr_coursework2_interface_package__action__DroneControl_Goal__fini(msg);
    return false;
  }
  return true;
}

void
sfr_coursework2_interface_package__action__DroneControl_Goal__fini(sfr_coursework2_interface_package__action__DroneControl_Goal * msg)
{
  if (!msg) {
    return;
  }
  // desired_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->desired_pose);
}

bool
sfr_coursework2_interface_package__action__DroneControl_Goal__are_equal(const sfr_coursework2_interface_package__action__DroneControl_Goal * lhs, const sfr_coursework2_interface_package__action__DroneControl_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // desired_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->desired_pose), &(rhs->desired_pose)))
  {
    return false;
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_Goal__copy(
  const sfr_coursework2_interface_package__action__DroneControl_Goal * input,
  sfr_coursework2_interface_package__action__DroneControl_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // desired_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->desired_pose), &(output->desired_pose)))
  {
    return false;
  }
  return true;
}

sfr_coursework2_interface_package__action__DroneControl_Goal *
sfr_coursework2_interface_package__action__DroneControl_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_Goal * msg = (sfr_coursework2_interface_package__action__DroneControl_Goal *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sfr_coursework2_interface_package__action__DroneControl_Goal));
  bool success = sfr_coursework2_interface_package__action__DroneControl_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sfr_coursework2_interface_package__action__DroneControl_Goal__destroy(sfr_coursework2_interface_package__action__DroneControl_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sfr_coursework2_interface_package__action__DroneControl_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence__init(sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_Goal * data = NULL;

  if (size) {
    data = (sfr_coursework2_interface_package__action__DroneControl_Goal *)allocator.zero_allocate(size, sizeof(sfr_coursework2_interface_package__action__DroneControl_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sfr_coursework2_interface_package__action__DroneControl_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sfr_coursework2_interface_package__action__DroneControl_Goal__fini(&data[i - 1]);
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
sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence__fini(sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence * array)
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
      sfr_coursework2_interface_package__action__DroneControl_Goal__fini(&array->data[i]);
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

sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence *
sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence * array = (sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence__destroy(sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence__are_equal(const sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence * lhs, const sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence__copy(
  const sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence * input,
  sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sfr_coursework2_interface_package__action__DroneControl_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sfr_coursework2_interface_package__action__DroneControl_Goal * data =
      (sfr_coursework2_interface_package__action__DroneControl_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sfr_coursework2_interface_package__action__DroneControl_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sfr_coursework2_interface_package__action__DroneControl_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
sfr_coursework2_interface_package__action__DroneControl_Result__init(sfr_coursework2_interface_package__action__DroneControl_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
sfr_coursework2_interface_package__action__DroneControl_Result__fini(sfr_coursework2_interface_package__action__DroneControl_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
sfr_coursework2_interface_package__action__DroneControl_Result__are_equal(const sfr_coursework2_interface_package__action__DroneControl_Result * lhs, const sfr_coursework2_interface_package__action__DroneControl_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_Result__copy(
  const sfr_coursework2_interface_package__action__DroneControl_Result * input,
  sfr_coursework2_interface_package__action__DroneControl_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

sfr_coursework2_interface_package__action__DroneControl_Result *
sfr_coursework2_interface_package__action__DroneControl_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_Result * msg = (sfr_coursework2_interface_package__action__DroneControl_Result *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sfr_coursework2_interface_package__action__DroneControl_Result));
  bool success = sfr_coursework2_interface_package__action__DroneControl_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sfr_coursework2_interface_package__action__DroneControl_Result__destroy(sfr_coursework2_interface_package__action__DroneControl_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sfr_coursework2_interface_package__action__DroneControl_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sfr_coursework2_interface_package__action__DroneControl_Result__Sequence__init(sfr_coursework2_interface_package__action__DroneControl_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_Result * data = NULL;

  if (size) {
    data = (sfr_coursework2_interface_package__action__DroneControl_Result *)allocator.zero_allocate(size, sizeof(sfr_coursework2_interface_package__action__DroneControl_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sfr_coursework2_interface_package__action__DroneControl_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sfr_coursework2_interface_package__action__DroneControl_Result__fini(&data[i - 1]);
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
sfr_coursework2_interface_package__action__DroneControl_Result__Sequence__fini(sfr_coursework2_interface_package__action__DroneControl_Result__Sequence * array)
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
      sfr_coursework2_interface_package__action__DroneControl_Result__fini(&array->data[i]);
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

sfr_coursework2_interface_package__action__DroneControl_Result__Sequence *
sfr_coursework2_interface_package__action__DroneControl_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_Result__Sequence * array = (sfr_coursework2_interface_package__action__DroneControl_Result__Sequence *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sfr_coursework2_interface_package__action__DroneControl_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sfr_coursework2_interface_package__action__DroneControl_Result__Sequence__destroy(sfr_coursework2_interface_package__action__DroneControl_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sfr_coursework2_interface_package__action__DroneControl_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sfr_coursework2_interface_package__action__DroneControl_Result__Sequence__are_equal(const sfr_coursework2_interface_package__action__DroneControl_Result__Sequence * lhs, const sfr_coursework2_interface_package__action__DroneControl_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_Result__Sequence__copy(
  const sfr_coursework2_interface_package__action__DroneControl_Result__Sequence * input,
  sfr_coursework2_interface_package__action__DroneControl_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sfr_coursework2_interface_package__action__DroneControl_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sfr_coursework2_interface_package__action__DroneControl_Result * data =
      (sfr_coursework2_interface_package__action__DroneControl_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sfr_coursework2_interface_package__action__DroneControl_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sfr_coursework2_interface_package__action__DroneControl_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_pose`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
sfr_coursework2_interface_package__action__DroneControl_Feedback__init(sfr_coursework2_interface_package__action__DroneControl_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->current_pose)) {
    sfr_coursework2_interface_package__action__DroneControl_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
sfr_coursework2_interface_package__action__DroneControl_Feedback__fini(sfr_coursework2_interface_package__action__DroneControl_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->current_pose);
}

bool
sfr_coursework2_interface_package__action__DroneControl_Feedback__are_equal(const sfr_coursework2_interface_package__action__DroneControl_Feedback * lhs, const sfr_coursework2_interface_package__action__DroneControl_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->current_pose), &(rhs->current_pose)))
  {
    return false;
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_Feedback__copy(
  const sfr_coursework2_interface_package__action__DroneControl_Feedback * input,
  sfr_coursework2_interface_package__action__DroneControl_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->current_pose), &(output->current_pose)))
  {
    return false;
  }
  return true;
}

sfr_coursework2_interface_package__action__DroneControl_Feedback *
sfr_coursework2_interface_package__action__DroneControl_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_Feedback * msg = (sfr_coursework2_interface_package__action__DroneControl_Feedback *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sfr_coursework2_interface_package__action__DroneControl_Feedback));
  bool success = sfr_coursework2_interface_package__action__DroneControl_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sfr_coursework2_interface_package__action__DroneControl_Feedback__destroy(sfr_coursework2_interface_package__action__DroneControl_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sfr_coursework2_interface_package__action__DroneControl_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence__init(sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_Feedback * data = NULL;

  if (size) {
    data = (sfr_coursework2_interface_package__action__DroneControl_Feedback *)allocator.zero_allocate(size, sizeof(sfr_coursework2_interface_package__action__DroneControl_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sfr_coursework2_interface_package__action__DroneControl_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sfr_coursework2_interface_package__action__DroneControl_Feedback__fini(&data[i - 1]);
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
sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence__fini(sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence * array)
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
      sfr_coursework2_interface_package__action__DroneControl_Feedback__fini(&array->data[i]);
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

sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence *
sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence * array = (sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence__destroy(sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence__are_equal(const sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence * lhs, const sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence__copy(
  const sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence * input,
  sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sfr_coursework2_interface_package__action__DroneControl_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sfr_coursework2_interface_package__action__DroneControl_Feedback * data =
      (sfr_coursework2_interface_package__action__DroneControl_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sfr_coursework2_interface_package__action__DroneControl_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sfr_coursework2_interface_package__action__DroneControl_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__init(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!sfr_coursework2_interface_package__action__DroneControl_Goal__init(&msg->goal)) {
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__fini(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  sfr_coursework2_interface_package__action__DroneControl_Goal__fini(&msg->goal);
}

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__are_equal(const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request * lhs, const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!sfr_coursework2_interface_package__action__DroneControl_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__copy(
  const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request * input,
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!sfr_coursework2_interface_package__action__DroneControl_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request *
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request * msg = (sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request));
  bool success = sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__destroy(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence__init(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request * data = NULL;

  if (size) {
    data = (sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request *)allocator.zero_allocate(size, sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__fini(&data[i - 1]);
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
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence__fini(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence * array)
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
      sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__fini(&array->data[i]);
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

sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence *
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence * array = (sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence__destroy(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence__are_equal(const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence * lhs, const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence__copy(
  const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence * input,
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request * data =
      (sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__init(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__fini(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__are_equal(const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response * lhs, const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__copy(
  const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response * input,
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response *
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response * msg = (sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response));
  bool success = sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__destroy(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence__init(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response * data = NULL;

  if (size) {
    data = (sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response *)allocator.zero_allocate(size, sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__fini(&data[i - 1]);
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
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence__fini(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence * array)
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
      sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__fini(&array->data[i]);
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

sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence *
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence * array = (sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence__destroy(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence__are_equal(const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence * lhs, const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence__copy(
  const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence * input,
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response * data =
      (sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__init(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__fini(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__are_equal(const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event * lhs, const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__copy(
  const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event * input,
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event *
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event * msg = (sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event));
  bool success = sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__destroy(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence__init(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event * data = NULL;

  if (size) {
    data = (sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event *)allocator.zero_allocate(size, sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__fini(&data[i - 1]);
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
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence__fini(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence * array)
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
      sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__fini(&array->data[i]);
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

sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence *
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence * array = (sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence__destroy(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence__are_equal(const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence * lhs, const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence__copy(
  const sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence * input,
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event * data =
      (sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__init(sfr_coursework2_interface_package__action__DroneControl_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__fini(sfr_coursework2_interface_package__action__DroneControl_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__are_equal(const sfr_coursework2_interface_package__action__DroneControl_GetResult_Request * lhs, const sfr_coursework2_interface_package__action__DroneControl_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__copy(
  const sfr_coursework2_interface_package__action__DroneControl_GetResult_Request * input,
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

sfr_coursework2_interface_package__action__DroneControl_GetResult_Request *
sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Request * msg = (sfr_coursework2_interface_package__action__DroneControl_GetResult_Request *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Request));
  bool success = sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__destroy(sfr_coursework2_interface_package__action__DroneControl_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence__init(sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Request * data = NULL;

  if (size) {
    data = (sfr_coursework2_interface_package__action__DroneControl_GetResult_Request *)allocator.zero_allocate(size, sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__fini(&data[i - 1]);
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
sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence__fini(sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence * array)
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
      sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__fini(&array->data[i]);
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

sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence *
sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence * array = (sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence__destroy(sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence__are_equal(const sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence * lhs, const sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence__copy(
  const sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence * input,
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Request * data =
      (sfr_coursework2_interface_package__action__DroneControl_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__init(sfr_coursework2_interface_package__action__DroneControl_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!sfr_coursework2_interface_package__action__DroneControl_Result__init(&msg->result)) {
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__fini(sfr_coursework2_interface_package__action__DroneControl_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  sfr_coursework2_interface_package__action__DroneControl_Result__fini(&msg->result);
}

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__are_equal(const sfr_coursework2_interface_package__action__DroneControl_GetResult_Response * lhs, const sfr_coursework2_interface_package__action__DroneControl_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!sfr_coursework2_interface_package__action__DroneControl_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__copy(
  const sfr_coursework2_interface_package__action__DroneControl_GetResult_Response * input,
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!sfr_coursework2_interface_package__action__DroneControl_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

sfr_coursework2_interface_package__action__DroneControl_GetResult_Response *
sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Response * msg = (sfr_coursework2_interface_package__action__DroneControl_GetResult_Response *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Response));
  bool success = sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__destroy(sfr_coursework2_interface_package__action__DroneControl_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence__init(sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Response * data = NULL;

  if (size) {
    data = (sfr_coursework2_interface_package__action__DroneControl_GetResult_Response *)allocator.zero_allocate(size, sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__fini(&data[i - 1]);
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
sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence__fini(sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence * array)
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
      sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__fini(&array->data[i]);
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

sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence *
sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence * array = (sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence__destroy(sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence__are_equal(const sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence * lhs, const sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence__copy(
  const sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence * input,
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Response * data =
      (sfr_coursework2_interface_package__action__DroneControl_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__init(sfr_coursework2_interface_package__action__DroneControl_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence__init(&msg->request, 0)) {
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence__init(&msg->response, 0)) {
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__fini(sfr_coursework2_interface_package__action__DroneControl_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence__fini(&msg->request);
  // response
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence__fini(&msg->response);
}

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__are_equal(const sfr_coursework2_interface_package__action__DroneControl_GetResult_Event * lhs, const sfr_coursework2_interface_package__action__DroneControl_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__copy(
  const sfr_coursework2_interface_package__action__DroneControl_GetResult_Event * input,
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

sfr_coursework2_interface_package__action__DroneControl_GetResult_Event *
sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Event * msg = (sfr_coursework2_interface_package__action__DroneControl_GetResult_Event *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Event));
  bool success = sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__destroy(sfr_coursework2_interface_package__action__DroneControl_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence__init(sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Event * data = NULL;

  if (size) {
    data = (sfr_coursework2_interface_package__action__DroneControl_GetResult_Event *)allocator.zero_allocate(size, sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__fini(&data[i - 1]);
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
sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence__fini(sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence * array)
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
      sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__fini(&array->data[i]);
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

sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence *
sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence * array = (sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence__destroy(sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence__are_equal(const sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence * lhs, const sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence__copy(
  const sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence * input,
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sfr_coursework2_interface_package__action__DroneControl_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sfr_coursework2_interface_package__action__DroneControl_GetResult_Event * data =
      (sfr_coursework2_interface_package__action__DroneControl_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"

bool
sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__init(sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!sfr_coursework2_interface_package__action__DroneControl_Feedback__init(&msg->feedback)) {
    sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__fini(sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  sfr_coursework2_interface_package__action__DroneControl_Feedback__fini(&msg->feedback);
}

bool
sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__are_equal(const sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage * lhs, const sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!sfr_coursework2_interface_package__action__DroneControl_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__copy(
  const sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage * input,
  sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!sfr_coursework2_interface_package__action__DroneControl_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage *
sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage * msg = (sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage));
  bool success = sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__destroy(sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence__init(sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage * data = NULL;

  if (size) {
    data = (sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage *)allocator.zero_allocate(size, sizeof(sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__fini(&data[i - 1]);
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
sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence__fini(sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence * array)
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
      sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__fini(&array->data[i]);
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

sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence *
sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence * array = (sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence *)allocator.allocate(sizeof(sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence__destroy(sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence__are_equal(const sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence * lhs, const sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence__copy(
  const sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence * input,
  sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage * data =
      (sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
