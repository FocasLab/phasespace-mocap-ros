// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from phasespace_msgs:msg/Marker.idl
// generated code does not contain a copyright notice

#ifndef PHASESPACE_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_
#define PHASESPACE_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "phasespace_msgs/msg/detail/marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace phasespace_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Marker & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: flags
  {
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: cond
  {
    out << "cond: ";
    rosidl_generator_traits::value_to_yaml(msg.cond, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Marker & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: cond
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cond: ";
    rosidl_generator_traits::value_to_yaml(msg.cond, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Marker & msg, bool use_flow_style = false)
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
  const phasespace_msgs::msg::Marker & msg,
  std::ostream & out, size_t indentation = 0)
{
  phasespace_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use phasespace_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const phasespace_msgs::msg::Marker & msg)
{
  return phasespace_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<phasespace_msgs::msg::Marker>()
{
  return "phasespace_msgs::msg::Marker";
}

template<>
inline const char * name<phasespace_msgs::msg::Marker>()
{
  return "phasespace_msgs/msg/Marker";
}

template<>
struct has_fixed_size<phasespace_msgs::msg::Marker>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<phasespace_msgs::msg::Marker>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<phasespace_msgs::msg::Marker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PHASESPACE_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_
