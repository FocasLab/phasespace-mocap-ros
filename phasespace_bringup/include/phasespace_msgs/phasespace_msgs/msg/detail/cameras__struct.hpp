// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from phasespace_msgs:msg/Cameras.idl
// generated code does not contain a copyright notice

#ifndef PHASESPACE_MSGS__MSG__DETAIL__CAMERAS__STRUCT_HPP_
#define PHASESPACE_MSGS__MSG__DETAIL__CAMERAS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'cameras'
#include "phasespace_msgs/msg/detail/camera__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__phasespace_msgs__msg__Cameras __attribute__((deprecated))
#else
# define DEPRECATED__phasespace_msgs__msg__Cameras __declspec(deprecated)
#endif

namespace phasespace_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Cameras_
{
  using Type = Cameras_<ContainerAllocator>;

  explicit Cameras_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Cameras_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cameras_type =
    std::vector<phasespace_msgs::msg::Camera_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<phasespace_msgs::msg::Camera_<ContainerAllocator>>>;
  _cameras_type cameras;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cameras(
    const std::vector<phasespace_msgs::msg::Camera_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<phasespace_msgs::msg::Camera_<ContainerAllocator>>> & _arg)
  {
    this->cameras = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    phasespace_msgs::msg::Cameras_<ContainerAllocator> *;
  using ConstRawPtr =
    const phasespace_msgs::msg::Cameras_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<phasespace_msgs::msg::Cameras_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<phasespace_msgs::msg::Cameras_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      phasespace_msgs::msg::Cameras_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<phasespace_msgs::msg::Cameras_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      phasespace_msgs::msg::Cameras_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<phasespace_msgs::msg::Cameras_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<phasespace_msgs::msg::Cameras_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<phasespace_msgs::msg::Cameras_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__phasespace_msgs__msg__Cameras
    std::shared_ptr<phasespace_msgs::msg::Cameras_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__phasespace_msgs__msg__Cameras
    std::shared_ptr<phasespace_msgs::msg::Cameras_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cameras_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cameras != other.cameras) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cameras_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cameras_

// alias to use template instance with default allocator
using Cameras =
  phasespace_msgs::msg::Cameras_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace phasespace_msgs

#endif  // PHASESPACE_MSGS__MSG__DETAIL__CAMERAS__STRUCT_HPP_
