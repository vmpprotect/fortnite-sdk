#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ItemizedPropSpawnerParentRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ItemizedPropSpawnerParentRuntime.NativeItemizedPropSpawner_PropSpawnData
	// Size: 0x80 (0x80 - 0x0)
	struct FNativeItemizedPropSpawner_PropSpawnData	
	{
	public:
		UClass ClassToSpawn; // 0x0(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform RelativeTransform; // 0x10(0x60)
		EItemizedPropSpawnerChunkLocation ChunkLocation; // 0x70(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x71(0xF) UNKNOWN PROPERTY
	};


	// Struct ItemizedPropSpawnerParentRuntime.NativeItemizedPropSpawner_SpawnedPropData
	// Size: 0x110 (0x110 - 0x0)
	struct FNativeItemizedPropSpawner_SpawnedPropData	
	{
	public:
		FNativeItemizedPropSpawner_PropSpawnData SpawnData; // 0x0(0x80)
		TArray SupportingActors; // 0x80(0x10)
		AActor BaseActor; // 0x90(0x8)
		AItemizedPropSpawnerWallChunk SpawnedActor; // 0x98(0x8)
		FTransform SpawnedRelativeTransform; // 0xA0(0x60)
		float ZOffset; // 0x100(0x4)
		bool bValid; // 0x104(0x1)
		unsigned char UnknownData01_7[0xB]; // 0x105(0xB) UNKNOWN PROPERTY
	};


	// Struct ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerWeaponData
	// Size: 0x140 (0x140 - 0x0)
	struct FItemizedPropSpawnerWeaponData	
	{
	public:
		TWeakObjectPtr Player; // 0x0(0x8)
		TWeakObjectPtr Weapon; // 0x8(0x8)
		bool bPreviewing; // 0x10(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float PreviewDistance; // 0x14(0x4)
		float MaxDistance; // 0x18(0x4)
		float MinDistance; // 0x1C(0x4)
		float MinDistFromIndestructible; // 0x20(0x4)
		bool bEnableBlockedByIndestructibles; // 0x24(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		float PlayerForwardVectorScale; // 0x28(0x4)
		float InitialTracePullbackDist; // 0x2C(0x4)
		float DownwardTraceDistanceNear; // 0x30(0x4)
		float DownwardTraceDistanceNearUp; // 0x34(0x4)
		float DownwardTraceDistanceFar; // 0x38(0x4)
		bool bStopped; // 0x3C(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		TArray ClassesToIgnoreWhenTracing; // 0x40(0x10)
		TArray ClassesToIgnoreWhenTracingIfTooSmall; // 0x50(0x10)
		float DebugDrawTime; // 0x60(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		TArray ChunkRelativeTransforms; // 0x68(0x10)
		TMap ChunkLocationToChunkIndexMap; // 0x78(0x50)
		float ChunkRelativeRightVectorScale; // 0xC8(0x4)
		float GroundFindStartOffset; // 0xCC(0x4)
		float GroundFindEndOffset; // 0xD0(0x4)
		float GroundFindDistanceOffset; // 0xD4(0x4)
		float MaxSpawnDistBelowPlayer; // 0xD8(0x4)
		unsigned char UnknownData11_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TArray PreviewMeshesTEMP; // 0xE0(0x10)
		UMaterialInterface ChunkMaterial; // 0xF0(0x8)
		UMaterialInterface ChunkMaterialBlocked; // 0xF8(0x8)
		float ChunkBlockPitch; // 0x100(0x4)
		float BlockingIndestructibleObjectDist; // 0x104(0x4)
		float MaxVerticalChunkSpacing; // 0x108(0x4)
		float MinSupportingPropSize; // 0x10C(0x4)
		float TooCloseForHeightDistStep; // 0x110(0x4)
		int32_t TooCloseForHeightMaxIterations; // 0x114(0x4)
		float TooCloseForHeightMinHeightAbovePlayer; // 0x118(0x4)
		float TooCloseForHeightMaxHeightAbovePlayer; // 0x11C(0x4)
		float TooCloseForHeightMinDistFromPlayer; // 0x120(0x4)
		float SphereTraceRadius; // 0x124(0x4)
		bool bAllowUnwalkableTargets; // 0x128(0x1)
		bool bAllowWaterTargets; // 0x129(0x1)
		unsigned char UnknownData12_6[0x2]; // 0x12A(0x2) UNKNOWN PROPERTY
		float TryCloserOnInvalidTargetDist; // 0x12C(0x4)
		bool bEnableTargetOnLandCheck; // 0x130(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x131(0x3) UNKNOWN PROPERTY
		float LandFindStartOffset; // 0x134(0x4)
		float LandFindEndOffset; // 0x138(0x4)
		float VerticalDistanceLimit; // 0x13C(0x4)
	};


	// Struct ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerOverlappedActorCheckData
	// Size: 0x98 (0x98 - 0x0)
	struct FItemizedPropSpawnerOverlappedActorCheckData	
	{
	public:
		TArray CapsuleOverlapObjectTypes; // 0x0(0x10)
		TWeakObjectPtr CapsuleOverlapActorClassFilter; // 0x10(0x20)
		FGameplayTagContainer TagsToDestroyOverlappedActor; // 0x30(0x20)
		FGameplayTag BlockSpawnTag; // 0x50(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FVector VehicleLaunchVelocity; // 0x58(0x18)
		FVector PawnLaunchVelocity; // 0x70(0x18)
		float AbilityImpactRadius; // 0x88(0x4)
		float CapsuleOverlapRadiusMulipler; // 0x8C(0x4)
		float CapsuleOverlapHalfHeightMultipler; // 0x90(0x4)
		bool bApplyFallImunityToKnockbackVictims; // 0x94(0x1)
		bool bShouldLaunch; // 0x95(0x1)
		bool bInstigatorIsSameTeam; // 0x96(0x1)
		unsigned char UnknownData03_7[0x1]; // 0x97(0x1) UNKNOWN PROPERTY
	};

}
