// Copyright 2020-2021 The MathWorks, Inc.
// Common copy functions for ackermann_msgs/AckermannDrive
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "ackermann_msgs/msg/ackermann_drive.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class ACKERMANN_MSGS_EXPORT ackermann_msgs_msg_AckermannDrive_common : public MATLABROS2MsgInterface<ackermann_msgs::msg::AckermannDrive> {
  public:
    virtual ~ackermann_msgs_msg_AckermannDrive_common(){}
    virtual void copy_from_struct(ackermann_msgs::msg::AckermannDrive* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const ackermann_msgs::msg::AckermannDrive* msg, MultiLibLoader loader, size_t size = 1);
};
  void ackermann_msgs_msg_AckermannDrive_common::copy_from_struct(ackermann_msgs::msg::AckermannDrive* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //steering_angle
        const matlab::data::TypedArray<float> steering_angle_arr = arr["steering_angle"];
        msg->steering_angle = steering_angle_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'steering_angle' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'steering_angle' is wrong type; expected a single.");
    }
    try {
        //steering_angle_velocity
        const matlab::data::TypedArray<float> steering_angle_velocity_arr = arr["steering_angle_velocity"];
        msg->steering_angle_velocity = steering_angle_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'steering_angle_velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'steering_angle_velocity' is wrong type; expected a single.");
    }
    try {
        //speed
        const matlab::data::TypedArray<float> speed_arr = arr["speed"];
        msg->speed = speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'speed' is wrong type; expected a single.");
    }
    try {
        //acceleration
        const matlab::data::TypedArray<float> acceleration_arr = arr["acceleration"];
        msg->acceleration = acceleration_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'acceleration' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'acceleration' is wrong type; expected a single.");
    }
    try {
        //jerk
        const matlab::data::TypedArray<float> jerk_arr = arr["jerk"];
        msg->jerk = jerk_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'jerk' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'jerk' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ackermann_msgs_msg_AckermannDrive_common::get_arr(MDFactory_T& factory, const ackermann_msgs::msg::AckermannDrive* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","steering_angle","steering_angle_velocity","speed","acceleration","jerk"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("ackermann_msgs/AckermannDrive");
    // steering_angle
    auto currentElement_steering_angle = (msg + ctr)->steering_angle;
    outArray[ctr]["steering_angle"] = factory.createScalar(currentElement_steering_angle);
    // steering_angle_velocity
    auto currentElement_steering_angle_velocity = (msg + ctr)->steering_angle_velocity;
    outArray[ctr]["steering_angle_velocity"] = factory.createScalar(currentElement_steering_angle_velocity);
    // speed
    auto currentElement_speed = (msg + ctr)->speed;
    outArray[ctr]["speed"] = factory.createScalar(currentElement_speed);
    // acceleration
    auto currentElement_acceleration = (msg + ctr)->acceleration;
    outArray[ctr]["acceleration"] = factory.createScalar(currentElement_acceleration);
    // jerk
    auto currentElement_jerk = (msg + ctr)->jerk;
    outArray[ctr]["jerk"] = factory.createScalar(currentElement_jerk);
    }
    return std::move(outArray);
  } 
class ACKERMANN_MSGS_EXPORT ackermann_msgs_AckermannDrive_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ackermann_msgs_AckermannDrive_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ackermann_msgs_AckermannDrive_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<ackermann_msgs::msg::AckermannDrive,ackermann_msgs_msg_AckermannDrive_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ackermann_msgs_AckermannDrive_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<ackermann_msgs::msg::AckermannDrive,ackermann_msgs_msg_AckermannDrive_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ackermann_msgs_msg_AckermannDrive_common, MATLABROS2MsgInterface<ackermann_msgs::msg::AckermannDrive>)
CLASS_LOADER_REGISTER_CLASS(ackermann_msgs_AckermannDrive_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER