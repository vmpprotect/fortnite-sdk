#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Water
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/Water.EBuoyancyEvent
	enum EBuoyancyEvent
	{
		EBuoyancyEvent__EnteredWaterBody = 0,
		EBuoyancyEvent__ExitedWaterBody = 1,
	};


	// Enum /Script/Water.EWaveSpectrumType
	enum EWaveSpectrumType
	{
		EWaveSpectrumType__Phillips = 0,
		EWaveSpectrumType__PiersonMoskowitz = 1,
		EWaveSpectrumType__JONSWAP = 2,
	};


	// Enum /Script/Water.EWaterExclusionMode
	enum EWaterExclusionMode
	{
		EWaterExclusionMode__AddWaterBodiesListToExclusion = 0,
		EWaterExclusionMode__RemoveWaterBodiesListFromExclusion = 1,
	};


	// Enum /Script/Water.EWaterBrushBlendType
	enum EWaterBrushBlendType
	{
		EWaterBrushBlendType__AlphaBlend = 0,
		EWaterBrushBlendType__Min = 1,
		EWaterBrushBlendType__Max = 2,
		EWaterBrushBlendType__Additive = 3,
	};


	// Enum /Script/Water.EWaterBodyType
	enum EWaterBodyType
	{
		EWaterBodyType__River = 0,
		EWaterBodyType__Lake = 1,
		EWaterBodyType__Ocean = 2,
		EWaterBodyType__Transition = 3,
		EWaterBodyType__Num = 4,
	};


	// Enum /Script/Water.EWaterBrushFalloffMode
	enum EWaterBrushFalloffMode
	{
		EWaterBrushFalloffMode__Angle = 0,
		EWaterBrushFalloffMode__Width = 1,
	};

}
