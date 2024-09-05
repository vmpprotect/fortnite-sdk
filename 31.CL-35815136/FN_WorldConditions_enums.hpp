#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WorldConditions
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
