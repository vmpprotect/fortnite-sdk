#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ContextualTraversalRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ContextualTraversalRuntime.FortMovementMode_TraversalBaseRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0xC0 (0x100 - 0x40)
	class UFortMovementMode_TraversalBaseRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		UAnimMontage AnimMontage; // 0x40(0x8)
		FName MontageStartSectionName; // 0x48(0x4)
		FName MontageMiddleSectionName; // 0x4C(0x4)
		FSynchedActionWarpPointInfo_Replicated SynchedActionWarpPointInfo; // 0x50(0xA0)
		unsigned char UnknownData01_7[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualTraversalRuntime.FortMovementMode_TraversalBaseRuntimeData");
			return ret;
		}
	};


	// Class ContextualTraversalRuntime.FortMovementMode_ExtLogicTraversalBase
	// Inherited from UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x58 (0x178 - 0x120)
	class UFortMovementMode_ExtLogicTraversalBase : public UFortMovementMode_BaseExtLogic	
	{
	public:
		unsigned char UnknownData03_3[0x30]; // 0x120(0x30) UNKNOWN PROPERTY
		FGameplayTag SynchedActionTag; // 0x150(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x154(0x4) UNKNOWN PROPERTY
		UClass CameraMode; // 0x158(0x8)
		FGameplayTag CameraModeTag; // 0x160(0x4)
		FGameplayTag PreventWeaponHolsterTag; // 0x164(0x4)
		FName MontageStartSectionName; // 0x168(0x4)
		bool bUseNextSectionAnimName; // 0x16C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x16D(0x3) UNKNOWN PROPERTY
		float OverrideServerAllowablePositionError; // 0x170(0x4)
		float OverrideAnimBlendOutTimeWhenLanding; // 0x174(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualTraversalRuntime.FortMovementMode_ExtLogicTraversalBase");
			return ret;
		}
	};

}
