#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WaveTable
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct WaveTable.WaveTableData
	// Size: 0x20 (0x20 - 0x0)
	struct FWaveTableData	
	{
	public:
		EWaveTableBitDepth BitDepth; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<char> Data; // 0x8(0x10)
		float FinalValue; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct WaveTable.WaveTableBankEntry
	// Size: 0xB8 (0xB8 - 0x0)
	struct FWaveTableBankEntry	
	{
	public:
		FWaveTableTransform Transform; // 0x0(0xB8)
	};


	// Struct WaveTable.WaveTableTransform
	// Size: 0xB8 (0xB8 - 0x0)
	struct FWaveTableTransform	
	{
	public:
		EWaveTableCurve Curve; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Scalar; // 0x4(0x4)
		FRichCurve CurveCustom; // 0x8(0x80)
		UCurveFloat* CurveShared; // 0x88(0x8)
		FWaveTableData TableData; // 0x90(0x20)
		float duration; // 0xB0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
	};


	// Struct WaveTable.WaveTableSettings
	// Size: 0x58 (0x58 - 0x0)
	struct FWaveTableSettings	
	{
	public:
		FFilePath FilePath; // 0x0(0x10)
		int32_t ChannelIndex; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FWaveTableData SourceData; // 0x18(0x20)
		int32_t SourceSampleRate; // 0x38(0x4)
		float Phase; // 0x3C(0x4)
		float Top; // 0x40(0x4)
		float Tail; // 0x44(0x4)
		float FadeIn; // 0x48(0x4)
		float FadeOut; // 0x4C(0x4)
		bool bNormalize; // 0x50(0x1)
		bool bRemoveOffset; // 0x51(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x52(0x6) UNKNOWN PROPERTY
	};

}
