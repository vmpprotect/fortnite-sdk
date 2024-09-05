#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarDiorama
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct DelMarDiorama.DelMarDriverSequenceDataList
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarDriverSequenceDataList	
	{
	public:
		TArray SequenceDataList; // 0x0(0x10)
		float Cooldown; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarDiorama.DelMarEvent_DioramaControllerAdded
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_DioramaControllerAdded	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarDiorama.DelMarEvent_DriverChannelOpened
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_DriverChannelOpened	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarDiorama.DelMarInteractionTagData
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarInteractionTagData	
	{
	public:
		FGameplayTag InstigatorReactionTag; // 0x0(0x4)
		FGameplayTag ReceiverReactionTag; // 0x4(0x4)
	};

}
