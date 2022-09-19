// Copyright 2020-2021 The MathWorks, Inc.
// Common copy functions for driverless_msgs/ConeDetectionStamped
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
#include "driverless_msgs/msg/cone_detection_stamped.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class DRIVERLESS_MSGS_EXPORT driverless_msgs_msg_ConeDetectionStamped_common : public MATLABROS2MsgInterface<driverless_msgs::msg::ConeDetectionStamped> {
  public:
    virtual ~driverless_msgs_msg_ConeDetectionStamped_common(){}
    virtual void copy_from_struct(driverless_msgs::msg::ConeDetectionStamped* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const driverless_msgs::msg::ConeDetectionStamped* msg, MultiLibLoader loader, size_t size = 1);
};
  void driverless_msgs_msg_ConeDetectionStamped_common::copy_from_struct(driverless_msgs::msg::ConeDetectionStamped* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //header
        const matlab::data::StructArray header_arr = arr["header"];
        auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("std_msgs_msg_Header_common",loader);
        msgClassPtr_header->copy_from_struct(&msg->header,header_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    try {
        //cones
        const matlab::data::StructArray cones_arr = arr["cones"];
        for (auto _conesarr : cones_arr) {
        	driverless_msgs::msg::Cone _val;
        auto msgClassPtr_cones = getCommonObject<driverless_msgs::msg::Cone>("driverless_msgs_msg_Cone_common",loader);
        msgClassPtr_cones->copy_from_struct(&_val,_conesarr,loader);
        	msg->cones.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cones' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cones' is wrong type; expected a struct.");
    }
    try {
        //cones_with_cov
        const matlab::data::StructArray cones_with_cov_arr = arr["cones_with_cov"];
        for (auto _cones_with_covarr : cones_with_cov_arr) {
        	driverless_msgs::msg::ConeWithCovariance _val;
        auto msgClassPtr_cones_with_cov = getCommonObject<driverless_msgs::msg::ConeWithCovariance>("driverless_msgs_msg_ConeWithCovariance_common",loader);
        msgClassPtr_cones_with_cov->copy_from_struct(&_val,_cones_with_covarr,loader);
        	msg->cones_with_cov.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cones_with_cov' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cones_with_cov' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T driverless_msgs_msg_ConeDetectionStamped_common::get_arr(MDFactory_T& factory, const driverless_msgs::msg::ConeDetectionStamped* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","cones","cones_with_cov"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("driverless_msgs/ConeDetectionStamped");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("std_msgs_msg_Header_common",loader);
    outArray[ctr]["header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // cones
    auto currentElement_cones = (msg + ctr)->cones;
    auto msgClassPtr_cones = getCommonObject<driverless_msgs::msg::Cone>("driverless_msgs_msg_Cone_common",loader);
    outArray[ctr]["cones"] = msgClassPtr_cones->get_arr(factory,&currentElement_cones[0],loader,currentElement_cones.size());
    // cones_with_cov
    auto currentElement_cones_with_cov = (msg + ctr)->cones_with_cov;
    auto msgClassPtr_cones_with_cov = getCommonObject<driverless_msgs::msg::ConeWithCovariance>("driverless_msgs_msg_ConeWithCovariance_common",loader);
    outArray[ctr]["cones_with_cov"] = msgClassPtr_cones_with_cov->get_arr(factory,&currentElement_cones_with_cov[0],loader,currentElement_cones_with_cov.size());
    }
    return std::move(outArray);
  } 
class DRIVERLESS_MSGS_EXPORT driverless_msgs_ConeDetectionStamped_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~driverless_msgs_ConeDetectionStamped_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          driverless_msgs_ConeDetectionStamped_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<driverless_msgs::msg::ConeDetectionStamped,driverless_msgs_msg_ConeDetectionStamped_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         driverless_msgs_ConeDetectionStamped_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<driverless_msgs::msg::ConeDetectionStamped,driverless_msgs_msg_ConeDetectionStamped_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_msg_ConeDetectionStamped_common, MATLABROS2MsgInterface<driverless_msgs::msg::ConeDetectionStamped>)
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_ConeDetectionStamped_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER