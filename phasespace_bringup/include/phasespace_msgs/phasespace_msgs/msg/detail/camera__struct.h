// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from phasespace_msgs:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef PHASESPACE_MSGS__MSG__DETAIL__CAMERA__STRUCT_H_
#define PHASESPACE_MSGS__MSG__DETAIL__CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Camera in the package phasespace_msgs.
/**
  * Messages
 */
typedef struct phasespace_msgs__msg__Camera
{
  uint32_t id;
  uint32_t flags;
  float x;
  float y;
  float z;
  float qw;
  float qx;
  float qy;
  float qz;
  float cond;
} phasespace_msgs__msg__Camera;

// Struct for a sequence of phasespace_msgs__msg__Camera.
typedef struct phasespace_msgs__msg__Camera__Sequence
{
  phasespace_msgs__msg__Camera * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} phasespace_msgs__msg__Camera__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PHASESPACE_MSGS__MSG__DETAIL__CAMERA__STRUCT_H_
