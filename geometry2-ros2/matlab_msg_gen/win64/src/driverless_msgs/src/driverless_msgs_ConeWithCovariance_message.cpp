// Copyright 2020-2021 The MathWorks, Inc.
// Common copy functions for driverless_msgs/ConeWithCovariance
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
#include "driverless_msgs/msg/cone_with_covariance.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class DRIVERLESS_MSGS_EXPORT driverless_msgs_msg_ConeWithCovariance_common : public MATLABROS2MsgInterface<driverless_msgs::msg::ConeWithCovariance> {
  public:
    virtual ~driverless_msgs_msg_ConeWithCovariance_common(){}
    virtual void copy_from_struct(driverless_msgs::msg::ConeWithCovariance* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const driverless_msgs::msg::ConeWithCovariance* msg, MultiLibLoader loader, size_t size = 1);
};
  void driverless_msgs_msg_ConeWithCovariance_common::copy_from_struct(driverless_msgs::msg::ConeWithCovariance* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //cone
        const matlab::data::StructArray cone_arr = arr["cone"];
        auto msgClassPtr_cone = getCommonObject<driverless_msgs::msg::Cone>("driverless_msgs_msg_Cone_common",loader);
        msgClassPtr_cone->copy_from_struct(&msg->cone,cone_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cone' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cone' is wrong type; expected a struct.");
    }
    try {
        //covariance
        const matlab::data::TypedArray<double> covariance_arr = arr["covariance"];
        size_t nelem = 4;
        	std::copy(covariance_arr.begin(), covariance_arr.begin()+nelem, msg->covariance.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'covariance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'covariance' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T driverless_msgs_msg_ConeWithCovariance_common::get_arr(MDFactory_T& factory, const driverless_msgs::msg::ConeWithCovariance* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","cone","covariance"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("driverless_msgs/ConeWithCovariance");
    // cone
    auto currentElement_cone = (msg + ctr)->cone;
    auto msgClassPtr_cone = getCommonObject<driverless_msgs::msg::Cone>("driverless_msgs_msg_Cone_common",loader);
    outArray[ctr]["cone"] = msgClassPtr_cone->get_arr(factory, &currentElement_cone, loader);
    // covariance
    auto currentElement_covariance = (msg + ctr)->covariance;
    outArray[ctr]["covariance"] = factory.createArray<driverless_msgs::msg::ConeWithCovariance::_covariance_type::const_iterator, double>({currentElement_covariance.size(), 1}, currentElement_covariance.begin(), currentElement_covariance.end());
    }
    return std::move(outArray);
  } 
class DRIVERLESS_MSGS_EXPORT driverless_msgs_ConeWithCovariance_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~driverless_msgs_ConeWithCovariance_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          driverless_msgs_ConeWithCovariance_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<driverless_msgs::msg::ConeWithCovariance,driverless_msgs_msg_ConeWithCovariance_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         driverless_msgs_ConeWithCovariance_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<driverless_msgs::msg::ConeWithCovariance,driverless_msgs_msg_ConeWithCovariance_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_msg_ConeWithCovariance_common, MATLABROS2MsgInterface<driverless_msgs::msg::ConeWithCovariance>)
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_ConeWithCovariance_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER