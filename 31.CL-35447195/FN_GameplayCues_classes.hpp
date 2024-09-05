#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayCues
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_LuredInterest.GCN_Irwin_PlayerInteraction_LuredInterest_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Irwin_PlayerInteraction_LuredInterest_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_LuredInterest.GCN_Irwin_PlayerInteraction_LuredInterest_C");
			return ret;
		}
	};


	// Class /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x18 (0x9C8 - 0x9B0)
	class AGCNL_Irwin_Slide_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		USoundBase SlideSound; // 0x9B8(0x8)
		UAudioComponent SlidingSoundComponent; // 0x9C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C");
			return ret;
		}

		void OnLoopingStartGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D44BCB500
		void OnRemovalGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D44BCB400
		void ExecuteUbergraph_GCNL_Irwin_Slide(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D44BCB600
	};


	// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Tamed.GCN_Irwin_PlayerInteraction_Tamed_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x8 (0x220 - 0x218)
	class UGCN_Irwin_PlayerInteraction_Tamed_C : public UFortGameplayCueNotify_Burst	
	{
	public:
		USkeletalMeshComponent NewVar; // 0x218(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Tamed.GCN_Irwin_PlayerInteraction_Tamed_C");
			return ret;
		}

		void OnBurstNiagara(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15D44E01900
	};


	// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Untamed.GCN_Irwin_PlayerInteraction_Untamed_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x8 (0x220 - 0x218)
	class UGCN_Irwin_PlayerInteraction_Untamed_C : public UFortGameplayCueNotify_Burst	
	{
	public:
		USkeletalMeshComponent NewVar; // 0x218(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Untamed.GCN_Irwin_PlayerInteraction_Untamed_C");
			return ret;
		}

		void OnBurstNiagara(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15D44E07A00
	};


	// Class /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x30 (0x580 - 0x550)
	class AGCN_BurtCharging_Player_Latent_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x8)
		APlayerController GCPlayerController; // 0x558(0x8)
		AFortPlayerPawn FortPlayerPawn; // 0x560(0x8)
		USoundBase BoostSound; // 0x568(0x8)
		UAudioComponent BoostAudioComponent; // 0x570(0x8)
		USoundBase BoostEndSound; // 0x578(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C");
			return ret;
		}

		bool OnExecute(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D3F279F00
		void ExecuteBoostLogic(); // Flags: BlueprintCallable|BlueprintEvent 0x15D3F27DD00
		void BoostEndEvent(); // Flags: BlueprintCallable|BlueprintEvent 0x15D3F279D00
		void ExecuteUbergraph_GCN_BurtCharging_Player_Latent(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D3F279E00
	};


	// Class /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x18 (0x9C8 - 0x9B0)
	class AGCNL_RidingSprint_SpeedLines_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		USoundBase SpeedLinesAudio; // 0x9B8(0x8)
		UAudioComponent SpeedlinesAudioComp; // 0x9C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C");
			return ret;
		}

		void OnApplicationGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D52C99E00
		void OnRemovalGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D52C99C00
		void ExecuteUbergraph_GCNL_RidingSprint_SpeedLines(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D52C99D00
	};


	// Class /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x101 (0xAB1 - 0x9B0)
	class AGCNL_PlayerIsRiding_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		USoundBase RidingSoundLoop; // 0x9B8(0x8)
		UAudioComponent RidingSoundLoopComp; // 0x9C0(0x8)
		FTimerHandle VelocityTimerHandle; // 0x9C8(0x8)
		AActor Player; // 0x9D0(0x8)
		double Speed; // 0x9D8(0x8)
		TEnumAsByte TeamAffiliation; // 0x9E0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x9E1(0x7) UNKNOWN PROPERTY
		FVector Previous; // 0x9E8(0x18)
		USoundBase Enemy_RidingSoundLoop; // 0xA00(0x8)
		AFortPlayerPawnAthena As_Fort_Player_Pawn_Athena; // 0xA08(0x8)
		double JumpParamTarget; // 0xA10(0x8)
		double JumpValue; // 0xA18(0x8)
		bool bIsFalling; // 0xA20(0x1)
		bool bCanResetJump; // 0xA21(0x1)
		unsigned char UnknownData04_6[0x6]; // 0xA22(0x6) UNKNOWN PROPERTY
		UPawnMovementComponent CreatureMovementComponent; // 0xA28(0x8)
		FTimerHandle JumpResetTimerHandle; // 0xA30(0x8)
		double JumpPitchInterpSpeed; // 0xA38(0x8)
		FCurveTableRowHandle RidingCurveTable; // 0xA40(0x10)
		double BoarSprintSpeed; // 0xA50(0x8)
		double CurrentVelocity; // 0xA58(0x8)
		double MaxNormalRunSpeed; // 0xA60(0x8)
		bool bSprinting; // 0xA68(0x1)
		unsigned char UnknownData05_6[0x7]; // 0xA69(0x7) UNKNOWN PROPERTY
		double MaxSpeed; // 0xA70(0x8)
		double MaxSpeedClamped; // 0xA78(0x8)
		USoundBase BurstOnCue; // 0xA80(0x8)
		FGameplayTagContainer BlockSitAudioTags; // 0xA88(0x20)
		USoundBase BurstOffCue; // 0xAA8(0x8)
		bool HasAudio; // 0xAB0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C");
			return ret;
		}

		void CalculateVelocityParam(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D52C99200
		bool WhileActive(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D52C98700
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D52C98B00
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent 0x15D52C98A00
		void OnLoopingStartGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D52C98F00
		void OnRemovalGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D52C98E00
		void PlayerRidingGCNLStarted(); // Flags: BlueprintCallable|BlueprintEvent 0x15D52C98C00
		void PlayerRidingDCNLEnded(); // Flags: BlueprintCallable|BlueprintEvent 0x15D52C98D00
		void OnJumpApex(); // Flags: BlueprintCallable|BlueprintEvent 0x15D52C99000
		void SetUpRidableAudioEvents(); // Flags: BlueprintCallable|BlueprintEvent 0x15D52C98900
		void StartLoopingAudio(); // Flags: BlueprintCallable|BlueprintEvent 0x15D52C98800
		void ExecuteUbergraph_GCNL_PlayerIsRiding(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D52C99100
	};


	// Class /RidingContent/GameplayCues/GCN_Riding_MountLanded_Default.GCN_Riding_MountLanded_Default_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Riding_MountLanded_Default_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCN_Riding_MountLanded_Default.GCN_Riding_MountLanded_Default_C");
			return ret;
		}
	};


	// Class /RidingContent/GameplayCues/GCN_Riding_MountLanded_Boar.GCN_Riding_MountLanded_Boar_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Riding_MountLanded_Boar_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCN_Riding_MountLanded_Boar.GCN_Riding_MountLanded_Boar_C");
			return ret;
		}
	};


	// Class /RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_Default.GCN_Riding_BoarSprintImpact_Default_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Riding_BoarSprintImpact_Default_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_Default.GCN_Riding_BoarSprintImpact_Default_C");
			return ret;
		}
	};


	// Class /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x20 (0x9D0 - 0x9B0)
	class AGCNL_Riding_Sprint_CameraShake_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		AFortPlayerController FortPlayerController; // 0x9B8(0x8)
		UCameraShakeBase FOVFlare; // 0x9C0(0x8)
		UCameraShakeBase ShakeNoise; // 0x9C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C");
			return ret;
		}

		bool OnRemove(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D52C9F500
		void OnLoopingStartGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D52C9F600
		void ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D52C9F700
	};


	// Class /RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_Pawn.GCN_Riding_BoarSprintImpact_Pawn_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Riding_BoarSprintImpact_Pawn_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_Pawn.GCN_Riding_BoarSprintImpact_Pawn_C");
			return ret;
		}
	};


	// Class /RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_BuildDestroyed.GCN_Riding_BoarSprintImpact_BuildDestroyed_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Riding_BoarSprintImpact_BuildDestroyed_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_BuildDestroyed.GCN_Riding_BoarSprintImpact_BuildDestroyed_C");
			return ret;
		}
	};


	// Class /Irwin/GameplayCues/GCN_Irwin_SprintImpact.GCN_Irwin_SprintImpact_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Irwin_SprintImpact_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/GameplayCues/GCN_Irwin_SprintImpact.GCN_Irwin_SprintImpact_C");
			return ret;
		}

		void OnBurstGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15D31E5E200
	};


	// Class /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x18 (0x9C8 - 0x9B0)
	class AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		FGameplayTag TacticalSprintTag; // 0x9B8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x9BC(0x4) UNKNOWN PROPERTY
		UFXSystemComponent MainNS; // 0x9C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C");
			return ret;
		}

		void Added_7482F31A49360978B87F339D76FC2BB7(); // Flags: BlueprintCallable|BlueprintEvent 0x15D57FB2B00
		void Removed_AD34CCD44592FD2F05DB47BDF9413ACC(); // Flags: BlueprintCallable|BlueprintEvent 0x15D57FB2800
		void OnApplicationGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D57FB2900
		void ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D57FB2A00
	};


	// Class /RidingContent/GameplayCues/GCN_Riding_JumpOnCreature.GCN_Riding_JumpOnCreature_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Riding_JumpOnCreature_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCN_Riding_JumpOnCreature.GCN_Riding_JumpOnCreature_C");
			return ret;
		}
	};


	// Class /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0xC1 (0xA71 - 0x9B0)
	class AGCNL_VehicleCosmetics_CosmeticSwap_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		float Sweep_Car_to_Normal_Car_Sweep_Controller_E45E3F1947E3780C879AA7B0F67B8AA0; // 0x9B8(0x4)
		TEnumAsByte Sweep_Car_to_Normal__Direction_E45E3F1947E3780C879AA7B0F67B8AA0; // 0x9BC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9BD(0x3) UNKNOWN PROPERTY
		UTimelineComponent Sweep_Car_to_Normal; // 0x9C0(0x8)
		UNiagaraComponent LoopingVFX; // 0x9C8(0x8)
		TScriptInterface LocalFortVehicleInterface; // 0x9D0(0x10)
		FTimerHandle KeepCheckingTimer; // 0x9E0(0x8)
		TArray OG_Vehicle_Mats; // 0x9E8(0x10)
		TSet OG_Wheel_Mats; // 0x9F8(0x50)
		UMaterialInterface Vehicle_DeRez_Material; // 0xA48(0x8)
		UAudioComponent LoopingSound; // 0xA50(0x8)
		USkeletalMeshComponent Vehicle_Mesh; // 0xA58(0x8)
		TArray Wheel_Meshes; // 0xA60(0x10)
		bool Debug; // 0xA70(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C");
			return ret;
		}

		void Material Switch(bool Restore Original, TScriptInterface Vehicle); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D51B46500
		void Sweep Car to Normal__FinishedFunc(); // Flags: BlueprintEvent 0x15D51B46200
		void Sweep Car to Normal__UpdateFunc(); // Flags: BlueprintEvent 0x15D51B46100
		void KeepCheckingForWheels(); // Flags: BlueprintCallable|BlueprintEvent 0x15D51B46600
		void OnLoopingStartGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D51B46400
		void OnRemovalGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D51B46300
		void ExecuteUbergraph_GCNL_VehicleCosmetics_CosmeticSwap(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D51B46700
	};


	// Class /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C
	// Inherited from AFortGameplayCueNotify_CrownWear -> AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x88 (0xAF0 - 0xA68)
	class AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C : public AFortGameplayCueNotify_CrownWear	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA68(0x8)
		FScalableFloat Audio_Vizualizer_Shown_On_Wearer_; // 0xA70(0x28)
		FScalableFloat Audio_Vizualizer_Range; // 0xA98(0x28)
		FScalableFloat Audio_Vizualizer_Ping_Frequency; // 0xAC0(0x28)
		FTimerHandle timer_handle; // 0xAE8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C");
			return ret;
		}

		void AVIndicatorLoop(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5ED67500
		void OnRemovalGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D5ED67200
		void OnLoopingStartGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D5ED67300
		void ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D5ED67400
	};


	// Class /JunoGame/GameplayCues/GCN_Juno_Player_Death.GCN_Juno_Player_Death_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Juno_Player_Death_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/JunoGame/GameplayCues/GCN_Juno_Player_Death.GCN_Juno_Player_Death_C");
			return ret;
		}

		void OnBurstGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6159F600
	};

}
