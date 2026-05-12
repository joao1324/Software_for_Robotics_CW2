// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sfr_coursework2_interface_package:action/DroneControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework2_interface_package/action/drone_control.h"


#ifndef SFR_COURSEWORK2_INTERFACE_PACKAGE__ACTION__DETAIL__DRONE_CONTROL__STRUCT_H_
#define SFR_COURSEWORK2_INTERFACE_PACKAGE__ACTION__DETAIL__DRONE_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'desired_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/DroneControl in the package sfr_coursework2_interface_package.
typedef struct sfr_coursework2_interface_package__action__DroneControl_Goal
{
  geometry_msgs__msg__PoseStamped desired_pose;
} sfr_coursework2_interface_package__action__DroneControl_Goal;

// Struct for a sequence of sfr_coursework2_interface_package__action__DroneControl_Goal.
typedef struct sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence
{
  sfr_coursework2_interface_package__action__DroneControl_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework2_interface_package__action__DroneControl_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/DroneControl in the package sfr_coursework2_interface_package.
typedef struct sfr_coursework2_interface_package__action__DroneControl_Result
{
  bool success;
} sfr_coursework2_interface_package__action__DroneControl_Result;

// Struct for a sequence of sfr_coursework2_interface_package__action__DroneControl_Result.
typedef struct sfr_coursework2_interface_package__action__DroneControl_Result__Sequence
{
  sfr_coursework2_interface_package__action__DroneControl_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework2_interface_package__action__DroneControl_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/DroneControl in the package sfr_coursework2_interface_package.
typedef struct sfr_coursework2_interface_package__action__DroneControl_Feedback
{
  geometry_msgs__msg__PoseStamped current_pose;
} sfr_coursework2_interface_package__action__DroneControl_Feedback;

// Struct for a sequence of sfr_coursework2_interface_package__action__DroneControl_Feedback.
typedef struct sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence
{
  sfr_coursework2_interface_package__action__DroneControl_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework2_interface_package__action__DroneControl_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "sfr_coursework2_interface_package/action/detail/drone_control__struct.h"

/// Struct defined in action/DroneControl in the package sfr_coursework2_interface_package.
typedef struct sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  sfr_coursework2_interface_package__action__DroneControl_Goal goal;
} sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request;

// Struct for a sequence of sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request.
typedef struct sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence
{
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DroneControl in the package sfr_coursework2_interface_package.
typedef struct sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response;

// Struct for a sequence of sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response.
typedef struct sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence
{
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DroneControl in the package sfr_coursework2_interface_package.
typedef struct sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Request__Sequence request;
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Response__Sequence response;
} sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event;

// Struct for a sequence of sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event.
typedef struct sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence
{
  sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework2_interface_package__action__DroneControl_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DroneControl in the package sfr_coursework2_interface_package.
typedef struct sfr_coursework2_interface_package__action__DroneControl_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} sfr_coursework2_interface_package__action__DroneControl_GetResult_Request;

// Struct for a sequence of sfr_coursework2_interface_package__action__DroneControl_GetResult_Request.
typedef struct sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence
{
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.h"

/// Struct defined in action/DroneControl in the package sfr_coursework2_interface_package.
typedef struct sfr_coursework2_interface_package__action__DroneControl_GetResult_Response
{
  int8_t status;
  sfr_coursework2_interface_package__action__DroneControl_Result result;
} sfr_coursework2_interface_package__action__DroneControl_GetResult_Response;

// Struct for a sequence of sfr_coursework2_interface_package__action__DroneControl_GetResult_Response.
typedef struct sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence
{
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DroneControl in the package sfr_coursework2_interface_package.
typedef struct sfr_coursework2_interface_package__action__DroneControl_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Request__Sequence request;
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Response__Sequence response;
} sfr_coursework2_interface_package__action__DroneControl_GetResult_Event;

// Struct for a sequence of sfr_coursework2_interface_package__action__DroneControl_GetResult_Event.
typedef struct sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence
{
  sfr_coursework2_interface_package__action__DroneControl_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework2_interface_package__action__DroneControl_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "sfr_coursework2_interface_package/action/detail/drone_control__struct.h"

/// Struct defined in action/DroneControl in the package sfr_coursework2_interface_package.
typedef struct sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  sfr_coursework2_interface_package__action__DroneControl_Feedback feedback;
} sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage;

// Struct for a sequence of sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage.
typedef struct sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence
{
  sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework2_interface_package__action__DroneControl_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SFR_COURSEWORK2_INTERFACE_PACKAGE__ACTION__DETAIL__DRONE_CONTROL__STRUCT_H_
