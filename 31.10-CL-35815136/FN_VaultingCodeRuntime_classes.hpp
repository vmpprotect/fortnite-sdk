#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VaultingCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VaultingCodeRuntime.FortMovementMode_HurdleRuntimeData
	// Inherited from UFortMovementMode_TraversalBaseRuntimeData -> UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x8 (0x100 - 0xF8)
	class UFortMovementMode_HurdleRuntimeData : public UFortMovementMode_TraversalBaseRuntimeData	
	{
	public:
		EHurdleType Type; // 0xF8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VaultingCodeRuntime.FortMovementMode_HurdleRuntimeData");
			return ret;
		}
	};


	// Class VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle
	// Inherited from UFortMovementMode_ExtLogicTraversalBase -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x50 (0x1C8 - 0x178)
	class UFortMovementMode_ExtLogicHurdle : public UFortMovementMode_ExtLogicTraversalBase	
	{
	public:
		FGameplayTagContainer HurdleTag; // 0x178(0x20)
		FGameplayTag HurdleStartedTag; // 0x198(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer HurdleFinishedTag; // 0x1A0(0x20)
		float DestroyPropsSweepDistance; // 0x1C0(0x4)
		float DestroyPropsWindowSillOffsetDistance; // 0x1C4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle");
			return ret;
		}

		void BP_GetAnimationMontageInformation(FSynchedActionInfo SynchedActionInfo, EHurdleType Type, bool bIsNarrowOpening, bool bIsCrouched, UAnimMontage* AnimMontage, FName& StartSectionName, FName& MontageMiddleSectionName); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_DestroyProp(ABuildingProp* BuildPropToDestroy); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class VaultingCodeRuntime.HurdleNavLinkProcessor
	// Inherited from UFortCustomNavLinkProcessor -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UHurdleNavLinkProcessor : public UFortCustomNavLinkProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VaultingCodeRuntime.HurdleNavLinkProcessor");
			return ret;
		}
	};


	// Class VaultingCodeRuntime.HurdleCameraMode
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x200 (0x2030 - 0x1E30)
	class UHurdleCameraMode : public UFortCameraMode_ThirdPerson	
	{
	public:
		FVector StartCameraOriginInterpSpeed; // 0x1E30(0x18)
		FVector ApexCameraOriginInterpSpeed; // 0x1E48(0x18)
		FVector EndCameraOriginInterpSpeed; // 0x1E60(0x18)
		float ConstantSpeedCameraTrackInterpolationExponent; // 0x1E78(0x4)
		float CameraOriginVerticalThreshold; // 0x1E7C(0x4)
		float FallingVerticalInterpSpeed; // 0x1E80(0x4)
		float FallSpeedThreshold; // 0x1E84(0x4)
		float NonSprintFOV; // 0x1E88(0x4)
		bool bOverrideSpectatorCamera; // 0x1E8C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1E8D(0x3) UNKNOWN PROPERTY
		FHurdleTargetingData HurdleTargetingData; // 0x1E90(0x130)
		unsigned char UnknownData01_7[0x70]; // 0x1FC0(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VaultingCodeRuntime.HurdleCameraMode");
			return ret;
		}
	};


	// Class VaultingCodeRuntime.HurdleComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xAE0 (0xB88 - 0xA8)
	class UHurdleComponent : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FHurdleInputConfig HurdleInputConfig; // 0xB0(0x670)
		FHurdleInputConfigCache HurdleInputConfigCache; // 0x720(0xA8)
		UClass* MovementModeExtension; // 0x7C8(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x7D0(0x8) UNKNOWN PROPERTY
		FScalableFloat HurdleEnabled; // 0x7D8(0x28)
		FScalableFloat AutoHurdleEnabled; // 0x800(0x28)
		unsigned char UnknownData02_6[0x138]; // 0x828(0x138) UNKNOWN PROPERTY
		FReplicatedHurdleTargetingData ReplayHurdleTargetingData; // 0x960(0x70)
		FHurdleTargetingData ParallelTargetingData; // 0x9D0(0x130)
		unsigned char UnknownData03_6[0x38]; // 0xB00(0x38) UNKNOWN PROPERTY
		FVector HighlightPositionOffset; // 0xB38(0x18)
		FVector HighlightNormalMultiplier; // 0xB50(0x18)
		FVector HighlightScale; // 0xB68(0x18)
		FGameplayTag CanStartHurdleTag; // 0xB80(0x4)
		unsigned char UnknownData04_6[0x3]; // 0xB84(0x3) UNKNOWN PROPERTY
		bool bShouldShowHurdleIndicator; // 0xB87(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VaultingCodeRuntime.HurdleComponent");
			return ret;
		}

		void UnregisterMutatorUpdatedDelegate(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75066BF20(relative to base address)
		bool ShouldShowHurdleIndicator(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515927E4(relative to base address)
		void RegisterMutatorUpdatedDelegate(APawn* AffectedPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515925E0(relative to base address)
		void OnPlayerStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515921EC(relative to base address)
		void OnMutatorUpdated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515921D8(relative to base address)
		bool IsUsingGamepad(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751592160(relative to base address)
		void HandleOwnerJumpInput(bool bPressed); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515920E0(relative to base address)
		void HandleNavLinkMoveStarted(FVector LinkEndPoint); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF751591FC0(relative to base address)
		FTransform GetHurdleHighlightTransform(); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751591F64(relative to base address)
		bool BP_UseAutoHurdle(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751591EF0(relative to base address)
		void BP_UpdateHurdleHighlight(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_ShowHurdleInputPrompt(bool bVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BP_IsTacticalSprinting(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751591E90(relative to base address)
		void BP_CreateHurdleHighlight(FHurdleTargetingData& TargetingData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_CleanupHurdleIndicator(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_CanStartHurdle(bool& OutCanStartHurdle); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class VaultingCodeRuntime.HurdleLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UHurdleLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VaultingCodeRuntime.HurdleLibrary");
			return ret;
		}

		bool PerformHurdleTargeting(ACharacter* Character, FHurdleInputConfigCache& HurdleInputConfig, FHurdleTargetingData& OutTargetingData, bool bIsAutoHurdle, FVector OverrideAimDirection); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7515922E4(relative to base address)
	};

}
