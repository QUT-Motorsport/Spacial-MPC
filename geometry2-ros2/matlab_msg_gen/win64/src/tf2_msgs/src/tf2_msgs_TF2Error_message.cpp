// Copyright 2020-2021 The MathWorks, Inc.
// Common copy functions for tf2_msgs/TF2Error
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
#include "tf2_msgs/msg/tf2_error.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class TF2_MSGS_EXPORT tf2_msgs_msg_TF2Error_common : public MATLABROS2MsgInterface<tf2_msgs::msg::TF2Error> {
  public:
    virtual ~tf2_msgs_msg_TF2Error_common(){}
    virtual void copy_from_struct(tf2_msgs::msg::TF2Error* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tf2_msgs::msg::TF2Error* msg, MultiLibLoader loader, size_t size = 1);
};
  void tf2_msgs_msg_TF2Error_common::copy_from_struct(tf2_msgs::msg::TF2Error* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //error
        const matlab::data::TypedArray<uint8_t> error_arr = arr["error"];
        msg->error = error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'error' is wrong type; expected a uint8.");
    }
    try {
        //error_string
        const matlab::data::CharArray error_string_arr = arr["error_string"];
        msg->error_string = error_string_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'error_string' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'error_string' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tf2_msgs_msg_TF2Error_common::get_arr(MDFactory_T& factory, const tf2_msgs::msg::TF2Error* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","NO_ERROR","LOOKUP_ERROR","CONNECTIVITY_ERROR","EXTRAPOLATION_ERROR","INVALID_ARGUMENT_ERROR","TIMEOUT_ERROR","TRANSFORM_ERROR","error","error_string"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tf2_msgs/TF2Error");
    // NO_ERROR
    auto currentElement_NO_ERROR = (msg + ctr)->NO_ERROR;
    outArray[ctr]["NO_ERROR"] = factory.createScalar(currentElement_NO_ERROR);
    // LOOKUP_ERROR
    auto currentElement_LOOKUP_ERROR = (msg + ctr)->LOOKUP_ERROR;
    outArray[ctr]["LOOKUP_ERROR"] = factory.createScalar(currentElement_LOOKUP_ERROR);
    // CONNECTIVITY_ERROR
    auto currentElement_CONNECTIVITY_ERROR = (msg + ctr)->CONNECTIVITY_ERROR;
    outArray[ctr]["CONNECTIVITY_ERROR"] = factory.createScalar(currentElement_CONNECTIVITY_ERROR);
    // EXTRAPOLATION_ERROR
    auto currentElement_EXTRAPOLATION_ERROR = (msg + ctr)->EXTRAPOLATION_ERROR;
    outArray[ctr]["EXTRAPOLATION_ERROR"] = factory.createScalar(currentElement_EXTRAPOLATION_ERROR);
    // INVALID_ARGUMENT_ERROR
    auto currentElement_INVALID_ARGUMENT_ERROR = (msg + ctr)->INVALID_ARGUMENT_ERROR;
    outArray[ctr]["INVALID_ARGUMENT_ERROR"] = factory.createScalar(currentElement_INVALID_ARGUMENT_ERROR);
    // TIMEOUT_ERROR
    auto currentElement_TIMEOUT_ERROR = (msg + ctr)->TIMEOUT_ERROR;
    outArray[ctr]["TIMEOUT_ERROR"] = factory.createScalar(currentElement_TIMEOUT_ERROR);
    // TRANSFORM_ERROR
    auto currentElement_TRANSFORM_ERROR = (msg + ctr)->TRANSFORM_ERROR;
    outArray[ctr]["TRANSFORM_ERROR"] = factory.createScalar(currentElement_TRANSFORM_ERROR);
    // error
    auto currentElement_error = (msg + ctr)->error;
    outArray[ctr]["error"] = factory.createScalar(currentElement_error);
    // error_string
    auto currentElement_error_string = (msg + ctr)->error_string;
    outArray[ctr]["error_string"] = factory.createCharArray(currentElement_error_string);
    }
    return std::move(outArray);
  } 
class TF2_MSGS_EXPORT tf2_msgs_TF2Error_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~tf2_msgs_TF2Error_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tf2_msgs_TF2Error_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<tf2_msgs::msg::TF2Error,tf2_msgs_msg_TF2Error_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         tf2_msgs_TF2Error_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<tf2_msgs::msg::TF2Error,tf2_msgs_msg_TF2Error_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tf2_msgs_msg_TF2Error_common, MATLABROS2MsgInterface<tf2_msgs::msg::TF2Error>)
CLASS_LOADER_REGISTER_CLASS(tf2_msgs_TF2Error_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER