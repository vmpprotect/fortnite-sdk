#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotherGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MotherGameplayRuntime.GravyGoblinActivatable_Event
	// Size: 0x1 (0x1 - 0x0)
	struct FGravyGoblinActivatable_Event	
	{
	public:
		bool bIsActivatable; // 0x0(0x1)
	};


	// Struct MotherGameplayRuntime.GravyGoblinRotatable_Event
	// Size: 0x1 (0x1 - 0x0)
	struct FGravyGoblinRotatable_Event	
	{
	public:
		bool bIsRotatable; // 0x0(0x1)
	};


	// Struct MotherGameplayRuntime.GoopAudioMapRangeClamped
	// Size: 0x20 (0x20 - 0x0)
	struct FGoopAudioMapRangeClamped	
	{
	public:
		FVector2D InRange; // 0x0(0x10)
		FVector2D OutRange; // 0x10(0x10)
	};


	// Struct MotherGameplayRuntime.PaddleGingerPropData
	// Size: 0x28 (0x28 - 0x0)
	struct FPaddleGingerPropData	
	{
	public:
		FText CategoryLabelText; // 0x0(0x10)
		int32_t PropIndex; // 0x10(0x4)
		int32_t MaxPropCount; // 0x14(0x4)
		int32_t CategoryIndex; // 0x18(0x4)
		int32_t MaxCategoryCount; // 0x1C(0x4)
		TWeakObjectPtr<APlayerState*> Sender; // 0x20(0x8)
	};


	// Struct MotherGameplayRuntime.PaddleGingerPropActivatedData
	// Size: 0x10 (0x10 - 0x0)
	struct FPaddleGingerPropActivatedData	
	{
	public:
		bool bActivated; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		APlayerState* Sender; // 0x8(0x8)
	};

}
