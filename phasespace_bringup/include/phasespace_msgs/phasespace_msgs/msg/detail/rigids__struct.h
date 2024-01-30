// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from phasespace_msgs:msg/Rigids.idl
// generated code does not contain a copyright notice

#ifndef PHASESPACE_MSGS__MSG__DETAIL__RIGIDS__STRUCT_H_
#define PHASESPACE_MSGS__MSG__DETAIL__RIGIDS__STRUCT_H_

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
// Member 'rigids'
#include "phasespace_msgs/msg/detail/rigid__struct.h"

/// Struct defined in msg/Rigids in the package phasespace_msgs.
/**
  * Messages
 */
typedef struct phasespace_msgs__msg__Rigids
{
  std_msgs__msg__Header header;
  phasespace_msgs__msg__Rigid__Sequence rigids;
} phasespace_msgs__msg__Rigids;

// Struct for a sequence of phasespace_msgs__msg__Rigids.
typedef struct phasespace_msgs__msg__Rigids__Sequence
{
  phasespace_msgs__msg__Rigids * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} phasespace_msgs__msg__Rigids__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PHASESPACE_MSGS__MSG__DETAIL__RIGIDS__STRUCT_H_
