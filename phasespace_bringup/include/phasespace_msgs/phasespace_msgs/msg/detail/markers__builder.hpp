// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from phasespace_msgs:msg/Markers.idl
// generated code does not contain a copyright notice

#ifndef PHASESPACE_MSGS__MSG__DETAIL__MARKERS__BUILDER_HPP_
#define PHASESPACE_MSGS__MSG__DETAIL__MARKERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "phasespace_msgs/msg/detail/markers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace phasespace_msgs
{

namespace msg
{

namespace builder
{

class Init_Markers_markers
{
public:
  explicit Init_Markers_markers(::phasespace_msgs::msg::Markers & msg)
  : msg_(msg)
  {}
  ::phasespace_msgs::msg::Markers markers(::phasespace_msgs::msg::Markers::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::phasespace_msgs::msg::Markers msg_;
};

class Init_Markers_header
{
public:
  Init_Markers_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Markers_markers header(::phasespace_msgs::msg::Markers::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Markers_markers(msg_);
  }

private:
  ::phasespace_msgs::msg::Markers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::phasespace_msgs::msg::Markers>()
{
  return phasespace_msgs::msg::builder::Init_Markers_header();
}

}  // namespace phasespace_msgs

#endif  // PHASESPACE_MSGS__MSG__DETAIL__MARKERS__BUILDER_HPP_
