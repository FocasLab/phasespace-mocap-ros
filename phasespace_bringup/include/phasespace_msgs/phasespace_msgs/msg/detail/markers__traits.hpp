// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from phasespace_msgs:msg/Markers.idl
// generated code does not contain a copyright notice

#ifndef PHASESPACE_MSGS__MSG__DETAIL__MARKERS__TRAITS_HPP_
#define PHASESPACE_MSGS__MSG__DETAIL__MARKERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "phasespace_msgs/msg/detail/markers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'markers'
#include "phasespace_msgs/msg/detail/marker__traits.hpp"

namespace phasespace_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Markers & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: markers
  {
    if (msg.markers.size() == 0) {
      out << "markers: []";
    } else {
      out << "markers: [";
      size_t pending_items = msg.markers.size();
      for (auto item : msg.markers) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Markers & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markers.size() == 0) {
      out << "markers: []\n";
    } else {
      out << "markers:\n";
      for (auto item : msg.markers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Markers & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace phasespace_msgs

namespace rosidl_generator_traits
{

[[deprecated("use phasespace_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const phasespace_msgs::msg::Markers & msg,
  std::ostream & out, size_t indentation = 0)
{
  phasespace_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use phasespace_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const phasespace_msgs::msg::Markers & msg)
{
  return phasespace_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<phasespace_msgs::msg::Markers>()
{
  return "phasespace_msgs::msg::Markers";
}

template<>
inline const char * name<phasespace_msgs::msg::Markers>()
{
  return "phasespace_msgs/msg/Markers";
}

template<>
struct has_fixed_size<phasespace_msgs::msg::Markers>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<phasespace_msgs::msg::Markers>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<phasespace_msgs::msg::Markers>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PHASESPACE_MSGS__MSG__DETAIL__MARKERS__TRAITS_HPP_
