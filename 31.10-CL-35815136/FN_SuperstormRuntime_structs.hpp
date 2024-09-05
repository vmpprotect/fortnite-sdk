#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SuperstormRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SuperstormRuntime.TempestLightningBoltEffectContainer
	// Size: 0x50 (0x50 - 0x0)
	struct FTempestLightningBoltEffectContainer	
	{
	public:
		FGameplayTagQuery TargetFilter; // 0x0(0x48)
		UClass* GameplayEffect; // 0x48(0x8)
	};


	// Struct SuperstormRuntime.TempestLightningBoltData
	// Size: 0x78 (0x78 - 0x0)
	struct FTempestLightningBoltData	
	{
	public:
		AFortPawn* SourcePawn; // 0x0(0x8)
		unsigned char UnknownData00_6[0x40]; // 0x8(0x40) UNKNOWN PROPERTY
		AFortGameplayEffectDeliveryActor* LightningBolt; // 0x48(0x8)
		TArray<AActor*> TargetActors; // 0x50(0x10)
		TArray<AFortPawn*> TargetPawns; // 0x60(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY
	};


	// Struct SuperstormRuntime.TornadoActorInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FTornadoActorInfo	
	{
	public:
		unsigned char UnknownData00_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct SuperstormRuntime.TornadoObjectForceModifiers
	// Size: 0x10 (0x10 - 0x0)
	struct FTornadoObjectForceModifiers	
	{
	public:
		float TangentVelocityMultiplier; // 0x0(0x4)
		float HeightVelocityMultiplier; // 0x4(0x4)
		float DragMultiplier; // 0x8(0x4)
		float TorqueMultiplier; // 0xC(0x4)
	};


	// Struct SuperstormRuntime.TornadoConfigEntry
	// Inherited from FTableRowBase
	// Size: 0x130 (0x138 - 0x8)
	struct FTornadoConfigEntry : public FTableRowBase	
	{
	public:
		float EyeBufferDistance; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UCurveFloat* TargetOrbitRadiusCurve; // 0x10(0x8)
		float OrbitStrength; // 0x18(0x4)
		float TargetTangentVelocity; // 0x1C(0x4)
		float TangentVelocityVariance; // 0x20(0x4)
		float TangentAcceleration; // 0x24(0x4)
		float TangentAccelerationVariance; // 0x28(0x4)
		float TangentAngleOffset; // 0x2C(0x4)
		float TargetHeightVelocity; // 0x30(0x4)
		float HeightVelocityVariance; // 0x34(0x4)
		float HeightAcceleration; // 0x38(0x4)
		float HeightAccelerationVariance; // 0x3C(0x4)
		float TorqueStrength; // 0x40(0x4)
		float TorqueVariance; // 0x44(0x4)
		float TimeToForceEject; // 0x48(0x4)
		float HeightToForceEject; // 0x4C(0x4)
		float DepthToForceEject; // 0x50(0x4)
		bool bOrbitRadiusExtendsDistanceToForceEject; // 0x54(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
		float DistanceToForceEject; // 0x58(0x4)
		float EjectionBoost; // 0x5C(0x4)
		float MaxDragVelocity; // 0x60(0x4)
		float DragCoefficient1; // 0x64(0x4)
		float DragCoefficient2; // 0x68(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		TMap<EFortPhysicsSimSize, FTornadoObjectForceModifiers> SizeForceModifiers; // 0x70(0x50)
		TMap<EFortPhysicsObjectType, FTornadoObjectForceModifiers> ObjectTypeForceModifiers; // 0xC0(0x50)
		float PlayerGravityFloorOffset; // 0x110(0x4)
		float PlayerGravityFloorWidth; // 0x114(0x4)
		float PlayerGravityFloorGravityScalar; // 0x118(0x4)
		float PeriodicDamageToPawns; // 0x11C(0x4)
		float PeriodicDamageToProps; // 0x120(0x4)
		float BurstDamageToStaticActors; // 0x124(0x4)
		float ChancePerSecondToApplyBurstDamage; // 0x128(0x4)
		bool bAllowPickupPlayers; // 0x12C(0x1)
		bool bAllowPickupPawns; // 0x12D(0x1)
		bool bAllowPickupVehicles; // 0x12E(0x1)
		bool bAllowPickupProjectiles; // 0x12F(0x1)
		bool bAffectStaticObjects; // 0x130(0x1)
		EFortPhysicsSimSize MaxAllowedPhysicsObjectSize; // 0x131(0x1)
		EFortPhysicsSimSize MinAllowedPhysicsObjectSize; // 0x132(0x1)
		unsigned char UnknownData03_7[0x5]; // 0x133(0x5) UNKNOWN PROPERTY
	};


	// Struct SuperstormRuntime.TornadoSimulationData
	// Inherited from FFastArraySerializerItem
	// Size: 0x34 (0x40 - 0xC)
	struct FTornadoSimulationData : public FFastArraySerializerItem	
	{
	public:
		TWeakObjectPtr<AActor*> Actor; // 0xC(0x8)
		EFortPhysicsObjectType ObjectType; // 0x14(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float TangentVelocity; // 0x18(0x4)
		float TangentAccel; // 0x1C(0x4)
		float HeightVelocity; // 0x20(0x4)
		float HeightAccel; // 0x24(0x4)
		FVector Torque; // 0x28(0x18)
	};


	// Struct SuperstormRuntime.TornadoTelemetryStats
	// Size: 0xA8 (0xA8 - 0x0)
	struct FTornadoTelemetryStats	
	{
	public:
		TMap<EFortPhysicsObjectType, int32_t> NumActorsEnteredByType; // 0x0(0x50)
		TSet<FUniqueNetIdRepl> EnteredPlayerAccountIds; // 0x50(0x50)
		int32_t NumPreBuiltStructuresDestroyed; // 0xA0(0x4)
		int32_t NumPlayerBuiltStructuresDestroyed; // 0xA4(0x4)
	};


	// Struct SuperstormRuntime.TornadoClientSimulationArray
	// Inherited from FFastArraySerializer
	// Size: 0x10 (0x118 - 0x108)
	struct FTornadoClientSimulationArray : public FFastArraySerializer	
	{
	public:
		TArray<FTornadoSimulationData> ActorsToSimulateArray; // 0x108(0x10)
	};

}
