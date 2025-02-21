// Generated by gencpp from file simulator/CarControlData.msg
// DO NOT EDIT!


#ifndef SIMULATOR_MESSAGE_CARCONTROLDATA_H
#define SIMULATOR_MESSAGE_CARCONTROLDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace simulator
{
template <class ContainerAllocator>
struct CarControlData_
{
  typedef CarControlData_<ContainerAllocator> Type;

  CarControlData_()
    : cv_speed(0.0)
    , cv_turn_zero(0.0)
    , cv_turn_speed(0.0)
    , vp_speed(0)
    , vp_turn_zero(0)
    , vp_turn_speed(0)
    , vesc_speed(0.0)  {
    }
  CarControlData_(const ContainerAllocator& _alloc)
    : cv_speed(0.0)
    , cv_turn_zero(0.0)
    , cv_turn_speed(0.0)
    , vp_speed(0)
    , vp_turn_zero(0)
    , vp_turn_speed(0)
    , vesc_speed(0.0)  {
  (void)_alloc;
    }



   typedef double _cv_speed_type;
  _cv_speed_type cv_speed;

   typedef double _cv_turn_zero_type;
  _cv_turn_zero_type cv_turn_zero;

   typedef double _cv_turn_speed_type;
  _cv_turn_speed_type cv_turn_speed;

   typedef int16_t _vp_speed_type;
  _vp_speed_type vp_speed;

   typedef int16_t _vp_turn_zero_type;
  _vp_turn_zero_type vp_turn_zero;

   typedef int16_t _vp_turn_speed_type;
  _vp_turn_speed_type vp_turn_speed;

   typedef double _vesc_speed_type;
  _vesc_speed_type vesc_speed;





  typedef boost::shared_ptr< ::simulator::CarControlData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simulator::CarControlData_<ContainerAllocator> const> ConstPtr;

}; // struct CarControlData_

typedef ::simulator::CarControlData_<std::allocator<void> > CarControlData;

typedef boost::shared_ptr< ::simulator::CarControlData > CarControlDataPtr;
typedef boost::shared_ptr< ::simulator::CarControlData const> CarControlDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simulator::CarControlData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simulator::CarControlData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace simulator

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'simulator': ['/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/src/f1tenth/virtual/simulator/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::simulator::CarControlData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simulator::CarControlData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulator::CarControlData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulator::CarControlData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulator::CarControlData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulator::CarControlData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simulator::CarControlData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "324d1d835c12674bf092534c6d2533e0";
  }

  static const char* value(const ::simulator::CarControlData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x324d1d835c12674bULL;
  static const uint64_t static_value2 = 0xf092534c6d2533e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::simulator::CarControlData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simulator/CarControlData";
  }

  static const char* value(const ::simulator::CarControlData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simulator::CarControlData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Constants from controlling the car via node\n"
"\n"
"# cmd_vel\n"
"float64 cv_speed\n"
"\n"
"float64 cv_turn_zero\n"
"float64 cv_turn_speed\n"
"\n"
"# drive_pwm\n"
"int16 vp_speed\n"
"\n"
"int16 vp_turn_zero\n"
"int16 vp_turn_speed\n"
"\n"
"# VESC\n"
"float64 vesc_speed\n"
;
  }

  static const char* value(const ::simulator::CarControlData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simulator::CarControlData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cv_speed);
      stream.next(m.cv_turn_zero);
      stream.next(m.cv_turn_speed);
      stream.next(m.vp_speed);
      stream.next(m.vp_turn_zero);
      stream.next(m.vp_turn_speed);
      stream.next(m.vesc_speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CarControlData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simulator::CarControlData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simulator::CarControlData_<ContainerAllocator>& v)
  {
    s << indent << "cv_speed: ";
    Printer<double>::stream(s, indent + "  ", v.cv_speed);
    s << indent << "cv_turn_zero: ";
    Printer<double>::stream(s, indent + "  ", v.cv_turn_zero);
    s << indent << "cv_turn_speed: ";
    Printer<double>::stream(s, indent + "  ", v.cv_turn_speed);
    s << indent << "vp_speed: ";
    Printer<int16_t>::stream(s, indent + "  ", v.vp_speed);
    s << indent << "vp_turn_zero: ";
    Printer<int16_t>::stream(s, indent + "  ", v.vp_turn_zero);
    s << indent << "vp_turn_speed: ";
    Printer<int16_t>::stream(s, indent + "  ", v.vp_turn_speed);
    s << indent << "vesc_speed: ";
    Printer<double>::stream(s, indent + "  ", v.vesc_speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMULATOR_MESSAGE_CARCONTROLDATA_H
