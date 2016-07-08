//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: MSFPPacket.h
//  Source: MSFPPacket.idl
//  Generated: Thu Jul  7 23:27:08 2016
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _MSFPPACKET_H_
#define _MSFPPACKET_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"


namespace micros_swarm_framework
{
   struct MSFPPacket;

   struct MSFPPacket
   {
         DDS::Long packet_source;
         DDS::UShort packet_version;
         DDS::UShort packet_type;
         DDS::String_mgr packet_data;
         DDS::LongLong package_check_sum;
   };

   typedef DDS_DCPSStruct_var < MSFPPacket> MSFPPacket_var;
   typedef DDS_DCPSStruct_out < MSFPPacket> MSFPPacket_out;
}




#endif 
