// Copyright 2020-2021 The MathWorks, Inc.
// Common copy functions for driverless_msgs/MPCState
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
#include "driverless_msgs/msg/mpc_state.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class DRIVERLESS_MSGS_EXPORT driverless_msgs_msg_MPCState_common : public MATLABROS2MsgInterface<driverless_msgs::msg::MPCState> {
  public:
    virtual ~driverless_msgs_msg_MPCState_common(){}
    virtual void copy_from_struct(driverless_msgs::msg::MPCState* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const driverless_msgs::msg::MPCState* msg, MultiLibLoader loader, size_t size = 1);
};
  void driverless_msgs_msg_MPCState_common::copy_from_struct(driverless_msgs::msg::MPCState* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //s
        const matlab::data::TypedArray<double> s_arr = arr["s"];
        msg->s = s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 's' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 's' is wrong type; expected a double.");
    }
    try {
        //ey
        const matlab::data::TypedArray<double> ey_arr = arr["ey"];
        msg->ey = ey_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ey' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ey' is wrong type; expected a double.");
    }
    try {
        //etheta
        const matlab::data::TypedArray<double> etheta_arr = arr["etheta"];
        msg->etheta = etheta_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'etheta' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'etheta' is wrong type; expected a double.");
    }
    try {
        //otheta_dot
        const matlab::data::TypedArray<double> otheta_dot_arr = arr["otheta_dot"];
        msg->otheta_dot = otheta_dot_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'otheta_dot' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'otheta_dot' is wrong type; expected a double.");
    }
    try {
        //vx
        const matlab::data::TypedArray<double> vx_arr = arr["vx"];
        msg->vx = vx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vx' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vx' is wrong type; expected a double.");
    }
    try {
        //vy
        const matlab::data::TypedArray<double> vy_arr = arr["vy"];
        msg->vy = vy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vy' is wrong type; expected a double.");
    }
    try {
        //d
        const matlab::data::TypedArray<double> d_arr = arr["d"];
        msg->d = d_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'd' is wrong type; expected a double.");
    }
    try {
        //t
        const matlab::data::StructArray t_arr = arr["t"];
        auto msgClassPtr_t = getCommonObject<builtin_interfaces::msg::Time>("builtin_interfaces_msg_Time_common",loader);
        msgClassPtr_t->copy_from_struct(&msg->t,t_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 't' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 't' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T driverless_msgs_msg_MPCState_common::get_arr(MDFactory_T& factory, const driverless_msgs::msg::MPCState* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","s","ey","etheta","otheta_dot","vx","vy","d","t"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("driverless_msgs/MPCState");
    // s
    auto currentElement_s = (msg + ctr)->s;
    outArray[ctr]["s"] = factory.createScalar(currentElement_s);
    // ey
    auto currentElement_ey = (msg + ctr)->ey;
    outArray[ctr]["ey"] = factory.createScalar(currentElement_ey);
    // etheta
    auto currentElement_etheta = (msg + ctr)->etheta;
    outArray[ctr]["etheta"] = factory.createScalar(currentElement_etheta);
    // otheta_dot
    auto currentElement_otheta_dot = (msg + ctr)->otheta_dot;
    outArray[ctr]["otheta_dot"] = factory.createScalar(currentElement_otheta_dot);
    // vx
    auto currentElement_vx = (msg + ctr)->vx;
    outArray[ctr]["vx"] = factory.createScalar(currentElement_vx);
    // vy
    auto currentElement_vy = (msg + ctr)->vy;
    outArray[ctr]["vy"] = factory.createScalar(currentElement_vy);
    // d
    auto currentElement_d = (msg + ctr)->d;
    outArray[ctr]["d"] = factory.createScalar(currentElement_d);
    // t
    auto currentElement_t = (msg + ctr)->t;
    auto msgClassPtr_t = getCommonObject<builtin_interfaces::msg::Time>("builtin_interfaces_msg_Time_common",loader);
    outArray[ctr]["t"] = msgClassPtr_t->get_arr(factory, &currentElement_t, loader);
    }
    return std::move(outArray);
  } 
class DRIVERLESS_MSGS_EXPORT driverless_msgs_MPCState_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~driverless_msgs_MPCState_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          driverless_msgs_MPCState_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<driverless_msgs::msg::MPCState,driverless_msgs_msg_MPCState_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         driverless_msgs_MPCState_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<driverless_msgs::msg::MPCState,driverless_msgs_msg_MPCState_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_msg_MPCState_common, MATLABROS2MsgInterface<driverless_msgs::msg::MPCState>)
CLASS_LOADER_REGISTER_CLASS(driverless_msgs_MPCState_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER