// Copyright 2021 The MathWorks, Inc.
// Common copy functions for driverless_msgs/SelectMissionRequest
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
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
#include "driverless_msgs/srv/select_mission.hpp"
#include "visibility_control.h"
#ifndef FOUNDATION_MATLABDATA_API
#include "MDArray.hpp"
#include "StructArray.hpp"
#include "TypedArrayRef.hpp"
#include "Struct.hpp"
#include "ArrayFactory.hpp"
#include "StructRef.hpp"
#include "Reference.hpp"
#endif
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
#include "ROS2ServiceTemplates.hpp"
class DRIVERLESS_MSGS_EXPORT driverless_msgs_msg_SelectMissionRequest_common : public MATLABROS2MsgInterface<driverless_msgs::srv::SelectMission::Request> {
  public:
    virtual ~driverless_msgs_msg_SelectMissionRequest_common(){}
    virtual void copy_from_struct(driverless_msgs::srv::SelectMission::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const driverless_msgs::srv::SelectMission::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void driverless_msgs_msg_SelectMissionRequest_common::copy_from_struct(driverless_msgs::srv::SelectMission::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //mission
        const matlab::data::CharArray mission_arr = arr["mission"];
        msg->mission = mission_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mission' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mission' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T driverless_msgs_msg_SelectMissionRequest_common::get_arr(MDFactory_T& factory, const driverless_msgs::srv::SelectMission::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","mission"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("driverless_msgs/SelectMissionRequest");
    // mission
    auto currentElement_mission = (msg + ctr)->mission;
    outArray[ctr]["mission"] = factory.createCharArray(currentElement_mission);
    }
    return std::move(outArray);
  }
class DRIVERLESS_MSGS_EXPORT driverless_msgs_msg_SelectMissionResponse_common : public MATLABROS2MsgInterface<driverless_msgs::srv::SelectMission::Response> {
  public:
    virtual ~driverless_msgs_msg_SelectMissionResponse_common(){}
    virtual void copy_from_struct(driverless_msgs::srv::SelectMission::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const driverless_msgs::srv::SelectMission::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void driverless_msgs_msg_SelectMissionResponse_common::copy_from_struct(driverless_msgs::srv::SelectMission::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //confirmation
        const matlab::data::CharArray confirmation_arr = arr["confirmation"];
        msg->confirmation = confirmation_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'confirmation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'confirmation' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T driverless_msgs_msg_SelectMissionResponse_common::get_arr(MDFactory_T& factory, const driverless_msgs::srv::SelectMission::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","confirmation"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("driverless_msgs/SelectMissionResponse");
    // confirmation
    auto currentElement_confirmation = (msg + ctr)->confirmation;
    outArray[ctr]["confirmation"] = factory.createCharArray(currentElement_confirmation);
    }
    return std::move(outArray);
  } 
class DRIVERLESS_MSGS_EXPORT driverless_msgs_SelectMission_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~driverless_msgs_SelectMission_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          driverless_msgs_SelectMission_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROS2PublisherImpl<driverless_msgs::srv::SelectMission::Request,driverless_msgs_msg_SelectMissionRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROS2PublisherImpl<driverless_msgs::srv::SelectMission::Response,driverless_msgs_msg_SelectMissionResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          driverless_msgs_SelectMission_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROS2SubscriberImpl<driverless_msgs::srv::SelectMission::Request,driverless_msgs_msg_SelectMissionRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROS2SubscriberImpl<driverless_msgs::srv::SelectMission::Response,driverless_msgs_msg_SelectMissionResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          driverless_msgs_SelectMission_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<driverless_msgs::srv::SelectMission,driverless_msgs::srv::SelectMission::Request,driverless_msgs::srv::SelectMission::Response,driverless_msgs_msg_SelectMissionRequest_common,driverless_msgs_msg_SelectMissionResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          driverless_msgs_SelectMission_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<driverless_msgs::srv::SelectMission,driverless_msgs::srv::SelectMission::Request,driverless_msgs::srv::SelectMission::Response,driverless_msgs_msg_SelectMissionRequest_common,driverless_msgs_msg_SelectMissionResponse_common,rclcpp::Client<driverless_msgs::srv::SelectMission>::SharedFuture>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_msg_SelectMissionRequest_common, MATLABROS2MsgInterface<driverless_msgs::srv::SelectMission::Request>)
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_msg_SelectMissionResponse_common, MATLABROS2MsgInterface<driverless_msgs::srv::SelectMission::Response>)
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_SelectMission_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
