// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from sfr_coursework2_interface_package:action/DroneControl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"
#include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DroneControl_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneControl_Goal_type_support_ids_t;

static const _DroneControl_Goal_type_support_ids_t _DroneControl_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DroneControl_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneControl_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneControl_Goal_type_support_symbol_names_t _DroneControl_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sfr_coursework2_interface_package, action, DroneControl_Goal)),
  }
};

typedef struct _DroneControl_Goal_type_support_data_t
{
  void * data[2];
} _DroneControl_Goal_type_support_data_t;

static _DroneControl_Goal_type_support_data_t _DroneControl_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneControl_Goal_message_typesupport_map = {
  2,
  "sfr_coursework2_interface_package",
  &_DroneControl_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_DroneControl_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_DroneControl_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DroneControl_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneControl_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sfr_coursework2_interface_package__action__DroneControl_Goal__get_type_hash,
  &sfr_coursework2_interface_package__action__DroneControl_Goal__get_type_description,
  &sfr_coursework2_interface_package__action__DroneControl_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_Goal>()
{
  return &::sfr_coursework2_interface_package::action::rosidl_typesupport_cpp::DroneControl_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sfr_coursework2_interface_package, action, DroneControl_Goal)() {
  return get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DroneControl_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneControl_Result_type_support_ids_t;

static const _DroneControl_Result_type_support_ids_t _DroneControl_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DroneControl_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneControl_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneControl_Result_type_support_symbol_names_t _DroneControl_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sfr_coursework2_interface_package, action, DroneControl_Result)),
  }
};

typedef struct _DroneControl_Result_type_support_data_t
{
  void * data[2];
} _DroneControl_Result_type_support_data_t;

static _DroneControl_Result_type_support_data_t _DroneControl_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneControl_Result_message_typesupport_map = {
  2,
  "sfr_coursework2_interface_package",
  &_DroneControl_Result_message_typesupport_ids.typesupport_identifier[0],
  &_DroneControl_Result_message_typesupport_symbol_names.symbol_name[0],
  &_DroneControl_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DroneControl_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneControl_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sfr_coursework2_interface_package__action__DroneControl_Result__get_type_hash,
  &sfr_coursework2_interface_package__action__DroneControl_Result__get_type_description,
  &sfr_coursework2_interface_package__action__DroneControl_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_Result>()
{
  return &::sfr_coursework2_interface_package::action::rosidl_typesupport_cpp::DroneControl_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sfr_coursework2_interface_package, action, DroneControl_Result)() {
  return get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DroneControl_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneControl_Feedback_type_support_ids_t;

static const _DroneControl_Feedback_type_support_ids_t _DroneControl_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DroneControl_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneControl_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneControl_Feedback_type_support_symbol_names_t _DroneControl_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sfr_coursework2_interface_package, action, DroneControl_Feedback)),
  }
};

typedef struct _DroneControl_Feedback_type_support_data_t
{
  void * data[2];
} _DroneControl_Feedback_type_support_data_t;

static _DroneControl_Feedback_type_support_data_t _DroneControl_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneControl_Feedback_message_typesupport_map = {
  2,
  "sfr_coursework2_interface_package",
  &_DroneControl_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_DroneControl_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_DroneControl_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DroneControl_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneControl_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sfr_coursework2_interface_package__action__DroneControl_Feedback__get_type_hash,
  &sfr_coursework2_interface_package__action__DroneControl_Feedback__get_type_description,
  &sfr_coursework2_interface_package__action__DroneControl_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_Feedback>()
{
  return &::sfr_coursework2_interface_package::action::rosidl_typesupport_cpp::DroneControl_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sfr_coursework2_interface_package, action, DroneControl_Feedback)() {
  return get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DroneControl_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneControl_SendGoal_Request_type_support_ids_t;

static const _DroneControl_SendGoal_Request_type_support_ids_t _DroneControl_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DroneControl_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneControl_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneControl_SendGoal_Request_type_support_symbol_names_t _DroneControl_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal_Request)),
  }
};

typedef struct _DroneControl_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _DroneControl_SendGoal_Request_type_support_data_t;

static _DroneControl_SendGoal_Request_type_support_data_t _DroneControl_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneControl_SendGoal_Request_message_typesupport_map = {
  2,
  "sfr_coursework2_interface_package",
  &_DroneControl_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DroneControl_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DroneControl_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DroneControl_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneControl_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__get_type_hash,
  &sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__get_type_description,
  &sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request>()
{
  return &::sfr_coursework2_interface_package::action::rosidl_typesupport_cpp::DroneControl_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal_Request)() {
  return get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DroneControl_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneControl_SendGoal_Response_type_support_ids_t;

static const _DroneControl_SendGoal_Response_type_support_ids_t _DroneControl_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DroneControl_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneControl_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneControl_SendGoal_Response_type_support_symbol_names_t _DroneControl_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal_Response)),
  }
};

typedef struct _DroneControl_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _DroneControl_SendGoal_Response_type_support_data_t;

static _DroneControl_SendGoal_Response_type_support_data_t _DroneControl_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneControl_SendGoal_Response_message_typesupport_map = {
  2,
  "sfr_coursework2_interface_package",
  &_DroneControl_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DroneControl_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DroneControl_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DroneControl_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneControl_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__get_type_hash,
  &sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__get_type_description,
  &sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response>()
{
  return &::sfr_coursework2_interface_package::action::rosidl_typesupport_cpp::DroneControl_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal_Response)() {
  return get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DroneControl_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneControl_SendGoal_Event_type_support_ids_t;

static const _DroneControl_SendGoal_Event_type_support_ids_t _DroneControl_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DroneControl_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneControl_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneControl_SendGoal_Event_type_support_symbol_names_t _DroneControl_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal_Event)),
  }
};

typedef struct _DroneControl_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _DroneControl_SendGoal_Event_type_support_data_t;

static _DroneControl_SendGoal_Event_type_support_data_t _DroneControl_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneControl_SendGoal_Event_message_typesupport_map = {
  2,
  "sfr_coursework2_interface_package",
  &_DroneControl_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DroneControl_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DroneControl_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DroneControl_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneControl_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__get_type_hash,
  &sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__get_type_description,
  &sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event>()
{
  return &::sfr_coursework2_interface_package::action::rosidl_typesupport_cpp::DroneControl_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal_Event)() {
  return get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DroneControl_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneControl_SendGoal_type_support_ids_t;

static const _DroneControl_SendGoal_type_support_ids_t _DroneControl_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DroneControl_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneControl_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneControl_SendGoal_type_support_symbol_names_t _DroneControl_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal)),
  }
};

typedef struct _DroneControl_SendGoal_type_support_data_t
{
  void * data[2];
} _DroneControl_SendGoal_type_support_data_t;

static _DroneControl_SendGoal_type_support_data_t _DroneControl_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneControl_SendGoal_service_typesupport_map = {
  2,
  "sfr_coursework2_interface_package",
  &_DroneControl_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_DroneControl_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_DroneControl_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DroneControl_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneControl_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<sfr_coursework2_interface_package::action::DroneControl_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<sfr_coursework2_interface_package::action::DroneControl_SendGoal>,
  &sfr_coursework2_interface_package__action__DroneControl_SendGoal__get_type_hash,
  &sfr_coursework2_interface_package__action__DroneControl_SendGoal__get_type_description,
  &sfr_coursework2_interface_package__action__DroneControl_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_SendGoal>()
{
  return &::sfr_coursework2_interface_package::action::rosidl_typesupport_cpp::DroneControl_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, sfr_coursework2_interface_package, action, DroneControl_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DroneControl_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneControl_GetResult_Request_type_support_ids_t;

static const _DroneControl_GetResult_Request_type_support_ids_t _DroneControl_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DroneControl_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneControl_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneControl_GetResult_Request_type_support_symbol_names_t _DroneControl_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult_Request)),
  }
};

typedef struct _DroneControl_GetResult_Request_type_support_data_t
{
  void * data[2];
} _DroneControl_GetResult_Request_type_support_data_t;

static _DroneControl_GetResult_Request_type_support_data_t _DroneControl_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneControl_GetResult_Request_message_typesupport_map = {
  2,
  "sfr_coursework2_interface_package",
  &_DroneControl_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DroneControl_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DroneControl_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DroneControl_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneControl_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__get_type_hash,
  &sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__get_type_description,
  &sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_GetResult_Request>()
{
  return &::sfr_coursework2_interface_package::action::rosidl_typesupport_cpp::DroneControl_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult_Request)() {
  return get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DroneControl_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneControl_GetResult_Response_type_support_ids_t;

static const _DroneControl_GetResult_Response_type_support_ids_t _DroneControl_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DroneControl_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneControl_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneControl_GetResult_Response_type_support_symbol_names_t _DroneControl_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult_Response)),
  }
};

typedef struct _DroneControl_GetResult_Response_type_support_data_t
{
  void * data[2];
} _DroneControl_GetResult_Response_type_support_data_t;

static _DroneControl_GetResult_Response_type_support_data_t _DroneControl_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneControl_GetResult_Response_message_typesupport_map = {
  2,
  "sfr_coursework2_interface_package",
  &_DroneControl_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DroneControl_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DroneControl_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DroneControl_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneControl_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__get_type_hash,
  &sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__get_type_description,
  &sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_GetResult_Response>()
{
  return &::sfr_coursework2_interface_package::action::rosidl_typesupport_cpp::DroneControl_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult_Response)() {
  return get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DroneControl_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneControl_GetResult_Event_type_support_ids_t;

static const _DroneControl_GetResult_Event_type_support_ids_t _DroneControl_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DroneControl_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneControl_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneControl_GetResult_Event_type_support_symbol_names_t _DroneControl_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult_Event)),
  }
};

typedef struct _DroneControl_GetResult_Event_type_support_data_t
{
  void * data[2];
} _DroneControl_GetResult_Event_type_support_data_t;

static _DroneControl_GetResult_Event_type_support_data_t _DroneControl_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneControl_GetResult_Event_message_typesupport_map = {
  2,
  "sfr_coursework2_interface_package",
  &_DroneControl_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DroneControl_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DroneControl_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DroneControl_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneControl_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__get_type_hash,
  &sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__get_type_description,
  &sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_GetResult_Event>()
{
  return &::sfr_coursework2_interface_package::action::rosidl_typesupport_cpp::DroneControl_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult_Event)() {
  return get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DroneControl_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneControl_GetResult_type_support_ids_t;

static const _DroneControl_GetResult_type_support_ids_t _DroneControl_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DroneControl_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneControl_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneControl_GetResult_type_support_symbol_names_t _DroneControl_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult)),
  }
};

typedef struct _DroneControl_GetResult_type_support_data_t
{
  void * data[2];
} _DroneControl_GetResult_type_support_data_t;

static _DroneControl_GetResult_type_support_data_t _DroneControl_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneControl_GetResult_service_typesupport_map = {
  2,
  "sfr_coursework2_interface_package",
  &_DroneControl_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_DroneControl_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_DroneControl_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DroneControl_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneControl_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<sfr_coursework2_interface_package::action::DroneControl_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<sfr_coursework2_interface_package::action::DroneControl_GetResult>,
  &sfr_coursework2_interface_package__action__DroneControl_GetResult__get_type_hash,
  &sfr_coursework2_interface_package__action__DroneControl_GetResult__get_type_description,
  &sfr_coursework2_interface_package__action__DroneControl_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_GetResult>()
{
  return &::sfr_coursework2_interface_package::action::rosidl_typesupport_cpp::DroneControl_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, sfr_coursework2_interface_package, action, DroneControl_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__functions.h"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DroneControl_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneControl_FeedbackMessage_type_support_ids_t;

static const _DroneControl_FeedbackMessage_type_support_ids_t _DroneControl_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DroneControl_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneControl_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneControl_FeedbackMessage_type_support_symbol_names_t _DroneControl_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework2_interface_package, action, DroneControl_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sfr_coursework2_interface_package, action, DroneControl_FeedbackMessage)),
  }
};

typedef struct _DroneControl_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _DroneControl_FeedbackMessage_type_support_data_t;

static _DroneControl_FeedbackMessage_type_support_data_t _DroneControl_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneControl_FeedbackMessage_message_typesupport_map = {
  2,
  "sfr_coursework2_interface_package",
  &_DroneControl_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_DroneControl_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_DroneControl_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DroneControl_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneControl_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__get_type_hash,
  &sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__get_type_description,
  &sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage>()
{
  return &::sfr_coursework2_interface_package::action::rosidl_typesupport_cpp::DroneControl_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sfr_coursework2_interface_package, action, DroneControl_FeedbackMessage)() {
  return get_message_type_support_handle<sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace sfr_coursework2_interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t DroneControl_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &sfr_coursework2_interface_package__action__DroneControl__get_type_hash,
  &sfr_coursework2_interface_package__action__DroneControl__get_type_description,
  &sfr_coursework2_interface_package__action__DroneControl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace sfr_coursework2_interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<sfr_coursework2_interface_package::action::DroneControl>()
{
  using ::sfr_coursework2_interface_package::action::rosidl_typesupport_cpp::DroneControl_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  DroneControl_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::sfr_coursework2_interface_package::action::DroneControl::Impl::SendGoalService>();
  DroneControl_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::sfr_coursework2_interface_package::action::DroneControl::Impl::GetResultService>();
  DroneControl_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::sfr_coursework2_interface_package::action::DroneControl::Impl::CancelGoalService>();
  DroneControl_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::sfr_coursework2_interface_package::action::DroneControl::Impl::FeedbackMessage>();
  DroneControl_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::sfr_coursework2_interface_package::action::DroneControl::Impl::GoalStatusMessage>();
  return &DroneControl_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, sfr_coursework2_interface_package, action, DroneControl)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<sfr_coursework2_interface_package::action::DroneControl>();
}

#ifdef __cplusplus
}
#endif
