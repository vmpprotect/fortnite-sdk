#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ACLPlugin
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/ACLPlugin.ACLRotationFormat
	enum ACLRotationFormat
	{
		ACLRF_Quat = 0,
		ACLRF_QuatDropW = 1,
		ACLRF_QuatDropW_Variable = 2,
	};


	// Enum /Script/ACLPlugin.ACLVectorFormat
	enum ACLVectorFormat
	{
		ACLVF_Vector3 = 0,
		ACLVF_Vector3_Variable = 1,
	};


	// Enum /Script/ACLPlugin.ACLCompressionLevel
	enum ACLCompressionLevel
	{
		ACLCL_Lowest = 0,
		ACLCL_Low = 1,
		ACLCL_Medium = 2,
		ACLCL_High = 3,
		ACLCL_Highest = 4,
		ACLCL_Automatic = 5,
	};


	// Enum /Script/ACLPlugin.ACLVisualFidelity
	enum ACLVisualFidelity
	{
		ACLVisualFidelity__Highest = 0,
		ACLVisualFidelity__Medium = 1,
		ACLVisualFidelity__Lowest = 2,
	};


	// Enum /Script/ACLPlugin.ACLVisualFidelityChangeResult
	enum ACLVisualFidelityChangeResult
	{
		ACLVisualFidelityChangeResult__Dispatched = 0,
		ACLVisualFidelityChangeResult__Completed = 1,
		ACLVisualFidelityChangeResult__Failed = 2,
	};

}
