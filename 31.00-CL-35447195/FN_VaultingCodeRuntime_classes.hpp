#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VaultingCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VaultingCodeRuntime.FortMovementMode_HurdleRuntimeData
	// Inherited from UFortMovementMode_TraversalBaseRuntimeData -> UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x8 (0x100 - 0xF8)
	class UFortMovementMode_HurdleRuntimeData : public UFortMovementMode_TraversalBaseRuntimeData	
	{
	public:
		EHurdleType Type; // 0xF8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_6[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer HurdleFinishedTag; // 0x1A0(0x20)
		float DestroyPropsSweepDistance; // 0x1C0(0x4)
		float DestroyPropsWindowSillOffsetDistance; // 0x1C4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle");
			return ret;
		}

		void BP_GetAnimationMontageInformation(FSynchedActionInfo SynchedActionInfo, EHurdleType Type, bool bIsNarrowOpening, bool bIsCrouched, UAnimMontage& AnimMontage, FName& StartSectionName, FName& MontageMiddleSectionName); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414D516B8
		void BP_DestroyProp(ABuildingProp BuildPropToDestroy); // Flags: Event|Public|BlueprintEvent 0x7FF414D515D8
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
	// Size: 0x200 (0x1F00 - 0x1D00)
	class UHurdleCameraMode : public UFortCameraMode_ThirdPerson	
	{
	public:
		FVector StartCameraOriginInterpSpeed; // 0x1D00(0x18)
		FVector ApexCameraOriginInterpSpeed; // 0x1D18(0x18)
		FVector EndCameraOriginInterpSpeed; // 0x1D30(0x18)
		float ConstantSpeedCameraTrackInterpolationExponent; // 0x1D48(0x4)
		float CameraOriginVerticalThreshold; // 0x1D4C(0x4)
		float FallingVerticalInterpSpeed; // 0x1D50(0x4)
		float FallSpeedThreshold; // 0x1D54(0x4)
		float NonSprintFOV; // 0x1D58(0x4)
		bool bOverrideSpectatorCamera; // 0x1D5C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1D5D(0x3) UNKNOWN PROPERTY
		FHurdleTargetingData HurdleTargetingData; // 0x1D60(0x130)
		unsigned char UnknownData03_7[0x70]; // 0x1E90(0x70) UNKNOWN PROPERTY

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
		unsigned char UnknownData05_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FHurdleInputConfig HurdleInputConfig; // 0xB0(0x670)
		FHurdleInputConfigCache HurdleInputConfigCache; // 0x720(0xA8)
		UClass MovementModeExtension; // 0x7C8(0x8)
		unsigned char UnknownData06_6[0x8]; // 0x7D0(0x8) UNKNOWN PROPERTY
		FScalableFloat HurdleEnabled; // 0x7D8(0x28)
		FScalableFloat AutoHurdleEnabled; // 0x800(0x28)
		unsigned char UnknownData07_6[0x138]; // 0x828(0x138) UNKNOWN PROPERTY
		FReplicatedHurdleTargetingData ReplayHurdleTargetingData; // 0x960(0x70)
		FHurdleTargetingData ParallelTargetingData; // 0x9D0(0x130)
		unsigned char UnknownData08_6[0x38]; // 0xB00(0x38) UNKNOWN PROPERTY
		FVector HighlightPositionOffset; // 0xB38(0x18)
		FVector HighlightNormalMultiplier; // 0xB50(0x18)
		FVector HighlightScale; // 0xB68(0x18)
		FGameplayTag CanStartHurdleTag; // 0xB80(0x4)
		unsigned char UnknownData09_6[0x3]; // 0xB84(0x3) UNKNOWN PROPERTY
		bool bShouldShowHurdleIndicator; // 0xB87(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VaultingCodeRuntime.HurdleComponent");
			return ret;
		}

		void UnregisterMutatorUpdatedDelegate(); // Flags: Final|Native|Protected 0x7FF414D524B8
		bool ShouldShowHurdleIndicator(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D523D8
		void RegisterMutatorUpdatedDelegate(APawn AffectedPawn); // Flags: Final|Native|Protected 0x7FF414D522F8
		void OnPlayerStatePawnSet(APlayerState Player, APawn NewPawn, APawn OldPawn); // Flags: Final|Native|Protected 0x7FF414D52218
		void OnMutatorUpdated(); // Flags: Final|Native|Protected 0x7FF414D52138
		bool IsUsingGamepad(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D52058
		void HandleOwnerJumpInput(bool bPressed); // Flags: Final|Native|Protected 0x7FF414D51F78
		void HandleNavLinkMoveStarted(FVector LinkEndPoint); // Flags: Final|Native|Protected|HasDefaults 0x7FF414D51E98
		FTransform GetHurdleHighlightTransform(); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D51DB8
		bool BP_UseAutoHurdle(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D51CD8
		void BP_UpdateHurdleHighlight(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D51BF8
		void BP_ShowHurdleInputPrompt(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x7FF414D51B18
		bool BP_IsTacticalSprinting(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D51A38
		void BP_CreateHurdleHighlight(FHurdleTargetingData& TargetingData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D51958
		void BP_CleanupHurdleIndicator(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D51878
		void BP_CanStartHurdle(bool& OutCanStartHurdle); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF414D51798
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

		bool PerformHurdleTargeting(ACharacter Character, FHurdleInputConfigCache& HurdleInputConfig, FHurdleTargetingData& OutTargetingData, bool bIsAutoHurdle, FVector OverrideAimDirection); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D52598
	};

}
