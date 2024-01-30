// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from phasespace_msgs:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef PHASESPACE_MSGS__MSG__DETAIL__CAMERA__STRUCT_HPP_
#define PHASESPACE_MSGS__MSG__DETAIL__CAMERA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__phasespace_msgs__msg__Camera __attribute__((deprecated))
#else
# define DEPRECATED__phasespace_msgs__msg__Camera __declspec(deprecated)
#endif

namespace phasespace_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Camera_
{
  using Type = Camera_<ContainerAllocator>;

  explicit Camera_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->flags = 0ul;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->qw = 0.0f;
      this->qx = 0.0f;
      this->qy = 0.0f;
      this->qz = 0.0f;
      this->cond = 0.0f;
    }
  }

  explicit Camera_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->flags = 0ul;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->qw = 0.0f;
      this->qx = 0.0f;
      this->qy = 0.0f;
      this->qz = 0.0f;
      this->cond = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _flags_type =
    uint32_t;
  _flags_type flags;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _qw_type =
    float;
  _qw_type qw;
  using _qx_type =
    float;
  _qx_type qx;
  using _qy_type =
    float;
  _qy_type qy;
  using _qz_type =
    float;
  _qz_type qz;
  using _cond_type =
    float;
  _cond_type cond;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__flags(
    const uint32_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__qw(
    const float & _arg)
  {
    this->qw = _arg;
    return *this;
  }
  Type & set__qx(
    const float & _arg)
  {
    this->qx = _arg;
    return *this;
  }
  Type & set__qy(
    const float & _arg)
  {
    this->qy = _arg;
    return *this;
  }
  Type & set__qz(
    const float & _arg)
  {
    this->qz = _arg;
    return *this;
  }
  Type & set__cond(
    const float & _arg)
  {
    this->cond = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    phasespace_msgs::msg::Camera_<ContainerAllocator> *;
  using ConstRawPtr =
    const phasespace_msgs::msg::Camera_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<phasespace_msgs::msg::Camera_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<phasespace_msgs::msg::Camera_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      phasespace_msgs::msg::Camera_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<phasespace_msgs::msg::Camera_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      phasespace_msgs::msg::Camera_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<phasespace_msgs::msg::Camera_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<phasespace_msgs::msg::Camera_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<phasespace_msgs::msg::Camera_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__phasespace_msgs__msg__Camera
    std::shared_ptr<phasespace_msgs::msg::Camera_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__phasespace_msgs__msg__Camera
    std::shared_ptr<phasespace_msgs::msg::Camera_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Camera_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->qw != other.qw) {
      return false;
    }
    if (this->qx != other.qx) {
      return false;
    }
    if (this->qy != other.qy) {
      return false;
    }
    if (this->qz != other.qz) {
      return false;
    }
    if (this->cond != other.cond) {
      return false;
    }
    return true;
  }
  bool operator!=(const Camera_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Camera_

// alias to use template instance with default allocator
using Camera =
  phasespace_msgs::msg::Camera_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace phasespace_msgs

#endif  // PHASESPACE_MSGS__MSG__DETAIL__CAMERA__STRUCT_HPP_
