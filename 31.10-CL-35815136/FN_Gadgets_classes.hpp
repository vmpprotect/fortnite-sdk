#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Gadgets
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C
	// Inherited from AActor -> UObject
	// Size: 0x108 (0x398 - 0x290)
	class ABP_ZipLine_Athena_Harness_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		UParticleSystemComponent* P_Zipline_AttachedToPlayer; // 0x298(0x8)
		UStaticMeshComponent* SM_Zipline_Magnet; // 0x2A0(0x8)
		UArrowComponent* Arrow; // 0x2A8(0x8)
		UParticleSystemComponent* P_Zipline_Pulley_SpeedLines; // 0x2B0(0x8)
		UStaticMeshComponent* SM_Zipline_Motor; // 0x2B8(0x8)
		USceneComponent* Scene; // 0x2C0(0x8)
		UParticleSystem* SpawnFX; // 0x2C8(0x8)
		UParticleSystem* DestroyFX; // 0x2D0(0x8)
		UParticleSystem* CollideDestroyVFX; // 0x2D8(0x8)
		USoundBase* AttachSound; // 0x2E0(0x8)
		USoundBase* DetachSound; // 0x2E8(0x8)
		AFortPlayerPawn* AttachedPlayer; // 0x2F0(0x8)
		bool HasHitAnotherPlayer; // 0x2F8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2F9(0x7) UNKNOWN PROPERTY
		double ZiplineChimeVisualUpdate; // 0x300(0x8)
		FTimerHandle ChimeTimer; // 0x308(0x8)
		FVector ZiplineDirection; // 0x310(0x18)
		ABP_Athena_Environmental_ZipLine_Spline_C* EnvZiplineSpline; // 0x328(0x8)
		double SplineRotationUpdateSeconds; // 0x330(0x8)
		FTimerHandle MotorUpdateTimer; // 0x338(0x8)
		AFortAthenaZipline* AttachedZipline; // 0x340(0x8)
		bool debugOutput; // 0x348(0x1)
		bool IsReversingMomentum; // 0x349(0x1)
		bool bIsTravelingUphill; // 0x34A(0x1)
		bool bIsTravelingDownhill; // 0x34B(0x1)
		FGameplayTag GCNTag_Travel; // 0x34C(0x4)
		USoundBase* TravelSound; // 0x350(0x8)
		FGameplayTag GCNTag_HighSpeed; // 0x358(0x4)
		FGameplayTag GCNTag_ZiplineBraking; // 0x35C(0x4)
		bool bLoopingDownhillGCN; // 0x360(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x361(0x3) UNKNOWN PROPERTY
		FActiveGameplayEffectHandle DownhillTravelGE; // 0x364(0x8)
		bool UseMeshAttachment; // 0x36C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x36D(0x3) UNKNOWN PROPERTY
		FVector CurrentDesired_Zipline_Offset; // 0x370(0x18)
		APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C* DynamicZiplineSpline; // 0x388(0x8)
		USplineComponent* NewVar; // 0x390(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C");
			return ret;
		}

		void OnRep_AttachedPlayer(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Audio and VFXParams(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Start Travel Audio(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Stop Travel Audio(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Chime Visual(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OrientMotorForZipline(AFortAthenaZiplineBase* Zipline, FVector DesiredZiplineOffset); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RotateToZiplineDirection(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateMotorToSpline(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateParamsForAudioAndVFX(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Cleanup On DownhillGCN(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateZiplineOffsetLocation(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateMotorToDynSpline(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_ZipLine_Athena_Harness(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C
	// Inherited from ABP_ZipLine_Athena_Harness_C -> AActor -> UObject
	// Size: 0x48 (0x3E0 - 0x398)
	class ABP_ZipLine_Athena_Harness_Yellow_C : public ABP_ZipLine_Athena_Harness_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x8)
		UNiagaraComponent* NS_Zipline_Pulley_SpeedLines_Converted; // 0x3A0(0x8)
		UNiagaraComponent* NS_Zipline_Speedline; // 0x3A8(0x8)
		float Alpha_NewTrack_0_AF34CA1D47D28FE19CCA3C98688125DE; // 0x3B0(0x4)
		TEnumAsByte<ETimelineDirection> Alpha__Direction_AF34CA1D47D28FE19CCA3C98688125DE; // 0x3B4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x3B5(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Alpha; // 0x3B8(0x8)
		float Spark_NewTrack_0_A812B2F04CB78DDF352B84A578861501; // 0x3C0(0x4)
		TEnumAsByte<ETimelineDirection> Spark__Direction_A812B2F04CB78DDF352B84A578861501; // 0x3C4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x3C5(0x3) UNKNOWN PROPERTY
		UTimelineComponent* spark; // 0x3C8(0x8)
		double BeginLocation_z; // 0x3D0(0x8)
		double Location; // 0x3D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C");
			return ret;
		}

		void Spark__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Spark__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Alpha__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Alpha__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateZiplineFX(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Begin Z(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetBlue(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /BRCosmetics/Gadgets/Assets/VinderTech_GliderChute/Glider_Bistro_Monster_Female/Scripts/VariantScript_Glider_BistroAstronaut_Style.VariantScript_Glider_BistroAstronaut_Style_C
	// Inherited from UFortLoadoutTagDrivenVariantScript -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVariantScript_Glider_BistroAstronaut_Style_C : public UFortLoadoutTagDrivenVariantScript	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/BRCosmetics/Gadgets/Assets/VinderTech_GliderChute/Glider_Bistro_Monster_Female/Scripts/VariantScript_Glider_BistroAstronaut_Style.VariantScript_Glider_BistroAstronaut_Style_C");
			return ret;
		}

		FGameplayTag DetermineVariantSelection(FFortAthenaLoadout& Loadout); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Gadgets/Assets/Fish/Stink_Fish/Meshes/Stink_Fish_AnimBP.Stink_Fish_AnimBP_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0xC60 (0x1018 - 0x3B8)
	class UStink_Fish_AnimBP_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x3F0(0x150)
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x540(0x970)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xEB0(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xED0(0x20)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xEF0(0x128)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Gadgets/Assets/Fish/Stink_Fish/Meshes/Stink_Fish_AnimBP.Stink_Fish_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Gadgets/Assets/ChillBronco/Meshes/SK_ChillBronco_AnimBP.SK_ChillBronco_AnimBP_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x10D0 (0x1488 - 0x3B8)
	class USK_ChillBronco_AnimBP_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x3D0(0x20)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3F0(0x20)
		FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x410(0x510)
		FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x920(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x9D0(0x20)
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x9F0(0x970)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1360(0x128)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Gadgets/Assets/ChillBronco/Meshes/SK_ChillBronco_AnimBP.SK_ChillBronco_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Gadgets/Assets/Fish/Catfish/Meshes/Catfish_AnimBP.Catfish_AnimBP_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0xB38 (0xEF0 - 0x3B8)
	class UCatfish_AnimBP_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x3F0(0x150)
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x540(0x970)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xEB0(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xED0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Gadgets/Assets/Fish/Catfish/Meshes/Catfish_AnimBP.Catfish_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Gadgets/Assets/Fish/Holiday_Fish/Meshes/Holiday_Fish_AnimBP.Holiday_Fish_AnimBP_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0xB38 (0xEF0 - 0x3B8)
	class UHoliday_Fish_AnimBP_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x3F0(0x150)
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x540(0x970)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xEB0(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xED0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Gadgets/Assets/Fish/Holiday_Fish/Meshes/Holiday_Fish_AnimBP.Holiday_Fish_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Gadgets/Assets/Bucket_Old/Meshes/Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C
	// Inherited from UCustomCharacterPartAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0xBB8 (0x1328 - 0x770)
	class UBucket_Old_Gadget_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance	
	{
	public:
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x770(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x778(0x8)
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x780(0x970)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x10F0(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1110(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x1130(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x11E0(0x20)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1200(0x128)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Gadgets/Assets/Bucket_Old/Meshes/Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Gadgets/Assets/Fish/Kev_Fish/Meshes/Kev_Fish_Gadget_AnimBP.Kev_Fish_Gadget_AnimBP_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x5C8 (0x980 - 0x3B8)
	class UKev_Fish_Gadget_AnimBP_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x3D0(0x10)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3E0(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x400(0x20)
		FAnimNode_Trail AnimGraphNode_Trail; // 0x420(0x2A0)
		FAnimNode_Trail AnimGraphNode_Trail; // 0x6C0(0x2A0)
		FAnimNode_Root AnimGraphNode_Root; // 0x960(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Gadgets/Assets/Fish/Kev_Fish/Meshes/Kev_Fish_Gadget_AnimBP.Kev_Fish_Gadget_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Gadgets/Assets/Flopper/Meshes/Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x5C8 (0x980 - 0x3B8)
	class UFlopper_Gadget_AnimBP_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x3D0(0x10)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3E0(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x400(0x20)
		FAnimNode_Trail AnimGraphNode_Trail; // 0x420(0x2A0)
		FAnimNode_Trail AnimGraphNode_Trail; // 0x6C0(0x2A0)
		FAnimNode_Root AnimGraphNode_Root; // 0x960(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Gadgets/Assets/Flopper/Meshes/Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Gadgets/Assets/Fish/Slurp_Jellyfish/Meshes/Slurp_Jellyfish_AnimBP.Slurp_Jellyfish_AnimBP_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x9F8 (0xDB0 - 0x3B8)
	class USlurp_Jellyfish_AnimBP_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x3D0(0x20)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3F0(0x20)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x410(0x10)
		FAnimNode_Root AnimGraphNode_Root; // 0x420(0x20)
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x440(0x970)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Gadgets/Assets/Fish/Slurp_Jellyfish/Meshes/Slurp_Jellyfish_AnimBP.Slurp_Jellyfish_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Gadgets/Assets/Happy_Ghost/Meshes/Happy_Ghost_Gadget_AnimBP.Happy_Ghost_Gadget_AnimBP_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0xB29 (0xEE1 - 0x3B8)
	class UHappy_Ghost_Gadget_AnimBP_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C8(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3D0(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D8(0x20)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x3F8(0x10)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x408(0x128)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x530(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x550(0x20)
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x570(0x970)
		bool IsFired; // 0xEE0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Gadgets/Assets/Happy_Ghost/Meshes/Happy_Ghost_Gadget_AnimBP.Happy_Ghost_Gadget_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BlueprintUpdateAnimation(float DeltaTimeX); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Happy_Ghost_Gadget_AnimBP(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
