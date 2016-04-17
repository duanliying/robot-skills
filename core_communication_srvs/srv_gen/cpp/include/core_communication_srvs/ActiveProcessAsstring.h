/* Auto-generated by genmsg_cpp for file /home/biorob/rosstacks/core_dev/core_communication_srvs/srv/ActiveProcessAsstring.srv */
#ifndef CORE_COMMUNICATION_SRVS_SERVICE_ACTIVEPROCESSASSTRING_H
#define CORE_COMMUNICATION_SRVS_SERVICE_ACTIVEPROCESSASSTRING_H
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

#include "ros/service_traits.h"




namespace core_communication_srvs
{
template <class ContainerAllocator>
struct ActiveProcessAsstringRequest_ {
  typedef ActiveProcessAsstringRequest_<ContainerAllocator> Type;

  ActiveProcessAsstringRequest_()
  {
  }

  ActiveProcessAsstringRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ActiveProcessAsstringRequest
typedef  ::core_communication_srvs::ActiveProcessAsstringRequest_<std::allocator<void> > ActiveProcessAsstringRequest;

typedef boost::shared_ptr< ::core_communication_srvs::ActiveProcessAsstringRequest> ActiveProcessAsstringRequestPtr;
typedef boost::shared_ptr< ::core_communication_srvs::ActiveProcessAsstringRequest const> ActiveProcessAsstringRequestConstPtr;


template <class ContainerAllocator>
struct ActiveProcessAsstringResponse_ {
  typedef ActiveProcessAsstringResponse_<ContainerAllocator> Type;

  ActiveProcessAsstringResponse_()
  : process()
  , activeId(0)
  , repeat(false)
  {
  }

  ActiveProcessAsstringResponse_(const ContainerAllocator& _alloc)
  : process(_alloc)
  , activeId(0)
  , repeat(false)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _process_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  process;

  typedef int32_t _activeId_type;
  int32_t activeId;

  typedef uint8_t _repeat_type;
  uint8_t repeat;


  typedef boost::shared_ptr< ::core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ActiveProcessAsstringResponse
typedef  ::core_communication_srvs::ActiveProcessAsstringResponse_<std::allocator<void> > ActiveProcessAsstringResponse;

typedef boost::shared_ptr< ::core_communication_srvs::ActiveProcessAsstringResponse> ActiveProcessAsstringResponsePtr;
typedef boost::shared_ptr< ::core_communication_srvs::ActiveProcessAsstringResponse const> ActiveProcessAsstringResponseConstPtr;

struct ActiveProcessAsstring
{

typedef ActiveProcessAsstringRequest Request;
typedef ActiveProcessAsstringResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct ActiveProcessAsstring
} // namespace core_communication_srvs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "core_communication_srvs/ActiveProcessAsstringRequest";
  }

  static const char* value(const  ::core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
";
  }

  static const char* value(const  ::core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3e94415c89a949942dd081b366fb1fbc";
  }

  static const char* value(const  ::core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3e94415c89a94994ULL;
  static const uint64_t static_value2 = 0x2dd081b366fb1fbcULL;
};

template<class ContainerAllocator>
struct DataType< ::core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "core_communication_srvs/ActiveProcessAsstringResponse";
  }

  static const char* value(const  ::core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
string process\n\
int32 activeId\n\
bool repeat\n\
\n\
\n\
";
  }

  static const char* value(const  ::core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ActiveProcessAsstringRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.process);
    stream.next(m.activeId);
    stream.next(m.repeat);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ActiveProcessAsstringResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<core_communication_srvs::ActiveProcessAsstring> {
  static const char* value() 
  {
    return "3e94415c89a949942dd081b366fb1fbc";
  }

  static const char* value(const core_communication_srvs::ActiveProcessAsstring&) { return value(); } 
};

template<>
struct DataType<core_communication_srvs::ActiveProcessAsstring> {
  static const char* value() 
  {
    return "core_communication_srvs/ActiveProcessAsstring";
  }

  static const char* value(const core_communication_srvs::ActiveProcessAsstring&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3e94415c89a949942dd081b366fb1fbc";
  }

  static const char* value(const core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "core_communication_srvs/ActiveProcessAsstring";
  }

  static const char* value(const core_communication_srvs::ActiveProcessAsstringRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3e94415c89a949942dd081b366fb1fbc";
  }

  static const char* value(const core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "core_communication_srvs/ActiveProcessAsstring";
  }

  static const char* value(const core_communication_srvs::ActiveProcessAsstringResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // CORE_COMMUNICATION_SRVS_SERVICE_ACTIVEPROCESSASSTRING_H

