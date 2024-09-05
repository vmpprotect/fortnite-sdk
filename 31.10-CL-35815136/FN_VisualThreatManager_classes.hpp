#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VisualThreatManager
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/VisualThreatManager/WindManager.WindManager_C
	// Inherited from AFortWindManager -> AActor -> UObject
	// Size: 0x12C (0x644 - 0x518)
	class AWindManager_C : public AFortWindManager	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x8)
		UStaticMeshComponent* EmptyStaticMesh; // 0x520(0x8)
		USceneComponent* DefaultSceneRoot; // 0x528(0x8)
		double SmallerRenderTargetOrthoWidth; // 0x530(0x8)
		TArray<AActor*> External_Test_Actor; // 0x538(0x10)
		TArray<AFortStaticMeshActor*> World_Terrain_Meshes; // 0x548(0x10)
		FVector Camera_Height_Offset; // 0x558(0x18)
		double Particle_Z_Offset; // 0x570(0x8)
		bool Is_Water_Interaction_Enabled; // 0x578(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x579(0x7) UNKNOWN PROPERTY
		TArray<FStaticMeshMaterialArrayCombo> WorldStaticMeshArray; // 0x580(0x10)
		FArrayOfWaterMeshWaterBlueprintPairs Array_Of_Water_Assets; // 0x590(0x10)
		TArray<UStaticMesh*> PrototypicalStaticMeshes; // 0x5A0(0x10)
		int32_t Current_Water_Mesh_Index; // 0x5B0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5B4(0x4) UNKNOWN PROPERTY
		TArray<FFlowMapMaterials> WaterVectorMatToDefaultMaterialPairing; // 0x5B8(0x10)
		bool MaterialPairingFound; // 0x5C8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5C9(0x3) UNKNOWN PROPERTY
		FLinearColor WorldBoundsMinMax; // 0x5CC(0x10)
		unsigned char UnknownData03_6[0x4]; // 0x5DC(0x4) UNKNOWN PROPERTY
		UMaterialInterface* Black_Scene_Capture_Material; // 0x5E0(0x8)
		FBox Max_level_bounds___used_to_isolate_the_level_from_the_vista; // 0x5E8(0x38)
		TArray<UStaticMeshComponent*> StormCylinderMeshes; // 0x620(0x10)
		bool Storm_Cyl_Mesh_Match; // 0x630(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x631(0x3) UNKNOWN PROPERTY
		int32_t Wind_Cyl_Mesh_Array_Match_Index; // 0x634(0x4)
		double Delta_Wind_Falloff_in_World_Units; // 0x638(0x8)
		FFortWindImpulseHandle NewVar; // 0x640(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/VisualThreatManager/WindManager.WindManager_C");
			return ret;
		}

		void Find Matching Wind Mesh Index And Write Bool(FVector Wind location, bool& Storm Cyl Mesh Match, int32_t& Wind Cyl Mesh Array Match Index); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWindMatVariables(UMaterialInstanceDynamic* Mid, bool Set AnimatedCylinderCenter, FVector AnimatedCylinderCenter, bool Set Animating Wind Magnitude, double Animating Wind Magnitude, bool Set Static Wind Magnitude, double Static Wind Magnitude, bool Set CylinderCenter, FVector CylinderCenter, bool Set WindVector, FVector WindVector, bool Set WindCrossVector, FVector WindCrossVector, bool Set OverallOuterRadius, double OverallOuterRadius, bool Set OverallInnerRadius, double OverallInnerRadius, bool Set Wind Still 0 or Animating 1, double Wind Still 0 or Animating 1, bool Set Circular Shader?, double Circular Shader?, bool& NewParam); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateWindDeltaCyl(double Static Cylinder Outer Radius, double duration, UMaterialInstanceDynamic* Mid, bool Is Wind Circular?); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveWindCylinder(FFortWindImpulseCylinder& WindImpulseCylinder); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateStormWindCylinder(FFortWindImpulseCylinder Wind Impulse, FFortWindImpulseCylinderDelta Wind Delta); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector Calculate Camera Position(double Scale, USceneCaptureComponent2D* Scene Capture); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWindImpulseCylinderDeath(FFortWindImpulseCylinder& WindImpulseCylinder); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWindImpulseCylinderDeltaComplete(FFortWindImpulseCylinder& WindImpulseCylinder); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWindImpulseCylinderCreation(FFortWindImpulseCylinder& WindImpulseCylinder, FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnTestWind(double Radius, double ImpulseMagnitude); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Play Water Splash Particle System At Location(FTransform Particle Transform); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddWindParticleSystemComponent(UParticleSystemComponent* ParticleSystemComponent); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Register player for render to texture purposes(UPrimitiveComponent* Effect Water Interaction FX, UPrimitiveComponent* Gameplay Wind INteraction Effects); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Add Wind Component(UPrimitiveComponent* InComponent); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Test(double NewMagnitude); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Add Render To Texture Particle(UParticleSystem* EmitterTemplate, FTransform& InTransform); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WindManager(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/VisualThreatManager/Rifts/Blueprints/B_RiftImpact_CameraShake.B_RiftImpact_CameraShake_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UB_RiftImpact_CameraShake_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/VisualThreatManager/Rifts/Blueprints/B_RiftImpact_CameraShake.B_RiftImpact_CameraShake_C");
			return ret;
		}
	};


	// Class /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
	// Inherited from AFortThreatParticleActor -> AActor -> UObject
	// Size: 0x170 (0x410 - 0x2A0)
	class AThreatPostProcessManagerAndParticleBlueprint_C : public AFortThreatParticleActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2A0(0x8)
		UAudioComponent* EnterTheStormSound; // 0x2A8(0x8)
		UBillboardComponent* Sprite1; // 0x2B0(0x8)
		float Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x2B8(0x4)
		TEnumAsByte<ETimelineDirection> Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x2BC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2BD(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Ramp_Up_down_values_on_death; // 0x2C0(0x8)
		FMulticastInlineDelegate NewEventDispatcher; // 0x2C8(0x10)
		FMulticastInlineDelegate NewEventDispatcher0; // 0x2D8(0x10)
		TArray<FVector> Array_of_Cloud_Positions; // 0x2E8(0x10)
		int32_t RecalculateTimer; // 0x2F8(0x4)
		bool Is_Alive; // 0x2FC(0x1)
		bool IsAliveJustChanged; // 0x2FD(0x1)
		bool IsAlivePrevious; // 0x2FE(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x2FF(0x1) UNKNOWN PROPERTY
		int32_t Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_alive; // 0x300(0x4)
		int32_t Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_dead; // 0x304(0x4)
		APostProcessVolume* Materialpost; // 0x308(0x8)
		double post_process_volume_falloff__around_the_threat_volume; // 0x310(0x8)
		bool ShowRainEffect; // 0x318(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x319(0x7) UNKNOWN PROPERTY
		double DeltaTime; // 0x320(0x8)
		double PostProcessTargetWeight; // 0x328(0x8)
		double Current_Post_Process_Weight; // 0x330(0x8)
		double Post_Process_Fade_in_speed; // 0x338(0x8)
		bool SoundIsActive; // 0x340(0x1)
		bool SoundWasPreviouslyActive; // 0x341(0x1)
		bool is_On; // 0x342(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x343(0x1) UNKNOWN PROPERTY
		FLinearColor ThreatFogPostProcessColor_Morning; // 0x344(0x10)
		FLinearColor ThreatFogPostProcessColor_Day; // 0x354(0x10)
		FLinearColor ThreatFogPostProcessColor_Evening; // 0x364(0x10)
		FLinearColor ThreatFogPostProcessColor_Night; // 0x374(0x10)
		unsigned char UnknownData04_6[0x4]; // 0x384(0x4) UNKNOWN PROPERTY
		TArray<FBox> Array_of_Cloud_Volumes; // 0x388(0x10)
		double PostProcessWeightModulation; // 0x398(0x8)
		double Ramp_Up_And_Down_Anim_Values; // 0x3A0(0x8)
		bool ShowRainOnCameraLens; // 0x3A8(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x3A9(0x7) UNKNOWN PROPERTY
		AEmitterCameraLensEffectBase* Rain_Camera_Lens_Effect; // 0x3B0(0x8)
		UParticleSystemComponent* LocalizedParticleSystem; // 0x3B8(0x8)
		bool IsWorldReady; // 0x3C0(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x3C1(0x7) UNKNOWN PROPERTY
		double Rain_Trace_Timer; // 0x3C8(0x8)
		FVector RainTraceOffset; // 0x3D0(0x18)
		double RainMultiplierCurrent; // 0x3E8(0x8)
		double Rain_Spawn_Rate_Exponent; // 0x3F0(0x8)
		bool TracePrevious; // 0x3F8(0x1)
		bool IsAthenaWorld; // 0x3F9(0x1)
		bool bThreatOverride; // 0x3FA(0x1)
		bool bForceOff; // 0x3FB(0x1)
		unsigned char UnknownData07_6[0x4]; // 0x3FC(0x4) UNKNOWN PROPERTY
		TScriptInterface<Class> CameraLensEffectInterface; // 0x400(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C");
			return ret;
		}

		void SetForceOff(bool bForceOff); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CalculatePlayerPositionNearBox(FVector BoxMin, FVector BoxMax, double& VolumePlayerCoveragePercentage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Ramp Up down values on death__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Ramp Up down values on death__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnThreatCloudsChanged(TArray<FThreatLocationInfo>& ThreatLocationInfo); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWorldReady(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VFX_RainTracePeriodic(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartTraceTimer(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ForceUpdateLensEffect(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnThreatOverrideChanged(bool bForceThreatOn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NewEventDispatcher0__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NewEventDispatcher__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x18 (0x398 - 0x380)
	class AB_CameraRainDrops_01_C : public AEmitterCameraLensEffectBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x8)
		float Alpha_Alpha_06897833405CC2B231B02C93C4E725A3; // 0x388(0x4)
		TEnumAsByte<ETimelineDirection> Alpha__Direction_06897833405CC2B231B02C93C4E725A3; // 0x38C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x38D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Alpha; // 0x390(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C");
			return ret;
		}

		void Alpha__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Alpha__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_CameraRainDrops_01(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/VisualThreatManager/StormVisuals/Debug/Delete.Delete_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelete_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/VisualThreatManager/StormVisuals/Debug/Delete.Delete_C");
			return ret;
		}
	};


	// Class /Game/VisualThreatManager/StormVisuals/Blueprints/Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AThreat_RainAttachedToPlayer_C : public AActor	
	{
	public:
		UParticleSystemComponent* ParticleSystem; // 0x290(0x8)
		USceneComponent* DefaultSceneRoot; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/VisualThreatManager/StormVisuals/Blueprints/Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C");
			return ret;
		}
	};

}
