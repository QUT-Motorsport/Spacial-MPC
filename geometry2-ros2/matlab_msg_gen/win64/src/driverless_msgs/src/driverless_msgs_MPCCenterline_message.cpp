// Copyright 2020-2021 The MathWorks, Inc.
// Common copy functions for driverless_msgs/MPCCenterline
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
#include "driverless_msgs/msg/mpc_centerline.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class DRIVERLESS_MSGS_EXPORT driverless_msgs_msg_MPCCenterline_common : public MATLABROS2MsgInterface<driverless_msgs::msg::MPCCenterline> {
  public:
    virtual ~driverless_msgs_msg_MPCCenterline_common(){}
    virtual void copy_from_struct(driverless_msgs::msg::MPCCenterline* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const driverless_msgs::msg::MPCCenterline* msg, MultiLibLoader loader, size_t size = 1);
};
  void driverless_msgs_msg_MPCCenterline_common::copy_from_struct(driverless_msgs::msg::MPCCenterline* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //path
        const matlab::data::StructArray path_arr = arr["path"];
        for (auto _patharr : path_arr) {
        	driverless_msgs::msg::MPCPathPoint _val;
        auto msgClassPtr_path = getCommonObject<driverless_msgs::msg::MPCPathPoint>("driverless_msgs_msg_MPCPathPoint_common",loader);
        msgClassPtr_path->copy_from_struct(&_val,_patharr,loader);
        	msg->path.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'path' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'path' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T driverless_msgs_msg_MPCCenterline_common::get_arr(MDFactory_T& factory, const driverless_msgs::msg::MPCCenterline* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","path"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("driverless_msgs/MPCCenterline");
    // path
    auto currentElement_path = (msg + ctr)->path;
    auto msgClassPtr_path = getCommonObject<driverless_msgs::msg::MPCPathPoint>("driverless_msgs_msg_MPCPathPoint_common",loader);
    outArray[ctr]["path"] = msgClassPtr_path->get_arr(factory,&currentElement_path[0],loader,currentElement_path.size());
    }
    return std::move(outArray);
  } 
class DRIVERLESS_MSGS_EXPORT driverless_msgs_MPCCenterline_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~driverless_msgs_MPCCenterline_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          driverless_msgs_MPCCenterline_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<driverless_msgs::msg::MPCCenterline,driverless_msgs_msg_MPCCenterline_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         driverless_msgs_MPCCenterline_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<driverless_msgs::msg::MPCCenterline,driverless_msgs_msg_MPCCenterline_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_msg_MPCCenterline_common, MATLABROS2MsgInterface<driverless_msgs::msg::MPCCenterline>)
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_MPCCenterline_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER