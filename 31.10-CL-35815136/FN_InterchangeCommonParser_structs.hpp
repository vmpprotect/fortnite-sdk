#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InterchangeCommonParser
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct InterchangeCommonParser.InterchangeCurveKey
	// Size: 0x1C (0x1C - 0x0)
	struct FInterchangeCurveKey	
	{
	public:
		EInterchangeCurveInterpMode InterpMode; // 0x0(0x1)
		EInterchangeCurveTangentMode TangentMode; // 0x1(0x1)
		EInterchangeCurveTangentWeightMode TangentWeightMode; // 0x2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		float Time; // 0x4(0x4)
		float Value; // 0x8(0x4)
		float ArriveTangent; // 0xC(0x4)
		float ArriveTangentWeight; // 0x10(0x4)
		float LeaveTangent; // 0x14(0x4)
		float LeaveTangentWeight; // 0x18(0x4)
	};


	// Struct InterchangeCommonParser.InterchangeCurve
	// Size: 0x10 (0x10 - 0x0)
	struct FInterchangeCurve	
	{
	public:
		TArray<FInterchangeCurveKey> Keys; // 0x0(0x10)
	};


	// Struct InterchangeCommonParser.InterchangeStepCurve
	// Size: 0x88 (0x88 - 0x0)
	struct FInterchangeStepCurve	
	{
	public:
		TArray<float> KeyTimes; // 0x0(0x10)
		unsigned char UnknownData00_7[0x78]; // 0x10(0x78) UNKNOWN PROPERTY
	};

}
