#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Components
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /RidingContent/Components/RidingGeneric_Interafce.RidingGeneric_Interafce_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URidingGeneric_Interafce_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Components/RidingGeneric_Interafce.RidingGeneric_Interafce_C");
			return ret;
		}

		void ToggleRidingAlternative(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4152E800
		void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D4152E900
	};


	// Class /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C
	// Inherited from UActorComponent -> UObject
	// Size: 0x1A (0xBA - 0xA0)
	class UCreatureBaseNonRidableComponent_C : public UActorComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
		double Jump_Attach_Ground_Height_Min; // 0xA8(0x8)
		double Jump_Attach_Ground_Height_Buffer; // 0xB0(0x8)
		bool Uses_Alt_Riding_Message; // 0xB8(0x1)
		bool KillOnRideAttempt; // 0xB9(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C");
			return ret;
		}

		void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D41FA1F00
		void ToggleRidingAlternative(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41FA1E00
		void AlternateRidingEvent(); // Flags: BlueprintCallable|BlueprintEvent 0x15D41FA2100
		void ExecuteUbergraph_CreatureBaseNonRidableComponent(int32_t EntryPoint); // Flags: Final 0x15D41FA2000
	};


	// Class /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C
	// Inherited from UControllableRidableComponent -> URidableComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x6C1 (0xEA1 - 0x7E0)
	class UCreatureBaseRidableComponent_C : public UControllableRidableComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x7E0(0x8)
		FGameplayTagContainer T_CreatureIsBeingRidden; // 0x7E8(0x20)
		UClass GE_CreatureIsBeingRidden; // 0x808(0x8)
		UClass GE_CreatureIsBeingRidden_Passive; // 0x810(0x8)
		bool bDebugDisplay; // 0x818(0x1)
		unsigned char UnknownData18_6[0x7]; // 0x819(0x7) UNKNOWN PROPERTY
		double DebugTickRate; // 0x820(0x8)
		FVector DebugServerRiderLocation; // 0x828(0x18)
		double CapsuleRadiusOffset; // 0x840(0x8)
		double CapsuleHalfHeightOffset; // 0x848(0x8)
		FGameplayTagContainer T_RidingSpecialAbility; // 0x850(0x20)
		UAnimSequence IdleAnim_Add; // 0x870(0x8)
		UAnimSequence RunAnim_Add; // 0x878(0x8)
		UBlendSpace TurnBS; // 0x880(0x8)
		double MinSpeedToRun; // 0x888(0x8)
		double Run_RampIntoSpeed; // 0x890(0x8)
		double Run_RampIntoSpeed_ADS; // 0x898(0x8)
		double Run_PlayRate; // 0x8A0(0x8)
		double Run_PlayRate_ADS; // 0x8A8(0x8)
		double SpringAlpha; // 0x8B0(0x8)
		double SpringAlpha_ADS; // 0x8B8(0x8)
		double Idle_Alpha; // 0x8C0(0x8)
		double Idle_Alpha_ADS; // 0x8C8(0x8)
		double Run_Alpha; // 0x8D0(0x8)
		double Run_Alpha_ADS; // 0x8D8(0x8)
		double Turn_Alpha; // 0x8E0(0x8)
		double Turn_Alpha_ADS; // 0x8E8(0x8)
		UAnimSequence Clamp_AnimPose_LastResort; // 0x8F0(0x8)
		FRotator Clamp_Foot_R_Adjust; // 0x8F8(0x18)
		FRotator Clamp_Foot_L_Adjust; // 0x910(0x18)
		double CapsuleRadiusOffset_Emote; // 0x928(0x8)
		double CapsuleHalfHeightOffset_Emote; // 0x930(0x8)
		FVector Clamp_Location_Offset; // 0x938(0x18)
		FRotator Clamp_Rotation_Offset; // 0x950(0x18)
		FVector Clamp_ScaleAdjust; // 0x968(0x18)
		FName RidableSocketName; // 0x980(0x4)
		unsigned char UnknownData19_6[0x4]; // 0x984(0x4) UNKNOWN PROPERTY
		double RidableSocket_Alpha; // 0x988(0x8)
		UClass GE_CooldownOverride; // 0x990(0x8)
		FGameplayTagContainer T_CreatureOverrideCooldown; // 0x998(0x20)
		TMap OriginalCollisionResponseMap; // 0x9B8(0x50)
		FSoundIndicatorIconPicker RidingSoundIndicatorIconOverride; // 0xA08(0x28)
		FMulticastInlineDelegate AudioOnJump; // 0xA30(0x10)
		FMulticastInlineDelegate AudioOnJumpApex; // 0xA40(0x10)
		char MovementMode; // 0xA50(0x1)
		bool bFalling; // 0xA51(0x1)
		unsigned char UnknownData20_6[0x6]; // 0xA52(0x6) UNKNOWN PROPERTY
		FScalableFloat RidingAbilityEnable_HF; // 0xA58(0x28)
		double JumpAttach_GroundHeightMin; // 0xA80(0x8)
		double JumpAttach_GroundHeightBuffer; // 0xA88(0x8)
		bool UseAltRidingMessage; // 0xA90(0x1)
		unsigned char UnknownData21_6[0x7]; // 0xA91(0x7) UNKNOWN PROPERTY
		FText Riding_Interaction_Text; // 0xA98(0x10)
		double currentEnergyValue; // 0xAA8(0x8)
		UPlayerRiderComponent_C PlayerRiderComponentRef; // 0xAB0(0x8)
		ANPC_Pawn_Wildlife_Parent_C NPCPawnWildlifeRef; // 0xAB8(0x8)
		double previousTimeTracked; // 0xAC0(0x8)
		double energyTrackingDeltaTime; // 0xAC8(0x8)
		bool OldEnergyFlowEnabled; // 0xAD0(0x1)
		bool ShouldHaveEnergy; // 0xAD1(0x1)
		unsigned char UnknownData22_6[0x6]; // 0xAD2(0x6) UNKNOWN PROPERTY
		double EnergyRateOfDecayStopped; // 0xAD8(0x8)
		bool allowUpdateEnergyTrackingTick; // 0xAE0(0x1)
		bool lastBeingRiddenState; // 0xAE1(0x1)
		unsigned char UnknownData23_6[0x6]; // 0xAE2(0x6) UNKNOWN PROPERTY
		FCurveTableRowHandle EnergyRateOfDecayMoving; // 0xAE8(0x10)
		FCurveTableRowHandle EnergyRateOfDecaySprinting; // 0xAF8(0x10)
		double CurrentEnergyRateOfRecharge; // 0xB08(0x8)
		FCurveTableRowHandle ExhaustedEnergyRateOfRecharge; // 0xB10(0x10)
		double EnergyWarningThreshold; // 0xB20(0x8)
		double EnergyCriticalThreshold; // 0xB28(0x8)
		bool energyWarningActive; // 0xB30(0x1)
		bool energyCriticalActive; // 0xB31(0x1)
		unsigned char UnknownData24_6[0x6]; // 0xB32(0x6) UNKNOWN PROPERTY
		double minMovementSpeedTreshold; // 0xB38(0x8)
		bool IsJumping; // 0xB40(0x1)
		unsigned char UnknownData25_6[0x7]; // 0xB41(0x7) UNKNOWN PROPERTY
		double EnergyRegenThreshold; // 0xB48(0x8)
		bool AlwaysRegenWhenNotRidden; // 0xB50(0x1)
		unsigned char UnknownData26_6[0x7]; // 0xB51(0x7) UNKNOWN PROPERTY
		UClass GE_EnergyWarning; // 0xB58(0x8)
		UClass GE_EnergyCritical; // 0xB60(0x8)
		UClass GE_EnergyDepleted; // 0xB68(0x8)
		FGameplayTagContainer T_EnergyWarning; // 0xB70(0x20)
		FGameplayTagContainer T_EnergyCritical; // 0xB90(0x20)
		FGameplayTagContainer T_EnergyDepleted; // 0xBB0(0x20)
		FGameplayTagContainer T_CannotRideBucket; // 0xBD0(0x20)
		UClass Gameplay_Effect; // 0xBF0(0x8)
		FGameplayTag SprintingAbilityTag; // 0xBF8(0x4)
		unsigned char UnknownData27_6[0x4]; // 0xBFC(0x4) UNKNOWN PROPERTY
		UClass GE_EatToRefuel; // 0xC00(0x8)
		unsigned char UnknownData28_6[0x8]; // 0xC08(0x8) UNKNOWN PROPERTY
		FSlateBrush IconBrush; // 0xC10(0xB0)
		UClass GE_Creature_Sprint; // 0xCC0(0x8)
		USoundLibrary RidingFoleySoundLibrary; // 0xCC8(0x8)
		FGameplayTagContainer TagsPreventSprinting; // 0xCD0(0x20)
		FMulticastInlineDelegate RidableUIStart; // 0xCF0(0x10)
		FMulticastInlineDelegate RidableUIUpdateEnergy; // 0xD00(0x10)
		FGameplayTag OutOfEnergySoundLibTag; // 0xD10(0x4)
		FGameplayTag SprintStartSoundLibTag; // 0xD14(0x4)
		TEnumAsByte Riding_Interaction_Type; // 0xD18(0x1)
		unsigned char UnknownData29_6[0x7]; // 0xD19(0x7) UNKNOWN PROPERTY
		double StartInAirTimestamp; // 0xD20(0x8)
		FTimerHandle RetryJumpExitTimerHandle; // 0xD28(0x8)
		double JumpExitBufferStartTimeStamp; // 0xD30(0x8)
		FScalableFloat JumpExitBufferTime; // 0xD38(0x28)
		FTimerHandle JumpExitBufferTimerHandle; // 0xD60(0x8)
		FGameplayTag MountLandedCueTag; // 0xD68(0x4)
		unsigned char UnknownData30_6[0x4]; // 0xD6C(0x4) UNKNOWN PROPERTY
		UClass GE_BlockCreatureAttackOnDismount; // 0xD70(0x8)
		bool EnergyRegenActive; // 0xD78(0x1)
		unsigned char UnknownData31_6[0x7]; // 0xD79(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer BlockPetting_TagContainer; // 0xD80(0x20)
		bool infiniteStaminaBuffEnabled; // 0xDA0(0x1)
		unsigned char UnknownData32_6[0x3]; // 0xDA1(0x3) UNKNOWN PROPERTY
		FGameplayTag InfiniteStaminaEffect_GameplayCueTag; // 0xDA4(0x4)
		FGameplayTagContainer Cannot_Ride_Rider_Bucket; // 0xDA8(0x20)
		FScalableFloat JumpFatigue_Enabled; // 0xDC8(0x28)
		FScalableFloat JumpFatigue_ApplyFatigueMinJumpCount; // 0xDF0(0x28)
		UClass JumpFatigueGameplayEffect; // 0xE18(0x8)
		bool JumpFatigueDebugEnabled; // 0xE20(0x1)
		unsigned char UnknownData33_6[0x3]; // 0xE21(0x3) UNKNOWN PROPERTY
		int32_t JumpFatigueJumpCount; // 0xE24(0x4)
		double JumpFatigue_LastLandingTimeStamp; // 0xE28(0x8)
		FScalableFloat JumpFatigue_ResetCounterDelay; // 0xE30(0x28)
		bool JumpFatigue_ShouldTimeStampNextLanding; // 0xE58(0x1)
		unsigned char UnknownData34_6[0x3]; // 0xE59(0x3) UNKNOWN PROPERTY
		FActiveGameplayEffectHandle JumpFatigue_GEHandle; // 0xE5C(0x8)
		unsigned char UnknownData35_6[0x4]; // 0xE64(0x4) UNKNOWN PROPERTY
		FTimerHandle JumpFatigue_RemovalTimerHandle; // 0xE68(0x8)
		FScalableFloat JumpFatigue_GeDurationPostLanding; // 0xE70(0x28)
		UClass GE_NotPetable_IsBeingRidden; // 0xE98(0x8)
		bool bAllowRidingInteraction; // 0xEA0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C");
			return ret;
		}

		void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B08400
		void JumpFatigue_LandTimeStamp(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D42B07600
		void JumpFatigue_CheckApplyFatigue(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D42B07900
		void JumpFatigue_CountJumps(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D42B07800
		void JumpFatigue_RemoveFatigue(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D42B07500
		void JumpFatigue_Landed(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D42B07700
		void Should Convert Jump Exit to Jump(bool& Out); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D42B09900
		void ShouldBufferJumpExitToRetryJump(bool& Output); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D42B09800
		void SetInfiniteStaminaBuff(bool Enabled); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D42B09B00
		bool CanBePet(URiderComponent Rider); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D42B05700
		void CanJumpExit(bool& CanJumpExit); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D42B05500
		void UpdateLootAnimalGlow(double Scale); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D42B08D00
		void OnRep_currentEnergyValue(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B06700
		void Propagate Immunity Fall Damage(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D42B0A500
		bool CanRiderPlayEmote(URiderComponent Rider); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D42B05400
		void HandleEnemyFoleySoundLibrary(UActorComponent Rider, bool bIsRiding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D42B07F00
		void OnMovementModeChanged(ACharacter Character, TEnumAsByte PrevMovementMode, char PreviousCustomMode); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D42B06900
		void IsSwimming(bool& IsSwimming); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D42B07A00
		void StopSprinting(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D42B09500
		void RemoveGEByTag(FGameplayTagContainer Tags); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D42B0A000
		void ApplyGEToSelf(UClass GameplayEffectClass, bool& IsValidClass); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D42B05A00
		void KickRiderOffSelf(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D42B07400
		void DetermineRateOfChange(double& RateOfChange); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B04D00
		void CommitEnergyCosts(bool RequireAllEnergy, double EnergyCost, bool& Success); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B05000
		void TestThreshold(bool isDecaying, double CurrentValue, double testTreshold, bool PreviousState, bool& crossedThreshold); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B09400
		void SetWildlifeHealth(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D42B09A00
		void UpdateValue(double TargetValue, double RateOfChange, double DeltaTime, double& updatedValue, bool& EnergyDepleted); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B08C00
		void ToggleRiding(AActor PlayerPawn, AActor Target, bool ShouldRide, bool& bChangedRiding); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B09300
		void ForceTaming(AActor PlayerPawn, AActor CreaturePawn, bool& IsTamingEnabled); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D42B04700
		void RestoreCollisionResponses(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D42B09F00
		void ApplyCollisionResponse(TArray& Channels, TEnumAsByte Response); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B05B00
		bool ShouldCameraFocusOnRidable(URiderComponent Rider); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D42B09700
		void UpdateAnimInputBool(AFortPawn FortPawn, bool IsBeingRidden); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D42B09000
		void GetRiderCapsuleSize(URiderComponent Rider, double& RiderCapsuleRadius, double& RiderCapsuleHH); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D42B04600
		void GetRidingEmoteCapsuleSize(URiderComponent Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D42B04300
		void GetRidingCapsuleSize(URiderComponent Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D42B04400
		void OnRep_IdleAnim_Add(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B06600
		bool ShouldSetAsViewTarget(URiderComponent Rider); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D42B09600
		void GetRiderLocation(FVector& Location); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D42B04500
		void Removed_AD51144144164FD235EE5BA4F6E87456(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B0A200
		void Added_FBD936634BCC61A726DA279226E2F4BE(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B05C00
		void Removed_C4C6E29B4217C014B9DE0E80B7134D6E(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B0A100
		void ToggleRidingAlternative(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D42B09200
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent 0x15D42B0A400
		void HandleRiderStartedRiding(URiderComponent Rider); // Flags: Event|Protected|BlueprintEvent 0x15D42B07C00
		void HandleRiderStoppedRiding(URiderComponent Rider); // Flags: Event|Protected|BlueprintEvent 0x15D42B07B00
		void UpdateDebug(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B08F00
		void HandleAbilityHeld(); // Flags: Event|Public|BlueprintEvent 0x15D42B08300
		void HandleAbilityStarted(); // Flags: Event|Public|BlueprintEvent 0x15D42B08200
		void HandleAbilityStopped(); // Flags: Event|Public|BlueprintEvent 0x15D42B08100
		void HandleJumpStarted(); // Flags: Event|Public|BlueprintEvent 0x15D42B07E00
		void OnJumping(double JumpPitchInterpSpeed); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 0x15D42B06B00
		void OnJumpingApex(); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 0x15D42B06A00
		void NPCPawnInteractWithDispatcher_Event(AActor AIPawn, AFortPlayerPawn InteractingPlayerPawn); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B07000
		void EnergyTrackingStart(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B04C00
		void EnergyTrackingStop(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B04B00
		void ReceiveEndPlay(TEnumAsByte EndPlayReason); // Flags: Event|Public|BlueprintEvent 0x15D42B0A300
		void UpdateEnergy(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B08E00
		void ConvertedDispatcher_Event(bool Converted, AFortPawn InstigatorPawn); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B04F00
		void OnPawnHealthChanged_Event(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B06800
		void UseEnergyAmountServer(double EnergyCost); // Flags: Net|NetServer|BlueprintCallable|BlueprintEvent 0x15D42B08B00
		void HandleCancelSprint(bool bAbilityInputHeld, bool bForceCancel); // Flags: Event|Public|BlueprintEvent 0x15D42B08000
		void CheatSetStaminaPercent(float StaminaPercent); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x15D42B05300
		void OnEnergyUpdate(double Energy, bool bWarningActive); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B06C00
		void OnEnergyDepletedClient(); // Flags: Net|NetMulticast|BlueprintCallable|BlueprintEvent 0x15D42B06E00
		void OnSprintStarted(); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 0x15D42B06500
		void OnEatToRefuel(double EnergyCost); // Flags: Net|NetServer|BlueprintCallable|BlueprintEvent 0x15D42B06F00
		void ReTryJumpExit(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B09E00
		void ManualEnergyDepleted(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B07300
		void Check Regen on Stopped Riding(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B05100
		void Check Regen on Started Riding(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B05200
		void Activate Regen(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B05D00
		void Deactivate Regen(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B04E00
		void HandleJumpStopped(); // Flags: Event|Public|BlueprintEvent 0x15D42B07D00
		void ExecuteBufferedJumpExit(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B04A00
		void CancelJumpExitAndJump(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B05600
		void MountLandedClient(FHitResult& Hit); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B07200
		void TryConvertBufferedJumpExitToJump(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B09100
		void MountLandedServer_JumpFatigue(FHitResult& Hit); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B07100
		void FinalizeRiding(AActor AIPawn, AFortPlayerPawn InteractingPlayerPawn); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B04800
		void ParentSprintStarted(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B06400
		void ExecuteUbergraph_CreatureBaseRidableComponent(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D42B04900
		void RidableUIUpdateEnergy__DelegateSignature(double Energy, bool bIsResting); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D42B09C00
		void RidableUIStart__DelegateSignature(FText Name, FSlateBrush Icon); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D42B09D00
		void AudioOnJumpApex__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D42B05800
		void AudioOnJump__DelegateSignature(double JumpPitchInterpSpeed); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D42B05900
	};


	// Class /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C
	// Inherited from UControllingRiderComponent -> URiderComponent -> UFortPawnOverrideComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x130 (0x840 - 0x710)
	class UPlayerRiderComponent_C : public UControllingRiderComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x710(0x8)
		FGameplayTagContainer T_PlayerIsRiding; // 0x718(0x20)
		UClass GE_PlayerIsRiding; // 0x738(0x8)
		AFortPlayerPawn FortPlayerRef; // 0x740(0x8)
		double JumpOnMountDistanceCheck; // 0x748(0x8)
		FMulticastInlineDelegate RiderUINewStats; // 0x750(0x10)
		FMulticastInlineDelegate RiderUIEnd; // 0x760(0x10)
		double targetEnergy; // 0x770(0x8)
		double targetHealth; // 0x778(0x8)
		FGameplayTagContainer T_CannotRideBucket; // 0x780(0x20)
		FMulticastInlineDelegate RiderUIUpdateEnergy; // 0x7A0(0x10)
		FMulticastInlineDelegate RiderUIUpdateHealth; // 0x7B0(0x10)
		AActor CachedRidableActor; // 0x7C0(0x8)
		FGameplayTagContainer Cannot_Ride_Rider_Bucket; // 0x7C8(0x20)
		FGameplayTag JumpOnCreature_Cue_Tag; // 0x7E8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x7EC(0x4) UNKNOWN PROPERTY
		UClass GE_PlayerPetting; // 0x7F0(0x8)
		FGameplayTagContainer Tag_Quests_Wildlife_Pet; // 0x7F8(0x20)
		UAbilityAsync_WaitGameplayTagAdded ActiveRidableBlockRidingGameplayTagAsyncAction; // 0x818(0x8)
		FGameplayTagContainer AllowRidingMovementModeChangeTags; // 0x820(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C");
			return ret;
		}

		void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B0C000
		void OnRep_targetHealth(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B0B700
		void OnRep_targetEnergy(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B0B800
		void GetJumpInfo(AActor TargetActor, UActorComponent& TargetActorComponent, double& JumpAttach_GroundHeightMin, double& JumpAttach_GroundHeightBuffer, bool& UseAltRidingMessage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B0C100
		void TestIfValidForRidingAttempt(UObject Object, bool& Success, UObject& TargetObject, bool& UseAltRidingMessage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B0AE00
		void ToggleRiding(AActor PlayerPawn, AActor Target, bool ShouldRide, bool& bChangedRiding); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B0AD00
		void EventReceived_E5B5FB5340DB5660002329825657B406(FGameplayEventData Payload); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B0C300
		void Added_42EF586645CCFF06FFA4D9A5D59B1298(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B08500
		void Added_A83C775344FE0F6BDAAC4B971F57425E(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B0C600
		void EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6(FGameplayEventData Payload); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B0C400
		void Added_D3DFE4374EED456A4C597E95375A2028(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B0C500
		void ToggleRidingAlternative(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D42B0AC00
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent 0x15D42B0B600
		void HandleStartedRiding(URidableComponent Ridable); // Flags: Event|Protected|BlueprintEvent 0x15D42B0BC00
		void HandleStoppedRiding(URidableComponent Ridable); // Flags: Event|Protected|BlueprintEvent 0x15D42B0BB00
		void ToggleRidingOnServer(UObject TargetObject, bool UseAltRidingMessage); // Flags: Net|NetServer|BlueprintCallable|BlueprintEvent 0x15D42B0AB00
		void SetTargetHealth(double targetHealth); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B0AF00
		void RiderUIStartClient(FText Name, FSlateBrush Icon, AActor Ridable); // Flags: Net|NetClient|BlueprintCallable|BlueprintEvent 0x15D42B0B200
		void RiderUIEndClient(AActor Ridable); // Flags: Net|NetClient|BlueprintCallable|BlueprintEvent 0x15D42B0B400
		void MovementModeChanged(ACharacter Character, TEnumAsByte PrevMovementMode, char PreviousCustomMode); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B0B900
		void MountLanded(FHitResult& Hit); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42B0BA00
		void HandleRequestPettingStart(); // Flags: Event|Protected|BlueprintEvent 0x15D42B0BF00
		void HandleRequestPettingStop(); // Flags: Event|Protected|BlueprintEvent 0x15D42B0BE00
		void HandleRidableFound(FHitResult& HitResult); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D42B0BD00
		void ExecuteUbergraph_PlayerRiderComponent(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D42B0C200
		void RiderUIUpdateHealth__DelegateSignature(double Health); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D42B0B000
		void RiderUIUpdateEnergy__DelegateSignature(double Energy); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D42B0B100
		void RiderUIEnd__DelegateSignature(AActor RidableActor); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D42B0B500
		void RiderUINewStats__DelegateSignature(FText Name, FSlateBrush Icon, AActor RidableActor); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D42B0B300
	};


	// Class /RidingContent/Components/WolfRidableComponent.WolfRidableComponent_C
	// Inherited from UCreatureBaseRidableComponent_C -> UControllableRidableComponent -> URidableComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xEA1 - 0xEA1)
	class UWolfRidableComponent_C : public UCreatureBaseRidableComponent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Components/WolfRidableComponent.WolfRidableComponent_C");
			return ret;
		}
	};


	// Class /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C
	// Inherited from UCreatureBaseRidableComponent_C -> UControllableRidableComponent -> URidableComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x4B (0xEEC - 0xEA1)
	class UBoarRidableComponent_C : public UCreatureBaseRidableComponent_C	
	{
	public:
		unsigned char UnknownData02_3[0x7]; // 0xEA1(0x7) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0xEA8(0x8)
		USoundBase BurtChargeStartSound; // 0xEB0(0x8)
		UAudioComponent ChargeSoundComp; // 0xEB8(0x8)
		double SprintCooldDownTime; // 0xEC0(0x8)
		UClass GESprintImpactPawn; // 0xEC8(0x8)
		FGameplayTag SprintImpactGameplayCueTag; // 0xED0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xED4(0x4) UNKNOWN PROPERTY
		UClass GESprintImpactVehicle; // 0xED8(0x8)
		FGameplayTag SprintChargeImpact_Default_CueTag; // 0xEE0(0x4)
		FGameplayTag SprintChargeImpact_Pawn_CueTag; // 0xEE4(0x4)
		FGameplayTag SprintChargeImpact_DestroyBuild_CueTag; // 0xEE8(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C");
			return ret;
		}

		void OnReaction(UObject Object, FHitResult HitResult); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D42F26C00
		void HandleRiderStoppedRiding(URiderComponent Rider); // Flags: Event|Protected|BlueprintEvent 0x15D42F26D00
		void HandleRiderStartedRiding(URiderComponent Rider); // Flags: Event|Protected|BlueprintEvent 0x15D42F26E00
		void HandleAbilityStarted(); // Flags: Event|Public|BlueprintEvent 0x15D42F26F00
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent 0x15D42F26A00
		void OnReactionEvent(AActor HitActor, bool bFromAsyncSweepBox, FCollisionReactionType CollisionReactionType, bool bIsFirstContinuousReactionOnDelayableActor, FHitResult& HitResult); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D42F26B00
		void ReceiveEndPlay(TEnumAsByte EndPlayReason); // Flags: Event|Public|BlueprintEvent 0x15D42F26900
		void ExecuteUbergraph_BoarRidableComponent(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D42F27000
	};


	// Class /VehicleCosmetics/Components/BP_VehicleCosmeticsAMUC.BP_VehicleCosmeticsAMUC_C
	// Inherited from UVehicleCosmeticsAssembledMeshUserComponent -> UAssembledMeshUserComponent -> UActorComponent -> UObject
	// Size: 0x14 (0x764 - 0x750)
	class UBP_VehicleCosmeticsAMUC_C : public UVehicleCosmeticsAssembledMeshUserComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x750(0x8)
		AFortAthenaVehicle VehiclePawn; // 0x758(0x8)
		FGameplayTag GC_LoopingApplication; // 0x760(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleCosmetics/Components/BP_VehicleCosmeticsAMUC.BP_VehicleCosmeticsAMUC_C");
			return ret;
		}

		void ApplyInitialGC(); // Flags: BlueprintCallable|BlueprintEvent 0x15D58FE8800
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent 0x15D58FE8600
		void RemoveInitialGC(); // Flags: BlueprintCallable|BlueprintEvent 0x15D58FE8500
		void ExecuteUbergraph_BP_VehicleCosmeticsAMUC(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D58FE8700
	};


	// Class /EventMode/Components/EventMode_Activator_Component.EventMode_Activator_Component_C
	// Inherited from UFortGameFrameworkComponent_EventMode -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x210 - 0x210)
	class UEventMode_Activator_Component_C : public UFortGameFrameworkComponent_EventMode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/EventMode/Components/EventMode_Activator_Component.EventMode_Activator_Component_C");
			return ret;
		}
	};


	// Class /NPCLibrary/Components/BP_PlayerStateCustomFeedMessages.BP_PlayerStateCustomFeedMessages_C
	// Inherited from UFortPlayerStateComponent_CustomFeedMessage -> UFortPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x108 - 0x108)
	class UBP_PlayerStateCustomFeedMessages_C : public UFortPlayerStateComponent_CustomFeedMessage	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/NPCLibrary/Components/BP_PlayerStateCustomFeedMessages.BP_PlayerStateCustomFeedMessages_C");
			return ret;
		}
	};


	// Class /JunoQuests/Components/BP_JunoFTUEQuestTrackerComponent.BP_JunoFTUEQuestTrackerComponent_C
	// Inherited from UJunoControllerComponent_FTUEQuestTracker -> UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xF0 - 0xF0)
	class UBP_JunoFTUEQuestTrackerComponent_C : public UJunoControllerComponent_FTUEQuestTracker	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/JunoQuests/Components/BP_JunoFTUEQuestTrackerComponent.BP_JunoFTUEQuestTrackerComponent_C");
			return ret;
		}
	};

}
