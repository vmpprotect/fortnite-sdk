#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NNEDenoiser
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct NNEDenoiser.TilingConfig
	// Size: 0x10 (0x10 - 0x0)
	struct FTilingConfig	
	{
	public:
		int32_t Alignment; // 0x0(0x4)
		int32_t Overlap; // 0x4(0x4)
		int32_t MaxSize; // 0x8(0x4)
		int32_t MinSize; // 0xC(0x4)
	};


	// Struct NNEDenoiser.NNEDenoiserModelIOMappingData
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FNNEDenoiserModelIOMappingData : public FTableRowBase	
	{
	public:
		int32_t TensorIndex; // 0x8(0x4)
		int32_t TensorChannel; // 0xC(0x4)
		TEnumAsByte<EResourceName> Resource; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		int32_t ResourceChannel; // 0x14(0x4)
		int32_t FrameIndex; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};

}
