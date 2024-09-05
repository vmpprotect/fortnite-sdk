#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarDiorama
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DelMarDiorama.DelMarDriverSequenceDataList
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarDriverSequenceDataList	
	{
	public:
		TArray<UDelMarDriverSequenceData*> SequenceDataList; // 0x0(0x10)
		float Cooldown; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarDiorama.DelMarEvent_DioramaControllerAdded
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_DioramaControllerAdded	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarDiorama.DelMarEvent_DriverChannelOpened
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_DriverChannelOpened	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
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
