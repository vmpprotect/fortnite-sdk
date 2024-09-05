#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BeanstalkRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class BeanstalkRuntime.BeanAnimNotify_PlaySound
	// Inherited from UAnimNotify -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UBeanAnimNotify_PlaySound : public UAnimNotify	
	{
	public:
		USoundBase* Sound; // 0x38(0x8)
		EBeanAudioEventTypes AudioEventType; // 0x40(0x4)
		EBeanAudioCategories AudioCategory; // 0x44(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanAnimNotify_PlaySound");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanAudioDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UBeanAudioDataAsset : public UDataAsset	
	{
	public:
		TMap<FBeanAudioKey, FBeanAudioSet> SoundListsByCategory; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanAudioDataAsset");
			return ret;
		}

		TMap GetSoundListsByCategory(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF75125BC5C(relative to base address)
	};


	// Class BeanstalkRuntime.BeanCameraModeOverrideComponent
	// Inherited from UFortCameraModeOverrideComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UBeanCameraModeOverrideComponent : public UFortCameraModeOverrideComponent	
	{
	public:
		UClass* BeanCurrentCameraMode; // 0xA8(0x8)
		TWeakObjectPtr<UBeanCharConfigObject*> CharacterConfig; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCameraModeOverrideComponent");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCameraMode_ThirdPerson
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x70 (0x1EA0 - 0x1E30)
	class UBeanCameraMode_ThirdPerson : public UFortCameraMode_ThirdPerson	
	{
	public:
		bool bEnableDraggedBehaviour; // 0x1E30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1E31(0x7) UNKNOWN PROPERTY
		double ControllerYawToleranceForDragEnable; // 0x1E38(0x8)
		FGameplayTagContainer DisableDraggedCameraTags; // 0x1E40(0x20)
		double ResetCameraPitch; // 0x1E60(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x1E68(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCameraMode_ThirdPerson");
			return ret;
		}
	};


	// Class BeanstalkRuntime.FortBeanCharacterAdapter
	// Inherited from AFortStandInPlayerPawn -> AFortPlayerPawnAthena -> AFortPlayerPawn -> AFortPawn -> AFGF_Character -> ACharacter -> APawn -> AActor -> UObject
	// Size: 0x0 (0x5CD0 - 0x5CD0)
	class AFortBeanCharacterAdapter : public AFortStandInPlayerPawn	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.FortBeanCharacterAdapter");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharacter
	// Inherited from AFortBeanCharacterAdapter -> AFortStandInPlayerPawn -> AFortPlayerPawnAthena -> AFortPlayerPawn -> AFortPawn -> AFGF_Character -> ACharacter -> APawn -> AActor -> UObject
	// Size: 0x390 (0x6060 - 0x5CD0)
	class ABeanCharacter : public AFortBeanCharacterAdapter	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x5CD0(0x8) UNKNOWN PROPERTY
		UFortAbilitySet* AbilitySet; // 0x5CD8(0x8)
		UBeanCharAnimInstance* AnimInstance; // 0x5CE0(0x8)
		UMotionWarpingComponent* MotionWarpingComponent; // 0x5CE8(0x8)
		UClass* ConfigurationClass; // 0x5CF0(0x8)
		UInputMappingContext* DefaultMappingContext; // 0x5CF8(0x8)
		UInputAction* DiveAction; // 0x5D00(0x8)
		UInputAction* GrabAction; // 0x5D08(0x8)
		FGameplayTag JumpButtonDiveIconOverrideTag; // 0x5D10(0x4)
		unsigned char UnknownData01_6[0x24]; // 0x5D14(0x24) UNKNOWN PROPERTY
		UBeanCharMovementComponent* MovementComponent; // 0x5D38(0x8)
		UBeanJiggleMotionComponent* JiggleComponent; // 0x5D40(0x8)
		unsigned char UnknownData02_6[0x18]; // 0x5D48(0x18) UNKNOWN PROPERTY
		UBeanCharStateMachine* StateMachine; // 0x5D60(0x8)
		UBeanStreamingManager* BeanStreamManager; // 0x5D68(0x8)
		bool bPressedDive : 1; // 0x5D70:0(0x1)
		unsigned char UnknownData03_5[0x2F]; // 0x5D71(0x2F) UNKNOWN PROPERTY
		UBeanCameraModeOverrideComponent* BeanCameraModeOverrideComponent; // 0x5DA0(0x8)
		UBeanParticleSystemsComponent* ParticleSystemsComponent; // 0x5DA8(0x8)
		UBeanCharGrabComponent* GrabComponent; // 0x5DB0(0x8)
		UBeanCharBeingGrabbedComponent* BeingGrabbedComponent; // 0x5DB8(0x8)
		FGameplayTag GrabFeatureEnabledTag; // 0x5DC0(0x4)
		bool bPressingGrab : 1; // 0x5DC4:0(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x5DC5(0x3) UNKNOWN PROPERTY
		UBeanCharMantleComponent* MantleComponent; // 0x5DC8(0x8)
		bool bWantsToMantle : 1; // 0x5DD0:0(0x1)
		unsigned char UnknownData05_5[0xF]; // 0x5DD1(0xF) UNKNOWN PROPERTY
		UBeanCharRagdollComponent* RagdollComponent; // 0x5DE0(0x8)
		UPhysicsConstraintComponent* RagdollPhysicsConstraint; // 0x5DE8(0x8)
		UCapsuleComponent* RagdollRootCapsule; // 0x5DF0(0x8)
		float CapsuleUnscaledHalfHeight; // 0x5DF8(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x5DFC(0x4) UNKNOWN PROPERTY
		UNetworkPhysicsSettingsComponent* NetworkPhysicsSettingsComponent; // 0x5E00(0x8)
		UBeanCharCollisionManagerComponent* CollisionManagerComponent; // 0x5E08(0x8)
		unsigned char UnknownData07_6[0x10]; // 0x5E10(0x10) UNKNOWN PROPERTY
		UInteractSelection_Base* PushedInteractionSelection; // 0x5E20(0x8)
		unsigned char UnknownData08_6[0x30]; // 0x5E28(0x30) UNKNOWN PROPERTY
		TWeakObjectPtr<UAnimMontage*> MantleAnimationMontage; // 0x5E58(0x20)
		TWeakObjectPtr<UAnimMontage*> GetupAnimationMontage_Front; // 0x5E78(0x20)
		TWeakObjectPtr<UAnimMontage*> GetupAnimationMontage_Left; // 0x5E98(0x20)
		TWeakObjectPtr<UAnimMontage*> GetupAnimationMontage_Right; // 0x5EB8(0x20)
		TWeakObjectPtr<UAnimMontage*> GetupAnimationMontage_Back; // 0x5ED8(0x20)
		TWeakObjectPtr<UAnimMontage*> LandStaggerAnimationMontage; // 0x5EF8(0x20)
		TWeakObjectPtr<UAnimMontage*> LandStaggerAnimationMontageAlt; // 0x5F18(0x20)
		TWeakObjectPtr<UBeanCosmeticBackpackAllowList*> BackpackAllowList; // 0x5F38(0x20)
		bool bCharacterCosmeticsVisibility; // 0x5F58(0x1)
		bool bBackpackCosmeticsVisibility; // 0x5F59(0x1)
		unsigned char UnknownData09_6[0x2]; // 0x5F5A(0x2) UNKNOWN PROPERTY
		float IdleBreakMinTime; // 0x5F5C(0x4)
		float IdleBreakMaxTime; // 0x5F60(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x5F64(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer IdleBreakBlockingTags; // 0x5F68(0x20)
		TArray<FBeanCharIdleBreakDef> IdleBreakAnimations; // 0x5F88(0x10)
		TArray<FBeanCharIdleBreakDef> LobbyIdleBreakAnimations; // 0x5F98(0x10)
		unsigned char UnknownData11_7[0xB8]; // 0x5FA8(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharacter");
			return ret;
		}

		void TriggerRagdoll(FVector& Force, bool bIsViaLaunch); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75125C0B0(relative to base address)
		void ServerPlayEmote(UAthenaDanceItemDefinition* EmoteToPlay, EFortEmotePlayMode PlayMode); // Flags: Net|Native|Event|Protected|NetServer, Memory Exec: 0x7FF75125BFE8(relative to base address)
		void PredictLaunch(TScriptInterface<Class> SourceImpactPredictor, UObject* SourceOptionalSubobject, FVector& LaunchVector); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75125BD30(relative to base address)
		bool IsBeingGrabbed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BD0C(relative to base address)
		UBeanCharRagdollComponent GetRagdollComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BC10(relative to base address)
		UNetworkPhysicsSettingsComponent GetNetworkedPhysicsSettingsComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75125BBDC(relative to base address)
		float GetMeshScale(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BBA8(relative to base address)
		UBeanCharMantleComponent GetMantleComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BB90(relative to base address)
		UBeanJiggleMotionComponent GetJiggleMotionComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BADC(relative to base address)
		UBeanCharGrabComponent GetGrabComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B928(relative to base address)
		UBeanCharConfigObject GetConfiguration(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B800(relative to base address)
		UBeanCharCollisionManagerComponent GetCollisionManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B7C0(relative to base address)
		UBeanCharBeingGrabbedComponent GetBeingGrabbedComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B78C(relative to base address)
		UBeanCharMovementComponent GetBeanCharacterMovement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B768(relative to base address)
		UBeanCharAnimInstance GetBeanAnimInstance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B750(relative to base address)
		TArray GetAllCosmeticMaterials(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B6DC(relative to base address)
		void Debug_ServerActivateRagdoll(FVector Force); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults, Memory Exec: 0x7FF75125B5B8(relative to base address)
		void Client_TeleportSucceeded(); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF75125B590(relative to base address)
		void Client_OnTeleport(FVector Location, FRotator Rotation); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient, Memory Exec: 0x7FF75125B3BC(relative to base address)
		void BP_OnBeanLocalInteractFailed(AActor* Interactable); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class BeanstalkRuntime.BeanCharAnimInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x188 (0x540 - 0x3B8)
	class UBeanCharAnimInstance : public UAnimInstance	
	{
	public:
		bool bIsSimulatedProxy; // 0x3B8(0x1)
		EBeanCharStateID UpperStateID; // 0x3B9(0x1)
		EBeanCharStateID LowerStateID; // 0x3BA(0x1)
		EBeanCharStateID PrevLowerStateID; // 0x3BB(0x1)
		TEnumAsByte<EMovementMode> MovementMode; // 0x3BC(0x1)
		bool bIsMoving; // 0x3BD(0x1)
		bool bIsGrounded; // 0x3BE(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3BF(0x1) UNKNOWN PROPERTY
		float TurningPercentage; // 0x3C0(0x4)
		float SpeedPercentage; // 0x3C4(0x4)
		FVector CurrentVelocity; // 0x3C8(0x18)
		bool bIsAnticipatingJumpLanding; // 0x3E0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x3E1(0x7) UNKNOWN PROPERTY
		FVector LastRagdollImpactForce; // 0x3E8(0x18)
		FVector LastImpactForce; // 0x400(0x18)
		FVector LastImpactRelativeDirection; // 0x418(0x18)
		EBeanCharTurn180State TurnState; // 0x430(0x1)
		bool bIsGrabbing; // 0x431(0x1)
		bool bHasGrabTarget; // 0x432(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x433(0x1) UNKNOWN PROPERTY
		float GrabStumbleDuration; // 0x434(0x4)
		FVector LeftHandIKPosition; // 0x438(0x18)
		FVector RightHandIKPosition; // 0x450(0x18)
		FRotator LeftHandIKRotation; // 0x468(0x18)
		FRotator RightHandIKRotation; // 0x480(0x18)
		float IKAlpha; // 0x498(0x4)
		bool bUseImpactAnims; // 0x49C(0x1)
		bool bImpactTriggered; // 0x49D(0x1)
		EBeanImpactAnimType ImpactAnimType; // 0x49E(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x49F(0x1) UNKNOWN PROPERTY
		float LowImpactUpperThresholdReciprocal; // 0x4A0(0x4)
		float MediumImpactUpperThresholdReciprocal; // 0x4A4(0x4)
		float HighImpactUpperThresholdReciprocal; // 0x4A8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x4AC(0x4) UNKNOWN PROPERTY
		FRotator JiggleRotator0; // 0x4B0(0x18)
		FRotator JiggleRotator1; // 0x4C8(0x18)
		FRotator JiggleRotator2; // 0x4E0(0x18)
		bool bLowerStateUsesLocomotionAnim; // 0x4F8(0x1)
		TEnumAsByte<EFortWeaponCoreAnimation> WeaponCoreAnim; // 0x4F9(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x4FA(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr<UBeanCharConfigObject*> BeanCharacterConfig; // 0x4FC(0x8)
		unsigned char UnknownData06_7[0x3C]; // 0x504(0x3C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharAnimInstance");
			return ret;
		}

		ABeanCharacter TryGetBeanCharacter(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125C204(relative to base address)
		UBeanCharConfigObject GetConfig(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B7D8(relative to base address)
	};


	// Class BeanstalkRuntime.BeanCharAudioPlayerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UBeanCharAudioPlayerComponent : public UActorComponent	
	{
	public:
		UBeanAudioDataAsset* AudioData; // 0xA0(0x8)
		unsigned char UnknownData00_7[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharAudioPlayerComponent");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharBeingGrabbedComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UBeanCharBeingGrabbedComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0xA0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharBeingGrabbedComponent");
			return ret;
		}

		FVector GetGrabbeeDragForce(float DragDuration, FVector& LocationOffset); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B940(relative to base address)
	};


	// Class BeanstalkRuntime.BeanCharCollisionManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x70 (0x110 - 0xA0)
	class UBeanCharCollisionManagerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x58]; // 0xA0(0x58) UNKNOWN PROPERTY
		double MaxConfigImpactThreshold; // 0xF8(0x8)
		double NextImpactCueExecution; // 0x100(0x8)
		float RagdollThresholdMultiplier; // 0x108(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharCollisionManagerComponent");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharConfigObject
	// Inherited from UObject
	// Size: 0xA50 (0xA78 - 0x28)
	class UBeanCharConfigObject : public UObject	
	{
	public:
		FBeanCharInteractionsConfig Interaction; // 0x28(0xF0)
		FBeanCharMovementConfig Movement; // 0x118(0x278)
		FBeanCharJumpConfig Jump; // 0x390(0x48)
		FBeanCharDiveConfig Dive; // 0x3D8(0x58)
		FBeanCharImpactConfig Impact; // 0x430(0x190)
		FBeanCharStaggerConfig Stagger; // 0x5C0(0xC)
		unsigned char UnknownData00_6[0x4]; // 0x5CC(0x4) UNKNOWN PROPERTY
		FBeanCharRagdollConfig Ragdoll; // 0x5D0(0x198)
		FBeanCharRollConfig Roll; // 0x768(0x28)
		FBeanCharGrabConfig Grab; // 0x790(0xD0)
		FBeanCharGetupConfig Getup; // 0x860(0x28)
		FBeanCharGetupRollConfig GetupRoll; // 0x888(0x10)
		FBeanCharMantleConfig Mantle; // 0x898(0xC0)
		FBeanCharJostleConfig Jostle; // 0x958(0x30)
		FBeanCharCameraConfig Camera; // 0x988(0x18)
		FBeanCharCosmeticConfig Cosmetics; // 0x9A0(0x10)
		FBeanCharSwimmingConfig Swimming; // 0x9B0(0x20)
		FBeanCharZiplineConfig Zipline; // 0x9D0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x9D4(0x4) UNKNOWN PROPERTY
		FBeanCharJiggleConfig Jiggle; // 0x9D8(0x70)
		FBeanCharHUDConfig HUD; // 0xA48(0x20)
		FBeanCharTouchControlsConfig TouchControls; // 0xA68(0xC)
		unsigned char UnknownData02_7[0x4]; // 0xA74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharConfigObject");
			return ret;
		}

		FBeanCharZiplineConfig GetZipline(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BCF0(relative to base address)
		FBeanCharTouchControlsConfig GetTouchControls(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BCC8(relative to base address)
		FBeanCharSwimmingConfig GetSwimming(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BCA0(relative to base address)
		FBeanCharStaggerConfig GetStagger(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BC78(relative to base address)
		FBeanCharRollConfig GetRoll(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BC28(relative to base address)
		FBeanCharRagdollConfig GetRagdoll(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BBF4(relative to base address)
		FBeanCharMovementConfig GetMovement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BBC0(relative to base address)
		FBeanCharMantleConfig GetMantle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BB74(relative to base address)
		FBeanCharJumpConfig GetJump(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BB28(relative to base address)
		FBeanCharJostleConfig GetJostle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BAF4(relative to base address)
		FBeanCharJiggleConfig GetJiggle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BAC0(relative to base address)
		FBeanCharInteractionsConfig GetInteraction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BAA4(relative to base address)
		FBeanCharImpactConfig GetImpact(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BA88(relative to base address)
		FBeanCharHUDConfig GetHUD(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125BA6C(relative to base address)
		FBeanCharGrabConfig GetGrab(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B894(relative to base address)
		FBeanCharGetupRollConfig GetGetupRoll(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B878(relative to base address)
		FBeanCharGetupConfig GetGetup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B85C(relative to base address)
		FBeanCharDiveConfig GetDive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B840(relative to base address)
		FBeanCharCosmeticConfig GetCosmetics(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B824(relative to base address)
		FBeanCharCameraConfig GetCamera(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125B7A4(relative to base address)
	};


	// Class BeanstalkRuntime.BeanCharEmoteComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UBeanCharEmoteComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		TArray<UAnimMontage*> EmotesEquipped; // 0xB8(0x10)
		float EmoteInterruptBlendTime; // 0xC8(0x4)
		int32_t CurrentlyPlayingEmoteIndex; // 0xCC(0x4)
		unsigned char UnknownData01_7[0x28]; // 0xD0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharEmoteComponent");
			return ret;
		}

		void Server_PlayEmote(int32_t EmoteIndex); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF74EAE6A68(relative to base address)
		void OnRep_CurrentlyPlayingEmoteIndex(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75125E784(relative to base address)
	};


	// Class BeanstalkRuntime.BeanCharGrabComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x118 (0x1B8 - 0xA0)
	class UBeanCharGrabComponent : public UActorComponent	
	{
	public:
		UAnimMontage* ArmsOutMontage; // 0xA0(0x8)
		FVector LeftHandIKPosition; // 0xA8(0x18)
		FVector RightHandIKPosition; // 0xC0(0x18)
		FRotator LeftHandIKRotation; // 0xD8(0x18)
		FRotator RightHandIKRotation; // 0xF0(0x18)
		float IKAlpha; // 0x108(0x4)
		bool bHasIKTarget; // 0x10C(0x1)
		bool bIsGrabStumbling; // 0x10D(0x1)
		unsigned char UnknownData00_6[0x22]; // 0x10E(0x22) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> GrabTarget; // 0x130(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x138(0x10) UNKNOWN PROPERTY
		float ServerLatestHoldStartTime; // 0x148(0x4)
		unsigned char UnknownData02_7[0x6C]; // 0x14C(0x6C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharGrabComponent");
			return ret;
		}

		void OnRep_ServerLatestHoldStartTime(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75125E7D0(relative to base address)
		void OnRep_GrabTarget(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75125E7BC(relative to base address)
		void HandleOnPawnJumped(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75125E42C(relative to base address)
		FVector GetGrabberDragForce(float DragDuration); // Flags: Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75125E190(relative to base address)
	};


	// Class BeanstalkRuntime.BeanCharMantleComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UBeanCharMantleComponent : public UActorComponent	
	{
	public:
		FScalableFloat ClamberingEnabled; // 0xA0(0x28)
		TWeakObjectPtr<ABeanCharacter*> BeanCharacter; // 0xC8(0x8)
		float CachedClamberingEnabledValue; // 0xD0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		double LastClamberingEnabledCacheTime; // 0xD8(0x8)
		double ClamberingEnableCacheInterval; // 0xE0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharMantleComponent");
			return ret;
		}
	};


	// Class BeanstalkRuntime.FortBeanCharacterMovementAdapter
	// Inherited from UFortMovementComp_CharacterAthena -> UFortMovementComp_Character -> UCharacterMovementComponent -> UPawnMovementComponent -> UNavMovementComponent -> UMovementComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x56E0 - 0x56E0)
	class UFortBeanCharacterMovementAdapter : public UFortMovementComp_CharacterAthena	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.FortBeanCharacterMovementAdapter");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharMovementComponent
	// Inherited from UFortBeanCharacterMovementAdapter -> UFortMovementComp_CharacterAthena -> UFortMovementComp_Character -> UCharacterMovementComponent -> UPawnMovementComponent -> UNavMovementComponent -> UMovementComponent -> UActorComponent -> UObject
	// Size: 0xAC0 (0x61A0 - 0x56E0)
	class UBeanCharMovementComponent : public UFortBeanCharacterMovementAdapter	
	{
	public:
		unsigned char UnknownData00_3[0x98C]; // 0x56E0(0x98C) UNKNOWN PROPERTY
		float MovementBaseVelocitySamplingPeriod; // 0x606C(0x4)
		TWeakObjectPtr<UPrimitiveComponent*> CurrentSampledMovementBase; // 0x6070(0x8)
		unsigned char UnknownData01_6[0x109]; // 0x6078(0x109) UNKNOWN PROPERTY
		bool bAllowFloorHeightAdjustments; // 0x6181(0x1)
		EBeanCharTurn180State TurnState; // 0x6182(0x1)
		unsigned char UnknownData02_6[0xD]; // 0x6183(0xD) UNKNOWN PROPERTY
		TWeakObjectPtr<UBeanCharConfigObject*> CharConfig; // 0x6190(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x6198(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharMovementComponent");
			return ret;
		}

		void SetTurn180State(EBeanCharTurn180State NewTurnState); // Flags: Final|Native|Public, Memory Exec: 0x7FF75125EE14(relative to base address)
		void ServerSuggestImpartedMovementBaseVelocity(FVector ImpartedVelocity, float Timestamp); // Flags: Final|Net|Native|Event|Private|NetServer|HasDefaults, Memory Exec: 0x7FF75125EBA8(relative to base address)
		void ServerRequestPredictLaunch(UObject* SourceObject, UObject* SourceOptionalSubobject, FVector LaunchVector, float MovementTimestamp); // Flags: Net|Native|Event|Public|NetServer|HasDefaults, Memory Exec: 0x7FF75125E96C(relative to base address)
		void Server_SetDebugForceCorrection(EBeanDebugForceCorrectionMode Mode); // Flags: Net|Native|Event|Protected|NetServer, Memory Exec: 0x7FF74E2263E0(relative to base address)
		EBeanCharTurn180State GetTurn180State(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125E414(relative to base address)
		ABeanCharacter GetBeanCharacter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125E138(relative to base address)
		void ApplyKnockbackImpulse(FVector& Force); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75125D960(relative to base address)
	};


	// Class BeanstalkRuntime.BeanCharRagdollComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x300 (0x3A0 - 0xA0)
	class UBeanCharRagdollComponent : public UActorComponent	
	{
	public:
		FComponentReference PhysicsConstraintComponentReference; // 0xA0(0x28)
		FComponentReference RootPrimitiveReference; // 0xC8(0x28)
		FComponentReference SkeletalMeshReference; // 0xF0(0x28)
		unsigned char UnknownData00_6[0x1]; // 0x118(0x1) UNKNOWN PROPERTY
		bool bIsConfiguredCorrectly; // 0x119(0x1)
		bool bHasRequestedRagdollExit; // 0x11A(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x11B(0x5) UNKNOWN PROPERTY
		FTransform StartingMeshTransform; // 0x120(0x60)
		FCollisionResponseContainer OriginalActorRootCollisionResponse; // 0x180(0x20)
		unsigned char UnknownData02_6[0x48]; // 0x1A0(0x48) UNKNOWN PROPERTY
		FVector RagdollControlInputVector; // 0x1E8(0x18)
		bool bIsRagdollGrounded; // 0x200(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x201(0x3) UNKNOWN PROPERTY
		float TimeOnGround; // 0x204(0x4)
		unsigned char UnknownData04_6[0x8]; // 0x208(0x8) UNKNOWN PROPERTY
		FVector LatestRagdollFloorOffset; // 0x210(0x18)
		FBeanCharRagdollImpactData CurrentImpactData; // 0x228(0x40)
		float CurrentGravityZOverride; // 0x268(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x26C(0x4) UNKNOWN PROPERTY
		FVector CurrentAdditionalGravity; // 0x270(0x18)
		unsigned char UnknownData06_6[0x10]; // 0x288(0x10) UNKNOWN PROPERTY
		TArray<int32_t> CachedMeshBodyIndexesForCCD; // 0x298(0x10)
		double LowerLinearDistanceTarget; // 0x2A8(0x8)
		double UpperLinearDistanceTarget; // 0x2B0(0x8)
		float DefaultHardSnapLinearDistance; // 0x2B8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x2BC(0x4) UNKNOWN PROPERTY
		double MaxHardsnapLinearDistance; // 0x2C0(0x8)
		bool bHasAddedIgnoredObjects; // 0x2C8(0x1)
		unsigned char UnknownData08_6[0xAF]; // 0x2C9(0xAF) UNKNOWN PROPERTY
		FBeanRagdollDebugComponentHistory RagdollComponentHistory; // 0x378(0x20)
		unsigned char UnknownData09_7[0x8]; // 0x398(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharRagdollComponent");
			return ret;
		}

		void SetRagdollEnabled(bool bShouldEnable); // Flags: Final|Native|Public, Memory Exec: 0x7FF75125ED94(relative to base address)
		void ServerRPCRagdollControlInput(FVector InputVector); // Flags: Net|Native|Event|Public|NetServer|HasDefaults, Memory Exec: 0x7FF75125E848(relative to base address)
		void Server_SignalClientExitedRagdoll(); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF75125ED80(relative to base address)
		void RequestRagdollExit(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75125E834(relative to base address)
		void OnRagdollRootPrimitiveHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // Flags: Final|Native|Protected|HasOutParms|HasDefaults, Memory Exec: 0x7FF75125E440(relative to base address)
		void Client_SignalRagdollExit(FVector EndLocation, FQuat EndRotation, FVector EndVelocity); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient, Memory Exec: 0x7FF75125DDEC(relative to base address)
		void Client_CleanupRagdollForAbruptExit(); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF75125DC70(relative to base address)
		void CleanupRagdollForAbruptExit(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75125DA24(relative to base address)
		void ApplyImpulse(FVector& Force, bool bIsLaunch); // Flags: Final|Native|Public|HasOutParms|HasDefaults, Memory Exec: 0x7FF75125D80C(relative to base address)
	};


	// Class BeanstalkRuntime.BeanCharStateBase
	// Inherited from UObject
	// Size: 0x170 (0x198 - 0x28)
	class UBeanCharStateBase : public UObject	
	{
	public:
		EBeanCharStateID StateId; // 0x28(0x1)
		EBeanCharStateLayerMask LayerMask; // 0x29(0x1)
		TEnumAsByte<EMovementMode> MovementMode; // 0x2A(0x1)
		TEnumAsByte<EFortCustomMovement> FortCustomMovementMode; // 0x2B(0x1)
		FGameplayTag GameplayTag; // 0x2C(0x4)
		FGameplayCueTag GameplayCue; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FGameplayCueParameters GameplayCueParameters; // 0x38(0xD0)
		bool bShouldSetMovementMode; // 0x108(0x1)
		bool bReplicateToSimulatedProxies; // 0x109(0x1)
		bool bExecuteCodeOnSimulatedProxies; // 0x10A(0x1)
		bool bTryActivateFailsIfAlreadyActive; // 0x10B(0x1)
		bool bServerMustFlushStateManually; // 0x10C(0x1)
		bool bFlushPendingStateChangesOnStateExit; // 0x10D(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x10E(0x2) UNKNOWN PROPERTY
		int32_t Priority; // 0x110(0x4)
		bool bShouldRemainVertical; // 0x114(0x1)
		bool bCanPerformMantle; // 0x115(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x116(0x2) UNKNOWN PROPERTY
		float DecelerationOverride; // 0x118(0x4)
		bool bPauseJiggleCalculations; // 0x11C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x11D(0x3) UNKNOWN PROPERTY
		UBeanCharStateMachine* OwnerStateMachine; // 0x120(0x8)
		TArray<uint16_t> RootMotionSourceIDs; // 0x128(0x10)
		FGameplayTagContainer GrantedTags; // 0x138(0x20)
		FGameplayTagContainer BlockedTags; // 0x158(0x20)
		FGameplayTagContainer BlockedAbilityTags; // 0x178(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharStateBase");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharStateMachine
	// Inherited from UActorComponent -> UObject
	// Size: 0x100 (0x1A0 - 0xA0)
	class UBeanCharStateMachine : public UActorComponent	
	{
	public:
		bool bIsInitialized; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		FBeanCharStateMachineContext Layers; // 0xA8(0x60)
		unsigned char UnknownData01_6[0x28]; // 0x108(0x28) UNKNOWN PROPERTY
		TArray<UBeanCharStateBase*> TempTickStateList; // 0x130(0x10)
		TArray<UBeanCharStateBase*> States; // 0x140(0x10)
		unsigned char UnknownData02_6[0x10]; // 0x150(0x10) UNKNOWN PROPERTY
		bool bFlushMoveToServerAtEndOfFrame; // 0x160(0x1)
		bool bFlushPendingStateChangesAtEndOfFrame; // 0x161(0x1)
		bool bIsReplaying; // 0x162(0x1)
		EBeanCharStateID ServerForceSetUpperState; // 0x163(0x1)
		EBeanCharStateID ServerForceSetLowerState; // 0x164(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x165(0x1) UNKNOWN PROPERTY
		uint16_t SimulatedProxyStateData; // 0x166(0x2)
		uint32_t AutonomousProxyServerStateData; // 0x168(0x4)
		char StateSyncID; // 0x16C(0x1)
		char ServerStateSyncID; // 0x16D(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x16E(0x2) UNKNOWN PROPERTY
		TArray<FBeanStateHistoryItem> AutonomousProxyStateHistory; // 0x170(0x10)
		float AutonomousProxyServerStateCheckTimer; // 0x180(0x4)
		float RequestClientStateChangeTimeout; // 0x184(0x4)
		EBeanCharStateID RequestClientStateChangePendingStateID; // 0x188(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x189(0x7) UNKNOWN PROPERTY
		TArray<FBeanStateGameplayTagsDefinition> StateTagsDefinitions; // 0x190(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharStateMachine");
			return ret;
		}

		void ServerRPC_RequestClientChangeStateResponse(EBeanCharStateID StateId); // Flags: Final|Net|Native|Event|Private|NetServer, Memory Exec: 0x7FF750CD4DAC(relative to base address)
		void OnRep_SimulatedProxyStateData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75125E820(relative to base address)
		void OnRep_AutonomousProxyStateData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75125E714(relative to base address)
		EBeanCharStateID GetStateId(EBeanCharStateLayerID LayerId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125E388(relative to base address)
		float GetStateActiveDuration(EBeanCharStateID StateId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125E2EC(relative to base address)
		UClass GetState(EBeanCharStateLayerID LayerId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75125E234(relative to base address)
		void Debug_RequestClientChangesState(EBeanCharStateID StateId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75125E0B8(relative to base address)
		void ClientRPC_RequestClientChangesState(EBeanCharStateID StateId, FVector Location, FRotator Rotation); // Flags: Final|Net|Native|Event|Private|HasDefaults|NetClient, Memory Exec: 0x7FF75125DA38(relative to base address)
		void Client_ForceSetState(EBeanCharStateID StateUP, EBeanCharStateID StateLW, char SyncId, bool bResetPredictionData); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF75125DCB0(relative to base address)
	};


	// Class BeanstalkRuntime.BeanCharState_Dive
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x8 (0x1A0 - 0x198)
	class UBeanCharState_Dive : public UBeanCharStateBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x198(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Dive");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_Emote
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x8 (0x1A0 - 0x198)
	class UBeanCharState_Emote : public UBeanCharStateBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x198(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Emote");
			return ret;
		}

		void OnEmoteFinishedCallback(int32_t EmoteIndex, bool bWasInterruption); // Flags: Final|Native|Private, Memory Exec: 0x7FF751268B7C(relative to base address)
	};


	// Class BeanstalkRuntime.BeanCharState_Falling
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x8 (0x1A0 - 0x198)
	class UBeanCharState_Falling : public UBeanCharStateBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x198(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Falling");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_Flying
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x0 (0x198 - 0x198)
	class UBeanCharState_Flying : public UBeanCharStateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Flying");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_Getup
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x98 (0x230 - 0x198)
	class UBeanCharState_Getup : public UBeanCharStateBase	
	{
	public:
		unsigned char UnknownData00_3[0x50]; // 0x198(0x50) UNKNOWN PROPERTY
		UAnimMontage* ActiveAnim; // 0x1E8(0x8)
		unsigned char UnknownData01_7[0x40]; // 0x1F0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Getup");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_GetupRoll
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x48 (0x1E0 - 0x198)
	class UBeanCharState_GetupRoll : public UBeanCharStateBase	
	{
	public:
		unsigned char UnknownData00_1[0x48]; // 0x198(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_GetupRoll");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_Grab
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x0 (0x198 - 0x198)
	class UBeanCharState_Grab : public UBeanCharStateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Grab");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_GrabStumble
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x0 (0x198 - 0x198)
	class UBeanCharState_GrabStumble : public UBeanCharStateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_GrabStumble");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_Grounded
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x20 (0x1B8 - 0x198)
	class UBeanCharState_Grounded : public UBeanCharStateBase	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x198(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Grounded");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_Jostle
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x60 (0x1F8 - 0x198)
	class UBeanCharState_Jostle : public UBeanCharStateBase	
	{
	public:
		FVector SeparationForce; // 0x198(0x18)
		unsigned char UnknownData00_7[0x48]; // 0x1B0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Jostle");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_Jump
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x18 (0x1B0 - 0x198)
	class UBeanCharState_Jump : public UBeanCharStateBase	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x198(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Jump");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_Mantle
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x50 (0x1E8 - 0x198)
	class UBeanCharState_Mantle : public UBeanCharStateBase	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x198(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Mantle");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_Ragdoll
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x28 (0x1C0 - 0x198)
	class UBeanCharState_Ragdoll : public UBeanCharStateBase	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x198(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Ragdoll");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_Roll
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x8 (0x1A0 - 0x198)
	class UBeanCharState_Roll : public UBeanCharStateBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x198(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Roll");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_Staggered
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x10 (0x1A8 - 0x198)
	class UBeanCharState_Staggered : public UBeanCharStateBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x198(0x8) UNKNOWN PROPERTY
		UAnimMontage* CurrentMontage; // 0x1A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Staggered");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_SurfaceSwimming
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x0 (0x198 - 0x198)
	class UBeanCharState_SurfaceSwimming : public UBeanCharStateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_SurfaceSwimming");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_WaterJump
	// Inherited from UBeanCharState_Jump -> UBeanCharStateBase -> UObject
	// Size: 0x0 (0x1B0 - 0x1B0)
	class UBeanCharState_WaterJump : public UBeanCharState_Jump	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_WaterJump");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharState_Zipline
	// Inherited from UBeanCharStateBase -> UObject
	// Size: 0x0 (0x198 - 0x198)
	class UBeanCharState_Zipline : public UBeanCharStateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharState_Zipline");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCharUnpinningComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UBeanCharUnpinningComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0xA0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCharUnpinningComponent");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UBeanCheatManager : public UChildCheatManager	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCheatManager");
			return ret;
		}

		void SwitchToBeanPawn(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SwitchBackFromBeanPawn(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void RespawnAsDefaultPawn(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void BeanUnlockPlayerActionByTag(FString TagString); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void BeanUnlockBuildMode(bool bUnlock); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C079284(relative to base address)
		void BeanTogglePickupRestrictions(bool bApplyRestrictions); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C079284(relative to base address)
		void BeanToggleAbilityRestrictions(bool bApplyRestrictions); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C079284(relative to base address)
		void BeanSetGlobalRagdollThreshold(float Threshold); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF751268A18(relative to base address)
		void BeanRelockPlayerActionByTag(FString TagString); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void BeanEnableGetupSpeedModifier(bool bEnabled); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF751268998(relative to base address)
		void BeanEnableBeanInEditMode(bool bEnabled); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF751268918(relative to base address)
		void BeanDisallowItemInteractionByTag(FString TagString); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void BeanAllowItemInteractionByTag(FString TagString); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C7B3138(relative to base address)
	};


	// Class BeanstalkRuntime.BeanCosmeticBackpackAllowList
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UBeanCosmeticBackpackAllowList : public UDataAsset	
	{
	public:
		TSet<TWeakObjectPtr> AllowedBackpacks; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanCosmeticBackpackAllowList");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanGrabbable
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBeanGrabbable : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanGrabbable");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanJiggleMotionComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x208 (0x2A8 - 0xA0)
	class UBeanJiggleMotionComponent : public UActorComponent	
	{
	public:
		FRuntimeFloatCurve VelocityCurve; // 0xA0(0x88)
		unsigned char UnknownData00_6[0x30]; // 0x128(0x30) UNKNOWN PROPERTY
		TArray<FQuat> CurrentBoneRotations; // 0x158(0x10)
		TArray<FQuat> TargetBoneRotations; // 0x168(0x10)
		TArray<FRotator> CurrentInterpolatedBoneRotations; // 0x178(0x10)
		unsigned char UnknownData01_7[0x120]; // 0x188(0x120) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanJiggleMotionComponent");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanLaunchPredictorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBeanLaunchPredictorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanLaunchPredictorInterface");
			return ret;
		}

		bool ValidateLaunch(FBeanPredictedLaunch& PredictedLaunch); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751268C48(relative to base address)
	};


	// Class BeanstalkRuntime.BeanParticleSystemsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UBeanParticleSystemsComponent : public UActorComponent	
	{
	public:
		TMap<EBeanParticleVfxTypes, TWeakObjectPtr> VfxParticleSystemsMap; // 0xA0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanParticleSystemsComponent");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanStreamingManager
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UBeanStreamingManager : public UObject	
	{
	public:
		TSet<UObject*> LoadedAssets; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanStreamingManager");
			return ret;
		}
	};


	// Class BeanstalkRuntime.FortAthenaMutator_BeanGameStateCore
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x0 (0x338 - 0x338)
	class AFortAthenaMutator_BeanGameStateCore : public AFortAthenaMutator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.FortAthenaMutator_BeanGameStateCore");
			return ret;
		}
	};


	// Class BeanstalkRuntime.FortAthenaMutator_BeanPlayerPawn
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x20 (0x358 - 0x338)
	class AFortAthenaMutator_BeanPlayerPawn : public AFortAthenaMutator	
	{
	public:
		TWeakObjectPtr<UClass*> OverridePawnClass; // 0x338(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.FortAthenaMutator_BeanPlayerPawn");
			return ret;
		}
	};


	// Class BeanstalkRuntime.FortAutomationRpcManager_Beanstalk
	// Inherited from UFortAutomationRpcManager -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UFortAutomationRpcManager_Beanstalk : public UFortAutomationRpcManager	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x68(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.FortAutomationRpcManager_Beanstalk");
			return ret;
		}

		void OnCharacterOverlap_Jump(AActor* OverlappedActor, AActor* OtherActor); // Flags: Final|Native|Public, Memory Exec: 0x7FF74C8E74BC(relative to base address)
		void OnCharacterOverlap_Dive(AActor* OverlappedActor, AActor* OtherActor); // Flags: Final|Native|Public, Memory Exec: 0x7FF74C8E74BC(relative to base address)
		void OnCharacterOverlap_BroadcastMessage(AActor* OverlappedActor, AActor* OtherActor); // Flags: Final|Native|Public, Memory Exec: 0x7FF74C8E74BC(relative to base address)
		void OnBeanStateChanged_Grounded_ResetDive(EBeanCharStateID StateId, EBeanCharStateLayerID LayerId, bool bIsReplaying); // Flags: Final|Native|Public, Memory Exec: 0x7FF751268A98(relative to base address)
		void OnBeanStateChanged_BroadcastMessage(EBeanCharStateID StateId, EBeanCharStateLayerID LayerId, bool bIsReplaying); // Flags: Final|Native|Public, Memory Exec: 0x7FF751268A98(relative to base address)
		void OnBeanStateChanged_AddToHistory(EBeanCharStateID StateId, EBeanCharStateLayerID LayerId, bool bIsReplaying); // Flags: Final|Native|Public, Memory Exec: 0x7FF751268A98(relative to base address)
	};


	// Class BeanstalkRuntime.FortPickupInteractOverrideComponent_Beanstalk
	// Inherited from UFortPickupInteractOverrideComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UFortPickupInteractOverrideComponent_Beanstalk : public UFortPickupInteractOverrideComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.FortPickupInteractOverrideComponent_Beanstalk");
			return ret;
		}
	};


	// Class BeanstalkRuntime.InteractSelection_BeanPawn
	// Inherited from UInteractSelection_Base -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UInteractSelection_BeanPawn : public UInteractSelection_Base	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.InteractSelection_BeanPawn");
			return ret;
		}
	};


	// Class BeanstalkRuntime.BeanstalkFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBeanstalkFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkRuntime.BeanstalkFunctionLibrary");
			return ret;
		}

		bool SwitchToBeanPawn(AFortPlayerController* PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751292E58(relative to base address)
		void SwitchBackFromBeanPawn(AFortPlayerController* PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751292DC8(relative to base address)
		bool CanPlayerSwitchToBeanNow(AFortPlayerController* PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751292D04(relative to base address)
		bool CanPawnSwitchToBeanNow(AFortPlayerPawn* PlayerPawn); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751292B64(relative to base address)
	};

}
