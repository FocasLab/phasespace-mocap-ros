// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from phasespace_msgs:msg/Cameras.idl
// generated code does not contain a copyright notice

#ifndef PHASESPACE_MSGS__MSG__DETAIL__CAMERAS__STRUCT_H_
#define PHASESPACE_MSGS__MSG__DETAIL__CAMERAS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'cameras'
#include "phasespace_msgs/msg/detail/camera__struct.h"

/// Struct defined in msg/Cameras in the package phasespace_msgs.
/**
  * Messages
 */
typedef struct phasespace_msgs__msg__Cameras
{
  std_msgs__msg__Header header;
  phasespace_msgs__msg__Camera__Sequence cameras;
} phasespace_msgs__msg__Cameras;

// Struct for a sequence of phasespace_msgs__msg__Cameras.
typedef struct phasespace_msgs__msg__Cameras__Sequence
{
  phasespace_msgs__msg__Cameras * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} phasespace_msgs__msg__Cameras__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PHASESPACE_MSGS__MSG__DETAIL__CAMERAS__STRUCT_H_
