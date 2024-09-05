#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCoreCosmeticsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SparksCoreCosmeticsRuntime.SparksVariantChoice
	// Size: 0x18 (0x18 - 0x0)
	struct FSparksVariantChoice	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct SparksCoreCosmeticsRuntime.SparksVariantChoices
	// Size: 0x50 (0x50 - 0x0)
	struct FSparksVariantChoices	
	{
	public:
		unsigned char UnknownData01_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct SparksCoreCosmeticsRuntime.NameList
	// Size: 0x10 (0x10 - 0x0)
	struct FNameList	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct SparksCoreCosmeticsRuntime.SparksCosmeticLoadoutData
	// Size: 0xF0 (0xF0 - 0x0)
	struct FSparksCosmeticLoadoutData	
	{
	public:
		unsigned char UnknownData01_7[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
		FSparksVariantChoices AuraChoices; // 0x40(0x50)
		TMap InstrumentVariantChoices; // 0x90(0x50)
		TArray JamSongChoices; // 0xE0(0x10)
	};

}
