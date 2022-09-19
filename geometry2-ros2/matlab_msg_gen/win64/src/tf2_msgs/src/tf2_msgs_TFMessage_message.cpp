// Copyright 2020-2021 The MathWorks, Inc.
// Common copy functions for tf2_msgs/TFMessage
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
#include "tf2_msgs/msg/tf_message.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class TF2_MSGS_EXPORT tf2_msgs_msg_TFMessage_common : public MATLABROS2MsgInterface<tf2_msgs::msg::TFMessage> {
  public:
    virtual ~tf2_msgs_msg_TFMessage_common(){}
    virtual void copy_from_struct(tf2_msgs::msg::TFMessage* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tf2_msgs::msg::TFMessage* msg, MultiLibLoader loader, size_t size = 1);
};
  void tf2_msgs_msg_TFMessage_common::copy_from_struct(tf2_msgs::msg::TFMessage* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //transforms
        const matlab::data::StructArray transforms_arr = arr["transforms"];
        for (auto _transformsarr : transforms_arr) {
        	geometry_msgs::msg::TransformStamped _val;
        auto msgClassPtr_transforms = getCommonObject<geometry_msgs::msg::TransformStamped>("geometry_msgs_msg_TransformStamped_common",loader);
        msgClassPtr_transforms->copy_from_struct(&_val,_transformsarr,loader);
        	msg->transforms.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'transforms' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'transforms' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tf2_msgs_msg_TFMessage_common::get_arr(MDFactory_T& factory, const tf2_msgs::msg::TFMessage* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","transforms"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tf2_msgs/TFMessage");
    // transforms
    auto currentElement_transforms = (msg + ctr)->transforms;
    auto msgClassPtr_transforms = getCommonObject<geometry_msgs::msg::TransformStamped>("geometry_msgs_msg_TransformStamped_common",loader);
    outArray[ctr]["transforms"] = msgClassPtr_transforms->get_arr(factory,&currentElement_transforms[0],loader,currentElement_transforms.size());
    }
    return std::move(outArray);
  } 
class TF2_MSGS_EXPORT tf2_msgs_TFMessage_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~tf2_msgs_TFMessage_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tf2_msgs_TFMessage_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<tf2_msgs::msg::TFMessage,tf2_msgs_msg_TFMessage_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         tf2_msgs_TFMessage_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<tf2_msgs::msg::TFMessage,tf2_msgs_msg_TFMessage_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tf2_msgs_msg_TFMessage_common, MATLABROS2MsgInterface<tf2_msgs::msg::TFMessage>)
CLASS_LOADER_REGISTER_CLASS(tf2_msgs_TFMessage_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER