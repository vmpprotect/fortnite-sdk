#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FabricMetasoundDataTypes
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FabricMetasoundDataTypes.FabricMetasoundDrumPlayerSampleData
	// Size: 0x18 (0x18 - 0x0)
	struct FFabricMetasoundDrumPlayerSampleData	
	{
	public:
		FText SampleLabel; // 0x0(0x10)
		USoundWave* WaveAsset; // 0x10(0x8)
	};


	// Struct FabricMetasoundDataTypes.FabricUserOption
	// Size: 0x38 (0x38 - 0x0)
	struct FFabricUserOption	
	{
	public:
		EFabricUserOptionType UserOptionType; // 0x0(0x1)
		EFabricUserOptionConversionType ConversionType; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float Min; // 0x4(0x4)
		float Max; // 0x8(0x4)
		float ValueCurve; // 0xC(0x4)
		bool bInverted; // 0x10(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		TArray<float> NumericLookupTable; // 0x18(0x10)
		TArray<FString> StringLookupTable; // 0x28(0x10)
	};

}
