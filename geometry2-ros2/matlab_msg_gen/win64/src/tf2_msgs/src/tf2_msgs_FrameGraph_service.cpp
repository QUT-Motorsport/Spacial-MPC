// Copyright 2021 The MathWorks, Inc.
// Common copy functions for tf2_msgs/FrameGraphRequest
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
#include "tf2_msgs/srv/frame_graph.hpp"
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
class TF2_MSGS_EXPORT tf2_msgs_msg_FrameGraphRequest_common : public MATLABROS2MsgInterface<tf2_msgs::srv::FrameGraph::Request> {
  public:
    virtual ~tf2_msgs_msg_FrameGraphRequest_common(){}
    virtual void copy_from_struct(tf2_msgs::srv::FrameGraph::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const tf2_msgs::srv::FrameGraph::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void tf2_msgs_msg_FrameGraphRequest_common::copy_from_struct(tf2_msgs::srv::FrameGraph::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
  }
  //----------------------------------------------------------------------------
  MDArray_T tf2_msgs_msg_FrameGraphRequest_common::get_arr(MDFactory_T& factory, const tf2_msgs::srv::FrameGraph::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tf2_msgs/FrameGraphRequest");
    }
    return std::move(outArray);
  }
class TF2_MSGS_EXPORT tf2_msgs_msg_FrameGraphResponse_common : public MATLABROS2MsgInterface<tf2_msgs::srv::FrameGraph::Response> {
  public:
    virtual ~tf2_msgs_msg_FrameGraphResponse_common(){}
    virtual void copy_from_struct(tf2_msgs::srv::FrameGraph::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const tf2_msgs::srv::FrameGraph::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void tf2_msgs_msg_FrameGraphResponse_common::copy_from_struct(tf2_msgs::srv::FrameGraph::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //frame_yaml
        const matlab::data::CharArray frame_yaml_arr = arr["frame_yaml"];
        msg->frame_yaml = frame_yaml_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame_yaml' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'frame_yaml' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tf2_msgs_msg_FrameGraphResponse_common::get_arr(MDFactory_T& factory, const tf2_msgs::srv::FrameGraph::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","frame_yaml"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tf2_msgs/FrameGraphResponse");
    // frame_yaml
    auto currentElement_frame_yaml = (msg + ctr)->frame_yaml;
    outArray[ctr]["frame_yaml"] = factory.createCharArray(currentElement_frame_yaml);
    }
    return std::move(outArray);
  } 
class TF2_MSGS_EXPORT tf2_msgs_FrameGraph_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~tf2_msgs_FrameGraph_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tf2_msgs_FrameGraph_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROS2PublisherImpl<tf2_msgs::srv::FrameGraph::Request,tf2_msgs_msg_FrameGraphRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROS2PublisherImpl<tf2_msgs::srv::FrameGraph::Response,tf2_msgs_msg_FrameGraphResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          tf2_msgs_FrameGraph_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROS2SubscriberImpl<tf2_msgs::srv::FrameGraph::Request,tf2_msgs_msg_FrameGraphRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROS2SubscriberImpl<tf2_msgs::srv::FrameGraph::Response,tf2_msgs_msg_FrameGraphResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          tf2_msgs_FrameGraph_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<tf2_msgs::srv::FrameGraph,tf2_msgs::srv::FrameGraph::Request,tf2_msgs::srv::FrameGraph::Response,tf2_msgs_msg_FrameGraphRequest_common,tf2_msgs_msg_FrameGraphResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          tf2_msgs_FrameGraph_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<tf2_msgs::srv::FrameGraph,tf2_msgs::srv::FrameGraph::Request,tf2_msgs::srv::FrameGraph::Response,tf2_msgs_msg_FrameGraphRequest_common,tf2_msgs_msg_FrameGraphResponse_common,rclcpp::Client<tf2_msgs::srv::FrameGraph>::SharedFuture>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tf2_msgs_msg_FrameGraphRequest_common, MATLABROS2MsgInterface<tf2_msgs::srv::FrameGraph::Request>)
CLASS_LOADER_REGISTER_CLASS(tf2_msgs_msg_FrameGraphResponse_common, MATLABROS2MsgInterface<tf2_msgs::srv::FrameGraph::Response>)
CLASS_LOADER_REGISTER_CLASS(tf2_msgs_FrameGraph_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
