#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InterchangeCommonParser
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
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
		TArray Keys; // 0x0(0x10)
	};


	// Struct InterchangeCommonParser.InterchangeStepCurve
	// Size: 0x88 (0x88 - 0x0)
	struct FInterchangeStepCurve	
	{
	public:
		TArray KeyTimes; // 0x0(0x10)
		unsigned char UnknownData01_7[0x78]; // 0x10(0x78) UNKNOWN PROPERTY
	};

}
