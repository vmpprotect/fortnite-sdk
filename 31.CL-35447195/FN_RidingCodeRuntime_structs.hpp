#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RidingCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct RidingCodeRuntime.RidingControlInputStateReliable
	// Size: 0x1 (0x1 - 0x0)
	struct FRidingControlInputStateReliable	
	{
	public:
		bool bIsJumping : 1; // 0x0:0(0x1)
		bool bIsUsingAbility : 1; // 0x0:1(0x1)
		bool bIsUsingSecondaryAbility : 1; // 0x0:2(0x1)
		bool bIsUsingTertiaryAbility : 1; // 0x0:3(0x1)
		bool bIsPetting : 1; // 0x0:4(0x1)
	};


	// Struct RidingCodeRuntime.RidingControlInputStateUnreliable
	// Size: 0x2 (0x2 - 0x0)
	struct FRidingControlInputStateUnreliable	
	{
	public:
		char RightAlphaQuantized; // 0x0(0x1)
		char ForwardAlphaQuantized; // 0x1(0x1)
	};


	// Struct RidingCodeRuntime.RidingControlInputState
	// Size: 0xC (0xC - 0x0)
	struct FRidingControlInputState	
	{
	public:
		float RightAlpha; // 0x0(0x4)
		float ForwardAlpha; // 0x4(0x4)
		bool bIsJumping : 1; // 0x8:0(0x1)
		unsigned char UnknownBit05 : 1; // 0x8:1(0x1) UNKNOWN PROPERTY
		bool bIsUsingAbility : 1; // 0x8:2(0x1)
		unsigned char UnknownBit06 : 1; // 0x8:3(0x1) UNKNOWN PROPERTY
		bool bIsUsingSecondaryAbility : 1; // 0x8:4(0x1)
		unsigned char UnknownBit07 : 1; // 0x8:5(0x1) UNKNOWN PROPERTY
		bool bIsUsingTertiaryAbility : 1; // 0x8:6(0x1)
		unsigned char UnknownBit08 : 1; // 0x8:7(0x1) UNKNOWN PROPERTY
		bool bIsPetting : 1; // 0x9:0(0x1)
		unsigned char UnknownData09_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};


	// Struct RidingCodeRuntime.RidingPlaylistBlacklistTableRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FRidingPlaylistBlacklistTableRow : public FTableRowBase	
	{
	public:
		FGameplayTagContainer PlaylistTags; // 0x8(0x20)
	};


	// Struct RidingCodeRuntime.PrimaryFireAnimMontageAnimCoreTypeOverride
	// Size: 0x60 (0x60 - 0x0)
	struct FPrimaryFireAnimMontageAnimCoreTypeOverride	
	{
	public:
		TEnumAsByte CoreTypeToOverride; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FFortGameplayAbilityMontageInfo OverridingMontageInfo; // 0x8(0x58)
	};


	// Struct RidingCodeRuntime.PrimaryFireAnimMontageTagOverride
	// Size: 0x60 (0x60 - 0x0)
	struct FPrimaryFireAnimMontageTagOverride	
	{
	public:
		FGameplayTag TagOverride; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FFortGameplayAbilityMontageInfo OverridingMontageInfo; // 0x8(0x58)
	};


	// Struct RidingCodeRuntime.RidingAttachmentBoundsOverride
	// Size: 0x38 (0x38 - 0x0)
	struct FRidingAttachmentBoundsOverride	
	{
	public:
		bool bUseOverride; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector AttachSoftBounds; // 0x8(0x18)
		FVector AttachHardBounds; // 0x20(0x18)
	};


	// Struct RidingCodeRuntime.RidingPettingData
	// Size: 0x110 (0x110 - 0x0)
	struct FRidingPettingData	
	{
	public:
		bool bIsPettableCreature; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FFortGameplayAbilityMontageInfo RiderMalePettingMontageInfo; // 0x8(0x58)
		FFortGameplayAbilityMontageInfo RiderFemalePettingMontageInfo; // 0x60(0x58)
		FFortGameplayAbilityMontageInfo RidablePettingMontageInfo; // 0xB8(0x58)
	};


	// Struct RidingCodeRuntime.RiderDismountLaunchVelocity
	// Size: 0xA8 (0xA8 - 0x0)
	struct FRiderDismountLaunchVelocity	
	{
	public:
		FScalableFloat DismountVelocityMultiplier; // 0x0(0x28)
		FScalableFloat DismountVelocityBaseForwardVelocity; // 0x28(0x28)
		FScalableFloat DismountVelocityBaseRightVelocity; // 0x50(0x28)
		FScalableFloat DismountVelocityBaseUpVelocity; // 0x78(0x28)
		bool bApplyDismountVelocityMultiplierToZVelocity; // 0xA0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
	};


	// Struct RidingCodeRuntime.RidingAnalyticsData_Base
	// Size: 0x48 (0x48 - 0x0)
	struct FRidingAnalyticsData_Base	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr Rider; // 0x8(0x20)
		TWeakObjectPtr Ridable; // 0x28(0x20)
	};


	// Struct RidingCodeRuntime.RidingAnalyticsData_Started
	// Inherited from FRidingAnalyticsData_Base
	// Size: 0x0 (0x48 - 0x48)
	struct FRidingAnalyticsData_Started : public FRidingAnalyticsData_Base	
	{
	public:
	};


	// Struct RidingCodeRuntime.RidingAnalyticsData_Stopped
	// Inherited from FRidingAnalyticsData_Base
	// Size: 0x38 (0x80 - 0x48)
	struct FRidingAnalyticsData_Stopped : public FRidingAnalyticsData_Base	
	{
	public:
		float TotalRidingTime; // 0x48(0x4)
		float RiderStartHealth; // 0x4C(0x4)
		float RiderStartShield; // 0x50(0x4)
		float RiderEndHealth; // 0x54(0x4)
		float RiderEndShield; // 0x58(0x4)
		float TotalDistanceTraveled; // 0x5C(0x4)
		int32_t JumpUseCount; // 0x60(0x4)
		int32_t AbilityUseCount; // 0x64(0x4)
		float RiderDamageDealt; // 0x68(0x4)
		float RiderDamageTaken; // 0x6C(0x4)
		float RiderHealingReceived; // 0x70(0x4)
		float RiderShieldGained; // 0x74(0x4)
		bool bRidableEliminated : 1; // 0x78:0(0x1)
		bool bRidableExhausted : 1; // 0x78:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
	};

}
