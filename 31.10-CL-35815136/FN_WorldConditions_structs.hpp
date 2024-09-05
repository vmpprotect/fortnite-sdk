#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WorldConditions
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct WorldConditions.WorldConditionQueryDefinition
	// Size: 0x18 (0x18 - 0x0)
	struct FWorldConditionQueryDefinition	
	{
	public:
		unsigned char UnknownData00_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		UClass* SchemaClass; // 0x10(0x8)
	};


	// Struct WorldConditions.WorldConditionBase
	// Size: 0x10 (0x10 - 0x0)
	struct FWorldConditionBase	
	{
	public:
		unsigned char UnknownData00_7[0xB]; // 0x0(0xB) UNKNOWN PROPERTY
		bool bInvert : 1; // 0xB:2(0x1)
		EWorldConditionOperator Operator; // 0xC(0x1)
		char NextExpressionDepth; // 0xD(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct WorldConditions.WorldConditionCommonBase
	// Inherited from FWorldConditionBase
	// Size: 0x0 (0x10 - 0x10)
	struct FWorldConditionCommonBase : public FWorldConditionBase	
	{
	public:
	};


	// Struct WorldConditions.WorldConditionCommonActorBase
	// Inherited from FWorldConditionBase
	// Size: 0x0 (0x10 - 0x10)
	struct FWorldConditionCommonActorBase : public FWorldConditionBase	
	{
	public:
	};


	// Struct WorldConditions.WorldConditionEditable
	// Size: 0x1 (0x1 - 0x0)
	struct FWorldConditionEditable	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct WorldConditions.WorldConditionQuerySharedDefinition
	// Size: 0x28 (0x28 - 0x0)
	struct FWorldConditionQuerySharedDefinition	
	{
	public:
		FInstancedStructContainer Conditions; // 0x0(0x10)
		UClass* SchemaClass; // 0x10(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x18(0x10) UNKNOWN PROPERTY
	};


	// Struct WorldConditions.WorldConditionItem
	// Size: 0x3 (0x3 - 0x0)
	struct FWorldConditionItem	
	{
	public:
		unsigned char UnknownData00_2[0x3]; // 0x0(0x3) UNKNOWN PROPERTY
	};


	// Struct WorldConditions.WorldConditionStateObject
	// Size: 0x8 (0x8 - 0x0)
	struct FWorldConditionStateObject	
	{
	public:
		UObject* Object; // 0x0(0x8)
	};


	// Struct WorldConditions.WorldConditionQueryState
	// Size: 0x30 (0x30 - 0x0)
	struct FWorldConditionQueryState	
	{
	public:
		unsigned char UnknownData00_7[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
		UObject* Owner; // 0x28(0x8)
	};


	// Struct WorldConditions.WorldConditionQuery
	// Size: 0x48 (0x48 - 0x0)
	struct FWorldConditionQuery	
	{
	public:
		FWorldConditionQueryDefinition QueryDefinition; // 0x0(0x18)
		FWorldConditionQueryState QueryState; // 0x18(0x30)
	};


	// Struct WorldConditions.WorldConditionResult
	// Size: 0x2 (0x2 - 0x0)
	struct FWorldConditionResult	
	{
	public:
		EWorldConditionResultValue Value; // 0x0(0x1)
		bool bCanBeCached; // 0x1(0x1)
	};


	// Struct WorldConditions.WorldConditionContextDataDesc
	// Size: 0x10 (0x10 - 0x0)
	struct FWorldConditionContextDataDesc	
	{
	public:
		UStruct* Struct; // 0x0(0x8)
		FName Name; // 0x8(0x4)
		EWorldConditionContextDataType Type; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct WorldConditions.WorldConditionContextDataRef
	// Size: 0x8 (0x8 - 0x0)
	struct FWorldConditionContextDataRef	
	{
	public:
		FName Name; // 0x0(0x4)
		char Index; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};

}
