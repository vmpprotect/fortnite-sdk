#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DaySequence
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct DaySequence.DaySequenceConditionSet
	// Size: 0x50 (0x50 - 0x0)
	struct FDaySequenceConditionSet	
	{
	public:
		TMap Conditions; // 0x0(0x50)
	};


	// Struct DaySequence.DaySequenceBindingReference
	// Size: 0x30 (0x30 - 0x0)
	struct FDaySequenceBindingReference	
	{
	public:
		TWeakObjectPtr ExternalObjectPath; // 0x0(0x20)
		FString ObjectPath; // 0x20(0x10)
	};


	// Struct DaySequence.DaySequenceBindingReferenceArray
	// Size: 0x10 (0x10 - 0x0)
	struct FDaySequenceBindingReferenceArray	
	{
	public:
		TArray References; // 0x0(0x10)
	};


	// Struct DaySequence.DaySequenceBindingReferences
	// Size: 0xA0 (0xA0 - 0x0)
	struct FDaySequenceBindingReferences	
	{
	public:
		TMap BindingIdToReferences; // 0x0(0x50)
		TSet AnimSequenceInstances; // 0x50(0x50)
	};


	// Struct DaySequence.DaySequenceCollectionEntry
	// Size: 0x60 (0x60 - 0x0)
	struct FDaySequenceCollectionEntry	
	{
	public:
		UDaySequence Sequence; // 0x0(0x8)
		int32_t BiasOffset; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FDaySequenceConditionSet Conditions; // 0x10(0x50)
	};

}
