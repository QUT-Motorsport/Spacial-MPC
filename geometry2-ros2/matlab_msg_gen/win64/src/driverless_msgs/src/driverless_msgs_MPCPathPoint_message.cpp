// Copyright 2020-2021 The MathWorks, Inc.
// Common copy functions for driverless_msgs/MPCPathPoint
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
#include "driverless_msgs/msg/mpc_path_point.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class DRIVERLESS_MSGS_EXPORT driverless_msgs_msg_MPCPathPoint_common : public MATLABROS2MsgInterface<driverless_msgs::msg::MPCPathPoint> {
  public:
    virtual ~driverless_msgs_msg_MPCPathPoint_common(){}
    virtual void copy_from_struct(driverless_msgs::msg::MPCPathPoint* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const driverless_msgs::msg::MPCPathPoint* msg, MultiLibLoader loader, size_t size = 1);
};
  void driverless_msgs_msg_MPCPathPoint_common::copy_from_struct(driverless_msgs::msg::MPCPathPoint* msg, const matlab::data::Struct& arr,
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
        //track_angle
        const matlab::data::TypedArray<double> track_angle_arr = arr["track_angle"];
        msg->track_angle = track_angle_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'track_angle' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'track_angle' is wrong type; expected a double.");
    }
    try {
        //curvature
        const matlab::data::TypedArray<double> curvature_arr = arr["curvature"];
        msg->curvature = curvature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'curvature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'curvature' is wrong type; expected a double.");
    }
    try {
        //s
        const matlab::data::TypedArray<double> s_arr = arr["s"];
        msg->s = s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 's' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 's' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T driverless_msgs_msg_MPCPathPoint_common::get_arr(MDFactory_T& factory, const driverless_msgs::msg::MPCPathPoint* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","location","track_angle","curvature","s"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("driverless_msgs/MPCPathPoint");
    // location
    auto currentElement_location = (msg + ctr)->location;
    auto msgClassPtr_location = getCommonObject<geometry_msgs::msg::Point>("geometry_msgs_msg_Point_common",loader);
    outArray[ctr]["location"] = msgClassPtr_location->get_arr(factory, &currentElement_location, loader);
    // track_angle
    auto currentElement_track_angle = (msg + ctr)->track_angle;
    outArray[ctr]["track_angle"] = factory.createScalar(currentElement_track_angle);
    // curvature
    auto currentElement_curvature = (msg + ctr)->curvature;
    outArray[ctr]["curvature"] = factory.createScalar(currentElement_curvature);
    // s
    auto currentElement_s = (msg + ctr)->s;
    outArray[ctr]["s"] = factory.createScalar(currentElement_s);
    }
    return std::move(outArray);
  } 
class DRIVERLESS_MSGS_EXPORT driverless_msgs_MPCPathPoint_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~driverless_msgs_MPCPathPoint_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          driverless_msgs_MPCPathPoint_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<driverless_msgs::msg::MPCPathPoint,driverless_msgs_msg_MPCPathPoint_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         driverless_msgs_MPCPathPoint_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<driverless_msgs::msg::MPCPathPoint,driverless_msgs_msg_MPCPathPoint_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_msg_MPCPathPoint_common, MATLABROS2MsgInterface<driverless_msgs::msg::MPCPathPoint>)
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_MPCPathPoint_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER