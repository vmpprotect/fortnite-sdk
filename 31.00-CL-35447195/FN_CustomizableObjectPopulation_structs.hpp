#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CustomizableObjectPopulation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct CustomizableObjectPopulation.CustomizableObjectPopulationCharacteristic
	// Size: 0x20 (0x20 - 0x0)
	struct FCustomizableObjectPopulationCharacteristic	
	{
	public:
		FString ParameterName; // 0x0(0x10)
		TArray Constraints; // 0x10(0x10)
	};


	// Struct CustomizableObjectPopulation.CustomizableObjectPopulationConstraint
	// Size: 0x70 (0x70 - 0x0)
	struct FCustomizableObjectPopulationConstraint	
	{
	public:
		EPopulationConstraintType Type; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t ConstraintWeight; // 0x4(0x4)
		int32_t TrueWeight; // 0x8(0x4)
		int32_t FalseWeight; // 0xC(0x4)
		FString DiscreteValue; // 0x10(0x10)
		FLinearColor DiscreteColor; // 0x20(0x10)
		TArray AllowList; // 0x30(0x10)
		TArray Blocklist; // 0x40(0x10)
		TArray Ranges; // 0x50(0x10)
		UCurveBase Curve; // 0x60(0x8)
		ECurveColor CurveColor; // 0x68(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
	};


	// Struct CustomizableObjectPopulation.ConstraintRanges
	// Size: 0xC (0xC - 0x0)
	struct FConstraintRanges	
	{
	public:
		float MinimumValue; // 0x0(0x4)
		float MaximumValue; // 0x4(0x4)
		int32_t RangeWeight; // 0x8(0x4)
	};


	// Struct CustomizableObjectPopulation.ClassWeightPair
	// Size: 0x10 (0x10 - 0x0)
	struct FClassWeightPair	
	{
	public:
		UCustomizableObjectPopulationClass Class; // 0x0(0x8)
		int32_t ClassWeight; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct CustomizableObjectPopulation.PopulationClassParameterOptions
	// Size: 0x10 (0x10 - 0x0)
	struct FPopulationClassParameterOptions	
	{
	public:
		TArray Tags; // 0x0(0x10)
	};


	// Struct CustomizableObjectPopulation.PopulationClassParameter
	// Size: 0x60 (0x60 - 0x0)
	struct FPopulationClassParameter	
	{
	public:
		TArray Tags; // 0x0(0x10)
		TMap ParameterOptions; // 0x10(0x50)
	};

}
