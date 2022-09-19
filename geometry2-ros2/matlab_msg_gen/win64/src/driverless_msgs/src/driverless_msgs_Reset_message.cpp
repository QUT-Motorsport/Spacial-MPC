// Copyright 2020-2021 The MathWorks, Inc.
// Common copy functions for driverless_msgs/Reset
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
#include "driverless_msgs/msg/reset.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class DRIVERLESS_MSGS_EXPORT driverless_msgs_msg_Reset_common : public MATLABROS2MsgInterface<driverless_msgs::msg::Reset> {
  public:
    virtual ~driverless_msgs_msg_Reset_common(){}
    virtual void copy_from_struct(driverless_msgs::msg::Reset* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const driverless_msgs::msg::Reset* msg, MultiLibLoader loader, size_t size = 1);
};
  void driverless_msgs_msg_Reset_common::copy_from_struct(driverless_msgs::msg::Reset* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //reset
        const matlab::data::TypedArray<bool> reset_arr = arr["reset"];
        msg->reset = reset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T driverless_msgs_msg_Reset_common::get_arr(MDFactory_T& factory, const driverless_msgs::msg::Reset* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","reset"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("driverless_msgs/Reset");
    // reset
    auto currentElement_reset = (msg + ctr)->reset;
    outArray[ctr]["reset"] = factory.createScalar(currentElement_reset);
    }
    return std::move(outArray);
  } 
class DRIVERLESS_MSGS_EXPORT driverless_msgs_Reset_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~driverless_msgs_Reset_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          driverless_msgs_Reset_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<driverless_msgs::msg::Reset,driverless_msgs_msg_Reset_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         driverless_msgs_Reset_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<driverless_msgs::msg::Reset,driverless_msgs_msg_Reset_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_msg_Reset_common, MATLABROS2MsgInterface<driverless_msgs::msg::Reset>)
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_Reset_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER