#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LimeNative
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct LimeNative.LimeMoodStateData
	// Size: 0x4 (0x4 - 0x0)
	struct FLimeMoodStateData	
	{
	public:
		FGameplayTag MoodTag; // 0x0(0x4)
	};


	// Struct LimeNative.LimeAnalyticsContext
	// Size: 0x78 (0x78 - 0x0)
	struct FLimeAnalyticsContext	
	{
	public:
		FString AnalyticsKeyString; // 0x0(0x10)
		FString AnalyticsValueString; // 0x10(0x10)
		TWeakObjectPtr ActorClass; // 0x20(0x20)
		TWeakObjectPtr ComponentClass; // 0x40(0x20)
		TArray VariableNames; // 0x60(0x10)
		char UefnAnalyticsEvents; // 0x70(0x1)
		char GameplayAnalyticsEvents; // 0x71(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x72(0x6) UNKNOWN PROPERTY
	};


	// Struct LimeNative.LimePawnComponentOverrideProperty
	// Size: 0x10 (0x10 - 0x0)
	struct FLimePawnComponentOverrideProperty	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UAnimMontage Montage; // 0x8(0x8)
	};


	// Struct LimeNative.LimePawnComponentOverride
	// Size: 0x18 (0x18 - 0x0)
	struct FLimePawnComponentOverride	
	{
	public:
		FName ObjClass; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray Properties; // 0x8(0x10)
	};


	// Struct LimeNative.LimeEmotionalStateData
	// Size: 0x10 (0x10 - 0x0)
	struct FLimeEmotionalStateData	
	{
	public:
		ELimePawnEmotionalState EmotionalState; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float EmotionPercent; // 0x4(0x4)
		float EmotionSetRate; // 0x8(0x4)
		int8_t ForceRepCounter; // 0xC(0x1)
		unsigned char UnknownData03_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct LimeNative.LimeEvent_PawnEmotion
	// Size: 0x10 (0x10 - 0x0)
	struct FLimeEvent_PawnEmotion	
	{
	public:
		AFortPlayerPawnAthena Pawn; // 0x0(0x8)
		ELimePawnEmotionalState CurrentEmotionalState; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float EmotionPercent; // 0xC(0x4)
	};


	// Struct LimeNative.LimePawnEmotionalStateMappingFromAwesomeLevel
	// Size: 0xC (0xC - 0x0)
	struct FLimePawnEmotionalStateMappingFromAwesomeLevel	
	{
	public:
		ELimePawnEmotionalState EmotionalState; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t NumericalTestValue; // 0x4(0x4)
		ELimePawnEmotionalStateMappingTest NumericalTestMode; // 0x8(0x4)
	};

}
