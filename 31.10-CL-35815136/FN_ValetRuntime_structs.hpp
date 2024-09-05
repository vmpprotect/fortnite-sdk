#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ValetRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ValetRuntime.FortDagwoodCmd
	// Size: 0x30 (0x30 - 0x0)
	struct FFortDagwoodCmd	
	{
	public:
		float ForwardAlpha; // 0x0(0x4)
		float RightAlpha; // 0x4(0x4)
		float AccelerationAlpha; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector_NetQuantize100 MovementDir; // 0x10(0x18)
		bool bBoost : 1; // 0x28:0(0x1)
		bool bHandbrake : 1; // 0x28:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct ValetRuntime.DagwoodInPersistent
	// Inherited from FFortVehicleInPersistent
	// Size: 0xC0 (0x260 - 0x1A0)
	struct FDagwoodInPersistent : public FFortVehicleInPersistent	
	{
	public:
		UFortDagwoodVehicleConfigs* FortDagwoodVehicleConfigs; // 0x1A0(0x8)
		FDagwoodRuntimeModifiers DagwoodRuntimeModifiedProperties; // 0x1A8(0x70)
		unsigned char UnknownData00_7[0x48]; // 0x218(0x48) UNKNOWN PROPERTY
	};


	// Struct ValetRuntime.DagwoodRuntimeModifiers
	// Size: 0x70 (0x70 - 0x0)
	struct FDagwoodRuntimeModifiers	
	{
	public:
		FRuntimeBoostInfo BoostInfo; // 0x0(0x18)
		FRuntimeFuelInfo FuelInfo; // 0x18(0xC)
		FRuntimeSpringsInfo SpringsInfo; // 0x24(0x20)
		bool bDamageFriendlyVehicles; // 0x44(0x1)
		bool bDamageOtherVehicles; // 0x45(0x1)
		bool bDamageOwnVehicle; // 0x46(0x1)
		bool bDamageAllowedFromOtherVehicle; // 0x47(0x1)
		float GravityMultiplier; // 0x48(0x4)
		float MaxInclineAngle; // 0x4C(0x4)
		float MaxTiltAngle; // 0x50(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		TArray<FRuntimeGearInfo> GearInfos; // 0x58(0x10)
		FGameplayTag TireModTag; // 0x68(0x4)
		char ServerTireModVersion; // 0x6C(0x1)
		bool bTireModAdjustsPosition; // 0x6D(0x1)
		char DataVersion; // 0x6E(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x6F(0x1) UNKNOWN PROPERTY
	};


	// Struct ValetRuntime.RuntimeGearInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FRuntimeGearInfo	
	{
	public:
		int32_t GearIndex; // 0x0(0x4)
		float TopSpeed; // 0x4(0x4)
		float MinSpeed; // 0x8(0x4)
		float PushForce; // 0xC(0x4)
	};


	// Struct ValetRuntime.RuntimeFuelInfo
	// Size: 0xC (0xC - 0x0)
	struct FRuntimeFuelInfo	
	{
	public:
		float MaxFuel; // 0x0(0x4)
		float FuelPerSecondDriving; // 0x4(0x4)
		float FuelPerSecondBoosting; // 0x8(0x4)
	};


	// Struct ValetRuntime.RuntimeBoostInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FRuntimeBoostInfo	
	{
	public:
		bool bCanBoost : 1; // 0x0:0(0x1)
		bool bUsesRechargeableBoost : 1; // 0x0:1(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float BoostPushForce; // 0x4(0x4)
		float BoostTopSpeedForceMultiplier; // 0x8(0x4)
		float BoostTopSpeedMultiplier; // 0xC(0x4)
		float RechargeableBoostRateOfRegen; // 0x10(0x4)
		float RechargeableBoostRateOfUse; // 0x14(0x4)
	};


	// Struct ValetRuntime.DagwoodState_PT
	// Size: 0x230 (0x230 - 0x0)
	struct FDagwoodState_PT	
	{
	public:
		FDagwoodInternal Internal; // 0x0(0x198)
		FDagwoodOutPersistent OutPersistent; // 0x198(0x30)
		FDagwoodOutContinuous OutContinuous; // 0x1C8(0x60)
		bool bOutValid; // 0x228(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x229(0x7) UNKNOWN PROPERTY
	};


	// Struct ValetRuntime.DagwoodOutContinuous
	// Inherited from FFortVehicleOutContinuous
	// Size: 0x10 (0x60 - 0x50)
	struct FDagwoodOutContinuous : public FFortVehicleOutContinuous	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x50(0x10) UNKNOWN PROPERTY
	};


	// Struct ValetRuntime.DagwoodOutPersistent
	// Inherited from FFortVehicleOutPersistent
	// Size: 0x8 (0x30 - 0x28)
	struct FDagwoodOutPersistent : public FFortVehicleOutPersistent	
	{
	public:
		bool bHasTraction; // 0x28(0x1)
		bool bStartHandBrakeCatchupForce; // 0x29(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
	};


	// Struct ValetRuntime.DagwoodInternal
	// Inherited from FFortVehicleInternalPersistent
	// Size: 0xB8 (0x198 - 0xE0)
	struct FDagwoodInternal : public FFortVehicleInternalPersistent	
	{
	public:
		unsigned char UnknownData00_1[0xB8]; // 0xE0(0xB8) UNKNOWN PROPERTY
	};


	// Struct ValetRuntime.DagwoodManagedState
	// Size: 0x4E8 (0x4E8 - 0x0)
	struct FDagwoodManagedState	
	{
	public:
		int32_t Frame; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FFortDagwoodCmd InputCmd; // 0x8(0x30)
		FDagwoodInPersistent GT_State; // 0x38(0x260)
		FDagwoodState_PT PT_State; // 0x298(0x230)
		APlayerController* PC; // 0x4C8(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x4D0(0x8) UNKNOWN PROPERTY
		TArray<FDagwoodFutureClientInput> FutureInputs; // 0x4D8(0x10)
	};


	// Struct ValetRuntime.DagwoodFutureClientInput
	// Size: 0x38 (0x38 - 0x0)
	struct FDagwoodFutureClientInput	
	{
	public:
		int32_t Frame; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FFortDagwoodCmd InputCmd; // 0x8(0x30)
	};


	// Struct ValetRuntime.NetworkPhysicsState
	// Size: 0x90 (0x90 - 0x0)
	struct FNetworkPhysicsState	
	{
	public:
		unsigned char UnknownData00_2[0x90]; // 0x0(0x90) UNKNOWN PROPERTY
	};


	// Struct ValetRuntime.NetworkPhysicsStateNetSerializerState
	// Size: 0x80 (0x80 - 0x0)
	struct FNetworkPhysicsStateNetSerializerState	
	{
	public:
		FVector Location; // 0x0(0x18)
		FVector LinearVelocity; // 0x18(0x18)
		FVector AngularVelocity; // 0x30(0x18)
		unsigned char UnknownData00_6[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
		FQuat Rotation; // 0x50(0x20)
		int32_t NetworkHandle; // 0x70(0x4)
		int32_t Frame; // 0x74(0x4)
		char ObjectState; // 0x78(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
	};


	// Struct ValetRuntime.NetworkPhysicsStateNetSerializerDebugData
	// Size: 0x60 (0x60 - 0x0)
	struct FNetworkPhysicsStateNetSerializerDebugData	
	{
	public:
		FVector Force; // 0x0(0x18)
		FVector Torque; // 0x18(0x18)
		FVector LinearImpulse; // 0x30(0x18)
		FVector AngularImpulse; // 0x48(0x18)
	};


	// Struct ValetRuntime.NetworkPhysicsStateNetSerializerDebugState
	// Size: 0x120 (0x120 - 0x0)
	struct FNetworkPhysicsStateNetSerializerDebugState	
	{
	public:
		FNetworkPhysicsStateNetSerializerDebugData DebugData; // 0x0(0x120)
	};


	// Struct ValetRuntime.NetworkPhysicsStateNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FNetworkPhysicsStateNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct ValetRuntime.VehicleAttachment
	// Size: 0x10 (0x10 - 0x0)
	struct FVehicleAttachment	
	{
	public:
		FName ModName; // 0x0(0x4)
		FName SocketName; // 0x4(0x4)
		USkeletalMesh* SkeletalMesh; // 0x8(0x8)
	};


	// Struct ValetRuntime.DagwoodActionDefForUI
	// Size: 0x10 (0x10 - 0x0)
	struct FDagwoodActionDefForUI	
	{
	public:
		TArray<FActionDefForUI> ActionDefForUI; // 0x0(0x10)
	};


	// Struct ValetRuntime.DagwoodCollisionHitHapticsConfig
	// Size: 0x48 (0x48 - 0x0)
	struct FDagwoodCollisionHitHapticsConfig	
	{
	public:
		float HitMagnitudeThreshold; // 0x0(0x4)
		float StrongHitMagnitudeThreshold; // 0x4(0x4)
		float BigCameraShakeVerticalHeadingThreshold; // 0x8(0x4)
		float BigCameraShakeAccelerationThreshold; // 0xC(0x4)
		float MinBigCameraShakeAcceleration; // 0x10(0x4)
		float MaxBigCameraShakeAcceleration; // 0x14(0x4)
		float MinBigCameraShakeNormalizedAcceleration; // 0x18(0x4)
		float MaxBigCameraShakeNormalizedAcceleration; // 0x1C(0x4)
		float MinSmallCameraShakeHitMagnitude; // 0x20(0x4)
		float MaxSmallCameraShakeHitMagnitude; // 0x24(0x4)
		UClass* SmallHitCameraShakeEffect; // 0x28(0x8)
		UClass* BigHitCameraShakeEffect; // 0x30(0x8)
		UForceFeedbackEffect* SmallHitForceFeedbackEffect; // 0x38(0x8)
		UForceFeedbackEffect* BigHitForceFeedbackEffect; // 0x40(0x8)
	};


	// Struct ValetRuntime.DagwoodCollisionHitFXConfig
	// Size: 0x20 (0x20 - 0x0)
	struct FDagwoodCollisionHitFXConfig	
	{
	public:
		FName HitMagnitudeParameterName; // 0x0(0x4)
		float HitMagnitudeThreshold; // 0x4(0x4)
		float SpeedThreshold; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UFXSystemAsset* PawnImpactFX; // 0x10(0x8)
		UFXSystemAsset* ScrapeImpactFX; // 0x18(0x8)
	};


	// Struct ValetRuntime.TireSimulationRuntimeData
	// Size: 0x20 (0x20 - 0x0)
	struct FTireSimulationRuntimeData	
	{
	public:
		FRuntimeTerrainHandlingInfo HandlingInfo; // 0x0(0x14)
		float PoppedTireSpringLength; // 0x14(0x4)
		float PoppedTireSpringStiff; // 0x18(0x4)
		float PoppedTireSpringDamp; // 0x1C(0x4)
	};


	// Struct ValetRuntime.ValetUpdateContext
	// Size: 0x18 (0x18 - 0x0)
	struct FValetUpdateContext	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct ValetRuntime.VehiclePropReplacementData
	// Size: 0x50 (0x50 - 0x0)
	struct FVehiclePropReplacementData	
	{
	public:
		TWeakObjectPtr<UFortVehicleItemDefinition*> FortVehicleItemDefinition; // 0x0(0x20)
		FVector TransOffset; // 0x20(0x18)
		FRotator RotOffset; // 0x38(0x18)
	};

}
