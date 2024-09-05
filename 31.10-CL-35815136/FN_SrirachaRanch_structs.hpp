#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SrirachaRanch
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SrirachaRanch.AthenaRadioStation
	// Size: 0x50 (0x50 - 0x0)
	struct FAthenaRadioStation	
	{
	public:
		FText Title; // 0x0(0x10)
		FString StationImage; // 0x10(0x10)
		FString ResourceID; // 0x20(0x10)
		TArray<FString> GameplayTagDenylist; // 0x30(0x10)
		TArray<FString> GameplayTagAllowlist; // 0x40(0x10)
	};


	// Struct SrirachaRanch.SrirachaPerClassSpecialSeats
	// Size: 0x10 (0x10 - 0x0)
	struct FSrirachaPerClassSpecialSeats	
	{
	public:
		TArray<int32_t> OutsideSeatIndices; // 0x0(0x10)
	};


	// Struct SrirachaRanch.StreamingRadioSourceData
	// Size: 0x60 (0x60 - 0x0)
	struct FStreamingRadioSourceData	
	{
	public:
		EStreamingRadioSourceState State; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t PlayingIndex; // 0x4(0x4)
		float FadeoutSeconds; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FAthenaRadioStation SourceOverride; // 0x10(0x50)
	};


	// Struct SrirachaRanch.SrirachaInputMappingData
	// Size: 0x18 (0x18 - 0x0)
	struct FSrirachaInputMappingData	
	{
	public:
		FName MainActionName; // 0x0(0x4)
		FName GamepadActionName; // 0x4(0x4)
		FText DisplayName; // 0x8(0x10)
	};

}
