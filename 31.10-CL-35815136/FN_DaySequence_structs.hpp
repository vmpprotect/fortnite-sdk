#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DaySequence
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DaySequence.DaySequenceConditionSet
	// Size: 0x50 (0x50 - 0x0)
	struct FDaySequenceConditionSet	
	{
	public:
		TMap<UClass*, bool> Conditions; // 0x0(0x50)
	};


	// Struct DaySequence.DaySequenceBindingReference
	// Size: 0x30 (0x30 - 0x0)
	struct FDaySequenceBindingReference	
	{
	public:
		TWeakObjectPtr<UObject*> ExternalObjectPath; // 0x0(0x20)
		FString ObjectPath; // 0x20(0x10)
	};


	// Struct DaySequence.DaySequenceBindingReferenceArray
	// Size: 0x10 (0x10 - 0x0)
	struct FDaySequenceBindingReferenceArray	
	{
	public:
		TArray<FDaySequenceBindingReference> References; // 0x0(0x10)
	};


	// Struct DaySequence.DaySequenceBindingReferences
	// Size: 0xA0 (0xA0 - 0x0)
	struct FDaySequenceBindingReferences	
	{
	public:
		TMap<FGuid, FDaySequenceBindingReferenceArray> BindingIdToReferences; // 0x0(0x50)
		TSet<FGuid> AnimSequenceInstances; // 0x50(0x50)
	};


	// Struct DaySequence.DaySequenceCollectionEntry
	// Size: 0x60 (0x60 - 0x0)
	struct FDaySequenceCollectionEntry	
	{
	public:
		UDaySequence* Sequence; // 0x0(0x8)
		int32_t BiasOffset; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FDaySequenceConditionSet Conditions; // 0x10(0x50)
	};

}
