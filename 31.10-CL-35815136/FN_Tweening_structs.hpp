#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Tweening
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct Tweening.TweenOptionalFloat
	// Size: 0x8 (0x8 - 0x0)
	struct FTweenOptionalFloat	
	{
	public:
		float Value; // 0x0(0x4)
		bool bUseSpecificValue; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Tweening.TweenOptionalVector2D
	// Size: 0x18 (0x18 - 0x0)
	struct FTweenOptionalVector2D	
	{
	public:
		FVector2D Value; // 0x0(0x10)
		bool bUseSpecificValue; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct Tweening.TweenOptionalVector
	// Size: 0x20 (0x20 - 0x0)
	struct FTweenOptionalVector	
	{
	public:
		FVector Value; // 0x0(0x18)
		bool bUseSpecificValue; // 0x18(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct Tweening.TweenOptionalVector4
	// Size: 0x30 (0x30 - 0x0)
	struct FTweenOptionalVector4	
	{
	public:
		FVector4 Value; // 0x0(0x20)
		bool bUseSpecificValue; // 0x20(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x21(0xF) UNKNOWN PROPERTY
	};


	// Struct Tweening.TweenOptionalLinearColor
	// Size: 0x14 (0x14 - 0x0)
	struct FTweenOptionalLinearColor	
	{
	public:
		FLinearColor Value; // 0x0(0x10)
		bool bUseSpecificValue; // 0x10(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct Tweening.TweenOptionalRotator
	// Size: 0x20 (0x20 - 0x0)
	struct FTweenOptionalRotator	
	{
	public:
		FRotator Value; // 0x0(0x18)
		bool bUseSpecificValue; // 0x18(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct Tweening.TweenDelayOptions
	// Size: 0xC (0xC - 0x0)
	struct FTweenDelayOptions	
	{
	public:
		float DelayAtBeginning; // 0x0(0x4)
		float DelayAtEnd; // 0x4(0x4)
		ETweenInitializationPoint InitializationPoint; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct Tweening.TweenLoopOptions
	// Size: 0x8 (0x8 - 0x0)
	struct FTweenLoopOptions	
	{
	public:
		ETweenLoopType LoopType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t LoopCount; // 0x4(0x4)
	};


	// Struct Tweening.TweenSequenceEntry
	// Size: 0x20 (0x20 - 0x0)
	struct FTweenSequenceEntry	
	{
	public:
		UTweenSequence* EntrySequence; // 0x0(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x8(0x18) UNKNOWN PROPERTY
	};

}
