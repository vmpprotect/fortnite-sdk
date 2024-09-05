#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Gadgets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C
	// Inherited from AActor -> UObject
	// Size: 0x108 (0x398 - 0x290)
	class ABP_ZipLine_Athena_Harness_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		UParticleSystemComponent P_Zipline_AttachedToPlayer; // 0x298(0x8)
		UStaticMeshComponent SM_Zipline_Magnet; // 0x2A0(0x8)
		UArrowComponent Arrow; // 0x2A8(0x8)
		UParticleSystemComponent P_Zipline_Pulley_SpeedLines; // 0x2B0(0x8)
		UStaticMeshComponent SM_Zipline_Motor; // 0x2B8(0x8)
		USceneComponent Scene; // 0x2C0(0x8)
		UParticleSystem SpawnFX; // 0x2C8(0x8)
		UParticleSystem DestroyFX; // 0x2D0(0x8)
		UParticleSystem CollideDestroyVFX; // 0x2D8(0x8)
		USoundBase AttachSound; // 0x2E0(0x8)
		USoundBase DetachSound; // 0x2E8(0x8)
		AFortPlayerPawn AttachedPlayer; // 0x2F0(0x8)
		bool HasHitAnotherPlayer; // 0x2F8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x2F9(0x7) UNKNOWN PROPERTY
		double ZiplineChimeVisualUpdate; // 0x300(0x8)
		FTimerHandle ChimeTimer; // 0x308(0x8)
		FVector ZiplineDirection; // 0x310(0x18)
		ABP_Athena_Environmental_ZipLine_Spline_C EnvZiplineSpline; // 0x328(0x8)
		double SplineRotationUpdateSeconds; // 0x330(0x8)
		FTimerHandle MotorUpdateTimer; // 0x338(0x8)
		AFortAthenaZipline AttachedZipline; // 0x340(0x8)
		bool debugOutput; // 0x348(0x1)
		bool IsReversingMomentum; // 0x349(0x1)
		bool bIsTravelingUphill; // 0x34A(0x1)
		bool bIsTravelingDownhill; // 0x34B(0x1)
		FGameplayTag GCNTag_Travel; // 0x34C(0x4)
		USoundBase TravelSound; // 0x350(0x8)
		FGameplayTag GCNTag_HighSpeed; // 0x358(0x4)
		FGameplayTag GCNTag_ZiplineBraking; // 0x35C(0x4)
		bool bLoopingDownhillGCN; // 0x360(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x361(0x3) UNKNOWN PROPERTY
		FActiveGameplayEffectHandle DownhillTravelGE; // 0x364(0x8)
		bool UseMeshAttachment; // 0x36C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x36D(0x3) UNKNOWN PROPERTY
		FVector CurrentDesired_Zipline_Offset; // 0x370(0x18)
		APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C DynamicZiplineSpline; // 0x388(0x8)
		USplineComponent NewVar; // 0x390(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C");
			return ret;
		}

		void OnRep_AttachedPlayer(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B176600
		void Update Audio and VFXParams(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17A100
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D6B176400
		void Start Travel Audio(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B17A300
		void Stop Travel Audio(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B17A200
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent 0x15D6B17A500
		void HandleOnDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B176700
		void Chime Visual(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B176A00
		void OrientMotorForZipline(AFortAthenaZiplineBase Zipline, FVector DesiredZiplineOffset); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B176500
		void RotateToZiplineDirection(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B17A400
		void UpdateMotorToSpline(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B179F00
		void UpdateParamsForAudioAndVFX(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B179E00
		void Cleanup On DownhillGCN(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B176900
		void UpdateZiplineOffsetLocation(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B179D00
		void UpdateMotorToDynSpline(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B17A000
		void ExecuteUbergraph_BP_ZipLine_Athena_Harness(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6B176800
	};


	// Class /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C
	// Inherited from ABP_ZipLine_Athena_Harness_C -> AActor -> UObject
	// Size: 0x48 (0x3E0 - 0x398)
	class ABP_ZipLine_Athena_Harness_Yellow_C : public ABP_ZipLine_Athena_Harness_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x8)
		UNiagaraComponent NS_Zipline_Pulley_SpeedLines_Converted; // 0x3A0(0x8)
		UNiagaraComponent NS_Zipline_Speedline; // 0x3A8(0x8)
		float Alpha_NewTrack_0_AF34CA1D47D28FE19CCA3C98688125DE; // 0x3B0(0x4)
		TEnumAsByte Alpha__Direction_AF34CA1D47D28FE19CCA3C98688125DE; // 0x3B4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x3B5(0x3) UNKNOWN PROPERTY
		UTimelineComponent Alpha; // 0x3B8(0x8)
		float Spark_NewTrack_0_A812B2F04CB78DDF352B84A578861501; // 0x3C0(0x4)
		TEnumAsByte Spark__Direction_A812B2F04CB78DDF352B84A578861501; // 0x3C4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x3C5(0x3) UNKNOWN PROPERTY
		UTimelineComponent spark; // 0x3C8(0x8)
		double BeginLocation_z; // 0x3D0(0x8)
		double Location; // 0x3D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C");
			return ret;
		}

		void Spark__FinishedFunc(); // Flags: BlueprintEvent 0x15D6B179300
		void Spark__UpdateFunc(); // Flags: BlueprintEvent 0x15D6B179200
		void Alpha__FinishedFunc(); // Flags: BlueprintEvent 0x15D6B179800
		void Alpha__UpdateFunc(); // Flags: BlueprintEvent 0x15D6B179700
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D6B179500
		void UpdateZiplineFX(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B179000
		void Update Begin Z(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B179100
		void ResetBlue(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6B179400
		void ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6B179600
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

		FGameplayTag DetermineVariantSelection(FFortAthenaLoadout& Loadout); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15D4309F100
	};

}
