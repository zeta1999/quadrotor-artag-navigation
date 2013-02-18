// This code is based on the original gazebo_ros_imu plugin by Sachin Chitta and John Hsu:
/*
 *  Gazebo - Outdoor Multi-Robot Simulator
 *  Copyright (C) 2003
 *     Nate Koenig & Andrew Howard
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
/*
 * Desc: 3D position interface.
 * Author: Marco Cognetti
 * Date: 23 October 2012
 * SVN: $Id$
 */
//=================================================================================================

/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-fuerte-hector-gazebo-0.1.1/debian/ros-fuerte-hector-gazebo/opt/ros/fuerte/stacks/hector_gazebo/quadrotor_gazebo_plugins/srv/SetBias.srv */
#ifndef QUADROTOR_GAZEBO_PLUGINS_SERVICE_SETBIAS_H
#define QUADROTOR_GAZEBO_PLUGINS_SERVICE_SETBIAS_H
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
#include "geometry_msgs/Vector3.h"

namespace quadrotor_gazebo_plugins{
	template <class ContainerAllocator>
	
	struct SetBiasRequest_ {
		typedef SetBiasRequest_<ContainerAllocator> Type;
		
		SetBiasRequest_() : bias(){
		}
		
		SetBiasRequest_(const ContainerAllocator& _alloc): bias(_alloc){
		}
		
		typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _bias_type;
		         ::geometry_msgs::Vector3_<ContainerAllocator>  bias;
		
		typedef boost::shared_ptr< ::quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> > Ptr;
		typedef boost::shared_ptr< ::quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator>  const> ConstPtr;
		boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
	}; // struct SetBiasRequest
	
	typedef  ::quadrotor_gazebo_plugins::SetBiasRequest_<std::allocator<void> > SetBiasRequest;
	typedef boost::shared_ptr< ::quadrotor_gazebo_plugins::SetBiasRequest> SetBiasRequestPtr;
	typedef boost::shared_ptr< ::quadrotor_gazebo_plugins::SetBiasRequest const> SetBiasRequestConstPtr;
	
	
	template <class ContainerAllocator>
	struct SetBiasResponse_ {
		typedef SetBiasResponse_<ContainerAllocator> Type;
		
		SetBiasResponse_(){
		}
		
		SetBiasResponse_(const ContainerAllocator& _alloc){
		}
		
		
		typedef boost::shared_ptr< ::quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> > Ptr;
		typedef boost::shared_ptr< ::quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator>  const> ConstPtr;
		boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
	}; // struct SetBiasResponse
	
	typedef  ::quadrotor_gazebo_plugins::SetBiasResponse_<std::allocator<void> > SetBiasResponse;
	typedef boost::shared_ptr< ::quadrotor_gazebo_plugins::SetBiasResponse> SetBiasResponsePtr;
	typedef boost::shared_ptr< ::quadrotor_gazebo_plugins::SetBiasResponse const> SetBiasResponseConstPtr;

	struct SetBias{
		typedef SetBiasRequest Request;
		typedef SetBiasResponse Response;
		Request request;
		Response response;
		
		typedef Request RequestType;
		typedef Response ResponseType;
	}; // struct SetBias
} // namespace quadrotor_gazebo_plugins
	
namespace ros{
	namespace message_traits{
		template<class ContainerAllocator> struct IsMessage< ::quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> > : public TrueType {};
		template<class ContainerAllocator> struct IsMessage< ::quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator>  const> : public TrueType {};
		template<class ContainerAllocator>
		struct MD5Sum< ::quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> > {
			static const char* value() {
				return "af1f260075d9ba9bd73ca10c6a45df07";
			}
			
			static const char* value(const  ::quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> &) { return value(); } 
			static const uint64_t static_value1 = 0xaf1f260075d9ba9bULL;
			static const uint64_t static_value2 = 0xd73ca10c6a45df07ULL;
		};
		
		template<class ContainerAllocator>
		struct DataType< ::quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> > {
			static const char* value() {
				return "quadrotor_gazebo_plugins/SetBiasRequest";
			}
			
			static const char* value(const  ::quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> &) { return value(); } 
		};
		
		template<class ContainerAllocator>
		struct Definition< ::quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> > {
			static const char* value() {
				return "geometry_msgs/Vector3 bias\n\
				\n\
				================================================================================\n\
				MSG: geometry_msgs/Vector3\n\
				# This represents a vector in free space. \n\
				\n\
				float64 x\n\
				float64 y\n\
				float64 z\n\
				";
					}
			
			static const char* value(const  ::quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> &) { return value(); } 
		};
		
		template<class ContainerAllocator> struct IsFixedSize< ::quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> > : public TrueType {};
	} // namespace message_traits
} // namespace ros
	
	
namespace ros{
	namespace message_traits{
		template<class ContainerAllocator> struct IsMessage< ::quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> > : public TrueType {};
		template<class ContainerAllocator> struct IsMessage< ::quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator>  const> : public TrueType {};
		template<class ContainerAllocator>
		struct MD5Sum< ::quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> > {
			static const char* value(){
				return "d41d8cd98f00b204e9800998ecf8427e";
			}

			static const char* value(const  ::quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> &) { return value(); } 
			static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
			static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
		};

		template<class ContainerAllocator>
		struct DataType< ::quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> > {
			static const char* value(){
				return "quadrotor_gazebo_plugins/SetBiasResponse";
			}

			static const char* value(const  ::quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> &) { return value(); } 
		};

		template<class ContainerAllocator>
		struct Definition< ::quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> > {
			static const char* value(){
				return "\n\
				\n\
				";
			}
			
			static const char* value(const  ::quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> &) { return value(); } 
		};
		
		template<class ContainerAllocator> struct IsFixedSize< ::quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> > : public TrueType {};
	} // namespace message_traits
} // namespace ros

namespace ros{
	namespace serialization{
		template<class ContainerAllocator> struct Serializer< ::quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> >{
			template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m){
				stream.next(m.bias);
			}
			
			ROS_DECLARE_ALLINONE_SERIALIZER;
		}; // struct SetBiasRequest_
	} // namespace serialization
} // namespace ros


namespace ros{
	namespace serialization{
		
		template<class ContainerAllocator> struct Serializer< ::quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> >{
			template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m){}
			
			ROS_DECLARE_ALLINONE_SERIALIZER;
		}; // struct SetBiasResponse_
	} // namespace serialization
} // namespace ros

namespace ros{
	namespace service_traits{
		template<>
		struct MD5Sum<quadrotor_gazebo_plugins::SetBias> {
			static const char* value() {
				return "af1f260075d9ba9bd73ca10c6a45df07";
			}
			
			static const char* value(const quadrotor_gazebo_plugins::SetBias&) { return value(); } 
		};
		
		template<>
		struct DataType<quadrotor_gazebo_plugins::SetBias> {
			static const char* value() {
				return "quadrotor_gazebo_plugins/SetBias";
			}
			
			static const char* value(const quadrotor_gazebo_plugins::SetBias&) { return value(); } 
		};
		
		template<class ContainerAllocator>
		struct MD5Sum<quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> > {
			static const char* value() {
				return "af1f260075d9ba9bd73ca10c6a45df07";
			}
			
			static const char* value(const quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> &) { return value(); } 
		};
		
		template<class ContainerAllocator>
		struct DataType<quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> > {
			static const char* value(){
				return "quadrotor_gazebo_plugins/SetBias";
			}
			
			static const char* value(const quadrotor_gazebo_plugins::SetBiasRequest_<ContainerAllocator> &) { return value(); } 
		};
		
		template<class ContainerAllocator>
		struct MD5Sum<quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> > {
			static const char* value() {
				return "af1f260075d9ba9bd73ca10c6a45df07";
			}
			
			static const char* value(const quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> &) { return value(); } 
		};
		
		template<class ContainerAllocator>
		struct DataType<quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> > {
			static const char* value() {
				return "quadrotor_gazebo_plugins/SetBias";
			}
			
			static const char* value(const quadrotor_gazebo_plugins::SetBiasResponse_<ContainerAllocator> &) { return value(); } 
		};
	
	} // namespace service_traits
} // namespace ros

#endif // QUADROTOR_GAZEBO_PLUGINS_SERVICE_SETBIAS_H

