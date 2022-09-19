// Copyright 2020-2021 The MathWorks, Inc.
// Common copy functions for driverless_msgs/Can
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
#include "driverless_msgs/msg/can.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class DRIVERLESS_MSGS_EXPORT driverless_msgs_msg_Can_common : public MATLABROS2MsgInterface<driverless_msgs::msg::Can> {
  public:
    virtual ~driverless_msgs_msg_Can_common(){}
    virtual void copy_from_struct(driverless_msgs::msg::Can* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const driverless_msgs::msg::Can* msg, MultiLibLoader loader, size_t size = 1);
};
  void driverless_msgs_msg_Can_common::copy_from_struct(driverless_msgs::msg::Can* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //timestamp
        const matlab::data::TypedArray<uint32_t> timestamp_arr = arr["timestamp"];
        msg->timestamp = timestamp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp' is wrong type; expected a uint32.");
    }
    try {
        //id
        const matlab::data::TypedArray<uint32_t> id_arr = arr["id"];
        msg->id = id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a uint32.");
    }
    try {
        //id_type
        const matlab::data::TypedArray<uint8_t> id_type_arr = arr["id_type"];
        msg->id_type = id_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'id_type' is wrong type; expected a uint8.");
    }
    try {
        //dlc
        const matlab::data::TypedArray<uint8_t> dlc_arr = arr["dlc"];
        msg->dlc = dlc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dlc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dlc' is wrong type; expected a uint8.");
    }
    try {
        //data
        const matlab::data::TypedArray<uint8_t> data_arr = arr["data"];
        size_t nelem = data_arr.getNumberOfElements();
        	msg->data.resize(nelem);
        	std::copy(data_arr.begin(), data_arr.begin()+nelem, msg->data.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'data' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'data' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T driverless_msgs_msg_Can_common::get_arr(MDFactory_T& factory, const driverless_msgs::msg::Can* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","id","id_type","dlc","data"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("driverless_msgs/Can");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // id
    auto currentElement_id = (msg + ctr)->id;
    outArray[ctr]["id"] = factory.createScalar(currentElement_id);
    // id_type
    auto currentElement_id_type = (msg + ctr)->id_type;
    outArray[ctr]["id_type"] = factory.createScalar(currentElement_id_type);
    // dlc
    auto currentElement_dlc = (msg + ctr)->dlc;
    outArray[ctr]["dlc"] = factory.createScalar(currentElement_dlc);
    // data
    auto currentElement_data = (msg + ctr)->data;
    outArray[ctr]["data"] = factory.createArray<driverless_msgs::msg::Can::_data_type::const_iterator, uint8_t>({currentElement_data.size(), 1}, currentElement_data.begin(), currentElement_data.end());
    }
    return std::move(outArray);
  } 
class DRIVERLESS_MSGS_EXPORT driverless_msgs_Can_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~driverless_msgs_Can_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          driverless_msgs_Can_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<driverless_msgs::msg::Can,driverless_msgs_msg_Can_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         driverless_msgs_Can_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<driverless_msgs::msg::Can,driverless_msgs_msg_Can_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_msg_Can_common, MATLABROS2MsgInterface<driverless_msgs::msg::Can>)
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_Can_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER