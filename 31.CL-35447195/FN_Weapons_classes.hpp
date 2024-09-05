#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Weapons
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
	// Inherited from UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x14B8 (0x1A60 - 0x5A8)
	class UBlueprint_Paper_VIM_C : public UFortAnimInstance	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x5A8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x5B0(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x5B8(0x8)
		FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x5C0(0x8)
		FAnimNode_Root AnimGraphNode_Root; // 0x5C8(0x20)
		FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x5E8(0x10)
		FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x5F8(0x20)
		unsigned char UnknownData03_6[0x8]; // 0x618(0x8) UNKNOWN PROPERTY
		FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x620(0x510)
		FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xB30(0x510)
		FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1040(0x510)
		FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1550(0x510)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C");
			return ret;
		}

		void AnimGraph(FPoseLink& AnimGraph); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D75E4D900
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B(); // Flags: BlueprintEvent 0x15D75E4D700
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149(); // Flags: BlueprintEvent 0x15D75E4D800
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73(); // Flags: BlueprintEvent 0x15D75E4D600
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B(); // Flags: BlueprintEvent 0x15D75E4D500
		void ExecuteUbergraph_Blueprint_Paper_VIM(int32_t EntryPoint); // Flags: Final 0x15D75E4D400
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

		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D80435F00
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
	// Size: 0x0 (0x1728 - 0x1728)
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
	// Size: 0x0 (0x1620 - 0x1620)
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
	// Size: 0x3C8 (0x2170 - 0x1DA8)
	class AB_Ranged_Generic_C : public AFortWeaponRanged	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1DA8(0x8)
		float AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642; // 0x1DB0(0x4)
		TEnumAsByte AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642; // 0x1DB4(0x1)
		unsigned char UnknownData18_6[0x3]; // 0x1DB5(0x3) UNKNOWN PROPERTY
		UTimelineComponent AnimateScopePostProcess; // 0x1DB8(0x8)
		UNiagaraSystem OpticGlint; // 0x1DC0(0x8)
		bool UseDestroyEffect; // 0x1DC8(0x1)
		unsigned char UnknownData19_6[0x7]; // 0x1DC9(0x7) UNKNOWN PROPERTY
		UParticleSystem WeaponDurabilityDestroyEffect; // 0x1DD0(0x8)
		UParticleSystem WeaponDurabilityDestroyEffectIcon; // 0x1DD8(0x8)
		bool Use_Reload_Particles; // 0x1DE0(0x1)
		bool UseShellsOnFire_; // 0x1DE1(0x1)
		bool UseShellsOnReload_; // 0x1DE2(0x1)
		bool UseShellsOnPump_; // 0x1DE3(0x1)
		unsigned char UnknownData20_6[0x4]; // 0x1DE4(0x4) UNKNOWN PROPERTY
		UNiagaraSystem Shell_Burst_FX; // 0x1DE8(0x8)
		UNiagaraSystem Shell_Looping_FX; // 0x1DF0(0x8)
		UNiagaraSystem Reload_System; // 0x1DF8(0x8)
		UMaterialInterface Reload_Smoke_Material; // 0x1E00(0x8)
		FName ReloadSocketName; // 0x1E08(0x4)
		FGameplayTag TagToApplyOpticGlint; // 0x1E0C(0x4)
		TArray Array_Of_Active_Enemy_AI; // 0x1E10(0x10)
		bool Scope___Render_Enemies_To_Custom_Depth_Buffer; // 0x1E20(0x1)
		unsigned char UnknownData21_6[0x3]; // 0x1E21(0x3) UNKNOWN PROPERTY
		FName Shells_Socket_Name; // 0x1E24(0x4)
		TEnumAsByte ShellTypeSelect; // 0x1E28(0x1)
		unsigned char UnknownData22_6[0x7]; // 0x1E29(0x7) UNKNOWN PROPERTY
		double Shells_Spawn_Rate_Scale; // 0x1E30(0x8)
		FVector ShellsRotationRate; // 0x1E38(0x18)
		FVector Shells_Velocity; // 0x1E50(0x18)
		FVector Shells_Gravity; // 0x1E68(0x18)
		FVector Shells_Size; // 0x1E80(0x18)
		double Target_Scope_Vignette_Blur_Screen_Percentage; // 0x1E98(0x8)
		double ScopeCameraOffsetX; // 0x1EA0(0x8)
		double ScopeCameraOffsetY; // 0x1EA8(0x8)
		double Scope_Camera_Offset_Amount; // 0x1EB0(0x8)
		double Inherit_Parent_Velocity; // 0x1EB8(0x8)
		double Cylindrical_Radius; // 0x1EC0(0x8)
		double Cylindrical_Height; // 0x1EC8(0x8)
		FLinearColor Shell_Color; // 0x1ED0(0x10)
		UNiagaraComponent Spawned_Shells; // 0x1EE0(0x8)
		bool DebugShellsSocket_; // 0x1EE8(0x1)
		unsigned char UnknownData23_6[0x7]; // 0x1EE9(0x7) UNKNOWN PROPERTY
		USoundBase Sound_ScopeZoomIn; // 0x1EF0(0x8)
		USoundBase Sound_ScopeZoomOut; // 0x1EF8(0x8)
		UNiagaraComponent Alteration_Ambient_PS; // 0x1F00(0x8)
		FGameplayTagContainer ReticleHUDElementTags; // 0x1F08(0x20)
		bool Is_Wind_Enabled; // 0x1F28(0x1)
		unsigned char UnknownData24_6[0x7]; // 0x1F29(0x7) UNKNOWN PROPERTY
		UParticleSystem MuzzleWindParticleSystem; // 0x1F30(0x8)
		bool ShouldHideReticleAfterDelay; // 0x1F38(0x1)
		unsigned char UnknownData25_6[0x7]; // 0x1F39(0x7) UNKNOWN PROPERTY
		UParticleSystemComponent MuzzleWindParticleSpawned; // 0x1F40(0x8)
		int32_t StencilBufferValue; // 0x1F48(0x4)
		unsigned char UnknownData26_6[0x4]; // 0x1F4C(0x4) UNKNOWN PROPERTY
		UCurveFloat Curve_PitchOffset; // 0x1F50(0x8)
		USoundBase Sound_ScopedInLoop; // 0x1F58(0x8)
		UAudioComponent ScopeZoomInComp; // 0x1F60(0x8)
		UAudioComponent ScopedInLoopComp; // 0x1F68(0x8)
		UAudioComponent ScopeZoomOutComp; // 0x1F70(0x8)
		double Alteration_Ambient_PS_Max_Draw_Distance; // 0x1F78(0x8)
		double Muzzle_PS_Max_Draw_Distance; // 0x1F80(0x8)
		double Beam_PS_Max_Draw_Distance; // 0x1F88(0x8)
		double Reload_PS_Max_Draw_Distance; // 0x1F90(0x8)
		double Shells_PS_Max_Draw_Distance; // 0x1F98(0x8)
		FMulticastInlineDelegate onAimDownSightsChanged; // 0x1FA0(0x10)
		UNiagaraComponent MuzzleNiagaraComponentInstance; // 0x1FB0(0x8)
		FTimerHandle ScopeEffectDelay1Handle; // 0x1FB8(0x8)
		FTimerHandle ScopeEffectDelay2Handle; // 0x1FC0(0x8)
		FScalableFloat UseUpdatedFeedback; // 0x1FC8(0x28)
		FMulticastInlineDelegate OnStartFiring; // 0x1FF0(0x10)
		FMulticastInlineDelegate OnPersistentFireStopped; // 0x2000(0x10)
		UStaticMesh ScopeMesh; // 0x2010(0x8)
		UStaticMeshComponent ScopeMesh1P_Spawned; // 0x2018(0x8)
		TArray ScopeMaterialOverrides; // 0x2020(0x10)
		float Reload_Smoke_Lifetime; // 0x2030(0x4)
		float Reload_Smoke_Width_Scale; // 0x2034(0x4)
		FLinearColor BaseColorAlpha; // 0x2038(0x10)
		bool Use_Emissive_in_Reload; // 0x2048(0x1)
		unsigned char UnknownData27_6[0x3]; // 0x2049(0x3) UNKNOWN PROPERTY
		FLinearColor Reload_Emissive_Color; // 0x204C(0x10)
		bool Is_Rocket_Launcher; // 0x205C(0x1)
		unsigned char UnknownData28_6[0x3]; // 0x205D(0x3) UNKNOWN PROPERTY
		FLinearColor Rocket_Launcher_Spark_Color; // 0x2060(0x10)
		bool Reload_Ejects_Shells; // 0x2070(0x1)
		unsigned char UnknownData29_6[0x7]; // 0x2071(0x7) UNKNOWN PROPERTY
		UNiagaraComponent OpticGlintComp; // 0x2078(0x8)
		UFXSystemAsset Muzzle_System; // 0x2080(0x8)
		float Muzzle_Hue_Control; // 0x2088(0x4)
		float Muzzle_Core_Cap_Scale; // 0x208C(0x4)
		FVector Muzzle_Core_Scale; // 0x2090(0x18)
		float Spark_Amount_Scale; // 0x20A8(0x4)
		float Smoke_Size_Scale; // 0x20AC(0x4)
		FLinearColor MuzzleSmokeInitialColor; // 0x20B0(0x10)
		float Smoke_Initial_Color_Scale_Variance; // 0x20C0(0x4)
		float Smoke_Emissive_Scale; // 0x20C4(0x4)
		bool Use_Heated_Elements; // 0x20C8(0x1)
		unsigned char UnknownData30_6[0x3]; // 0x20C9(0x3) UNKNOWN PROPERTY
		float Decal_Size; // 0x20CC(0x4)
		FVector Decal_Offset; // 0x20D0(0x18)
		float Decal_Alpha; // 0x20E8(0x4)
		unsigned char UnknownData31_6[0x4]; // 0x20EC(0x4) UNKNOWN PROPERTY
		UFXSystemComponent Spawned_Muzzle_System; // 0x20F0(0x8)
		int32_t Burst_Loops; // 0x20F8(0x4)
		bool Muzzle_BakedSupressor__Always_Suppressed_; // 0x20FC(0x1)
		bool Baked_Optics__Always_has_Optics_element_; // 0x20FD(0x1)
		unsigned char UnknownData32_6[0x2]; // 0x20FE(0x2) UNKNOWN PROPERTY
		double MinPlayFXTime; // 0x2100(0x8)
		double LastPlayFXTime; // 0x2108(0x8)
		FScalableFloat UseNativeFX; // 0x2110(0x28)
		bool bIsLocal; // 0x2138(0x1)
		unsigned char UnknownData33_6[0x7]; // 0x2139(0x7) UNKNOWN PROPERTY
		UNiagaraSystem Magazine_Eject_System; // 0x2140(0x8)
		FName Magazine_Eject_Socket_Name; // 0x2148(0x4)
		bool Use_Magazine_Eject; // 0x214C(0x1)
		unsigned char UnknownData34_6[0x3]; // 0x214D(0x3) UNKNOWN PROPERTY
		UMaterialInterface Magazine_Eject_Material; // 0x2150(0x8)
		UStaticMesh Magazine_Eject_Model; // 0x2158(0x8)
		float ScopeEffectDelay1Time; // 0x2160(0x4)
		float ScopeEffectDelay2Time; // 0x2164(0x4)
		bool bUseShellSmoke; // 0x2168(0x1)
		bool Burst_Activated_Muzzle; // 0x2169(0x1)
		unsigned char UnknownData35_6[0x2]; // 0x216A(0x2) UNKNOWN PROPERTY
		int32_t MuzzleInt; // 0x216C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C");
			return ret;
		}

		void Try Show Reticle(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B0D00
		void Activate Magazine Eject FX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4057A800
		void MuzzleModCheck(bool& IsMuzzleBrake, bool& IsMuzzleSupressor, bool& IsMuzzleBreacher); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D4057CB00
		void MuzzleADSCheck(bool& Return ADS Bool); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D4057CC00
		void ShowOpticGlint(bool AimDownsights); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B1400
		void StopLocalForceFeedback(UForceFeedbackEffect ForceFeedbackEffect, FName tag); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B0F00
		void PlayLocalForceFeedback(UForceFeedbackEffect ForceFeedbackEffect, FName tag, bool bLooping); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4057ED00
		void getScopeComp(UStaticMeshComponent& ScopeComponent); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D4057DB00
		void initScope(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D4057D300
		void IsNewFeedbackEnabled(bool& Enabled); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D4057D200
		void LocalReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4057D000
		void PlayScopeOutAudio(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4057EC00
		void GetScopeParameters(UStaticMeshComponent& ScopeComponent, FVector2D& DepthOfFieldVignetteRange, FVector& WeaponSightsOffset); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D4057DA00
		void StopScopedAudio(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B0E00
		void StartScopedAudio(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B1000
		void SetPostProcessParams(double InputPin); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B1C00
		void SetActiveAlterationIdleParticles(bool Active); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B1D00
		void ShowReticle(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B1300
		void HideReticle(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4057D800
		void ActivateOrDeactivateWindParticle(bool bNewActive); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4057A700
		void DeactivateMuzzleFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4057E000
		void ActivateReloadSmokeFX(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D4057A600
		void ActivateShellsFX(bool bool); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4057E700
		void DeactivateShellsFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4057DF00
		void SetupShellFX(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B1B00
		void UpdateShellEmittersFX(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D402B0700
		void Muzzle Play Reload FX(TEnumAsByte Selection); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4057CD00
		void Muzzle Flash FX(bool Persistent Fire); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D4057CE00
		void SetWpnRarity(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B1800
		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D402B0600
		void AnimateScopePostProcess__FinishedFunc(); // Flags: BlueprintEvent 0x15D4057E600
		void AnimateScopePostProcess__UpdateFunc(); // Flags: BlueprintEvent 0x15D4057E400
		void AnimateScopePostProcess__Toggle Scope__EventFunc(); // Flags: BlueprintEvent 0x15D4057E500
		void OnLoaded_F0DCFB40496C39D956D872BA984FA1F2(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057FB00
		void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057FE00
		void OnLoaded_83457BA843174AC6288682A342EBEAD9(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057FC00
		void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057FD00
		void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent 0x15D4057F700
		void OnStopWeaponFireFX(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent 0x15D4057F200
		void OnPlayReloadFX(TEnumAsByte ReloadStage); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent 0x15D4057F800
		void OnSetTargeting(bool bNewIsTargeting); // Flags: Event|Public|BlueprintEvent 0x15D4057F600
		void K2_OnUnEquip(); // Flags: Event|Public|BlueprintEvent 0x15D4057D100
		void InitializeScopeVariables(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057D400
		void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B0900
		void OnWeaponAttached(); // Flags: Event|Public|BlueprintEvent 0x15D4057F100
		void OnInitAlteration(UFortAlterationItemDefinition NewAlteration); // Flags: Event|Protected|BlueprintEvent 0x15D4057C700
		void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod); // Flags: Event|Protected|BlueprintEvent 0x15D4057FF00
		void ShellsON_(onPump)(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B1500
		void OnEquippedWeaponDestory(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent 0x15D4057C800
		void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 0x15D402B1A00
		void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit); // Flags: Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 0x15D402B1900
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D4057EA00
		void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Flags: Event|Protected|BlueprintEvent 0x15D4057EF00
		void HideWeaponMesh(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057D500
		void ShowWeaponMesh(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B1100
		void HideWeapon(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057D600
		void ShowWeapon(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B1200
		void ReverseScopePP(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B2000
		void ResetDoonceScopeSound(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B2100
		void UnhideThirdPersonStuff(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B0A00
		void PlayScopePP(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057EB00
		void HideFirstPersonStuff(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057D900
		void AbortScopeFX(); // Flags: Event|Public|BlueprintEvent 0x15D4057A900
		void HideThirdPersonStuff(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057D700
		void UnhideFirstPersonStuffPart2(int32_t Which Call); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B0B00
		void UnhideFirstPersonStuffPart1(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B0C00
		void ForceScopeFX(); // Flags: Event|Public|BlueprintEvent 0x15D4057DC00
		void BindFireRateChange(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057E200
		void PitchUpOnRateOfFireChange(float NewRateOfFire); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057EE00
		void ShellEjectionFixOn(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B1700
		void Bind on Effects Quality(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057E300
		void ShellEjectionOff(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B1600
		void ForceScopeBackImmediatly(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057DD00
		void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte ImpactPhysicalSurface, UFXSystemComponent SpawnedPSC); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D4057F900
		void OnStartOverheated(); // Flags: Event|Protected|BlueprintEvent 0x15D4057F300
		void OnApplyFireModeData(UFortWeaponFireModeData FireModeData); // Flags: Event|Protected|BlueprintEvent 0x15D4057C900
		void ScopeEffectDelay2(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B1E00
		void ScopeEffectDelay1(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B1F00
		void ModAddedtoWeapon(UFortWeaponModItemDefinition Mod, AFortWeapon Weapon); // Flags: BlueprintCallable|BlueprintEvent 0x15D4057CF00
		void CancelScopeTargeting(); // Flags: Event|Public|BlueprintEvent 0x15D4057E100
		void UpdateModMagazine(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B0800
		void ReceiveParticleData(TArray& Data, UNiagaraSystem NiagaraSystem, FVector& SimulationPositionOffset); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D4057E800
		void OnWeaponDetached(); // Flags: Event|Public|BlueprintEvent 0x15D4057F000
		void ReceiveEndPlay(TEnumAsByte EndPlayReason); // Flags: Event|Protected|BlueprintEvent 0x15D4057E900
		void ExecuteUbergraph_B_Ranged_Generic(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D4057DE00
		void OnPersistentFireStopped__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D4057FA00
		void OnStartFiring__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D4057F500
		void onAimDownSightsChanged__DelegateSignature(bool AimDownsights); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D4057CA00
	};


	// Class /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C
	// Inherited from AFortWeaponPickaxeAthena -> AFortWeapon -> AActor -> UObject
	// Size: 0x98 (0x1880 - 0x17E8)
	class AB_Athena_Pickaxe_Generic_C : public AFortWeaponPickaxeAthena	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x17E8(0x8)
		UParticleSystemComponent MeleeHeavy_PSC; // 0x17F0(0x8)
		UParticleSystem MeleeHeavy_ParticleSystem; // 0x17F8(0x8)
		UParticleSystem WeaponDurabilityDestroyEffect; // 0x1800(0x8)
		UParticleSystem WeaponDurabilityDestroyEffectIcon; // 0x1808(0x8)
		bool UseDestroyEffect; // 0x1810(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1811(0x7) UNKNOWN PROPERTY
		UNiagaraComponent Alteration_Ambient_PS; // 0x1818(0x8)
		FVector Effects_Color_Level; // 0x1820(0x18)
		bool Equipped; // 0x1838(0x1)
		bool bEquipPendingInstigator; // 0x1839(0x1)
		bool UseTimeofDayControl; // 0x183A(0x1)
		bool Swing_Right_; // 0x183B(0x1)
		unsigned char UnknownData03_6[0x4]; // 0x183C(0x4) UNKNOWN PROPERTY
		UFXSystemComponent Impact_FX; // 0x1840(0x8)
		FRotator Left_Swing_Rotation; // 0x1848(0x18)
		FRotator Right_Swing_Rotation; // 0x1860(0x18)
		UFXSystemComponent Spawned_Legacy_AnimTrail; // 0x1878(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C");
			return ret;
		}

		void Melee_Effect_Color(FVector& Melee_Color_Set); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402B8700
		int32_t Setup Swing Montage Section Index(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D402BB600
		void Binding Time of Day Control(bool Bind / Unbind (T/F)); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B8E00
		void UnbindSwingAnimTrailEvents(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402BAF00
		void BindSwingAnimTrailEvents(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B8D00
		void PlayCQCPickaxeEnemyAudio(FHitResult Hit Result); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402BB900
		void SetActiveAlterationIdleParticles(bool Active, bool Reset); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402BB700
		void SetWpnRarity(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402BB500
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D402BAD00
		void OnStatChanged_F171C56748FEA3E19F93088E968D3E21(FName StatName, int32_t StatValue); // Flags: BlueprintCallable|BlueprintEvent 0x15D402BBD00
		void OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D402BC000
		void MeleeSwingRight(bool First Right); // Flags: BlueprintCallable|BlueprintEvent 0x15D402BC600
		void MeleeSwingLeft(bool First Left); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B8600
		void MeleeSwingRight_End(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402BC500
		void MeleeSwingLeft_End(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D402B8500
		void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent 0x15D402BBE00
		void PlayRClickImpacts(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402BB800
		void OnEquippedWeaponDestory(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent 0x15D402BC400
		void OnWeaponAttached(); // Flags: Event|Public|BlueprintEvent 0x15D402BBC00
		void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod); // Flags: Event|Protected|BlueprintEvent 0x15D402BC300
		void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Flags: Event|Protected|BlueprintEvent 0x15D402BBA00
		void OnWeaponDetached(); // Flags: Event|Public|BlueprintEvent 0x15D402BBB00
		void OnInitWeaponCosmetics(); // Flags: Event|Protected|BlueprintEvent 0x15D402BC200
		void HandleKillWatch(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B8B00
		void UpdateBasedOnKills(int32_t Watched Kills); // Flags: BlueprintCallable|BlueprintEvent 0x15D402BAE00
		void Anim Trails Notify(bool bActive); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B8F00
		void Anim Trails Disable(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B9000
		void SwingRight(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402BB200
		void SwingLeft(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402BB400
		void SwingRightEnd(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402BB100
		void SwingLeftEnd(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402BB300
		void OnInstigatorSet(); // Flags: Event|Public|BlueprintEvent 0x15D402BC100
		void K2_OnUnEquip(); // Flags: Event|Public|BlueprintEvent 0x15D402B8900
		void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation); // Flags: BlueprintCallable|BlueprintEvent 0x15D402BB000
		void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte ImpactPhysicalSurface, UFXSystemComponent SpawnedPSC); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D402BBF00
		void HandleWeaponHolstered(); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B8A00
		void Vehicle Passenger(AFortPlayerPawn FortPlayerPawn, AActor NewVehicle, AActor OldVehicle); // Flags: BlueprintCallable|BlueprintEvent 0x15D402BAC00
		void Legacy Anim Trail Setup(bool Activate); // Flags: BlueprintCallable|BlueprintEvent 0x15D402B8800
		void ExecuteUbergraph_B_Athena_Pickaxe_Generic(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D402B8C00
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


	// Class /Game/Weapons/FORT_BuildingTools/DecoTool.DecoTool_C
	// Inherited from AFortDecoTool -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x1630 - 0x1630)
	class ADecoTool_C : public AFortDecoTool	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/DecoTool.DecoTool_C");
			return ret;
		}
	};


	// Class /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C
	// Inherited from AFortWeaponPickaxeDualWieldAthena -> AFortWeaponPickaxeAthena -> AFortWeapon -> AActor -> UObject
	// Size: 0xA1 (0x1BA9 - 0x1B08)
	class AB_Athena_Pickaxe_DualWield_Generic_C : public AFortWeaponPickaxeDualWieldAthena	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1B08(0x8)
		bool Equipped; // 0x1B10(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x1B11(0x7) UNKNOWN PROPERTY
		UNiagaraComponent Alteration_Ambient_PS; // 0x1B18(0x8)
		UParticleSystem MeleeHeavy_ParticleSystem; // 0x1B20(0x8)
		UParticleSystemComponent MeleeHeavy_PSC; // 0x1B28(0x8)
		bool UseDestroyEffect; // 0x1B30(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x1B31(0x7) UNKNOWN PROPERTY
		UParticleSystem WeaponDurabilityDestroyEffect; // 0x1B38(0x8)
		UParticleSystem WeaponDurabilityDestroyEffectIcon; // 0x1B40(0x8)
		UNiagaraComponent Offhand_Alteration_Ambient_PS; // 0x1B48(0x8)
		bool bEquipPendingInstigator; // 0x1B50(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x1B51(0x3) UNKNOWN PROPERTY
		FName Offhand_Socket_Name; // 0x1B54(0x4)
		UAnimMontage MontageReference; // 0x1B58(0x8)
		bool UseTimeofDayControl; // 0x1B60(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x1B61(0x7) UNKNOWN PROPERTY
		UFXSystemComponent Impact_FX; // 0x1B68(0x8)
		bool Swing_Right_; // 0x1B70(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x1B71(0x7) UNKNOWN PROPERTY
		FRotator Left_Swing_Rotation; // 0x1B78(0x18)
		FRotator Right_Swing_Rotation; // 0x1B90(0x18)
		bool Swing_Right_; // 0x1BA8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C");
			return ret;
		}

		void Binding Time of Day Control(bool Bind / Unbind (T/F)); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D86197E00
		void SetWpnRarity(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D86196D00
		void Unbind Dual Melee Swing Events(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8619A500
		void Bind Dual Melee Swing Events(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D86197F00
		void Set Active Alteration Idle Particles(bool Active, bool Reset); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D86196E00
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D8619A300
		void OnStatChanged_9F72D14C4573F491E38302B51F08A0B8(FName StatName, int32_t StatValue); // Flags: BlueprintCallable|BlueprintEvent 0x15D86197300
		void OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D86197600
		void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent 0x15D86197400
		void PlayRClickImpacts(); // Flags: BlueprintCallable|BlueprintEvent 0x15D86196F00
		void OnEquippedWeaponDestory(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent 0x15D86197A00
		void OnWeaponAttached(); // Flags: Event|Public|BlueprintEvent 0x15D86197200
		void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod); // Flags: Event|Protected|BlueprintEvent 0x15D86197900
		void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Flags: Event|Protected|BlueprintEvent 0x15D86197000
		void OnWeaponDetached(); // Flags: Event|Public|BlueprintEvent 0x15D86197100
		void OnInitWeaponCosmetics(); // Flags: Event|Protected|BlueprintEvent 0x15D86197800
		void Swing Left End(); // Flags: BlueprintCallable|BlueprintEvent 0x15D86196A00
		void Swing Right End(); // Flags: BlueprintCallable|BlueprintEvent 0x15D86196700
		void OnInstigatorSet(); // Flags: Event|Public|BlueprintEvent 0x15D86197700
		void K2_OnUnEquip(); // Flags: Event|Public|BlueprintEvent 0x15D86197B00
		void SwingRight_Common(); // Flags: BlueprintCallable|BlueprintEvent 0x15D86196500
		void SwingLeft_Common(); // Flags: BlueprintCallable|BlueprintEvent 0x15D86196600
		void Swing Left(); // Flags: BlueprintCallable|BlueprintEvent 0x15D86196C00
		void Swing Right(); // Flags: BlueprintCallable|BlueprintEvent 0x15D86196900
		void Swing Left 2(); // Flags: BlueprintCallable|BlueprintEvent 0x15D86196B00
		void Swing Right 2(); // Flags: BlueprintCallable|BlueprintEvent 0x15D86196800
		void Anim Trails Notify(bool bActive); // Flags: BlueprintCallable|BlueprintEvent 0x15D86198000
		void Anim Trails Disable(); // Flags: BlueprintCallable|BlueprintEvent 0x15D86198100
		void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte ImpactPhysicalSurface, UFXSystemComponent SpawnedPSC); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D86197500
		void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation); // Flags: BlueprintCallable|BlueprintEvent 0x15D86196400
		void HandleKillWatch(); // Flags: BlueprintCallable|BlueprintEvent 0x15D86197C00
		void UpdateBasedOnKills(int32_t Watched Kills); // Flags: BlueprintCallable|BlueprintEvent 0x15D8619A400
		void Vehicle Passenger(AFortPlayerPawn FortPlayerPawn, AActor NewVehicle, AActor OldVehicle); // Flags: BlueprintCallable|BlueprintEvent 0x15D8619A200
		void ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D86197D00
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

		void PreDestroy(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49DC8800
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

		FGameplayTag DetermineVariantSelection(FFortAthenaLoadout& Loadout); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15D49BC1F00
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

		FGameplayTag DetermineVariantSelection(FFortAthenaLoadout& Loadout); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15D49BC1C00
	};

}
