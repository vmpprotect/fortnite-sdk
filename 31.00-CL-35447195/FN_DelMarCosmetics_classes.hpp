#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarCosmetics
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DelMarCosmetics.DelMarDriverCosmeticPlayerComponent
	// Inherited from UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x40 (0xE0 - 0xA0)
	class UDelMarDriverCosmeticPlayerComponent : public UPlayerStateComponent	
	{
	public:
		unsigned char UnknownData01_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		TArray SequenceBindingTags; // 0xB8(0x10)
		FDelMarDriverCosmeticData CosmeticData; // 0xC8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarDriverCosmeticPlayerComponent");
			return ret;
		}

		void On_RepCosmeticData(); // Flags: Final|Native|Protected 0x7FF414DCA560
		void HandlePlayerControllerLoadoutChanged(FCosmeticLoadout& Loadout); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DCA480
		void HandleBotControllerLoadoutChanged(ADelMarAIController AIController, FFortAthenaLoadout& Loadout); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DCA3A0
	};


	// Class DelMarCosmetics.DelMarCosmeticsSettings
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UDelMarCosmeticsSettings : public UPrimaryDataAsset	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		TArray RandomCharacters; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarCosmeticsSettings");
			return ret;
		}
	};


	// Class DelMarCosmetics.DelMarPreviewVehicle
	// Inherited from AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x6B0 (0x2730 - 0x2080)
	class ADelMarPreviewVehicle : public AFortAthenaVehicle	
	{
	public:
		unsigned char UnknownData07_3[0x8]; // 0x2080(0x8) UNKNOWN PROPERTY
		FCosmeticLoadout PreviewLoadout; // 0x2088(0x10)
		TArray PreviewCustomizations; // 0x2098(0x10)
		UDelMarVehicleCosmeticComponent CosmeticComponent; // 0x20A8(0x8)
		FDelMarPreviewConfigs PreviewConfigs; // 0x20B0(0x108)
		unsigned char UnknownData08_6[0x88]; // 0x21B8(0x88) UNKNOWN PROPERTY
		TArray SpringTravelOffset; // 0x2240(0x10)
		FDelMarBouncyChassisState BouncyChassisConfig; // 0x2250(0xC)
		unsigned char UnknownData09_6[0x4]; // 0x225C(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnVehicleForwardStateChanged; // 0x2260(0x10)
		unsigned char UnknownData10_6[0x40]; // 0x2270(0x40) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnDelMarVehicleHitWall; // 0x22B0(0x10)
		FMulticastInlineDelegate OnDelMarVehicleHitVehicle; // 0x22C0(0x10)
		FMulticastInlineDelegate OnDelMarVehicleHitByVehicle; // 0x22D0(0x10)
		unsigned char UnknownData11_6[0x398]; // 0x22E0(0x398) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHazardHit; // 0x2678(0x10)
		FMulticastInlineDelegate OnVehicleTeleportEntered; // 0x2688(0x10)
		FMulticastInlineDelegate OnVehicleTeleportExit; // 0x2698(0x10)
		FMulticastInlineDelegate OnVehicleAppliedTeleportRotation; // 0x26A8(0x10)
		FMulticastInlineDelegate OnEnvironmentEffectCueActivated; // 0x26B8(0x10)
		FMulticastInlineDelegate OnEnvironmentEffectCueRemoved; // 0x26C8(0x10)
		unsigned char UnknownData12_6[0x30]; // 0x26D8(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHeadlightsChanged; // 0x2708(0x10)
		unsigned char UnknownData13_7[0x18]; // 0x2718(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarPreviewVehicle");
			return ret;
		}

		bool IsWheelOnGround(EDelMarVehicleWheelIndex WheelIndex); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DC8260
		FDelMarBouncyChassisState GetBouncyChassisConfig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DC8180
		void BroadcastVehicleDemolished(FGameplayTag DemolishCausedByTag); // Flags: Native|Public|BlueprintCallable 0x7FF414DC80A0
		void ApplyPreviewLoadout(); // Flags: Final|Native|Protected 0x7FF414DC7FC0
	};


	// Class DelMarCosmetics.DelMarGaragePreviewVehicle
	// Inherited from ADelMarPreviewVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x200 (0x2930 - 0x2730)
	class ADelMarGaragePreviewVehicle : public ADelMarPreviewVehicle	
	{
	public:
		FMulticastInlineDelegate OnActiveCameraUpdatedDelegate; // 0x2730(0x10)
		FMulticastInlineDelegate OnRotationTransitionStateChanged; // 0x2740(0x10)
		USceneComponent PreviewPivotComponent; // 0x2750(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x2758(0x8) UNKNOWN PROPERTY
		UCameraComponent ActiveCameraComponent; // 0x2760(0x8)
		UCameraComponent DefaultZoomInCameraComponent; // 0x2768(0x8)
		UCameraComponent DefaultZoomOutCameraComponent; // 0x2770(0x8)
		unsigned char UnknownData05_6[0xA0]; // 0x2778(0xA0) UNKNOWN PROPERTY
		TMap SlotPreviewRotations; // 0x2818(0x50)
		TMap SlotPreviewConfigs; // 0x2868(0x50)
		float ZoomLevel; // 0x28B8(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x28BC(0x4) UNKNOWN PROPERTY
		FRotator UserRotationOffset; // 0x28C0(0x18)
		FGameplayTag PreviewSlot; // 0x28D8(0x4)
		FGameplayTag PreviewVehicleTag; // 0x28DC(0x4)
		float RotationTransitionTime; // 0x28E0(0x4)
		unsigned char UnknownData07_7[0x4C]; // 0x28E4(0x4C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarGaragePreviewVehicle");
			return ret;
		}

		void UpdateActiveCamera(); // Flags: Native|Protected 0x7FF414DC8B20
		void SetZoomLevel(float InZoomLevel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DC8A40
		void SetUserRotationOffset(FRotator& InRotationOffset); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414DC8960
		void SetPreviewSlot(FGameplayTag& InSlot); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DC8880
		void ResetPreviewToCurrentLoadout(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DC87A0
		void PreviewLoadout(FDelMarLoadout& Loadout); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DC86C0
		void PreviewItem(UDelMarCosmeticItemDefinition Item); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DC85E0
		void K2_OnActiveCameraUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DC8500
		bool IsRotationTransitioning(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DC8420
		FRotator GetRotationOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414DC8340
	};


	// Class DelMarCosmetics.DelMarParamOverrideCosmeticActor
	// Inherited from ADelMarCosmeticActor -> AActor -> UObject
	// Size: 0x50 (0x318 - 0x2C8)
	class ADelMarParamOverrideCosmeticActor : public ADelMarCosmeticActor	
	{
	public:
		TMap CosmeticActorsParamterOverrides; // 0x2C8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarParamOverrideCosmeticActor");
			return ret;
		}
	};


	// Class DelMarCosmetics.DelMarPreviewCameraComponent
	// Inherited from UCameraComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x9E0 - 0x9D0)
	class UDelMarPreviewCameraComponent : public UCameraComponent	
	{
	public:
		FGameplayTag PreviewSlot; // 0x9D0(0x4)
		EDelMarPreviewCameraType PreviewType; // 0x9D4(0x1)
		unsigned char UnknownData01_7[0xB]; // 0x9D5(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarPreviewCameraComponent");
			return ret;
		}
	};


	// Class DelMarCosmetics.DelMarPreviewPivot
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ADelMarPreviewPivot : public AActor	
	{
	public:
		USceneComponent SceneComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarPreviewPivot");
			return ret;
		}
	};


	// Class DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor
	// Inherited from ADelMarCosmeticActor -> AActor -> UObject
	// Size: 0x2C8 (0x590 - 0x2C8)
	class ADelMarUnifiedVehicleCosmeticActor : public ADelMarCosmeticActor	
	{
	public:
		TArray CachedSideBoosters; // 0x2C8(0x10)
		unsigned char UnknownData07_6[0x4]; // 0x2D8(0x4) UNKNOWN PROPERTY
		FName SideBoosterParam_Scale; // 0x2DC(0x4)
		TArray Boosters; // 0x2E0(0x10)
		FDelMarVehicleUnderthrustVfxData UnderthrustVfxData; // 0x2F0(0x38)
		unsigned char UnknownData08_6[0x50]; // 0x328(0x50) UNKNOWN PROPERTY
		USkeletalMeshComponent BodySkeletalMeshComponent; // 0x378(0x8)
		FAudioGameplayBehaviorInstance KickflipAudioBehavior; // 0x380(0x10)
		FAudioGameplayBehaviorInstance JumpAudioBehavior; // 0x390(0x10)
		UNiagaraComponent JumpFX; // 0x3A0(0x8)
		UNiagaraComponent SuperSonicFX; // 0x3A8(0x8)
		UMaterialInterface SuperSonicRadialBlurMaterial; // 0x3B0(0x8)
		UMaterialInstanceDynamic SuperSonicRadialBlurMID; // 0x3B8(0x8)
		float SuperSonicBlurOffset; // 0x3C0(0x4)
		float SuperSonicForwardSpeedMin; // 0x3C4(0x4)
		float SuperSonicForwardSpeedMax; // 0x3C8(0x4)
		FName SuperSonicParam_Spawn; // 0x3CC(0x4)
		FName RadialBlurParam_Offset; // 0x3D0(0x4)
		FName RadialBlurParam_Transition; // 0x3D4(0x4)
		unsigned char UnknownData09_6[0x8]; // 0x3D8(0x8) UNKNOWN PROPERTY
		FAudioGameplayBehaviorInstance DraftingAudioBehavior; // 0x3E0(0x10)
		UNiagaraComponent DraftingFX; // 0x3F0(0x8)
		FName DraftingParam_Spawn; // 0x3F8(0x4)
		FName DraftingParam_SpeedGain; // 0x3FC(0x4)
		FName DraftingParam_Amount; // 0x400(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x404(0x4) UNKNOWN PROPERTY
		FAudioGameplayBehaviorInstance WorldBonusSpeedAudioBehavior; // 0x408(0x10)
		FName WBSGroupEvent_OnBonusSpeedActivated; // 0x418(0x4)
		FName WBSGroupEvent_OnBonusSpeedDeactivated; // 0x41C(0x4)
		FName WBSGroupEvent_OnWorldBonusSpeedStackGained; // 0x420(0x4)
		FGameplayTag DemolishTag_RaceFinished; // 0x424(0x4)
		FAudioGameplayBehaviorInstance RespawnAudioBehavior; // 0x428(0x10)
		FAudioGameplayBehaviorInstance DespawnAudioBehavior; // 0x438(0x10)
		UNiagaraComponent TaillightTrailFX_Left; // 0x448(0x8)
		UNiagaraComponent TaillightTrailFX_Right; // 0x450(0x8)
		FName TaillightTrailSocket_Left; // 0x458(0x4)
		FName TaillightTrailSocket_Right; // 0x45C(0x4)
		float TaillightTrail_MinForwardSpeed; // 0x460(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x464(0x4) UNKNOWN PROPERTY
		UNiagaraComponent TeleportFx; // 0x468(0x8)
		UNiagaraSystem TeleportEnterSystem; // 0x470(0x8)
		UNiagaraSystem TeleportExitSystem; // 0x478(0x8)
		UNiagaraComponent EnvironmentFx; // 0x480(0x8)
		unsigned char UnknownData12_6[0x20]; // 0x488(0x20) UNKNOWN PROPERTY
		FAudioGameplayBehaviorInstance UnderthrustAudioBehavior; // 0x4A8(0x10)
		FAudioGameplayBehaviorInstance WheelsAudioBehavior; // 0x4B8(0x10)
		FName FrontLeftWheelContactBone; // 0x4C8(0x4)
		FName FrontRightWheelContactBone; // 0x4CC(0x4)
		FName BackRightWheelContactBone; // 0x4D0(0x4)
		FName BackLeftWheelContactBone; // 0x4D4(0x4)
		TArray WheelInfos; // 0x4D8(0x10)
		unsigned char UnknownData13_6[0xA0]; // 0x4E8(0xA0) UNKNOWN PROPERTY
		float FxSideSpeedThreshold; // 0x588(0x4)
		float FxForwardSpeedThreshold; // 0x58C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor");
			return ret;
		}

		bool ShouldTriggerFX(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCA2C0
		void RemoveBoosterActivationFlags(FName Name); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DCA1E0
		void OnWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks); // Flags: Final|Native|Protected 0x7FF414DCA100
		void OnVehicleLanded(float LandingForce, bool bLandedKickflip); // Flags: Final|Native|Protected 0x7FF414DCA020
		void OnVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Protected 0x7FF414DC9F40
		void OnUnderthrustDeactivated(); // Flags: Final|Native|Protected 0x7FF414DC9E60
		void OnUnderthrustActivated(); // Flags: Final|Native|Protected 0x7FF414DC9D80
		void OnTeleportExited(); // Flags: Final|Native|Protected 0x7FF414DC9CA0
		void OnTeleportEntered(); // Flags: Final|Native|Protected 0x7FF414DC9BC0
		void OnKickflipDeactivated(); // Flags: Final|Native|Protected 0x7FF414DC9AE0
		void OnKickflipActivated(bool bLeftSide); // Flags: Final|Native|Protected 0x7FF414DC9A00
		void OnJumpActivated(); // Flags: Final|Native|Protected 0x7FF414DC9920
		void OnEnvironmentEffectCueRemoved(); // Flags: Final|Native|Protected 0x7FF414DC9840
		void OnEnvironmentEffectCueActivated(FDelMarEnvironmentVFX& Effect); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DC9760
		void OnDriftKickDeactivated(); // Flags: Final|Native|Protected 0x7FF414DC9680
		void OnDriftKickActivated(float DriftDirection, EDelMarVehicleDriftState DriftState); // Flags: Final|Native|Protected 0x7FF414DC95A0
		void OnDriftDurationChanged(float duration); // Flags: Final|Native|Protected 0x7FF414DC94C0
		void OnDriftDeactivated(); // Flags: Final|Native|Protected 0x7FF414DC93E0
		void OnDraftStateChanged(EDelmarDraftingState CurrentState); // Flags: Final|Native|Protected 0x7FF414DC9300
		void OnBonusSpeedDeactivated(); // Flags: Final|Native|Protected 0x7FF414DC9220
		void OnBonusSpeedActivated(); // Flags: Final|Native|Protected 0x7FF414DC9140
		void InitializeUnderthrustVfxSockets(); // Flags: Final|Native|Protected 0x7FF414DC9060
		void HandleOnRemovedSystemFinished(UNiagaraComponent System); // Flags: Final|Native|Protected 0x7FF414DC8F80
		void HandleOnAppliedSystemFinished(UNiagaraComponent System); // Flags: Final|Native|Protected 0x7FF414DC8EA0
		FName GetWheelContactBoneName(EDelMarVehicleWheelIndex WheelIndex); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DC8DC0
		TArray GetBoosters(EDelMarVehicleBoosterFlags Flags); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DC8CE0
		void AddBoosterActivationFlags(EDelMarVehicleBoosterFlags Flags, FName Name); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DC8C00
	};


	// Class DelMarCosmetics.DelMarVehicleAnimInstance
	// Inherited from UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x248 (0x6F0 - 0x4A8)
	class UDelMarVehicleAnimInstance : public UFortBaseAnimInstance	
	{
	public:
		FDelMarBouncyChassisState BouncyChassis; // 0x4A8(0xC)
		unsigned char UnknownData04_6[0x4]; // 0x4B4(0x4) UNKNOWN PROPERTY
		FDelMarBouncyChassisSetup BouncyChassisSetup; // 0x4B8(0x58)
		float BouncyChassisBlendRate; // 0x510(0x4)
		float VisualSteerAngleInterpRate; // 0x514(0x4)
		float WheelLerpSpeed; // 0x518(0x4)
		float SuspensionInterpRate; // 0x51C(0x4)
		float AirSpinAccel; // 0x520(0x4)
		float AirSpinBrake; // 0x524(0x4)
		float AirSpinDecayRate; // 0x528(0x4)
		FDelMarVehicleAnimInfo VehicleInfo; // 0x52C(0x8)
		bool bThrottling; // 0x534(0x1)
		bool bReversing; // 0x535(0x1)
		bool bAccelerating; // 0x536(0x1)
		bool bBraking; // 0x537(0x1)
		float Throttle; // 0x538(0x4)
		float Steering; // 0x53C(0x4)
		float SteeringAngle; // 0x540(0x4)
		bool bWheelsOnGround; // 0x544(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x545(0x3) UNKNOWN PROPERTY
		float ForwardSpeed; // 0x548(0x4)
		bool bDriftBoostActive; // 0x54C(0x1)
		bool bUnderthrustActive; // 0x54D(0x1)
		bool bDriftActive; // 0x54E(0x1)
		bool bKickflipActive; // 0x54F(0x1)
		bool bJumpActive; // 0x550(0x1)
		bool bTurboActive; // 0x551(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x552(0x2) UNKNOWN PROPERTY
		FDelMarVehicleWheelAnimInfo WheelInfoFR; // 0x554(0x1C)
		FDelMarVehicleWheelAnimInfo WheelInfoFL; // 0x570(0x1C)
		FDelMarVehicleWheelAnimInfo WheelInfoBR; // 0x58C(0x1C)
		FDelMarVehicleWheelAnimInfo WheelInfoBL; // 0x5A8(0x1C)
		unsigned char UnknownData07_7[0x12C]; // 0x5C4(0x12C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarVehicleAnimInstance");
			return ret;
		}
	};


	// Class DelMarCosmetics.DelMarWheelAnimInstance
	// Inherited from UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x28 (0x4D0 - 0x4A8)
	class UDelMarWheelAnimInstance : public UFortBaseAnimInstance	
	{
	public:
		unsigned char UnknownData01_3[0x1C]; // 0x4A8(0x1C) UNKNOWN PROPERTY
		float SpinDegrees; // 0x4C4(0x4)
		UDelMarVehicleAnimInstance ParentAnimInstance; // 0x4C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarWheelAnimInstance");
			return ret;
		}
	};


	// Class DelMarCosmetics.DelMarBodyCosmeticActor
	// Inherited from ADelMarCosmeticActor -> AActor -> UObject
	// Size: 0x98 (0x360 - 0x2C8)
	class ADelMarBodyCosmeticActor : public ADelMarCosmeticActor	
	{
	public:
		TArray FrontLeftWheelsBoneNames; // 0x2C8(0x10)
		TArray FrontRightWheelsBoneNames; // 0x2D8(0x10)
		TArray BackRightWheelsBoneNames; // 0x2E8(0x10)
		unsigned char UnknownData01_7[0x68]; // 0x2F8(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarBodyCosmeticActor");
			return ret;
		}

		TArray GetWheelSetups(EDelMarVehicleWheelIndex WheelIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCB0C0
		FVector GetWheelCosmeticActorOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414DCAFE0
		USkeletalMesh GetSkeletalMesh(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCAF00
		TArray GetRightBoostersInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCAE20
		UPhysicsAsset GetPhysicsAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCAD40
		TArray GetLeftBoostersInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCAC60
		TArray GetFrontRightWheelsBoneNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCAB80
		TArray GetFrontLeftWheelsBoneNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCAAA0
		UNiagaraComponent GetBoosterBySocketName(FName& SocketName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414DCA9C0
		UDelMarVehicleBodySetup GetBodySetup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCA8E0
		TArray GetBackRightWheelsBoneNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCA800
		TArray GetBackLeftWheelsBoneNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCA720
		UClass GetAnimInstanceClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCA640
	};


	// Class DelMarCosmetics.DelMarBoosterCosmeticActor
	// Inherited from ADelMarCosmeticActor -> AActor -> UObject
	// Size: 0x30 (0x2F8 - 0x2C8)
	class ADelMarBoosterCosmeticActor : public ADelMarCosmeticActor	
	{
	public:
		UNiagaraSystem BoosterFx; // 0x2C8(0x8)
		TArray LeftBoosters; // 0x2D0(0x10)
		TArray RightBoosters; // 0x2E0(0x10)
		USkeletalMeshComponent BodySkeletalMeshComponent; // 0x2F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarBoosterCosmeticActor");
			return ret;
		}

		void SetRightBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DCB600
		void SetLeftBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DCB520
		void SetAllBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DCB440
		TArray GetRightBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCB360
		TArray GetLeftBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCB280
		TArray GetAllBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCB1A0
	};


	// Class DelMarCosmetics.DelMarEngineAudioCosmeticActor
	// Inherited from ADelMarCosmeticActor -> AActor -> UObject
	// Size: 0x48 (0x310 - 0x2C8)
	class ADelMarEngineAudioCosmeticActor : public ADelMarCosmeticActor	
	{
	public:
		FAudioGameplayBehaviorInstance EngineAudio; // 0x2C8(0x10)
		float NonLocalVelocityInterpSpeed; // 0x2D8(0x4)
		bool bDisabled; // 0x2DC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x2DD(0x3) UNKNOWN PROPERTY
		UAudioComponentGroup ComponentGroup; // 0x2E0(0x8)
		UAudioMotorModelComponent MotorModel; // 0x2E8(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x2F0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarEngineAudioCosmeticActor");
			return ret;
		}

		UAudioComponentGroup GetComponentGroup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCB6E0
	};


	// Class DelMarCosmetics.DelMarWheelContactFxCosmeticActor
	// Inherited from ADelMarCosmeticActor -> AActor -> UObject
	// Size: 0xE0 (0x3A8 - 0x2C8)
	class ADelMarWheelContactFxCosmeticActor : public ADelMarCosmeticActor	
	{
	public:
		FAudioGameplayBehaviorInstance WheelSounds; // 0x2C8(0x10)
		float FxSideSpeedThreshold; // 0x2D8(0x4)
		float FxForwardSpeedThreshold; // 0x2DC(0x4)
		UPhysicalMaterial ContactMaterial; // 0x2E0(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY
		TArray WheelInfos; // 0x2F0(0x10)
		FName FrontLeftWheelContactBone; // 0x300(0x4)
		FName FrontRightWheelContactBone; // 0x304(0x4)
		FName BackRightWheelContactBone; // 0x308(0x4)
		FName BackLeftWheelContactBone; // 0x30C(0x4)
		unsigned char UnknownData03_7[0x98]; // 0x310(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarWheelContactFxCosmeticActor");
			return ret;
		}

		void HandleVehicleLanded(float LandingForce, bool bLandedKickflip); // Flags: Final|Native|Protected 0x7FF414DCBA60
		FName GetWheelContactBoneName(EDelMarVehicleWheelIndex WheelIndex); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DCB980
		UAudioGameplayBehavior GetAudioBehavior(); // Flags: Final|BlueprintCosmetic|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DCB8A0
		void BP_UpdateWheelContactFx(FDelMarVehicleCosmeticWheelInfo WheelInfo, bool bActive, float AbsForwardSpeed, float AbsSideSpeed); // Flags: Event|Protected|BlueprintEvent 0x7FF414DCB7C0
	};


	// Class DelMarCosmetics.DelMarCosmeticActorSpawnLogic_Wheel
	// Inherited from UDelMarCosmeticActorSpawnLogic -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDelMarCosmeticActorSpawnLogic_Wheel : public UDelMarCosmeticActorSpawnLogic	
	{
	public:
		bool bFrontWheel; // 0x28(0x1)
		bool bBackWheel; // 0x29(0x1)
		EDelMarWheelAttachPoint AttachPoint; // 0x2A(0x1)
		EDelMarWheelMirrorType MirrorType; // 0x2B(0x1)
		bool bOnlyFxEligibleWheels; // 0x2C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarCosmeticActorSpawnLogic_Wheel");
			return ret;
		}
	};


	// Class DelMarCosmetics.DelMarWheelsCosmeticActor
	// Inherited from ADelMarCosmeticActor -> AActor -> UObject
	// Size: 0x8 (0x2D0 - 0x2C8)
	class ADelMarWheelsCosmeticActor : public ADelMarCosmeticActor	
	{
	public:
		EDelMarVehicleWheelIndex WheelIndex; // 0x2C8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x2C9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarWheelsCosmeticActor");
			return ret;
		}

		bool IsWheelOnGround(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCC080
		bool IsRightWheel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCBFA0
		bool IsMirrored(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCBEC0
		bool IsLeftWheel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCBDE0
		bool IsFrontWheel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCBD00
		bool IsBackWheel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCBC20
		EDelMarWheelMirrorType GetMirrorType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCBB40
	};


	// Class DelMarCosmetics.DelMarWheelSKCosmeticActor
	// Inherited from ADelMarWheelsCosmeticActor -> ADelMarCosmeticActor -> AActor -> UObject
	// Size: 0x8 (0x2D8 - 0x2D0)
	class ADelMarWheelSKCosmeticActor : public ADelMarWheelsCosmeticActor	
	{
	public:
		USkeletalMeshComponent SkeletalMeshComponent; // 0x2D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarWheelSKCosmeticActor");
			return ret;
		}
	};

}
