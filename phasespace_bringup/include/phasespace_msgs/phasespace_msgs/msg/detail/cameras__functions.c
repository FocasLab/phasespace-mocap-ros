// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from phasespace_msgs:msg/Cameras.idl
// generated code does not contain a copyright notice
#include "phasespace_msgs/msg/detail/cameras__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cameras`
#include "phasespace_msgs/msg/detail/camera__functions.h"

bool
phasespace_msgs__msg__Cameras__init(phasespace_msgs__msg__Cameras * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    phasespace_msgs__msg__Cameras__fini(msg);
    return false;
  }
  // cameras
  if (!phasespace_msgs__msg__Camera__Sequence__init(&msg->cameras, 0)) {
    phasespace_msgs__msg__Cameras__fini(msg);
    return false;
  }
  return true;
}

void
phasespace_msgs__msg__Cameras__fini(phasespace_msgs__msg__Cameras * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cameras
  phasespace_msgs__msg__Camera__Sequence__fini(&msg->cameras);
}

bool
phasespace_msgs__msg__Cameras__are_equal(const phasespace_msgs__msg__Cameras * lhs, const phasespace_msgs__msg__Cameras * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // cameras
  if (!phasespace_msgs__msg__Camera__Sequence__are_equal(
      &(lhs->cameras), &(rhs->cameras)))
  {
    return false;
  }
  return true;
}

bool
phasespace_msgs__msg__Cameras__copy(
  const phasespace_msgs__msg__Cameras * input,
  phasespace_msgs__msg__Cameras * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // cameras
  if (!phasespace_msgs__msg__Camera__Sequence__copy(
      &(input->cameras), &(output->cameras)))
  {
    return false;
  }
  return true;
}

phasespace_msgs__msg__Cameras *
phasespace_msgs__msg__Cameras__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phasespace_msgs__msg__Cameras * msg = (phasespace_msgs__msg__Cameras *)allocator.allocate(sizeof(phasespace_msgs__msg__Cameras), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(phasespace_msgs__msg__Cameras));
  bool success = phasespace_msgs__msg__Cameras__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
phasespace_msgs__msg__Cameras__destroy(phasespace_msgs__msg__Cameras * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    phasespace_msgs__msg__Cameras__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
phasespace_msgs__msg__Cameras__Sequence__init(phasespace_msgs__msg__Cameras__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phasespace_msgs__msg__Cameras * data = NULL;

  if (size) {
    data = (phasespace_msgs__msg__Cameras *)allocator.zero_allocate(size, sizeof(phasespace_msgs__msg__Cameras), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = phasespace_msgs__msg__Cameras__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        phasespace_msgs__msg__Cameras__fini(&data[i - 1]);
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
phasespace_msgs__msg__Cameras__Sequence__fini(phasespace_msgs__msg__Cameras__Sequence * array)
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
      phasespace_msgs__msg__Cameras__fini(&array->data[i]);
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

phasespace_msgs__msg__Cameras__Sequence *
phasespace_msgs__msg__Cameras__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phasespace_msgs__msg__Cameras__Sequence * array = (phasespace_msgs__msg__Cameras__Sequence *)allocator.allocate(sizeof(phasespace_msgs__msg__Cameras__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = phasespace_msgs__msg__Cameras__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
phasespace_msgs__msg__Cameras__Sequence__destroy(phasespace_msgs__msg__Cameras__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    phasespace_msgs__msg__Cameras__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
phasespace_msgs__msg__Cameras__Sequence__are_equal(const phasespace_msgs__msg__Cameras__Sequence * lhs, const phasespace_msgs__msg__Cameras__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!phasespace_msgs__msg__Cameras__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
phasespace_msgs__msg__Cameras__Sequence__copy(
  const phasespace_msgs__msg__Cameras__Sequence * input,
  phasespace_msgs__msg__Cameras__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(phasespace_msgs__msg__Cameras);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    phasespace_msgs__msg__Cameras * data =
      (phasespace_msgs__msg__Cameras *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!phasespace_msgs__msg__Cameras__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          phasespace_msgs__msg__Cameras__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!phasespace_msgs__msg__Cameras__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
