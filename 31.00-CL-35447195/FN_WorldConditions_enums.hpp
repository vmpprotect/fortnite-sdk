#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WorldConditions
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/WorldConditions.EWorldConditionResultValue
	enum EWorldConditionResultValue
	{
		EWorldConditionResultValue__IsFalse = 0,
		EWorldConditionResultValue__IsTrue = 1,
		EWorldConditionResultValue__Invalid = 2,
	};


	// Enum /Script/WorldConditions.EWorldConditionOperator
	enum EWorldConditionOperator
	{
		EWorldConditionOperator__And = 0,
		EWorldConditionOperator__Or = 1,
		EWorldConditionOperator__Copy = 2,
	};


	// Enum /Script/WorldConditions.EWorldConditionContextDataType
	enum EWorldConditionContextDataType
	{
		EWorldConditionContextDataType__Dynamic = 0,
		EWorldConditionContextDataType__Persistent = 1,
	};

}
