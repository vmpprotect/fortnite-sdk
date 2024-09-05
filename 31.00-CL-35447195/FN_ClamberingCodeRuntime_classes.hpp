#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ClamberingCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ClamberingCodeRuntime.FortMovementMode_ClamberingRuntimeData
	// Inherited from UFortMovementMode_TraversalBaseRuntimeData -> UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x38 (0x130 - 0xF8)
	class UFortMovementMode_ClamberingRuntimeData : public UFortMovementMode_TraversalBaseRuntimeData	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0xF8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClamberingCodeRuntime.FortMovementMode_ClamberingRuntimeData");
			return ret;
		}

		FVector GetSyncPosition(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414BCF418
	};


	// Class ClamberingCodeRuntime.FortMovementMode_ExtClambering
	// Inherited from UFortMovementMode_ExtLogicTraversalBase -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x68 (0x1E0 - 0x178)
	class UFortMovementMode_ExtClambering : public UFortMovementMode_ExtLogicTraversalBase	
	{
	public:
		UClass LedgeLaunchCameraMode; // 0x178(0x8)
		UClass WindowClamberCameraMode; // 0x180(0x8)
		FGameplayTagContainer ClamberingTag; // 0x188(0x20)
		FGameplayTag ClamberingStartedTag; // 0x1A8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1AC(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer ClamberingFinishedTag; // 0x1B0(0x20)
		UCameraShakeBase CameraShake; // 0x1D0(0x8)
		float LedgeLaunchSyncPointInterpSpeed; // 0x1D8(0x4)
		float LedgeLaunchPlayerCollideBounceSpeed; // 0x1DC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClamberingCodeRuntime.FortMovementMode_ExtClambering");
			return ret;
		}

		void BP_GetAnimationMontageInformation(FClamberMontageInput& Context, UAnimMontage& AnimMontage, FName& StartSectionName, FName& MontageMiddleSectionName); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414BCF4F8
	};


	// Class ClamberingCodeRuntime.InstancedLedgeActor
	// Inherited from AFortClientOnlyActor -> AActor -> UObject
	// Size: 0x58 (0x2F0 - 0x298)
	class AInstancedLedgeActor : public AFortClientOnlyActor	
	{
	public:
		UInstancedStaticMeshComponent InstancedStaticMeshComponent; // 0x298(0x8)
		unsigned char UnknownData01_7[0x50]; // 0x2A0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClamberingCodeRuntime.InstancedLedgeActor");
			return ret;
		}

		void BP_OnRemoveInstance(FTransform& LedgeTransform, int32_t InstanceIndex); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414BCF6B8
		void BP_OnAddInstance(FTransform& LedgeTransform, int32_t InstanceIndex); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414BCF5D8
	};


	// Class ClamberingCodeRuntime.LedgeLaunchWorldSubsystem
	// Inherited from UBuildingWallSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x120 (0x150 - 0x30)
	class ULedgeLaunchWorldSubsystem : public UBuildingWallSubsystem	
	{
	public:
		TWeakObjectPtr ConfigurationData; // 0x30(0x20)
		TWeakObjectPtr InstancedLedgeActorClass; // 0x50(0x20)
		UPBWLedgeConfigurationData CachedConfigurationData; // 0x70(0x8)
		AInstancedLedgeActor InstancedLedgeActor; // 0x78(0x8)
		TMap CachedLedgeLaunchMap; // 0x80(0x50)
		unsigned char UnknownData01_7[0x80]; // 0xD0(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClamberingCodeRuntime.LedgeLaunchWorldSubsystem");
			return ret;
		}

		void OnWallDied(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn InstigatedBy, AActor DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Public|HasOutParms|HasDefaults 0x7FF414BCF798
	};


	// Class ClamberingCodeRuntime.PBWLedgeConfigurationData
	// Inherited from UDataAsset -> UObject
	// Size: 0x190 (0x1C0 - 0x30)
	class UPBWLedgeConfigurationData : public UDataAsset	
	{
	public:
		TMap MetalWalls; // 0x30(0x50)
		TMap StoneWalls; // 0x80(0x50)
		TMap WoodWalls; // 0xD0(0x50)
		TMap Transforms; // 0x120(0x50)
		TMap PerMaterialTransforms; // 0x170(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClamberingCodeRuntime.PBWLedgeConfigurationData");
			return ret;
		}
	};


	// Class ClamberingCodeRuntime.ClamberingAnalytics
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UClamberingAnalytics : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClamberingCodeRuntime.ClamberingAnalytics");
			return ret;
		}
	};


	// Class ClamberingCodeRuntime.ClamberingComponent
	// Inherited from UFortPawnOverrideComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xE00 (0xEA8 - 0xA8)
	class UClamberingComponent : public UFortPawnOverrideComponent	
	{
	public:
		unsigned char UnknownData10_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		EClamberingState LocalClamberingState; // 0xB0(0x1)
		EClamberingState ReplicatedClamberingState; // 0xB1(0x1)
		unsigned char UnknownData11_6[0x6]; // 0xB2(0x6) UNKNOWN PROPERTY
		FClamberingTargetingData LockedTargetingData; // 0xB8(0xE0)
		FReplicatedClamberingTargetingData_SimClient ReplicatedTargetingData; // 0x198(0x38)
		unsigned char UnknownData12_6[0x8]; // 0x1D0(0x8) UNKNOWN PROPERTY
		FScalableFloat ClamberingEnabled; // 0x1D8(0x28)
		FScalableFloat ClamberIndicatorEnabled; // 0x200(0x28)
		unsigned char UnknownData13_6[0x8]; // 0x228(0x8) UNKNOWN PROPERTY
		FScalableFloat ClamberStartMaxFallingDamageFraction; // 0x230(0x28)
		bool bPerformTargetingWhileWalking; // 0x258(0x1)
		bool bPerformTargetingWhileSwimming; // 0x259(0x1)
		unsigned char UnknownData14_6[0x6]; // 0x25A(0x6) UNKNOWN PROPERTY
		FScalableFloat ServerFailDelay; // 0x260(0x28)
		FScalableFloat ServerValidatePlayerMaxDistance; // 0x288(0x28)
		FClamberingInputConfig InputConfig; // 0x2B0(0x350)
		FClamberingTargetingConfig_Ledge TargetingConfig_Ledge; // 0x600(0x4B0)
		FClamberingInputConfig_CachedValues InputConfigCachedValues; // 0xAB0(0x5C)
		FClamberingTargetingConfig_Ledge_CachedContextualValues TargetingConfig_Ledge_CachedContextualValues; // 0xB0C(0x7C)
		FClamberingMovementConfig_Ledge MoveConfig_Ledge; // 0xB88(0x50)
		FScalableFloat ClamberSyncTargetLedgeOffset; // 0xBD8(0x28)
		FScalableFloat ClamberingMaxAnalyticsEvents; // 0xC00(0x28)
		FScalableFloat SynchedActionFailDelay; // 0xC28(0x28)
		UClass MovementModeExtension; // 0xC50(0x8)
		FGameplayTag SynchedActionMMETag; // 0xC58(0x4)
		FGameplayTag AllowTargetingTag; // 0xC5C(0x4)
		FName LedgeLaunchSyncPointName; // 0xC60(0x4)
		unsigned char UnknownData15_6[0x4]; // 0xC64(0x4) UNKNOWN PROPERTY
		double LastTeleportTime; // 0xC68(0x8)
		bool bTutorialModeEnabled; // 0xC70(0x1)
		unsigned char UnknownData16_6[0x7]; // 0xC71(0x7) UNKNOWN PROPERTY
		FClamberingTargetingData LocalTargetingData; // 0xC78(0xE0)
		FClamberingTargetingData ParallelTargetingData; // 0xD58(0xE0)
		float QueuedInputTimer; // 0xE38(0x4)
		float InputEnabledTimer; // 0xE3C(0x4)
		bool bJumpInputPressed; // 0xE40(0x1)
		unsigned char UnknownData17_6[0x3]; // 0xE41(0x3) UNKNOWN PROPERTY
		float JumpHeldInAirTime; // 0xE44(0x4)
		unsigned char UnknownData18_6[0x50]; // 0xE48(0x50) UNKNOWN PROPERTY
		FGameplayTag Tag_DisableClambering; // 0xE98(0x4)
		unsigned char UnknownData19_7[0xC]; // 0xE9C(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClamberingCodeRuntime.ClamberingComponent");
			return ret;
		}

		void UnregisterMutatorUpdatedDelegate(); // Flags: Final|Native|Protected 0x7FF414BD1638
		bool ShouldShowClamberIndicator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BD1558
		void SetTutorialModeEnabled(bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BD1478
		void ServerStartClambering(FReplicatedClamberingTargetingData InReplicatedTargetingData, double ClientLastTeleportTime); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414BD1398
		void RegisterMutatorUpdatedDelegate(APawn AffectedPawn); // Flags: Final|Native|Protected 0x7FF414BD12B8
		void OnRep_ReplicatedTargetingData(); // Flags: Final|Native|Protected 0x7FF414BD11D8
		void OnPlayerStatePawnSet(APlayerState Player, APawn NewPawn, APawn OldPawn); // Flags: Final|Native|Protected 0x7FF414BD10F8
		void OnMutatorUpdated(); // Flags: Final|Native|Protected 0x7FF414BD1018
		void NetMulticast_ClamberingLedgeFailed(EClamberingFailedReason FailedReason, EClamberingState FailedState); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected 0x7FF414BD0F38
		bool IsTutorialModeEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BD0E58
		bool IsClamberingEnabled(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414BD0D78
		bool IsAutoClamberingEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BD0C98
		void HandleTargetingDataValid(FClamberingTargetingData& TargetingData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BD0BB8
		void HandleTargetingDataInvalid(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BD0AD8
		void HandleTargetActorHealthChanged(); // Flags: Final|Native|Protected 0x7FF414BD09F8
		void HandleTargetActorDestroyed(AActor Actor); // Flags: Final|Native|Protected 0x7FF414BD0918
		void HandleOwnerTeleported(AFortPawn TeleportedOwner); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BD0838
		void HandleOwnerPersonalVehicleModeChanged(bool bIsMounted); // Flags: Final|Native|Protected 0x7FF414BD0758
		void HandleOwnerMovementModeChanged(ACharacter Character, TEnumAsByte PreviousMovementMode, char PreviousCustomMode); // Flags: Final|Native|Protected 0x7FF414BD0678
		void HandleOwnerJumpInput(bool bPressed); // Flags: Final|Native|Protected 0x7FF414BD0598
		void HandleOwnerDied(AFortPawn DeadPawn); // Flags: Final|Native|Protected 0x7FF414BD04B8
		void HandleOwnerDBNO(); // Flags: Final|Native|Protected 0x7FF414BD03D8
		void HandleOwnerASCInvalidated(); // Flags: Final|Native|Protected 0x7FF414BD02F8
		void HandleOwnerASCInitialized(UFortAbilitySystemComponent AbilitySystemComponent, AFortPlayerPawn AffectedPawn); // Flags: Final|Native|Protected 0x7FF414BD0218
		void HandleClamberingTargetOutOfActivationRange(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BD0138
		void HandleClamberingTargetInActivationRange(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BD0058
		void DrawDebugHUD(AHUD HUD, UCanvas Canvas); // Flags: Final|Native|Protected 0x7FF414BCFF78
		void BP_TutorialModeEnabled(); // Flags: Event|Protected|BlueprintEvent|Const 0x7FF414BCFE98
		void BP_TutorialModeDisabled(); // Flags: Event|Protected|BlueprintEvent|Const 0x7FF414BCFDB8
		void BP_OnMMEStarted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCFCD8
		void BP_IsValidTargetActor(AActor TargetActor, bool& bIsValidTargetActor); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF414BCFBF8
		void BP_HandleSynchedActionStarted(FSynchedActionInfo& SynchedActionInfo); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BCFB18
		void BP_HandleClamberingStateChanged(EClamberingState OldClamberingState, EClamberingState NewClamberingState); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCFA38
		void BP_CanStartTargeting(bool& bCanStartTargeting); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF414BCF958
		void BP_CanStartClambering(bool& bCanStartClambering); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF414BCF878
	};


	// Class ClamberingCodeRuntime.ClamberingLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UClamberingLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClamberingCodeRuntime.ClamberingLibrary");
			return ret;
		}

		bool PerformClamberingTargeting(ACharacter Character, FClamberingTargetingData& OutTargetingData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BD1718
	};


	// Class ClamberingCodeRuntime.FortAthenaMutator_LedgeLaunch
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x1C8 (0x500 - 0x338)
	class AFortAthenaMutator_LedgeLaunch : public AFortAthenaMutator	
	{
	public:
		unsigned char UnknownData02_3[0x1A8]; // 0x338(0x1A8) UNKNOWN PROPERTY
		TArray CurrentWalls; // 0x4E0(0x10)
		bool bShouldSpawnLedge; // 0x4F0(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x4F1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClamberingCodeRuntime.FortAthenaMutator_LedgeLaunch");
			return ret;
		}

		void OnRep_bShouldSpawnLedge(); // Flags: Final|Native|Private 0x7FF414BD17F8
	};

}
