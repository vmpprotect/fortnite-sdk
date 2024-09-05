#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DeltaFileSystem
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct DeltaFileSystem.AddAction
	// Inherited from FDeltaAction
	// Size: 0x90 (0xB0 - 0x20)
	struct FAddAction : public FDeltaAction	
	{
	public:
		TWeakObjectPtr<UClass*> ActorClass; // 0x20(0x20)
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
		unsigned char UnknownData00_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};

}
