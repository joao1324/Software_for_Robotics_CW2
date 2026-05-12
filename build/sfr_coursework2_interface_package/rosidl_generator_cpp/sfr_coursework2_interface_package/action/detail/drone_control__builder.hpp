// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sfr_coursework2_interface_package:action/DroneControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework2_interface_package/action/drone_control.hpp"


#ifndef SFR_COURSEWORK2_INTERFACE_PACKAGE__ACTION__DETAIL__DRONE_CONTROL__BUILDER_HPP_
#define SFR_COURSEWORK2_INTERFACE_PACKAGE__ACTION__DETAIL__DRONE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sfr_coursework2_interface_package/action/detail/drone_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sfr_coursework2_interface_package
{

namespace action
{

namespace builder
{

class Init_DroneControl_Goal_desired_pose
{
public:
  Init_DroneControl_Goal_desired_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sfr_coursework2_interface_package::action::DroneControl_Goal desired_pose(::sfr_coursework2_interface_package::action::DroneControl_Goal::_desired_pose_type arg)
  {
    msg_.desired_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework2_interface_package::action::DroneControl_Goal>()
{
  return sfr_coursework2_interface_package::action::builder::Init_DroneControl_Goal_desired_pose();
}

}  // namespace sfr_coursework2_interface_package


namespace sfr_coursework2_interface_package
{

namespace action
{

namespace builder
{

class Init_DroneControl_Result_success
{
public:
  Init_DroneControl_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sfr_coursework2_interface_package::action::DroneControl_Result success(::sfr_coursework2_interface_package::action::DroneControl_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework2_interface_package::action::DroneControl_Result>()
{
  return sfr_coursework2_interface_package::action::builder::Init_DroneControl_Result_success();
}

}  // namespace sfr_coursework2_interface_package


namespace sfr_coursework2_interface_package
{

namespace action
{

namespace builder
{

class Init_DroneControl_Feedback_current_pose
{
public:
  Init_DroneControl_Feedback_current_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sfr_coursework2_interface_package::action::DroneControl_Feedback current_pose(::sfr_coursework2_interface_package::action::DroneControl_Feedback::_current_pose_type arg)
  {
    msg_.current_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework2_interface_package::action::DroneControl_Feedback>()
{
  return sfr_coursework2_interface_package::action::builder::Init_DroneControl_Feedback_current_pose();
}

}  // namespace sfr_coursework2_interface_package


namespace sfr_coursework2_interface_package
{

namespace action
{

namespace builder
{

class Init_DroneControl_SendGoal_Request_goal
{
public:
  explicit Init_DroneControl_SendGoal_Request_goal(::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request goal(::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request msg_;
};

class Init_DroneControl_SendGoal_Request_goal_id
{
public:
  Init_DroneControl_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneControl_SendGoal_Request_goal goal_id(::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DroneControl_SendGoal_Request_goal(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Request>()
{
  return sfr_coursework2_interface_package::action::builder::Init_DroneControl_SendGoal_Request_goal_id();
}

}  // namespace sfr_coursework2_interface_package


namespace sfr_coursework2_interface_package
{

namespace action
{

namespace builder
{

class Init_DroneControl_SendGoal_Response_stamp
{
public:
  explicit Init_DroneControl_SendGoal_Response_stamp(::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response stamp(::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response msg_;
};

class Init_DroneControl_SendGoal_Response_accepted
{
public:
  Init_DroneControl_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneControl_SendGoal_Response_stamp accepted(::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DroneControl_SendGoal_Response_stamp(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Response>()
{
  return sfr_coursework2_interface_package::action::builder::Init_DroneControl_SendGoal_Response_accepted();
}

}  // namespace sfr_coursework2_interface_package


namespace sfr_coursework2_interface_package
{

namespace action
{

namespace builder
{

class Init_DroneControl_SendGoal_Event_response
{
public:
  explicit Init_DroneControl_SendGoal_Event_response(::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event response(::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event msg_;
};

class Init_DroneControl_SendGoal_Event_request
{
public:
  explicit Init_DroneControl_SendGoal_Event_request(::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_DroneControl_SendGoal_Event_response request(::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DroneControl_SendGoal_Event_response(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event msg_;
};

class Init_DroneControl_SendGoal_Event_info
{
public:
  Init_DroneControl_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneControl_SendGoal_Event_request info(::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DroneControl_SendGoal_Event_request(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework2_interface_package::action::DroneControl_SendGoal_Event>()
{
  return sfr_coursework2_interface_package::action::builder::Init_DroneControl_SendGoal_Event_info();
}

}  // namespace sfr_coursework2_interface_package


namespace sfr_coursework2_interface_package
{

namespace action
{

namespace builder
{

class Init_DroneControl_GetResult_Request_goal_id
{
public:
  Init_DroneControl_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sfr_coursework2_interface_package::action::DroneControl_GetResult_Request goal_id(::sfr_coursework2_interface_package::action::DroneControl_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework2_interface_package::action::DroneControl_GetResult_Request>()
{
  return sfr_coursework2_interface_package::action::builder::Init_DroneControl_GetResult_Request_goal_id();
}

}  // namespace sfr_coursework2_interface_package


namespace sfr_coursework2_interface_package
{

namespace action
{

namespace builder
{

class Init_DroneControl_GetResult_Response_result
{
public:
  explicit Init_DroneControl_GetResult_Response_result(::sfr_coursework2_interface_package::action::DroneControl_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::sfr_coursework2_interface_package::action::DroneControl_GetResult_Response result(::sfr_coursework2_interface_package::action::DroneControl_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_GetResult_Response msg_;
};

class Init_DroneControl_GetResult_Response_status
{
public:
  Init_DroneControl_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneControl_GetResult_Response_result status(::sfr_coursework2_interface_package::action::DroneControl_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DroneControl_GetResult_Response_result(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework2_interface_package::action::DroneControl_GetResult_Response>()
{
  return sfr_coursework2_interface_package::action::builder::Init_DroneControl_GetResult_Response_status();
}

}  // namespace sfr_coursework2_interface_package


namespace sfr_coursework2_interface_package
{

namespace action
{

namespace builder
{

class Init_DroneControl_GetResult_Event_response
{
public:
  explicit Init_DroneControl_GetResult_Event_response(::sfr_coursework2_interface_package::action::DroneControl_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::sfr_coursework2_interface_package::action::DroneControl_GetResult_Event response(::sfr_coursework2_interface_package::action::DroneControl_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_GetResult_Event msg_;
};

class Init_DroneControl_GetResult_Event_request
{
public:
  explicit Init_DroneControl_GetResult_Event_request(::sfr_coursework2_interface_package::action::DroneControl_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_DroneControl_GetResult_Event_response request(::sfr_coursework2_interface_package::action::DroneControl_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DroneControl_GetResult_Event_response(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_GetResult_Event msg_;
};

class Init_DroneControl_GetResult_Event_info
{
public:
  Init_DroneControl_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneControl_GetResult_Event_request info(::sfr_coursework2_interface_package::action::DroneControl_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DroneControl_GetResult_Event_request(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework2_interface_package::action::DroneControl_GetResult_Event>()
{
  return sfr_coursework2_interface_package::action::builder::Init_DroneControl_GetResult_Event_info();
}

}  // namespace sfr_coursework2_interface_package


namespace sfr_coursework2_interface_package
{

namespace action
{

namespace builder
{

class Init_DroneControl_FeedbackMessage_feedback
{
public:
  explicit Init_DroneControl_FeedbackMessage_feedback(::sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage feedback(::sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage msg_;
};

class Init_DroneControl_FeedbackMessage_goal_id
{
public:
  Init_DroneControl_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneControl_FeedbackMessage_feedback goal_id(::sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DroneControl_FeedbackMessage_feedback(msg_);
  }

private:
  ::sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework2_interface_package::action::DroneControl_FeedbackMessage>()
{
  return sfr_coursework2_interface_package::action::builder::Init_DroneControl_FeedbackMessage_goal_id();
}

}  // namespace sfr_coursework2_interface_package

#endif  // SFR_COURSEWORK2_INTERFACE_PACKAGE__ACTION__DETAIL__DRONE_CONTROL__BUILDER_HPP_
