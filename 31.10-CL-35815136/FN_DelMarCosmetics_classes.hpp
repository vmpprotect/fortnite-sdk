#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarCosmetics
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DelMarCosmetics.DelMarDriverCosmeticPlayerComponent
	// Inherited from UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x40 (0xE0 - 0xA0)
	class UDelMarDriverCosmeticPlayerComponent : public UPlayerStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		TArray<FName> SequenceBindingTags; // 0xB8(0x10)
		FDelMarDriverCosmeticData CosmeticData; // 0xC8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarDriverCosmeticPlayerComponent");
			return ret;
		}

		void On_RepCosmeticData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3D28(relative to base address)
		void HandlePlayerControllerLoadoutChanged(FCosmeticLoadout& Loadout); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7518B32B8(relative to base address)
		void HandleBotControllerLoadoutChanged(ADelMarAIController* AIController, FFortAthenaLoadout& Loadout); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7518B30B0(relative to base address)
	};


	// Class DelMarCosmetics.DelMarPreviewVehicle
	// Inherited from AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x6B0 (0x2730 - 0x2080)
	class ADelMarPreviewVehicle : public AFortAthenaVehicle	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2080(0x8) UNKNOWN PROPERTY
		FCosmeticLoadout PreviewLoadout; // 0x2088(0x10)
		TArray<FDelMarPreviewCustomization> PreviewCustomizations; // 0x2098(0x10)
		UDelMarVehicleCosmeticComponent* CosmeticComponent; // 0x20A8(0x8)
		FDelMarPreviewConfigs PreviewConfigs; // 0x20B0(0x108)
		unsigned char UnknownData01_6[0x88]; // 0x21B8(0x88) UNKNOWN PROPERTY
		TArray<float> SpringTravelOffset; // 0x2240(0x10)
		FDelMarBouncyChassisState BouncyChassisConfig; // 0x2250(0xC)
		unsigned char UnknownData02_6[0x4]; // 0x225C(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnVehicleForwardStateChanged; // 0x2260(0x10)
		unsigned char UnknownData03_6[0x40]; // 0x2270(0x40) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnDelMarVehicleHitWall; // 0x22B0(0x10)
		FMulticastInlineDelegate OnDelMarVehicleHitVehicle; // 0x22C0(0x10)
		FMulticastInlineDelegate OnDelMarVehicleHitByVehicle; // 0x22D0(0x10)
		unsigned char UnknownData04_6[0x398]; // 0x22E0(0x398) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHazardHit; // 0x2678(0x10)
		FMulticastInlineDelegate OnVehicleTeleportEntered; // 0x2688(0x10)
		FMulticastInlineDelegate OnVehicleTeleportExit; // 0x2698(0x10)
		FMulticastInlineDelegate OnVehicleAppliedTeleportRotation; // 0x26A8(0x10)
		FMulticastInlineDelegate OnEnvironmentEffectCueActivated; // 0x26B8(0x10)
		FMulticastInlineDelegate OnEnvironmentEffectCueRemoved; // 0x26C8(0x10)
		unsigned char UnknownData05_6[0x30]; // 0x26D8(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHeadlightsChanged; // 0x2708(0x10)
		unsigned char UnknownData06_7[0x18]; // 0x2718(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarPreviewVehicle");
			return ret;
		}

		bool IsWheelOnGround(EDelMarVehicleWheelIndex WheelIndex); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B34E4(relative to base address)
		FDelMarBouncyChassisState GetBouncyChassisConfig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B2994(relative to base address)
		void BroadcastVehicleDemolished(FGameplayTag DemolishCausedByTag); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518B24A8(relative to base address)
		void ApplyPreviewLoadout(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B2494(relative to base address)
	};


	// Class DelMarCosmetics.DelMarGaragePreviewVehicle
	// Inherited from ADelMarPreviewVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x200 (0x2930 - 0x2730)
	class ADelMarGaragePreviewVehicle : public ADelMarPreviewVehicle	
	{
	public:
		FMulticastInlineDelegate OnActiveCameraUpdatedDelegate; // 0x2730(0x10)
		FMulticastInlineDelegate OnRotationTransitionStateChanged; // 0x2740(0x10)
		USceneComponent* PreviewPivotComponent; // 0x2750(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x2758(0x8) UNKNOWN PROPERTY
		UCameraComponent* ActiveCameraComponent; // 0x2760(0x8)
		UCameraComponent* DefaultZoomInCameraComponent; // 0x2768(0x8)
		UCameraComponent* DefaultZoomOutCameraComponent; // 0x2770(0x8)
		unsigned char UnknownData01_6[0xA0]; // 0x2778(0xA0) UNKNOWN PROPERTY
		TMap<FGameplayTag, FRotator> SlotPreviewRotations; // 0x2818(0x50)
		TMap<FGameplayTag, FDelMarPreviewConfigs> SlotPreviewConfigs; // 0x2868(0x50)
		float ZoomLevel; // 0x28B8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x28BC(0x4) UNKNOWN PROPERTY
		FRotator UserRotationOffset; // 0x28C0(0x18)
		FGameplayTag PreviewSlot; // 0x28D8(0x4)
		FGameplayTag PreviewVehicleTag; // 0x28DC(0x4)
		float RotationTransitionTime; // 0x28E0(0x4)
		unsigned char UnknownData03_7[0x4C]; // 0x28E4(0x4C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarGaragePreviewVehicle");
			return ret;
		}

		void UpdateActiveCamera(); // Flags: Native|Protected, Memory Exec: 0x7FF74F4563F4(relative to base address)
		void SetZoomLevel(float InZoomLevel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518B4638(relative to base address)
		void SetUserRotationOffset(FRotator& InRotationOffset); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7518B4568(relative to base address)
		void SetPreviewSlot(FGameplayTag& InSlot); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7518B42E8(relative to base address)
		void ResetPreviewToCurrentLoadout(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void PreviewLoadout(FDelMarLoadout& Loadout); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7518B3DCC(relative to base address)
		void PreviewItem(UDelMarCosmeticItemDefinition* Item); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518B3D44(relative to base address)
		void K2_OnActiveCameraUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsRotationTransitioning(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B34CC(relative to base address)
		FRotator GetRotationOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B2E08(relative to base address)
	};


	// Class DelMarCosmetics.DelMarParamOverrideCosmeticActor
	// Inherited from ADelMarCosmeticActor -> AActor -> UObject
	// Size: 0x50 (0x318 - 0x2C8)
	class ADelMarParamOverrideCosmeticActor : public ADelMarCosmeticActor	
	{
	public:
		TMap<UClass*, FDelMarParameterOverrides> CosmeticActorsParamterOverrides; // 0x2C8(0x50)

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
		unsigned char UnknownData00_7[0xB]; // 0x9D5(0xB) UNKNOWN PROPERTY

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
		USceneComponent* SceneComponent; // 0x290(0x8)

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
		TArray<UNiagaraComponent*> CachedSideBoosters; // 0x2C8(0x10)
		unsigned char UnknownData00_6[0x4]; // 0x2D8(0x4) UNKNOWN PROPERTY
		FName SideBoosterParam_Scale; // 0x2DC(0x4)
		TArray<FDelMarVehicleBooster> Boosters; // 0x2E0(0x10)
		FDelMarVehicleUnderthrustVfxData UnderthrustVfxData; // 0x2F0(0x38)
		unsigned char UnknownData01_6[0x50]; // 0x328(0x50) UNKNOWN PROPERTY
		USkeletalMeshComponent* BodySkeletalMeshComponent; // 0x378(0x8)
		FAudioGameplayBehaviorInstance KickflipAudioBehavior; // 0x380(0x10)
		FAudioGameplayBehaviorInstance JumpAudioBehavior; // 0x390(0x10)
		UNiagaraComponent* JumpFX; // 0x3A0(0x8)
		UNiagaraComponent* SuperSonicFX; // 0x3A8(0x8)
		UMaterialInterface* SuperSonicRadialBlurMaterial; // 0x3B0(0x8)
		UMaterialInstanceDynamic* SuperSonicRadialBlurMID; // 0x3B8(0x8)
		float SuperSonicBlurOffset; // 0x3C0(0x4)
		float SuperSonicForwardSpeedMin; // 0x3C4(0x4)
		float SuperSonicForwardSpeedMax; // 0x3C8(0x4)
		FName SuperSonicParam_Spawn; // 0x3CC(0x4)
		FName RadialBlurParam_Offset; // 0x3D0(0x4)
		FName RadialBlurParam_Transition; // 0x3D4(0x4)
		unsigned char UnknownData02_6[0x8]; // 0x3D8(0x8) UNKNOWN PROPERTY
		FAudioGameplayBehaviorInstance DraftingAudioBehavior; // 0x3E0(0x10)
		UNiagaraComponent* DraftingFX; // 0x3F0(0x8)
		FName DraftingParam_Spawn; // 0x3F8(0x4)
		FName DraftingParam_SpeedGain; // 0x3FC(0x4)
		FName DraftingParam_Amount; // 0x400(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x404(0x4) UNKNOWN PROPERTY
		FAudioGameplayBehaviorInstance WorldBonusSpeedAudioBehavior; // 0x408(0x10)
		FName WBSGroupEvent_OnBonusSpeedActivated; // 0x418(0x4)
		FName WBSGroupEvent_OnBonusSpeedDeactivated; // 0x41C(0x4)
		FName WBSGroupEvent_OnWorldBonusSpeedStackGained; // 0x420(0x4)
		FGameplayTag DemolishTag_RaceFinished; // 0x424(0x4)
		FAudioGameplayBehaviorInstance RespawnAudioBehavior; // 0x428(0x10)
		FAudioGameplayBehaviorInstance DespawnAudioBehavior; // 0x438(0x10)
		UNiagaraComponent* TaillightTrailFX_Left; // 0x448(0x8)
		UNiagaraComponent* TaillightTrailFX_Right; // 0x450(0x8)
		FName TaillightTrailSocket_Left; // 0x458(0x4)
		FName TaillightTrailSocket_Right; // 0x45C(0x4)
		float TaillightTrail_MinForwardSpeed; // 0x460(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x464(0x4) UNKNOWN PROPERTY
		UNiagaraComponent* TeleportFx; // 0x468(0x8)
		UNiagaraSystem* TeleportEnterSystem; // 0x470(0x8)
		UNiagaraSystem* TeleportExitSystem; // 0x478(0x8)
		UNiagaraComponent* EnvironmentFx; // 0x480(0x8)
		unsigned char UnknownData05_6[0x20]; // 0x488(0x20) UNKNOWN PROPERTY
		FAudioGameplayBehaviorInstance UnderthrustAudioBehavior; // 0x4A8(0x10)
		FAudioGameplayBehaviorInstance WheelsAudioBehavior; // 0x4B8(0x10)
		FName FrontLeftWheelContactBone; // 0x4C8(0x4)
		FName FrontRightWheelContactBone; // 0x4CC(0x4)
		FName BackRightWheelContactBone; // 0x4D0(0x4)
		FName BackLeftWheelContactBone; // 0x4D4(0x4)
		TArray<FDelMarVehicleCosmeticWheelInfo> WheelInfos; // 0x4D8(0x10)
		unsigned char UnknownData06_6[0xA0]; // 0x4E8(0xA0) UNKNOWN PROPERTY
		float FxSideSpeedThreshold; // 0x588(0x4)
		float FxForwardSpeedThreshold; // 0x58C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor");
			return ret;
		}

		bool ShouldTriggerFX(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B46B8(relative to base address)
		void RemoveBoosterActivationFlags(FName Name); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518B3E84(relative to base address)
		void OnWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3B54(relative to base address)
		void OnVehicleLanded(float LandingForce, bool bLandedKickflip); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3A8C(relative to base address)
		void OnVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B397C(relative to base address)
		void OnUnderthrustDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3968(relative to base address)
		void OnUnderthrustActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3954(relative to base address)
		void OnTeleportExited(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3940(relative to base address)
		void OnTeleportEntered(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B392C(relative to base address)
		void OnKickflipDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3914(relative to base address)
		void OnKickflipActivated(bool bLeftSide); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3894(relative to base address)
		void OnJumpActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3880(relative to base address)
		void OnEnvironmentEffectCueRemoved(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B386C(relative to base address)
		void OnEnvironmentEffectCueActivated(FDelMarEnvironmentVFX& Effect); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7518B37D8(relative to base address)
		void OnDriftKickDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B367C(relative to base address)
		void OnDriftKickActivated(float DriftDirection, EDelMarVehicleDriftState DriftState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3714(relative to base address)
		void OnDriftDurationChanged(float duration); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3694(relative to base address)
		void OnDriftDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B367C(relative to base address)
		void OnDraftStateChanged(EDelmarDraftingState CurrentState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B35FC(relative to base address)
		void OnBonusSpeedDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B35E8(relative to base address)
		void OnBonusSpeedActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B35D4(relative to base address)
		void InitializeUnderthrustVfxSockets(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3440(relative to base address)
		void HandleOnRemovedSystemFinished(UNiagaraComponent* System); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3238(relative to base address)
		void HandleOnAppliedSystemFinished(UNiagaraComponent* System); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B31B8(relative to base address)
		FName GetWheelContactBoneName(EDelMarVehicleWheelIndex WheelIndex); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B2E80(relative to base address)
		TArray GetBoosters(EDelMarVehicleBoosterFlags Flags); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B28F0(relative to base address)
		void AddBoosterActivationFlags(EDelMarVehicleBoosterFlags Flags, FName Name); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518B23D0(relative to base address)
	};


	// Class DelMarCosmetics.DelMarVehicleAnimInstance
	// Inherited from UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x248 (0x6F0 - 0x4A8)
	class UDelMarVehicleAnimInstance : public UFortBaseAnimInstance	
	{
	public:
		FDelMarBouncyChassisState BouncyChassis; // 0x4A8(0xC)
		unsigned char UnknownData00_6[0x4]; // 0x4B4(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_6[0x3]; // 0x545(0x3) UNKNOWN PROPERTY
		float ForwardSpeed; // 0x548(0x4)
		bool bDriftBoostActive; // 0x54C(0x1)
		bool bUnderthrustActive; // 0x54D(0x1)
		bool bDriftActive; // 0x54E(0x1)
		bool bKickflipActive; // 0x54F(0x1)
		bool bJumpActive; // 0x550(0x1)
		bool bTurboActive; // 0x551(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x552(0x2) UNKNOWN PROPERTY
		FDelMarVehicleWheelAnimInfo WheelInfoFR; // 0x554(0x1C)
		FDelMarVehicleWheelAnimInfo WheelInfoFL; // 0x570(0x1C)
		FDelMarVehicleWheelAnimInfo WheelInfoBR; // 0x58C(0x1C)
		FDelMarVehicleWheelAnimInfo WheelInfoBL; // 0x5A8(0x1C)
		unsigned char UnknownData03_7[0x12C]; // 0x5C4(0x12C) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x1C]; // 0x4A8(0x1C) UNKNOWN PROPERTY
		float SpinDegrees; // 0x4C4(0x4)
		UDelMarVehicleAnimInstance* ParentAnimInstance; // 0x4C8(0x8)

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
		TArray<FDelMarVehicleWheelSetup> FrontLeftWheelsBoneNames; // 0x2C8(0x10)
		TArray<FDelMarVehicleWheelSetup> FrontRightWheelsBoneNames; // 0x2D8(0x10)
		TArray<FDelMarVehicleWheelSetup> BackRightWheelsBoneNames; // 0x2E8(0x10)
		TArray<FDelMarVehicleWheelSetup> BackLeftWheelsBoneNames; // 0x2F8(0x10)
		TArray<FDelMarVehicleBooster> LeftBoostersInfo; // 0x308(0x10)
		TArray<FDelMarVehicleBooster> RightBoostersInfo; // 0x318(0x10)
		USkeletalMesh* SkeletalMesh; // 0x328(0x8)
		UPhysicsAsset* PhysicsAsset; // 0x330(0x8)
		UClass* AnimInstanceClass; // 0x338(0x8)
		UDelMarVehicleBodySetup* BodySetup; // 0x340(0x8)
		FVector WheelContactFxOffset; // 0x348(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarBodyCosmeticActor");
			return ret;
		}

		TArray GetWheelSetups(EDelMarVehicleWheelIndex WheelIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B2FB8(relative to base address)
		FVector GetWheelCosmeticActorOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B2F90(relative to base address)
		USkeletalMesh GetSkeletalMesh(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F16D900(relative to base address)
		TArray GetRightBoostersInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B2DCC(relative to base address)
		UPhysicsAsset GetPhysicsAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74ECF68F8(relative to base address)
		TArray GetLeftBoostersInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B2BD0(relative to base address)
		TArray GetFrontRightWheelsBoneNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B29F8(relative to base address)
		TArray GetFrontLeftWheelsBoneNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B29BC(relative to base address)
		UNiagaraComponent GetBoosterBySocketName(FName& SocketName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B27FC(relative to base address)
		UDelMarVehicleBodySetup GetBodySetup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7496FE348(relative to base address)
		TArray GetBackRightWheelsBoneNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B27C0(relative to base address)
		TArray GetBackLeftWheelsBoneNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B2784(relative to base address)
		UClass GetAnimInstanceClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B2748(relative to base address)
	};


	// Class DelMarCosmetics.DelMarBoosterCosmeticActor
	// Inherited from ADelMarCosmeticActor -> AActor -> UObject
	// Size: 0x30 (0x2F8 - 0x2C8)
	class ADelMarBoosterCosmeticActor : public ADelMarCosmeticActor	
	{
	public:
		UNiagaraSystem* BoosterFx; // 0x2C8(0x8)
		TArray<FDelMarVehicleBooster> LeftBoosters; // 0x2D0(0x10)
		TArray<FDelMarVehicleBooster> RightBoosters; // 0x2E0(0x10)
		USkeletalMeshComponent* BodySkeletalMeshComponent; // 0x2F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarBoosterCosmeticActor");
			return ret;
		}

		void SetRightBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518B4374(relative to base address)
		void SetLeftBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518B40F4(relative to base address)
		void SetAllBoostersEnabled(bool bSetFrontBoosters, bool bSetBackBoosters, bool bSetSideBoosters, bool bSetDownBoosters, bool bEnabled, bool bReset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518B3F04(relative to base address)
		TArray GetRightBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B2C30(relative to base address)
		TArray GetLeftBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B2A34(relative to base address)
		TArray GetAllBoosters(bool bFrontBoosters, bool bBackBoosters, bool bSideBoosters, bool bDownBoosters); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B25BC(relative to base address)
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
		unsigned char UnknownData00_6[0x3]; // 0x2DD(0x3) UNKNOWN PROPERTY
		UAudioComponentGroup* ComponentGroup; // 0x2E0(0x8)
		UAudioMotorModelComponent* MotorModel; // 0x2E8(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x2F0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarEngineAudioCosmeticActor");
			return ret;
		}

		UAudioComponentGroup GetComponentGroup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D789374(relative to base address)
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
		UPhysicalMaterial* ContactMaterial; // 0x2E0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY
		TArray<FDelMarVehicleCosmeticWheelInfo> WheelInfos; // 0x2F0(0x10)
		FName FrontLeftWheelContactBone; // 0x300(0x4)
		FName FrontRightWheelContactBone; // 0x304(0x4)
		FName BackRightWheelContactBone; // 0x308(0x4)
		FName BackLeftWheelContactBone; // 0x30C(0x4)
		unsigned char UnknownData01_7[0x98]; // 0x310(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarWheelContactFxCosmeticActor");
			return ret;
		}

		void HandleVehicleLanded(float LandingForce, bool bLandedKickflip); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518B3378(relative to base address)
		FName GetWheelContactBoneName(EDelMarVehicleWheelIndex WheelIndex); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B2F08(relative to base address)
		UAudioGameplayBehavior GetAudioBehavior(); // Flags: Final|BlueprintCosmetic|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749B404A0(relative to base address)
		void BP_UpdateWheelContactFx(FDelMarVehicleCosmeticWheelInfo WheelInfo, bool bActive, float AbsForwardSpeed, float AbsSideSpeed); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
		unsigned char UnknownData00_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x7]; // 0x2C9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarWheelsCosmeticActor");
			return ret;
		}

		bool IsWheelOnGround(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B3578(relative to base address)
		bool IsRightWheel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B34AC(relative to base address)
		bool IsMirrored(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B3490(relative to base address)
		bool IsLeftWheel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B3490(relative to base address)
		bool IsFrontWheel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B3474(relative to base address)
		bool IsBackWheel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B3454(relative to base address)
		EDelMarWheelMirrorType GetMirrorType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518B2C0C(relative to base address)
	};


	// Class DelMarCosmetics.DelMarWheelSKCosmeticActor
	// Inherited from ADelMarWheelsCosmeticActor -> ADelMarCosmeticActor -> AActor -> UObject
	// Size: 0x8 (0x2D8 - 0x2D0)
	class ADelMarWheelSKCosmeticActor : public ADelMarWheelsCosmeticActor	
	{
	public:
		USkeletalMeshComponent* SkeletalMeshComponent; // 0x2D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCosmetics.DelMarWheelSKCosmeticActor");
			return ret;
		}
	};

}
