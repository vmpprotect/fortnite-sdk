#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Abilities
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/Abilities/B_FortGlobalAbilityTargetingActor.B_FortGlobalAbilityTargetingActor_C
	// Inherited from AFortGlobalAbilityTargetingActor -> AInfo -> AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class AB_FortGlobalAbilityTargetingActor_C : public AFortGlobalAbilityTargetingActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/B_FortGlobalAbilityTargetingActor.B_FortGlobalAbilityTargetingActor_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Generic/GE_HealthRegen.GE_HealthRegen_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_HealthRegen_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GE_HealthRegen.GE_HealthRegen_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Traps/Generic/GE_TrapArmGeneric.GE_TrapArmGeneric_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_TrapArmGeneric_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Traps/Generic/GE_TrapArmGeneric.GE_TrapArmGeneric_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Traps/Generic/GA_TrapBuildGeneric.GA_TrapBuildGeneric_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0xC (0xB4C - 0xB40)
	class UGA_TrapBuildGeneric_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		FGameplayTag PlacedCue; // 0xB48(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Traps/Generic/GA_TrapBuildGeneric.GA_TrapBuildGeneric_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D66971700
		void ExecuteUbergraph_GA_TrapBuildGeneric(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D66971800
	};


	// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_ShieldRegen_Delay_Damaged.GE_ShieldRegen_Delay_Damaged_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_ShieldRegen_Delay_Damaged_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GameplayEffects/GE_ShieldRegen_Delay_Damaged.GE_ShieldRegen_Delay_Damaged_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_HealthRegen_Delay_Damaged.GE_HealthRegen_Delay_Damaged_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_HealthRegen_Delay_Damaged_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GameplayEffects/GE_HealthRegen_Delay_Damaged.GE_HealthRegen_Delay_Damaged_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_Revive.GE_Generic_Revive_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Generic_Revive_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_Revive.GE_Generic_Revive_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_HealthRegen.GE_Generic_HealthRegen_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Generic_HealthRegen_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_HealthRegen.GE_Generic_HealthRegen_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_ExtraLifeRevive.GE_ExtraLifeRevive_C
	// Inherited from UGE_Generic_Revive_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_ExtraLifeRevive_C : public UGE_Generic_Revive_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GameplayEffects/GE_ExtraLifeRevive.GE_ExtraLifeRevive_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
	// Inherited from AFortPlayerPawn -> AFortPawn -> AFGF_Character -> ACharacter -> APawn -> AActor -> UObject
	// Size: 0xE0 (0x4BA0 - 0x4AC0)
	class APlayerPawn_Generic_Parent_C : public AFortPlayerPawn	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4AC0(0x8)
		TArray Default_Weapon_Materials; // 0x4AC8(0x10)
		TArray PawnBackpackMaterials; // 0x4AD8(0x10)
		TArray PawnHatMaterials; // 0x4AE8(0x10)
		TArray PawnHeadMaterials; // 0x4AF8(0x10)
		TArray PawnBodyMaterials; // 0x4B08(0x10)
		TArray PawnCharmMaterials; // 0x4B18(0x10)
		TArray PawnFaceMaterials; // 0x4B28(0x10)
		UPostProcessComponent PlayerPostProcessFX; // 0x4B38(0x8)
		TArray SkeletalMeshes; // 0x4B40(0x10)
		TArray PawnMaterials_ALL; // 0x4B50(0x10)
		int32_t WaterCounter; // 0x4B60(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4B64(0x4) UNKNOWN PROPERTY
		AActor CurrentWaterMeshActor; // 0x4B68(0x8)
		bool IsInWater; // 0x4B70(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x4B71(0x7) UNKNOWN PROPERTY
		double Time_when_you_ll_be_able_to_splash_again; // 0x4B78(0x8)
		FMulticastInlineDelegate OnOverlapWaterVolume; // 0x4B80(0x10)
		TArray PawnPartMaterials; // 0x4B90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C");
			return ret;
		}

		void Find Stored Char Part Materials(TEnumAsByte PartType, bool& Found, int32_t& Index, TArray& MIDs); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D76896700
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D76896400
		void Exited/Entered Water Volume(); // Flags: BlueprintCallable|BlueprintEvent 0x15D76896800
		void Player Creates a Splash(FTransform& NewTransform); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D76896500
		void ReinitializeWeaponMaterials(); // Flags: BlueprintCallable|BlueprintEvent 0x15D7689A500
		void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D76896900
		void OnOverlapWaterVolume__DelegateSignature(bool bIsInWater, AFortPlayerPawn Pawn, AActor Water); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D76896600
	};


	// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_ShieldRegen.GE_Generic_ShieldRegen_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Generic_ShieldRegen_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_ShieldRegen.GE_Generic_ShieldRegen_C");
			return ret;
		}
	};


	// Class /Game/Abilities/NPC/Generic/GE_ImpactImmunity.GE_ImpactImmunity_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_ImpactImmunity_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GE_ImpactImmunity.GE_ImpactImmunity_C");
			return ret;
		}
	};


	// Class /Game/Abilities/NPC/Generic/GE_RestoreControlResistance.GE_RestoreControlResistance_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_RestoreControlResistance_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GE_RestoreControlResistance.GE_RestoreControlResistance_C");
			return ret;
		}
	};


	// Class /Game/Abilities/NPC/Generic/GE_TransferFullBodyHit.GE_TransferFullBodyHit_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_TransferFullBodyHit_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GE_TransferFullBodyHit.GE_TransferFullBodyHit_C");
			return ret;
		}
	};


	// Class /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x71 (0xBB1 - 0xB40)
	class UGAB_GenericApplyFullBodyHit_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		UClass GE_FullBodyHitActiveEffect; // 0xB48(0x8)
		FVector HitImpulse; // 0xB50(0x18)
		UClass GE_RestoreControlResistance; // 0xB68(0x8)
		FActiveGameplayEffectHandle ActiveImpactImmunity; // 0xB70(0x8)
		UClass GE_ImpactImmunity; // 0xB78(0x8)
		FActiveGameplayEffectHandle ActiveFullBodyHit; // 0xB80(0x8)
		FGameplayTag Event_Triggered_FullBodyHit; // 0xB88(0x4)
		FGameplayTag Event_Control_Ended; // 0xB8C(0x4)
		UClass GE_TransferFullBodyHit; // 0xB90(0x8)
		UAnimMontage FullBodyHitMontage; // 0xB98(0x8)
		FName FullBodyHitMontageSection; // 0xBA0(0x4)
		bool EndAbilityOnBlendOut; // 0xBA4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xBA5(0x3) UNKNOWN PROPERTY
		double Duration_NoAnim; // 0xBA8(0x8)
		bool DebugFullBodyHitReact; // 0xBB0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C");
			return ret;
		}

		bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D82A9BF00
		void OnCancelled_25E5E66442E815EB40A6DB8205FE0D98(); // Flags: BlueprintCallable|BlueprintEvent 0x15D82A9BB00
		void OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98(); // Flags: BlueprintCallable|BlueprintEvent 0x15D82A9B800
		void OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98(); // Flags: BlueprintCallable|BlueprintEvent 0x15D82A9BC00
		void OnBlendedIn_25E5E66442E815EB40A6DB8205FE0D98(); // Flags: BlueprintCallable|BlueprintEvent 0x15D82A9BD00
		void OnCompleted_25E5E66442E815EB40A6DB8205FE0D98(); // Flags: BlueprintCallable|BlueprintEvent 0x15D82A9BA00
		void OnHitPawn(AActor SelfActor, AActor OtherActor, FVector NormalImpulse, FHitResult& Hit); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D82A9B900
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D82A9C000
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D82A9BE00
		void PickFullBodyHitMontageSection(); // Flags: BlueprintCallable|BlueprintEvent 0x15D82A9B700
		void ExecuteUbergraph_GAB_GenericApplyFullBodyHit(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D82A9C100
	};


	// Class /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayEmoji.GCNS_GM_OnDisplayEmoji_C
	// Inherited from UGameplayCueNotify_OnDisplayEmoji -> UGameplayCueNotify_OnShowEmoji -> UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x230 - 0x230)
	class UGCNS_GM_OnDisplayEmoji_C : public UGameplayCueNotify_OnDisplayEmoji	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayEmoji.GCNS_GM_OnDisplayEmoji_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnPreviewEmoji.GCNS_GM_OnPreviewEmoji_C
	// Inherited from UGameplayCueNotify_OnPreviewEmoji -> UGameplayCueNotify_OnShowEmoji -> UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x248 - 0x248)
	class UGCNS_GM_OnPreviewEmoji_C : public UGameplayCueNotify_OnPreviewEmoji	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnPreviewEmoji.GCNS_GM_OnPreviewEmoji_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C
	// Inherited from UFortGameplayCueNotify_Simple -> UGameplayCueNotify_Static -> UObject
	// Size: 0x20 (0x88 - 0x68)
	class UGCNS_GM_OnDisplayChatEmoji_C : public UFortGameplayCueNotify_Simple	
	{
	public:
		FVector ParticleRelativeOffset; // 0x68(0x18)
		USoundBase BubbleSound; // 0x80(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C");
			return ret;
		}

		void K2_HandleGameplayCue(AActor MyTarget, TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D40572D00
		bool OnActive(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D40572C00
		bool OnRemove(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D40572A00
		bool OnExecute(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D40572B00
		void OnStartParticleSystemSpawned(UParticleSystemComponent SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15D40572900
	};


	// Class /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0xA4 (0xA54 - 0x9B0)
	class AGCN_Athena_Bush_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		UStaticMeshComponent OwningPlayer_BushMesh; // 0x9B8(0x8)
		UArrowComponent Arrow2; // 0x9C0(0x8)
		UArrowComponent Arrow1; // 0x9C8(0x8)
		UStaticMeshComponent BushMesh; // 0x9D0(0x8)
		UArrowComponent Arrow; // 0x9D8(0x8)
		UParticleSystemComponent Trail_Leaves; // 0x9E0(0x8)
		float OpacityFade_OpacityFadeOut_B989988545DAA0B2E69D77AE069A4437; // 0x9E8(0x4)
		TEnumAsByte OpacityFade__Direction_B989988545DAA0B2E69D77AE069A4437; // 0x9EC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x9ED(0x3) UNKNOWN PROPERTY
		UTimelineComponent OpacityFade; // 0x9F0(0x8)
		AActor PlayerPawn; // 0x9F8(0x8)
		UMaterialInstanceDynamic MID_Bush; // 0xA00(0x8)
		bool IsActive; // 0xA08(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xA09(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic MID_OwningClientBush; // 0xA10(0x8)
		FCurveTableRowHandle ClientBushOpacity; // 0xA18(0x10)
		double TargetOpacity; // 0xA28(0x8)
		UParticleSystem BushDestructionVFX; // 0xA30(0x8)
		USoundBase BushDestructionSFX; // 0xA38(0x8)
		UAbilityAsync_WaitGameplayTagAdded WaitHideStart_Async; // 0xA40(0x8)
		UAbilityAsync_WaitGameplayTagRemoved WaitHideEnd_Async; // 0xA48(0x8)
		FGameplayTag Granted_Athena_EnvItem_HidingProp_HidingInProp; // 0xA50(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C");
			return ret;
		}

		void OpacityFade__FinishedFunc(); // Flags: BlueprintEvent 0x15D40578000
		void OpacityFade__UpdateFunc(); // Flags: BlueprintEvent 0x15D40577F00
		void Added_5D0551504F6D924EE47178BBD223AFF6(); // Flags: BlueprintCallable|BlueprintEvent 0x15D40574300
		void Removed_8057B44446B25B7D9FA11B8DC7CA7634(); // Flags: BlueprintCallable|BlueprintEvent 0x15D40577D00
		void On Player Step(); // Flags: BlueprintCallable|BlueprintEvent 0x15D40578300
		void OnLoopingStart(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D40578200
		void OnRemoval(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D40578100
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent 0x15D40577E00
		void ExecuteUbergraph_GCN_Athena_Bush(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D40578400
	};


	// Class /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C
	// Inherited from APlayerPawn_Generic_Parent_C -> AFortPlayerPawn -> AFortPawn -> AFGF_Character -> ACharacter -> APawn -> AActor -> UObject
	// Size: 0x5F1 (0x5191 - 0x4BA0)
	class APlayerPawn_Generic_C : public APlayerPawn_Generic_Parent_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4BA0(0x8)
		UMotionWarpingComponent MotionWarping; // 0x4BA8(0x8)
		UParticleSystemComponent SplashEffectsForEnteringOrExitingWater; // 0x4BB0(0x8)
		UParticleSystemComponent GamplayWindInteractionEffects; // 0x4BB8(0x8)
		UParticleSystemComponent Effect_Player_Run_Land; // 0x4BC0(0x8)
		UParticleSystemComponent Effect_Player_Walk_Land; // 0x4BC8(0x8)
		UParticleSystemComponent Effect_Player_Walk_Water; // 0x4BD0(0x8)
		UParticleSystemComponent Effect_Player_Run_Water; // 0x4BD8(0x8)
		UParticleSystemComponent Effect_WaterInteraction_FX; // 0x4BE0(0x8)
		UParticleSystemComponent HitDamageParticles; // 0x4BE8(0x8)
		UWidgetComponent SpeechBubbleComponent; // 0x4BF0(0x8)
		USpotLightComponent PlayerLight; // 0x4BF8(0x8)
		float ShatterShield_Push_3B96BD02488A8F69F3D086A2B7978EC8; // 0x4C00(0x4)
		float ShatterShield_Opacity_3B96BD02488A8F69F3D086A2B7978EC8; // 0x4C04(0x4)
		float ShatterShield_Highlight_Cracks_3B96BD02488A8F69F3D086A2B7978EC8; // 0x4C08(0x4)
		TEnumAsByte ShatterShield__Direction_3B96BD02488A8F69F3D086A2B7978EC8; // 0x4C0C(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x4C0D(0x3) UNKNOWN PROPERTY
		UTimelineComponent ShatterShield; // 0x4C10(0x8)
		USoundBase HitByHuskRangedSound; // 0x4C18(0x8)
		USoundBase HitByHuskMeleeSound; // 0x4C20(0x8)
		UAnimMontage SoulSuckVictimMontage; // 0x4C28(0x8)
		double PlayerSpeed; // 0x4C30(0x8)
		double Run_Particle_Activate_Speed; // 0x4C38(0x8)
		double Walk_Dust_Activate_Speed; // 0x4C40(0x8)
		double Walk_Particle_Reset_Speed; // 0x4C48(0x8)
		FVector PreviousVelocityVector; // 0x4C50(0x18)
		bool CanSpawnRunKickupFX_; // 0x4C68(0x1)
		bool CanSpawnWalkKickupFX_; // 0x4C69(0x1)
		bool CanSpawnDustLandFX_; // 0x4C6A(0x1)
		unsigned char UnknownData13_6[0x5]; // 0x4C6B(0x5) UNKNOWN PROPERTY
		FRotator RunWalkParticleRotation; // 0x4C70(0x18)
		bool IsNinjaInShadowStance_; // 0x4C88(0x1)
		unsigned char UnknownData14_6[0x7]; // 0x4C89(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTagsForHitByHuskMeleeSound; // 0x4C90(0x20)
		UMaterialInterface Shield_Material; // 0x4CB0(0x8)
		TArray BodyShieldMIDArray; // 0x4CB8(0x10)
		TArray HeadShieldMIDArray; // 0x4CC8(0x10)
		bool Shield_Active; // 0x4CD8(0x1)
		unsigned char UnknownData15_6[0x7]; // 0x4CD9(0x7) UNKNOWN PROPERTY
		USoundBase Sound_Shield_Impact; // 0x4CE0(0x8)
		USoundBase Sound_Shield_Destroyed; // 0x4CE8(0x8)
		USoundBase Sound_Shield_FullyCharged; // 0x4CF0(0x8)
		double Shield_Shatter_Opacity; // 0x4CF8(0x8)
		double Regen_Opacity; // 0x4D00(0x8)
		double Damage_Opacity; // 0x4D08(0x8)
		double Default_Shield_opacity; // 0x4D10(0x8)
		double Shield_PushMinValue; // 0x4D18(0x8)
		bool ShieldVisible_Hit; // 0x4D20(0x1)
		bool ShieldVisible_Recover; // 0x4D21(0x1)
		bool ShieldVisible_Shatter; // 0x4D22(0x1)
		bool ShieldVisible_FullHealth; // 0x4D23(0x1)
		unsigned char UnknownData16_6[0x4]; // 0x4D24(0x4) UNKNOWN PROPERTY
		double Fully_Regened_Shield_health_Opacity; // 0x4D28(0x8)
		FGameplayTagContainer TC_GameplayCueDamageShielded; // 0x4D30(0x20)
		bool LatestDamageIsShieldDamage; // 0x4D50(0x1)
		unsigned char UnknownData17_6[0x7]; // 0x4D51(0x7) UNKNOWN PROPERTY
		double Damage_Taken; // 0x4D58(0x8)
		double Last_Shield_Damage_Time; // 0x4D60(0x8)
		TArray CharmShieldMIDArray; // 0x4D68(0x10)
		bool BodyValid; // 0x4D78(0x1)
		bool BackpackValid; // 0x4D79(0x1)
		bool HatValid; // 0x4D7A(0x1)
		bool FaceValid; // 0x4D7B(0x1)
		bool CharmValid; // 0x4D7C(0x1)
		bool HeadValid; // 0x4D7D(0x1)
		bool On_Player_Built_Floor; // 0x4D7E(0x1)
		unsigned char UnknownData18_6[0x1]; // 0x4D7F(0x1) UNKNOWN PROPERTY
		FGameplayTag Event_NeedRoadsActive; // 0x4D80(0x4)
		FGameplayTag Event_NeedRoadsDeactive; // 0x4D84(0x4)
		FGameplayTagContainer TC_WhereWereGoingWeNeedRoads; // 0x4D88(0x20)
		UParticleSystem Effect_Player_LandedDust; // 0x4DA8(0x8)
		USkeletalMeshComponent Shield_BodySkeletalMesh; // 0x4DB0(0x8)
		USkeletalMeshComponent Shield_HeadSkeletalMesh; // 0x4DB8(0x8)
		USkeletalMeshComponent Shield_CharmSkeletalMesh; // 0x4DC0(0x8)
		USceneComponent Sound_Player_Hit; // 0x4DC8(0x8)
		UForceFeedbackEffect DamageForceFeedback; // 0x4DD0(0x8)
		UParticleSystem Effect_Player_Landed_WindVector_P; // 0x4DD8(0x8)
		UClass SpeechBubbleWidgetClass; // 0x4DE0(0x8)
		FText LastSpeechText; // 0x4DE8(0x10)
		UClass DamageCameraShake; // 0x4DF8(0x8)
		FVector StableVelocityVector; // 0x4E00(0x18)
		bool TickWaterLevel; // 0x4E18(0x1)
		unsigned char UnknownData19_6[0x7]; // 0x4E19(0x7) UNKNOWN PROPERTY
		UTextureRenderTarget2D WetnessDepthTexture; // 0x4E20(0x8)
		UMaterialInstanceDynamic WaterLevelMID; // 0x4E28(0x8)
		UMaterialInstanceDynamic WaterDecayMID; // 0x4E30(0x8)
		bool Was_RTT_Enabled_Var_Set; // 0x4E38(0x1)
		bool Is_the_Wind_Water_Scene_Capture_Enabled; // 0x4E39(0x1)
		unsigned char UnknownData20_6[0x6]; // 0x4E3A(0x6) UNKNOWN PROPERTY
		AActor CachedEffect; // 0x4E40(0x8)
		TArray WaterInteractionWakeMIDS; // 0x4E48(0x10)
		FLinearColor WaterTraceImpactNormalAndZHeightLocation; // 0x4E58(0x10)
		FVector PlayerVelocity; // 0x4E68(0x18)
		bool EnableRunWalkWaterGroundFX; // 0x4E80(0x1)
		unsigned char UnknownData21_6[0x7]; // 0x4E81(0x7) UNKNOWN PROPERTY
		TArray Previous_MID; // 0x4E88(0x10)
		TArray Previous_Weapon_MID; // 0x4E98(0x10)
		USkeletalMeshComponent DuplicateCharacterMesh; // 0x4EA8(0x8)
		TArray Previous_Head_MID; // 0x4EB0(0x10)
		TArray Previous_Body_MID; // 0x4EC0(0x10)
		TArray Previous_Hat_MID; // 0x4ED0(0x10)
		TArray Previous_Backpack_MID; // 0x4EE0(0x10)
		TArray Previous_Charm_MID; // 0x4EF0(0x10)
		TArray Previous_Face_MID; // 0x4F00(0x10)
		FMulticastInlineDelegate SwingRight; // 0x4F10(0x10)
		FMulticastInlineDelegate SwingRightEnd; // 0x4F20(0x10)
		FMulticastInlineDelegate SwingLeft; // 0x4F30(0x10)
		FMulticastInlineDelegate SwingLeftEnd; // 0x4F40(0x10)
		FMulticastInlineDelegate AnimNotify_Begin; // 0x4F50(0x10)
		FMulticastInlineDelegate AnimNotify_End; // 0x4F60(0x10)
		FMulticastInlineDelegate SwingRight2; // 0x4F70(0x10)
		FMulticastInlineDelegate SwingLeft2; // 0x4F80(0x10)
		bool BlockedByPawns; // 0x4F90(0x1)
		unsigned char UnknownData22_6[0x7]; // 0x4F91(0x7) UNKNOWN PROPERTY
		FGameplayAttribute Attribute_CurrentShield_Const; // 0x4F98(0x38)
		FGameplayAttribute Attribute_Shield_Const; // 0x4FD0(0x38)
		FGameplayAttribute Attribute_CurrentHealth_Const; // 0x5008(0x38)
		FGameplayAttribute Attribute_Max_Health_Const; // 0x5040(0x38)
		FCameraLensInterfaceClassSupport LensEffectInterfaceClass_PlayerHealthDamage; // 0x5078(0x8)
		FCameraLensInterfaceClassSupport LensEffectInterfaceClass_PlayerShieldDamage; // 0x5080(0x8)
		FCameraLensInterfaceClassSupport LensEffectInterfaceClass_Directional_PlayerShieldDamage; // 0x5088(0x8)
		FCameraLensInterfaceClassSupport LensEffectInterfaceClass_Directional_PlayerHealthDamage; // 0x5090(0x8)
		TArray Temp_DIM_Array; // 0x5098(0x10)
		TMap PartValid; // 0x50A8(0x50)
		TArray ShieldPartList; // 0x50F8(0x10)
		TArray ShieldMIDArrays; // 0x5108(0x10)
		TMap ShieldSkMeshes; // 0x5118(0x50)
		int32_t L_ShieldMIDIndex; // 0x5168(0x4)
		unsigned char UnknownData23_6[0x4]; // 0x516C(0x4) UNKNOWN PROPERTY
		USkeletalMeshComponent NullPart_Mesh; // 0x5170(0x8)
		UAnimMontage PlayerDeath_Montage; // 0x5178(0x8)
		UAnimMontage PlayerDeathDBNO_Montage; // 0x5180(0x8)
		UAnimMontage PlayerDeathSkydive_Montage; // 0x5188(0x8)
		bool PlayerDeath_EnableDeathDissolve; // 0x5190(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C");
			return ret;
		}

		void Melee_Effect_Color(FVector& Melee_Color_Set); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B2200
		void On Set Material Part(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B5D00
		void Set Part Material(TArray& Array, USkeletalMeshComponent MeshPart); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B7C00
		void Find Shield MID Array(TEnumAsByte PartType, bool& Found, int32_t& Index, TArray& MIDs); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D402B2F00
		void Setup Duplicate FX Mesh(UMaterialInterface& Material to Apply, TEnumAsByte PartType, TArray& Empty MID Array, USkeletalMeshComponent& Duplicated Mesh, bool Transfer Material Parameters, int32_t Translucent Sort Order, USkeletalMeshComponent MeshPart, bool& ObjectsValid); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D402B7500
		double GetHealthPercent2(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B2600
		double GetShieldPercent2(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B2500
		void OnRep_BlockedByPawns(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B4700
		void PlayHitSound(AFortPawn Instigator, AActor Damage Causer); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B8300
		void EnableWaterAudio(bool IsEnteringWater); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B3200
		void Set Body Type Sounds(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B7D00
		void Set Scalar Parameter on Duplicate Mesh MIDs(FName Parameter Name, double Parameter Value); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B7A00
		void Restore Previous Materials on Weapons Mesh(AFortWeapon Weapon to Restore); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B7E00
		void Restore Previous Materials on Character Mesh(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D402B7F00
		void Override Materials and Copy Parameters on Weapons Mesh(UMaterialInterface Material to Apply); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D402B4400
		void TriggerGameplayWindEmitter(TEnumAsByte Player Wind Particle Emitter To Fire); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B6900
		void Are the wind and water RTT passes enabled(bool& NewParam); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B3800
		void DisableWaterLevelTick(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B3300
		void OnRep_On_Player_Built_Floor(); // Flags: HasDefaults|BlueprintCallable|BlueprintEvent 0x15D402B4600
		void Create and Duplicate Effect Poseable Skeletal Mesh(UMaterialInterface Material to Apply, TArray& Empty MID Array, int32_t TranslucentSortPriority, UPoseableMeshComponent& PoseableMesh, TEnumAsByte CustomBodyType, USkeletalMeshComponent PartMesh); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D402B3500
		void SlaveAMeshToTheBody(USkeletalMeshComponent Mesh, USkeletalMeshComponent Master); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D402B7200
		void SetShieldMids_InternalLoop(double Highlight Cracks, bool Set Highlight Cracks, double Push, bool Set Push, TArray& MID Array); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B7600
		void SetShieldMids(double Highlight Cracks, bool Set Highlight Cracks, double Push, bool Set Push); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D402B7700
		void FindShieldOpacity(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D402B2E00
		void Create and Duplicate Effect Skeletal Meshes Parent(USkeletalMeshComponent& DuplicatedSkeletalMeshComponent, UMaterialInterface Material to Apply, TArray& Empty MID Array, int32_t TranslucentSortPriority, USkeletalMeshComponent MeshPart, TEnumAsByte CustomBodyType); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D402B3400
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D402B6700
		void ShatterShield__FinishedFunc(); // Flags: BlueprintEvent 0x15D402B7400
		void ShatterShield__UpdateFunc(); // Flags: BlueprintEvent 0x15D402B7300
		void OnDamagePlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn InstigatedBy, AActor DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x15D402B5700
		void OnLanded(FHitResult& Hit); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D402B4D00
		void OnWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Event|Public|BlueprintEvent 0x15D402B4500
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent 0x15D402B8100
		void OnCharacterPartsReinitialized(); // Flags: Event|Protected|BlueprintEvent 0x15D402B5900
		void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1(TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B2D00
		void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2(TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B2C00
		void SetFirstPersonCamera(bool bNewUseFirstPersonCamera); // Flags: Event|Public|BlueprintEvent 0x15D402B7800
		void InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B2400
		void OnBaseChanged(AActor NewBase); // Flags: Event|Public|BlueprintEvent 0x15D402B5A00
		void ReceivePossessed(AController NewController); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x15D402B8200
		void OnDisplaySentence(FText& SpeechText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D402B5400
		void OnClearSentence(); // Flags: Event|Protected|BlueprintEvent 0x15D402B5800
		void ClientBindWeaponSwap(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B3600
		void BindWeaponSwap(double InDuration); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B3700
		void MultiSwapWeapon(AFortWeapon New, AFortWeapon Prev); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 0x15D402B5E00
		void UnBindWeaponSwap(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B6800
		void MultiEndSwap(AFortWeapon CurrentWeapon); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 0x15D402B5F00
		void OnDeathServer(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AController InstigatedBy, AActor DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent 0x15D402B5500
		void PlayGameplayWindEffect(TEnumAsByte Player Wind Particle Emitter To Fire); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B8400
		void Exited/Entered Water Volume(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B3000
		void Player Creates a Splash(FTransform& NewTransform); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B4300
		void ReinitializeWeaponMaterials(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B8000
		void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn InstigatedBy, AActor DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x15D402B5600
		void GameplayCue.Shield.FullyCharged(TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B2700
		void GameplayCue.Damage.Shielded(TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B2900
		void GameplayCue.Shield.Destroyed(TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B2800
		void GameplayCue.Damage(TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B2A00
		void OnEnteredVehicle(); // Flags: Event|Public|BlueprintEvent 0x15D402B5300
		void OnExitedVehicle(); // Flags: Event|Public|BlueprintEvent 0x15D402B5100
		void MeleeSwingLeft(bool First Left); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B6300
		void MeleeSwingRight(bool First Right); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B6100
		void MeleeSwingLeft_End(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B6200
		void MeleeSwingRight_End(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B6000
		void OnEnteredWaterVolume(FVector& WaterSurfaceLocation); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D402B5200
		void OnExitedWaterVolume(FVector& WaterSurfaceLocation); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D402B5000
		void SetBlockedByPawns(bool bLocked); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B7900
		void ToggleLandFX(bool NewHidden); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 0x15D402B6B00
		void ToggleShieldVisibility(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B6A00
		void OnPartApplied(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B4800
		void OnBackpack(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B5C00
		void Set Scalar Parameter on Character MIDs(FName Parameter Name, double Parameter Value); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B7B00
		void OnMeshPart(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B4C00
		void GameplayCue.Athena.Equipping(TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B2B00
		void ManualDeathDissolve(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B2300
		void OnLand_CE(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B4E00
		void OnMeshPart3(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B4A00
		void OnMeshPartComplete(AFortPlayerPawn Pawn, USkeletalMeshComponent BaseMesh, TArray& PartsArray, TArray& ValidSkeletalMeshComponentPartArray); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B4900
		void OnMeshPart2(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B4B00
		void OnBackpackPart(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B5B00
		void AnimTrailsDisable(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D402B3A00
		void AnimTrailsNotify(bool bActive); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D402B3900
		void ExecuteUbergraph_PlayerPawn_Generic(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D402B3100
		void SwingLeft2__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D402B7100
		void SwingRight2__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D402B6E00
		void AnimNotify_End__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D402B3B00
		void AnimNotify_Begin__DelegateSignature(bool bActive); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D402B3D00
		void SwingLeftEnd__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D402B6F00
		void SwingLeft__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D402B7000
		void SwingRightEnd__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D402B6C00
		void SwingRight__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D402B6D00
	};


	// Class /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x88 (0xA38 - 0x9B0)
	class AGCNL_Athena_Tether_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		UFortLayeredAudioComponent FortLayeredAudio; // 0x9B8(0x8)
		UNiagaraComponent LandFX; // 0x9C0(0x8)
		UNiagaraComponent WaterFX; // 0x9C8(0x8)
		UStaticMeshComponent RightSki; // 0x9D0(0x8)
		UStaticMeshComponent LeftSki; // 0x9D8(0x8)
		float ScaleInSkis_SkiScalar_93783D4A4F91BF9F887B16977978DDB4; // 0x9E0(0x4)
		TEnumAsByte ScaleInSkis__Direction_93783D4A4F91BF9F887B16977978DDB4; // 0x9E4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x9E5(0x3) UNKNOWN PROPERTY
		UTimelineComponent ScaleInSkis; // 0x9E8(0x8)
		AFortPlayerPawn OwningFPP; // 0x9F0(0x8)
		bool IsInWater; // 0x9F8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x9F9(0x7) UNKNOWN PROPERTY
		double NormalizedSpeed; // 0xA00(0x8)
		double TurnSpeed; // 0xA08(0x8)
		double ForceFeedbackIntensity; // 0xA10(0x8)
		FTimerHandle ScaleInSkisTimerHandle; // 0xA18(0x8)
		double SkiScaleInDelay; // 0xA20(0x8)
		TScriptInterface CameraLensEffectInterface; // 0xA28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C");
			return ret;
		}

		bool OnRemove(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D3FBE0200
		bool WhileActive(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D3FBE3A00
		void UpdateAudio(int32_t Surface); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D3FBE3C00
		void ScaleInSkis__FinishedFunc(); // Flags: BlueprintEvent 0x15D3FBE4100
		void ScaleInSkis__UpdateFunc(); // Flags: BlueprintEvent 0x15D3FBE4000
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent 0x15D3FBE4200
		void OnApplication(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D3FBE0400
		void OnRemoval(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D3FBE0300
		void BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature(UAudioComponent AudioComponent, FName ParameterName, int32_t OneshotIndex); // Flags: BlueprintEvent 0x15D3FBE0700
		void StartFF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D3FBE3E00
		void UpdateFF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D3FBE3B00
		void StopFF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D3FBE3D00
		void InitializeTetherGCNL(UObject Object); // Flags: BlueprintCallable|BlueprintEvent 0x15D3FBE0500
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D3FBE0100
		void ScaleInSkisForPlayer(); // Flags: BlueprintCallable|BlueprintEvent 0x15D3FBE3F00
		void ExecuteUbergraph_GCNL_Athena_Tether(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D3FBE0600
	};


	// Class /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C
	// Inherited from UFortGameplayAbility_Emote -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x59 (0xB99 - 0xB40)
	class UGAB_Emote_Generic_C : public UFortGameplayAbility_Emote	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		AFortPlayerPawn PlayerPawn; // 0xB48(0x8)
		double PostTriggerCancelDelay; // 0xB50(0x8)
		bool HideReticle; // 0xB58(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xB59(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer ReticleHUDElementTags; // 0xB60(0x20)
		FName MontageOverrideSection; // 0xB80(0x4)
		bool bAbilityStopped; // 0xB84(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xB85(0x3) UNKNOWN PROPERTY
		FName EmoteHolsterId; // 0xB88(0x4)
		bool bHolstered; // 0xB8C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xB8D(0x3) UNKNOWN PROPERTY
		FName HUDElementVisibilityReasonName; // 0xB90(0x4)
		int32_t WaitForLoadedCount; // 0xB94(0x4)
		bool bClearInteractOnActivate; // 0xB98(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C");
			return ret;
		}

		bool ShouldPlayFailedMontage(FGameplayTagContainer& FailedReason); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15D66A87300
		bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15D66A86500
		void IsMontagePlaying(UAnimMontage Montage, bool& Result); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66ED2F00
		void ForceStopMontage(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66ED6D00
		void SetReticleVisibility(bool ShouldHide); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66A87200
		TWeakObjectPtr GetMontageToPlay(UFortMontageItemDefinitionBase EmoteAsset, TEnumAsByte BodyType, TEnumAsByte Gender); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D403BDD00
		void GetBodyTypeAndGender(TEnumAsByte& BodyType, TEnumAsByte& Gender); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66ED1E00
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x15D66A86600
		void Completed_DE7019AA4E006879EDD264899869FEE2(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66ED1900
		void Cancelled_DE7019AA4E006879EDD264899869FEE2(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66ED1B00
		void Triggered_DE7019AA4E006879EDD264899869FEE2(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66A87400
		void OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D66A86F00
		void OnLoaded_DA96775D40CD998BF2FF0085FE5AB126(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D66A87000
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D43D38500
		void OnMontageStartedPlaying(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66A87100
		void PlayInitialEmoteMontage(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6678DE00
		void NonMontageAsyncAssetsReady(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66A86E00
		void ExecuteUbergraph_GAB_Emote_Generic(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D66A88500
	};


	// Class /Game/Abilities/Sprays/GAB_Spray_Generic.GAB_Spray_Generic_C
	// Inherited from UGAB_Emote_Generic_C -> UFortGameplayAbility_Emote -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x67 (0xC00 - 0xB99)
	class UGAB_Spray_Generic_C : public UGAB_Emote_Generic_C	
	{
	public:
		unsigned char UnknownData01_3[0x7]; // 0xB99(0x7) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0xBA0(0x8)
		double DecalSize; // 0xBA8(0x8)
		UAthenaSprayItemDefinition MySpray; // 0xBB0(0x8)
		double DecalTraceDistance; // 0xBB8(0x8)
		TWeakObjectPtr DefaultSprayMontage_M; // 0xBC0(0x20)
		TWeakObjectPtr DefaultSprayMontage_F; // 0xBE0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Sprays/GAB_Spray_Generic.GAB_Spray_Generic_C");
			return ret;
		}

		void HasNoSprayGameplayTag(AActor HitActor, UPrimitiveComponent HitComponent, bool& Result); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D3FBE2C00
		TWeakObjectPtr GetMontageToPlay(UFortMontageItemDefinitionBase EmoteAsset, TEnumAsByte BodyType, TEnumAsByte Gender); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D3FBE2D00
		void TargetLineTrace(AFortPawn ActivatingPawn, bool& HitSomething, FVector& Location, FVector& Normal); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D3FBE2A00
		void OnMontageStartedPlaying(); // Flags: BlueprintCallable|BlueprintEvent 0x15D3FBE2B00
		void ExecuteUbergraph_GAB_Spray_Generic(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D66ED1800
	};


	// Class /Game/Abilities/Emotes/GAB_Emote_Generic_Transformation.GAB_Emote_Generic_Transformation_C
	// Inherited from UGAB_Emote_Generic_C -> UFortGameplayAbility_Emote -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xB99 - 0xB99)
	class UGAB_Emote_Generic_Transformation_C : public UGAB_Emote_Generic_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Emotes/GAB_Emote_Generic_Transformation.GAB_Emote_Generic_Transformation_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Interrogation/GE_Interrogation_Voice_PickedUp.GE_Interrogation_Voice_PickedUp_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Interrogation_Voice_PickedUp_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Interrogation/GE_Interrogation_Voice_PickedUp.GE_Interrogation_Voice_PickedUp_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Commando/TacticalPerks/Clusterbomb/GE_Commando_Tactical_ClusterBomb_Damage.GE_Commando_Tactical_ClusterBomb_Damage_C
	// Inherited from UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Commando_Tactical_ClusterBomb_Damage_C : public UGET_DirectPhysicalDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/TacticalPerks/Clusterbomb/GE_Commando_Tactical_ClusterBomb_Damage.GE_Commando_Tactical_ClusterBomb_Damage_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_Character_Launch.GE_Generic_Character_Launch_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Generic_Character_Launch_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_Character_Launch.GE_Generic_Character_Launch_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Weapons/Ranged/GE_Ranged_GenericDamage_Explosive.GE_Ranged_GenericDamage_Explosive_C
	// Inherited from UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Ranged_GenericDamage_Explosive_C : public UGET_DirectPhysicalDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Weapons/Ranged/GE_Ranged_GenericDamage_Explosive.GE_Ranged_GenericDamage_Explosive_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Parents/GE_Hero_PulsingEnergyCost.GE_Hero_PulsingEnergyCost_C
	// Inherited from UGET_EnergyCost_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Hero_PulsingEnergyCost_C : public UGET_EnergyCost_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GE_Hero_PulsingEnergyCost.GE_Hero_PulsingEnergyCost_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Commando/Perks/ClusterBomb/GE_Commando_ClusterBombDamage.GE_Commando_ClusterBombDamage_C
	// Inherited from UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Commando_ClusterBombDamage_C : public UGET_DirectPhysicalDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Perks/ClusterBomb/GE_Commando_ClusterBombDamage.GE_Commando_ClusterBombDamage_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/GE_Commando_FragGrenadeKeepOutDamage.GE_Commando_FragGrenadeKeepOutDamage_C
	// Inherited from UGET_DirectEnergyDamage_C -> UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Commando_FragGrenadeKeepOutDamage_C : public UGET_DirectEnergyDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Actives/FragGrenade/GE_Commando_FragGrenadeKeepOutDamage.GE_Commando_FragGrenadeKeepOutDamage_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Interrogation/GA_Interrogate_GC.GA_Interrogate_GC_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0xC (0xB4C - 0xB40)
	class UGA_Interrogate_GC_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		FGameplayTag Cue; // 0xB48(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Interrogation/GA_Interrogate_GC.GA_Interrogate_GC_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D67097E00
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent 0x15D67097F00
		void ExecuteUbergraph_GA_Interrogate_GC(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D67098000
	};


	// Class /Game/Abilities/Player/Interrogation/GE_Interrogate_GC.GE_Interrogate_GC_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Interrogate_GC_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Interrogation/GE_Interrogate_GC.GE_Interrogate_GC_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Interrogation/Athena_PlayerCameraMode_Interrogation_Map.Athena_PlayerCameraMode_Interrogation_Map_C
	// Inherited from UAthena_PlayerCameraModeBase_C -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D00 - 0x1D00)
	class UAthena_PlayerCameraMode_Interrogation_Map_C : public UAthena_PlayerCameraModeBase_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Interrogation/Athena_PlayerCameraMode_Interrogation_Map.Athena_PlayerCameraMode_Interrogation_Map_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_StaminaRegenLockout.GE_Generic_StaminaRegenLockout_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Generic_StaminaRegenLockout_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_StaminaRegenLockout.GE_Generic_StaminaRegenLockout_C");
			return ret;
		}
	};


	// Class /Game/Abilities/NPC/Generic/GE_KnockbackActive.GE_KnockbackActive_C
	// Inherited from UGET_TagContainer_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_KnockbackActive_C : public UGET_TagContainer_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GE_KnockbackActive.GE_KnockbackActive_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Weapons/Ranged/GE_Damage_Explosive_NoLineOfSight.GE_Damage_Explosive_NoLineOfSight_C
	// Inherited from UGE_Ranged_GenericDamage_Explosive_C -> UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Damage_Explosive_NoLineOfSight_C : public UGE_Ranged_GenericDamage_Explosive_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Weapons/Ranged/GE_Damage_Explosive_NoLineOfSight.GE_Damage_Explosive_NoLineOfSight_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Interrogation/GE_Interrogation_Cooldown.GE_Interrogation_Cooldown_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Interrogation_Cooldown_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Interrogation/GE_Interrogation_Cooldown.GE_Interrogation_Cooldown_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/GE_Commando_FragGrenadeCooldown.GE_Commando_FragGrenadeCooldown_C
	// Inherited from UGET_Cooldown_Hero_Active_C -> UGET_Cooldown_Hero_C -> UGET_Cooldown_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Commando_FragGrenadeCooldown_C : public UGET_Cooldown_Hero_Active_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Actives/FragGrenade/GE_Commando_FragGrenadeCooldown.GE_Commando_FragGrenadeCooldown_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0xD (0xB4D - 0xB40)
	class UGAT_TriggeredAbility_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		FGameplayTag TC_AbilitiesGenericTriggeredAbilityActivate; // 0xB48(0x4)
		bool bPlayerHolsterState; // 0xB4C(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C");
			return ret;
		}

		void EndAbilityWithReason(FString Reason); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66800600
		void SetHolsterWeaponWithName(AFortPawn Target Fort Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool& IsWeaponHolstered, bool& OperationSuccessful); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66800300
		void TriggeredAbilitySetup(UAbilitySystemComponent AbilitySystemIn, UAbilitySystemComponent& AbilitySystemOut); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66800200
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D66800400
		void ExecuteUbergraph_GAT_TriggeredAbility(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D66800500
	};


	// Class /Game/Abilities/NPC/Generic/GE_TransferKnockback.GE_TransferKnockback_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_TransferKnockback_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GE_TransferKnockback.GE_TransferKnockback_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Weapons/Ranged/GE_Impulse.GE_Impulse_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Impulse_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Weapons/Ranged/GE_Impulse.GE_Impulse_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Constructor/TacticalPerks/PlasmaGrenades/GE_Constructor_Tactical_PlasmaGrenades_Applied.GE_Constructor_Tactical_PlasmaGrenades_Applied_C
	// Inherited from UGET_PeriodicEnergyDamage_C -> UGET_PeriodicPhysicalDamage_C -> UGET_PeriodicDamageParent_C -> UGET_AfflictedParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Constructor_Tactical_PlasmaGrenades_Applied_C : public UGET_PeriodicEnergyDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/TacticalPerks/PlasmaGrenades/GE_Constructor_Tactical_PlasmaGrenades_Applied.GE_Constructor_Tactical_PlasmaGrenades_Applied_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/GE_Commando_FragGrenadeDamage.GE_Commando_FragGrenadeDamage_C
	// Inherited from UGET_DirectEnergyDamage_C -> UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Commando_FragGrenadeDamage_C : public UGET_DirectEnergyDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Actives/FragGrenade/GE_Commando_FragGrenadeDamage.GE_Commando_FragGrenadeDamage_C");
			return ret;
		}
	};


	// Class /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x129 (0xC69 - 0xB40)
	class UGAB_GenericApplyKnockback_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		UClass GE_TransferKnockback; // 0xB48(0x8)
		UClass GE_KnockbackActive; // 0xB50(0x8)
		double KnockbackPropagationThreshold; // 0xB58(0x8)
		UAnimMontage KnockbackUpMontage; // 0xB60(0x8)
		FName KnockbackUpMontageSection; // 0xB68(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xB6C(0x4) UNKNOWN PROPERTY
		UAnimMontage KnockbackDownMontage; // 0xB70(0x8)
		FName KnockbackDownMontageSection; // 0xB78(0x4)
		unsigned char UnknownData07_6[0x4]; // 0xB7C(0x4) UNKNOWN PROPERTY
		UAnimMontage KnockbackLandMontage; // 0xB80(0x8)
		FName KnockbackLandMontageSection; // 0xB88(0x4)
		unsigned char UnknownData08_6[0x4]; // 0xB8C(0x4) UNKNOWN PROPERTY
		UAnimMontage KnockbackLandToIdleMontage; // 0xB90(0x8)
		FName KnockbackLandToIdleMontageSection; // 0xB98(0x4)
		unsigned char UnknownData09_6[0x4]; // 0xB9C(0x4) UNKNOWN PROPERTY
		UAnimMontage KnockbackLandToStunMontage; // 0xBA0(0x8)
		FName KnockbackLandToStunMontageSection; // 0xBA8(0x4)
		bool DebugDraw; // 0xBAC(0x1)
		bool DebugNumbers; // 0xBAD(0x1)
		bool DebugForceKnockbackValues; // 0xBAE(0x1)
		bool bOrientToImpulse; // 0xBAF(0x1)
		FActiveGameplayEffectHandle ActiveKnockback; // 0xBB0(0x8)
		FVector OrientDirection; // 0xBB8(0x18)
		FVector HitDirection; // 0xBD0(0x18)
		FVector ImpulseDirectionVelocityOrRotation; // 0xBE8(0x18)
		FVector DebugLastLocation; // 0xC00(0x18)
		FGameplayTag TC_NPCStatusLockedInPlace; // 0xC18(0x4)
		unsigned char UnknownData10_6[0x4]; // 0xC1C(0x4) UNKNOWN PROPERTY
		double LockedInPlaceKnockbackAngle; // 0xC20(0x8)
		double LockedInPlaceKnockbackMagnitude; // 0xC28(0x8)
		UClass GE_RestoreControlResistance; // 0xC30(0x8)
		UClass GE_ImpactImmunity; // 0xC38(0x8)
		FActiveGameplayEffectHandle ActiveImpactImmunity; // 0xC40(0x8)
		bool bHasImpactImmunity; // 0xC48(0x1)
		unsigned char UnknownData11_6[0x7]; // 0xC49(0x7) UNKNOWN PROPERTY
		double F_OneFrameDelay; // 0xC50(0x8)
		FGameplayTag Event_Triggered_Knockback; // 0xC58(0x4)
		bool KnockbackFromFloorTrap; // 0xC5C(0x1)
		bool KnockbackFromFloorTrap_PlayUpMontage; // 0xC5D(0x1)
		bool KnockbackFromFloorTrap_PlayDownMontage; // 0xC5E(0x1)
		bool KnockbackFromFloorTrap_PlayLandMontage; // 0xC5F(0x1)
		FGameplayTag Event_Control_Ended; // 0xC60(0x4)
		FGameplayTag GC_TrapKnockback_Tag; // 0xC64(0x4)
		bool AllowKnockbackAnimation; // 0xC68(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C");
			return ret;
		}

		void CheckForPawnDeath(AFortPawn Pawn, bool& IsDead); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66806100
		void DoesUseInstagorInsteadOfImpulseDirection(FGameplayEffectContextHandle EffectContext, UObject OptionalObject, bool& Value); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D66805F00
		void GetPawnFromInstigator(AActor InActor, AFortPlayerPawn& OutPawn); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66805D00
		FVector CalculateImpulseDirection(AFortPlayerPawn InPawn); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66806200
		void OnCancelled_D744890E4C485F1C80B3E7864AE506FF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66804B00
		void OnInterrupted_D744890E4C485F1C80B3E7864AE506FF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66808200
		void OnBlendOut_D744890E4C485F1C80B3E7864AE506FF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66805000
		void OnBlendedIn_D744890E4C485F1C80B3E7864AE506FF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66805500
		void OnCompleted_D744890E4C485F1C80B3E7864AE506FF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66804600
		void OnCancelled_1F181048470CEB2EB6CC648039C5913C(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66804E00
		void OnInterrupted_1F181048470CEB2EB6CC648039C5913C(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66804300
		void OnBlendOut_1F181048470CEB2EB6CC648039C5913C(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66805300
		void OnBlendedIn_1F181048470CEB2EB6CC648039C5913C(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66805800
		void OnCompleted_1F181048470CEB2EB6CC648039C5913C(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66804900
		void OnCancelled_BA9188C34C234A4C47306FA73AAF0583(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66804C00
		void OnInterrupted_BA9188C34C234A4C47306FA73AAF0583(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66808300
		void OnBlendOut_BA9188C34C234A4C47306FA73AAF0583(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66805100
		void OnBlendedIn_BA9188C34C234A4C47306FA73AAF0583(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66805600
		void OnCompleted_BA9188C34C234A4C47306FA73AAF0583(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66804700
		void OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66804D00
		void OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66808400
		void OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66805200
		void OnBlendedIn_8FC7071F40FA26EA05D9688FB3E623A0(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66805700
		void OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66804800
		void OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66804F00
		void OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66804400
		void OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66805400
		void OnBlendedIn_07DF210D46EDFA929CDBFFB162E8E4CF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66805900
		void OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66804A00
		void OnReachedJumpApex(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66808000
		void SetupMontageSectionsAndOrientDirection(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66807F00
		void OnPawnLanded(FHitResult& Hit); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66808100
		void OnHitPawn(AActor SelfActor, AActor OtherActor, FVector NormalImpulse, FHitResult& Hit); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66804500
		void MovementModeChangedDelegate_Event(ACharacter Character, TEnumAsByte PrevMovementMode, char PreviousCustomMode); // Flags: BlueprintCallable|BlueprintEvent 0x15D66805A00
		void BindMovementModeChange(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66806300
		void UnbindMovementModeChange(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66807E00
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D66805C00
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D66805B00
		void DebugLine(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66806000
		void ExecuteUbergraph_GAB_GenericApplyKnockback(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D66805E00
	};


	// Class /Game/Abilities/Weapons/Ranged/GE_Damage_Explosive_LineOfSight.GE_Damage_Explosive_LineOfSight_C
	// Inherited from UGE_Ranged_GenericDamage_Explosive_C -> UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Damage_Explosive_LineOfSight_C : public UGE_Ranged_GenericDamage_Explosive_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Weapons/Ranged/GE_Damage_Explosive_LineOfSight.GE_Damage_Explosive_LineOfSight_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xB48 - 0xB40)
	class UGA_DefaultPlayer_PetOtherPet_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C");
			return ret;
		}

		void OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66809200
		void OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66809000
		void OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66809300
		void OnBlendedIn_FB7AFE5D4FF547CAEB1ECA8264EE1330(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66809400
		void OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66809100
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D66809500
		void ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet(int32_t EntryPoint); // Flags: Final 0x15D66809600
	};


	// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/B_GrenadeCameraShake.B_GrenadeCameraShake_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UB_GrenadeCameraShake_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Actives/FragGrenade/B_GrenadeCameraShake.B_GrenadeCameraShake_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xB48 - 0xB40)
	class UGA_DefaultPlayer_InteractUse_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C");
			return ret;
		}

		void OnCancelled_A513E1E044E129CC612DF5A23589BC9C(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66927B00
		void OnInterrupted_A513E1E044E129CC612DF5A23589BC9C(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66927900
		void OnBlendOut_A513E1E044E129CC612DF5A23589BC9C(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66927C00
		void OnBlendedIn_A513E1E044E129CC612DF5A23589BC9C(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66927D00
		void OnCompleted_A513E1E044E129CC612DF5A23589BC9C(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66927A00
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D66927E00
		void ExecuteUbergraph_GA_DefaultPlayer_InteractUse(int32_t EntryPoint); // Flags: Final 0x15D66927F00
	};


	// Class /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x28 (0xB68 - 0xB40)
	class UGAT_ActiveAbility_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		FGameplayTag TC_AbilitiesGenericActiveAbilityActivate; // 0xB48(0x4)
		FName N_SavedCollisionChannel; // 0xB4C(0x4)
		UClass GE_KnockBackImmunity; // 0xB50(0x8)
		FActiveGameplayEffectHandle GEH_KnockBackImmunity; // 0xB58(0x8)
		bool bPlayerHolsterState; // 0xB60(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xB61(0x3) UNKNOWN PROPERTY
		FGameplayTag TC_AbilitiesGenericActiveAbilityEndAbility; // 0xB64(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C");
			return ret;
		}

		void EndAbilityWithReason(FString Reason); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6692EC00
		void SendHeroAbilityActivationEvent(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D68802100
		void SetHolsterWeaponWithName(AFortPawn Target Fort Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool& IsWeaponHolstered, bool& OperationSuccessful); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68802000
		bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6692E800
		void ActiveAbilitySetup(UAbilitySystemComponent AbilitySystemIn, UAbilitySystemComponent& AbilitySystemOut); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6692ED00
		void SetKnockbackImmunity(bool ImmunityOn); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D68801F00
		void SetPawnCollision(AFortPawn FortPawn, bool CollisionOn); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D68801E00
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D6692EA00
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D6692E900
		void ExecuteUbergraph_GAT_ActiveAbility(int32_t EntryPoint); // Flags: Final 0x15D6692EB00
	};


	// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C
	// Inherited from AFortAreaOfEffectCloud -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x400 (0xAE8 - 0x6E8)
	class AAOE_Commando_KeepOutExplosion_C : public AFortAreaOfEffectCloud	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x6E8(0x8)
		UAudioComponent AOE_Audio_Effect; // 0x6F0(0x8)
		UParticleSystemComponent P_Grenade_Linger; // 0x6F8(0x8)
		USphereComponent DamageArea; // 0x700(0x8)
		USceneComponent DefaultSceneRoot; // 0x708(0x8)
		double Radius; // 0x710(0x8)
		FSoundAttenuationSettings AOE_Sound_Attenuation_Based_On_Radius; // 0x718(0x3D0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C");
			return ret;
		}

		void OnRep_Radius(); // Flags: HasDefaults|BlueprintCallable|BlueprintEvent 0x15D68802C00
		void Send_Info(double Radius); // Flags: BlueprintCallable|BlueprintEvent 0x15D68802900
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent 0x15D68802A00
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D68802B00
		void ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int32_t EntryPoint); // Flags: Final 0x15D68802D00
	};


	// Class /Game/Abilities/Player/Parents/GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C
	// Inherited from UGAT_ActiveAbility_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x30 (0xB98 - 0xB68)
	class UGAT_ActiveAbility_Hero_C : public UGAT_ActiveAbility_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB68(0x8)
		bool UseHeroLoadoutSystem; // 0xB70(0x1)
		bool bUseMidAbilityCosts; // 0xB71(0x1)
		bool bTriggerCooldownOnAbilityEnd; // 0xB72(0x1)
		unsigned char UnknownData01_6[0x5]; // 0xB73(0x5) UNKNOWN PROPERTY
		UAbilitySystemComponent Owner_ASC; // 0xB78(0x8)
		UClass GE_CooldownModifier; // 0xB80(0x8)
		TArray Active_Cooldown_Modifiers; // 0xB88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C");
			return ret;
		}

		void IncrementAbilityCostAndCooldown(double Energy Cost, bool Adjust Cooldown, double Cooldown Increment, TArray& Active Cooldown Modifiers); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D68802500
		void CommitAbilityWithEvent(bool& Passed); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68802700
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D68802300
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D68802200
		void ExecuteUbergraph_GAT_ActiveAbility_Hero(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D68802400
	};


	// Class /Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C
	// Inherited from UGAT_ActiveAbility_Hero_C -> UGAT_ActiveAbility_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0xC2 (0xC5A - 0xB98)
	class UGAT_CommandoActiveAbility_C : public UGAT_ActiveAbility_Hero_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB98(0x8)
		FGameplayEventData Event_Data; // 0xBA0(0xB0)
		AFortPawn CommandoPlayerPawn; // 0xC50(0x8)
		bool isAutoCommitted; // 0xC58(0x1)
		bool isStaminaLockedOut; // 0xC59(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D68806200
		void ExecuteUbergraph_GAT_CommandoActiveAbility(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D68806300
	};


	// Class /Game/Abilities/NPC/Generic/GAB_CarryPlayer.GAB_CarryPlayer_C
	// Inherited from UFortGameplayAbility_CarryPlayer -> UFortGameplayAbility_Action -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x34 (0xBA4 - 0xB70)
	class UGAB_CarryPlayer_C : public UFortGameplayAbility_CarryPlayer	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB70(0x8)
		AFortPlayerPawn PlayerPawn; // 0xB78(0x8)
		FName DBNOCarryHolster; // 0xB80(0x4)
		bool bCompletedPickup; // 0xB84(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xB85(0x3) UNKNOWN PROPERTY
		FVector PickupLocation; // 0xB88(0x18)
		int32_t CarryLongDistanceThreshold; // 0xBA0(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_CarryPlayer.GAB_CarryPlayer_C");
			return ret;
		}

		void OnCancelled_C4440F1640E9A8D79E44FD8C23525824(); // Flags: BlueprintCallable|BlueprintEvent 0x15D68805800
		void OnInterrupted_C4440F1640E9A8D79E44FD8C23525824(); // Flags: BlueprintCallable|BlueprintEvent 0x15D68805500
		void OnBlendOut_C4440F1640E9A8D79E44FD8C23525824(); // Flags: BlueprintCallable|BlueprintEvent 0x15D68805900
		void OnBlendedIn_C4440F1640E9A8D79E44FD8C23525824(); // Flags: BlueprintCallable|BlueprintEvent 0x15D68805A00
		void OnCompleted_C4440F1640E9A8D79E44FD8C23525824(); // Flags: BlueprintCallable|BlueprintEvent 0x15D68805700
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D68805D00
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D68805B00
		void OnFortPlayerHitByVehicle_Event(AFortAthenaVehicle InstigatingVehicle); // Flags: BlueprintCallable|BlueprintEvent 0x15D68805600
		void ExecuteUbergraph_GAB_CarryPlayer(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D68805C00
	};


	// Class /Game/Abilities/NPC/Generic/GAB_DropPlayer.GAB_DropPlayer_C
	// Inherited from UFortGameplayAbility_CarryPlayer -> UFortGameplayAbility_Action -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x10 (0xB80 - 0xB70)
	class UGAB_DropPlayer_C : public UFortGameplayAbility_CarryPlayer	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB70(0x8)
		AFortPlayerPawn PlayerPawn; // 0xB78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_DropPlayer.GAB_DropPlayer_C");
			return ret;
		}

		void Completed_89F288114D44792D5568298354B7216C(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68805100
		void Cancelled_89F288114D44792D5568298354B7216C(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68805200
		void Triggered_89F288114D44792D5568298354B7216C(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68804D00
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D68804F00
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D68804E00
		void ExecuteUbergraph_GAB_DropPlayer(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D68805000
	};


	// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x1E8 (0xD28 - 0xB40)
	class UGA_DefaultPlayer_InteractSearch_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		AFortPlayerPawn PlayerPawn; // 0xB48(0x8)
		FGameplayTag RefillGasTankTag; // 0xB50(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xB54(0x4) UNKNOWN PROPERTY
		FFortGameplayAbilityMontageInfo RefillGasTankMontage; // 0xB58(0x58)
		FGameplayTag CatchFireflyTag; // 0xBB0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xBB4(0x4) UNKNOWN PROPERTY
		FFortGameplayAbilityMontageInfo FireflyCatchMontage; // 0xBB8(0x58)
		FFortGameplayAbilityMontageInfo RefillVehicleFuelMontage; // 0xC10(0x58)
		FGameplayTag GasCanRefillVehicleTag; // 0xC68(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xC6C(0x4) UNKNOWN PROPERTY
		FFortGameplayAbilityMontageInfo DBNOMontageInfo; // 0xC70(0x58)
		FGameplayTag Tag_UseOverrideSearchMontage; // 0xCC8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0xCCC(0x4) UNKNOWN PROPERTY
		FFortGameplayAbilityMontageInfo OverrideSearchMontageInfo; // 0xCD0(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C");
			return ret;
		}

		void EndInteractSearch(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D68807F00
		void StartInteractSearch(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D68807B00
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x15D68807C00
		void Completed_B697D9B445CA2BFDB1328D93C33FBCF3(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68808000
		void Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68804400
		void Triggered_B697D9B445CA2BFDB1328D93C33FBCF3(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68807500
		void Completed_72217B3542CE776DEDDBB3A7B5D6D343(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68808100
		void Cancelled_72217B3542CE776DEDDBB3A7B5D6D343(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68804500
		void Triggered_72217B3542CE776DEDDBB3A7B5D6D343(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68807600
		void Completed_6A38D93A428260E68695388965BFA176(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68808200
		void Cancelled_6A38D93A428260E68695388965BFA176(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68804600
		void Triggered_6A38D93A428260E68695388965BFA176(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68807700
		void Completed_5EB1B64344DD00ABFE41E2857DC3FB38(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68808400
		void Cancelled_5EB1B64344DD00ABFE41E2857DC3FB38(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68804800
		void Triggered_5EB1B64344DD00ABFE41E2857DC3FB38(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68807900
		void Completed_3E01853F4E8362C959E7B4B82217702E(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68804300
		void Cancelled_3E01853F4E8362C959E7B4B82217702E(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68804900
		void Triggered_3E01853F4E8362C959E7B4B82217702E(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68807A00
		void Completed_64A40E14483311B0BA6F95B516CA6468(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68808300
		void Cancelled_64A40E14483311B0BA6F95B516CA6468(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68804700
		void Triggered_64A40E14483311B0BA6F95B516CA6468(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68807800
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D68807D00
		void ExecuteUbergraph_GA_DefaultPlayer_InteractSearch(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D68807E00
	};


	// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractReboot.GA_DefaultPlayer_InteractReboot_C
	// Inherited from UGA_DefaultPlayer_InteractSearch_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xD28 - 0xD28)
	class UGA_DefaultPlayer_InteractReboot_C : public UGA_DefaultPlayer_InteractSearch_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractReboot.GA_DefaultPlayer_InteractReboot_C");
			return ret;
		}

		void StartInteractSearch(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D68807400
	};


	// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractDBNO.GA_DefaultPlayer_InteractDBNO_C
	// Inherited from UGA_DefaultPlayer_InteractSearch_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xD28 - 0xD28)
	class UGA_DefaultPlayer_InteractDBNO_C : public UGA_DefaultPlayer_InteractSearch_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractDBNO.GA_DefaultPlayer_InteractDBNO_C");
			return ret;
		}

		void StartInteractSearch(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D68807200
	};


	// Class /Game/Abilities/Player/Perks/Hero/ClusterBomb/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C
	// Inherited from AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x58 (0xB80 - 0xB28)
	class AB_Prj_Commando_FragGrenade_Cluster_C : public AFortProjectileBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB28(0x8)
		UParticleSystemComponent ParticleSystem1; // 0xB30(0x8)
		UAudioComponent Audio1; // 0xB38(0x8)
		USoundBase BounceSound; // 0xB40(0x8)
		UParticleSystem P_Explosion; // 0xB48(0x8)
		USoundBase ExplosionSound; // 0xB50(0x8)
		FVector ExplosionLocation; // 0xB58(0x18)
		double MinExplosionDelay; // 0xB70(0x8)
		double MaxExplosionDelay; // 0xB78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Perks/Hero/ClusterBomb/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C");
			return ret;
		}

		void OnStop(FHitResult& Hit); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D68808600
		void ReceiveAnyDamage(float Damage, UDamageType DamageType, AController InstigatedBy, AActor DamageCauser); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x15D68808500
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D6880C600
		void OnExploded(TArray& HitActors, TArray& HitResults); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D68808700
		void ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D80131E00
	};


	// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
	// Inherited from AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x2F4 (0xE1C - 0xB28)
	class AB_Prj_Commando_FragGrenade_C : public AFortProjectileBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB28(0x8)
		URotatingMovementComponent RotatingMovement; // 0xB30(0x8)
		UParticleSystemComponent Fuse_Particle; // 0xB38(0x8)
		UStaticMeshComponent Mesh; // 0xB40(0x8)
		UAudioComponent GrenadeFuse_AudioComponent; // 0xB48(0x8)
		UParticleSystemComponent Effect_Distance; // 0xB50(0x8)
		UParticleSystem P_Explosion; // 0xB58(0x8)
		USoundBase Cue_DistantSound; // 0xB60(0x8)
		USoundBase Cue_CloseSound; // 0xB68(0x8)
		double ExplosionRadius; // 0xB70(0x8)
		int32_t NumberOfBouncesTillExplode; // 0xB78(0x4)
		int32_t CurrentNumberOfBounces; // 0xB7C(0x4)
		USoundBase Cue_GrenadeFuseSound; // 0xB80(0x8)
		double BouncePawnAgainstPawnGravityScale; // 0xB88(0x8)
		UForceFeedbackEffect ExplosionForceFeedbackNear; // 0xB90(0x8)
		UForceFeedbackEffect ExplosionForceFeedbackFar; // 0xB98(0x8)
		int32_t MaxClusterGrenades; // 0xBA0(0x4)
		FGameplayTag EC_ClusterExplosion; // 0xBA4(0x4)
		bool bHasCluster; // 0xBA8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xBA9(0x7) UNKNOWN PROPERTY
		UClass Prj_Cluster; // 0xBB0(0x8)
		FFortGameplayEffectContainerSpec ClusterContainerSpec; // 0xBB8(0xB8)
		bool bHasKeepOut; // 0xC70(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xC71(0x7) UNKNOWN PROPERTY
		FFortGameplayEffectContainerSpec KeepOutContainerSpec; // 0xC78(0xB8)
		UClass AOE_KeepOut; // 0xD30(0x8)
		bool bHasClusterTactical; // 0xD38(0x1)
		unsigned char UnknownData05_6[0x7]; // 0xD39(0x7) UNKNOWN PROPERTY
		FFortGameplayEffectContainerSpec Cluster_Tactical_Container_Spec; // 0xD40(0xB8)
		FGameplayTagContainer TC_ActorTagsThatShouldExplodeOnOverlap; // 0xDF8(0x20)
		FGameplayTag T_Event_GrenadeExploded; // 0xE18(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C");
			return ret;
		}

		void SpawnKeepOut(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6AFC3E00
		void SpawnClusters(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6AFC3F00
		double CalcGrenadeSpeed(double Angle); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6AFC0B00
		void OnRep_StoredHit(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC0400
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D6AFC3A00
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D6AFC4200
		void OnStop(FHitResult& Hit); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D6AFC0300
		void Stop_Rotation(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC3D00
		void OnExploded(TArray& HitActors, TArray& HitResults); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D6AFC0500
		void ReceiveAnyDamage(float Damage, UDamageType DamageType, AController InstigatedBy, AActor DamageCauser); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x15D6AFC0100
		void OnBounce(FHitResult& Hit); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D6AFC0600
		void On Destroy Grenade(AActor DestroyedActor); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC0700
		void Bind Destroy Grenade(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC0C00
		void Force On Exploded Effects(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC0800
		void Unbind Destroy Grenade(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC3B00
		void TriggerDoExplsoion(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC3C00
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent 0x15D6AFC4100
		void CheckKeepOutAndCluster(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC0A00
		void ReceiveActorBeginOverlap(AActor OtherActor); // Flags: Event|Public|BlueprintEvent 0x15D6AFC0200
		void SendExplodedEvent(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC4000
		void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6AFC0900
	};


	// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/TT_Commando_FragGrenade.TT_Commando_FragGrenade_C
	// Inherited from UFortGameplayAbilityTooltip -> UFortTooltip -> UObject
	// Size: 0x0 (0x148 - 0x148)
	class UTT_Commando_FragGrenade_C : public UFortGameplayAbilityTooltip	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Actives/FragGrenade/TT_Commando_FragGrenade.TT_Commando_FragGrenade_C");
			return ret;
		}

		bool GetApplicationTag(UGameplayAbility AbilityInstance, FGameplayTag& OutTag); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6AFC3400
		bool GetTextForTokenFromAbilityInstanceInternal(UGameplayAbility AbilityInstance, FGameplayTag& tag, UFortTooltipContext Context, FGameplayTag& Token, FText& OutText); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15D6AFC3500
		void InitializeAbilityInstanceInternal(UGameplayAbility AbilityInstance, UFortTooltipContext Context); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent|Const 0x15D6AFC3300
	};


	// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
	// Inherited from UGAT_CommandoActiveAbility_C -> UGAT_ActiveAbility_Hero_C -> UGAT_ActiveAbility_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x336 (0xF90 - 0xC5A)
	class UGA_Commando_FragGrenade_WithTrajectory_C : public UGAT_CommandoActiveAbility_C	
	{
	public:
		unsigned char UnknownData15_3[0x6]; // 0xC5A(0x6) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0xC60(0x8)
		UClass Prj_Grenade; // 0xC68(0x8)
		double GrenadeSpeedMin; // 0xC70(0x8)
		double GrenadeSpeedMax; // 0xC78(0x8)
		double GravityScale; // 0xC80(0x8)
		FGameplayTagContainer TC_ClusterBomb; // 0xC88(0x20)
		FGameplayTagContainer TC_BiggerIsBetter; // 0xCA8(0x20)
		FGameplayTag T_GEContainer_Explosion; // 0xCC8(0x4)
		unsigned char UnknownData16_6[0x4]; // 0xCCC(0x4) UNKNOWN PROPERTY
		double ExplosionRadius; // 0xCD0(0x8)
		double AdditionalThrowAngle; // 0xCD8(0x8)
		FGameplayTag EC_ClusterExplosion; // 0xCE0(0x4)
		unsigned char UnknownData17_6[0x4]; // 0xCE4(0x4) UNKNOWN PROPERTY
		FFortFeedbackHandle GrenadeDialogFeedback; // 0xCE8(0x10)
		FGameplayTagContainer TC_KeepOut; // 0xCF8(0x20)
		FGameplayTag EC_KeepOut; // 0xD18(0x4)
		bool BiggerIsBetter; // 0xD1C(0x1)
		bool ClusterBomb; // 0xD1D(0x1)
		bool KeepOut; // 0xD1E(0x1)
		unsigned char UnknownData18_6[0x1]; // 0xD1F(0x1) UNKNOWN PROPERTY
		FGameplayTagContainer TC_GrenadeAmmo; // 0xD20(0x20)
		FGameplayTagContainer TC_GrenadeCost; // 0xD40(0x20)
		FGameplayTagContainer TC_GrenadeDamage; // 0xD60(0x20)
		bool GrenadeAmmo; // 0xD80(0x1)
		bool GrenadeCost; // 0xD81(0x1)
		bool GrenadeDamage; // 0xD82(0x1)
		unsigned char UnknownData19_6[0x1]; // 0xD83(0x1) UNKNOWN PROPERTY
		int32_t GrenadeAmmoUpgrade; // 0xD84(0x4)
		int32_t GrenadeAmmoDefault; // 0xD88(0x4)
		int32_t MaxGrenadeAmmo; // 0xD8C(0x4)
		int32_t ExplosionRadiusTooltip; // 0xD90(0x4)
		int32_t ExplosionRadiusDefault; // 0xD94(0x4)
		int32_t ExplosionRadiusUpgrade; // 0xD98(0x4)
		unsigned char UnknownData20_6[0x4]; // 0xD9C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer TC_PlasmaGrenades; // 0xDA0(0x20)
		bool PlasmaGrenades; // 0xDC0(0x1)
		unsigned char UnknownData21_6[0x7]; // 0xDC1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer TC_Flashbang; // 0xDC8(0x20)
		bool Flashbang; // 0xDE8(0x1)
		unsigned char UnknownData22_6[0x7]; // 0xDE9(0x7) UNKNOWN PROPERTY
		FVector GrenadeTargetingOriginOffset; // 0xDF0(0x18)
		bool DummyShouldBounce; // 0xE08(0x1)
		unsigned char UnknownData23_6[0x7]; // 0xE09(0x7) UNKNOWN PROPERTY
		double DummyBounciness; // 0xE10(0x8)
		double DummyFriction; // 0xE18(0x8)
		double TrajectoryUpdateInterval; // 0xE20(0x8)
		double DummyMaxSpeed; // 0xE28(0x8)
		double DummyGravity; // 0xE30(0x8)
		double DummyTimeStep; // 0xE38(0x8)
		double DummyExtent; // 0xE40(0x8)
		bool InThrowWindup; // 0xE48(0x1)
		unsigned char UnknownData24_6[0x7]; // 0xE49(0x7) UNKNOWN PROPERTY
		ABP_ProjectileTrajectory_C TrajectoryIndicator; // 0xE50(0x8)
		UClass TrajectoryIndicatorClass; // 0xE58(0x8)
		FFortGameplayAbilityMontageInfo ThrowWindupMontage; // 0xE60(0x58)
		bool AbilityKeyPressed; // 0xEB8(0x1)
		unsigned char UnknownData25_6[0x7]; // 0xEB9(0x7) UNKNOWN PROPERTY
		double MaxSpeedPitch; // 0xEC0(0x8)
		double MinSpeedPitch; // 0xEC8(0x8)
		double MaxTossPitch; // 0xED0(0x8)
		int32_t MaxTrajectoryBounces; // 0xED8(0x4)
		unsigned char UnknownData26_6[0x4]; // 0xEDC(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer TC_Tactical_Clusterbomb; // 0xEE0(0x20)
		bool Tactical_Clusterbomb; // 0xF00(0x1)
		unsigned char UnknownData27_6[0x3]; // 0xF01(0x3) UNKNOWN PROPERTY
		FGameplayTag EC_ClusterExplosion_Tactical; // 0xF04(0x4)
		double F_FrameDelay; // 0xF08(0x8)
		bool BiggerIsBetter_T01; // 0xF10(0x1)
		bool BiggerIsBetter_T02; // 0xF11(0x1)
		bool ClusterBomb_T01; // 0xF12(0x1)
		bool ClusterBomb_T02; // 0xF13(0x1)
		FGameplayTag T_BiggerIsBetter_T01; // 0xF14(0x4)
		FGameplayTag T_BiggerIsBetter_T02; // 0xF18(0x4)
		FGameplayTag T_ClusterBomb_T01; // 0xF1C(0x4)
		FGameplayTag T_ClusterBomb_T02; // 0xF20(0x4)
		unsigned char UnknownData28_6[0x4]; // 0xF24(0x4) UNKNOWN PROPERTY
		FScalableFloat SF_BiggerIsBetterRadius_T01; // 0xF28(0x28)
		UAnimMontage ThrowMontage; // 0xF50(0x8)
		FGameplayTag T_Event_Activate; // 0xF58(0x4)
		FGameplayTag T_Event_Deactivate; // 0xF5C(0x4)
		FScalableFloat SF_BiggerIsBetterRadius_T02; // 0xF60(0x28)
		TEnumAsByte DummyCollisionChannel; // 0xF88(0x1)
		unsigned char UnknownData29_6[0x3]; // 0xF89(0x3) UNKNOWN PROPERTY
		FGameplayTag ThrowCue; // 0xF8C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C");
			return ret;
		}

		void ActiveAbilitySetup(UAbilitySystemComponent AbilitySystemIn, UAbilitySystemComponent& AbilitySystemOut); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6AFC3200
		void SpawnFragGrenade(UClass ProjectileClass, FVector& SpawnLocation, FRotator InputPin, FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnExplode, double InitialSpeed, double GravityScale); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6AFC6000
		void CalcGrenadeSpeedFromPitch(double AimPitch, double& GrenadeSpeed); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D6AFC3100
		void UpdateTrajectorySpline(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6AFC5C00
		void SetupDummyProjectile(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6AFC6200
		void SpawnLocationAndRotation(FVector& OutLoc, FRotator& OutRot); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D6AFC5F00
		void SetupAbility(UAbilitySystemComponent AbilitySystemComponentRef); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6AFC6300
		void SetupGrenade(double AimPitch, UClass& Base Grenade, double& Projectile Speed, FFortGameplayEffectContainerSpec& Explosion Gameplay Spec, double& Projectile Gravity Scale); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6AFC6100
		void OnFinish_F5D87C9E46378707AE4C79B3A42F5A45(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC2400
		void OnCancelled_854170AF4268B06A435A3AA33232C5BF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC2700
		void OnInterrupted_854170AF4268B06A435A3AA33232C5BF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC2300
		void OnBlendOut_854170AF4268B06A435A3AA33232C5BF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC2800
		void OnBlendedIn_854170AF4268B06A435A3AA33232C5BF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC2900
		void OnCompleted_854170AF4268B06A435A3AA33232C5BF(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC2600
		void OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC2500
		void Completed_BF65CDBE4F9E98E9174850B85775A15B(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6AFC2E00
		void Cancelled_BF65CDBE4F9E98E9174850B85775A15B(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6AFC3000
		void Triggered_BF65CDBE4F9E98E9174850B85775A15B(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6AFC5D00
		void OnAbilityInputReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D6AFC2A00
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D6AFC2B00
		void CleanupTrajectoryDisplay(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC2F00
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D6AFC2C00
		void TossGrenade(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC5E00
		void ServerSpawnProjectile(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6AFC2200
		void ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6AFC2D00
	};


	// Class /Game/Abilities/NPC/Generic/GAB_ThrowPlayer.GAB_ThrowPlayer_C
	// Inherited from UFortGameplayAbility_CarryPlayer -> UFortGameplayAbility_Action -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x10 (0xB80 - 0xB70)
	class UGAB_ThrowPlayer_C : public UFortGameplayAbility_CarryPlayer	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB70(0x8)
		AFortPlayerPawn PlayerPawn; // 0xB78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_ThrowPlayer.GAB_ThrowPlayer_C");
			return ret;
		}

		void Completed_45B7744E4902B26207BAA1954E6BCDEE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B170100
		void Cancelled_45B7744E4902B26207BAA1954E6BCDEE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B170200
		void Triggered_45B7744E4902B26207BAA1954E6BCDEE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B173F00
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D6B174100
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D6B174000
		void ExecuteUbergraph_GAB_ThrowPlayer(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6B174200
	};


	// Class /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x480 (0xFC0 - 0xB40)
	class UGAB_InterrogatePlayer_Reveal_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		AFortPlayerPawn PlayerPawn; // 0xB48(0x8)
		AFortPlayerControllerAthena PlayerController; // 0xB50(0x8)
		AFortPlayerPawn InterrogatedPlayer; // 0xB58(0x8)
		UAnimMontage Anim_Reveal; // 0xB60(0x8)
		UAnimMontage Anim_End; // 0xB68(0x8)
		FName RevealHolster; // 0xB70(0x4)
		FGameplayTag GC_Reveal; // 0xB74(0x4)
		FScalableFloat MarkDurationPlayer; // 0xB78(0x28)
		FScalableFloat MarkDurationNPC; // 0xBA0(0x28)
		FScalableFloat MarkRadius; // 0xBC8(0x28)
		TArray SquadmatesToMark; // 0xBF0(0x10)
		FTimerHandle Timer_Reveal; // 0xC00(0x8)
		FGameplayTag T_NPC; // 0xC08(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xC0C(0x4) UNKNOWN PROPERTY
		double RevealDuration; // 0xC10(0x8)
		double EndAbilityDelay; // 0xC18(0x8)
		double SweepDelay; // 0xC20(0x8)
		bool Cancelled; // 0xC28(0x1)
		bool Ending; // 0xC29(0x1)
		unsigned char UnknownData06_6[0x6]; // 0xC2A(0x6) UNKNOWN PROPERTY
		FString IndicatorGroup; // 0xC30(0x10)
		UClass CameraMode; // 0xC40(0x8)
		TArray ActorsToMark; // 0xC48(0x10)
		FGameplayTagContainer T_ReticleHUD; // 0xC58(0x20)
		FGameplayTagContainer NPCTagsToMark; // 0xC78(0x20)
		FGameplayTagContainer ChestTagsToMark; // 0xC98(0x20)
		FGameplayTagContainer GameplayItemTagsToMark; // 0xCB8(0x20)
		FName ParticleSystemParamName; // 0xCD8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0xCDC(0x4) UNKNOWN PROPERTY
		UParticleSystem IndicatedPS; // 0xCE0(0x8)
		USoundBase IndicatedSound; // 0xCE8(0x8)
		FVector PSOffset; // 0xCF0(0x18)
		FName PSVectorParamName; // 0xD08(0x4)
		unsigned char UnknownData08_6[0x4]; // 0xD0C(0x4) UNKNOWN PROPERTY
		FVector PSDBNOOffset; // 0xD10(0x18)
		FName EnemyStencilName; // 0xD28(0x4)
		FName TreasureChestStencilName; // 0xD2C(0x4)
		double StepTime; // 0xD30(0x8)
		bool testbool; // 0xD38(0x1)
		unsigned char UnknownData09_6[0x7]; // 0xD39(0x7) UNKNOWN PROPERTY
		FScalableFloat EnemyStencilID; // 0xD40(0x28)
		FScalableFloat StencilStepTime; // 0xD68(0x28)
		FScalableFloat bUseDefaultStencil; // 0xD90(0x28)
		FScalableFloat IndicatorStepTime; // 0xDB8(0x28)
		FGameplayTagQuery NPCGameplayTagQuery; // 0xDE0(0x48)
		FIndicatedActorData IndicatedActorDataPlayers; // 0xE28(0xF8)
		FStenciledActorData StenciledActorDataPlayers; // 0xF20(0x80)
		FGameplayTagContainer T_QuestTagContainer; // 0xFA0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C");
			return ret;
		}

		TArray GetTeamMembers(APawn Target, bool bIncludeSelf); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B173600
		void GAB_InterrogatePlayer_Reveal_AutoGenFunc(AActor IndicatedActor); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6B173700
		void ToggleReticleVisibility(bool Hide); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6B172F00
		void Reveal(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B173000
		void EndAbilityCleanup(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6B173A00
		void InitAbility(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B173500
		void Completed_23F3C2DB411862D627ACFCA8233F7B33(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B173C00
		void Cancelled_23F3C2DB411862D627ACFCA8233F7B33(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B173E00
		void Triggered_23F3C2DB411862D627ACFCA8233F7B33(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B172E00
		void Completed_3C2C8C224B62B00BDEEAF5AF38A401C1(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B173B00
		void Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B173D00
		void Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B172D00
		void OnFinish_68B3C6D14B44CCD3170ABDA038C1203E(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B173100
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D6B173300
		void OnDied_Event(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B173200
		void EndInterrogation(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B173900
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D6B173400
		void ExecuteUbergraph_GAB_InterrogatePlayer_Reveal(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6B173800
	};


	// Class /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C
	// Inherited from UFortGameplayAbility_CarryPlayer -> UFortGameplayAbility_Action -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x118 (0xC88 - 0xB70)
	class UGAB_InterrogatePlayer_Search_C : public UFortGameplayAbility_CarryPlayer	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB70(0x8)
		AFortPlayerPawn PlayerPawn; // 0xB78(0x8)
		AFortPlayerControllerAthena PlayerController; // 0xB80(0x8)
		AFortPlayerPawn InterrogatedPlayer; // 0xB88(0x8)
		UAnimMontage Anim_Search; // 0xB90(0x8)
		FName InterrogateHolster; // 0xB98(0x4)
		FName LootTierGroupName; // 0xB9C(0x4)
		UFortWorldItemDefinition ItemDefinition; // 0xBA0(0x8)
		int32_t NumberToSpawn; // 0xBA8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xBAC(0x4) UNKNOWN PROPERTY
		FVector LootSpawnOffset; // 0xBB0(0x18)
		FScalableFloat MaxDropsInstance; // 0xBC8(0x28)
		int32_t NumDropsInstance; // 0xBF0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xBF4(0x4) UNKNOWN PROPERTY
		FScalableFloat KeycardDropBias; // 0xBF8(0x28)
		TArray KeycardItemDefinitions; // 0xC20(0x10)
		FGameplayTag T_Keycard_Yacht; // 0xC30(0x4)
		FGameplayTag T_Keycard_OilRig; // 0xC34(0x4)
		FGameplayTag T_Keycard_SharkIsland; // 0xC38(0x4)
		FGameplayTag T_Keycard_HQ; // 0xC3C(0x4)
		FGameplayTag T_Keycard_MountainBase; // 0xC40(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xC44(0x4) UNKNOWN PROPERTY
		FTimerHandle Timer_Interrogation; // 0xC48(0x8)
		FGameplayTagContainer T_ReticleHUD; // 0xC50(0x20)
		FGameplayTag T_NPC; // 0xC70(0x4)
		unsigned char UnknownData07_6[0x4]; // 0xC74(0x4) UNKNOWN PROPERTY
		UClass GE_Cooldown; // 0xC78(0x8)
		UClass GE_PickedUp; // 0xC80(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C");
			return ret;
		}

		void ApplyGameplayEffectToNPC(UClass GameplayEffect); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B172A00
		void DropKeycard(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6B172700
		void GetKeycardToDrop(bool& HasKeycard, UFortWorldItemDefinition& Output); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6B172300
		void DropLoot(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B172600
		void ToggleReticleVisibility(bool Hide); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6B175E00
		void EndAbilityCleanup(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6B172500
		void InitAbility(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B172200
		void Completed_6BBDC9B445D4280492A25E8E5EA7A53D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B172800
		void Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B172900
		void Triggered_6BBDC9B445D4280492A25E8E5EA7A53D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B175D00
		void Added_9291D75D4A0949E1C5B7E49C1FD11F8B(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B172C00
		void OnPress_2000C5AE43E9D757FF188B85CF911E39(float TimeWaited); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B175F00
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D6B176200
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D6B176300
		void OnDied_Event(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B176100
		void OnDied_Event(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B176000
		void ExecuteUbergraph_GAB_InterrogatePlayer_Search(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6B172400
	};


	// Class /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x1EC (0xD2C - 0xB40)
	class UGAB_GenericDeath_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		UAnimMontage DeathMontage; // 0xB48(0x8)
		FName DeathMontageSectionName; // 0xB50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB54(0x4) UNKNOWN PROPERTY
		FVector DeathHitDirection; // 0xB58(0x18)
		FHitResult DeathHitResult; // 0xB70(0xF8)
		FGameplayTagContainer DamageTags; // 0xC68(0x20)
		FGameplayTagContainer SpawnDroneTags; // 0xC88(0x20)
		UAnimMontage Front; // 0xCA8(0x8)
		UAnimMontage Left; // 0xCB0(0x8)
		UAnimMontage Right; // 0xCB8(0x8)
		UAnimMontage Back; // 0xCC0(0x8)
		UAnimMontage Head_Front; // 0xCC8(0x8)
		UAnimMontage Head_Left; // 0xCD0(0x8)
		UAnimMontage Head_Right; // 0xCD8(0x8)
		UAnimMontage Head_Back; // 0xCE0(0x8)
		int32_t FrontSectionNameCount; // 0xCE8(0x4)
		int32_t LeftSectionNameCount; // 0xCEC(0x4)
		int32_t RightSectionNameCount; // 0xCF0(0x4)
		int32_t BackSectionNameCount; // 0xCF4(0x4)
		int32_t Head_FrontSectionNameCount; // 0xCF8(0x4)
		int32_t Head_LeftSectionNameCount; // 0xCFC(0x4)
		int32_t Head_RightSectionNameCount; // 0xD00(0x4)
		int32_t Head_BackSectionNameCount; // 0xD04(0x4)
		FName FrontMontageSectionPrefix; // 0xD08(0x4)
		FName BackMontageSectionPrefix; // 0xD0C(0x4)
		FName LeftMontageSectionPrefix; // 0xD10(0x4)
		FName RightMontageSectionPrefix; // 0xD14(0x4)
		FName HeadFrontMontageSectionPrefix; // 0xD18(0x4)
		FName HeadBackMontageSectionPrefix; // 0xD1C(0x4)
		FName HeadLeftMontageSectionPrefix; // 0xD20(0x4)
		FName HeadRightMontageSectionPrefix; // 0xD24(0x4)
		FGameplayTag TeleportOutCue; // 0xD28(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C");
			return ret;
		}

		void GetRandomSectionName(int32_t MaxNumberOfSections, FName OriginalSectionName, FName& SectionName); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6B851300
		void InitializeDeathHitDirection(FGameplayEventData EventHitData); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B851200
		void OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B850D00
		void OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B850B00
		void OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B850E00
		void OnBlendedIn_CD8A514040DDA2A4EF94DD913E1B01E4(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B850F00
		void OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B850C00
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D6B851000
		void PickDeathMontageSectionName(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B850A00
		void SetDeathMontageSectionFromName(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B850900
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D6B851100
		void TryCharacterDissolve(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B850800
		void ExecuteUbergraph_GAB_GenericDeath(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6B851400
	};


	// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
	// Inherited from UGAB_GenericDeath_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x14 (0xD40 - 0xD2C)
	class UGA_DefaultPlayer_Death_C : public UGAB_GenericDeath_C	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0xD2C(0x4) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0xD30(0x8)
		FGameplayTag FadeCapsuleStWCue; // 0xD38(0x4)
		FGameplayTag FadeCapsuleAthenaCue; // 0xD3C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C");
			return ret;
		}

		void PickDeathMontageSection(); // Flags: BlueprintEvent 0x15D6B850600
		void ExecuteUbergraph_GA_DefaultPlayer_Death(int32_t EntryPoint); // Flags: Final 0x15D6B850700
	};


	// Class /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x38 (0xB78 - 0xB40)
	class UGAB_AthenaDBNORevive_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		FGameplayTag EC_AppliedEffect; // 0xB48(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB4C(0x4) UNKNOWN PROPERTY
		AFortPlayerPawn PlayerPawn; // 0xB50(0x8)
		FGameplayTag ResurrectCue; // 0xB58(0x4)
		FGameplayTag ResurrectAthenaCue; // 0xB5C(0x4)
		UAnimMontage DBNOMontageOutro; // 0xB60(0x8)
		UAnimMontage DBNOMontageOutroSwimming; // 0xB68(0x8)
		UClass GE_PlayerDamage_Immune_FX; // 0xB70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C");
			return ret;
		}

		void Get DBNO Outro Montage(UAnimMontage& DBNOMontageOutro); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6B854A00
		void Completed_23712DBC45E68EA0C91A4895CBD8B3A6(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B854C00
		void Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B854E00
		void Triggered_23712DBC45E68EA0C91A4895CBD8B3A6(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B854500
		void Cancelled_779E7BAA49FEAD286C5164B83CDFD609(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B854D00
		void Targeted_779E7BAA49FEAD286C5164B83CDFD609(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B854600
		void Removed_620488CD4F8BFC035EC7328664732683(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B854700
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D6B854900
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D6B854800
		void ExecuteUbergraph_GAB_AthenaDBNORevive(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6B854B00
	};


	// Class /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x1D8 (0xD18 - 0xB40)
	class UGAB_AthenaDBNO_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		UAnimMontage DeathMontage; // 0xB48(0x8)
		FVector DeathHitDirection; // 0xB50(0x18)
		FHitResult DeathHitResult; // 0xB68(0xF8)
		FGameplayTagContainer DamageTags; // 0xC60(0x20)
		FGameplayTagContainer GameplayStatusAfflicted; // 0xC80(0x20)
		UAnimMontage DeathMontageSkydive; // 0xCA0(0x8)
		FActiveGameplayEffectHandle DBNOBleedGEHandle; // 0xCA8(0x8)
		FName HolsterId; // 0xCB0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xCB4(0x4) UNKNOWN PROPERTY
		UAnimMontage DeathMontageSwimming; // 0xCB8(0x8)
		AFortPlayerPawnAthena FortPlayerPawn; // 0xCC0(0x8)
		UClass DBNOStart_GE_Class; // 0xCC8(0x8)
		bool ImprovedDBNO; // 0xCD0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xCD1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer Old_DBNO_Block_Tags; // 0xCD8(0x20)
		FActiveGameplayEffectHandle GE_Handle__Health_Bonus; // 0xCF8(0x8)
		double TenacityAmount; // 0xD00(0x8)
		ETenacityType TenacityType; // 0xD08(0x1)
		unsigned char UnknownData05_6[0x7]; // 0xD09(0x7) UNKNOWN PROPERTY
		UClass GE_PlayerDamage_Immune_FX; // 0xD10(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C");
			return ret;
		}

		void Get Custom Tenacity(double& Tenacity); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6B858000
		void Get Max Health Tenacity(double& Tenacity); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6B857D00
		void Apply Health Bonus(FActiveGameplayEffectHandle& EffectHandle); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B858400
		void ApplyBleeding(FActiveGameplayEffectHandle& EffectHandle); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B858300
		UAnimMontage Get DBNO Montage(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6B857F00
		void Get Initial Heal Amount(double& Health); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B857E00
		void InitializeDeathHitDirection(FGameplayEventData EventHitData); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B857C00
		void OnCancelled_F0F6785443BD2E74F5591884CB19F35F(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B857700
		void OnInterrupted_F0F6785443BD2E74F5591884CB19F35F(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B857500
		void OnBlendOut_F0F6785443BD2E74F5591884CB19F35F(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B857800
		void OnBlendedIn_F0F6785443BD2E74F5591884CB19F35F(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B857900
		void OnCompleted_F0F6785443BD2E74F5591884CB19F35F(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B857600
		void OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B857300
		void OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B857400
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D6B857B00
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D6B857A00
		void DropHeldObjects(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B858200
		void ExecuteUbergraph_GAB_AthenaDBNO(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6B858100
	};


	// Class /Game/Abilities/AccountBuff/Buff_PartyXPBoost.Buff_PartyXPBoost_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UBuff_PartyXPBoost_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/AccountBuff/Buff_PartyXPBoost.Buff_PartyXPBoost_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GE_DefaultPlayer_Tooltips.GE_DefaultPlayer_Tooltips_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_DefaultPlayer_Tooltips_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GE_DefaultPlayer_Tooltips.GE_DefaultPlayer_Tooltips_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Mission/GE_Resist_Damage_AoE.GE_Resist_Damage_AoE_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Resist_Damage_AoE_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Mission/GE_Resist_Damage_AoE.GE_Resist_Damage_AoE_C");
			return ret;
		}
	};


	// Class /RidingContent/Abilities/Irwin/GE_NPC_Irwin_RidingAbilities_CooldownReduction.GE_NPC_Irwin_RidingAbilities_CooldownReduction_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_NPC_Irwin_RidingAbilities_CooldownReduction_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Abilities/Irwin/GE_NPC_Irwin_RidingAbilities_CooldownReduction.GE_NPC_Irwin_RidingAbilities_CooldownReduction_C");
			return ret;
		}
	};


	// Class /RidingContent/Abilities/Irwin/GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x38 (0xB78 - 0xB40)
	class UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		UControllableRidableComponent ControllableRidableComponent_Cached; // 0xB48(0x8)
		AFortAIPawn FortAIPawnCached; // 0xB50(0x8)
		double InitialMaxAcceleration; // 0xB58(0x8)
		double MaxRotationRateYaw; // 0xB60(0x8)
		FGameplayTag GCN_BoostTag; // 0xB68(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB6C(0x4) UNKNOWN PROPERTY
		UFortGameplayAbility TargetAbilityCached; // 0xB70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Abilities/Irwin/GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C");
			return ret;
		}

		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D82988E00
		void ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D8298C300
	};


	// Class /Game/Abilities/Player/Athena/GCNL_Creative_PossessProp.GCNL_Creative_PossessProp_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x10 (0x9C0 - 0x9B0)
	class AGCNL_Creative_PossessProp_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		APlayerPawn_Athena_C PlayerPawnAthena; // 0x9B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Athena/GCNL_Creative_PossessProp.GCNL_Creative_PossessProp_C");
			return ret;
		}

		bool OnActive(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D41521700
		void OnLoopingStart(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D41521500
		void OnApplication(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D41521600
		void ExecuteUbergraph_GCNL_Creative_PossessProp(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D41521800
	};


	// Class /RidingContent/Abilities/Base/GE_Riding_Creature_EnergyCritical_Base.GE_Riding_Creature_EnergyCritical_Base_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Creature_EnergyCritical_Base_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Abilities/Base/GE_Riding_Creature_EnergyCritical_Base.GE_Riding_Creature_EnergyCritical_Base_C");
			return ret;
		}
	};


	// Class /RidingContent/Abilities/Irwin/GE_Riding_Creature_BlockAttackOnDismount.GE_Riding_Creature_BlockAttackOnDismount_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Creature_BlockAttackOnDismount_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Abilities/Irwin/GE_Riding_Creature_BlockAttackOnDismount.GE_Riding_Creature_BlockAttackOnDismount_C");
			return ret;
		}
	};


	// Class /RidingContent/Abilities/Base/GE_Riding_Creature_EnergyWarning_Base.GE_Riding_Creature_EnergyWarning_Base_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Creature_EnergyWarning_Base_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Abilities/Base/GE_Riding_Creature_EnergyWarning_Base.GE_Riding_Creature_EnergyWarning_Base_C");
			return ret;
		}
	};


	// Class /RidingContent/Abilities/Base/GA_Riding_Creature_EnergyDepleted_Base.GA_Riding_Creature_EnergyDepleted_Base_C
	// Inherited from UGA_NPC_Parent_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xED8 - 0xED0)
	class UGA_Riding_Creature_EnergyDepleted_Base_C : public UGA_NPC_Parent_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xED0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Abilities/Base/GA_Riding_Creature_EnergyDepleted_Base.GA_Riding_Creature_EnergyDepleted_Base_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D42B0A800
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D42B0A700
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent 0x15D42B0A900
		void ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D42B0AA00
	};


	// Class /RidingContent/Abilities/Irwin/GA_Riding_Creature_EnergyDepleted_Burt.GA_Riding_Creature_EnergyDepleted_Burt_C
	// Inherited from UGA_Riding_Creature_EnergyDepleted_Base_C -> UGA_NPC_Parent_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xED8 - 0xED8)
	class UGA_Riding_Creature_EnergyDepleted_Burt_C : public UGA_Riding_Creature_EnergyDepleted_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Abilities/Irwin/GA_Riding_Creature_EnergyDepleted_Burt.GA_Riding_Creature_EnergyDepleted_Burt_C");
			return ret;
		}
	};


	// Class /RidingContent/Abilities/Irwin/GE_Riding_Creature_EnergyDepleted_Burt.GE_Riding_Creature_EnergyDepleted_Burt_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Creature_EnergyDepleted_Burt_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Abilities/Irwin/GE_Riding_Creature_EnergyDepleted_Burt.GE_Riding_Creature_EnergyDepleted_Burt_C");
			return ret;
		}
	};


	// Class /RidingContent/Abilities/Irwin/GA_Riding_Creature_EnergyDepleted_Grandma.GA_Riding_Creature_EnergyDepleted_Grandma_C
	// Inherited from UGA_Riding_Creature_EnergyDepleted_Base_C -> UGA_NPC_Parent_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xED8 - 0xED8)
	class UGA_Riding_Creature_EnergyDepleted_Grandma_C : public UGA_Riding_Creature_EnergyDepleted_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Abilities/Irwin/GA_Riding_Creature_EnergyDepleted_Grandma.GA_Riding_Creature_EnergyDepleted_Grandma_C");
			return ret;
		}
	};


	// Class /RidingContent/Abilities/Irwin/GE_Riding_Creature_EnergyDepleted_Grandma.GE_Riding_Creature_EnergyDepleted_Grandma_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Creature_EnergyDepleted_Grandma_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Abilities/Irwin/GE_Riding_Creature_EnergyDepleted_Grandma.GE_Riding_Creature_EnergyDepleted_Grandma_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C
	// Inherited from AFortGameplayCueNotifyLoop_LowGravity -> AFortGameplayCueNotify_Looping -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x38 (0x400 - 0x3C8)
	class AGCN_Athena_LowGravity_C : public AFortGameplayCueNotifyLoop_LowGravity	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3C8(0x8)
		AActor MyTargetCached; // 0x3D0(0x8)
		FTimerHandle ExpireTellDelayTimer; // 0x3D8(0x8)
		double ExpirationSoundPeriod; // 0x3E0(0x8)
		FTimerHandle ExpirationSoundTimer; // 0x3E8(0x8)
		double MaxDrawDistance; // 0x3F0(0x8)
		UFXSystemComponent LoopingFX; // 0x3F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C");
			return ret;
		}

		bool OnRemove(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D431F7600
		void Activated(AActor PlayerPawn); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D431F7B00
		bool WhileActive(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D431F7300
		void ExpireTell(); // Flags: BlueprintCallable|BlueprintEvent 0x15D431F7800
		void PlayExpirationSound(); // Flags: BlueprintCallable|BlueprintEvent 0x15D431F7500
		void K2_HandleGameplayCue(AActor MyTarget, TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D431F7700
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D431F7400
		void ClearExpireTell(); // Flags: BlueprintCallable|BlueprintEvent 0x15D431F7A00
		void ExecuteUbergraph_GCN_Athena_LowGravity(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D431F7900
	};


	// Class /Game/Abilities/Player/Athena/GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C
	// Inherited from AGCN_Athena_LowGravity_C -> AFortGameplayCueNotifyLoop_LowGravity -> AFortGameplayCueNotify_Looping -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x8 (0x408 - 0x400)
	class AGCN_Athena_LowGravity_ZipLine_C : public AGCN_Athena_LowGravity_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Athena/GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C");
			return ret;
		}

		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent 0x15D431F6C00
		void ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine(int32_t EntryPoint); // Flags: Final 0x15D431F6D00
	};


	// Class /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C
	// Inherited from AFortGameplayCueNotify_Looping -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x10 (0x390 - 0x380)
	class AGCNL_PurpleStuff_C : public AFortGameplayCueNotify_Looping	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x8)
		APlayerPawn_Athena_Generic_C PlayerActor; // 0x388(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C");
			return ret;
		}

		bool WhileActive(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D4426EE00
		bool OnRemove(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D4426F100
		bool OnActive(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D4426F200
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D4426F000
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent 0x15D4426EF00
		void ExecuteUbergraph_GCNL_PurpleStuff(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D4426F300
	};


	// Class /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C
	// Inherited from UFrontendAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x63DE (0x6D8E - 0x9B0)
	class UMenuScreen_Athena_C : public UFrontendAnimInstance	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x9B8(0x1BC)
		unsigned char UnknownData03_6[0x4]; // 0xB74(0x4) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0xB78(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0xB80(0x8)
		FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0xB88(0xE8)
		FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0xC70(0xE8)
		FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0xD58(0xE8)
		FAnimNode_Slot AnimGraphNode_Slot; // 0xE40(0x48)
		FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0xE88(0xE8)
		FAnimNode_LegIK AnimGraphNode_LegIK; // 0xF70(0x100)
		FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1070(0xE8)
		FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1158(0xE8)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1240(0x128)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1368(0xC8)
		FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0x1430(0x120)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1550(0x48)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1598(0x128)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x16C0(0x128)
		FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x17E8(0xE8)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x18D0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1918(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1960(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x19A8(0xC8)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1A70(0x48)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1AB8(0x78)
		FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1B30(0xE8)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1C18(0x28)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1C40(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1CB0(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1D20(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1D90(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1E00(0x70)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x1E70(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x1EB8(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x1F00(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1F48(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1F68(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2030(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x20A0(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2110(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2180(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x21F0(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2260(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x22D0(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2340(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x23B0(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2420(0x70)
		FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x2490(0xC0)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2550(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2598(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x25E0(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2628(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2670(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x26B8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2700(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2720(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x27E8(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x28B0(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2978(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x29E8(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2A08(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2A78(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2AE8(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2B58(0x70)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2BC8(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2C10(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2C58(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2CA0(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2D10(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2D30(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2DF8(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2E68(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2ED8(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2F48(0x70)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2FB8(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x3000(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3048(0x70)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x30B8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3100(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3120(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x31E8(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x32B0(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3320(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x33E8(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3408(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x34D0(0xC8)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3598(0x28)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x35C0(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3630(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3650(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3718(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x37E0(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x38A8(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x38F0(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x39B8(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3A28(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3AF0(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3B60(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3BD0(0x20)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3BF0(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3CB8(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3D28(0x70)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x3D98(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3DE0(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3EA8(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3F18(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3F88(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3FA8(0xC8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4070(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x40B8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4100(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4148(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4190(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x41D8(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x4220(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x4268(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x42B0(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x42D0(0xC8)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x4398(0x48)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x43E0(0x28)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4408(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4478(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x44E8(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4558(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x45C8(0x70)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x4638(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x4680(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x46C8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4710(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4730(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x47F8(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4868(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x48D8(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4948(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x49B8(0x70)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x4A28(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x4A70(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x4AB8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4B00(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4B20(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x4BE8(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x4CB0(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4D78(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4DE8(0x20)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4E08(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4E78(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4EE8(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x4F58(0x70)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x4FC8(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x5010(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x5058(0x70)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x50C8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5110(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5130(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x51F8(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x5268(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x52D8(0x70)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x5348(0x70)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x53B8(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x5400(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x5448(0x48)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x5490(0x70)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5500(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5520(0xC8)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x55E8(0xC8)
		FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x56B0(0x70)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x5720(0xC8)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x57E8(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5808(0xC8)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x58D0(0x78)
		FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x5948(0xE8)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x5A30(0x78)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x5AA8(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x5AD0(0x28)
		FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x5AF8(0xE8)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x5BE0(0x48)
		FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x5C28(0xE8)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x5D10(0x48)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x5D58(0xC8)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x5E20(0x48)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x5E68(0x20)
		FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x5E88(0x48)
		FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x5ED0(0x78)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x5F48(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x5F70(0x28)
		FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x5F98(0x28)
		FAnimNode_Inertialization AnimGraphNode_Inertialization; // 0x5FC0(0x420)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x63E0(0x48)
		FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x6428(0x48)
		FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x6470(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x64B8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6500(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6548(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6590(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x65D8(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x6620(0x48)
		FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x6668(0x48)
		FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x66B0(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x66F8(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6740(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6788(0x48)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x67D0(0x48)
		FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x6818(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x6860(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x6880(0xC8)
		FAnimNode_LegIK AnimGraphNode_LegIK; // 0x6948(0x100)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x6A48(0x128)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6B70(0x48)
		FAnimNode_LegIK AnimGraphNode_LegIK; // 0x6BB8(0x100)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x6CB8(0x20)
		FAnimNode_Root AnimGraphNode_Root; // 0x6CD8(0x20)
		FMulticastInlineDelegate MenuScreenDispatcher; // 0x6CF8(0x10)
		bool IsSkydiveDiving_Potato; // 0x6D08(0x1)
		bool HasBeenSelected; // 0x6D09(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x6D0A(0x2) UNKNOWN PROPERTY
		int32_t PoseInt; // 0x6D0C(0x4)
		FVector OffsetTranslate; // 0x6D10(0x18)
		FRotator OffsetRotate; // 0x6D28(0x18)
		APlayerPawn_Athena_C PawnOwner; // 0x6D40(0x8)
		double StartTime; // 0x6D48(0x8)
		double PlayRate; // 0x6D50(0x8)
		double HidePropTimeRemaining; // 0x6D58(0x8)
		bool HidePropBones; // 0x6D60(0x1)
		bool HasWeaponEquipped; // 0x6D61(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x6D62(0x6) UNKNOWN PROPERTY
		AFortWeapon Equipped_Weapon; // 0x6D68(0x8)
		UAnimMontage Current_Idle_Montage; // 0x6D70(0x8)
		double Skydive_Aim_Yaw; // 0x6D78(0x8)
		double Skydive_Aim_Pitch; // 0x6D80(0x8)
		int32_t WeaponHandPose; // 0x6D88(0x4)
		bool OneHandedWeapon; // 0x6D8C(0x1)
		bool Dual; // 0x6D8D(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6401C500
		void CalculateMontagePlayTiming(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6401B800
		void HidePropsForBlend(UAnimMontage NewMontage, bool BlendingIn); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6401B400
		void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByBool_846B1F144FCC62C0860150BBCD95C2E8(); // Flags: BlueprintEvent 0x15D6401B700
		void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_TransitionResult_2E3328A94B338669440FEBAFF4C036E7(); // Flags: BlueprintEvent 0x15D6401B600
		void AnimNotify_playFacialAnim(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401BB00
		void UserFocus(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401AE00
		void AnimNotify_LeftB(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401C400
		void BlueprintUpdateAnimation(float DeltaTimeX); // Flags: Event|Public|BlueprintEvent 0x15D6401B900
		void BlueprintInitializeAnimation(); // Flags: Event|Public|BlueprintEvent 0x15D6401BA00
		void AnimNotify_LobbySkydive_Diving(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401C300
		void AnimNotify_LobbySkydive_Gliding(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401C200
		void OnMontageStarted_Event_HideProps(UAnimMontage Montage); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401AF00
		void OnMontageBlendingOut_Event_HideProps(UAnimMontage Montage, bool bInterrupted); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401B000
		void OnFocusedItemChanged(UFortItemDefinition FocusedItem, AFortWeapon EquippedWeapon, AFortPlayerParachute CurrentParachute); // Flags: Event|Protected|BlueprintEvent 0x15D6401B100
		void OnBodyPart(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401B200
		void WhenBackpackPart(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401AD00
		void AnimNotify_Melee_Swing_L(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401C100
		void AnimNotify_Melee_Swing_R(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401BE00
		void AnimNotify_Melee_Swing_L_End(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401BF00
		void AnimNotify_Melee_Swing_R_End(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401BC00
		void AnimNotify_Melee_Swing_L(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401C000
		void AnimNotify_Melee_Swing_R(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6401BD00
		void ExecuteUbergraph_MenuScreen_Athena(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6401B500
		void MenuScreenDispatcher__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D6401B300
	};


	// Class /Game/Abilities/Weapons/Melee/GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x31 (0xB71 - 0xB40)
	class UGAB_Melee_Generic_EventGraph_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		bool Stamina_Lockout; // 0xB48(0x1)
		bool Debug; // 0xB49(0x1)
		unsigned char UnknownData02_6[0x2]; // 0xB4A(0x2) UNKNOWN PROPERTY
		int32_t DebugSpecificHitNumber; // 0xB4C(0x4)
		int32_t Counter; // 0xB50(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xB54(0x4) UNKNOWN PROPERTY
		UClass GE_KnockBackImmunity; // 0xB58(0x8)
		FActiveGameplayEffectHandle GEH_KnockBackImmunity; // 0xB60(0x8)
		FName N_SavedCollisionChannel; // 0xB68(0x4)
		FGameplayTag TC_Triggered; // 0xB6C(0x4)
		bool ParentHandlesMontage_Targeting_Commit; // 0xB70(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Weapons/Melee/GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C");
			return ret;
		}

		void Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing(AActor Actor_A, AActor Actor_B, double Half_Angle_Of_Actor_A_Facing, bool& IsWithinHalfAngle); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D63331F00
		void GetLocationAtDistanceFromActorFacing(AActor Actor, double Distance, double Rotation(Pitch), double Rotation(Yaw), FVector& Location); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D63331D00
		void Get_X_Y_Distance_Between_Vectors(FVector Vector1, FVector vector2, double& X_Y_Distance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D63331E00
		void SetPawnCollision(AFortPawn FortPawn, bool CollisionOn); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D63331900
		void SetKnockbackImmunity(bool ImmunityOn); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D63331A00
		void Completed_8C20D6D3411A3D7E54D6049F69DF10BE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D63332100
		void Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6401E800
		void Triggered_8C20D6D3411A3D7E54D6049F69DF10BE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D63331800
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D63331C00
		void OnTriggeredFromAnimNotify(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag); // Flags: BlueprintCallable|BlueprintEvent 0x15D63331B00
		void ExecuteUbergraph_GAB_Melee_Generic_EventGraph(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D63332000
	};


	// Class /Game/Abilities/Weapons/Melee/GE_Melee_GenericDamage.GE_Melee_GenericDamage_C
	// Inherited from UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Melee_GenericDamage_C : public UGET_DirectPhysicalDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Weapons/Melee/GE_Melee_GenericDamage.GE_Melee_GenericDamage_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Weapons/Melee/GE_Melee_GenericDamageMakeWeakspot.GE_Melee_GenericDamageMakeWeakspot_C
	// Inherited from UGE_Melee_GenericDamage_C -> UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Melee_GenericDamageMakeWeakspot_C : public UGE_Melee_GenericDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Weapons/Melee/GE_Melee_GenericDamageMakeWeakspot.GE_Melee_GenericDamageMakeWeakspot_C");
			return ret;
		}
	};


	// Class /Game/Abilities/Weapons/Melee/GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C
	// Inherited from UGAB_Melee_Generic_EventGraph_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x17 (0xB88 - 0xB71)
	class UGAB_Melee_GenericCombo_C : public UGAB_Melee_Generic_EventGraph_C	
	{
	public:
		unsigned char UnknownData01_3[0x7]; // 0xB71(0x7) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0xB78(0x8)
		double OriginalMontagePlayRate; // 0xB80(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Abilities/Weapons/Melee/GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C");
			return ret;
		}

		void Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D63331600
		void Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D63331700
		void Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D63331200
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D63331400
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D63331300
		void ExecuteUbergraph_GAB_Melee_GenericCombo(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D63331500
	};

}
