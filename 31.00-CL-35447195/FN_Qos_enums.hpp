#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Qos
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/Qos.EQosResponseType
	enum EQosResponseType
	{
		EQosResponseType__NoResponse = 0,
		EQosResponseType__Success = 1,
		EQosResponseType__Failure = 2,
	};


	// Enum /Script/Qos.EQosDatacenterResult
	enum EQosDatacenterResult
	{
		EQosDatacenterResult__Invalid = 0,
		EQosDatacenterResult__Success = 1,
		EQosDatacenterResult__Incomplete = 2,
	};


	// Enum /Script/Qos.EQosCompletionResult
	enum EQosCompletionResult
	{
		EQosCompletionResult__Invalid = 0,
		EQosCompletionResult__Success = 1,
		EQosCompletionResult__Failure = 2,
		EQosCompletionResult__Canceled = 3,
	};

}
