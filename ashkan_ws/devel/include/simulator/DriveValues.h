// Generated by gencpp from file simulator/DriveValues.msg
// DO NOT EDIT!


#ifndef SIMULATOR_MESSAGE_DRIVEVALUES_H
#define SIMULATOR_MESSAGE_DRIVEVALUES_H


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
struct DriveValues_
{
  typedef DriveValues_<ContainerAllocator> Type;

  DriveValues_()
    : pwm_drive(0)
    , pwm_angle(0)  {
    }
  DriveValues_(const ContainerAllocator& _alloc)
    : pwm_drive(0)
    , pwm_angle(0)  {
  (void)_alloc;
    }



   typedef int16_t _pwm_drive_type;
  _pwm_drive_type pwm_drive;

   typedef int16_t _pwm_angle_type;
  _pwm_angle_type pwm_angle;





  typedef boost::shared_ptr< ::simulator::DriveValues_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simulator::DriveValues_<ContainerAllocator> const> ConstPtr;

}; // struct DriveValues_

typedef ::simulator::DriveValues_<std::allocator<void> > DriveValues;

typedef boost::shared_ptr< ::simulator::DriveValues > DriveValuesPtr;
typedef boost::shared_ptr< ::simulator::DriveValues const> DriveValuesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simulator::DriveValues_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simulator::DriveValues_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::simulator::DriveValues_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simulator::DriveValues_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulator::DriveValues_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulator::DriveValues_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulator::DriveValues_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulator::DriveValues_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simulator::DriveValues_<ContainerAllocator> >
{
  static const char* value()
  {
    return "180768e2d6cce7b3f71749adb84f7b29";
  }

  static const char* value(const ::simulator::DriveValues_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x180768e2d6cce7b3ULL;
  static const uint64_t static_value2 = 0xf71749adb84f7b29ULL;
};

template<class ContainerAllocator>
struct DataType< ::simulator::DriveValues_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simulator/DriveValues";
  }

  static const char* value(const ::simulator::DriveValues_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simulator::DriveValues_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# PWM duty cycle (0-100%) corresponds to (0-65535) interval\n"
"int16 pwm_drive\n"
"int16 pwm_angle\n"
;
  }

  static const char* value(const ::simulator::DriveValues_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simulator::DriveValues_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pwm_drive);
      stream.next(m.pwm_angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DriveValues_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simulator::DriveValues_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simulator::DriveValues_<ContainerAllocator>& v)
  {
    s << indent << "pwm_drive: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pwm_drive);
    s << indent << "pwm_angle: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pwm_angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMULATOR_MESSAGE_DRIVEVALUES_H
