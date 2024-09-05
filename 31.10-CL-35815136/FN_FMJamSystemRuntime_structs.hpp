#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMJamSystemRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FMJamSystemRuntime.JamVerbMessage_Jam
	// Inherited from FVerbMessage
	// Size: 0x10 (0x88 - 0x78)
	struct FJamVerbMessage_Jam : public FVerbMessage	
	{
	public:
		bool bIsFullBand; // 0x78(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x79(0x3) UNKNOWN PROPERTY
		int32_t BandSize; // 0x7C(0x4)
		EFMJamLoopType LoopType; // 0x80(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
	};


	// Struct FMJamSystemRuntime.JamVerbFilter_Jam
	// Inherited from FObjectiveFilter
	// Size: 0x18 (0xB8 - 0xA0)
	struct FJamVerbFilter_Jam : public FObjectiveFilter	
	{
	public:
		bool bRequireFullBand : 1; // 0xA0:0(0x1)
		bool bUsebandSize : 1; // 0xA0:1(0x1)
		unsigned char UnknownData00_5[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		FInt32Range BandSize; // 0xA4(0x10)
		bool bUseLoopType : 1; // 0xB4:0(0x1)
		EFMJamLoopType LoopType; // 0xB5(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xB6(0x2) UNKNOWN PROPERTY
	};

}
