#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayCues
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x18 (0x9C8 - 0x9B0)
	class AGCNL_Irwin_Slide_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		USoundBase* SlideSound; // 0x9B8(0x8)
		UAudioComponent* SlidingSoundComponent; // 0x9C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C");
			return ret;
		}

		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_Irwin_Slide(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


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


	// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Tamed.GCN_Irwin_PlayerInteraction_Tamed_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x8 (0x220 - 0x218)
	class UGCN_Irwin_PlayerInteraction_Tamed_C : public UFortGameplayCueNotify_Burst	
	{
	public:
		USkeletalMeshComponent* NewVar; // 0x218(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Tamed.GCN_Irwin_PlayerInteraction_Tamed_C");
			return ret;
		}

		void OnBurstNiagara(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UNiagaraComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Untamed.GCN_Irwin_PlayerInteraction_Untamed_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x8 (0x220 - 0x218)
	class UGCN_Irwin_PlayerInteraction_Untamed_C : public UFortGameplayCueNotify_Burst	
	{
	public:
		USkeletalMeshComponent* NewVar; // 0x218(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Untamed.GCN_Irwin_PlayerInteraction_Untamed_C");
			return ret;
		}

		void OnBurstNiagara(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UNiagaraComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0xC1 (0xA71 - 0x9B0)
	class AGCNL_VehicleCosmetics_CosmeticSwap_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		float Sweep_Car_to_Normal_Car_Sweep_Controller_E45E3F1947E3780C879AA7B0F67B8AA0; // 0x9B8(0x4)
		TEnumAsByte<ETimelineDirection> Sweep_Car_to_Normal__Direction_E45E3F1947E3780C879AA7B0F67B8AA0; // 0x9BC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9BD(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Sweep_Car_to_Normal; // 0x9C0(0x8)
		UNiagaraComponent* LoopingVFX; // 0x9C8(0x8)
		TScriptInterface<Class> LocalFortVehicleInterface; // 0x9D0(0x10)
		FTimerHandle KeepCheckingTimer; // 0x9E0(0x8)
		TArray<UMaterialInterface*> OG_Vehicle_Mats; // 0x9E8(0x10)
		TSet<UMaterialInterface*> OG_Wheel_Mats; // 0x9F8(0x50)
		UMaterialInterface* Vehicle_DeRez_Material; // 0xA48(0x8)
		UAudioComponent* LoopingSound; // 0xA50(0x8)
		USkeletalMeshComponent* Vehicle_Mesh; // 0xA58(0x8)
		TArray<USkeletalMeshComponent*> Wheel_Meshes; // 0xA60(0x10)
		bool Debug; // 0xA70(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C");
			return ret;
		}

		void Material Switch(bool Restore Original, TScriptInterface<Class> Vehicle); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Sweep Car to Normal__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Sweep Car to Normal__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void KeepCheckingForWheels(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_VehicleCosmetics_CosmeticSwap(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SupplyDropRadioGameplay/GameplayCues/GCN_SupplyDropRadio_SupplyDrop_Spawn.GCN_SupplyDropRadio_SupplyDrop_Spawn_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x8 (0x558 - 0x550)
	class AGCN_SupplyDropRadio_SupplyDrop_Spawn_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:
		USoundBase* LocalConfirmSound; // 0x550(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/GameplayCues/GCN_SupplyDropRadio_SupplyDrop_Spawn.GCN_SupplyDropRadio_SupplyDrop_Spawn_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Valet/GameplayCues/GCNL_Valet_Surface_Ice.GCNL_Valet_Surface_Ice_C
	// Inherited from AGCN_Loop_Ice_Wheels_Environmental_C -> AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x30 (0xA48 - 0xA18)
	class AGCNL_Valet_Surface_Ice_C : public AGCN_Loop_Ice_Wheels_Environmental_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA18(0x8)
		FTimerHandle TimerSoundModultation; // 0xA20(0x8)
		TArray<UAudioComponent*> SpawnedAudioComps; // 0xA28(0x10)
		TScriptInterface<Class> TargetVehicleInterface; // 0xA38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/GameplayCues/GCNL_Valet_Surface_Ice.GCNL_Valet_Surface_Ice_C");
			return ret;
		}

		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_Valet_Surface_Ice(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SupplyDropRadioGameplay/GameplayCues/GCN_SupplyDropRadio_SupplyDrop_Open.GCN_SupplyDropRadio_SupplyDrop_Open_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x8 (0x558 - 0x550)
	class AGCN_SupplyDropRadio_SupplyDrop_Open_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/GameplayCues/GCN_SupplyDropRadio_SupplyDrop_Open.GCN_SupplyDropRadio_SupplyDrop_Open_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCN_SupplyDropRadio_SupplyDrop_Open(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /ValetMods/GameplayCues/GCN_ValetMod_OffRoadTire_Apply.GCN_ValetMod_OffRoadTire_Apply_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x0 (0x550 - 0x550)
	class AGCN_ValetMod_OffRoadTire_Apply_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ValetMods/GameplayCues/GCN_ValetMod_OffRoadTire_Apply.GCN_ValetMod_OffRoadTire_Apply_C");
			return ret;
		}

		void OnBurst(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UParticleSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrindRail/GameplayCues/GCN_Burst_LandOnRail.GCN_Burst_LandOnRail_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x8 (0x220 - 0x218)
	class UGCN_Burst_LandOnRail_C : public UFortGameplayCueNotify_Burst	
	{
	public:
		FGameplayTag JumpLand; // 0x218(0x4)
		FGameplayTag StartLand; // 0x21C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/GameplayCues/GCN_Burst_LandOnRail.GCN_Burst_LandOnRail_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VehicleMods/GameplayCues/GCN_VehicleMod_MachineGun_Applied.GCN_VehicleMod_MachineGun_Applied_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_VehicleMod_MachineGun_Applied_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/GameplayCues/GCN_VehicleMod_MachineGun_Applied.GCN_VehicleMod_MachineGun_Applied_C");
			return ret;
		}

		void OnBurst(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UParticleSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /ScoutDrone/GameplayCues/GCN_RadiusMarked.GCN_RadiusMarked_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_RadiusMarked_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/GameplayCues/GCN_RadiusMarked.GCN_RadiusMarked_C");
			return ret;
		}
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Falling_HitWater.GCN_Athena_Sentry_Turret_Deployable_Falling_HitWater_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_Falling_HitWater_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Falling_HitWater.GCN_Athena_Sentry_Turret_Deployable_Falling_HitWater_C");
			return ret;
		}
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Deactivate.GCN_Athena_Sentry_Turret_Deployable_Deactivate_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_Deactivate_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Deactivate.GCN_Athena_Sentry_Turret_Deployable_Deactivate_C");
			return ret;
		}
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Falling_Bounce.GCN_Athena_Sentry_Turret_Deployable_Falling_Bounce_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_Falling_Bounce_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Falling_Bounce.GCN_Athena_Sentry_Turret_Deployable_Falling_Bounce_C");
			return ret;
		}
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_WindDown.GCN_Athena_Sentry_Turret_Deployable_WindDown_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_WindDown_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_WindDown.GCN_Athena_Sentry_Turret_Deployable_WindDown_C");
			return ret;
		}
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Falling_HitWorld.GCN_Athena_Sentry_Turret_Deployable_Falling_HitWorld_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_Falling_HitWorld_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Falling_HitWorld.GCN_Athena_Sentry_Turret_Deployable_Falling_HitWorld_C");
			return ret;
		}
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Falling_HitPawn.GCN_Athena_Sentry_Turret_Deployable_Falling_HitPawn_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_Falling_HitPawn_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Falling_HitPawn.GCN_Athena_Sentry_Turret_Deployable_Falling_HitPawn_C");
			return ret;
		}
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_TargetAcquired.GCN_Athena_Sentry_Turret_Deployable_TargetAcquired_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_TargetAcquired_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_TargetAcquired.GCN_Athena_Sentry_Turret_Deployable_TargetAcquired_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Windup.GCN_Athena_Sentry_Turret_Deployable_Windup_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_Windup_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Windup.GCN_Athena_Sentry_Turret_Deployable_Windup_C");
			return ret;
		}
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCNL_Athena_Sentry_Turret_Deployable_Falling_InAirLoop.GCNL_Athena_Sentry_Turret_Deployable_Falling_InAirLoop_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x0 (0x9B0 - 0x9B0)
	class AGCNL_Athena_Sentry_Turret_Deployable_Falling_InAirLoop_C : public AFortGameplayCueNotify_Loop	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCNL_Athena_Sentry_Turret_Deployable_Falling_InAirLoop.GCNL_Athena_Sentry_Turret_Deployable_Falling_InAirLoop_C");
			return ret;
		}
	};


	// Class /ScoutDrone/GameplayCues/GCN_SpeedBoostImpactStone.GCN_SpeedBoostImpactStone_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_SpeedBoostImpactStone_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/GameplayCues/GCN_SpeedBoostImpactStone.GCN_SpeedBoostImpactStone_C");
			return ret;
		}
	};


	// Class /GrindRail/GameplayCues/GCNL_GrindBoostSlow.GCNL_GrindBoostSlow_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x0 (0x9B0 - 0x9B0)
	class AGCNL_GrindBoostSlow_C : public AFortGameplayCueNotify_Loop	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/GameplayCues/GCNL_GrindBoostSlow.GCNL_GrindBoostSlow_C");
			return ret;
		}
	};


	// Class /SunRoseFlyingGameplay/GameplayCues/GC_Athena_SunRose_Wings_Dodge_Left.GC_Athena_SunRose_Wings_Dodge_Left_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGC_Athena_SunRose_Wings_Dodge_Left_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseFlyingGameplay/GameplayCues/GC_Athena_SunRose_Wings_Dodge_Left.GC_Athena_SunRose_Wings_Dodge_Left_C");
			return ret;
		}
	};


	// Class /SunRoseFlyingGameplay/GameplayCues/GC_Athena_SunRose_Wings_Bonk.GC_Athena_SunRose_Wings_Bonk_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGC_Athena_SunRose_Wings_Bonk_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseFlyingGameplay/GameplayCues/GC_Athena_SunRose_Wings_Bonk.GC_Athena_SunRose_Wings_Bonk_C");
			return ret;
		}
	};


	// Class /ScoutDrone/GameplayCues/GCNL_PickupItems.GCNL_PickupItems_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x20 (0x9D0 - 0x9B0)
	class AGCNL_PickupItems_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		UAudioComponent* LoopingBeamComp; // 0x9B8(0x8)
		USoundBase* BeamLoop; // 0x9C0(0x8)
		USoundBase* BeamLoopEnd; // 0x9C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/GameplayCues/GCNL_PickupItems.GCNL_PickupItems_C");
			return ret;
		}

		void SetAffiliationAudioParams(AActor* Target, TArray<UAudioComponent*>& AudioComponents); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnApplicationGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_PickupItems(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /ScoutDrone/GameplayCues/GCN_RadiusMark.GCN_RadiusMark_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_RadiusMark_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/GameplayCues/GCN_RadiusMark.GCN_RadiusMark_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /ScoutDrone/GameplayCues/GCN_PassiveMark.GCN_PassiveMark_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x10 (0x228 - 0x218)
	class UGCN_PassiveMark_C : public UFortGameplayCueNotify_Burst	
	{
	public:
		USoundBase* Firendly_Sound; // 0x218(0x8)
		USoundBase* Enemy_Sound; // 0x220(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/GameplayCues/GCN_PassiveMark.GCN_PassiveMark_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /ScoutDrone/GameplayCues/GCN_SpeedBoost.GCN_SpeedBoost_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_SpeedBoost_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/GameplayCues/GCN_SpeedBoost.GCN_SpeedBoost_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Transform.GCN_Athena_Sentry_Turret_Deployable_Transform_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x8 (0x220 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_Transform_C : public UFortGameplayCueNotify_Burst	
	{
	public:
		USoundBase* Sound_TransformLocal; // 0x218(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Transform.GCN_Athena_Sentry_Turret_Deployable_Transform_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_TargetedActorWarning.GCN_Athena_Sentry_Turret_Deployable_TargetedActorWarning_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_TargetedActorWarning_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_TargetedActorWarning.GCN_Athena_Sentry_Turret_Deployable_TargetedActorWarning_C");
			return ret;
		}
	};


	// Class /GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C
	// Inherited from AFortGameplayCueNotifyLoop_Grinding -> AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x80 (0xBC0 - 0xB40)
	class AGCNL_Grinding_C : public AFortGameplayCueNotifyLoop_Grinding	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		UFortSoundIndicatorComponent* FortSoundIndicator; // 0xB48(0x8)
		UFXSystemComponent* GrindRailFX; // 0xB50(0x8)
		UAudioComponent* GrindAudioLoop; // 0xB58(0x8)
		UAudioComponent* GrindAudioStart; // 0xB60(0x8)
		AFortPlayerPawn* PlayerPawn; // 0xB68(0x8)
		TEnumAsByte<ColorSelect> ColorEnum; // 0xB70(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xB71(0x7) UNKNOWN PROPERTY
		AFortGrindRail* GrindRail; // 0xB78(0x8)
		UAudioComponent* JumpOffAudio; // 0xB80(0x8)
		float NotRenderedDisableEffectsTime; // 0xB88(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB8C(0x4) UNKNOWN PROPERTY
		USoundBase* StartLoopSound; // 0xB90(0x8)
		USoundBase* LeanForwardSound; // 0xB98(0x8)
		USoundBase* JumpUpSound; // 0xBA0(0x8)
		UAudioComponent* LeanForwardAudio; // 0xBA8(0x8)
		bool bGrinding; // 0xBB0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xBB1(0x7) UNKNOWN PROPERTY
		UBP_FortPawnGrindingProvider_C* CachedGrindingProvider; // 0xBB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/GameplayCues/GCNL_Grinding.GCNL_Grinding_C");
			return ret;
		}

		void AllowAudio(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnJumpedOff(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GrindAudioState(bool Start); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFeetLanded(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGrindRailSprint(bool bNewIsSprinting); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGrindRailBoosterMode(EGrindRailBoosterMode PreviousBoosterMode); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGrindRailChanged(AFortGrindRail* OldRail, AFortGrindRail* NewRail); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnForwardChanged(bool bNewState); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_Grinding(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Death_Combat.GCN_Athena_Sentry_Turret_Deployable_Death_Combat_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_Death_Combat_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Death_Combat.GCN_Athena_Sentry_Turret_Deployable_Death_Combat_C");
			return ret;
		}
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Death_NonCombat.GCN_Athena_Sentry_Turret_Deployable_Death_NonCombat_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_Death_NonCombat_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Death_NonCombat.GCN_Athena_Sentry_Turret_Deployable_Death_NonCombat_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Death_SpawnPickup.GCN_Athena_Sentry_Turret_Deployable_Death_SpawnPickup_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_Death_SpawnPickup_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Death_SpawnPickup.GCN_Athena_Sentry_Turret_Deployable_Death_SpawnPickup_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /TowHookWeapon/GameplayCues/GCNL_TowHookWeapon_Skidding.GCNL_TowHookWeapon_Skidding_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x48 (0x9F8 - 0x9B0)
	class AGCNL_TowHookWeapon_Skidding_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		AActor* My_Target; // 0x9B8(0x8)
		AFortPawn* As_Fort_Pawn; // 0x9C0(0x8)
		UNiagaraComponent* Skidding_FX; // 0x9C8(0x8)
		UAudioComponent* Skidding_Audio; // 0x9D0(0x8)
		TEnumAsByte<EPhysicalSurface> Current_Surface_Type; // 0x9D8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9D9(0x7) UNKNOWN PROPERTY
		USoundBase* Current_Surface_Sound; // 0x9E0(0x8)
		UAbilityAsync_WaitGameplayEvent* On_Jump_Event_Async_Action; // 0x9E8(0x8)
		FTimerHandle WaterTimerHandle; // 0x9F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/TowHookWeapon/GameplayCues/GCNL_TowHookWeapon_Skidding.GCNL_TowHookWeapon_Skidding_C");
			return ret;
		}

		TEnumAsByte Get Current Surface(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FName Get Physical Surface Name(TEnumAsByte<EPhysicalSurface> Index); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Enable Default Player Dust FX(bool EnableDefaultDustFX); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Surface Sound Parameters(TEnumAsByte<EPhysicalSurface> Physical Surface Type, bool Is Jumping); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Current Surface Name(TEnumAsByte<EPhysicalSurface> Physical Surface Type, FName& Surface Name); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EventReceived_9B71A9114FEE05A38F2388903DED9B74(FGameplayEventData Payload); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGroundedStateChangedCustomEvent(bool bGrounded); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWaterStateChangeCustomEvent(bool bInWater); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStartNiagara(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UNiagaraComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNiagaraDeactivatedEvent(UActorComponent* Component); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnJump(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSurfaceChanged(AActor* SurfaceActor, TEnumAsByte<EPhysicalSurface> CurrentSurfaceType, TEnumAsByte<EPhysicalSurface> PrevSurfaceType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnJumpAsyncWait(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_TowHookWeapon_Skidding(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /ScoutDrone/GameplayCues/GCN_ScoutDrone_DoorBash_Impact.GCN_ScoutDrone_DoorBash_Impact_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_ScoutDrone_DoorBash_Impact_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/GameplayCues/GCN_ScoutDrone_DoorBash_Impact.GCN_ScoutDrone_DoorBash_Impact_C");
			return ret;
		}
	};


	// Class /Ascender/GameplayCues/GC_Ascender_LinkToDestroyed.GC_Ascender_LinkToDestroyed_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGC_Ascender_LinkToDestroyed_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Ascender/GameplayCues/GC_Ascender_LinkToDestroyed.GC_Ascender_LinkToDestroyed_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /ScoutDrone/GameplayCues/GCNL_DivingSpeedBoost.GCNL_DivingSpeedBoost_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x0 (0x9B0 - 0x9B0)
	class AGCNL_DivingSpeedBoost_C : public AFortGameplayCueNotify_Loop	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/GameplayCues/GCNL_DivingSpeedBoost.GCNL_DivingSpeedBoost_C");
			return ret;
		}
	};


	// Class /VehicleMods/GameplayCues/GCN_VehicleMod_Mortar_Applied.GCN_VehicleMod_Mortar_Applied_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_VehicleMod_Mortar_Applied_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleMods/GameplayCues/GCN_VehicleMod_Mortar_Applied.GCN_VehicleMod_Mortar_Applied_C");
			return ret;
		}

		void OnBurst(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UParticleSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SunRoseFlyingGameplay/GameplayCues/GC_Athena_SunRose_Wings_Removal.GC_Athena_SunRose_Wings_Removal_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGC_Athena_SunRose_Wings_Removal_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseFlyingGameplay/GameplayCues/GC_Athena_SunRose_Wings_Removal.GC_Athena_SunRose_Wings_Removal_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SunRoseFlyingGameplay/GameplayCues/GCNL_Athena_SunRose_Wings_EnergyDrain.GCNL_Athena_SunRose_Wings_EnergyDrain_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x18 (0x9C8 - 0x9B0)
	class AGCNL_Athena_SunRose_Wings_EnergyDrain_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		UFXSystemComponent* FX_EnergyDrain; // 0x9B8(0x8)
		AB_Athena_SunRose_Wings_C* AthenaSunroseWings; // 0x9C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseFlyingGameplay/GameplayCues/GCNL_Athena_SunRose_Wings_EnergyDrain.GCNL_Athena_SunRose_Wings_EnergyDrain_C");
			return ret;
		}

		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnergyChange(int32_t LocalCount, int32_t LocalRemaining); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_Athena_SunRose_Wings_EnergyDrain(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SunRoseFlyingGameplay/GameplayCues/GC_Athena_SunRose_Wings_Replenish.GC_Athena_SunRose_Wings_Replenish_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGC_Athena_SunRose_Wings_Replenish_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseFlyingGameplay/GameplayCues/GC_Athena_SunRose_Wings_Replenish.GC_Athena_SunRose_Wings_Replenish_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SunRoseFlyingGameplay/GameplayCues/GCN_Athena_SunRose_Wings_Crash_LandingTrail.GCN_Athena_SunRose_Wings_Crash_LandingTrail_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_SunRose_Wings_Crash_LandingTrail_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseFlyingGameplay/GameplayCues/GCN_Athena_SunRose_Wings_Crash_LandingTrail.GCN_Athena_SunRose_Wings_Crash_LandingTrail_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrindRail/GameplayCues/GCNL_GrindBoostFast.GCNL_GrindBoostFast_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x0 (0x9B0 - 0x9B0)
	class AGCNL_GrindBoostFast_C : public AFortGameplayCueNotify_Loop	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/GameplayCues/GCNL_GrindBoostFast.GCNL_GrindBoostFast_C");
			return ret;
		}
	};


	// Class /GrindRail/GameplayCues/GCNL_GrindSprinting.GCNL_GrindSprinting_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x18 (0x9C8 - 0x9B0)
	class AGCNL_GrindSprinting_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		UAudioComponent* BoostAudio; // 0x9B8(0x8)
		UAudioComponent* BoostEndAudio; // 0x9C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/GameplayCues/GCNL_GrindSprinting.GCNL_GrindSprinting_C");
			return ret;
		}

		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_GrindSprinting(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /ScoutDrone/GameplayCues/GCN_SpeedBoostImpactWood.GCN_SpeedBoostImpactWood_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_SpeedBoostImpactWood_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/GameplayCues/GCN_SpeedBoostImpactWood.GCN_SpeedBoostImpactWood_C");
			return ret;
		}
	};


	// Class /GrindRail/GameplayCues/GCN_Burst_PlayerImpact.GCN_Burst_PlayerImpact_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Burst_PlayerImpact_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrindRail/GameplayCues/GCN_Burst_PlayerImpact.GCN_Burst_PlayerImpact_C");
			return ret;
		}
	};


	// Class /ScoutDrone/GameplayCues/GCN_SpeedBoostImpactMetal.GCN_SpeedBoostImpactMetal_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_SpeedBoostImpactMetal_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/GameplayCues/GCN_SpeedBoostImpactMetal.GCN_SpeedBoostImpactMetal_C");
			return ret;
		}
	};


	// Class /ScoutDrone/GameplayCues/GCN_SpeedBoostImpactDefault.GCN_SpeedBoostImpactDefault_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_SpeedBoostImpactDefault_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/GameplayCues/GCN_SpeedBoostImpactDefault.GCN_SpeedBoostImpactDefault_C");
			return ret;
		}
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Damaged.GCN_Athena_Sentry_Turret_Deployable_Damaged_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_Damaged_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Damaged.GCN_Athena_Sentry_Turret_Deployable_Damaged_C");
			return ret;
		}
	};


	// Class /DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Fire.GCN_Athena_Sentry_Turret_Deployable_Fire_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0xB8 (0x2D0 - 0x218)
	class UGCN_Athena_Sentry_Turret_Deployable_Fire_C : public UFortGameplayCueNotify_Burst	
	{
	public:
		UFXSystemAsset* FX_MuzzleFlash; // 0x218(0x8)
		TMap<UPhysicalMaterial*, UFXSystemAsset*> MAP_PhysMaterial_ImpactFX; // 0x220(0x50)
		TMap<UPhysicalMaterial*, USoundBase*> Map_PhysMaterial_ImpactSounds; // 0x270(0x50)
		UFXSystemAsset* FX_MuzzleFlash_NS; // 0x2C0(0x8)
		USoundBase* FireSoundCue; // 0x2C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DeployableTurretGameplay/GameplayCues/GCN_Athena_Sentry_Turret_Deployable_Fire.GCN_Athena_Sentry_Turret_Deployable_Fire_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SunRoseFlyingGameplay/GameplayCues/GCNL_Athena_SunRose_Wings_SpeedThreshold.GCNL_Athena_SunRose_Wings_SpeedThreshold_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x38 (0x9E8 - 0x9B0)
	class AGCNL_Athena_SunRose_Wings_SpeedThreshold_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		FTimerHandle Timer_SFXParamsCheck; // 0x9B8(0x8)
		AB_Athena_SunRose_Wings_C* AthenaSunroseWings; // 0x9C0(0x8)
		TArray<UAudioComponent*> AudioComponents; // 0x9C8(0x10)
		UFXSystemComponent* ParticleComponent; // 0x9D8(0x8)
		AFortPawn* FortPawn; // 0x9E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseFlyingGameplay/GameplayCues/GCNL_Athena_SunRose_Wings_SpeedThreshold.GCNL_Athena_SunRose_Wings_SpeedThreshold_C");
			return ret;
		}

		void SetFXFloatParameter(FName Name, double float, bool SendToVFX); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSpeed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnergyChange(int32_t LocalCount, int32_t LocalRemaining); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_Athena_SunRose_Wings_SpeedThreshold(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SunRoseFlyingGameplay/GameplayCues/GC_Athena_SunRose_Wings_Boost_Once.GC_Athena_SunRose_Wings_Boost_Once_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGC_Athena_SunRose_Wings_Boost_Once_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseFlyingGameplay/GameplayCues/GC_Athena_SunRose_Wings_Boost_Once.GC_Athena_SunRose_Wings_Boost_Once_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SunRoseFlyingGameplay/GameplayCues/GC_Athena_SunRose_Wings_Dodge_Right.GC_Athena_SunRose_Wings_Dodge_Right_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGC_Athena_SunRose_Wings_Dodge_Right_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseFlyingGameplay/GameplayCues/GC_Athena_SunRose_Wings_Dodge_Right.GC_Athena_SunRose_Wings_Dodge_Right_C");
			return ret;
		}
	};


	// Class /ScoutDrone/GameplayCues/GCN_DropItems.GCN_DropItems_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_DropItems_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/GameplayCues/GCN_DropItems.GCN_DropItems_C");
			return ret;
		}
	};


	// Class /DryBox/GameplayCues/GCNL_NyxGlass_InSwingingMovementMode.GCNL_NyxGlass_InSwingingMovementMode_C
	// Inherited from AFortGameplayCueNotifyLoop_Swinging -> AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x28 (0xAA0 - 0xA78)
	class AGCNL_NyxGlass_InSwingingMovementMode_C : public AFortGameplayCueNotifyLoop_Swinging	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA78(0x8)
		UFortCollisionAudioComponent* FortCollisionAudio; // 0xA80(0x8)
		FTimerHandle SetFloatParamTimerHandle; // 0xA88(0x8)
		AB_Weapon_NyxGlass_C* NyxGlassReference; // 0xA90(0x8)
		double SpeedMultiplier; // 0xA98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DryBox/GameplayCues/GCNL_NyxGlass_InSwingingMovementMode.GCNL_NyxGlass_InSwingingMovementMode_C");
			return ret;
		}

		void AudioUninit(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AudioInit(AActor* GC Target); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTargetPawnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNyxGlassStateChanged(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSpeedMultiplier(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_NyxGlass_InSwingingMovementMode(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrappleGloves/GameplayCues/GCN_GrappleGloves_Fire.GCN_GrappleGloves_Fire_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x0 (0x550 - 0x550)
	class AGCN_GrappleGloves_Fire_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleGloves/GameplayCues/GCN_GrappleGloves_Fire.GCN_GrappleGloves_Fire_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrappleParent/GameplayCues/GCNL_GrappleParent_Skidding.GCNL_GrappleParent_Skidding_C
	// Inherited from AGameplayCueNotify_Looping -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x8 (0xE98 - 0xE90)
	class AGCNL_GrappleParent_Skidding_C : public AGameplayCueNotify_Looping	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xE90(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GameplayCues/GCNL_GrappleParent_Skidding.GCNL_GrappleParent_Skidding_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_GrappleParent_Skidding(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrappleParent/GameplayCues/GCNL_GrappleParent_Speedlines.GCNL_GrappleParent_Speedlines_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x0 (0x9B0 - 0x9B0)
	class AGCNL_GrappleParent_Speedlines_C : public AFortGameplayCueNotify_Loop	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GameplayCues/GCNL_GrappleParent_Speedlines.GCNL_GrappleParent_Speedlines_C");
			return ret;
		}
	};


	// Class /DryBox/GameplayCues/GCN_NyxGlass_AttackHookImpact.GCN_NyxGlass_AttackHookImpact_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_NyxGlass_AttackHookImpact_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DryBox/GameplayCues/GCN_NyxGlass_AttackHookImpact.GCN_NyxGlass_AttackHookImpact_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DryBox/GameplayCues/GCNL_NyxGlass_Swinging.GCNL_NyxGlass_Swinging_C
	// Inherited from AFortGameplayCueNotifyAthena_FallDamageImmunity -> AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x40 (0xA38 - 0x9F8)
	class AGCNL_NyxGlass_Swinging_C : public AFortGameplayCueNotifyAthena_FallDamageImmunity	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9F8(0x8)
		UPostProcessComponent* PostProcess; // 0xA00(0x8)
		float Timeline_Lerp_EDB789FB43B20593984F87A501313C3F; // 0xA08(0x4)
		TEnumAsByte<ETimelineDirection> Timeline__Direction_EDB789FB43B20593984F87A501313C3F; // 0xA0C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA0D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0xA10(0x8)
		UAudioComponent* InUseLoopAudio; // 0xA18(0x8)
		AActor* Target; // 0xA20(0x8)
		AFortPlayerPawnAthena* As_Fort_Player_Pawn_Athena; // 0xA28(0x8)
		FTimerHandle Timer; // 0xA30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DryBox/GameplayCues/GCNL_NyxGlass_Swinging.GCNL_NyxGlass_Swinging_C");
			return ret;
		}

		void Timeline__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CE_Check(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_NyxGlass_Swinging(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DryBox/GameplayCues/GCNL_NyxGlass_Attacking.GCNL_NyxGlass_Attacking_C
	// Inherited from AFortGameplayCueNotifyAthena_FallDamageImmunity -> AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x38 (0xA30 - 0x9F8)
	class AGCNL_NyxGlass_Attacking_C : public AFortGameplayCueNotifyAthena_FallDamageImmunity	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9F8(0x8)
		UPostProcessComponent* PostProcess; // 0xA00(0x8)
		float Timeline_Lerp_113849F94C9E25537F9F7B81F2E3DA5A; // 0xA08(0x4)
		TEnumAsByte<ETimelineDirection> Timeline__Direction_113849F94C9E25537F9F7B81F2E3DA5A; // 0xA0C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA0D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0xA10(0x8)
		AActor* Target; // 0xA18(0x8)
		AFortPlayerPawnAthena* As_Fort_Player_Pawn_Athena; // 0xA20(0x8)
		FTimerHandle Timer; // 0xA28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DryBox/GameplayCues/GCNL_NyxGlass_Attacking.GCNL_NyxGlass_Attacking_C");
			return ret;
		}

		void Timeline__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnApplicationGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CE_Check(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_NyxGlass_Attacking(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DryBox/GameplayCues/GCNL_NyxGlass_Hovering.GCNL_NyxGlass_Hovering_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x0 (0x9B0 - 0x9B0)
	class AGCNL_NyxGlass_Hovering_C : public AFortGameplayCueNotify_Loop	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DryBox/GameplayCues/GCNL_NyxGlass_Hovering.GCNL_NyxGlass_Hovering_C");
			return ret;
		}
	};


	// Class /MurkyVoleGameplay/GameplayCues/GCN_Athena_MurkyVole_Turret_TargetAcquired.GCN_Athena_MurkyVole_Turret_TargetAcquired_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_MurkyVole_Turret_TargetAcquired_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/MurkyVoleGameplay/GameplayCues/GCN_Athena_MurkyVole_Turret_TargetAcquired.GCN_Athena_MurkyVole_Turret_TargetAcquired_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /MurkyVoleGameplay/GameplayCues/GCNL_Athena_MurkyVole_TargetedActorWarningLoop.GCNL_Athena_MurkyVole_TargetedActorWarningLoop_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x8 (0x9B8 - 0x9B0)
	class AGCNL_Athena_MurkyVole_TargetedActorWarningLoop_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/MurkyVoleGameplay/GameplayCues/GCNL_Athena_MurkyVole_TargetedActorWarningLoop.GCNL_Athena_MurkyVole_TargetedActorWarningLoop_C");
			return ret;
		}

		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnApplicationGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_Athena_MurkyVole_TargetedActorWarningLoop(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SunRoseZeusGameplay/GameplayCues/GC_Athena_SunRose_Zeus_Projectile_Light_HitWorld.GC_Athena_SunRose_Zeus_Projectile_Light_HitWorld_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGC_Athena_SunRose_Zeus_Projectile_Light_HitWorld_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseZeusGameplay/GameplayCues/GC_Athena_SunRose_Zeus_Projectile_Light_HitWorld.GC_Athena_SunRose_Zeus_Projectile_Light_HitWorld_C");
			return ret;
		}
	};


	// Class /MurkyVoleGameplay/GameplayCues/GCN_Athena_MurkyVole_Turret_WindDown.GCN_Athena_MurkyVole_Turret_WindDown_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_MurkyVole_Turret_WindDown_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/MurkyVoleGameplay/GameplayCues/GCN_Athena_MurkyVole_Turret_WindDown.GCN_Athena_MurkyVole_Turret_WindDown_C");
			return ret;
		}
	};


	// Class /MurkyVoleGameplay/GameplayCues/GCN_Athena_MurkyVole_Turret_Windup.GCN_Athena_MurkyVole_Turret_Windup_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_Athena_MurkyVole_Turret_Windup_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/MurkyVoleGameplay/GameplayCues/GCN_Athena_MurkyVole_Turret_Windup.GCN_Athena_MurkyVole_Turret_Windup_C");
			return ret;
		}
	};


	// Class /MurkyVoleGameplay/GameplayCues/GCNL_Athena_MurkyVole_Turret_EMP.GCNL_Athena_MurkyVole_Turret_EMP_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x20 (0x9D0 - 0x9B0)
	class AGCNL_Athena_MurkyVole_Turret_EMP_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		USkeletalMeshComponent* SkeletalMesh_BackPack; // 0x9B8(0x8)
		AFortPlayerPawn* TargetPawn; // 0x9C0(0x8)
		UNiagaraComponent* Niagara_System; // 0x9C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/MurkyVoleGameplay/GameplayCues/GCNL_Athena_MurkyVole_Turret_EMP.GCNL_Athena_MurkyVole_Turret_EMP_C");
			return ret;
		}

		void CachePawnAndBackpack(UObject* TargetActor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TryGetBackpackMesh(USkeletalMeshComponent* BackpackMesh); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnApplicationGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_Athena_MurkyVole_Turret_EMP(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /EMPGameplay/GameplayCues/GC_Athena_Grenade_EMP_Explosion.GC_Athena_Grenade_EMP_Explosion_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x28 (0x240 - 0x218)
	class UGC_Athena_Grenade_EMP_Explosion_C : public UFortGameplayCueNotify_Burst	
	{
	public:
		FScalableFloat Row_Radius; // 0x218(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/EMPGameplay/GameplayCues/GC_Athena_Grenade_EMP_Explosion.GC_Athena_Grenade_EMP_Explosion_C");
			return ret;
		}

		void PlaySoundIndicator(FVector Location, AActor* Instigator); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SunRoseZeusGameplay/GameplayCues/GCNL_Athena_SunRose_Zeus_Lightning_Shock.GCNL_Athena_SunRose_Zeus_Lightning_Shock_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x20 (0x9D0 - 0x9B0)
	class AGCNL_Athena_SunRose_Zeus_Lightning_Shock_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		UMaterialInterface* Material; // 0x9B8(0x8)
		FGuid Material_Override_Handdle; // 0x9C0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseZeusGameplay/GameplayCues/GCNL_Athena_SunRose_Zeus_Lightning_Shock.GCNL_Athena_SunRose_Zeus_Lightning_Shock_C");
			return ret;
		}

		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_Athena_SunRose_Zeus_Lightning_Shock(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DryBox/GameplayCues/GCN_NyxGlass_AttackSlash.GCN_NyxGlass_AttackSlash_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGCN_NyxGlass_AttackSlash_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DryBox/GameplayCues/GCN_NyxGlass_AttackSlash.GCN_NyxGlass_AttackSlash_C");
			return ret;
		}

		void OnBurstNiagara(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UNiagaraComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /EMPGameplay/GameplayCues/GCNL_Athena_Grenade_EMP_InAirLoop.GCNL_Athena_Grenade_EMP_InAirLoop_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x18 (0x9C8 - 0x9B0)
	class AGCNL_Athena_Grenade_EMP_InAirLoop_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		UFortSoundIndicatorComponent* FortSoundIndicator; // 0x9B8(0x8)
		UFXSystemComponent* EMP_TrailFX; // 0x9C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/EMPGameplay/GameplayCues/GCNL_Athena_Grenade_EMP_InAirLoop.GCNL_Athena_Grenade_EMP_InAirLoop_C");
			return ret;
		}

		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_Athena_Grenade_EMP_InAirLoop(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SunRoseZeusGameplay/GameplayCues/GC_Athena_SunRose_Zeus_Projectile_Light_HitWater.GC_Athena_SunRose_Zeus_Projectile_Light_HitWater_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGC_Athena_SunRose_Zeus_Projectile_Light_HitWater_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseZeusGameplay/GameplayCues/GC_Athena_SunRose_Zeus_Projectile_Light_HitWater.GC_Athena_SunRose_Zeus_Projectile_Light_HitWater_C");
			return ret;
		}
	};


	// Class /SunRoseZeusGameplay/GameplayCues/GC_Athena_SunRose_Zeus_Projectile_Light_Explosion.GC_Athena_SunRose_Zeus_Projectile_Light_Explosion_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x50 (0x268 - 0x218)
	class UGC_Athena_SunRose_Zeus_Projectile_Light_Explosion_C : public UFortGameplayCueNotify_Burst	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x218(0x8)
		FScalableFloat Row_AVIndicatorDistance; // 0x220(0x28)
		FVector StartOffset; // 0x248(0x18)
		UFXSystemComponent* SpawnedFX; // 0x260(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SunRoseZeusGameplay/GameplayCues/GC_Athena_SunRose_Zeus_Projectile_Light_Explosion.GC_Athena_SunRose_Zeus_Projectile_Light_Explosion_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GC_Athena_SunRose_Zeus_Projectile_Light_Explosion(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrappleGloves/GameplayCues/BP_NS_Camera_Lens_GrappleGloves.BP_NS_Camera_Lens_GrappleGloves_C
	// Inherited from ABP_NS_Camera_Lens_Sliding_Speedline_downhill_C -> ABP_NS_ExampleCameraEffect_C -> ANiagaraLensEffectBase -> ANiagaraActor -> AActor -> UObject
	// Size: 0x0 (0x330 - 0x330)
	class ABP_NS_Camera_Lens_GrappleGloves_C : public ABP_NS_Camera_Lens_Sliding_Speedline_downhill_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleGloves/GameplayCues/BP_NS_Camera_Lens_GrappleGloves.BP_NS_Camera_Lens_GrappleGloves_C");
			return ret;
		}
	};


	// Class /GrappleGloves/GameplayCues/GCNL_GrappleGloves_IsWarmEffect.GCNL_GrappleGloves_IsWarmEffect_C
	// Inherited from AFortGameplayCueNotifyAthena_FallDamageImmunity -> AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x10 (0xA08 - 0x9F8)
	class AGCNL_GrappleGloves_IsWarmEffect_C : public AFortGameplayCueNotifyAthena_FallDamageImmunity	
	{
	public:
		UAudioComponent* InUseLoopAudio; // 0x9F8(0x8)
		AActor* Target; // 0xA00(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleGloves/GameplayCues/GCNL_GrappleGloves_IsWarmEffect.GCNL_GrappleGloves_IsWarmEffect_C");
			return ret;
		}
	};


	// Class /GrappleGloves/GameplayCues/GCNL_GrappleGloves_Swinging.GCNL_GrappleGloves_Swinging_C
	// Inherited from AFortGameplayCueNotifyLoop_Swinging -> AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x28 (0xAA0 - 0xA78)
	class AGCNL_GrappleGloves_Swinging_C : public AFortGameplayCueNotifyLoop_Swinging	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA78(0x8)
		UFortCollisionAudioComponent* FortCollisionAudio; // 0xA80(0x8)
		FTimerHandle SetFloatParamTimerHandle; // 0xA88(0x8)
		AB_Ranged_Weapon_GrappleGloves_C* GrappleGlovesReference; // 0xA90(0x8)
		double SpeedMultiplier; // 0xA98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleGloves/GameplayCues/GCNL_GrappleGloves_Swinging.GCNL_GrappleGloves_Swinging_C");
			return ret;
		}

		void AudioUninit(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AudioInit(AActor* GC Target); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTargetPawnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGrappleGlovesStateChanged(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSpeedMultiplier(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_GrappleGloves_Swinging(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrappleGloves/GameplayCues/GCN_GrappleGloves_HitPoint.GCN_GrappleGloves_HitPoint_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x0 (0x550 - 0x550)
	class AGCN_GrappleGloves_HitPoint_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleGloves/GameplayCues/GCN_GrappleGloves_HitPoint.GCN_GrappleGloves_HitPoint_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrappleGloves/GameplayCues/GCN_GrappleGloves_ChargeUp.GCN_GrappleGloves_ChargeUp_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x0 (0x550 - 0x550)
	class AGCN_GrappleGloves_ChargeUp_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleGloves/GameplayCues/GCN_GrappleGloves_ChargeUp.GCN_GrappleGloves_ChargeUp_C");
			return ret;
		}

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrappleGloves/GameplayCues/GCN_GrappleGloves_StartedCooldown.GCN_GrappleGloves_StartedCooldown_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x8 (0x558 - 0x550)
	class AGCN_GrappleGloves_StartedCooldown_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleGloves/GameplayCues/GCN_GrappleGloves_StartedCooldown.GCN_GrappleGloves_StartedCooldown_C");
			return ret;
		}

		void OnBurstNiagara(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UNiagaraComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NewFunction(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NewFunction(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCN_GrappleGloves_StartedCooldown(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrappleGloves/GameplayCues/GCNL_GrappleGloves_IsHotEffect.GCNL_GrappleGloves_IsHotEffect_C
	// Inherited from AFortGameplayCueNotifyAthena_FallDamageImmunity -> AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x50 (0xA48 - 0x9F8)
	class AGCNL_GrappleGloves_IsHotEffect_C : public AFortGameplayCueNotifyAthena_FallDamageImmunity	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9F8(0x8)
		UPostProcessComponent* PostProcess; // 0xA00(0x8)
		UBoxComponent* Box; // 0xA08(0x8)
		float Timeline_Lerp_E2F0C6B64FD7E533795D928E6AFB4DB9; // 0xA10(0x4)
		TEnumAsByte<ETimelineDirection> Timeline__Direction_E2F0C6B64FD7E533795D928E6AFB4DB9; // 0xA14(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA15(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0xA18(0x8)
		UAudioComponent* InUseLoopAudio; // 0xA20(0x8)
		AFortPlayerPawnAthena* As_Fort_Player_Pawn_Athena; // 0xA28(0x8)
		FTimerHandle Timer; // 0xA30(0x8)
		TScriptInterface<Class> CameraLensEffect; // 0xA38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleGloves/GameplayCues/GCNL_GrappleGloves_IsHotEffect.GCNL_GrappleGloves_IsHotEffect_C");
			return ret;
		}

		void Timeline__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CE_Check(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_GrappleGloves_IsHotEffect(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x20 (0x9D0 - 0x9B0)
	class AGCNL_Riding_Sprint_CameraShake_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		AFortPlayerController* FortPlayerController; // 0x9B8(0x8)
		UCameraShakeBase* FOVFlare; // 0x9C0(0x8)
		UCameraShakeBase* ShakeNoise; // 0x9C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C");
			return ret;
		}

		bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
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


	// Class /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x18 (0x9C8 - 0x9B0)
	class AGCNL_RidingSprint_SpeedLines_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		USoundBase* SpeedLinesAudio; // 0x9B8(0x8)
		UAudioComponent* SpeedlinesAudioComp; // 0x9C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C");
			return ret;
		}

		void OnApplicationGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_RidingSprint_SpeedLines(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x101 (0xAB1 - 0x9B0)
	class AGCNL_PlayerIsRiding_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		USoundBase* RidingSoundLoop; // 0x9B8(0x8)
		UAudioComponent* RidingSoundLoopComp; // 0x9C0(0x8)
		FTimerHandle VelocityTimerHandle; // 0x9C8(0x8)
		AActor* Player; // 0x9D0(0x8)
		double Speed; // 0x9D8(0x8)
		TEnumAsByte<EFortTeamAffiliation> TeamAffiliation; // 0x9E0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9E1(0x7) UNKNOWN PROPERTY
		FVector Previous; // 0x9E8(0x18)
		USoundBase* Enemy_RidingSoundLoop; // 0xA00(0x8)
		AFortPlayerPawnAthena* As_Fort_Player_Pawn_Athena; // 0xA08(0x8)
		double JumpParamTarget; // 0xA10(0x8)
		double JumpValue; // 0xA18(0x8)
		bool bIsFalling; // 0xA20(0x1)
		bool bCanResetJump; // 0xA21(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xA22(0x6) UNKNOWN PROPERTY
		UPawnMovementComponent* CreatureMovementComponent; // 0xA28(0x8)
		FTimerHandle JumpResetTimerHandle; // 0xA30(0x8)
		double JumpPitchInterpSpeed; // 0xA38(0x8)
		FCurveTableRowHandle RidingCurveTable; // 0xA40(0x10)
		double BoarSprintSpeed; // 0xA50(0x8)
		double CurrentVelocity; // 0xA58(0x8)
		double MaxNormalRunSpeed; // 0xA60(0x8)
		bool bSprinting; // 0xA68(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xA69(0x7) UNKNOWN PROPERTY
		double MaxSpeed; // 0xA70(0x8)
		double MaxSpeedClamped; // 0xA78(0x8)
		USoundBase* BurstOnCue; // 0xA80(0x8)
		FGameplayTagContainer BlockSitAudioTags; // 0xA88(0x20)
		USoundBase* BurstOffCue; // 0xAA8(0x8)
		bool HasAudio; // 0xAB0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C");
			return ret;
		}

		void CalculateVelocityParam(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayerRidingGCNLStarted(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayerRidingDCNLEnded(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnJumpApex(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetUpRidableAudioEvents(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartLoopingAudio(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_PlayerIsRiding(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
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


	// Class /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x30 (0x580 - 0x550)
	class AGCN_BurtCharging_Player_Latent_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x8)
		APlayerController* GCPlayerController; // 0x558(0x8)
		AFortPlayerPawn* FortPlayerPawn; // 0x560(0x8)
		USoundBase* BoostSound; // 0x568(0x8)
		UAudioComponent* BoostAudioComponent; // 0x570(0x8)
		USoundBase* BoostEndSound; // 0x578(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C");
			return ret;
		}

		bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteBoostLogic(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BoostEndEvent(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCN_BurtCharging_Player_Latent(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		void AVIndicatorLoop(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovalGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStartGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
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


	// Class /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x18 (0x9C8 - 0x9B0)
	class AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		FGameplayTag TacticalSprintTag; // 0x9B8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x9BC(0x4) UNKNOWN PROPERTY
		UFXSystemComponent* MainNS; // 0x9C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C");
			return ret;
		}

		void Added_7482F31A49360978B87F339D76FC2BB7(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Removed_AD34CCD44592FD2F05DB47BDF9413ACC(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnApplicationGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
