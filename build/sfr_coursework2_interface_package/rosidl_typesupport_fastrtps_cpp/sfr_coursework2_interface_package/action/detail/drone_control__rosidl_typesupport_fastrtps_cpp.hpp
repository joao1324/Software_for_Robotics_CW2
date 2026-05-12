// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from sfr_coursework2_interface_package:action/DroneControl.idl
// generated code does not contain a copyright notice

#ifndef SFR_COURSEWORK2_INTERFACE_PACKAGE__ACTION__DETAIL__DRONE_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SFR_COURSEWORK2_INTERFACE_PACKAGE__ACTION__DETAIL__DRONE_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sfr_coursework2_interface_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize(
  const sfr_coursework2_interface_package::action::DroneControl_Goal & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sfr_coursework2_interface_package::action::DroneControl_Goal & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size(
  const sfr_coursework2_interface_package::action::DroneControl_Goal & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_DroneControl_Goal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize_key(
  const sfr_coursework2_interface_package::action::DroneControl_Goal & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size_key(
  const sfr_coursework2_interface_package::action::DroneControl_Goal & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_key_DroneControl_Goal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_Goal)();

#ifdef __cplusplus
}
#endif
// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sfr_coursework2_interface_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize(
  const sfr_coursework2_interface_package::action::DroneControl_Result & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sfr_coursework2_interface_package::action::DroneControl_Result & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size(
  const sfr_coursework2_interface_package::action::DroneControl_Result & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_DroneControl_Result(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize_key(
  const sfr_coursework2_interface_package::action::DroneControl_Result & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size_key(
  const sfr_coursework2_interface_package::action::DroneControl_Result & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_key_DroneControl_Result(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_Result)();

#ifdef __cplusplus
}
#endif
// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sfr_coursework2_interface_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize(
  const sfr_coursework2_interface_package::action::DroneControl_Feedback & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sfr_coursework2_interface_package::action::DroneControl_Feedback & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size(
  const sfr_coursework2_interface_package::action::DroneControl_Feedback & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_DroneControl_Feedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize_key(
  const sfr_coursework2_interface_package::action::DroneControl_Feedback & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size_key(
  const sfr_coursework2_interface_package::action::DroneControl_Feedback & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_key_DroneControl_Feedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_Feedback)();

#ifdef __cplusplus
}
#endif
// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sfr_coursework2_interface_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize(
  const sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size(
  const sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_DroneControl_SendGoal_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize_key(
  const sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size_key(
  const sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_key_DroneControl_SendGoal_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sfr_coursework2_interface_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize(
  const sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size(
  const sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_DroneControl_SendGoal_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize_key(
  const sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size_key(
  const sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_key_DroneControl_SendGoal_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sfr_coursework2_interface_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize(
  const sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size(
  const sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_DroneControl_SendGoal_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize_key(
  const sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size_key(
  const sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_key_DroneControl_SendGoal_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal_Event)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sfr_coursework2_interface_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal)();

#ifdef __cplusplus
}
#endif
// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sfr_coursework2_interface_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize(
  const sfr_coursework2_interface_package::action::DroneControl_GetResult_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sfr_coursework2_interface_package::action::DroneControl_GetResult_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size(
  const sfr_coursework2_interface_package::action::DroneControl_GetResult_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_DroneControl_GetResult_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize_key(
  const sfr_coursework2_interface_package::action::DroneControl_GetResult_Request & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size_key(
  const sfr_coursework2_interface_package::action::DroneControl_GetResult_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_key_DroneControl_GetResult_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sfr_coursework2_interface_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize(
  const sfr_coursework2_interface_package::action::DroneControl_GetResult_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sfr_coursework2_interface_package::action::DroneControl_GetResult_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size(
  const sfr_coursework2_interface_package::action::DroneControl_GetResult_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_DroneControl_GetResult_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize_key(
  const sfr_coursework2_interface_package::action::DroneControl_GetResult_Response & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size_key(
  const sfr_coursework2_interface_package::action::DroneControl_GetResult_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_key_DroneControl_GetResult_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sfr_coursework2_interface_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize(
  const sfr_coursework2_interface_package::action::DroneControl_GetResult_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sfr_coursework2_interface_package::action::DroneControl_GetResult_Event & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size(
  const sfr_coursework2_interface_package::action::DroneControl_GetResult_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_DroneControl_GetResult_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize_key(
  const sfr_coursework2_interface_package::action::DroneControl_GetResult_Event & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size_key(
  const sfr_coursework2_interface_package::action::DroneControl_GetResult_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_key_DroneControl_GetResult_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult_Event)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rmw/types.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sfr_coursework2_interface_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult)();

#ifdef __cplusplus
}
#endif
// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sfr_coursework2_interface_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize(
  const sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size(
  const sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_DroneControl_FeedbackMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
cdr_serialize_key(
  const sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
get_serialized_size_key(
  const sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
max_serialized_size_key_DroneControl_FeedbackMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework2_interface_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_FeedbackMessage)();

#ifdef __cplusplus
}
#endif

#endif  // SFR_COURSEWORK2_INTERFACE_PACKAGE__ACTION__DETAIL__DRONE_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
