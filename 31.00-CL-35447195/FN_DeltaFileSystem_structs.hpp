#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DeltaFileSystem
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct DeltaFileSystem.DeltaAction
	// Size: 0x20 (0x20 - 0x0)
	struct FDeltaAction	
	{
	public:
		FGuid ActorGuid; // 0x0(0x10)
		FDateTime CommitTime; // 0x10(0x8)
		uint32_t DataHash; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct DeltaFileSystem.AddAction
	// Inherited from FDeltaAction
	// Size: 0x90 (0xB0 - 0x20)
	struct FAddAction : public FDeltaAction	
	{
	public:
		TWeakObjectPtr ActorClass; // 0x20(0x20)
		FString JsonStringObjectForPropertyData; // 0x40(0x10)
		FTransform Transform; // 0x50(0x60)
	};


	// Struct DeltaFileSystem.UpdateAction
	// Inherited from FDeltaAction
	// Size: 0x10 (0x30 - 0x20)
	struct FUpdateAction : public FDeltaAction	
	{
	public:
		FString JsonStringObjectForPropertyData; // 0x20(0x10)
	};


	// Struct DeltaFileSystem.DeleteAction
	// Inherited from FDeltaAction
	// Size: 0x70 (0x90 - 0x20)
	struct FDeleteAction : public FDeltaAction	
	{
	public:
		FString ActorName; // 0x20(0x10)
		FTransform Transform; // 0x30(0x60)
	};


	// Struct DeltaFileSystem.DeltaTrackingHandles
	// Size: 0x50 (0x50 - 0x0)
	struct FDeltaTrackingHandles	
	{
	public:
		unsigned char UnknownData01_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};

}
