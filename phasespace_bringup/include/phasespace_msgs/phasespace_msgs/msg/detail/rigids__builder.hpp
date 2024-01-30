// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from phasespace_msgs:msg/Rigids.idl
// generated code does not contain a copyright notice

#ifndef PHASESPACE_MSGS__MSG__DETAIL__RIGIDS__BUILDER_HPP_
#define PHASESPACE_MSGS__MSG__DETAIL__RIGIDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "phasespace_msgs/msg/detail/rigids__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace phasespace_msgs
{

namespace msg
{

namespace builder
{

class Init_Rigids_rigids
{
public:
  explicit Init_Rigids_rigids(::phasespace_msgs::msg::Rigids & msg)
  : msg_(msg)
  {}
  ::phasespace_msgs::msg::Rigids rigids(::phasespace_msgs::msg::Rigids::_rigids_type arg)
  {
    msg_.rigids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::phasespace_msgs::msg::Rigids msg_;
};

class Init_Rigids_header
{
public:
  Init_Rigids_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rigids_rigids header(::phasespace_msgs::msg::Rigids::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Rigids_rigids(msg_);
  }

private:
  ::phasespace_msgs::msg::Rigids msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::phasespace_msgs::msg::Rigids>()
{
  return phasespace_msgs::msg::builder::Init_Rigids_header();
}

}  // namespace phasespace_msgs

#endif  // PHASESPACE_MSGS__MSG__DETAIL__RIGIDS__BUILDER_HPP_
