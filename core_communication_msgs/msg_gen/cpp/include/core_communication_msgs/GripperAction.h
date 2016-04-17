/* Auto-generated by genmsg_cpp for file /home/biorob/rosstacks/core_dev/core_communication_msgs/msg/GripperAction.msg */
#ifndef CORE_COMMUNICATION_MSGS_MESSAGE_GRIPPERACTION_H
#define CORE_COMMUNICATION_MSGS_MESSAGE_GRIPPERACTION_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace core_communication_msgs
{
template <class ContainerAllocator>
struct GripperAction_ {
  typedef GripperAction_<ContainerAllocator> Type;

  GripperAction_()
  : absolutePosition(0.0)
  , absPosIsSet(false)
  , closeGripper(false)
  , noMovementTimeout(0.0)
  , openGripper(false)
  , useCustomNoMovementTimeout(false)
  {
  }

  GripperAction_(const ContainerAllocator& _alloc)
  : absolutePosition(0.0)
  , absPosIsSet(false)
  , closeGripper(false)
  , noMovementTimeout(0.0)
  , openGripper(false)
  , useCustomNoMovementTimeout(false)
  {
  }

  typedef double _absolutePosition_type;
  double absolutePosition;

  typedef uint8_t _absPosIsSet_type;
  uint8_t absPosIsSet;

  typedef uint8_t _closeGripper_type;
  uint8_t closeGripper;

  typedef double _noMovementTimeout_type;
  double noMovementTimeout;

  typedef uint8_t _openGripper_type;
  uint8_t openGripper;

  typedef uint8_t _useCustomNoMovementTimeout_type;
  uint8_t useCustomNoMovementTimeout;


  typedef boost::shared_ptr< ::core_communication_msgs::GripperAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::core_communication_msgs::GripperAction_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GripperAction
typedef  ::core_communication_msgs::GripperAction_<std::allocator<void> > GripperAction;

typedef boost::shared_ptr< ::core_communication_msgs::GripperAction> GripperActionPtr;
typedef boost::shared_ptr< ::core_communication_msgs::GripperAction const> GripperActionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::core_communication_msgs::GripperAction_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::core_communication_msgs::GripperAction_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace core_communication_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::core_communication_msgs::GripperAction_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::core_communication_msgs::GripperAction_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::core_communication_msgs::GripperAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "67688fdf428828504144a527b96201ec";
  }

  static const char* value(const  ::core_communication_msgs::GripperAction_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x67688fdf42882850ULL;
  static const uint64_t static_value2 = 0x4144a527b96201ecULL;
};

template<class ContainerAllocator>
struct DataType< ::core_communication_msgs::GripperAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "core_communication_msgs/GripperAction";
  }

  static const char* value(const  ::core_communication_msgs::GripperAction_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::core_communication_msgs::GripperAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 absolutePosition\n\
bool absPosIsSet\n\
bool closeGripper\n\
float64 noMovementTimeout\n\
bool openGripper\n\
bool useCustomNoMovementTimeout\n\
\n\
";
  }

  static const char* value(const  ::core_communication_msgs::GripperAction_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::core_communication_msgs::GripperAction_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::core_communication_msgs::GripperAction_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.absolutePosition);
    stream.next(m.absPosIsSet);
    stream.next(m.closeGripper);
    stream.next(m.noMovementTimeout);
    stream.next(m.openGripper);
    stream.next(m.useCustomNoMovementTimeout);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GripperAction_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::core_communication_msgs::GripperAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::core_communication_msgs::GripperAction_<ContainerAllocator> & v) 
  {
    s << indent << "absolutePosition: ";
    Printer<double>::stream(s, indent + "  ", v.absolutePosition);
    s << indent << "absPosIsSet: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.absPosIsSet);
    s << indent << "closeGripper: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.closeGripper);
    s << indent << "noMovementTimeout: ";
    Printer<double>::stream(s, indent + "  ", v.noMovementTimeout);
    s << indent << "openGripper: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.openGripper);
    s << indent << "useCustomNoMovementTimeout: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.useCustomNoMovementTimeout);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CORE_COMMUNICATION_MSGS_MESSAGE_GRIPPERACTION_H

