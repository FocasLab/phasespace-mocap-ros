// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from phasespace_msgs:msg/Rigid.idl
// generated code does not contain a copyright notice
#include "phasespace_msgs/msg/detail/rigid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
phasespace_msgs__msg__Rigid__init(phasespace_msgs__msg__Rigid * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // flags
  // time
  // x
  // y
  // z
  // qw
  // qx
  // qy
  // qz
  // cond
  return true;
}

void
phasespace_msgs__msg__Rigid__fini(phasespace_msgs__msg__Rigid * msg)
{
  if (!msg) {
    return;
  }
  // id
  // flags
  // time
  // x
  // y
  // z
  // qw
  // qx
  // qy
  // qz
  // cond
}

bool
phasespace_msgs__msg__Rigid__are_equal(const phasespace_msgs__msg__Rigid * lhs, const phasespace_msgs__msg__Rigid * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // qw
  if (lhs->qw != rhs->qw) {
    return false;
  }
  // qx
  if (lhs->qx != rhs->qx) {
    return false;
  }
  // qy
  if (lhs->qy != rhs->qy) {
    return false;
  }
  // qz
  if (lhs->qz != rhs->qz) {
    return false;
  }
  // cond
  if (lhs->cond != rhs->cond) {
    return false;
  }
  return true;
}

bool
phasespace_msgs__msg__Rigid__copy(
  const phasespace_msgs__msg__Rigid * input,
  phasespace_msgs__msg__Rigid * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // flags
  output->flags = input->flags;
  // time
  output->time = input->time;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // qw
  output->qw = input->qw;
  // qx
  output->qx = input->qx;
  // qy
  output->qy = input->qy;
  // qz
  output->qz = input->qz;
  // cond
  output->cond = input->cond;
  return true;
}

phasespace_msgs__msg__Rigid *
phasespace_msgs__msg__Rigid__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phasespace_msgs__msg__Rigid * msg = (phasespace_msgs__msg__Rigid *)allocator.allocate(sizeof(phasespace_msgs__msg__Rigid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(phasespace_msgs__msg__Rigid));
  bool success = phasespace_msgs__msg__Rigid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
phasespace_msgs__msg__Rigid__destroy(phasespace_msgs__msg__Rigid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    phasespace_msgs__msg__Rigid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
phasespace_msgs__msg__Rigid__Sequence__init(phasespace_msgs__msg__Rigid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phasespace_msgs__msg__Rigid * data = NULL;

  if (size) {
    data = (phasespace_msgs__msg__Rigid *)allocator.zero_allocate(size, sizeof(phasespace_msgs__msg__Rigid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = phasespace_msgs__msg__Rigid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        phasespace_msgs__msg__Rigid__fini(&data[i - 1]);
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
phasespace_msgs__msg__Rigid__Sequence__fini(phasespace_msgs__msg__Rigid__Sequence * array)
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
      phasespace_msgs__msg__Rigid__fini(&array->data[i]);
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

phasespace_msgs__msg__Rigid__Sequence *
phasespace_msgs__msg__Rigid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  phasespace_msgs__msg__Rigid__Sequence * array = (phasespace_msgs__msg__Rigid__Sequence *)allocator.allocate(sizeof(phasespace_msgs__msg__Rigid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = phasespace_msgs__msg__Rigid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
phasespace_msgs__msg__Rigid__Sequence__destroy(phasespace_msgs__msg__Rigid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    phasespace_msgs__msg__Rigid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
phasespace_msgs__msg__Rigid__Sequence__are_equal(const phasespace_msgs__msg__Rigid__Sequence * lhs, const phasespace_msgs__msg__Rigid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!phasespace_msgs__msg__Rigid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
phasespace_msgs__msg__Rigid__Sequence__copy(
  const phasespace_msgs__msg__Rigid__Sequence * input,
  phasespace_msgs__msg__Rigid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(phasespace_msgs__msg__Rigid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    phasespace_msgs__msg__Rigid * data =
      (phasespace_msgs__msg__Rigid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!phasespace_msgs__msg__Rigid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          phasespace_msgs__msg__Rigid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!phasespace_msgs__msg__Rigid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
