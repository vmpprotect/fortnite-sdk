#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarCosmetics
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DelMarCosmetics.DelMarVehicleAnimInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarVehicleAnimInfo	
	{
	public:
		float SteerAngleDegrees; // 0x0(0x4)
		float VisualSteerAngleDegrees; // 0x4(0x4)
	};


	// Struct DelMarCosmetics.DelMarVehicleWheelAnimInfo
	// Size: 0x1C (0x1C - 0x0)
	struct FDelMarVehicleWheelAnimInfo	
	{
	public:
		float SpringToWheelOffsetZ; // 0x0(0x4)
		FFloatInterval SpringTravelRange; // 0x4(0x8)
		float WheelRadius; // 0xC(0x4)
		float TravelDistance; // 0x10(0x4)
		float SpinSpeedDegrees; // 0x14(0x4)
		float SpinDegrees; // 0x18(0x4)
	};


	// Struct DelMarCosmetics.DelMarVehicleBooster
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarVehicleBooster	
	{
	public:
		UNiagaraSystem* BoosterSystem; // 0x0(0x8)
		UNiagaraComponent* NiagaraComponent; // 0x8(0x8)
		FName BoosterSocket; // 0x10(0x4)
		char BitFlags; // 0x14(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct DelMarCosmetics.DelMarVehicleUnderthrustSocket
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarVehicleUnderthrustSocket	
	{
	public:
		FName SocketName; // 0x0(0x4)
		char SideFlags; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct DelMarCosmetics.DelMarVehicleUnderthrustVfxData
	// Size: 0x38 (0x38 - 0x0)
	struct FDelMarVehicleUnderthrustVfxData	
	{
	public:
		UNiagaraSystem* UnderthrustVfxSystem; // 0x0(0x8)
		UNiagaraComponent* NiagaraComponent; // 0x8(0x8)
		FName NiagaraLocationArrayParam; // 0x10(0x4)
		FName NiagaraActivationsArrayParam; // 0x14(0x4)
		TArray<FDelMarVehicleUnderthrustSocket> Sockets; // 0x18(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
	};


	// Struct DelMarCosmetics.DelMarVehicleWheelSetup
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarVehicleWheelSetup	
	{
	public:
		FName WheelSpinBone; // 0x0(0x4)
		FName WheelPivotBone; // 0x4(0x4)
		FName WheelContactBone; // 0x8(0x4)
		bool bEligibleForPhysMatContactFx; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct DelMarCosmetics.DelMarVehicleCosmeticWheelInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FDelMarVehicleCosmeticWheelInfo	
	{
	public:
		UNiagaraComponent* ContactParticleComponent; // 0x0(0x8)
		UNiagaraSystem* ContactParticle; // 0x8(0x8)
		UPhysicalMaterial* ContactMaterial; // 0x10(0x8)
		EDelMarVehicleWheelIndex WheelIndex; // 0x18(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		FDelMarVehicleWheelSetup Setup; // 0x1C(0x10)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCosmetics.DelMarOverrideParameter_Bool
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarOverrideParameter_Bool	
	{
	public:
		FName Name; // 0x0(0x4)
		bool Value; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct DelMarCosmetics.DelMarOverrideParameter_Int
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarOverrideParameter_Int	
	{
	public:
		FName Name; // 0x0(0x4)
		int32_t Value; // 0x4(0x4)
	};


	// Struct DelMarCosmetics.DelMarOverrideParameter_Float
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarOverrideParameter_Float	
	{
	public:
		FName Name; // 0x0(0x4)
		float Value; // 0x4(0x4)
	};


	// Struct DelMarCosmetics.DelMarOverrideParameter_Vector
	// Size: 0x20 (0x20 - 0x0)
	struct FDelMarOverrideParameter_Vector	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Value; // 0x8(0x18)
	};


	// Struct DelMarCosmetics.DelMarOverrideParameter_Color
	// Size: 0x14 (0x14 - 0x0)
	struct FDelMarOverrideParameter_Color	
	{
	public:
		FName Name; // 0x0(0x4)
		FLinearColor Value; // 0x4(0x10)
	};


	// Struct DelMarCosmetics.DelMarOverrideParameter_Texture
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarOverrideParameter_Texture	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UTexture* Value; // 0x8(0x8)
	};


	// Struct DelMarCosmetics.DelMarOverrideParameter_StaticMesh
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarOverrideParameter_StaticMesh	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UStaticMesh* Value; // 0x8(0x8)
	};


	// Struct DelMarCosmetics.DelMarOverrideParameter_Actor
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarOverrideParameter_Actor	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		AActor* Value; // 0x8(0x8)
	};


	// Struct DelMarCosmetics.DelMarOverrideParameter_Material
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarOverrideParameter_Material	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UMaterialInterface* Value; // 0x8(0x8)
	};


	// Struct DelMarCosmetics.DelMarMaterialParameterCollection
	// Size: 0x30 (0x30 - 0x0)
	struct FDelMarMaterialParameterCollection	
	{
	public:
		TArray<FDelMarOverrideParameter_Float> OverrideFloatParameters; // 0x0(0x10)
		TArray<FDelMarOverrideParameter_Vector> OverrideVectorParameters; // 0x10(0x10)
		TArray<FDelMarOverrideParameter_Texture> OverrideTextureParameters; // 0x20(0x10)
	};


	// Struct DelMarCosmetics.DelMarNiagaraParameterCollection
	// Size: 0x98 (0x98 - 0x0)
	struct FDelMarNiagaraParameterCollection	
	{
	public:
		UNiagaraSystem* OverrideNiagaraSystem; // 0x0(0x8)
		TArray<FDelMarOverrideParameter_Bool> OverrideBoolParameters; // 0x8(0x10)
		TArray<FDelMarOverrideParameter_Int> OverrideIntParameters; // 0x18(0x10)
		TArray<FDelMarOverrideParameter_Float> OverrideFloatParameters; // 0x28(0x10)
		TArray<FDelMarOverrideParameter_Vector> OverrideVectorParameters; // 0x38(0x10)
		TArray<FDelMarOverrideParameter_Color> OverrideColorParameters; // 0x48(0x10)
		TArray<FDelMarOverrideParameter_Texture> OverrideTextureParameters; // 0x58(0x10)
		TArray<FDelMarOverrideParameter_Material> OverrideMaterialsParameters; // 0x68(0x10)
		TArray<FDelMarOverrideParameter_StaticMesh> OverrideStaticMeshParameters; // 0x78(0x10)
		TArray<FDelMarOverrideParameter_Actor> OverrideActorParameters; // 0x88(0x10)
	};


	// Struct DelMarCosmetics.DelMarMaterialOverrides
	// Size: 0x40 (0x40 - 0x0)
	struct FDelMarMaterialOverrides	
	{
	public:
		int32_t MaterialInstanceDynamicIndex; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UMaterialInterface* MaterialInterface; // 0x8(0x8)
		FDelMarMaterialParameterCollection ParameterOverrides; // 0x10(0x30)
	};


	// Struct DelMarCosmetics.DelMarNiagaraOverrides
	// Size: 0x98 (0x98 - 0x0)
	struct FDelMarNiagaraOverrides	
	{
	public:
		FDelMarNiagaraParameterCollection ParameterOverrides; // 0x0(0x98)
	};


	// Struct DelMarCosmetics.DelMarParameterOverrides
	// Size: 0x20 (0x20 - 0x0)
	struct FDelMarParameterOverrides	
	{
	public:
		TArray<FDelMarMaterialOverrides> MaterialOverrides; // 0x0(0x10)
		TArray<FDelMarNiagaraOverrides> NiagaraOverrides; // 0x10(0x10)
	};


	// Struct DelMarCosmetics.DelMarVehicleController_WheelData
	// Size: 0x24 (0x24 - 0x0)
	struct FDelMarVehicleController_WheelData	
	{
	public:
		FBoneReference SuspensionBone; // 0x0(0xC)
		FBoneReference SteeringBone; // 0xC(0xC)
		FBoneReference RollBone; // 0x18(0xC)
	};


	// Struct DelMarCosmetics.DelMarAnimNode_VehicleController
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x120 (0x1E8 - 0xC8)
	struct FDelMarAnimNode_VehicleController : public FAnimNode_SkeletalControlBase	
	{
	public:
		FDelMarBouncyChassisState BouncyChassis; // 0xC8(0xC)
		FDelMarVehicleController_WheelData FrontLeftWheel; // 0xD4(0x24)
		FDelMarVehicleController_WheelData FrontRightWheel; // 0xF8(0x24)
		FDelMarVehicleController_WheelData BackLeftWheel; // 0x11C(0x24)
		FDelMarVehicleController_WheelData BackRightWheel; // 0x140(0x24)
		FBoneReference ChassisBone; // 0x164(0xC)
		FDelMarVehicleAnimInfo VehicleInfo; // 0x170(0x8)
		FDelMarVehicleWheelAnimInfo WheelInfoFR; // 0x178(0x1C)
		FDelMarVehicleWheelAnimInfo WheelInfoFL; // 0x194(0x1C)
		FDelMarVehicleWheelAnimInfo WheelInfoBR; // 0x1B0(0x1C)
		FDelMarVehicleWheelAnimInfo WheelInfoBL; // 0x1CC(0x1C)
	};


	// Struct DelMarCosmetics.DelMarBouncyChassisState
	// Size: 0xC (0xC - 0x0)
	struct FDelMarBouncyChassisState	
	{
	public:
		float PitchDegrees; // 0x0(0x4)
		float RollDegrees; // 0x4(0x4)
		float TranslationZ; // 0x8(0x4)
	};


	// Struct DelMarCosmetics.DelMarBoxSpringSetup
	// Size: 0x50 (0x50 - 0x0)
	struct FDelMarBoxSpringSetup	
	{
	public:
		FVector Strength; // 0x0(0x18)
		FVector Damping; // 0x18(0x18)
		FVector MaxDisplacement; // 0x30(0x18)
		float MaxSpeed; // 0x48(0x4)
		float Mass; // 0x4C(0x4)
	};


	// Struct DelMarCosmetics.DelMarBoxSpring
	// Size: 0xB0 (0xB0 - 0x0)
	struct FDelMarBoxSpring	
	{
	public:
		FDelMarBoxSpringSetup Setup; // 0x0(0x50)
		unsigned char UnknownData00_7[0x60]; // 0x50(0x60) UNKNOWN PROPERTY
	};


	// Struct DelMarCosmetics.DelMarSpringSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarSpringSettings	
	{
	public:
		float Strength; // 0x0(0x4)
		float Damping; // 0x4(0x4)
	};


	// Struct DelMarCosmetics.DelMarBouncyChassisSetup
	// Size: 0x58 (0x58 - 0x0)
	struct FDelMarBouncyChassisSetup	
	{
	public:
		FDelMarSpringSettings PitchSpring; // 0x0(0x8)
		float PitchMaxAngleDegrees; // 0x8(0x4)
		FDelMarSpringSettings RollSpring; // 0xC(0x8)
		float RollMaxAngleDegrees; // 0x14(0x4)
		FDelMarSpringSettings ZSpring; // 0x18(0x8)
		float ZMaxDrop; // 0x20(0x4)
		float ZMaxRaise; // 0x24(0x4)
		FVector MaxDisplacement; // 0x28(0x18)
		FVector MassOffset; // 0x40(0x18)
	};


	// Struct DelMarCosmetics.DelMarBouncyChassisInstance
	// Size: 0x118 (0x118 - 0x0)
	struct FDelMarBouncyChassisInstance	
	{
	public:
		FDelMarBoxSpring Spring; // 0x0(0xB0)
		unsigned char UnknownData00_7[0x68]; // 0xB0(0x68) UNKNOWN PROPERTY
	};


	// Struct DelMarCosmetics.DelMarDriverCosmeticData
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarDriverCosmeticData	
	{
	public:
		UAthenaCharacterItemDefinition* CharacterDefinition; // 0x0(0x8)
		TArray<FMcpVariantChannelInfo> CharacterVariantChannels; // 0x8(0x10)
	};


	// Struct DelMarCosmetics.DelMarPreviewConfigs
	// Size: 0x108 (0x108 - 0x0)
	struct FDelMarPreviewConfigs	
	{
	public:
		bool bAnyWheelsOnGround; // 0x0(0x1)
		bool bWheelsOnGround; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float ForwardSpeed; // 0x4(0x4)
		float SideSpeed; // 0x8(0x4)
		float Acceleration; // 0xC(0x4)
		float Throttle; // 0x10(0x4)
		float Steering; // 0x14(0x4)
		float SteerAngle; // 0x18(0x4)
		float TargetSpeed; // 0x1C(0x4)
		float BaseTargetSpeed; // 0x20(0x4)
		float NormalizedForwardSpeed; // 0x24(0x4)
		float NormalizedBonusSpeed; // 0x28(0x4)
		EDelMarVehicleForwardState VehicleForwardState; // 0x2C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		float BonusSpeed; // 0x30(0x4)
		float WorldAppliedBonusSpeed; // 0x34(0x4)
		FDelMarVehicleLandingData LandingData; // 0x38(0xC)
		bool bLanded; // 0x44(0x1)
		bool bSkydiving; // 0x45(0x1)
		EDelMarVehicleDriftState DriftState; // 0x46(0x1)
		bool bDriftControlled; // 0x47(0x1)
		float DriftAngle; // 0x48(0x4)
		float DriftSlipAngleRatio; // 0x4C(0x4)
		float DriftTargetSide; // 0x50(0x4)
		float DriftDuration; // 0x54(0x4)
		bool bDriftBoostInRange; // 0x58(0x1)
		bool bDriftBoostLosingAppliedBonusSpeed; // 0x59(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x5A(0x2) UNKNOWN PROPERTY
		float DriftBoostPotentialPercentage; // 0x5C(0x4)
		float DriftBoostAppliedBonusSpeed; // 0x60(0x4)
		float DriftBoostQueuedBonusSpeed; // 0x64(0x4)
		float DraftingAppliedBonusSpeed; // 0x68(0x4)
		float DraftingMaxBonusSpeedPercentage; // 0x6C(0x4)
		float DraftingTargetDegrees; // 0x70(0x4)
		float DraftingCurrentBonusSpeedPercentage; // 0x74(0x4)
		bool bHasValidDraftingTarget; // 0x78(0x1)
		EDelmarDraftingState DraftingState; // 0x79(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x7A(0x2) UNKNOWN PROPERTY
		float OversteerAccumulationPercentage; // 0x7C(0x4)
		bool bStartlineBoostActive; // 0x80(0x1)
		bool bFailedStartlineBoost; // 0x81(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x82(0x2) UNKNOWN PROPERTY
		float PercentageMaxBonusSpeedEarned; // 0x84(0x4)
		float StartlineBoostAppliedBonusSpeed; // 0x88(0x4)
		float MaxEarnedBonusSpeed; // 0x8C(0x4)
		bool bLeftStrafe; // 0x90(0x1)
		bool bStrafeActive; // 0x91(0x1)
		bool bStrafeDisabled; // 0x92(0x1)
		bool bCanStrafeBeActivated; // 0x93(0x1)
		float StrafeCooldownPercentage; // 0x94(0x4)
		bool bTurboActive; // 0x98(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x99(0x3) UNKNOWN PROPERTY
		float NumCurrentCharges; // 0x9C(0x4)
		float NumMaxCharges; // 0xA0(0x4)
		EDelMarTurboZoneState BonusZoneState; // 0xA4(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xA5(0x3) UNKNOWN PROPERTY
		float PercentageTurboActiveTimeRemaining; // 0xA8(0x4)
		float RemainingTurboActiveSeconds; // 0xAC(0x4)
		float TurboAppliedBonusSpeed; // 0xB0(0x4)
		float TurboBonusZoneBonusSpeed; // 0xB4(0x4)
		float TurboAdditionalActiveSeconds; // 0xB8(0x4)
		bool bKickflipActive; // 0xBC(0x1)
		bool bKickflipLeftSide; // 0xBD(0x1)
		bool bKickflipSuctionActive; // 0xBE(0x1)
		unsigned char UnknownData07_6[0x1]; // 0xBF(0x1) UNKNOWN PROPERTY
		float DistanceToSuctionSurface; // 0xC0(0x4)
		float KickflipDuration; // 0xC4(0x4)
		int32_t KickflipActivationCharges; // 0xC8(0x4)
		bool bReattachmentActive; // 0xCC(0x1)
		unsigned char UnknownData08_6[0x3]; // 0xCD(0x3) UNKNOWN PROPERTY
		FVector ReattachmentDirection; // 0xD0(0x18)
		bool bUnderthrustActive; // 0xE8(0x1)
		unsigned char UnknownData09_6[0x3]; // 0xE9(0x3) UNKNOWN PROPERTY
		float UnderthrustPercentageTankRemaining; // 0xEC(0x4)
		float UnderthrustActiveDuration; // 0xF0(0x4)
		bool bJumpActive; // 0xF4(0x1)
		bool bAirFreestyleActive; // 0xF5(0x1)
		bool bVehicleDemolished; // 0xF6(0x1)
		unsigned char UnknownData10_6[0x1]; // 0xF7(0x1) UNKNOWN PROPERTY
		FGameplayTag DemolishCausedByTag; // 0xF8(0x4)
		bool bInvulnerabilityActive; // 0xFC(0x1)
		bool bVehicleSpawnedThisFrame; // 0xFD(0x1)
		bool bFirstVehicleForPlayer; // 0xFE(0x1)
		bool bPreviousVehicleDemolished; // 0xFF(0x1)
		bool bHeadlightsActive; // 0x100(0x1)
		unsigned char UnknownData11_7[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCosmetics.DelMarPreviousPreviewConfigs
	// Size: 0x38 (0x38 - 0x0)
	struct FDelMarPreviousPreviewConfigs	
	{
	public:
		unsigned char UnknownData00_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct DelMarCosmetics.DelMarPreviewCustomization
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarPreviewCustomization	
	{
	public:
		FGameplayTag SlotTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FCosmeticCustomizationInfo> CustomizationInfo; // 0x8(0x10)
	};

}
