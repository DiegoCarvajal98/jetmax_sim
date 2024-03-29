// Generated by gencpp from file jetmax_control/IKResponse.msg
// DO NOT EDIT!


#ifndef JETMAX_CONTROL_MESSAGE_IKRESPONSE_H
#define JETMAX_CONTROL_MESSAGE_IKRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace jetmax_control
{
template <class ContainerAllocator>
struct IKResponse_
{
  typedef IKResponse_<ContainerAllocator> Type;

  IKResponse_()
    : success(false)  {
    }
  IKResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::jetmax_control::IKResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jetmax_control::IKResponse_<ContainerAllocator> const> ConstPtr;

}; // struct IKResponse_

typedef ::jetmax_control::IKResponse_<std::allocator<void> > IKResponse;

typedef boost::shared_ptr< ::jetmax_control::IKResponse > IKResponsePtr;
typedef boost::shared_ptr< ::jetmax_control::IKResponse const> IKResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jetmax_control::IKResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jetmax_control::IKResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jetmax_control::IKResponse_<ContainerAllocator1> & lhs, const ::jetmax_control::IKResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jetmax_control::IKResponse_<ContainerAllocator1> & lhs, const ::jetmax_control::IKResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jetmax_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jetmax_control::IKResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jetmax_control::IKResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetmax_control::IKResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetmax_control::IKResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetmax_control::IKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetmax_control::IKResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jetmax_control::IKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::jetmax_control::IKResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::jetmax_control::IKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jetmax_control/IKResponse";
  }

  static const char* value(const ::jetmax_control::IKResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jetmax_control::IKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::jetmax_control::IKResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jetmax_control::IKResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IKResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jetmax_control::IKResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jetmax_control::IKResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JETMAX_CONTROL_MESSAGE_IKRESPONSE_H
