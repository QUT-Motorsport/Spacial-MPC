// Copyright 2020-2021 The MathWorks, Inc.
// Common copy functions for driverless_msgs/PathPoint
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
#include "driverless_msgs/msg/path_point.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class DRIVERLESS_MSGS_EXPORT driverless_msgs_msg_PathPoint_common : public MATLABROS2MsgInterface<driverless_msgs::msg::PathPoint> {
  public:
    virtual ~driverless_msgs_msg_PathPoint_common(){}
    virtual void copy_from_struct(driverless_msgs::msg::PathPoint* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const driverless_msgs::msg::PathPoint* msg, MultiLibLoader loader, size_t size = 1);
};
  void driverless_msgs_msg_PathPoint_common::copy_from_struct(driverless_msgs::msg::PathPoint* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //location
        const matlab::data::StructArray location_arr = arr["location"];
        auto msgClassPtr_location = getCommonObject<geometry_msgs::msg::Point>("geometry_msgs_msg_Point_common",loader);
        msgClassPtr_location->copy_from_struct(&msg->location,location_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'location' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'location' is wrong type; expected a struct.");
    }
    try {
        //turn_intensity
        const matlab::data::TypedArray<float> turn_intensity_arr = arr["turn_intensity"];
        msg->turn_intensity = turn_intensity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'turn_intensity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'turn_intensity' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T driverless_msgs_msg_PathPoint_common::get_arr(MDFactory_T& factory, const driverless_msgs::msg::PathPoint* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","location","turn_intensity"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("driverless_msgs/PathPoint");
    // location
    auto currentElement_location = (msg + ctr)->location;
    auto msgClassPtr_location = getCommonObject<geometry_msgs::msg::Point>("geometry_msgs_msg_Point_common",loader);
    outArray[ctr]["location"] = msgClassPtr_location->get_arr(factory, &currentElement_location, loader);
    // turn_intensity
    auto currentElement_turn_intensity = (msg + ctr)->turn_intensity;
    outArray[ctr]["turn_intensity"] = factory.createScalar(currentElement_turn_intensity);
    }
    return std::move(outArray);
  } 
class DRIVERLESS_MSGS_EXPORT driverless_msgs_PathPoint_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~driverless_msgs_PathPoint_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          driverless_msgs_PathPoint_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<driverless_msgs::msg::PathPoint,driverless_msgs_msg_PathPoint_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         driverless_msgs_PathPoint_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<driverless_msgs::msg::PathPoint,driverless_msgs_msg_PathPoint_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_msg_PathPoint_common, MATLABROS2MsgInterface<driverless_msgs::msg::PathPoint>)
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_PathPoint_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER