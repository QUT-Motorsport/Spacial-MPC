// Copyright 2020-2021 The MathWorks, Inc.
// Common copy functions for driverless_msgs/RES
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
#include "driverless_msgs/msg/res.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class DRIVERLESS_MSGS_EXPORT driverless_msgs_msg_RES_common : public MATLABROS2MsgInterface<driverless_msgs::msg::RES> {
  public:
    virtual ~driverless_msgs_msg_RES_common(){}
    virtual void copy_from_struct(driverless_msgs::msg::RES* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const driverless_msgs::msg::RES* msg, MultiLibLoader loader, size_t size = 1);
};
  void driverless_msgs_msg_RES_common::copy_from_struct(driverless_msgs::msg::RES* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //sw_k2
        const matlab::data::TypedArray<bool> sw_k2_arr = arr["sw_k2"];
        msg->sw_k2 = sw_k2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sw_k2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'sw_k2' is wrong type; expected a logical.");
    }
    try {
        //bt_k3
        const matlab::data::TypedArray<bool> bt_k3_arr = arr["bt_k3"];
        msg->bt_k3 = bt_k3_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bt_k3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bt_k3' is wrong type; expected a logical.");
    }
    try {
        //estop
        const matlab::data::TypedArray<bool> estop_arr = arr["estop"];
        msg->estop = estop_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'estop' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'estop' is wrong type; expected a logical.");
    }
    try {
        //loss_of_signal_shutdown_notice
        const matlab::data::TypedArray<bool> loss_of_signal_shutdown_notice_arr = arr["loss_of_signal_shutdown_notice"];
        msg->loss_of_signal_shutdown_notice = loss_of_signal_shutdown_notice_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'loss_of_signal_shutdown_notice' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'loss_of_signal_shutdown_notice' is wrong type; expected a logical.");
    }
    try {
        //radio_quality
        const matlab::data::TypedArray<uint8_t> radio_quality_arr = arr["radio_quality"];
        msg->radio_quality = radio_quality_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'radio_quality' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'radio_quality' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T driverless_msgs_msg_RES_common::get_arr(MDFactory_T& factory, const driverless_msgs::msg::RES* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","sw_k2","bt_k3","estop","loss_of_signal_shutdown_notice","radio_quality"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("driverless_msgs/RES");
    // sw_k2
    auto currentElement_sw_k2 = (msg + ctr)->sw_k2;
    outArray[ctr]["sw_k2"] = factory.createScalar(currentElement_sw_k2);
    // bt_k3
    auto currentElement_bt_k3 = (msg + ctr)->bt_k3;
    outArray[ctr]["bt_k3"] = factory.createScalar(currentElement_bt_k3);
    // estop
    auto currentElement_estop = (msg + ctr)->estop;
    outArray[ctr]["estop"] = factory.createScalar(currentElement_estop);
    // loss_of_signal_shutdown_notice
    auto currentElement_loss_of_signal_shutdown_notice = (msg + ctr)->loss_of_signal_shutdown_notice;
    outArray[ctr]["loss_of_signal_shutdown_notice"] = factory.createScalar(currentElement_loss_of_signal_shutdown_notice);
    // radio_quality
    auto currentElement_radio_quality = (msg + ctr)->radio_quality;
    outArray[ctr]["radio_quality"] = factory.createScalar(currentElement_radio_quality);
    }
    return std::move(outArray);
  } 
class DRIVERLESS_MSGS_EXPORT driverless_msgs_RES_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~driverless_msgs_RES_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          driverless_msgs_RES_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<driverless_msgs::msg::RES,driverless_msgs_msg_RES_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         driverless_msgs_RES_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<driverless_msgs::msg::RES,driverless_msgs_msg_RES_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_msg_RES_common, MATLABROS2MsgInterface<driverless_msgs::msg::RES>)
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_RES_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER