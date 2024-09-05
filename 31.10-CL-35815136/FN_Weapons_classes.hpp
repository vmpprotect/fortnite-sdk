#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Weapons
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
	// Inherited from UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x14B8 (0x1A60 - 0x5A8)
	class UBlueprint_Paper_VIM_C : public UFortAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x5A8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x5B0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x5B8(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x5C0(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x5C8(0x20)
		FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x5E8(0x10)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x5F8(0x20)
		unsigned char UnknownData01_6[0x8]; // 0x618(0x8) UNKNOWN PROPERTY
		FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x620(0x510)
		FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xB30(0x510)
		FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1040(0x510)
		FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1550(0x510)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Blueprint_Paper_VIM(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C
	// Inherited from AFortTracerBase -> AFortClientOnlyActor -> AActor -> UObject
	// Size: 0x0 (0x370 - 0x370)
	class ATracerGeneric_C : public AFortTracerBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C");
			return ret;
		}

		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/Melee_CameraShake.Melee_CameraShake_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UMelee_CameraShake_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Melee/Blueprints/Impact/Melee_CameraShake.Melee_CameraShake_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_BuildingTools/Blueprints/DefaultBuildingTool.DefaultBuildingTool_C
	// Inherited from AFortWeap_BuildingTool -> AFortWeap_BuildingToolBase -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x1740 - 0x1740)
	class ADefaultBuildingTool_C : public AFortWeap_BuildingTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/Blueprints/DefaultBuildingTool.DefaultBuildingTool_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_BuildingTools/Blueprints/DefaultEditingTool.DefaultEditingTool_C
	// Inherited from AFortWeap_EditingTool -> AFortWeap_BuildingToolBase -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x1638 - 0x1638)
	class ADefaultEditingTool_C : public AFortWeap_EditingTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/Blueprints/DefaultEditingTool.DefaultEditingTool_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Crossbows/Crossbow/Effects/BP_Hook_Camera_LensEffect.BP_Hook_Camera_LensEffect_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x0 (0x380 - 0x380)
	class ABP_Hook_Camera_LensEffect_C : public AEmitterCameraLensEffectBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Crossbows/Crossbow/Effects/BP_Hook_Camera_LensEffect.BP_Hook_Camera_LensEffect_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C
	// Inherited from AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x3C8 (0x2190 - 0x1DC8)
	class AB_Ranged_Generic_C : public AFortWeaponRanged	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1DC8(0x8)
		float AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642; // 0x1DD0(0x4)
		TEnumAsByte<ETimelineDirection> AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642; // 0x1DD4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1DD5(0x3) UNKNOWN PROPERTY
		UTimelineComponent* AnimateScopePostProcess; // 0x1DD8(0x8)
		UNiagaraSystem* OpticGlint; // 0x1DE0(0x8)
		bool UseDestroyEffect; // 0x1DE8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1DE9(0x7) UNKNOWN PROPERTY
		UParticleSystem* WeaponDurabilityDestroyEffect; // 0x1DF0(0x8)
		UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x1DF8(0x8)
		bool Use_Reload_Particles; // 0x1E00(0x1)
		bool UseShellsOnFire_; // 0x1E01(0x1)
		bool UseShellsOnReload_; // 0x1E02(0x1)
		bool UseShellsOnPump_; // 0x1E03(0x1)
		unsigned char UnknownData02_6[0x4]; // 0x1E04(0x4) UNKNOWN PROPERTY
		UNiagaraSystem* Shell_Burst_FX; // 0x1E08(0x8)
		UNiagaraSystem* Shell_Looping_FX; // 0x1E10(0x8)
		UNiagaraSystem* Reload_System; // 0x1E18(0x8)
		UMaterialInterface* Reload_Smoke_Material; // 0x1E20(0x8)
		FName ReloadSocketName; // 0x1E28(0x4)
		FGameplayTag TagToApplyOpticGlint; // 0x1E2C(0x4)
		TArray<AFortAIPawn*> Array_Of_Active_Enemy_AI; // 0x1E30(0x10)
		bool Scope___Render_Enemies_To_Custom_Depth_Buffer; // 0x1E40(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1E41(0x3) UNKNOWN PROPERTY
		FName Shells_Socket_Name; // 0x1E44(0x4)
		TEnumAsByte<En_ShellTypes_01> ShellTypeSelect; // 0x1E48(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1E49(0x7) UNKNOWN PROPERTY
		double Shells_Spawn_Rate_Scale; // 0x1E50(0x8)
		FVector ShellsRotationRate; // 0x1E58(0x18)
		FVector Shells_Velocity; // 0x1E70(0x18)
		FVector Shells_Gravity; // 0x1E88(0x18)
		FVector Shells_Size; // 0x1EA0(0x18)
		double Target_Scope_Vignette_Blur_Screen_Percentage; // 0x1EB8(0x8)
		double ScopeCameraOffsetX; // 0x1EC0(0x8)
		double ScopeCameraOffsetY; // 0x1EC8(0x8)
		double Scope_Camera_Offset_Amount; // 0x1ED0(0x8)
		double Inherit_Parent_Velocity; // 0x1ED8(0x8)
		double Cylindrical_Radius; // 0x1EE0(0x8)
		double Cylindrical_Height; // 0x1EE8(0x8)
		FLinearColor Shell_Color; // 0x1EF0(0x10)
		UNiagaraComponent* Spawned_Shells; // 0x1F00(0x8)
		bool DebugShellsSocket_; // 0x1F08(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x1F09(0x7) UNKNOWN PROPERTY
		USoundBase* Sound_ScopeZoomIn; // 0x1F10(0x8)
		USoundBase* Sound_ScopeZoomOut; // 0x1F18(0x8)
		UNiagaraComponent* Alteration_Ambient_PS; // 0x1F20(0x8)
		FGameplayTagContainer ReticleHUDElementTags; // 0x1F28(0x20)
		bool Is_Wind_Enabled; // 0x1F48(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x1F49(0x7) UNKNOWN PROPERTY
		UParticleSystem* MuzzleWindParticleSystem; // 0x1F50(0x8)
		bool ShouldHideReticleAfterDelay; // 0x1F58(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x1F59(0x7) UNKNOWN PROPERTY
		UParticleSystemComponent* MuzzleWindParticleSpawned; // 0x1F60(0x8)
		int32_t StencilBufferValue; // 0x1F68(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x1F6C(0x4) UNKNOWN PROPERTY
		UCurveFloat* Curve_PitchOffset; // 0x1F70(0x8)
		USoundBase* Sound_ScopedInLoop; // 0x1F78(0x8)
		UAudioComponent* ScopeZoomInComp; // 0x1F80(0x8)
		UAudioComponent* ScopedInLoopComp; // 0x1F88(0x8)
		UAudioComponent* ScopeZoomOutComp; // 0x1F90(0x8)
		double Alteration_Ambient_PS_Max_Draw_Distance; // 0x1F98(0x8)
		double Muzzle_PS_Max_Draw_Distance; // 0x1FA0(0x8)
		double Beam_PS_Max_Draw_Distance; // 0x1FA8(0x8)
		double Reload_PS_Max_Draw_Distance; // 0x1FB0(0x8)
		double Shells_PS_Max_Draw_Distance; // 0x1FB8(0x8)
		FMulticastInlineDelegate onAimDownSightsChanged; // 0x1FC0(0x10)
		UNiagaraComponent* MuzzleNiagaraComponentInstance; // 0x1FD0(0x8)
		FTimerHandle ScopeEffectDelay1Handle; // 0x1FD8(0x8)
		FTimerHandle ScopeEffectDelay2Handle; // 0x1FE0(0x8)
		FScalableFloat UseUpdatedFeedback; // 0x1FE8(0x28)
		FMulticastInlineDelegate OnStartFiring; // 0x2010(0x10)
		FMulticastInlineDelegate OnPersistentFireStopped; // 0x2020(0x10)
		UStaticMesh* ScopeMesh; // 0x2030(0x8)
		UStaticMeshComponent* ScopeMesh1P_Spawned; // 0x2038(0x8)
		TArray<UMaterialInterface*> ScopeMaterialOverrides; // 0x2040(0x10)
		float Reload_Smoke_Lifetime; // 0x2050(0x4)
		float Reload_Smoke_Width_Scale; // 0x2054(0x4)
		FLinearColor BaseColorAlpha; // 0x2058(0x10)
		bool Use_Emissive_in_Reload; // 0x2068(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x2069(0x3) UNKNOWN PROPERTY
		FLinearColor Reload_Emissive_Color; // 0x206C(0x10)
		bool Is_Rocket_Launcher; // 0x207C(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x207D(0x3) UNKNOWN PROPERTY
		FLinearColor Rocket_Launcher_Spark_Color; // 0x2080(0x10)
		bool Reload_Ejects_Shells; // 0x2090(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x2091(0x7) UNKNOWN PROPERTY
		UNiagaraComponent* OpticGlintComp; // 0x2098(0x8)
		UFXSystemAsset* Muzzle_System; // 0x20A0(0x8)
		float Muzzle_Hue_Control; // 0x20A8(0x4)
		float Muzzle_Core_Cap_Scale; // 0x20AC(0x4)
		FVector Muzzle_Core_Scale; // 0x20B0(0x18)
		float Spark_Amount_Scale; // 0x20C8(0x4)
		float Smoke_Size_Scale; // 0x20CC(0x4)
		FLinearColor MuzzleSmokeInitialColor; // 0x20D0(0x10)
		float Smoke_Initial_Color_Scale_Variance; // 0x20E0(0x4)
		float Smoke_Emissive_Scale; // 0x20E4(0x4)
		bool Use_Heated_Elements; // 0x20E8(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x20E9(0x3) UNKNOWN PROPERTY
		float Decal_Size; // 0x20EC(0x4)
		FVector Decal_Offset; // 0x20F0(0x18)
		float Decal_Alpha; // 0x2108(0x4)
		unsigned char UnknownData13_6[0x4]; // 0x210C(0x4) UNKNOWN PROPERTY
		UFXSystemComponent* Spawned_Muzzle_System; // 0x2110(0x8)
		int32_t Burst_Loops; // 0x2118(0x4)
		bool Muzzle_BakedSupressor__Always_Suppressed_; // 0x211C(0x1)
		bool Baked_Optics__Always_has_Optics_element_; // 0x211D(0x1)
		unsigned char UnknownData14_6[0x2]; // 0x211E(0x2) UNKNOWN PROPERTY
		double MinPlayFXTime; // 0x2120(0x8)
		double LastPlayFXTime; // 0x2128(0x8)
		FScalableFloat UseNativeFX; // 0x2130(0x28)
		bool bIsLocal; // 0x2158(0x1)
		unsigned char UnknownData15_6[0x7]; // 0x2159(0x7) UNKNOWN PROPERTY
		UNiagaraSystem* Magazine_Eject_System; // 0x2160(0x8)
		FName Magazine_Eject_Socket_Name; // 0x2168(0x4)
		bool Use_Magazine_Eject; // 0x216C(0x1)
		unsigned char UnknownData16_6[0x3]; // 0x216D(0x3) UNKNOWN PROPERTY
		UMaterialInterface* Magazine_Eject_Material; // 0x2170(0x8)
		UStaticMesh* Magazine_Eject_Model; // 0x2178(0x8)
		float ScopeEffectDelay1Time; // 0x2180(0x4)
		float ScopeEffectDelay2Time; // 0x2184(0x4)
		bool bUseShellSmoke; // 0x2188(0x1)
		bool Burst_Activated_Muzzle; // 0x2189(0x1)
		unsigned char UnknownData17_6[0x2]; // 0x218A(0x2) UNKNOWN PROPERTY
		int32_t MuzzleInt; // 0x218C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C");
			return ret;
		}

		void Try Show Reticle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Activate Magazine Eject FX(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MuzzleModCheck(bool& IsMuzzleBrake, bool& IsMuzzleSupressor, bool& IsMuzzleBreacher); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MuzzleADSCheck(bool& Return ADS Bool); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowOpticGlint(bool AimDownsights); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopLocalForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayLocalForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void getScopeComp(UStaticMeshComponent* ScopeComponent); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void initScope(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsNewFeedbackEnabled(bool& Enabled); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LocalReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayScopeOutAudio(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetScopeParameters(UStaticMeshComponent* ScopeComponent, FVector2D& DepthOfFieldVignetteRange, FVector& WeaponSightsOffset); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopScopedAudio(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartScopedAudio(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPostProcessParams(double InputPin); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetActiveAlterationIdleParticles(bool Active); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowReticle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideReticle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivateOrDeactivateWindParticle(bool bNewActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeactivateMuzzleFX(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivateReloadSmokeFX(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivateShellsFX(bool bool); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeactivateShellsFX(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupShellFX(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateShellEmittersFX(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Muzzle Play Reload FX(TEnumAsByte<EFortReloadFXState> Selection); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Muzzle Flash FX(bool Persistent Fire); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWpnRarity(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimateScopePostProcess__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimateScopePostProcess__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimateScopePostProcess__Toggle Scope__EventFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_F0DCFB40496C39D956D872BA984FA1F2(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_83457BA843174AC6288682A342EBEAD9(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStopWeaponFireFX(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState> ReloadStage); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetTargeting(bool bNewIsTargeting); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnUnEquip(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeScopeVariables(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponAttached(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitAlteration(UFortAlterationItemDefinition* NewAlteration); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShellsON_(onPump)(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEquippedWeaponDestory(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit); // Flags: Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideWeaponMesh(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowWeaponMesh(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideWeapon(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowWeapon(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReverseScopePP(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetDoonceScopeSound(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnhideThirdPersonStuff(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayScopePP(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideFirstPersonStuff(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AbortScopeFX(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideThirdPersonStuff(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnhideFirstPersonStuffPart2(int32_t Which Call); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnhideFirstPersonStuffPart1(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ForceScopeFX(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BindFireRateChange(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PitchUpOnRateOfFireChange(float NewRateOfFire); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShellEjectionFixOn(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Bind on Effects Quality(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShellEjectionOff(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ForceScopeBackImmediatly(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, UFXSystemComponent* SpawnedPSC); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartOverheated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnApplyFireModeData(UFortWeaponFireModeData* FireModeData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScopeEffectDelay2(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScopeEffectDelay1(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ModAddedtoWeapon(UFortWeaponModItemDefinition* Mod, AFortWeapon* Weapon); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CancelScopeTargeting(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateModMagazine(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveParticleData(TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem, FVector& SimulationPositionOffset); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponDetached(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Ranged_Generic(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPersistentFireStopped__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartFiring__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void onAimDownSightsChanged__DelegateSignature(bool AimDownsights); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C
	// Inherited from AFortWeaponPickaxeAthena -> AFortWeapon -> AActor -> UObject
	// Size: 0x98 (0x1898 - 0x1800)
	class AB_Athena_Pickaxe_Generic_C : public AFortWeaponPickaxeAthena	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1800(0x8)
		UParticleSystemComponent* MeleeHeavy_PSC; // 0x1808(0x8)
		UParticleSystem* MeleeHeavy_ParticleSystem; // 0x1810(0x8)
		UParticleSystem* WeaponDurabilityDestroyEffect; // 0x1818(0x8)
		UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x1820(0x8)
		bool UseDestroyEffect; // 0x1828(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1829(0x7) UNKNOWN PROPERTY
		UNiagaraComponent* Alteration_Ambient_PS; // 0x1830(0x8)
		FVector Effects_Color_Level; // 0x1838(0x18)
		bool Equipped; // 0x1850(0x1)
		bool bEquipPendingInstigator; // 0x1851(0x1)
		bool UseTimeofDayControl; // 0x1852(0x1)
		bool Swing_Right_; // 0x1853(0x1)
		unsigned char UnknownData01_6[0x4]; // 0x1854(0x4) UNKNOWN PROPERTY
		UFXSystemComponent* Impact_FX; // 0x1858(0x8)
		FRotator Left_Swing_Rotation; // 0x1860(0x18)
		FRotator Right_Swing_Rotation; // 0x1878(0x18)
		UFXSystemComponent* Spawned_Legacy_AnimTrail; // 0x1890(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C");
			return ret;
		}

		void Melee_Effect_Color(FVector& Melee_Color_Set); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t Setup Swing Montage Section Index(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Binding Time of Day Control(bool Bind / Unbind (T/F)); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnbindSwingAnimTrailEvents(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BindSwingAnimTrailEvents(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayCQCPickaxeEnemyAudio(FHitResult Hit Result); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetActiveAlterationIdleParticles(bool Active, bool Reset); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWpnRarity(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStatChanged_F171C56748FEA3E19F93088E968D3E21(FName StatName, int32_t StatValue); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MeleeSwingRight(bool First Right); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MeleeSwingLeft(bool First Left); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MeleeSwingRight_End(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MeleeSwingLeft_End(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayRClickImpacts(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEquippedWeaponDestory(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponAttached(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponDetached(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitWeaponCosmetics(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleKillWatch(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBasedOnKills(int32_t Watched Kills); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Anim Trails Notify(bool bActive); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Anim Trails Disable(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwingRight(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwingLeft(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwingRightEnd(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwingLeftEnd(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstigatorSet(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnUnEquip(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, UFXSystemComponent* SpawnedPSC); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleWeaponHolstered(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Vehicle Passenger(AFortPlayerPawn* FortPlayerPawn, AActor* NewVehicle, AActor* OldVehicle); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Legacy Anim Trail Setup(bool Activate); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Athena_Pickaxe_Generic(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_BuildingTools/DecoTool.DecoTool_C
	// Inherited from AFortDecoTool -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x1648 - 0x1648)
	class ADecoTool_C : public AFortDecoTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/DecoTool.DecoTool_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/Harvest_CameraShake.Harvest_CameraShake_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UHarvest_CameraShake_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Melee/Blueprints/Impact/Harvest_CameraShake.Harvest_CameraShake_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C
	// Inherited from AFortWeaponPickaxeDualWieldAthena -> AFortWeaponPickaxeAthena -> AFortWeapon -> AActor -> UObject
	// Size: 0xA1 (0x1BC1 - 0x1B20)
	class AB_Athena_Pickaxe_DualWield_Generic_C : public AFortWeaponPickaxeDualWieldAthena	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1B20(0x8)
		bool Equipped; // 0x1B28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1B29(0x7) UNKNOWN PROPERTY
		UNiagaraComponent* Alteration_Ambient_PS; // 0x1B30(0x8)
		UParticleSystem* MeleeHeavy_ParticleSystem; // 0x1B38(0x8)
		UParticleSystemComponent* MeleeHeavy_PSC; // 0x1B40(0x8)
		bool UseDestroyEffect; // 0x1B48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1B49(0x7) UNKNOWN PROPERTY
		UParticleSystem* WeaponDurabilityDestroyEffect; // 0x1B50(0x8)
		UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x1B58(0x8)
		UNiagaraComponent* Offhand_Alteration_Ambient_PS; // 0x1B60(0x8)
		bool bEquipPendingInstigator; // 0x1B68(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1B69(0x3) UNKNOWN PROPERTY
		FName Offhand_Socket_Name; // 0x1B6C(0x4)
		UAnimMontage* MontageReference; // 0x1B70(0x8)
		bool UseTimeofDayControl; // 0x1B78(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1B79(0x7) UNKNOWN PROPERTY
		UFXSystemComponent* Impact_FX; // 0x1B80(0x8)
		bool Swing_Right_; // 0x1B88(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1B89(0x7) UNKNOWN PROPERTY
		FRotator Left_Swing_Rotation; // 0x1B90(0x18)
		FRotator Right_Swing_Rotation; // 0x1BA8(0x18)
		bool Swing_Right_; // 0x1BC0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C");
			return ret;
		}

		void Binding Time of Day Control(bool Bind / Unbind (T/F)); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWpnRarity(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Unbind Dual Melee Swing Events(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Bind Dual Melee Swing Events(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Active Alteration Idle Particles(bool Active, bool Reset); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStatChanged_9F72D14C4573F491E38302B51F08A0B8(FName StatName, int32_t StatValue); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayRClickImpacts(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEquippedWeaponDestory(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponAttached(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponDetached(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitWeaponCosmetics(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Swing Left End(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Swing Right End(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstigatorSet(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnUnEquip(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwingRight_Common(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwingLeft_Common(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Swing Left(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Swing Right(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Swing Left 2(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Swing Right 2(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Anim Trails Notify(bool bActive); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Anim Trails Disable(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, UFXSystemComponent* SpawnedPSC); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleKillWatch(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBasedOnKills(int32_t Watched Kills); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Vehicle Passenger(AFortPlayerPawn* FortPlayerPawn, AActor* NewVehicle, AActor* OldVehicle); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/PossessProp/Creative_Player_PropInterface.Creative_Player_PropInterface_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCreative_Player_PropInterface_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/PossessProp/Creative_Player_PropInterface.Creative_Player_PropInterface_C");
			return ret;
		}

		void PreDestroy(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /BRCosmetics/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Style.VariantScript_Pickaxe_BistroAstronaut_Style_C
	// Inherited from UFortLoadoutTagDrivenVariantScript -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVariantScript_Pickaxe_BistroAstronaut_Style_C : public UFortLoadoutTagDrivenVariantScript	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/BRCosmetics/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Style.VariantScript_Pickaxe_BistroAstronaut_Style_C");
			return ret;
		}

		FGameplayTag DetermineVariantSelection(FFortAthenaLoadout& Loadout); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /BRCosmetics/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Color.VariantScript_Pickaxe_BistroAstronaut_Color_C
	// Inherited from UFortLoadoutTagDrivenVariantScript -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVariantScript_Pickaxe_BistroAstronaut_Color_C : public UFortLoadoutTagDrivenVariantScript	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/BRCosmetics/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Color.VariantScript_Pickaxe_BistroAstronaut_Color_C");
			return ret;
		}

		FGameplayTag DetermineVariantSelection(FFortAthenaLoadout& Loadout); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/DeleteObjects/CreativeInteraction_Delete.CreativeInteraction_Delete_C
	// Inherited from UDeleteObjects -> UObjectInteractionBehavior -> UActorComponent -> UObject
	// Size: 0x40 (0x180 - 0x140)
	class UCreativeInteraction_Delete_C : public UDeleteObjects	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x8)
		TArray<AActor*> ReadyToBeDeleted; // 0x148(0x10)
		TArray<AActor*> BatchActorsToDestroyOnServer; // 0x158(0x10)
		FTimerHandle BatchDestroyOnServerTimerHandle; // 0x168(0x8)
		TArray<UMeshComponent*> DeleteActorMeshComponentList; // 0x170(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/DeleteObjects/CreativeInteraction_Delete.CreativeInteraction_Delete_C");
			return ret;
		}

		void QueueActorForDestroyOnServer(AActor* ActorToDestroy); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BatchDestroyActorsOnServer(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyAndDontRemove(AActor* ActorToDestroy); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyActorOnAnimationFinished(AActor* ActorToDestroy); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartCreativeInteractionOnClient(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destroy Actor(AActor* ActorToDestroy); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ServerPlayDeleteAnim(); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_CreativeInteraction_Delete(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/B_CreativeMoveTool_Athena.B_CreativeMoveTool_Athena_C
	// Inherited from AB_CreativeInteractionTool_Base_C -> AFortCreativeMoveTool -> AFortWeapon -> AActor -> UObject
	// Size: 0x70 (0x2508 - 0x2498)
	class AB_CreativeMoveTool_Athena_C : public AB_CreativeInteractionTool_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2498(0x8)
		UCreativeInteraction_PlaysetPreview_C* CreativeInteraction_PlaysetPreview; // 0x24A0(0x8)
		UCreativeInteraction_MoveObjectsFreely_C* CreativeInteraction_MoveObjectsFreely; // 0x24A8(0x8)
		UCreativeInteraction_Delete_C* CreativeInteraction_Delete; // 0x24B0(0x8)
		UCreativeInteraction_MoveBuildingsOnGrid_C* CreativeInteraction_MoveBuildingsOnGrid; // 0x24B8(0x8)
		bool HasPlayedHitTraceRuleSound; // 0x24C0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x24C1(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate GravityToggleChanged; // 0x24C8(0x10)
		int32_t Multi_Selected_Count; // 0x24D8(0x4)
		bool bWasScaling; // 0x24DC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x24DD(0x3) UNKNOWN PROPERTY
		TArray<AActor*> PosessedActorsForPlacementPrevious; // 0x24E0(0x10)
		TArray<bool> IsPosessedActorPlacementValidPrevious; // 0x24F0(0x10)
		double MultiselectHighlightDelay; // 0x2500(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/B_CreativeMoveTool_Athena.B_CreativeMoveTool_Athena_C");
			return ret;
		}

		void UpdatePreviewerRotationGuides(AB_CreativeMoveTool_BlueprintPreviewer_C* BlueprintPreviewer); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnPlaysetOnPlayer(FFortItemEntry PlaysetItemEntry); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveMeshComponents(TArray<UMeshComponent*>& MeshComponents, TArray<UMeshComponent*>& ArrayToRemoveFrom); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddMeshComponents (TArray<UMeshComponent*>& MeshComponents, TArray<UMeshComponent*>& ArrayToAddTo); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsComponentStillHighlighted(TArray<UMeshComponent*>& MeshComponents, bool& Value); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TrackValidPlacements(AActor* ActorForPlacement, bool ValidPlacement); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_E3775BA448F14810E251D0B6517A6B04(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_E3775BA448F14810E251D0B640BB258B(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_E3775BA448F14810E251D0B6CF812D21(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePushPressed(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePullPressed(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRotateSwitchAxisPressed(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePrecisionModePressed(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDropToFloorPressed(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePrecisionModeReleased(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleExitHeldDownLongEnough(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleScaleUpPressed(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleScaleDownPressed(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleScaleUpReleased(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleScaleDownReleased(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Scale Up Modifier Audio(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleScaleSwitchAxisPressed(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateRotationAxis(char Rotation Axis); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScaleInsteadOfRotate(bool Scale); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleClearMultiSelectQueuePressed(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCopyPickupPressed(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleHitTraceRuleHeldDownLongEnough(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleHitTraceRulePressed(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayPrecisionFX(bool On, char PrecisionLevel); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAddToQuickBarPressed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleResetScalePressed(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleResetRotationPressed(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnObjectPlacement(TArray<UMeshComponent*>& Components, FOriginalAndSpawnedPair NewlyPlacedActorPair); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnValidPlacementChanged(bool bValidPlacement); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDeleteVisuals(TArray<UMeshComponent*>& MeshComponents); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAllowGravityToggleChanged(bool bAllowGravity); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EventOnAddedSelectedActor(AActor* Actor, int32_t NumSelected); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemoveHighlightSelectedActor(AActor* SelectedActor, TArray<UMeshComponent*>& SelectedComponents); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EventOnRemovedSelectedActor(AActor* Actor, int32_t NumSelected); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EventOnCouldNotAddActor(AActor* Actor, int32_t NumSelected); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ServerPlayGameplayAbility(UObjectInteractionBehavior* ObjectInteractionBehavior, UClass* NumSelected); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHighlightSelectedActor(AActor* SelectedActor, TArray<UMeshComponent*>& SelectedComponents); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSelectedActorsCleared_Event(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnValidPlacementChangedActorInstance(AActor* ActorForPlacement, bool ValidPlacement); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CallEventOnValidPlacementChanged(bool ValidPlacement); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePlaysetSelected(FFortItemEntry PlaysetItemEntry); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRotateClockwisePressed(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRotateClockwiseReleased(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRotateCounterclockwiseReleased(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRotateCounterclockwisePressed(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRotateSingleClockwisePressed(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRotateSingleCounterclockwisePressed(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRotateSingleClockwiseReleased(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRotateSingleCounterclockwiseReleased(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_CreativeMoveTool_Athena(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GravityToggleChanged__DelegateSignature(bool AllowGravity); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/MoveObjectsFreely/CreativeInteraction_MoveObjectsFreely.CreativeInteraction_MoveObjectsFreely_C
	// Inherited from UMoveObjectsFreely -> UObjectInteractionBehavior -> UActorComponent -> UObject
	// Size: 0x58 (0x188 - 0x130)
	class UCreativeInteraction_MoveObjectsFreely_C : public UMoveObjectsFreely	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x130(0x8)
		TMap<AActor*, AB_CreativeMoveTool_BlueprintPreviewer_C*> ActiveBlueprintPreviewerMap; // 0x138(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/MoveObjectsFreely/CreativeInteraction_MoveObjectsFreely.CreativeInteraction_MoveObjectsFreely_C");
			return ret;
		}

		void FindActiveBlueprintPreviewFromMap(AActor* PropActor, bool& Success, AB_CreativeMoveTool_BlueprintPreviewer_C* BlueprintPreview); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Return Blueprint Preview to Pool(AActor* PropActor, AB_CreativeMoveTool_BlueprintPreviewer_C* PreviewToPool); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetBlueprintPreviewFromPool(TArray<UMeshComponent*>& MeshComponents, AActor* PropActor, TEnumAsByte<Enum_CreativeMoveTool_PreviewFX> SpawnTransitionState, FTransform ActorWorldTransform); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EndCreativeInteraction(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDuplicateActor(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReturnBlueprintPreviewToPoolDispatchEvent(AActor* Prop Actor, AB_CreativeMoveTool_BlueprintPreviewer_C* Preview); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartCreativeInteractionOnServer(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Server Set State(AB_CreativeMoveTool_BlueprintPreviewer_C* Preview, TEnumAsByte<Enum_CreativeMoveTool_PreviewFX> FX State); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnedObjectEffects(TArray<UMeshComponent*>& Components, FTransform ActorWorldTransform, AActor* SpawnedActor); // Flags: Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerInteractionBehavior(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnObjectPlacement(TArray<UMeshComponent*>& Components, FOriginalAndSpawnedPair NewlyPlacedActorPair); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_CreativeInteraction_MoveObjectsFreely(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/MoveBuildingsOnGrid/CreativeInteraction_MoveBuildingsOnGrid.CreativeInteraction_MoveBuildingsOnGrid_C
	// Inherited from UMoveBuildingsOnGrid -> UObjectInteractionBehavior -> UActorComponent -> UObject
	// Size: 0x68 (0x1F8 - 0x190)
	class UCreativeInteraction_MoveBuildingsOnGrid_C : public UMoveBuildingsOnGrid	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x190(0x8)
		TArray<AB_CreativeMoveTool_BlueprintPreviewer_C*> PooledBlueprintPreviewers; // 0x198(0x10)
		TMap<AActor*, AB_CreativeMoveTool_BlueprintPreviewer_C*> ActiveBlueprintPreviewerMap; // 0x1A8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/MoveBuildingsOnGrid/CreativeInteraction_MoveBuildingsOnGrid.CreativeInteraction_MoveBuildingsOnGrid_C");
			return ret;
		}

		void ReturnBlueprintPreviewToPool(AActor* PropActor, AB_CreativeMoveTool_BlueprintPreviewer_C* PreviewToPool); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FindActiveBlueprintPreviewFromMap(AActor* Prop Actor, bool& Success, AB_CreativeMoveTool_BlueprintPreviewer_C* BlueprintPreview); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnBlueprintPreview(TArray<UMeshComponent*>& MeshComponents, AActor* Prop Actor, TEnumAsByte<Enum_CreativeMoveTool_PreviewFX> SpawnTransitionState, AB_CreativeMoveTool_BlueprintPreviewer_C* FoundPreview); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EndCreativeInteraction(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDuplicateActor(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReturnBlueprintPreviewToPoolDispatchEvent(AActor* Prop Actor, AB_CreativeMoveTool_BlueprintPreviewer_C* Preview); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartCreativeInteractionOnServer(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Server Set State(AB_CreativeMoveTool_BlueprintPreviewer_C* Preview, TEnumAsByte<Enum_CreativeMoveTool_PreviewFX> FX State); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnedObjectEffects(TArray<UMeshComponent*>& Components); // Flags: Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerInteractionBehavior(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnObjectPlacement(TArray<UMeshComponent*>& Components, FOriginalAndSpawnedPair NewlyPlacedActorPair); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_CreativeInteraction_MoveBuildingsOnGrid(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/B_CreativeMoveTool_BlueprintPreviewer.B_CreativeMoveTool_BlueprintPreviewer_C
	// Inherited from AActor -> UObject
	// Size: 0x884 (0xB14 - 0x290)
	class AB_CreativeMoveTool_BlueprintPreviewer_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		UStaticMeshComponent* PivotHelper; // 0x298(0x8)
		UStaticMeshComponent* ScaleGuide; // 0x2A0(0x8)
		UStaticMeshComponent* RotationGuide; // 0x2A8(0x8)
		UStaticMeshComponent* ShadowPlane; // 0x2B0(0x8)
		UStaticMeshComponent* GravityGuide; // 0x2B8(0x8)
		UStaticMeshComponent* GridAxisGuide; // 0x2C0(0x8)
		UPointLightComponent* TransitionLight; // 0x2C8(0x8)
		UParticleSystemComponent* TransitionParticles; // 0x2D0(0x8)
		USceneComponent* DefaultSceneRoot; // 0x2D8(0x8)
		float TransitionToIntermediateTL_LERP_8865C8FD47782A8CE3F9F5871CD0FE79; // 0x2E0(0x4)
		TEnumAsByte<ETimelineDirection> TransitionToIntermediateTL__Direction_8865C8FD47782A8CE3F9F5871CD0FE79; // 0x2E4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2E5(0x3) UNKNOWN PROPERTY
		UTimelineComponent* TransitionToIntermediateTL; // 0x2E8(0x8)
		float FadeGravityLineTL_LERP_F9E50C7540D0C3E37CEF65921B9B40EA; // 0x2F0(0x4)
		TEnumAsByte<ETimelineDirection> FadeGravityLineTL__Direction_F9E50C7540D0C3E37CEF65921B9B40EA; // 0x2F4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2F5(0x3) UNKNOWN PROPERTY
		UTimelineComponent* FadeGravityLineTL; // 0x2F8(0x8)
		float FadeScaleGuideTL_Lerp_4F2B28A54E2080EEA17B7AAEC1867F51; // 0x300(0x4)
		TEnumAsByte<ETimelineDirection> FadeScaleGuideTL__Direction_4F2B28A54E2080EEA17B7AAEC1867F51; // 0x304(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x305(0x3) UNKNOWN PROPERTY
		UTimelineComponent* FadeScaleGuideTL; // 0x308(0x8)
		float ScaleGuideAxisTL_Opacity_0749250645F1A8D932A112997E7E2BE6; // 0x310(0x4)
		float ScaleGuideAxisTL_LerpColor_0749250645F1A8D932A112997E7E2BE6; // 0x314(0x4)
		TEnumAsByte<ETimelineDirection> ScaleGuideAxisTL__Direction_0749250645F1A8D932A112997E7E2BE6; // 0x318(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x319(0x7) UNKNOWN PROPERTY
		UTimelineComponent* ScaleGuideAxisTL; // 0x320(0x8)
		float RotationGuideOrientationTL_Lerp_B2323BF94CE0E5B570A72B87FE996E34; // 0x328(0x4)
		TEnumAsByte<ETimelineDirection> RotationGuideOrientationTL__Direction_B2323BF94CE0E5B570A72B87FE996E34; // 0x32C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x32D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* RotationGuideOrientationTL; // 0x330(0x8)
		float FadeRotationGuideTL_Opacity_902917464662C3263B252A87802DDF26; // 0x338(0x4)
		TEnumAsByte<ETimelineDirection> FadeRotationGuideTL__Direction_902917464662C3263B252A87802DDF26; // 0x33C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x33D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* FadeRotationGuideTL; // 0x340(0x8)
		float UpdateGridePreviewScaleTL_lerp_B97C36B14272ADE425980E8227E40482; // 0x348(0x4)
		TEnumAsByte<ETimelineDirection> UpdateGridePreviewScaleTL__Direction_B97C36B14272ADE425980E8227E40482; // 0x34C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x34D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* UpdateGridePreviewScaleTL; // 0x350(0x8)
		float DropPropTL_LERP_A760E59A490C2590938E33A5A7181602; // 0x358(0x4)
		TEnumAsByte<ETimelineDirection> DropPropTL__Direction_A760E59A490C2590938E33A5A7181602; // 0x35C(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x35D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* DropPropTL; // 0x360(0x8)
		float LerpGridTL_Lerp_707BED8C4257FC8D9CE63DB7E73CD878; // 0x368(0x4)
		TEnumAsByte<ETimelineDirection> LerpGridTL__Direction_707BED8C4257FC8D9CE63DB7E73CD878; // 0x36C(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x36D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* LerpGridTL; // 0x370(0x8)
		float ScaleGridPreviewTL_Scale_BFD3FCEE4CBE08C2F070878F7880947C; // 0x378(0x4)
		TEnumAsByte<ETimelineDirection> ScaleGridPreviewTL__Direction_BFD3FCEE4CBE08C2F070878F7880947C; // 0x37C(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x37D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* ScaleGridPreviewTL; // 0x380(0x8)
		FLinearColor DeleteTL_LightColor_C0DFA64042C583D7520F1DB50299A12B; // 0x388(0x10)
		float DeleteTL_RelativeLocation_C0DFA64042C583D7520F1DB50299A12B; // 0x398(0x4)
		float DeleteTL_Desaturation_C0DFA64042C583D7520F1DB50299A12B; // 0x39C(0x4)
		float DeleteTL_BlueprintTransition_C0DFA64042C583D7520F1DB50299A12B; // 0x3A0(0x4)
		float DeleteTL_WPOTransition_C0DFA64042C583D7520F1DB50299A12B; // 0x3A4(0x4)
		TEnumAsByte<ETimelineDirection> DeleteTL__Direction_C0DFA64042C583D7520F1DB50299A12B; // 0x3A8(0x1)
		unsigned char UnknownData10_6[0x7]; // 0x3A9(0x7) UNKNOWN PROPERTY
		UTimelineComponent* DeleteTL; // 0x3B0(0x8)
		float DuplicateTL_DiffuseAdd_2B6DAC7945A098F9B1600F80A78093FD; // 0x3B8(0x4)
		float DuplicateTL_GridIntensity_2B6DAC7945A098F9B1600F80A78093FD; // 0x3BC(0x4)
		TEnumAsByte<ETimelineDirection> DuplicateTL__Direction_2B6DAC7945A098F9B1600F80A78093FD; // 0x3C0(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x3C1(0x7) UNKNOWN PROPERTY
		UTimelineComponent* DuplicateTL; // 0x3C8(0x8)
		float TransitionTL_LightLERP_7D6B23FD408EA93E509FB892C1C0DE89; // 0x3D0(0x4)
		float TransitionTL_ParticleRelativeLocation_7D6B23FD408EA93E509FB892C1C0DE89; // 0x3D4(0x4)
		float TransitionTL_Material_LERP_7D6B23FD408EA93E509FB892C1C0DE89; // 0x3D8(0x4)
		TEnumAsByte<ETimelineDirection> TransitionTL__Direction_7D6B23FD408EA93E509FB892C1C0DE89; // 0x3DC(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x3DD(0x3) UNKNOWN PROPERTY
		UTimelineComponent* TransitionTL; // 0x3E0(0x8)
		TArray<UMeshComponent*> MeshComponents; // 0x3E8(0x10)
		UMeshComponent* CurrentMeshComponent; // 0x3F8(0x8)
		UStaticMeshComponent* CurrentStaticMeshComponent; // 0x400(0x8)
		TArray<UStaticMeshComponent*> StaticMeshComponents; // 0x408(0x10)
		UStaticMeshComponent* CurrentBlueprintStaticMeshComponent; // 0x418(0x8)
		int32_t CurrentIndex; // 0x420(0x4)
		unsigned char UnknownData13_6[0x4]; // 0x424(0x4) UNKNOWN PROPERTY
		TArray<UMaterialInstanceDynamic*> MeshComponentMIDs; // 0x428(0x10)
		TArray<UMaterialInstanceDynamic*> BlueprintMIDs; // 0x438(0x10)
		AFortCreativeMoveTool* CreativeInteractionTool; // 0x448(0x8)
		double MaxLocalBoundsZ; // 0x450(0x8)
		double TransitionPlayrateHeightDivisor; // 0x458(0x8)
		USkeletalMesh* CurrentSkeletalMeshObject; // 0x460(0x8)
		TArray<USkeletalMesh*> SkeletalMeshObjects; // 0x468(0x10)
		USkeletalMeshComponent* CurrentBlueprintSkeletalMeshComonent; // 0x478(0x8)
		bool isStaticMeshComponent; // 0x480(0x1)
		bool isSkelatalMeshComponent; // 0x481(0x1)
		unsigned char UnknownData14_6[0x6]; // 0x482(0x6) UNKNOWN PROPERTY
		double MaxLocalBoundsXY; // 0x488(0x8)
		FVector ComponentOrigin; // 0x490(0x18)
		FVector TransitionParticleVelocity; // 0x4A8(0x18)
		double MaxLocalBoundsXYFudgeFactor; // 0x4C0(0x8)
		double SpawnRateScaleBase; // 0x4C8(0x8)
		bool RenderComponent; // 0x4D0(0x1)
		unsigned char UnknownData15_6[0x7]; // 0x4D1(0x7) UNKNOWN PROPERTY
		double TransitionLengthForward; // 0x4D8(0x8)
		double TransitionLengthBackward; // 0x4E0(0x8)
		FTimerHandle DelayBeforeReturningToPoolHandle; // 0x4E8(0x8)
		FMulticastInlineDelegate ReturnToPoolDispatcher; // 0x4F0(0x10)
		bool ActorIsProp; // 0x500(0x1)
		unsigned char UnknownData16_6[0x7]; // 0x501(0x7) UNKNOWN PROPERTY
		AActor* PropOwningActor; // 0x508(0x8)
		double TransitionLightIntensity; // 0x510(0x8)
		double MaxComponentRadius; // 0x518(0x8)
		double DelayBeforeReturningToPool; // 0x520(0x8)
		double TransitionLengthDeleteScale; // 0x528(0x8)
		FLinearColor DiffuseTint; // 0x530(0x10)
		FLinearColor DiffuseTintColorDesaturated; // 0x540(0x10)
		FTimerHandle DestroySelfTimerHandle; // 0x550(0x8)
		FLinearColor DraftColorDesaturated; // 0x558(0x10)
		FLinearColor DraftColor; // 0x568(0x10)
		AActor* BaseActor; // 0x578(0x8)
		UObjectInteractionBehavior* CreativeInteraction; // 0x580(0x8)
		TEnumAsByte<Enum_CreativeMoveTool_PreviewFX> FXState; // 0x588(0x1)
		unsigned char UnknownData17_6[0x7]; // 0x589(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate DeleteAnimationFinished; // 0x590(0x10)
		FTransform MeshComponentTransform; // 0x5A0(0x60)
		UMaterialInstanceDynamic* CurrentBlueprintMID; // 0x600(0x8)
		double MinPlaybackSpeed; // 0x608(0x8)
		double MaxPlaybackSpeed; // 0x610(0x8)
		unsigned char UnknownData18_6[0x8]; // 0x618(0x8) UNKNOWN PROPERTY
		FTransform DropEndTransform; // 0x620(0x60)
		TMap<UMaterialInterface*, UMeshComponent*> OriginalMeshComponentMaterials; // 0x680(0x50)
		TWeakObjectPtr<UMaterial*> 4LayerMaterial; // 0x6D0(0x20)
		FLinearColor DiffuseTintInvalid; // 0x6F0(0x10)
		FLinearColor DraftColorInvalid; // 0x700(0x10)
		bool IsPlacementValid; // 0x710(0x1)
		unsigned char UnknownData19_6[0x7]; // 0x711(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* GridPreviewMID; // 0x718(0x8)
		FVector ComponentTrueCenter; // 0x720(0x18)
		double MinimumGridPlacementScale; // 0x738(0x8)
		TArray<UMeshComponent*> BlueprintMeshComponents; // 0x740(0x10)
		FVector GridPreviewBoundsScale; // 0x750(0x18)
		double GetGridIntensity; // 0x768(0x8)
		double PreviousGridSize; // 0x770(0x8)
		AB_CreativeMoveTool_Athena_C* PhoneTool; // 0x778(0x8)
		double ShadowPlaneScaleFudgeFactor; // 0x780(0x8)
		FVector ShadowPlaneLocationOffset; // 0x788(0x18)
		TArray<int32_t> OriginalMeshComponentMaterialIDs; // 0x7A0(0x10)
		double DropDistancePerSecond; // 0x7B0(0x8)
		double DropParticlesBurstRate; // 0x7B8(0x8)
		FVector GravityLineTraceBias; // 0x7C0(0x18)
		double MinimumDistanceToSpawnParticlesOnDrop; // 0x7D8(0x8)
		double ShadowPlaneZOffset; // 0x7E0(0x8)
		TArray<TWeakObjectPtr> NonOpaqueMaterialsToRender; // 0x7E8(0x10)
		double DropTimelineMin; // 0x7F8(0x8)
		double DropTimelineMax; // 0x800(0x8)
		FRotator CurrentRotationGuideRotation; // 0x808(0x18)
		UMaterialInstanceDynamic* RotationGuideMID; // 0x820(0x8)
		FLinearColor CurrentRotationGuideAxisColor; // 0x828(0x10)
		FTimerHandle DelayBeforeCallingFadeOutRotation; // 0x838(0x8)
		double DelayBeforeHidingRotationGuide; // 0x840(0x8)
		double CurrentRotationGuideOpacity; // 0x848(0x8)
		double DelayBeforeFadeRotationGuideIn; // 0x850(0x8)
		bool RotationClockwisePressed; // 0x858(0x1)
		bool RotationCounterclockwisePressed; // 0x859(0x1)
		unsigned char UnknownData20_6[0x2]; // 0x85A(0x2) UNKNOWN PROPERTY
		FLinearColor RotateZColor; // 0x85C(0x10)
		FLinearColor RotateYColor; // 0x86C(0x10)
		FLinearColor RotateXColor; // 0x87C(0x10)
		unsigned char UnknownData21_6[0x4]; // 0x88C(0x4) UNKNOWN PROPERTY
		double DelayBeforeFadeOutInGridSnapMode; // 0x890(0x8)
		UMaterialInstanceDynamic* ScaleGuideMID; // 0x898(0x8)
		FLinearColor CurrentActiveAxisValue; // 0x8A0(0x10)
		double DelayBeforeFadeScaleGuideOut; // 0x8B0(0x8)
		FTimerHandle DelayBeforeCallingFadeOutScale; // 0x8B8(0x8)
		FTimerHandle DelayBeforeFadeOutScale; // 0x8C0(0x8)
		double DelayBeforeFadeOutInFreeMode; // 0x8C8(0x8)
		FTimerHandle DelayBeforeFadeOutRotation; // 0x8D0(0x8)
		int32_t CurrentGridSize; // 0x8D8(0x4)
		bool RotationModeActive; // 0x8DC(0x1)
		bool ScaleModeActive; // 0x8DD(0x1)
		unsigned char UnknownData22_6[0x2]; // 0x8DE(0x2) UNKNOWN PROPERTY
		double CurrentScaleOpacity; // 0x8E0(0x8)
		bool isBillboardComponent; // 0x8E8(0x1)
		unsigned char UnknownData23_6[0x7]; // 0x8E9(0x7) UNKNOWN PROPERTY
		FVector2D CurrentBillboardComponentDrawSize; // 0x8F0(0x10)
		UWidgetComponent* CurrentWidgetObject; // 0x900(0x8)
		FVector CurrentGridAxisGuideRelativeRotation; // 0x908(0x18)
		double GravityGuideMinTraceDistance; // 0x920(0x8)
		UMaterialInstanceDynamic* ShadowPlaneMID; // 0x928(0x8)
		bool GravityModeActive; // 0x930(0x1)
		unsigned char UnknownData24_6[0x7]; // 0x931(0x7) UNKNOWN PROPERTY
		UStaticMeshComponent* ParticlePropHelper; // 0x938(0x8)
		FTransform DropStartTransform; // 0x940(0x60)
		FTimerHandle DropTimelineDelay; // 0x9A0(0x8)
		FTimerHandle DestroyPreview_TimerHandle; // 0x9A8(0x8)
		FVector ComponentBoundsMin; // 0x9B0(0x18)
		FVector ComponentBoundsMax; // 0x9C8(0x18)
		USkeletalMeshComponent* CurrentSkeletalMeshComponent; // 0x9E0(0x8)
		TArray<USkeletalMeshComponent*> CurrentSkeletalMeshComponents; // 0x9E8(0x10)
		TArray<USkeletalMeshComponent*> BlueprintSkeletalMeshComponents; // 0x9F8(0x10)
		TArray<UMaterialInstanceDynamic*> IntermediateMIDs; // 0xA08(0x10)
		TEnumAsByte<ETimelineDirection> CurrentDirection; // 0xA18(0x1)
		unsigned char UnknownData25_6[0x7]; // 0xA19(0x7) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> StaticMeshComponentsToOmitFromCopyingMaterialParameters; // 0xA20(0x10)
		bool IsAskingForDestruction; // 0xA30(0x1)
		unsigned char UnknownData26_6[0x7]; // 0xA31(0x7) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> NonOpaqueMaterialsToRender; // 0xA38(0x10)
		bool PlayTransitionBackwardWhenAnimationEnds; // 0xA48(0x1)
		bool WantsRestoreOriginalMaterialsWhenDestroy; // 0xA49(0x1)
		unsigned char UnknownData27_6[0x6]; // 0xA4A(0x6) UNKNOWN PROPERTY
		FVector RelativeLocationOfPivotPoint; // 0xA50(0x18)
		FRotator InitialRotationInverse; // 0xA68(0x18)
		TMap<UStaticMeshComponent*, FTransform> LockedStaticMeshComponents; // 0xA80(0x50)
		int32_t TickActiveRequests; // 0xAD0(0x4)
		unsigned char UnknownData28_6[0x4]; // 0xAD4(0x4) UNKNOWN PROPERTY
		UGeometryCollectionComponent* CurrentGeometryCollectionComponent; // 0xAD8(0x8)
		UGeometryCollectionComponent* CurrentBlueprintGeometryCollectionComponent; // 0xAE0(0x8)
		int32_t NumMeshesLoadingOnTarget; // 0xAE8(0x4)
		unsigned char UnknownData29_6[0x4]; // 0xAEC(0x4) UNKNOWN PROPERTY
		TArray<UStaticMeshComponent*> StandInTempStaticMeshComponents; // 0xAF0(0x10)
		TArray<UMaterialInstanceConstant*> ReplacementMaterialsFromActor; // 0xB00(0x10)
		int32_t PendingLoads; // 0xB10(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/B_CreativeMoveTool_BlueprintPreviewer.B_CreativeMoveTool_BlueprintPreviewer_C");
			return ret;
		}

		void GatherReplacementMaterials(TArray<TWeakObjectPtr>& SoftMaterialsToLoad); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CleanUpTemporaryStaticMeshComponentStandIns(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AttachGridAxisGuide(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UInstancedStaticMeshComponent HandleAddInstancedMeshComponent(UInstancedStaticMeshComponent* OriginalInstancedStaticMeshComp, int32_t Instances); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEditOnlyMeshAssetsLoaded(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		USplineMeshComponent HandleAddSplineMeshComponent(USplineMeshComponent* OriginalSplineMeshComp); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConfirmMeshComponents(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMoveToolScalingToggled(bool bScalingActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCreativeInteractionTool(AFortCreativeMoveTool* InCreativeInteractionTool); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetBlueprintGeometryCollectionComponentFromPool(int32_t IndexOfProxyToConvert); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetGeometryCollectionComponent(UMeshComponent* CurrentMeshComponent, int32_t IndexOfProxyToConvert, bool& Success); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Validate Mesh Components(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Attempt Set Tick Enabled(bool Enabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Rotation Locked Objects(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StaticMeshesComponentBoundsMinMax(USceneComponent* StaticMesh); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Actor Center(FVector& ComponentTrueCenter); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DoNotRestoreOriginalMaterialsWhenDestroy(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopTransitionAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetFirstActiveBlueprintPreviewForActor(AActor* ContextActor, bool ExcludeThisPreviewInstance, AB_CreativeMoveTool_BlueprintPreviewer_C* FoundPreview); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Check for Destruction Animation when Timeline Completed(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_MarkedToDestroy(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayTransitionBackwardWhenCurrentAnimationEnds(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IgnoreCopyingMaterialParameters(); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMeshComponentFromArray(int32_t Index, TArray<UMeshComponent*>& StaticMeshArray, UMeshComponent* Output, bool& FoundAndValid); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeIntermediateMaterials(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FTransform GetSceneComponentRelativeTransform(USceneComponent* InputPin); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector StaticMeshesComponentBoundMax(UStaticMeshComponent* StaticMesh); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector StaticMeshesComponentBoundsMin(UStaticMeshComponent* StaticMesh); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySkeletalMeshAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupPreview(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreatureVisualsLoaded(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetAbsoluteTransformsOnComponents(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetFXState(TEnumAsByte<Enum_CreativeMoveTool_PreviewFX>& FXState); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		double GetTransitionTime(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateFXState(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemovePreviewFromActiveBlueprintArrays(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ParticlePropHelperSetup(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHiddenInGameAllVisualHelpers(bool NewHidden); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector FindComponentOriginWS(USceneComponent* SceneComponent); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTextureParameter(FName Set Parameter Name, UMaterialInstanceDynamic* TargetMID, UTexture* Texture); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetBlueprintBillboardComponent(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetWidgetComponent(UMeshComponent* CurrentMeshComponent, bool& bSuccessful ); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Relative Location Of Pivot Point and Guides(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Guide Positions(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FLinearColor GetScaleGuideColor(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScaleGuideInitialSetup(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FLinearColor GetRotationGuideColor(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FRotator Get Rotation Guide World Rotation(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RotationGuideInitialSetup(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FindDropStartLocation(bool& PlayDropAnimation, double& DelayAmount); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetLocalPhoneTool(bool& Found, AB_CreativeMoveTool_Athena_C* PhoneTool); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetUpMeshComponentMIDS(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShadowPlaneSetup(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GravityGuideSetup(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GridAxisGuideSetup(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCurrentBlueprintMeshComponent(UMeshComponent* Output); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHiddenActorCosmetics(bool Hidden, bool ParticleComponents, bool LightComponents); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UMaterialInterface GetBlueprintMaterialByPlatform(UMaterialInterface* MaterialBeingOverwritten); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Calculate Grid Preview Scale(FVector& BoundsScaled); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetGridPreviewMID(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CopyMeshComponentMaterialParametersToBlueprint(UPrimitiveComponent* SourcePrimitiveComponent, int32_t Material ID, UMaterialInstanceDynamic* TargetMID); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RestoreOriginalMeshComponentMaterials(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StoreOriginalMeshComponentMaterials(bool SaveOriginalMaterials, int32_t MaterialIndex, UMeshComponent* Mesh Component); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldMeshComponentBeRendered(UMeshComponent* MeshComponent); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateMeshComponentMIDs(bool SaveOriginalMaterials, UMeshComponent* MeshComponent, int32_t Index, UMaterialInterface* MaterialInterface); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetGreatestMIDArrayIndex(int32_t& GreatestLastIndex); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDeleteAnimationFinished(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupCreativeInteractionReferences(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_FXState(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_BaseActor(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBoundsVariables(USceneComponent* Scene Component, UStaticMeshComponent* Static Mesh Component); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTransitionLightVisibility(bool bNewVisibility, bool bPropagateToChildren, bool SetRadius); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMidFromArray(int32_t Index, TArray<UMaterialInstanceDynamic*>& MIDArray, UMaterialInstanceDynamic* Output, bool& FoundAndValid); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void QueryMIDBlendMode(bool& Success); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupTransitionParticleParameters(bool bNewActive, bool bReset, bool Reverse); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearComponentVariablesOnLoop(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetBlueprintSkeletalMeshComponentFromPool(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSkeletalMeshComponent(UMeshComponent* CurrentMeshComponent, bool& Success); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetStaticMeshComponent(UMeshComponent* CurrentMeshComponent, bool& Success, bool& bDelayUntilAssetsLoaded); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTimelinePlayrateByObjectHeight(UTimelineComponent* Timeline, double SpeedScale); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBlueprintMeshComponentsVisibility(bool bNewVisibility, bool bPropagateToChildren); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMaterialsAndCopyParameters(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetBlueprintStaticMeshComponentFromPool(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearVariablesOnInitialSetup(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyBlueprintComponents(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetEndSafetyParameters(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsTransitionTimelineAtBeginning(bool& Result); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DetatchActorFromWallProp(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMeshComponentsVisibility(bool Visibility, bool bPropagateToChildren); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSetTextureParameter(UPrimitiveComponent* SourcePrimitiveComponent, int32_t Material ID, FName Get Parameter Name, FName Set Parameter Name, UMaterialInstanceDynamic* TargetMID, bool& Success); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsBuildingPiece(UStaticMeshComponent* BuildingMeshComponent, ABuildingSMActor* BuildPreviewMarkerActor, bool& bool); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateBlueprintPreview(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionToIntermediateTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionToIntermediateTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeleteTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeleteTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeleteTL__DisableShadows__EventFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DuplicateTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DuplicateTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateGridePreviewScaleTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateGridePreviewScaleTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LerpGridTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LerpGridTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScaleGridPreviewTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScaleGridPreviewTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DropPropTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DropPropTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeGravityLineTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeGravityLineTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeRotationGuideTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeRotationGuideTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RotationGuideOrientationTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RotationGuideOrientationTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeScaleGuideTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeScaleGuideTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScaleGuideAxisTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScaleGuideAxisTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_101B029245CA280759D1559483B3B333(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event Create Blueprint Preview(AFortCreativeMoveTool* CreativeInteractionTool, AActor* PropOwningActor); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReturnActorToPool(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReturnBlueprintPreviewToPoolDispatchEvent(AActor* Prop Actor, AB_CreativeMoveTool_BlueprintPreviewer_C* Preview); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyPreviewOnServerRPC(); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Server SetFXState With Notify(TEnumAsByte<Enum_CreativeMoveTool_PreviewFX> New FX State); // Flags: Net|NetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClientMakeDestroyOnServerRequest(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyPreview(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnParentBuildingAsPropSettingChanged(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnParentGridSnappingChanged(bool bPrecisionOn, char GridSnapIndex); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionToOriginalComplete(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitiontoIntermediateComplete(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayTransitionBetweenMeshes(TEnumAsByte<ETimelineDirection> Direction); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayTransitionToIntermediate(TEnumAsByte<ETimelineDirection> Direction); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResumeMaterialTransition(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitiateMaterialTransition(TEnumAsByte<ETimelineDirection> Direction); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionToDeleteComplete(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeleteObjectFromWorld(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DuplicateMaterialFlash(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopUpdateGridPreviewScale(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateGridPreviewScale(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RevealGrid(int32_t GridSize); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateMaterialValidBlueprintVisuals(bool IsPlacementValid); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GravityModeChanged(bool Gravity); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayDropTimeline(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeShadowPlaneOut(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeShadowPlaneIn(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeRotationGuideOutDelayReached(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeRotationGuideIn(bool Clockwise); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeRotationGuideOut(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateRotationGuideOrientation(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeScaleGuideOutDelayReached(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateScaleGuide(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeScaleGuideOut(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeScaleGuideIn(bool Scale Up); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_CreativeMoveTool_BlueprintPreviewer(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeleteAnimationFinished__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReturnToPoolDispatcher__DelegateSignature(AActor* PropOwningActor, AB_CreativeMoveTool_BlueprintPreviewer_C* Preview); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/B_CreativeInteractionTool_Base.B_CreativeInteractionTool_Base_C
	// Inherited from AFortCreativeMoveTool -> AFortWeapon -> AActor -> UObject
	// Size: 0x5D8 (0x2498 - 0x1EC0)
	class AB_CreativeInteractionTool_Base_C : public AFortCreativeMoveTool	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1EC0(0x8)
		UAudioComponent* Move_Tool_Highlight_Sound; // 0x1EC8(0x8)
		UAudioComponent* Move_Tool_Sound_B; // 0x1ED0(0x8)
		UAudioComponent* Move_Tool_Scale_Down; // 0x1ED8(0x8)
		UAudioComponent* Move_Tool_Scale_Up; // 0x1EE0(0x8)
		UAudioComponent* MoveToolLoopingSoundComponent; // 0x1EE8(0x8)
		UAudioComponent* Move_Tool_Sound_A; // 0x1EF0(0x8)
		UPostProcessComponent* HighlightPostProcess; // 0x1EF8(0x8)
		UStaticMeshComponent* Sm_CreativeMoveTool_Lightbeam; // 0x1F00(0x8)
		float QuickbarPulseTL_Lerp_4E5BB4E84DEC20CDA6A0F9817B18D6D9; // 0x1F08(0x4)
		TEnumAsByte<ETimelineDirection> QuickbarPulseTL__Direction_4E5BB4E84DEC20CDA6A0F9817B18D6D9; // 0x1F0C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1F0D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* QuickbarPulseTL; // 0x1F10(0x8)
		float ScreenFlashTL_LERP_A4B06B344C7D9EFE635FF4BD86AED88A; // 0x1F18(0x4)
		TEnumAsByte<ETimelineDirection> ScreenFlashTL__Direction_A4B06B344C7D9EFE635FF4BD86AED88A; // 0x1F1C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1F1D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* ScreenFlashTL; // 0x1F20(0x8)
		float TransitionTL_LERP_16CD3F074B64C6E61AE7BFA8C2DD1144; // 0x1F28(0x4)
		TEnumAsByte<ETimelineDirection> TransitionTL__Direction_16CD3F074B64C6E61AE7BFA8C2DD1144; // 0x1F2C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1F2D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* TransitionTL; // 0x1F30(0x8)
		bool OnHoverChangedCanInteract; // 0x1F38(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1F39(0x7) UNKNOWN PROPERTY
		double TransitionLengthIn; // 0x1F40(0x8)
		double TransitionLengthOut; // 0x1F48(0x8)
		UMeshComponent* CurrentMeshComponent; // 0x1F50(0x8)
		UStaticMeshComponent* Current_Blueprint_Static_Mesh_Component; // 0x1F58(0x8)
		UStaticMeshComponent* CurrentStaticMeshComponent; // 0x1F60(0x8)
		UMaterialInstanceDynamic* PhoneMID; // 0x1F68(0x8)
		FLinearColor ScreenSelectedColor; // 0x1F70(0x10)
		FLinearColor CurrentColor; // 0x1F80(0x10)
		FLinearColor DesiredColor; // 0x1F90(0x10)
		FLinearColor PreviousColor; // 0x1FA0(0x10)
		FLinearColor ScreenDeselectedColor; // 0x1FB0(0x10)
		UTexture* PreviousTexture; // 0x1FC0(0x8)
		UTexture* DesiredTexture; // 0x1FC8(0x8)
		UTexture* ScreenSelectedIcon; // 0x1FD0(0x8)
		UTexture* ScreenDeselectedIcon; // 0x1FD8(0x8)
		bool WasTransitionTimlinePlaying; // 0x1FE0(0x1)
		bool InteractionActive; // 0x1FE1(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x1FE2(0x6) UNKNOWN PROPERTY
		TArray<AB_CreativeMoveTool_BlueprintPreviewer_C*> Previews; // 0x1FE8(0x10)
		TMap<AActor*, AB_CreativeMoveTool_BlueprintPreviewer_C*> LocalPreviewMap; // 0x1FF8(0x50)
		AActor* SelectedActor; // 0x2048(0x8)
		FTransform EmptyTransform; // 0x2050(0x60)
		double LightBeamWidthMultiplier; // 0x20B0(0x8)
		int32_t CustomDepthStencilValue; // 0x20B8(0x4)
		bool CanPostProcessBeEnabledOnCurrentPlatform; // 0x20BC(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x20BD(0x3) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* LightBeamMID; // 0x20C0(0x8)
		FB_CreativeMoveTool_Cosmetics PhoneMaterialState; // 0x20C8(0x40)
		TArray<UMeshComponent*> SelectedMeshComponents; // 0x2108(0x10)
		bool BuildingPieceSelected; // 0x2118(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x2119(0x7) UNKNOWN PROPERTY
		FVector4 BuildingPieceCenterAndRadius; // 0x2120(0x20)
		FTransform BlueprintWorldTransform; // 0x2140(0x60)
		AFortTimeOfDayManager* LevelTODM; // 0x21A0(0x8)
		UMaterialInterface* LevelTODMBasePostProcessMaterial; // 0x21A8(0x8)
		double LightBeamMaxLength; // 0x21B0(0x8)
		bool IsPlacementValid; // 0x21B8(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x21B9(0x3) UNKNOWN PROPERTY
		FLinearColor BeamColorLow_Valid; // 0x21BC(0x10)
		FLinearColor BeamColorLow_Invalid; // 0x21CC(0x10)
		FLinearColor BeamColorHigh_Valid; // 0x21DC(0x10)
		FLinearColor BeamColorHigh_Invalid; // 0x21EC(0x10)
		FLinearColor ScreenInvalidColor; // 0x21FC(0x10)
		unsigned char UnknownData08_6[0x4]; // 0x220C(0x4) UNKNOWN PROPERTY
		UTexture* ScreenInvalidIcon; // 0x2210(0x8)
		FLinearColor ScreenDeleteColor; // 0x2218(0x10)
		UTexture* ScreenDeleteIcon; // 0x2228(0x8)
		TEnumAsByte<B_CreativeMoveTool_VisualState> PhoneVisualState; // 0x2230(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x2231(0x3) UNKNOWN PROPERTY
		FLinearColor ScreenMultiSelectColor; // 0x2234(0x10)
		FLinearColor BeamColorLow_Delete; // 0x2244(0x10)
		FLinearColor BeamColorHigh_Delete; // 0x2254(0x10)
		unsigned char UnknownData10_6[0x4]; // 0x2264(0x4) UNKNOWN PROPERTY
		FVector PreviousLocation; // 0x2268(0x18)
		FTimerHandle Handle_Scale_Up_Modifier; // 0x2280(0x8)
		bool InteractionCanOnlyDelete; // 0x2288(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x2289(0x7) UNKNOWN PROPERTY
		TArray<AB_CreativeMoveTool_BlueprintPreviewer_C*> ActiveBlueprintPreviewers; // 0x2290(0x10)
		int32_t CustomDepthStencilValueHighlighted; // 0x22A0(0x4)
		int32_t CustomDepthStencilValueMultiSelect; // 0x22A4(0x4)
		UMaterialInstanceDynamic* CurrentMeshComponentMID; // 0x22A8(0x8)
		FLinearColor CanOnlyDeleteBlueprintColor; // 0x22B0(0x10)
		FLinearColor MultiSelectBlueprintColor; // 0x22C0(0x10)
		int32_t CustomDepthStencilValueParticleProp; // 0x22D0(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x22D4(0x4) UNKNOWN PROPERTY
		TArray<UStaticMeshComponent*> LightbeamMeshPool; // 0x22D8(0x10)
		TArray<UMaterialInstanceDynamic*> LightbeamMIDPool; // 0x22E8(0x10)
		FLinearColor DefaultBlueprintColor; // 0x22F8(0x10)
		UTexture* ScreenMultiSelectIcon; // 0x2308(0x8)
		TArray<AB_CreativeMoveTool_BlueprintPreviewer_C*> PosessedBlueprintPreviewers; // 0x2310(0x10)
		USoundBase* CurrentMusic; // 0x2320(0x8)
		FLinearColor CurrentlyMultiselectedBlueprintColor; // 0x2328(0x10)
		UMaterialInterface* WeaponMeshMIDSourceMaterial; // 0x2338(0x8)
		bool bShouldRespondToWeaponVisibilityChanged; // 0x2340(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x2341(0x7) UNKNOWN PROPERTY
		TArray<AActor*> PosessedActorsForPlacement; // 0x2348(0x10)
		TArray<bool> IsPosessedActorPlacementValid; // 0x2358(0x10)
		double LightBeamMaxWidth; // 0x2368(0x8)
		FVector LightBeamLargestComponentScale; // 0x2370(0x18)
		TArray<AActor*> MultiselectValidQueuedActors; // 0x2388(0x10)
		TMap<UMaterialInstanceDynamic*, FLinearColor> CurrentlyAddedToQuickbarMIDs; // 0x2398(0x50)
		TArray<UMaterialInstanceDynamic*> CurrentlyAddedToQuickbarKeys; // 0x23E8(0x10)
		FLinearColor AddedToQuickbarHighlightColor; // 0x23F8(0x10)
		TArray<UMeshComponent*> CurrentlyAddedToQuickbarMeshComponents; // 0x2408(0x10)
		UParticleSystemComponent* AddedToQuickbarFX; // 0x2418(0x8)
		FLinearColor ScreenAddedToQuickbarColor; // 0x2420(0x10)
		UTexture* ScreenAddedToQuickbarIcon; // 0x2430(0x8)
		FB_CreativeMoveTool_Cosmetics PreviousPhoneMaterialState; // 0x2438(0x40)
		FTimerHandle DelayBeforeRevertingScreenStateHandle; // 0x2478(0x8)
		double DelayBeforeApplyingHover; // 0x2480(0x8)
		TArray<UMeshComponent*> NewHoveredComponents; // 0x2488(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/B_CreativeInteractionTool_Base.B_CreativeInteractionTool_Base_C");
			return ret;
		}

		void SetHighlightParametersForGeometryCollections(AActor* MeshComponentOwningActor, bool Highlighted, bool MultiSelected, bool ForceDeselect); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShouldRespondToVisilityChange(bool& Result); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Multi Selected Actor Material(AActor* SelectedActor, FLinearColor& MultiselectedBlueprintColor); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Active Blueprint Preview for Actor(AActor* Prop Actor, TArray<AB_CreativeMoveTool_BlueprintPreviewer_C*>& FoundBlueprintPreviews); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanUtilizeMoveToolSpawningFunctionality(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveEditorOnlyItems(TArray<UMeshComponent*>& ArrayToClean); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMeshComponentsFromActor(AActor* Actor, TArray<UMeshComponent*>& MeshComponents); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTransitionPlayRate(double& Value); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetInteractionActive(TEnumAsByte<B_CreativeMoveTool_VisualState> Index); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UTexture GetPhoneScreenIcon(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FLinearColor GetPhoneScreenBGColor(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		double GetXYBoundsExtent(USceneComponent* Component); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnAddedToQuickbarFX(UMeshComponent* MeshComponent); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CurrentMeshComponentIsCurrentlyHighlighted(UMeshComponent* MeshComponent); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCustomDepthAndStencil(UPrimitiveComponent* CurrentMeshComponentHover, AActor* MeshComponentOwningActor, bool Highlighted, bool Multiselect, TArray<AActor*>& ValidQueuedActorsAsArray, UMeshComponent* MeshComponent); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeComponentOut(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetComponentCustomDepthStencilValue(bool Multiselect, bool Highlighted, AActor* MeshComponentOwningActor, TArray<AActor*>& ValidQueuedActorsAsArray); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCurrentComponentMID(int32_t ElementIndex, UPrimitiveComponent* Component, UMaterialInstanceDynamic* AsMaterial Instance Dynamic); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetNumberOfMaterialsFromCurrentComponent(UPrimitiveComponent* Component); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeComponentIn(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetHighlightSound(TWeakObjectPtr<UObject*>& Sound); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetFirstActiveBlueprintPreviewersFirstMeshComponent(UMeshComponent* Output); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CurrentlyMultiselected(bool MultiSelected , AActor* MeshComponentOwningActorVar, TArray<AActor*>& ValidQueuedActors); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHighlightParametersForDecalProps(AActor* MeshComponentOwningActor, bool Highlighted); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHighlightParametersForParticleProps(AActor* MeshComponentOwningActor, bool Highlighted); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CleanupErrantRays(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRayMIDParams(UMaterialInstanceDynamic* RayMID); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Check For Multi Selection(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t NumberOfActivePreviews(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetLightbeamMesh(int32_t ActorIndex, UStaticMeshComponent* LightBeamMesh, UMaterialInstanceDynamic* LightBeamMID); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CanOnlyDelete(UObjectInteractionBehavior* Behavior, bool& CanOnlyDelete); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CanHoverBasedOnInteractionType(UObjectInteractionBehavior* Behavior, bool& Can Interact); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMeshVectorsForPostProcess(USceneComponent* Mesh, bool Multiselect); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FindTransitionPlayPosition(double duration, double& Value); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetEnableTODM_PostProcess(bool TODMPPEnabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScaleMeshLightRays(FVector WS Center Location, double Object Spherical Radius, int32_t ActorIndex); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_PhoneMaterialState(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OrientScaleLightBeamByMesh(UStaticMeshComponent* StaticMesh, int32_t ActorIndex); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPostProcess(bool ForceEnabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsLocallyControlled(bool& Result); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsBuildingPiece(UStaticMeshComponent* MeshComponent, bool& bool); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetStaticMeshCenterAndRadius(UStaticMeshComponent* StaticMesh, FVector& CenterWS, double& SphericalRadius); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddPreviewDeltaToMap(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_Previews(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupPhoneMaterialStates(TArray<UMeshComponent*>& MeshComponents, bool IsBuildingPiece, TEnumAsByte<B_CreativeMoveTool_VisualState> PhoneVisualState, int32_t NumberOfActivePreviews, TArray<AActor*>& PosessedActorsForPlacement, TArray<bool>& PosessedActorPlacementValid); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetPlayerRotationOffset(FRotator& RotationOffset); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOnHoverMaterialParams(TArray<UMeshComponent*>& MeshComponents, bool Highlighted, bool Multiselect, bool ForceDeselect); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScreenFlashTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScreenFlashTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void QuickbarPulseTL__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void QuickbarPulseTL__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_17972A914878C4A13846B3A1B0C4B70D(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_17972A914878C4A13846B3A1E3187E95(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_17972A914878C4A13846B3A168A25A43(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_17972A914878C4A13846B3A163D25A76(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_17972A914878C4A13846B3A12652C923(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHoverChanged(TArray<UMeshComponent*>& NewHoveredComponents, TArray<UMeshComponent*>& UnhoveredComponents, UObjectInteractionBehavior* ObjectInteraction); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInteractionStarted(TArray<UMeshComponent*>& Components); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePhoneMaterialState(FB_CreativeMoveTool_Cosmetics Struct); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInteractionFinished(TArray<UMeshComponent*>& Components); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FlashScreenOnDuplicate(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ServerSpawnPreview(AActor* ActorToCreatePreivewFor, UObjectInteractionBehavior* CreativeInteraction, TEnumAsByte<Enum_CreativeMoveTool_PreviewFX> InitialFXState, FTransform ActorWorldTransform); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopLight(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponAttached(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnUnEquip(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBuildingPieceLocationAndRadius(FVector4 Vec4); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBuildingPreviewTransform(FTransform Transform); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayMoveToolSoundBySoftObjectReference(TWeakObjectPtr<USoundBase*> Sound To Play); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveActiveBlueprintPreview(AB_CreativeMoveTool_BlueprintPreviewer_C* Previewer); // Flags: Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Play Highlight Sound(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetDoOnce_HideLightbeams(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAddedToQuickbar(TArray<UMeshComponent*>& Components); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DelayBeforeRevertingScreenState(double Time); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RevertScreenState(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ServerRemovePreviewFromActivePreviewMap(AB_CreativeMoveTool_BlueprintPreviewer_C* PreviewRemoved); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ServerBatchSpawnPreview(TArray<AActor*>& ActorListToCreatePreivewFor, UObjectInteractionBehavior* CreativeInteraction, TEnumAsByte<Enum_CreativeMoveTool_PreviewFX> InitialFXState); // Flags: Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Post Process(bool On); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_CreativeInteractionTool_Base(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBPi_CreativeMoveToolOverrides_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C");
			return ret;
		}

		void GetGridAxisGuideAttachmentPoint(bool& Override, bool& RelativeToCreativeActorOrigin, FVector& RelativeAttachLocation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCreativeActorRelativeTransform(bool& Override, FTransform& Transform); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCreativeActorBounds(bool& Override Bounds, FVector& Bounds); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCreativeActorOrigin(bool& Override, FVector& Center); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/DeleteObjects/GA_Delete_Click.GA_Delete_Click_C
	// Inherited from UGA_MoveTool_PlayAnimation_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xB58 - 0xB58)
	class UGA_Delete_Click_C : public UGA_MoveTool_PlayAnimation_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/DeleteObjects/GA_Delete_Click.GA_Delete_Click_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/PlaysetPreview/CreativeInteraction_PlaysetPreview.CreativeInteraction_PlaysetPreview_C
	// Inherited from UPlaysetPreview -> UObjectInteractionBehavior -> UActorComponent -> UObject
	// Size: 0x8 (0x1C8 - 0x1C0)
	class UCreativeInteraction_PlaysetPreview_C : public UPlaysetPreview	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/PlaysetPreview/CreativeInteraction_PlaysetPreview.CreativeInteraction_PlaysetPreview_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerInteractionBehavior(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartCreativeInteractionOnClient(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_CreativeInteraction_PlaysetPreview(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_Exit_Click.GA_Exit_Click_C
	// Inherited from UGA_MoveTool_PlayAnimation_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xB58 - 0xB58)
	class UGA_Exit_Click_C : public UGA_MoveTool_PlayAnimation_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_Exit_Click.GA_Exit_Click_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_Mirror_Click.GA_Mirror_Click_C
	// Inherited from UGA_MoveTool_PlayAnimation_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xB58 - 0xB58)
	class UGA_Mirror_Click_C : public UGA_MoveTool_PlayAnimation_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_Mirror_Click.GA_Mirror_Click_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_RotateClockwise_Click.GA_RotateClockwise_Click_C
	// Inherited from UGA_MoveTool_PlayAnimation_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xB58 - 0xB58)
	class UGA_RotateClockwise_Click_C : public UGA_MoveTool_PlayAnimation_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_RotateClockwise_Click.GA_RotateClockwise_Click_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_MoveTool_Empty.GA_MoveTool_Empty_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x10 (0xB50 - 0xB40)
	class UGA_MoveTool_Empty_C : public UFortGameplayAbility	
	{
	public:
		UAnimMontage* AnimationMontage; // 0xB40(0x8)
		USoundBase* SoundToPlay; // 0xB48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_MoveTool_Empty.GA_MoveTool_Empty_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_RotateCounterclockwise_Click.GA_RotateCounterclockwise_Click_C
	// Inherited from UGA_MoveTool_PlayAnimation_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xB58 - 0xB58)
	class UGA_RotateCounterclockwise_Click_C : public UGA_MoveTool_PlayAnimation_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_RotateCounterclockwise_Click.GA_RotateCounterclockwise_Click_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_Failed_Click.GA_Failed_Click_C
	// Inherited from UGA_MoveTool_PlayAnimation_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xB58 - 0xB58)
	class UGA_Failed_Click_C : public UGA_MoveTool_PlayAnimation_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_Failed_Click.GA_Failed_Click_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_Place_Click.GA_Place_Click_C
	// Inherited from UGA_MoveTool_PlayAnimation_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xB58 - 0xB58)
	class UGA_Place_Click_C : public UGA_MoveTool_PlayAnimation_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_Place_Click.GA_Place_Click_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_MoveTool_PlayAnimation.GA_MoveTool_PlayAnimation_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x18 (0xB58 - 0xB40)
	class UGA_MoveTool_PlayAnimation_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		UAnimMontage* AnimationMontage; // 0xB48(0x8)
		USoundBase* SoundToPlay; // 0xB50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/GA_MoveTool_PlayAnimation.GA_MoveTool_PlayAnimation_C");
			return ret;
		}

		void OnCancelled_DFA635DE471CE201E72C2790FEB45185(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInterrupted_DFA635DE471CE201E72C2790FEB45185(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBlendOut_DFA635DE471CE201E72C2790FEB45185(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBlendedIn_DFA635DE471CE201E72C2790FEB45185(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCompleted_DFA635DE471CE201E72C2790FEB45185(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_MoveTool_PlayAnimation(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/BPi_MoveToolInteraction.BPi_MoveToolInteraction_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBPi_MoveToolInteraction_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Prototype/ObjectMover/Blueprints/BPi_MoveToolInteraction.BPi_MoveToolInteraction_C");
			return ret;
		}

		void Set Post Process(bool On); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_GrenadeLaunchers/Blueprints/B_GrenadeLauncher_Generic_Athena_Parent.B_GrenadeLauncher_Generic_Athena_Parent_C
	// Inherited from AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x18 (0x21A8 - 0x2190)
	class AB_GrenadeLauncher_Generic_Athena_Parent_C : public AB_Ranged_Generic_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)
		UStaticMeshComponent* Reload_MagazineReload; // 0x2198(0x8)
		UStaticMeshComponent* Reload_Ammo; // 0x21A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_GrenadeLaunchers/Blueprints/B_GrenadeLauncher_Generic_Athena_Parent.B_GrenadeLauncher_Generic_Athena_Parent_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_RocketLauncher_Generic.B_RocketLauncher_Generic_C
	// Inherited from AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x28 (0x21B8 - 0x2190)
	class AB_RocketLauncher_Generic_C : public AB_Ranged_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2190(0x8)
		UParticleSystemComponent* RearMuzzle; // 0x2198(0x8)
		FRotator Rotation_Offset; // 0x21A0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_RocketLaunchers/Blueprints/B_RocketLauncher_Generic.B_RocketLauncher_Generic_C");
			return ret;
		}

		void Muzzle Flash FX(bool Persistent Fire); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_RocketLauncher_Generic(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C
	// Inherited from AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x38 (0x21C8 - 0x2190)
	class AB_RocketLauncher_Generic_Athena_HighTier_C : public AB_Ranged_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2190(0x8)
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2198(0x8)
		UArrowComponent* RearMuzzleLoc; // 0x21A0(0x8)
		UFXSystemAsset* RearMuzzleFXSystem; // 0x21A8(0x8)
		FVector RearMuzzleOffsetMultiplier; // 0x21B0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_RocketLaunchers/Blueprints/B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C");
			return ret;
		}

		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Muzzle Flash FX(bool Persistent Fire); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_RocketLauncher_Generic_Athena_HighTier(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_RocketLaunchers/Mesh/RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x90 (0x448 - 0x3B8)
	class URPG_Skeleton_AnimBlueprint_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F0(0x48)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_RocketLaunchers/Mesh/RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Generic.B_Assault_Generic_C
	// Inherited from AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x2190 - 0x2190)
	class AB_Assault_Generic_C : public AB_Ranged_Generic_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Generic.B_Assault_Generic_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Blueprints/Cameras/ShakeDataAssets/AR/AssaultRifleHipfireShakeData.AssaultRifleHipfireShakeData_C
	// Inherited from UWeaponFireCameraAnimationData_C -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UAssaultRifleHipfireShakeData_C : public UWeaponFireCameraAnimationData_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/Cameras/ShakeDataAssets/AR/AssaultRifleHipfireShakeData.AssaultRifleHipfireShakeData_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Blueprints/WeaponFunctionLibrary.WeaponFunctionLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWeaponFunctionLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/WeaponFunctionLibrary.WeaponFunctionLibrary_C");
			return ret;
		}

		void FindOrAddCameraModifierForPawn(UClass* ModifierClass, AActor* InPawnActor, UObject* __WorldContext, UCameraModifier* OutModifier); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HasValidCameraAnimationData(AFortWeapon* Weapon, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FindOrAddCameraModifier(UClass* ModifierClass, AFortWeapon* InWeapon, UObject* __WorldContext, UCameraModifier* OutModifier); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FiringCameraShake(AFortWeaponRanged* Weapon, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Blueprints/WeaponCameraAnimationComponent.WeaponCameraAnimationComponent_C
	// Inherited from UFortWeaponCameraAnimationComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x110 - 0xE0)
	class UWeaponCameraAnimationComponent_C : public UFortWeaponCameraAnimationComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xE0(0x8)
		UClass* HipfireShakeData; // 0xE8(0x8)
		UClass* ADSShakeData; // 0xF0(0x8)
		UClass* NewTargetingCamera; // 0xF8(0x8)
		UClass* NewTargetingReloadCamera; // 0x100(0x8)
		UClass* NewBaseCamera; // 0x108(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/WeaponCameraAnimationComponent.WeaponCameraAnimationComponent_C");
			return ret;
		}

		void GetShakeDataClass(bool bIsHipFire, UClass* OutShakeDataClass); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Is Updated Feedback Enabled Old(bool& Enabled); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CallFiringCameraShake(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WeaponCameraAnimationComponent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Blueprints/Cameras/ShakeDataAssets/AR/AssaultRifleFireShake_ADS.AssaultRifleFireShake_ADS_C
	// Inherited from UWeaponFireCameraAnimationData_C -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UAssaultRifleFireShake_ADS_C : public UWeaponFireCameraAnimationData_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/Cameras/ShakeDataAssets/AR/AssaultRifleFireShake_ADS.AssaultRifleFireShake_ADS_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Blueprints/Cameras/WeaponCameraAnimation.WeaponCameraAnimation_C
	// Inherited from UFortWeaponCameraAnimation -> UCameraModifier -> UObject
	// Size: 0x28 (0x78 - 0x50)
	class UWeaponCameraAnimation_C : public UFortWeaponCameraAnimation	
	{
	public:
		double StartTime; // 0x50(0x8)
		UClass* ShakeData; // 0x58(0x8)
		double PreviousDeltaFOV; // 0x60(0x8)
		double IntensityTimer; // 0x68(0x8)
		double TimeBetweenShots; // 0x70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/Cameras/WeaponCameraAnimation.WeaponCameraAnimation_C");
			return ret;
		}

		void SetShakeDataParam(UClass* ShakeDataClass); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetInputParams(float StartTime, float PreviousDeltaFOV, float IntensityTimer, float TimeBetweenShots); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetInputParams(float& OutStartTime, float& OutPreviousDeltaFOV); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetCameraShakeData(UCurveFloat* RollCurve, UCurveFloat* FOVCurve, UCurveFloat* RollNoiseCurve, UCurveFloat* ContinuousFireIntensityCurve, float& RollNoiseTimescale); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Blueprints/Cameras/ShakeDataAssets/WeaponFireCameraAnimationData.WeaponFireCameraAnimationData_C
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UWeaponFireCameraAnimationData_C : public UPrimaryDataAsset	
	{
	public:
		UCurveFloat* RollCurve; // 0x30(0x8)
		UCurveFloat* FOVCurve; // 0x38(0x8)
		UCurveFloat* RollNoiseCurve; // 0x40(0x8)
		UCurveFloat* ContinuousFireIntensityCurve; // 0x48(0x8)
		double RollNoiseTimescale; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/Cameras/ShakeDataAssets/WeaponFireCameraAnimationData.WeaponFireCameraAnimationData_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Rifles/Mesh/SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x90 (0x448 - 0x3B8)
	class USK_MachineGun_Clip_Skeleton_AnimBlueprint_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F0(0x48)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Mesh/SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x792 (0xB4A - 0x3B8)
	class UBP_GrenadeLauncher_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C8(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3D0(0x8)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3D8(0x48)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x420(0x20)
		FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x440(0x128)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x568(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x588(0x48)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5D0(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5F8(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x620(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x648(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x670(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x698(0x28)
		FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x6C0(0x28)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6E8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x730(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x750(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x798(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7B8(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x800(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x820(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x868(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x888(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x8D0(0x20)
		FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x8F0(0x48)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x938(0x20)
		FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x958(0x10)
		FAnimNode_StateResult AnimGraphNode_StateResult; // 0x968(0x20)
		FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x988(0xC8)
		FAnimNode_Root AnimGraphNode_Root; // 0xA50(0x20)
		FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xA70(0xC8)
		double CylinderROT; // 0xB38(0x8)
		int32_t DrumPositionCount; // 0xB40(0x4)
		bool ShouldRotateToPos1; // 0xB44(0x1)
		bool ShouldRotateToPos2; // 0xB45(0x1)
		bool ShouldRotateToPos3; // 0xB46(0x1)
		bool ShouldRotateToPos4; // 0xB47(0x1)
		bool ShouldRotateToPos5; // 0xB48(0x1)
		bool ShouldRotateToPos6; // 0xB49(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimNotify_RotateDrum(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_GrenadeLauncher(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Generic.B_Pistol_Generic_C
	// Inherited from AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x2190 - 0x2190)
	class AB_Pistol_Generic_C : public AB_Ranged_Generic_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Generic.B_Pistol_Generic_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Skeleton_Templates/BP_Pistol_FC_SA.BP_Pistol_FC_SA_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x90 (0x448 - 0x3B8)
	class UBP_Pistol_FC_SA_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F0(0x48)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Skeleton_Templates/BP_Pistol_FC_SA.BP_Pistol_FC_SA_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Skeleton_Templates/BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x90 (0x448 - 0x3B8)
	class UBP_SniperRifle_FCSA_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F0(0x48)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Skeleton_Templates/BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Rifles/Mesh/SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0xA98 (0xE50 - 0x3B8)
	class USK_M249_Skeleton_Dynamic_AnimBP_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3D0(0x20)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x3F0(0x20)
		FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x410(0xB0)
		FAnimNode_Root AnimGraphNode_Root; // 0x4C0(0x20)
		FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x4E0(0x970)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Mesh/SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C");
			return ret;
		}

		void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Launcher_Pumpkin_RPG_Athena.B_Launcher_Pumpkin_RPG_Athena_C
	// Inherited from AB_RocketLauncher_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x20 (0x21D8 - 0x21B8)
	class AB_Launcher_Pumpkin_RPG_Athena_C : public AB_RocketLauncher_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x21B8(0x8)
		UNiagaraComponent* NS_PumpkinLauncher_EyeFire; // 0x21C0(0x8)
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x21C8(0x8)
		UNiagaraComponent* NS_RocketLauncher_DrunkenQuad_Muzzle_Back; // 0x21D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Launcher_Pumpkin_RPG_Athena.B_Launcher_Pumpkin_RPG_Athena_C");
			return ret;
		}

		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Muzzle Flash FX(bool Persistent Fire); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Launcher_Pumpkin_RPG_Athena(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_GrenadeLaunchers/Blueprints/B_GrenadeLauncher_Snowball_Athena.B_GrenadeLauncher_Snowball_Athena_C
	// Inherited from AB_GrenadeLauncher_Generic_Athena_Parent_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x21B0 - 0x21A8)
	class AB_GrenadeLauncher_Snowball_Athena_C : public AB_GrenadeLauncher_Generic_Athena_Parent_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent1; // 0x21A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_GrenadeLaunchers/Blueprints/B_GrenadeLauncher_Snowball_Athena.B_GrenadeLauncher_Snowball_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Skeleton_Templates/BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x90 (0x448 - 0x3B8)
	class UBP_AssaultRifle_FrontClip_BackAction_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x3F0(0x10)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x400(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Skeleton_Templates/BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Skeleton_Templates/BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x90 (0x448 - 0x3B8)
	class UBP_AssaultRifle_FrontClip_SideAction_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F0(0x48)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Skeleton_Templates/BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_PistolCaliber_AR_Athena.B_Assault_PistolCaliber_AR_Athena_C
	// Inherited from AB_Assault_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0xC8 (0x2258 - 0x2190)
	class AB_Assault_PistolCaliber_AR_Athena_C : public AB_Assault_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2190(0x8)
		UFortWeaponComponent_ScopeAnimation* ScopeAnimComp; // 0x2198(0x8)
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x21A0(0x8)
		float Timeline_0_NewTrack_0_2A1E7666433003EB10C12CADDE3203DC; // 0x21A8(0x4)
		TEnumAsByte<ETimelineDirection> Timeline_0__Direction_2A1E7666433003EB10C12CADDE3203DC; // 0x21AC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x21AD(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0x21B0(0x8)
		float Timeline_NewTrack_0_72856E2A415D51CEA0C3A8826753A7D6; // 0x21B8(0x4)
		TEnumAsByte<ETimelineDirection> Timeline__Direction_72856E2A415D51CEA0C3A8826753A7D6; // 0x21BC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x21BD(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0x21C0(0x8)
		double Firing_Rate; // 0x21C8(0x8)
		bool Firing; // 0x21D0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x21D1(0x7) UNKNOWN PROPERTY
		FTimerHandle RecoilTimerHandle; // 0x21D8(0x8)
		double XRecoilOffset; // 0x21E0(0x8)
		double YRecoilOffset; // 0x21E8(0x8)
		double YADSOffset; // 0x21F0(0x8)
		double ADSAlpha; // 0x21F8(0x8)
		double XADSOffset; // 0x2200(0x8)
		double PreADSYOffset; // 0x2208(0x8)
		double PreADSXOffset; // 0x2210(0x8)
		FRotator PreviousRotation; // 0x2218(0x18)
		double YOffsetInterpTarget; // 0x2230(0x8)
		double XOffsetInterpTarget; // 0x2238(0x8)
		double XStrafeOffset; // 0x2240(0x8)
		double YOffset; // 0x2248(0x8)
		double XOffset; // 0x2250(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_PistolCaliber_AR_Athena.B_Assault_PistolCaliber_AR_Athena_C");
			return ret;
		}

		void Timeline__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_0__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_0__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetTargeting(bool bNewIsTargeting); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStopWeaponFireFX(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RecoilCamShake(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Assault_PistolCaliber_AR_Athena(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Auto.B_Assault_Auto_C
	// Inherited from AB_Assault_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x2190 - 0x2190)
	class AB_Assault_Auto_C : public AB_Assault_Generic_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Auto.B_Assault_Auto_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Auto_Zoom_SR_Child_Athena.B_Assault_Auto_Zoom_SR_Child_Athena_C
	// Inherited from AB_Assault_Auto_C -> AB_Assault_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Assault_Auto_Zoom_SR_Child_Athena_C : public AB_Assault_Auto_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Auto_Zoom_SR_Child_Athena.B_Assault_Auto_Zoom_SR_Child_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_BurstBullpup_Athena.B_Assault_BurstBullpup_Athena_C
	// Inherited from AB_Assault_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Assault_BurstBullpup_Athena_C : public AB_Assault_Generic_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_BurstBullpup_Athena.B_Assault_BurstBullpup_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Suppressed_Athena.B_Assault_Suppressed_Athena_C
	// Inherited from AB_Assault_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Assault_Suppressed_Athena_C : public AB_Assault_Generic_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Suppressed_Athena.B_Assault_Suppressed_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Skeleton_Templates/BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x90 (0x448 - 0x3B8)
	class UBP_Pistol_Grip_Clip_TopAction_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F0(0x48)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Skeleton_Templates/BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Blueprints/Cameras/ShakeDataAssets/SMG/SMGHipfireShakeData.SMGHipfireShakeData_C
	// Inherited from UWeaponFireCameraAnimationData_C -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class USMGHipfireShakeData_C : public UWeaponFireCameraAnimationData_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/Cameras/ShakeDataAssets/SMG/SMGHipfireShakeData.SMGHipfireShakeData_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Blueprints/Cameras/ShakeDataAssets/SMG/SMGFireShake_ADS.SMGFireShake_ADS_C
	// Inherited from UWeaponFireCameraAnimationData_C -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class USMGFireShake_ADS_C : public UWeaponFireCameraAnimationData_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/Cameras/ShakeDataAssets/SMG/SMGFireShake_ADS.SMGFireShake_ADS_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Auto.B_Pistol_Auto_C
	// Inherited from AB_Pistol_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x2190 - 0x2190)
	class AB_Pistol_Auto_C : public AB_Pistol_Generic_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Auto.B_Pistol_Auto_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_PDW_Athena_HighTier.B_Pistol_PDW_Athena_HighTier_C
	// Inherited from AB_Pistol_Auto_C -> AB_Pistol_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Pistol_PDW_Athena_HighTier_C : public AB_Pistol_Auto_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_PDW_Athena_HighTier.B_Pistol_PDW_Athena_HighTier_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_AutoHeavy_Athena_Supp_Child.B_Pistol_AutoHeavy_Athena_Supp_Child_C
	// Inherited from AB_Pistol_Auto_C -> AB_Pistol_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Pistol_AutoHeavy_Athena_Supp_Child_C : public AB_Pistol_Auto_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_AutoHeavy_Athena_Supp_Child.B_Pistol_AutoHeavy_Athena_Supp_Child_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C
	// Inherited from AB_Pistol_Auto_C -> AB_Pistol_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x10 (0x21A0 - 0x2190)
	class AB_Pistol_AutoHeavy_Athena_C : public AB_Pistol_Auto_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2190(0x8)
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2198(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponAttached(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Pistol_AutoHeavy_Athena(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_PostApocalyptic_Athena.B_Pistol_PostApocalyptic_Athena_C
	// Inherited from AB_Pistol_Auto_C -> AB_Pistol_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Pistol_PostApocalyptic_Athena_C : public AB_Pistol_Auto_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_PostApocalyptic_Athena.B_Pistol_PostApocalyptic_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Blueprints/Cameras/ShakeDataAssets/Pistol/SemiAutoPistolShake_Hip.SemiAutoPistolShake_Hip_C
	// Inherited from UWeaponFireCameraAnimationData_C -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class USemiAutoPistolShake_Hip_C : public UWeaponFireCameraAnimationData_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/Cameras/ShakeDataAssets/Pistol/SemiAutoPistolShake_Hip.SemiAutoPistolShake_Hip_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Blueprints/Cameras/ShakeDataAssets/Pistol/SemiAutoPistolShake_ADS.SemiAutoPistolShake_ADS_C
	// Inherited from UWeaponFireCameraAnimationData_C -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class USemiAutoPistolShake_ADS_C : public UWeaponFireCameraAnimationData_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/Cameras/ShakeDataAssets/Pistol/SemiAutoPistolShake_ADS.SemiAutoPistolShake_ADS_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Revolver_Futuristic_Athena.B_Pistol_Revolver_Futuristic_Athena_C
	// Inherited from AB_Pistol_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x18 (0x21A8 - 0x2190)
	class AB_Pistol_Revolver_Futuristic_Athena_C : public AB_Pistol_Generic_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)
		UStaticMeshComponent* Reload_QuickReload; // 0x2198(0x8)
		UStaticMeshComponent* Reload_Ammo; // 0x21A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Revolver_Futuristic_Athena.B_Pistol_Revolver_Futuristic_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Blueprints/B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C
	// Inherited from AFortWeaponRangedDual -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x328 (0x2150 - 0x1E28)
	class AB_Ranged_Dual_Generic_Athena_C : public AFortWeaponRangedDual	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1E28(0x8)
		UNiagaraComponent* LeftMuzzle_Empty__Niagara; // 0x1E30(0x8)
		UNiagaraComponent* Muzzle_Empty__Niagara; // 0x1E38(0x8)
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x1E40(0x8)
		UParticleSystemComponent* LeftMuzzle_Empty_; // 0x1E48(0x8)
		UStaticMeshComponent* ScopeMesh1P; // 0x1E50(0x8)
		UParticleSystemComponent* Muzzle_Empty_; // 0x1E58(0x8)
		float AnimateScopePostProcess_DownSightPostProcessAmount_BF13147D4D2F78A8F8CECFABA0F6D055; // 0x1E60(0x4)
		TEnumAsByte<ETimelineDirection> AnimateScopePostProcess__Direction_BF13147D4D2F78A8F8CECFABA0F6D055; // 0x1E64(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1E65(0x3) UNKNOWN PROPERTY
		UTimelineComponent* AnimateScopePostProcess; // 0x1E68(0x8)
		UParticleSystem* MuzzleParticleSystem; // 0x1E70(0x8)
		UParticleSystem* WeaponDurabilityDestroyEffect; // 0x1E78(0x8)
		UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x1E80(0x8)
		bool UseDestroyEffect; // 0x1E88(0x1)
		bool Use_Reload_Particles; // 0x1E89(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x1E8A(0x6) UNKNOWN PROPERTY
		double LastPlayFXTime; // 0x1E90(0x8)
		double MinPlayFXTime; // 0x1E98(0x8)
		UParticleSystemComponent* SpawnedShellsPS_R; // 0x1EA0(0x8)
		UParticleSystemComponent* SpawnedShellsPS_L; // 0x1EA8(0x8)
		bool UseShellsOnFire_; // 0x1EB0(0x1)
		bool UseShellsOnReload_; // 0x1EB1(0x1)
		bool UseShellsOnPump_; // 0x1EB2(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x1EB3(0x5) UNKNOWN PROPERTY
		UParticleSystem* ShellsParticleSystemTemplate; // 0x1EB8(0x8)
		TArray<AFortAIPawn*> Array_Of_Active_Enemy_AI; // 0x1EC0(0x10)
		bool Scope___Render_Enemies_To_Custom_Depth_Buffer; // 0x1ED0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1ED1(0x3) UNKNOWN PROPERTY
		FName Shells_Socket_Name; // 0x1ED4(0x4)
		TEnumAsByte<En_ShellTypes_01> ShellTypeSelect; // 0x1ED8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1ED9(0x7) UNKNOWN PROPERTY
		double Shells_Spawn_Rate_Scale; // 0x1EE0(0x8)
		FVector ShellsRotationRate; // 0x1EE8(0x18)
		FVector Shells_Velocity; // 0x1F00(0x18)
		FVector Shells_Gravity; // 0x1F18(0x18)
		double Shells_Lifetime; // 0x1F30(0x8)
		FVector Shells_Size; // 0x1F38(0x18)
		double Shells_Time_Dilation; // 0x1F50(0x8)
		double Target_Scope_Vignette_Blur_Screen_Percentage; // 0x1F58(0x8)
		double Scope_Camera_Offset_Amount; // 0x1F60(0x8)
		bool SmallShells; // 0x1F68(0x1)
		bool MediumShells; // 0x1F69(0x1)
		bool LargeShells; // 0x1F6A(0x1)
		bool ShotgunShells; // 0x1F6B(0x1)
		bool EnergyShells; // 0x1F6C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x1F6D(0x3) UNKNOWN PROPERTY
		double Inherit_Parent_Velocity; // 0x1F70(0x8)
		double Cylindrical_Radius; // 0x1F78(0x8)
		double Cylindrical_Height; // 0x1F80(0x8)
		bool DebugShellsSocket_; // 0x1F88(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x1F89(0x7) UNKNOWN PROPERTY
		USoundBase* Sound_ScopeZoomIn; // 0x1F90(0x8)
		USoundBase* Sound_ScopeZoomOut; // 0x1F98(0x8)
		FGameplayTagContainer ReticleHUDElementTags; // 0x1FA0(0x20)
		bool Is_Wind_Enabled; // 0x1FC0(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x1FC1(0x7) UNKNOWN PROPERTY
		UParticleSystem* MuzzleWindParticleSystem; // 0x1FC8(0x8)
		UParticleSystem* MuzzleParticleSystem1P; // 0x1FD0(0x8)
		bool ShouldHideReticleAfterDelay; // 0x1FD8(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x1FD9(0x7) UNKNOWN PROPERTY
		FVector Muzzle_Core_Scale; // 0x1FE0(0x18)
		UParticleSystemComponent* MuzzleWindParticleSpawned; // 0x1FF8(0x8)
		int32_t StencilBufferValue; // 0x2000(0x4)
		EDualWeaponHand LastHandFired; // 0x2004(0x1)
		bool bShouldReEnableLeftWeapVis; // 0x2005(0x1)
		bool bForceFeedbackShouldPersist; // 0x2006(0x1)
		unsigned char UnknownData09_6[0x1]; // 0x2007(0x1) UNKNOWN PROPERTY
		FLinearColor Shell_Color; // 0x2008(0x10)
		double Shells_PS_Max_Draw_Distance; // 0x2018(0x8)
		TMap<TEnumAsByte, bool> Shell_Bools; // 0x2020(0x50)
		TMap<TEnumAsByte, FName> Shell_Burst_Names; // 0x2070(0x50)
		UNiagaraSystem* Reload_System; // 0x20C0(0x8)
		UMaterialInterface* Reload_Smoke_Material; // 0x20C8(0x8)
		FName ReloadSocketName; // 0x20D0(0x4)
		float Reload_Smoke_Lifetime; // 0x20D4(0x4)
		float Reload_Smoke_Width_Scale; // 0x20D8(0x4)
		FLinearColor BaseColorAlpha; // 0x20DC(0x10)
		bool Use_Emissive_in_Reload; // 0x20EC(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x20ED(0x3) UNKNOWN PROPERTY
		FLinearColor Reload_Emissive_Color; // 0x20F0(0x10)
		bool Is_Rocket_Launcher; // 0x2100(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x2101(0x3) UNKNOWN PROPERTY
		FLinearColor Rocket_Launcher_Spark_Color; // 0x2104(0x10)
		bool Reload_Ejects_Shells; // 0x2114(0x1)
		bool bStoppedWeaponFireFX; // 0x2115(0x1)
		unsigned char UnknownData12_6[0x2]; // 0x2116(0x2) UNKNOWN PROPERTY
		UNiagaraSystem* Niagara_Muzzle_System; // 0x2118(0x8)
		UNiagaraSystem* Niagara_Shell_System; // 0x2120(0x8)
		UNiagaraComponent* Spawned_Shells_Niagara_L; // 0x2128(0x8)
		UNiagaraComponent* Spawned_Shells_Niagara_R; // 0x2130(0x8)
		UParticleSystemComponent* __3_; // 0x2138(0x8)
		double Muzzle_Core_Cap_Scale; // 0x2140(0x8)
		double Smoke_Size_Scale; // 0x2148(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C");
			return ret;
		}

		void SetUpMuzzleFXParams(UNiagaraComponent* MuzzleSystem); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPostProcessParams(double InputPin); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowReticle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideReticle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivateOrDeactivateWindParticle(bool bNewActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeactivateMuzzleFX(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeactivateReloadSmokeFX(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivateReloadSmokeFX(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivateShellsFX(bool bool, bool Offhand); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeactivateShellsFX(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupShellFX(bool Offhand); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateShellEmittersFX(UFXSystemComponent* Target); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Muzzle Play Reload FX(TEnumAsByte<EFortReloadFXState> Selection); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Muzzle Flash FX(bool Persistent Fire, bool Offhand); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWpnRarity(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddRandomScale(bool Offhand); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimateScopePostProcess__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimateScopePostProcess__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStopWeaponFireFX(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState> ReloadStage); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetTargeting(bool bNewIsTargeting); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnUnEquip(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeScopeVariables(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponAttached(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShellsON_(onPump)(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEquippedWeaponDestory(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit); // Flags: Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideWeaponMesh(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowWeaponMesh(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideWeapon(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowWeapon(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReverseScopePP(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetDoonceScopeSound(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnhideThirdPersonStuff(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayScopePP(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideFirstPersonStuff(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AbortScopeFX(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideThirdPersonStuff(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnhideFirstPersonStuffPart2(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnhideFirstPersonStuffPart1(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ForceScopeFX(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandFired(EDualWeaponHand Hand, bool bPersistantFire); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BindOnHandFired(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShellEjectionFixOn(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Bind on Effects Quality(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShellEjectionOff(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Ranged_Dual_Generic_Athena(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_RapidFireSMG_Athena.B_Pistol_RapidFireSMG_Athena_C
	// Inherited from AB_Pistol_Auto_C -> AB_Pistol_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Pistol_RapidFireSMG_Athena_C : public AB_Pistol_Auto_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_RapidFireSMG_Athena.B_Pistol_RapidFireSMG_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Skeleton_Templates/BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x90 (0x448 - 0x3B8)
	class UBP_Shotgun_SG_BFPA_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F0(0x48)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Skeleton_Templates/BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Vigilante_Athena_HighTier.B_Pistol_Vigilante_Athena_HighTier_C
	// Inherited from AB_Pistol_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Pistol_Vigilante_Athena_HighTier_C : public AB_Pistol_Generic_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Vigilante_Athena_HighTier.B_Pistol_Vigilante_Athena_HighTier_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Bulletswarm.B_Assault_Bulletswarm_C
	// Inherited from AB_Assault_Auto_C -> AB_Assault_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x2190 - 0x2190)
	class AB_Assault_Bulletswarm_C : public AB_Assault_Auto_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Bulletswarm.B_Assault_Bulletswarm_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C
	// Inherited from AB_Assault_Bulletswarm_C -> AB_Assault_Auto_C -> AB_Assault_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x40 (0x21D0 - 0x2190)
	class AB_Assault_LMG_SAW_Athena_C : public AB_Assault_Bulletswarm_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2190(0x8)
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2198(0x8)
		FVector LaserScaleUntargeted; // 0x21A0(0x18)
		FVector LaserScaleTargeted; // 0x21B8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetTargeting(bool bNewIsTargeting); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Assault_LMG_SAW_Athena(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Blueprints/Cameras/ShakeDataAssets/Shotgun/ShotgunFireShake_ADS.ShotgunFireShake_ADS_C
	// Inherited from UWeaponFireCameraAnimationData_C -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UShotgunFireShake_ADS_C : public UWeaponFireCameraAnimationData_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/Cameras/ShakeDataAssets/Shotgun/ShotgunFireShake_ADS.ShotgunFireShake_ADS_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Blueprints/Cameras/ShakeDataAssets/Shotgun/ShotgunFireShake_Hip.ShotgunFireShake_Hip_C
	// Inherited from UWeaponFireCameraAnimationData_C -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UShotgunFireShake_Hip_C : public UWeaponFireCameraAnimationData_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/Cameras/ShakeDataAssets/Shotgun/ShotgunFireShake_Hip.ShotgunFireShake_Hip_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Tracers/SubClasses/Tracer_Shotgun.Tracer_Shotgun_C
	// Inherited from AFortTracerBase -> AFortClientOnlyActor -> AActor -> UObject
	// Size: 0x8 (0x378 - 0x370)
	class ATracer_Shotgun_C : public AFortTracerBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Tracers/SubClasses/Tracer_Shotgun.Tracer_Shotgun_C");
			return ret;
		}

		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Tracer_Shotgun(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/Skeleton_Templates/BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C
	// Inherited from UAnimInstance -> UObject
	// Size: 0x90 (0x448 - 0x3B8)
	class UBP_Shotgun_RG_BFPA_C : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3C0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3C8(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x3D0(0x20)
		FAnimNode_Slot AnimGraphNode_Slot; // 0x3F0(0x48)
		FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Skeleton_Templates/BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Bullet_SuppressedAutoSniper.B_Prj_Bullet_SuppressedAutoSniper_C
	// Inherited from AFortProjectileAthena -> AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x1B9 (0xE79 - 0xCC0)
	class AB_Prj_Bullet_SuppressedAutoSniper_C : public AFortProjectileAthena	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xCC0(0x8)
		UStaticMeshComponent* TracerMesh; // 0xCC8(0x8)
		UParticleSystemComponent* P_Sniper_Bullet_Trail; // 0xCD0(0x8)
		USoundBase* Sniper_Rifle_SurfaceImpactSound; // 0xCD8(0x8)
		USoundBase* Sniper_Rifle_PlayerImpactSound; // 0xCE0(0x8)
		FVector DecalSize; // 0xCE8(0x18)
		FScalableFloat ProjectileGravityScale; // 0xD00(0x28)
		UParticleSystem* WaterImpactFX; // 0xD28(0x8)
		FHitResult WaterHit; // 0xD30(0xF8)
		UPhysicalMaterial* WaterHitMat; // 0xE28(0x8)
		double WaterDepthTrace; // 0xE30(0x8)
		FVector TraceImpactLocation; // 0xE38(0x18)
		FVector TraceImpactNormal; // 0xE50(0x18)
		int32_t WaterIndexTrace; // 0xE68(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xE6C(0x4) UNKNOWN PROPERTY
		USoundBase* Sniper_Rifle_WaterImpactSound; // 0xE70(0x8)
		bool bHasPlayedWaterSound; // 0xE78(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Bullet_SuppressedAutoSniper.B_Prj_Bullet_SuppressedAutoSniper_C");
			return ret;
		}

		void Play Impact SFX(bool Is Player, bool Is Water); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStop(FHitResult& Hit); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTouched(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult& HitResult, bool bIsOverlap); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSniperTraceWaterHit(FHitResult& WaterHit, AFortWaterBodyActor* WaterBody); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Prj_Bullet_SuppressedAutoSniper(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Bullet_Sniper_Predicted.B_Prj_Bullet_Sniper_Predicted_C
	// Inherited from AFortProjectileAthena -> AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x200 (0xEC0 - 0xCC0)
	class AB_Prj_Bullet_Sniper_Predicted_C : public AFortProjectileAthena	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xCC0(0x8)
		UNiagaraComponent* NS_CoreSniper_Bullet_Trail; // 0xCC8(0x8)
		TMap<TEnumAsByte, USoundBase*> SurfaceImpactSFX; // 0xCD0(0x50)
		FVector DecalSize; // 0xD20(0x18)
		FScalableFloat ProjectileGravityScale; // 0xD38(0x28)
		UParticleSystem* WaterImpactFX; // 0xD60(0x8)
		FHitResult WaterHit; // 0xD68(0xF8)
		UPhysicalMaterial* WaterHitMat; // 0xE60(0x8)
		double WaterDepth; // 0xE68(0x8)
		int32_t WaterIndex; // 0xE70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xE74(0x4) UNKNOWN PROPERTY
		FVector TraceImpactLocation; // 0xE78(0x18)
		FVector TraceImpactNormal; // 0xE90(0x18)
		USoundBase* Sniper_Rifle_WaterImpactSound; // 0xEA8(0x8)
		bool bHasPlayedWaterSound; // 0xEB0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xEB1(0x7) UNKNOWN PROPERTY
		UNiagaraSystem* NiagaraWaterImpactFX; // 0xEB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Bullet_Sniper_Predicted.B_Prj_Bullet_Sniper_Predicted_C");
			return ret;
		}

		void GetSurfaceTypeFromInfo(TEnumAsByte<EPhysicalSurface> Surface Type, AActor* Actor, TEnumAsByte<EPhysicalSurface>& Surface); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayImpactSFX(TEnumAsByte<EPhysicalSurface> Surface Type, AActor* Actor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStop(FHitResult& Hit); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTouched(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult& HitResult, bool bIsOverlap); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSniperTraceWaterHit(FHitResult& WaterHit, AFortWaterBodyActor* WaterBody); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Prj_Bullet_Sniper_Predicted(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C
	// Inherited from AFortProjectileSniperAthena -> AFortProjectileAthena -> AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x188 (0xED0 - 0xD48)
	class AB_Prj_Bullet_Sniper_C : public AFortProjectileSniperAthena	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xD48(0x8)
		FScalableFloat ProjectileGravityScale; // 0xD50(0x28)
		UParticleSystem* WaterImpactFX; // 0xD78(0x8)
		FHitResult WaterHit; // 0xD80(0xF8)
		UPhysicalMaterial* WaterHitMat; // 0xE78(0x8)
		double WaterDepth; // 0xE80(0x8)
		int32_t WaterIndex; // 0xE88(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xE8C(0x4) UNKNOWN PROPERTY
		FVector TraceImpactLocation; // 0xE90(0x18)
		FVector TraceImpactNormal; // 0xEA8(0x18)
		USoundBase* Sniper_Rifle_WaterImpactSound; // 0xEC0(0x8)
		UNiagaraSystem* NiagaraWaterImpactFX; // 0xEC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C");
			return ret;
		}

		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTouched(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult& HitResult, bool bIsOverlap); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSniperTraceWaterHit(FHitResult& WaterHit, AFortWaterBodyActor* WaterBody); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__B_Prj_Bullet_Sniper_ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // Flags: HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Prj_Bullet_Sniper(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Surgical_Athena.B_Assault_Surgical_Athena_C
	// Inherited from AB_Assault_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x2190 - 0x2190)
	class AB_Assault_Surgical_Athena_C : public AB_Assault_Generic_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Surgical_Athena.B_Assault_Surgical_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Surgical_Athena_TopTier.B_Assault_Surgical_Athena_TopTier_C
	// Inherited from AB_Assault_Surgical_Athena_C -> AB_Assault_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x2190 - 0x2190)
	class AB_Assault_Surgical_Athena_TopTier_C : public AB_Assault_Surgical_Athena_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Surgical_Athena_TopTier.B_Assault_Surgical_Athena_TopTier_C");
			return ret;
		}
	};


	// Class /Game/Weapons/Blueprints/Cameras/ShakeDataAssets/Sniper/SniperFireShake_ADS.SniperFireShake_ADS_C
	// Inherited from UWeaponFireCameraAnimationData_C -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class USniperFireShake_ADS_C : public UWeaponFireCameraAnimationData_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/Cameras/ShakeDataAssets/Sniper/SniperFireShake_ADS.SniperFireShake_ADS_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_Generic.B_Rifle_Generic_C
	// Inherited from AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x2190 - 0x2190)
	class AB_Rifle_Generic_C : public AB_Ranged_Generic_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_Generic.B_Rifle_Generic_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_NoScope_Athena.B_Rifle_NoScope_Athena_C
	// Inherited from AB_Rifle_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Rifle_NoScope_Athena_C : public AB_Rifle_Generic_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_NoScope_Athena.B_Rifle_NoScope_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_Sniper_Athena.B_Rifle_Sniper_Athena_C
	// Inherited from AB_Rifle_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x18 (0x21A8 - 0x2190)
	class AB_Rifle_Sniper_Athena_C : public AB_Rifle_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2190(0x8)
		UNiagaraComponent* NS_Sniper_Scope_Glint; // 0x2198(0x8)
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x21A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_Sniper_Athena.B_Rifle_Sniper_Athena_C");
			return ret;
		}

		void ShowSniperGlint(bool bAimedDownSight); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetTargeting(bool bNewIsTargeting); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Rifle_Sniper_Athena(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_Sniper_Athena_HighTier.B_Rifle_Sniper_Athena_HighTier_C
	// Inherited from AB_Rifle_Sniper_Athena_C -> AB_Rifle_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x21A8 - 0x21A8)
	class AB_Rifle_Sniper_Athena_HighTier_C : public AB_Rifle_Sniper_Athena_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_Sniper_Athena_HighTier.B_Rifle_Sniper_Athena_HighTier_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_Sniper_Auto_Suppressed_Athena.B_Rifle_Sniper_Auto_Suppressed_Athena_C
	// Inherited from AB_Rifle_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Rifle_Sniper_Auto_Suppressed_Athena_C : public AB_Rifle_Generic_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_Sniper_Auto_Suppressed_Athena.B_Rifle_Sniper_Auto_Suppressed_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_Sniper_Suppressed_Athena.B_Rifle_Sniper_Suppressed_Athena_C
	// Inherited from AB_Rifle_Sniper_Athena_C -> AB_Rifle_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x21B0 - 0x21A8)
	class AB_Rifle_Sniper_Suppressed_Athena_C : public AB_Rifle_Sniper_Athena_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x21A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_Sniper_Suppressed_Athena.B_Rifle_Sniper_Suppressed_Athena_C");
			return ret;
		}

		void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Rifle_Sniper_Suppressed_Athena(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_Generic.B_Shotgun_Generic_C
	// Inherited from AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x2190 - 0x2190)
	class AB_Shotgun_Generic_C : public AB_Ranged_Generic_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_Generic.B_Shotgun_Generic_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_Combat_Athena.B_Shotgun_Combat_Athena_C
	// Inherited from AB_Shotgun_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x10 (0x21A0 - 0x2190)
	class AB_Shotgun_Combat_Athena_C : public AB_Shotgun_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2190(0x8)
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2198(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_Combat_Athena.B_Shotgun_Combat_Athena_C");
			return ret;
		}

		void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, UFXSystemComponent* SpawnedPSC); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Shotgun_Combat_Athena(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C
	// Inherited from AB_Shotgun_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x48 (0x21D8 - 0x2190)
	class AB_Shotgun_Charge_Athena_C : public AB_Shotgun_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2190(0x8)
		UNiagaraComponent* NS_FullyCharged; // 0x2198(0x8)
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x21A0(0x8)
		UParticleSystemComponent* P_PartialCharged_MF; // 0x21A8(0x8)
		UParticleSystemComponent* P_FullyCharged_MF; // 0x21B0(0x8)
		bool MaxChargeForSwap; // 0x21B8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x21B9(0x7) UNKNOWN PROPERTY
		USoundBase* MaxChargeSwapAudio; // 0x21C0(0x8)
		bool AudioVisualizerEnabled; // 0x21C8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x21C9(0x7) UNKNOWN PROPERTY
		FTimerHandle AudioVisualizerTimer; // 0x21D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C");
			return ret;
		}

		void K2_OnUnEquip(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartCharge(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReachedMaxCharge(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEndCharge(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ChargeAudioVisualizer(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, UFXSystemComponent* SpawnedPSC); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Shotgun_Charge_Athena(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_Standard_TopTier_Athena.B_Shotgun_Standard_TopTier_Athena_C
	// Inherited from AB_Shotgun_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Shotgun_Standard_TopTier_Athena_C : public AB_Shotgun_Generic_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_Standard_TopTier_Athena.B_Shotgun_Standard_TopTier_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_HighSemiAuto_Athena.B_Shotgun_HighSemiAuto_Athena_C
	// Inherited from AB_Shotgun_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x10 (0x21A0 - 0x2190)
	class AB_Shotgun_HighSemiAuto_Athena_C : public AB_Shotgun_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2190(0x8)
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2198(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_HighSemiAuto_Athena.B_Shotgun_HighSemiAuto_Athena_C");
			return ret;
		}

		void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, UFXSystemComponent* SpawnedPSC); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Shotgun_HighSemiAuto_Athena(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_HeavyPenetrating_Athena.B_Shotgun_HeavyPenetrating_Athena_C
	// Inherited from AB_Shotgun_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Shotgun_HeavyPenetrating_Athena_C : public AB_Shotgun_Generic_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_HeavyPenetrating_Athena.B_Shotgun_HeavyPenetrating_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_Swing_Athena.B_Shotgun_Swing_Athena_C
	// Inherited from AB_Shotgun_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Shotgun_Swing_Athena_C : public AB_Shotgun_Generic_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_Swing_Athena.B_Shotgun_Swing_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Vigilante_Supp_Athena.B_Pistol_Vigilante_Supp_Athena_C
	// Inherited from AB_Pistol_Generic_C -> AB_Ranged_Generic_C -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x2198 - 0x2190)
	class AB_Pistol_Vigilante_Supp_Athena_C : public AB_Pistol_Generic_C	
	{
	public:
		UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x2190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Vigilante_Supp_Athena.B_Pistol_Vigilante_Supp_Athena_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_PumpkinRocket_Athena.B_Prj_Ranged_PumpkinRocket_Athena_C
	// Inherited from AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x278 (0xDA0 - 0xB28)
	class AB_Prj_Ranged_PumpkinRocket_Athena_C : public AFortProjectileBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB28(0x8)
		UBP_SurfaceTypeSoundComponent_C* BP_SurfaceTypeSoundComponent; // 0xB30(0x8)
		UAudioComponent* Rocket_AudioComponent; // 0xB38(0x8)
		UStaticMeshComponent* Mesh; // 0xB40(0x8)
		UStaticMeshComponent* CollisionMesh; // 0xB48(0x8)
		UPostProcessComponent* PP_Explode; // 0xB50(0x8)
		float PPFader_PPFade_E46349EC40975951B9F4838D34DDAEA2; // 0xB58(0x4)
		TEnumAsByte<ETimelineDirection> PPFader__Direction_E46349EC40975951B9F4838D34DDAEA2; // 0xB5C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB5D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* PPFader; // 0xB60(0x8)
		UParticleSystemComponent* Ribbon_Trail_PSC; // 0xB68(0x8)
		UParticleSystemComponent* Water_Explosion_PSC; // 0xB70(0x8)
		UParticleSystem* Ribbon_Trail_PS; // 0xB78(0x8)
		UParticleSystem* Water_Explosion_PS; // 0xB80(0x8)
		UParticleSystemComponent* Explosion_Generic_PSC; // 0xB88(0x8)
		USoundBase* Rocket_Projectile_Explosion_Sound; // 0xB90(0x8)
		FVector StopLocation; // 0xB98(0x18)
		TArray<TEnumAsByte> ObjectsToTraceAgainst; // 0xBB0(0x10)
		UParticleSystem* Explosion_Flesh_Damage_PS; // 0xBC0(0x8)
		FRotator StopRotZ; // 0xBC8(0x18)
		double TrailLifetime; // 0xBE0(0x8)
		UParticleSystemComponent* Explosion_Flesh_Damage_PSC; // 0xBE8(0x8)
		USoundBase* Rocket_Projectile_Explosion_Water_Sound; // 0xBF0(0x8)
		USoundBase* Rocket_Projectile_InAir_Sound; // 0xBF8(0x8)
		UParticleSystemComponent* RocketTrailPS; // 0xC00(0x8)
		double Tick_Delta; // 0xC08(0x8)
		double RocketSpinRate; // 0xC10(0x8)
		double Explosion_Impact_Offset; // 0xC18(0x8)
		FRotator RocketSpin; // 0xC20(0x18)
		FVector RocketScale; // 0xC38(0x18)
		bool TimerMaxReached_; // 0xC50(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xC51(0x7) UNKNOWN PROPERTY
		UMaterialInterface* Ground_Decal; // 0xC58(0x8)
		UMaterialInstanceDynamic* Ground_Decal_MID; // 0xC60(0x8)
		double Decal_Size_Max; // 0xC68(0x8)
		double Decal_Size_Min; // 0xC70(0x8)
		FVector DecalLocation; // 0xC78(0x18)
		TEnumAsByte<EPhysicalSurface> SurfaceType; // 0xC90(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xC91(0x7) UNKNOWN PROPERTY
		UParticleSystemComponent* Explosion_PS; // 0xC98(0x8)
		FGameplayTag FeedbackCue; // 0xCA0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xCA4(0x4) UNKNOWN PROPERTY
		double WaterInteractionDelay; // 0xCA8(0x8)
		UNiagaraComponent* RocketTrailPS_Niagara; // 0xCB0(0x8)
		UFXSystemComponent* Grenade_Explosion_FX_System; // 0xCB8(0x8)
		FFortPortableSoftParticles Grenade_Explosion_Asset; // 0xCC0(0x48)
		UFXSystemAsset* Explosion_Asset; // 0xD08(0x8)
		FFortPortableSoftParticles Rocket_Trail_Asset; // 0xD10(0x48)
		UFXSystemAsset* Rocket_Trial_Asset; // 0xD58(0x8)
		bool IsNiagaraEnabled; // 0xD60(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xD61(0x7) UNKNOWN PROPERTY
		double PlayRate; // 0xD68(0x8)
		double Radius; // 0xD70(0x8)
		double Strength; // 0xD78(0x8)
		double Time_Decay; // 0xD80(0x8)
		UFXSystemAsset* Explosion_Asset_Water; // 0xD88(0x8)
		UFXSystemAsset* NewNiagaraExplosionAsset; // 0xD90(0x8)
		UFXSystemAsset* NewNiagaraRocketTrailAsset; // 0xD98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_PumpkinRocket_Athena.B_Prj_Ranged_PumpkinRocket_Athena_C");
			return ret;
		}

		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PPFader__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PPFader__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStop(FHitResult& Hit); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FuseTimerMax(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExploded(TArray<AActor*>& HitActors, TArray<FHitResult>& HitResults); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTouched(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult& HitResult, bool bIsOverlap); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RocketWaterDelay(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDisableForKill(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Prj_Ranged_PumpkinRocket_Athena(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C
	// Inherited from AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x1E0 (0xD08 - 0xB28)
	class AB_Prj_Ranged_Rocket_Athena_C : public AFortProjectileBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB28(0x8)
		UBP_SurfaceTypeSoundComponent_C* BP_SurfaceTypeSoundComponent; // 0xB30(0x8)
		UAudioComponent* Rocket_AudioComponent; // 0xB38(0x8)
		UStaticMeshComponent* Mesh; // 0xB40(0x8)
		UStaticMeshComponent* CollisionMesh; // 0xB48(0x8)
		UPostProcessComponent* PP_Explode; // 0xB50(0x8)
		float PPFader_PPFade_6840155342A20C80B8C71EB25DE77BD9; // 0xB58(0x4)
		TEnumAsByte<ETimelineDirection> PPFader__Direction_6840155342A20C80B8C71EB25DE77BD9; // 0xB5C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB5D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* PPFader; // 0xB60(0x8)
		UParticleSystemComponent* Ribbon_Trail_PSC; // 0xB68(0x8)
		UParticleSystemComponent* Water_Explosion_PSC; // 0xB70(0x8)
		UParticleSystem* Ribbon_Trail_PS; // 0xB78(0x8)
		UParticleSystem* Water_Explosion_PS; // 0xB80(0x8)
		UParticleSystemComponent* Explosion_Generic_PSC; // 0xB88(0x8)
		USoundBase* Rocket_Projectile_Explosion_Sound; // 0xB90(0x8)
		FVector StopLocation; // 0xB98(0x18)
		TArray<TEnumAsByte> ObjectsToTraceAgainst; // 0xBB0(0x10)
		UParticleSystem* Explosion_Flesh_Damage_PS; // 0xBC0(0x8)
		FRotator StopRotZ; // 0xBC8(0x18)
		double TrailLifetime; // 0xBE0(0x8)
		UParticleSystemComponent* Explosion_Flesh_Damage_PSC; // 0xBE8(0x8)
		USoundBase* Rocket_Projectile_Explosion_Water_Sound; // 0xBF0(0x8)
		USoundBase* Rocket_Projectile_InAir_Sound; // 0xBF8(0x8)
		UParticleSystemComponent* RocketTrailPS; // 0xC00(0x8)
		double Tick_Delta; // 0xC08(0x8)
		double RocketSpinRate; // 0xC10(0x8)
		double Explosion_Impact_Offset; // 0xC18(0x8)
		FRotator RocketSpin; // 0xC20(0x18)
		FVector RocketScale; // 0xC38(0x18)
		bool TimerMaxReached_; // 0xC50(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xC51(0x7) UNKNOWN PROPERTY
		UMaterialInterface* Ground_Decal; // 0xC58(0x8)
		UMaterialInstanceDynamic* Ground_Decal_MID; // 0xC60(0x8)
		double Decal_Size_Max; // 0xC68(0x8)
		double Decal_Size_Min; // 0xC70(0x8)
		FVector DecalLocation; // 0xC78(0x18)
		TEnumAsByte<EPhysicalSurface> SurfaceType; // 0xC90(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xC91(0x7) UNKNOWN PROPERTY
		UParticleSystemComponent* Explosion_PS; // 0xC98(0x8)
		FGameplayTag FeedbackCue; // 0xCA0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xCA4(0x4) UNKNOWN PROPERTY
		double WaterInteractionDelay; // 0xCA8(0x8)
		UNiagaraComponent* RocketTrailPS_Niagara; // 0xCB0(0x8)
		UFXSystemComponent* Grenade_Explosion_FX_System; // 0xCB8(0x8)
		UFXSystemAsset* Explosion_Asset; // 0xCC0(0x8)
		UFXSystemAsset* Rocket_Trail_Asset; // 0xCC8(0x8)
		bool IsNiagaraEnabled; // 0xCD0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xCD1(0x7) UNKNOWN PROPERTY
		double PlayRate; // 0xCD8(0x8)
		double Radius; // 0xCE0(0x8)
		double Strength; // 0xCE8(0x8)
		double Time_Decay; // 0xCF0(0x8)
		UFXSystemAsset* Explosion_Asset_Water; // 0xCF8(0x8)
		UFXSystemAsset* FX_Physical_Surface; // 0xD00(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C");
			return ret;
		}

		void Get FX Asset(FFortPortableSoftParticles AssetStruct, UFXSystemAsset* FX_Asset); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PhysicalSurfaceCheck(int32_t Physical Surface ID, bool& CheckedPhysicalSurfaceID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PPFader__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PPFader__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStop(FHitResult& Hit); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FuseTimerMax(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExploded(TArray<AActor*>& HitActors, TArray<FHitResult>& HitResults); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTouched(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult& HitResult, bool bIsOverlap); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RocketWaterDelay(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDisableForKill(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Weapons/FORT_Shotguns/Effects/Muzzle/CameraShake_ChargeShotgun_MaxChargeLoop.CameraShake_ChargeShotgun_MaxChargeLoop_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UCameraShake_ChargeShotgun_MaxChargeLoop_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Shotguns/Effects/Muzzle/CameraShake_ChargeShotgun_MaxChargeLoop.CameraShake_ChargeShotgun_MaxChargeLoop_C");
			return ret;
		}
	};

}
