#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayCueNotifies
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x19 (0x9C9 - 0x9B0)
	class AGCNL_EdgeOfStorm_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		UAudioComponent Audio; // 0x9B8(0x8)
		AFortPlayerPawn StormPawn; // 0x9C0(0x8)
		bool bBoundAudioPercent; // 0x9C8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C");
			return ret;
		}

		bool OnRemove(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D81FF8B00
		bool OnExecute(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D81FF8C00
		bool OnActive(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D81FF8D00
		void Activated(FVector EdgeOfStorm); // Flags: BlueprintCallable|BlueprintEvent 0x15D81FF9000
		void Deactivated(); // Flags: BlueprintCallable|BlueprintEvent 0x15D81FF8F00
		void ExecuteUbergraph_GCNL_EdgeOfStorm(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D81FF8E00
	};


	// Class /Game/GameplayCueNotifies/Shields/GC_Shield_FullyCharged.GC_Shield_FullyCharged_C
	// Inherited from UFortGameplayCueNotify_Burst -> UGameplayCueNotify_Static -> UObject
	// Size: 0x0 (0x218 - 0x218)
	class UGC_Shield_FullyCharged_C : public UFortGameplayCueNotify_Burst	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayCueNotifies/Shields/GC_Shield_FullyCharged.GC_Shield_FullyCharged_C");
			return ret;
		}

		void OnBurst(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D6A0C3D00
	};


	// Class /Game/GameplayCueNotifies/Death/EliminationBotVFXInterface.EliminationBotVFXInterface_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEliminationBotVFXInterface_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayCueNotifies/Death/EliminationBotVFXInterface.EliminationBotVFXInterface_C");
			return ret;
		}

		void EndVFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D67097000
		void TriggerVFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D67096F00
	};


	// Class /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x1C8 (0x718 - 0x550)
	class AGCN_RezIn_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x8)
		float TFX_ResOutCharacterMesh_LightIntensity_81C5527F43A6972D94623590BA582E8C; // 0x558(0x4)
		float TFX_ResOutCharacterMesh_ZHeightParam_81C5527F43A6972D94623590BA582E8C; // 0x55C(0x4)
		float TFX_ResOutCharacterMesh_TransitionParam_81C5527F43A6972D94623590BA582E8C; // 0x560(0x4)
		TEnumAsByte TFX_ResOutCharacterMesh__Direction_81C5527F43A6972D94623590BA582E8C; // 0x564(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x565(0x3) UNKNOWN PROPERTY
		UTimelineComponent TFX_ResOutCharacterMesh; // 0x568(0x8)
		float TFX_GlowCharacterMesh_EmissiveWarp_9EA15145493A8F1A5915938D5529A028; // 0x570(0x4)
		TEnumAsByte TFX_GlowCharacterMesh__Direction_9EA15145493A8F1A5915938D5529A028; // 0x574(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x575(0x3) UNKNOWN PROPERTY
		UTimelineComponent TFX_GlowCharacterMesh; // 0x578(0x8)
		bool DEBUG_ANIMATION; // 0x580(0x1)
		bool SpawnDrone; // 0x581(0x1)
		unsigned char UnknownData10_6[0x6]; // 0x582(0x6) UNKNOWN PROPERTY
		UClass Teleportation_Drone; // 0x588(0x8)
		double Teleport_Bot_AnimPlayRate; // 0x590(0x8)
		double Teleport_Bot_Lifespan; // 0x598(0x8)
		UPointLightComponent Teleportation_Point_Light; // 0x5A0(0x8)
		FVector Teleportation_Light_Offset; // 0x5A8(0x18)
		FLinearColor Teleportation_Light_Color; // 0x5C0(0x10)
		TArray DissolveMIDs; // 0x5D0(0x10)
		UMaterialInterface Mat_Chracter_Dissolve; // 0x5E0(0x8)
		APlayerPawn_Athena_C Pawn; // 0x5E8(0x8)
		TSet Dissolve; // 0x5F0(0x50)
		FName Socket_Mesh_Top; // 0x640(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x644(0x4) UNKNOWN PROPERTY
		double Max_Light_Intensity; // 0x648(0x8)
		FName Socket_Mesh_Bottom; // 0x650(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x654(0x4) UNKNOWN PROPERTY
		TArray Meshes_to_Dissolve; // 0x658(0x10)
		ABP_TeleportationDrone_C Drone; // 0x668(0x8)
		bool DEBUG_CHILDCOMPONENTS; // 0x670(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x671(0x7) UNKNOWN PROPERTY
		TArray Particle_Components; // 0x678(0x10)
		UNiagaraComponent Spawned_Teleport_VFX; // 0x688(0x8)
		UNiagaraSystem Teleport_In_Visual_Effect; // 0x690(0x8)
		FName Teleport_In_VFX_Attach_Point_Name; // 0x698(0x4)
		int32_t Cur_Dissolve_Setup_Attempt; // 0x69C(0x4)
		int32_t AmountOfTimesToAttemptRestoreMats; // 0x6A0(0x4)
		bool Spawn_VFX_Attached; // 0x6A4(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x6A5(0x3) UNKNOWN PROPERTY
		double Dissolve_Timeline_Playrate; // 0x6A8(0x8)
		double Glow_Timeline_Playrate; // 0x6B0(0x8)
		UNiagaraSystem Drone_Visual_Effect; // 0x6B8(0x8)
		bool DEBUG_TESTJANUSFX; // 0x6C0(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x6C1(0x3) UNKNOWN PROPERTY
		FName Drone_VFX_Attach_Point; // 0x6C4(0x4)
		FGuid Material_Override_ID; // 0x6C8(0x10)
		FFortPawnMaterialOverrideCopiedParameters Copied_Parameters; // 0x6D8(0x30)
		FDelegateHandleController Delegate_Handle_Controller; // 0x708(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C");
			return ret;
		}

		void Spawn Drone VFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D84D40200
		void Set Timelines' Playrates(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D84D40300
		void Spawn Teleport In VFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D84D40100
		void Restore Character Materials(bool& Fully Completed); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D84D40600
		void Clean-Up Teleportation Light(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D84D40C00
		void Spawn Teleportation Light(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D84D44100
		void Spawn Teleportation Drone(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D84D44200
		void Stop Looping Audio(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D84D44000
		void TFX_GlowCharacterMesh__FinishedFunc(); // Flags: BlueprintEvent 0x15D84D43F00
		void TFX_GlowCharacterMesh__UpdateFunc(); // Flags: BlueprintEvent 0x15D84D43E00
		void TFX_ResOutCharacterMesh__FinishedFunc(); // Flags: BlueprintEvent 0x15D84D43D00
		void TFX_ResOutCharacterMesh__UpdateFunc(); // Flags: BlueprintEvent 0x15D84D43C00
		void OnBurstGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const 0x15D84D40900
		void Pre-Sequence Change(); // Flags: BlueprintCallable|BlueprintEvent 0x15D84D40700
		void Set Additional Niagara Parameters on Spawned FX(UNiagaraComponent Spawned Teleport In FX); // Flags: BlueprintCallable|BlueprintEvent 0x15D84D40400
		void EndVFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D84D40B00
		void Set Additional Niagara Parameter on Drone FX(UNiagaraComponent Drone FX); // Flags: BlueprintCallable|BlueprintEvent 0x15D84D40500
		void OnCosmeticPart(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: BlueprintCallable|BlueprintEvent 0x15D84D40800
		void TriggerVFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D84D43B00
		void ExecuteUbergraph_GCN_RezIn(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D84D40A00
	};


	// Class /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x1F0 (0x740 - 0x550)
	class AGCN_RezOut_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x8)
		float TFX_ResOutCharacterMesh_LightIntensity_E9C2D3554642468472CCCFA609A39FBC; // 0x558(0x4)
		float TFX_ResOutCharacterMesh_ZHeightParam_E9C2D3554642468472CCCFA609A39FBC; // 0x55C(0x4)
		float TFX_ResOutCharacterMesh_TransitionParam_E9C2D3554642468472CCCFA609A39FBC; // 0x560(0x4)
		TEnumAsByte TFX_ResOutCharacterMesh__Direction_E9C2D3554642468472CCCFA609A39FBC; // 0x564(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x565(0x3) UNKNOWN PROPERTY
		UTimelineComponent TFX_ResOutCharacterMesh; // 0x568(0x8)
		float TFX_GlowCharacterMesh_EmissiveWarp_39A37BC9407CF090A09ABDA5A488F776; // 0x570(0x4)
		TEnumAsByte TFX_GlowCharacterMesh__Direction_39A37BC9407CF090A09ABDA5A488F776; // 0x574(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x575(0x3) UNKNOWN PROPERTY
		UTimelineComponent TFX_GlowCharacterMesh; // 0x578(0x8)
		bool DEBUG_ANIMATION; // 0x580(0x1)
		bool SpawnDrone; // 0x581(0x1)
		unsigned char UnknownData12_6[0x6]; // 0x582(0x6) UNKNOWN PROPERTY
		UClass Teleportation_Drone; // 0x588(0x8)
		double Teleport_Bot_AnimPlayRate; // 0x590(0x8)
		double Teleport_Bot_Lifespan; // 0x598(0x8)
		UPointLightComponent Teleportation_Point_Light; // 0x5A0(0x8)
		FVector Teleportation_Light_Offset; // 0x5A8(0x18)
		FLinearColor Teleportation_Light_Color; // 0x5C0(0x10)
		TArray DissolveMIDs; // 0x5D0(0x10)
		UMaterialInterface Mat_Chracter_Dissolve; // 0x5E0(0x8)
		APlayerPawn_Athena_C Pawn; // 0x5E8(0x8)
		TSet Dissolve; // 0x5F0(0x50)
		FName Socket_Mesh_Top; // 0x640(0x4)
		unsigned char UnknownData13_6[0x4]; // 0x644(0x4) UNKNOWN PROPERTY
		double Max_Light_Intensity; // 0x648(0x8)
		FName Socket_Mesh_Bottom; // 0x650(0x4)
		unsigned char UnknownData14_6[0x4]; // 0x654(0x4) UNKNOWN PROPERTY
		TArray Meshes_to_Dissolve; // 0x658(0x10)
		ABP_TeleportationDrone_C Drone; // 0x668(0x8)
		bool DEBUG_CHILDCOMPONENTS; // 0x670(0x1)
		unsigned char UnknownData15_6[0x7]; // 0x671(0x7) UNKNOWN PROPERTY
		TArray Particle_Components; // 0x678(0x10)
		UNiagaraComponent Spawned_Death_VFX; // 0x688(0x8)
		UNiagaraSystem Dissolve_Visual_Effect; // 0x690(0x8)
		FName Dissolve_VFX_Spawn_Point_Name; // 0x698(0x4)
		unsigned char UnknownData16_6[0x4]; // 0x69C(0x4) UNKNOWN PROPERTY
		UAnimMontage Base_Elimination_Montage; // 0x6A0(0x8)
		UAnimMontage DBNO_Elimination_Montage; // 0x6A8(0x8)
		UAnimMontage Skydiving_Elimination_Montage; // 0x6B0(0x8)
		UAnimMontage Swimming_Elimination_Montage; // 0x6B8(0x8)
		UAnimMontage DBNO_Swimming_Elimination_Montage; // 0x6C0(0x8)
		bool Spawn_VFX_Attached; // 0x6C8(0x1)
		unsigned char UnknownData17_6[0x7]; // 0x6C9(0x7) UNKNOWN PROPERTY
		double Dissolve_Timeline_Playrate; // 0x6D0(0x8)
		double Glow_Timeline_Playrate; // 0x6D8(0x8)
		bool DEBUG_REMOVESPAWNVFX; // 0x6E0(0x1)
		bool DEBUG_REMOVESPAWNEDPOINTLIGHT; // 0x6E1(0x1)
		unsigned char UnknownData18_6[0x6]; // 0x6E2(0x6) UNKNOWN PROPERTY
		UNiagaraSystem Drone_Visual_Effect; // 0x6E8(0x8)
		FName Drone_VFX_Attach_Point; // 0x6F0(0x4)
		bool DEBUG_FXSYSTEMCOMPONENTS; // 0x6F4(0x1)
		bool ShouldDelayBetweenAnimAndVFX; // 0x6F5(0x1)
		unsigned char UnknownData19_6[0x2]; // 0x6F6(0x2) UNKNOWN PROPERTY
		double DelayBetweenAnimAndVFX; // 0x6F8(0x8)
		FGuid Material_Override_ID; // 0x700(0x10)
		FFortPawnMaterialOverrideCopiedParameters Copied_Parameters; // 0x710(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C");
			return ret;
		}

		void Spawn Drone VFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D86447700
		void Set Timeline Playrates(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D86447900
		void Dissolve Material Setup(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D86448100
		void Spawn Dissolve VFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D86447800
		void Clean-Up Teleportation Light(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D86448200
		void Spawn Teleportation Light(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D86447500
		void Spawn Teleportation Drone(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D86447600
		void Stop Looping Audio(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D86447400
		void Play Elmination AnimMontage(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D86447D00
		void TFX_GlowCharacterMesh__FinishedFunc(); // Flags: BlueprintEvent 0x15D86447300
		void TFX_GlowCharacterMesh__UpdateFunc(); // Flags: BlueprintEvent 0x15D86447200
		void TFX_ResOutCharacterMesh__FinishedFunc(); // Flags: BlueprintEvent 0x15D86447100
		void TFX_ResOutCharacterMesh__UpdateFunc(); // Flags: BlueprintEvent 0x15D86447000
		void EndVFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D86448000
		void OnBurstGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const 0x15D86447E00
		void Pre-Sequence Change(); // Flags: BlueprintCallable|BlueprintEvent 0x15D86447C00
		void Set Additional Niagara Parameters on Spawned FX(UNiagaraComponent Spawned Death FX); // Flags: BlueprintCallable|BlueprintEvent 0x15D86447A00
		void Set Additional Niagara Parameters on Drone FX(UNiagaraComponent Drone FX); // Flags: BlueprintCallable|BlueprintEvent 0x15D86447B00
		void TriggerVFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D86446F00
		void ExecuteUbergraph_GCN_RezOut(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D86447F00
	};


	// Class /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C
	// Inherited from AGCN_RezOut_C -> AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x10 (0x750 - 0x740)
	class AGCN_RezOut_NPC_C : public AGCN_RezOut_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x740(0x8)
		USoundBase SoundOnNPCDeath; // 0x748(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C");
			return ret;
		}

		void Pre-Sequence Change(); // Flags: BlueprintCallable|BlueprintEvent 0x15D3F516100
		void ExecuteUbergraph_GCN_RezOut_NPC(int32_t EntryPoint); // Flags: Final 0x15D3F516000
	};


	// Class /Game/GameplayCueNotifies/Death/GCN_RezIn_StyleTransfer.GCN_RezIn_StyleTransfer_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x180 (0x6D0 - 0x550)
	class AGCN_RezIn_StyleTransfer_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x8)
		float TFX_GlowCharacterMesh_EmissiveWarp_47520A324BFF8E84CA190293605B9FEB; // 0x558(0x4)
		TEnumAsByte TFX_GlowCharacterMesh__Direction_47520A324BFF8E84CA190293605B9FEB; // 0x55C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x55D(0x3) UNKNOWN PROPERTY
		UTimelineComponent TFX_GlowCharacterMesh; // 0x560(0x8)
		float TFX_ResOutCharacterMesh_LightIntensity_8D8520244DCE1E895202BA9542045934; // 0x568(0x4)
		float TFX_ResOutCharacterMesh_ZHeightParam_8D8520244DCE1E895202BA9542045934; // 0x56C(0x4)
		float TFX_ResOutCharacterMesh_TransitionParam_8D8520244DCE1E895202BA9542045934; // 0x570(0x4)
		TEnumAsByte TFX_ResOutCharacterMesh__Direction_8D8520244DCE1E895202BA9542045934; // 0x574(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x575(0x3) UNKNOWN PROPERTY
		UTimelineComponent TFX_ResOutCharacterMesh; // 0x578(0x8)
		UPointLightComponent Teleportation_Point_Light; // 0x580(0x8)
		FVector Teleportation_Light_Offset; // 0x588(0x18)
		FLinearColor Teleportation_Light_Color; // 0x5A0(0x10)
		TArray DissolveMIDs; // 0x5B0(0x10)
		UMaterialInterface Mat_Chracter_Dissolve; // 0x5C0(0x8)
		APlayerPawn_Athena_C Pawn; // 0x5C8(0x8)
		TSet Dissolve; // 0x5D0(0x50)
		FName Socket_Mesh_Top; // 0x620(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x624(0x4) UNKNOWN PROPERTY
		double Max_Light_Intensity; // 0x628(0x8)
		FName Socket_Mesh_Bottom; // 0x630(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x634(0x4) UNKNOWN PROPERTY
		ABP_TeleportationDrone_C Drone; // 0x638(0x8)
		TArray Particle_Components; // 0x640(0x10)
		UNiagaraComponent Spawned_Teleport_VFX; // 0x650(0x8)
		UNiagaraSystem Teleport_In_Visual_Effect; // 0x658(0x8)
		FName Teleport_In_VFX_Attach_Point_Name; // 0x660(0x4)
		int32_t Cur_Dissolve_Setup_Attempt; // 0x664(0x4)
		int32_t AmountOfTimesToAttemptRestoreMats; // 0x668(0x4)
		bool Spawn_VFX_Attached; // 0x66C(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x66D(0x3) UNKNOWN PROPERTY
		double Dissolve_Timeline_Playrate; // 0x670(0x8)
		double Glow_Timeline_Playrate; // 0x678(0x8)
		FGuid Material_Override_ID; // 0x680(0x10)
		FFortPawnMaterialOverrideCopiedParameters Copied_Parameters; // 0x690(0x30)
		FDelegateHandleController Delegate_Handle_Controller; // 0x6C0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayCueNotifies/Death/GCN_RezIn_StyleTransfer.GCN_RezIn_StyleTransfer_C");
			return ret;
		}

		void Set Timelines' Playrates(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D43539600
		void Spawn Teleport In VFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D43539500
		void Clean-Up Teleportation Light(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D43539D00
		void Spawn Teleportation Light(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D43539400
		void Stop Looping Audio(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D43539300
		void TFX_GlowCharacterMesh__FinishedFunc(); // Flags: BlueprintEvent 0x15D43539200
		void TFX_GlowCharacterMesh__UpdateFunc(); // Flags: BlueprintEvent 0x15D43539100
		void TFX_ResOutCharacterMesh__FinishedFunc(); // Flags: BlueprintEvent 0x15D43539000
		void TFX_ResOutCharacterMesh__UpdateFunc(); // Flags: BlueprintEvent 0x15D43538F00
		void OnBurstGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const 0x15D43539A00
		void Pre-Sequence Change(); // Flags: BlueprintCallable|BlueprintEvent 0x15D43539800
		void Set Additional Niagara Parameters on Spawned FX(UNiagaraComponent Spawned Teleport In FX); // Flags: BlueprintCallable|BlueprintEvent 0x15D43539700
		void EndVFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D43539C00
		void TriggerVFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D43538E00
		void OnCosmeticPart(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: BlueprintCallable|BlueprintEvent 0x15D43539900
		void ExecuteUbergraph_GCN_RezIn_StyleTransfer(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D43539B00
	};


	// Class /Game/GameplayCueNotifies/Death/GCN_RezIn_CreativeRespawn.GCN_RezIn_CreativeRespawn_C
	// Inherited from AGCN_RezIn_C -> AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x0 (0x718 - 0x718)
	class AGCN_RezIn_CreativeRespawn_C : public AGCN_RezIn_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayCueNotifies/Death/GCN_RezIn_CreativeRespawn.GCN_RezIn_CreativeRespawn_C");
			return ret;
		}
	};


	// Class /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x30 (0x580 - 0x550)
	class AGC_Abilities_Death_FadeCapsule_StW_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x8)
		float CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1; // 0x558(0x4)
		TEnumAsByte CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1; // 0x55C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x55D(0x3) UNKNOWN PROPERTY
		UTimelineComponent CapsuleFadeTL; // 0x560(0x8)
		double Starting_Min_Capsule_Shadow_Vis; // 0x568(0x8)
		TArray SkeletalMesh; // 0x570(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C");
			return ret;
		}

		void SkeletalMeshSetup(AFortPlayerPawn FortPawn); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D44A7BD00
		void CapsuleFadeTL__FinishedFunc(); // Flags: BlueprintEvent 0x15D44A7C100
		void CapsuleFadeTL__UpdateFunc(); // Flags: BlueprintEvent 0x15D44A7C000
		void K2_HandleGameplayCue(AActor MyTarget, TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D44A7BE00
		void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D44A7BF00
	};


	// Class /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x30 (0x580 - 0x550)
	class AGC_Abilities_Death_FadeCapsule_Athena_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x8)
		float CapsuleFadeTL_RemoveShadow_B48F4431426ECD264BA37C992B6887C3; // 0x558(0x4)
		TEnumAsByte CapsuleFadeTL__Direction_B48F4431426ECD264BA37C992B6887C3; // 0x55C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x55D(0x3) UNKNOWN PROPERTY
		UTimelineComponent CapsuleFadeTL; // 0x560(0x8)
		double Starting_Min_Capsule_Shadow_Vis; // 0x568(0x8)
		TArray SkeletalMesh; // 0x570(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C");
			return ret;
		}

		void SkeletalMeshSetup(AFortPlayerPawnAthena FortPawn); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D44A7B800
		void CapsuleFadeTL__FinishedFunc(); // Flags: BlueprintEvent 0x15D44A7BC00
		void CapsuleFadeTL__UpdateFunc(); // Flags: BlueprintEvent 0x15D44A7BB00
		void K2_HandleGameplayCue(AActor MyTarget, TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D44A7B900
		void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D44A7BA00
	};


	// Class /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C
	// Inherited from AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x1C8 (0x718 - 0x550)
	class AGCN_RezIn_Frontend_C : public AFortGameplayCueNotify_BurstLatent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x8)
		float TFX_ResOutCharacterMesh_LightIntensity_43B69932442AE90AB9E7D9819F3D3E71; // 0x558(0x4)
		float TFX_ResOutCharacterMesh_ZHeightParam_43B69932442AE90AB9E7D9819F3D3E71; // 0x55C(0x4)
		float TFX_ResOutCharacterMesh_TransitionParam_43B69932442AE90AB9E7D9819F3D3E71; // 0x560(0x4)
		TEnumAsByte TFX_ResOutCharacterMesh__Direction_43B69932442AE90AB9E7D9819F3D3E71; // 0x564(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x565(0x3) UNKNOWN PROPERTY
		UTimelineComponent TFX_ResOutCharacterMesh; // 0x568(0x8)
		float TFX_GlowCharacterMesh_EmissiveWarp_580AB4094AE6911DB445A58F9580C544; // 0x570(0x4)
		TEnumAsByte TFX_GlowCharacterMesh__Direction_580AB4094AE6911DB445A58F9580C544; // 0x574(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x575(0x3) UNKNOWN PROPERTY
		UTimelineComponent TFX_GlowCharacterMesh; // 0x578(0x8)
		bool DEBUG_ANIMATION; // 0x580(0x1)
		bool SpawnDrone; // 0x581(0x1)
		unsigned char UnknownData10_6[0x6]; // 0x582(0x6) UNKNOWN PROPERTY
		UClass Teleportation_Drone; // 0x588(0x8)
		double Teleport_Bot_AnimPlayRate; // 0x590(0x8)
		double Teleport_Bot_Lifespan; // 0x598(0x8)
		UPointLightComponent Teleportation_Point_Light; // 0x5A0(0x8)
		FVector Teleportation_Light_Offset; // 0x5A8(0x18)
		FLinearColor Teleportation_Light_Color; // 0x5C0(0x10)
		TArray DissolveMIDs; // 0x5D0(0x10)
		UMaterialInterface Mat_Chracter_Dissolve; // 0x5E0(0x8)
		APlayerPawn_Athena_C Pawn; // 0x5E8(0x8)
		TSet Dissolve; // 0x5F0(0x50)
		FName Socket_Mesh_Top; // 0x640(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x644(0x4) UNKNOWN PROPERTY
		double Max_Light_Intensity; // 0x648(0x8)
		FName Socket_Mesh_Bottom; // 0x650(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x654(0x4) UNKNOWN PROPERTY
		TArray Meshes_to_Dissolve; // 0x658(0x10)
		ABP_TeleportationDrone_C Drone; // 0x668(0x8)
		bool DEBUG_CHILDCOMPONENTS; // 0x670(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x671(0x7) UNKNOWN PROPERTY
		TArray Particle_Components; // 0x678(0x10)
		UNiagaraComponent Spawned_Teleport_VFX; // 0x688(0x8)
		UNiagaraSystem Teleport_In_Visual_Effect; // 0x690(0x8)
		FName Teleport_In_VFX_Attach_Point_Name; // 0x698(0x4)
		int32_t Cur_Dissolve_Setup_Attempt; // 0x69C(0x4)
		int32_t AmountOfTimesToAttemptRestoreMats; // 0x6A0(0x4)
		bool Spawn_VFX_Attached; // 0x6A4(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x6A5(0x3) UNKNOWN PROPERTY
		double Dissolve_Timeline_Playrate; // 0x6A8(0x8)
		double Glow_Timeline_Playrate; // 0x6B0(0x8)
		UNiagaraSystem Drone_Visual_Effect; // 0x6B8(0x8)
		bool DEBUG_TESTJANUSFX; // 0x6C0(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x6C1(0x3) UNKNOWN PROPERTY
		FName Drone_VFX_Attach_Point; // 0x6C4(0x4)
		FGuid Material_Override_ID; // 0x6C8(0x10)
		FFortPawnMaterialOverrideCopiedParameters Copied_Parameters; // 0x6D8(0x30)
		FDelegateHandleController Delegate_Handle_Controller; // 0x708(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C");
			return ret;
		}

		void Set Timelines' Playrates(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D44BC9A00
		void Spawn Teleport In VFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D44BC9900
		void Clean-Up Teleportation Light(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D44BCA100
		void Spawn Teleportation Light(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D44BC9800
		void Stop Looping Audio(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D44BC9700
		void TFX_GlowCharacterMesh__FinishedFunc(); // Flags: BlueprintEvent 0x15D44BC9600
		void TFX_GlowCharacterMesh__UpdateFunc(); // Flags: BlueprintEvent 0x15D44BC9500
		void TFX_ResOutCharacterMesh__FinishedFunc(); // Flags: BlueprintEvent 0x15D44BC9400
		void TFX_ResOutCharacterMesh__UpdateFunc(); // Flags: BlueprintEvent 0x15D44BC9300
		void EndVFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D44BCA000
		void OnBurstGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents, ULegacyCameraShake BurstCameraShakeInstance, ADecalActor BurstDecalInstance); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const 0x15D44BC9E00
		void Pre-Sequence Change(); // Flags: BlueprintCallable|BlueprintEvent 0x15D44BC9C00
		void Set Additional Niagara Parameters on Spawned FX(UNiagaraComponent Spawned Teleport In FX); // Flags: BlueprintCallable|BlueprintEvent 0x15D44BC9B00
		void TriggerVFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D44BC9200
		void OnCosmeticPart(AFortPlayerPawn Pawn, UCustomCharacterPart Part, USkeletalMeshComponent MeshPart, TEnumAsByte PartType); // Flags: BlueprintCallable|BlueprintEvent 0x15D44BC9D00
		void ExecuteUbergraph_GCN_RezIn_Frontend(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D44BC9F00
	};


	// Class /Game/GameplayCueNotifies/Shields/GCNL_Shield_Regen.GCNL_Shield_Regen_C
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0xC (0x9BC - 0x9B0)
	class AGCNL_Shield_Regen_C : public AFortGameplayCueNotify_Loop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x9B0(0x8)
		FName ShieldAmountParamName; // 0x9B8(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayCueNotifies/Shields/GCNL_Shield_Regen.GCNL_Shield_Regen_C");
			return ret;
		}

		void OnLoopingStartGeneric(AActor MyTarget, FGameplayCueParameters& Parameters, TArray& ParticleComponents, TArray& AudioComponents); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D44E03400
		void ExecuteUbergraph_GCNL_Shield_Regen(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D44E03800
	};


	// Class /Game/GameplayCueNotifies/Death/GCN_RezIn_SCMachine.GCN_RezIn_SCMachine_C
	// Inherited from AGCN_RezIn_C -> AFortGameplayCueNotify_BurstLatent -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x0 (0x718 - 0x718)
	class AGCN_RezIn_SCMachine_C : public AGCN_RezIn_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayCueNotifies/Death/GCN_RezIn_SCMachine.GCN_RezIn_SCMachine_C");
			return ret;
		}
	};

}
