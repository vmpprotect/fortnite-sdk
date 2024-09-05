#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Gameplay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /RidingContent/Gameplay/General/GE_Riding_EatSlapBerry_TriggerInfiniteStamina.GE_Riding_EatSlapBerry_TriggerInfiniteStamina_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_EatSlapBerry_TriggerInfiniteStamina_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_EatSlapBerry_TriggerInfiniteStamina.GE_Riding_EatSlapBerry_TriggerInfiniteStamina_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/Camera/Riding_PlayerCameraMode_TacticalSprint.Riding_PlayerCameraMode_TacticalSprint_C
	// Inherited from UFortCameraMode_Riding -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D20 - 0x1D20)
	class URiding_PlayerCameraMode_TacticalSprint_C : public UFortCameraMode_Riding	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/Riding_PlayerCameraMode_TacticalSprint.Riding_PlayerCameraMode_TacticalSprint_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xB48 - 0xB40)
	class UGA_Riding_Player_StopRidingOnTriggered_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C");
			return ret;
		}

		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D4152ED00
		void ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D4152EC00
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Player_Petting.GE_Riding_Player_Petting_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Player_Petting_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Player_Petting.GE_Riding_Player_Petting_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x30 (0xB70 - 0xB40)
	class UGA_Riding_Player_Petting_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		URidableComponent Active_Ridable; // 0xB48(0x8)
		UClass GE_PlayerPetting; // 0xB50(0x8)
		TArray TagsToCancelPetting; // 0xB58(0x10)
		AFortPlayerPawn FortPlayerPawnRider; // 0xB68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C");
			return ret;
		}

		void PettingTelemetry(AActor Owner); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41FA1200
		void GetRiderPettingMontage(UAnimMontage& RiderPettingMontage); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FA1A00
		void OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Flags: BlueprintCallable|BlueprintEvent 0x15D41FA1500
		void OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Flags: BlueprintCallable|BlueprintEvent 0x15D41FA1300
		void OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Flags: BlueprintCallable|BlueprintEvent 0x15D41FA1600
		void OnBlendedIn_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Flags: BlueprintCallable|BlueprintEvent 0x15D41FA1700
		void OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Flags: BlueprintCallable|BlueprintEvent 0x15D41FA1400
		void Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D(); // Flags: BlueprintCallable|BlueprintEvent 0x15D41FA1D00
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D41FA1900
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D41FA1800
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent 0x15D41FA1B00
		void ExecuteUbergraph_GA_Riding_Player_Petting(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D41FA1C00
	};


	// Class /RidingContent/Gameplay/Camera/RidingCameraMode.RidingCameraMode_C
	// Inherited from UFortCameraMode_Riding -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x0 (0x1D20 - 0x1D20)
	class URidingCameraMode_C : public UFortCameraMode_Riding	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/RidingCameraMode.RidingCameraMode_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C
	// Inherited from UGA_NPC_Parent_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xED8 - 0xED0)
	class UGA_Riding_Creature_IsBeingRidden_Passive_C : public UGA_NPC_Parent_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xED0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D42B03A00
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D42B03900
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent 0x15D42B03B00
		void ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D42B03C00
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden_Passive.GE_Riding_Creatue_IsBeingRidden_Passive_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Creatue_IsBeingRidden_Passive_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden_Passive.GE_Riding_Creatue_IsBeingRidden_Passive_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C
	// Inherited from UGA_NPC_Parent_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xED8 - 0xED0)
	class UGA_Riding_Creature_IsBeingRidden_C : public UGA_NPC_Parent_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xED0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D42B03600
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D42B03500
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent 0x15D42B03700
		void ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D42B03800
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden.GE_Riding_Creatue_IsBeingRidden_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Creatue_IsBeingRidden_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden.GE_Riding_Creatue_IsBeingRidden_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Irwin_Prey_Burt_IsBeingRidden.GE_Riding_Irwin_Prey_Burt_IsBeingRidden_C
	// Inherited from UGE_Riding_Creatue_IsBeingRidden_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Irwin_Prey_Burt_IsBeingRidden_C : public UGE_Riding_Creatue_IsBeingRidden_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Irwin_Prey_Burt_IsBeingRidden.GE_Riding_Irwin_Prey_Burt_IsBeingRidden_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x18 (0xB58 - 0xB40)
	class UGA_Riding_Player_IsRiding_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		UAnimMontage SettleMontageRef; // 0xB48(0x8)
		UFortAbilityTask_PlayMontageWaitTarget settleMontageTask; // 0xB50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D42B03000
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D42B02F00
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent 0x15D42B03100
		void ExecuteUbergraph_GA_Riding_Player_IsRiding(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D42B03200
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Player_IsRiding.GE_Riding_Player_IsRiding_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Player_IsRiding_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Player_IsRiding.GE_Riding_Player_IsRiding_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x30 (0xB70 - 0xB40)
	class UGA_Riding_Creature_EatToRefuel_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		FGameplayTagContainer Slap_Berry_Tags; // 0xB48(0x20)
		UClass Slap_Berry_Gameplay_Effect; // 0xB68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C");
			return ret;
		}

		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D42B02200
		void ExecuteUbergraph_GA_Riding_Creature_EatToRefuel(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D42B02300
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Creature_Grant_EatToRefuel.GE_Riding_Creature_Grant_EatToRefuel_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Creature_Grant_EatToRefuel_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Creature_Grant_EatToRefuel.GE_Riding_Creature_Grant_EatToRefuel_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x19 (0xB59 - 0xB40)
	class UGA_Riding_Player_Sprint_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		TArray Tags_to_cancel_sprinting; // 0xB48(0x10)
		bool ShouldCancelSprint; // 0xB58(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C");
			return ret;
		}

		void OnRep_CancelSprintDispatcher(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B05E00
		void Added_BA9D24D64958BB04345A3D89BD7617CA(); // Flags: BlueprintCallable|BlueprintEvent 0x15D42B06300
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D42B06000
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D42B05F00
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent 0x15D42B06100
		void ExecuteUbergraph_GA_Riding_Player_Sprint(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D42B06200
	};


	// Class /RidingContent/Gameplay/General/GE_Riding_Player_Sprint.GE_Riding_Player_Sprint_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Player_Sprint_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GE_Riding_Player_Sprint.GE_Riding_Player_Sprint_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xB48 - 0xB40)
	class UGA_Riding_Creature_Burt_SprintCharge_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x15D42F28200
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x15D42F28100
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent 0x15D42F28300
		void ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D42F28400
	};


	// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Pawn.CameraShake_Riding_BoarSprintImpact_Pawn_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_Riding_BoarSprintImpact_Pawn_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Pawn.CameraShake_Riding_BoarSprintImpact_Pawn_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_BuildDestroy.CameraShake_Riding_BoarSprintImpact_BuildDestroy_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_Riding_BoarSprintImpact_BuildDestroy_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_BuildDestroy.CameraShake_Riding_BoarSprintImpact_BuildDestroy_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Default.CameraShake_Riding_BoarSprintImpact_Default_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_Riding_BoarSprintImpact_Default_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Default.CameraShake_Riding_BoarSprintImpact_Default_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_FOVFlare.CameraShake_Riding_Sprint_FOVFlare_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_Riding_Sprint_FOVFlare_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_FOVFlare.CameraShake_Riding_Sprint_FOVFlare_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_Loop.CameraShake_Riding_Sprint_Loop_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_Riding_Sprint_Loop_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_Loop.CameraShake_Riding_Sprint_Loop_C");
			return ret;
		}
	};


	// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_JumpOnCreature.CameraShake_Riding_JumpOnCreature_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_Riding_JumpOnCreature_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_JumpOnCreature.CameraShake_Riding_JumpOnCreature_C");
			return ret;
		}
	};

}
