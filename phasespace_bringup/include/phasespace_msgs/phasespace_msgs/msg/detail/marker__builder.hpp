// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from phasespace_msgs:msg/Marker.idl
// generated code does not contain a copyright notice

#ifndef PHASESPACE_MSGS__MSG__DETAIL__MARKER__BUILDER_HPP_
#define PHASESPACE_MSGS__MSG__DETAIL__MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "phasespace_msgs/msg/detail/marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace phasespace_msgs
{

namespace msg
{

namespace builder
{

class Init_Marker_cond
{
public:
  explicit Init_Marker_cond(::phasespace_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  ::phasespace_msgs::msg::Marker cond(::phasespace_msgs::msg::Marker::_cond_type arg)
  {
    msg_.cond = std::move(arg);
    return std::move(msg_);
  }

private:
  ::phasespace_msgs::msg::Marker msg_;
};

class Init_Marker_z
{
public:
  explicit Init_Marker_z(::phasespace_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_cond z(::phasespace_msgs::msg::Marker::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Marker_cond(msg_);
  }

private:
  ::phasespace_msgs::msg::Marker msg_;
};

class Init_Marker_y
{
public:
  explicit Init_Marker_y(::phasespace_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_z y(::phasespace_msgs::msg::Marker::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Marker_z(msg_);
  }

private:
  ::phasespace_msgs::msg::Marker msg_;
};

class Init_Marker_x
{
public:
  explicit Init_Marker_x(::phasespace_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_y x(::phasespace_msgs::msg::Marker::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Marker_y(msg_);
  }

private:
  ::phasespace_msgs::msg::Marker msg_;
};

class Init_Marker_time
{
public:
  explicit Init_Marker_time(::phasespace_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_x time(::phasespace_msgs::msg::Marker::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_Marker_x(msg_);
  }

private:
  ::phasespace_msgs::msg::Marker msg_;
};

class Init_Marker_flags
{
public:
  explicit Init_Marker_flags(::phasespace_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_time flags(::phasespace_msgs::msg::Marker::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_Marker_time(msg_);
  }

private:
  ::phasespace_msgs::msg::Marker msg_;
};

class Init_Marker_id
{
public:
  Init_Marker_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Marker_flags id(::phasespace_msgs::msg::Marker::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Marker_flags(msg_);
  }

private:
  ::phasespace_msgs::msg::Marker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::phasespace_msgs::msg::Marker>()
{
  return phasespace_msgs::msg::builder::Init_Marker_id();
}

}  // namespace phasespace_msgs

#endif  // PHASESPACE_MSGS__MSG__DETAIL__MARKER__BUILDER_HPP_
