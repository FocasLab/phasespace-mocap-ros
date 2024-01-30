// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from phasespace_msgs:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef PHASESPACE_MSGS__MSG__DETAIL__CAMERA__BUILDER_HPP_
#define PHASESPACE_MSGS__MSG__DETAIL__CAMERA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "phasespace_msgs/msg/detail/camera__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace phasespace_msgs
{

namespace msg
{

namespace builder
{

class Init_Camera_cond
{
public:
  explicit Init_Camera_cond(::phasespace_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  ::phasespace_msgs::msg::Camera cond(::phasespace_msgs::msg::Camera::_cond_type arg)
  {
    msg_.cond = std::move(arg);
    return std::move(msg_);
  }

private:
  ::phasespace_msgs::msg::Camera msg_;
};

class Init_Camera_qz
{
public:
  explicit Init_Camera_qz(::phasespace_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_cond qz(::phasespace_msgs::msg::Camera::_qz_type arg)
  {
    msg_.qz = std::move(arg);
    return Init_Camera_cond(msg_);
  }

private:
  ::phasespace_msgs::msg::Camera msg_;
};

class Init_Camera_qy
{
public:
  explicit Init_Camera_qy(::phasespace_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_qz qy(::phasespace_msgs::msg::Camera::_qy_type arg)
  {
    msg_.qy = std::move(arg);
    return Init_Camera_qz(msg_);
  }

private:
  ::phasespace_msgs::msg::Camera msg_;
};

class Init_Camera_qx
{
public:
  explicit Init_Camera_qx(::phasespace_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_qy qx(::phasespace_msgs::msg::Camera::_qx_type arg)
  {
    msg_.qx = std::move(arg);
    return Init_Camera_qy(msg_);
  }

private:
  ::phasespace_msgs::msg::Camera msg_;
};

class Init_Camera_qw
{
public:
  explicit Init_Camera_qw(::phasespace_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_qx qw(::phasespace_msgs::msg::Camera::_qw_type arg)
  {
    msg_.qw = std::move(arg);
    return Init_Camera_qx(msg_);
  }

private:
  ::phasespace_msgs::msg::Camera msg_;
};

class Init_Camera_z
{
public:
  explicit Init_Camera_z(::phasespace_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_qw z(::phasespace_msgs::msg::Camera::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Camera_qw(msg_);
  }

private:
  ::phasespace_msgs::msg::Camera msg_;
};

class Init_Camera_y
{
public:
  explicit Init_Camera_y(::phasespace_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_z y(::phasespace_msgs::msg::Camera::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Camera_z(msg_);
  }

private:
  ::phasespace_msgs::msg::Camera msg_;
};

class Init_Camera_x
{
public:
  explicit Init_Camera_x(::phasespace_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_y x(::phasespace_msgs::msg::Camera::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Camera_y(msg_);
  }

private:
  ::phasespace_msgs::msg::Camera msg_;
};

class Init_Camera_flags
{
public:
  explicit Init_Camera_flags(::phasespace_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_x flags(::phasespace_msgs::msg::Camera::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_Camera_x(msg_);
  }

private:
  ::phasespace_msgs::msg::Camera msg_;
};

class Init_Camera_id
{
public:
  Init_Camera_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Camera_flags id(::phasespace_msgs::msg::Camera::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Camera_flags(msg_);
  }

private:
  ::phasespace_msgs::msg::Camera msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::phasespace_msgs::msg::Camera>()
{
  return phasespace_msgs::msg::builder::Init_Camera_id();
}

}  // namespace phasespace_msgs

#endif  // PHASESPACE_MSGS__MSG__DETAIL__CAMERA__BUILDER_HPP_
