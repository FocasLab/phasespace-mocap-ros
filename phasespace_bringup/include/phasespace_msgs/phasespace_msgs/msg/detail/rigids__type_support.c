// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from phasespace_msgs:msg/Rigids.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "phasespace_msgs/msg/detail/rigids__rosidl_typesupport_introspection_c.h"
#include "phasespace_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "phasespace_msgs/msg/detail/rigids__functions.h"
#include "phasespace_msgs/msg/detail/rigids__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rigids`
#include "phasespace_msgs/msg/rigid.h"
// Member `rigids`
#include "phasespace_msgs/msg/detail/rigid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  phasespace_msgs__msg__Rigids__init(message_memory);
}

void phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_fini_function(void * message_memory)
{
  phasespace_msgs__msg__Rigids__fini(message_memory);
}

size_t phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__size_function__Rigids__rigids(
  const void * untyped_member)
{
  const phasespace_msgs__msg__Rigid__Sequence * member =
    (const phasespace_msgs__msg__Rigid__Sequence *)(untyped_member);
  return member->size;
}

const void * phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__get_const_function__Rigids__rigids(
  const void * untyped_member, size_t index)
{
  const phasespace_msgs__msg__Rigid__Sequence * member =
    (const phasespace_msgs__msg__Rigid__Sequence *)(untyped_member);
  return &member->data[index];
}

void * phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__get_function__Rigids__rigids(
  void * untyped_member, size_t index)
{
  phasespace_msgs__msg__Rigid__Sequence * member =
    (phasespace_msgs__msg__Rigid__Sequence *)(untyped_member);
  return &member->data[index];
}

void phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__fetch_function__Rigids__rigids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const phasespace_msgs__msg__Rigid * item =
    ((const phasespace_msgs__msg__Rigid *)
    phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__get_const_function__Rigids__rigids(untyped_member, index));
  phasespace_msgs__msg__Rigid * value =
    (phasespace_msgs__msg__Rigid *)(untyped_value);
  *value = *item;
}

void phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__assign_function__Rigids__rigids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  phasespace_msgs__msg__Rigid * item =
    ((phasespace_msgs__msg__Rigid *)
    phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__get_function__Rigids__rigids(untyped_member, index));
  const phasespace_msgs__msg__Rigid * value =
    (const phasespace_msgs__msg__Rigid *)(untyped_value);
  *item = *value;
}

bool phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__resize_function__Rigids__rigids(
  void * untyped_member, size_t size)
{
  phasespace_msgs__msg__Rigid__Sequence * member =
    (phasespace_msgs__msg__Rigid__Sequence *)(untyped_member);
  phasespace_msgs__msg__Rigid__Sequence__fini(member);
  return phasespace_msgs__msg__Rigid__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(phasespace_msgs__msg__Rigids, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rigids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(phasespace_msgs__msg__Rigids, rigids),  // bytes offset in struct
    NULL,  // default value
    phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__size_function__Rigids__rigids,  // size() function pointer
    phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__get_const_function__Rigids__rigids,  // get_const(index) function pointer
    phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__get_function__Rigids__rigids,  // get(index) function pointer
    phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__fetch_function__Rigids__rigids,  // fetch(index, &value) function pointer
    phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__assign_function__Rigids__rigids,  // assign(index, value) function pointer
    phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__resize_function__Rigids__rigids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_message_members = {
  "phasespace_msgs__msg",  // message namespace
  "Rigids",  // message name
  2,  // number of fields
  sizeof(phasespace_msgs__msg__Rigids),
  phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_message_member_array,  // message members
  phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_init_function,  // function to initialize message memory (memory has to be allocated)
  phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_message_type_support_handle = {
  0,
  &phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_phasespace_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, phasespace_msgs, msg, Rigids)() {
  phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, phasespace_msgs, msg, Rigid)();
  if (!phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_message_type_support_handle.typesupport_identifier) {
    phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &phasespace_msgs__msg__Rigids__rosidl_typesupport_introspection_c__Rigids_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
