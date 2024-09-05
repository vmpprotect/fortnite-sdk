#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WaveTable
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/WaveTable.EWaveTableBitDepth
	enum EWaveTableBitDepth
	{
		EWaveTableBitDepth__PCM = 0,
		EWaveTableBitDepth__IEEE_Float = 1,
		EWaveTableBitDepth__COUNT = 2,
	};


	// Enum /Script/WaveTable.EWaveTableResolution
	enum EWaveTableResolution
	{
		EWaveTableResolution__None = 0,
		EWaveTableResolution__Res = 3,
		EWaveTableResolution__Res = 4,
		EWaveTableResolution__Res = 5,
		EWaveTableResolution__Res = 6,
		EWaveTableResolution__Res = 7,
		EWaveTableResolution__Res = 8,
		EWaveTableResolution__Res = 9,
		EWaveTableResolution__Res = A,
		EWaveTableResolution__Res = B,
		EWaveTableResolution__Res = C,
		EWaveTableResolution__Res_Max = C,
		EWaveTableResolution__Maximum = D,
	};


	// Enum /Script/WaveTable.EWaveTableSamplingMode
	enum EWaveTableSamplingMode
	{
		EWaveTableSamplingMode__FixedSampleRate = 0,
		EWaveTableSamplingMode__FixedResolution = 1,
		EWaveTableSamplingMode__COUNT = 2,
	};


	// Enum /Script/WaveTable.EWaveTableCurve
	enum EWaveTableCurve
	{
		EWaveTableCurve__Linear = 0,
		EWaveTableCurve__Linear_Inv = 1,
		EWaveTableCurve__Exp = 2,
		EWaveTableCurve__Exp_Inverse = 3,
		EWaveTableCurve__Log = 4,
		EWaveTableCurve__Sin = 5,
		EWaveTableCurve__Sin_Full = 6,
		EWaveTableCurve__SCurve = 7,
		EWaveTableCurve__Shared = 8,
		EWaveTableCurve__Custom = 9,
		EWaveTableCurve__File = A,
		EWaveTableCurve__Count = B,
	};

}
