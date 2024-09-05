#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TowHookWeaponRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct TowHookWeaponRuntime.FortMovementMode_TetheredCreationData
	// Inherited from FFortMovementMode_BaseExtCreationData
	// Size: 0x30 (0x40 - 0x10)
	struct FFortMovementMode_TetheredCreationData : public FFortMovementMode_BaseExtCreationData	
	{
	public:
		TWeakObjectPtr<AActor*> TetheredActor; // 0x10(0x8)
		FVector LocalTetherLocation; // 0x18(0x18)
		TWeakObjectPtr<AActor*> Projectile; // 0x30(0x8)
		bool bAutoReelIn; // 0x38(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct TowHookWeaponRuntime.ReplicatedRopeData
	// Size: 0x28 (0x28 - 0x0)
	struct FReplicatedRopeData	
	{
	public:
		TWeakObjectPtr<AActor*> Projectile; // 0x0(0x8)
		TWeakObjectPtr<AActor*> TetheredActor; // 0x8(0x8)
		FVector LocalTetherLocation; // 0x10(0x18)
	};


	// Struct TowHookWeaponRuntime.TowHookWeaponTargetingConfig
	// Size: 0x128 (0x128 - 0x0)
	struct FTowHookWeaponTargetingConfig	
	{
	public:
		FScalableFloat PrimarySearchDistance; // 0x0(0x28)
		FScalableFloat PrimarySearchStartDistance; // 0x28(0x28)
		FScalableFloat SecondarySearchDistance; // 0x50(0x28)
		FScalableFloat PrimarySearchRadius; // 0x78(0x28)
		FScalableFloat SecondarySearchRadius; // 0xA0(0x28)
		TArray<TEnumAsByte> TraceObjectTypes; // 0xC8(0x10)
		FScalableFloat AutoTargetZOffset; // 0xD8(0x28)
		FScalableFloat HookRange; // 0x100(0x28)
	};


	// Struct TowHookWeaponRuntime.TowHookWeaponTargetInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FTowHookWeaponTargetInfo	
	{
	public:
		bool bHitTarget; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> TargetActor; // 0x4(0x8)
		TWeakObjectPtr<USceneComponent*> TargetComponent; // 0xC(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FVector TargetPoint; // 0x18(0x18)
		float HitDistance; // 0x30(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};

}
