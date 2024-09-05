#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Effects
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/Effects/SnowSandInteraction/BP/SSI_BpLib_BpTools.SSI_BpLib_BpTools_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USSI_BpLib_BpTools_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/SnowSandInteraction/BP/SSI_BpLib_BpTools.SSI_BpLib_BpTools_C");
			return ret;
		}

		void OnLocalPlayersTeam(AActor TargetActor, UObject __WorldContext, bool& Return Value); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D66EDF400
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x8 (0x388 - 0x380)
	class AB_PlayerHealthDamage_CameraLensEffect_C : public AEmitterCameraLensEffectBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C");
			return ret;
		}

		void PassParticle_Parameter(double NewParam, bool First_Hit); // Flags: BlueprintCallable|BlueprintEvent 0x15D811A7500
		void ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect(int32_t EntryPoint); // Flags: Final 0x15D811A7600
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C
	// Inherited from AB_PlayerHealthDamage_CameraLensEffect_C -> AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x8 (0x390 - 0x388)
	class AB_PlayerShieldDamage_CameraLensEffect_C : public AB_PlayerHealthDamage_CameraLensEffect_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C");
			return ret;
		}

		void PassParticle_Parameter_Shield(double NewParam); // Flags: BlueprintCallable|BlueprintEvent 0x15D811AFE00
		void ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect(int32_t EntryPoint); // Flags: Final 0x15D811AFF00
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C
	// Inherited from AFortEmitterCameraLensEffectDirectional -> AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x0 (0x3C0 - 0x3C0)
	class AB_PlayerHealthDamage_LensEffect_Direction_C : public AFortEmitterCameraLensEffectDirectional	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C
	// Inherited from AFortEmitterCameraLensEffectDirectional -> AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x0 (0x3C0 - 0x3C0)
	class AB_PlayerShieldDamage_LensEffect_Direction_C : public AFortEmitterCameraLensEffectDirectional	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C
	// Inherited from AFortSoundCameraLensEffect -> AFortEmitterCameraLensEffectDirectional -> AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x3C0 (0x840 - 0x480)
	class AB_SoundIndicator_01_C : public AFortSoundCameraLensEffect	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x8)
		FRuntimeFloatCurve Gunshot_Falloff_Long_Range; // 0x488(0x88)
		FRuntimeFloatCurve Chest_Falloff; // 0x510(0x88)
		FRuntimeFloatCurve Footsteps_Falloff; // 0x598(0x88)
		FRuntimeFloatCurve Gunshot_Falloff_Mid_Range; // 0x620(0x88)
		FRuntimeFloatCurve Gunshot_Falloff_Melee; // 0x6A8(0x88)
		FRuntimeFloatCurve Glider_Falloff; // 0x730(0x88)
		FRuntimeFloatCurve Plane_Falloff; // 0x7B8(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C");
			return ret;
		}

		FRuntimeFloatCurve GetStrengthCurveForActiveType(); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D81FF5F00
		FLinearColor GetDefaultTint(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D81FF6000
		UTexture GetDefaultIcon(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D81FF6100
		FRuntimeFloatCurve GetWeaponCurve(); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D81FF5E00
		void ExecuteUbergraph_B_SoundIndicator_01(int32_t EntryPoint); // Flags: Final 0x15D81FF6200
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_Camera_Shake_Pulse_Flash.BP_Camera_Shake_Pulse_Flash_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UBP_Camera_Shake_Pulse_Flash_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/BP_Camera_Shake_Pulse_Flash.BP_Camera_Shake_Pulse_Flash_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C
	// Inherited from ABuildingWeakSpot -> AFortClientOnlyActor -> AActor -> UObject
	// Size: 0xD8 (0x3E0 - 0x308)
	class AWeakSpot_C : public ABuildingWeakSpot	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x8)
		UStaticMeshComponent ConnectTheDotsComponent; // 0x310(0x8)
		UCapsuleComponent CollisionComponent; // 0x318(0x8)
		float ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E; // 0x320(0x4)
		TEnumAsByte ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E; // 0x324(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x325(0x3) UNKNOWN PROPERTY
		UTimelineComponent ScaleDownParticleTL; // 0x328(0x8)
		USoundBase SpawnSound; // 0x330(0x8)
		FVector Particle_Location; // 0x338(0x18)
		TArray Crack_sounds; // 0x350(0x10)
		double ConnectTheDotsWidth; // 0x360(0x8)
		double ConnectTheDotsDuration; // 0x368(0x8)
		double ConnectTheDotsTimeoutFromPreviousHit; // 0x370(0x8)
		double ConnectTheDotsDurationScale; // 0x378(0x8)
		double ConnectTheDotsMaxDuration; // 0x380(0x8)
		double ConnectTheDotsTileScale; // 0x388(0x8)
		double ConnectTheDotsMinLength; // 0x390(0x8)
		double ConnectTheDotsMaxLength; // 0x398(0x8)
		UParticleSystem DamageTemplateCascade; // 0x3A0(0x8)
		UParticleSystem IdleTemplateCascade; // 0x3A8(0x8)
		UMaterialInstanceDynamic ConnectMID; // 0x3B0(0x8)
		FTimerHandle HideMeshTimer; // 0x3B8(0x8)
		UFXSystemComponent FXComponent; // 0x3C0(0x8)
		UNiagaraSystem IdleTemplateNiagara; // 0x3C8(0x8)
		UNiagaraSystem DamageTemplateNiagara; // 0x3D0(0x8)
		double FXSpriteScale; // 0x3D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C");
			return ret;
		}

		void SetSpriteScale(double SpriteScale); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D82E21900
		void SetFXTemplate(UNiagaraSystem Niagara, UParticleSystem Cascade); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D82E21A00
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D82E21800
		void ScaleDownParticleTL__FinishedFunc(); // Flags: BlueprintEvent 0x15D82E21C00
		void ScaleDownParticleTL__UpdateFunc(); // Flags: BlueprintEvent 0x15D82E21B00
		void OnFadeOut(); // Flags: Event|Public|BlueprintEvent 0x15D82E21F00
		void OnStartDirectionEffect(); // Flags: Event|Public|BlueprintEvent 0x15D82E21D00
		void OnHit(); // Flags: Event|Public|BlueprintEvent 0x15D82E21E00
		void HideMesh(); // Flags: BlueprintCallable|BlueprintEvent 0x15D82E22000
		void ExecuteUbergraph_WeakSpot(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D82E22100
	};


	// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Medium_Explosion_CameraShake.B_Medium_Explosion_CameraShake_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UB_Medium_Explosion_CameraShake_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Medium_Explosion_CameraShake.B_Medium_Explosion_CameraShake_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C
	// Inherited from AFortPickupsParent -> AFortPickupEffect -> AActor -> UObject
	// Size: 0x144 (0x5A4 - 0x460)
	class AB_Pickups_Parent_C : public AFortPickupsParent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x8)
		USceneComponent Root; // 0x468(0x8)
		float MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7; // 0x470(0x4)
		float MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7; // 0x474(0x4)
		TEnumAsByte MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7; // 0x478(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x479(0x7) UNKNOWN PROPERTY
		UTimelineComponent MobileSelectedTL; // 0x480(0x8)
		UStaticMeshComponent Static_Mesh_Pickup; // 0x488(0x8)
		USkeletalMeshComponent Skeletal_Mesh_Pickup; // 0x490(0x8)
		UPrimitiveComponent SkeletalOrStaticMeshAssetPrimitive; // 0x498(0x8)
		int32_t CurrentElementIndex; // 0x4A0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x4A4(0x4) UNKNOWN PROPERTY
		double Component_Radius__Scaled_; // 0x4A8(0x8)
		double Component_Radius_Multiplier; // 0x4B0(0x8)
		TArray Outline_Rarity_Colors; // 0x4B8(0x10)
		double Component_Radius; // 0x4C8(0x8)
		UParticleSystem Picked_Up_Trail_PS_Old; // 0x4D0(0x8)
		TArray Sparkle_Spawn_Rate__Picked_Up_; // 0x4D8(0x10)
		TArray Lifetime__Picked_Up_; // 0x4E8(0x10)
		UForceFeedbackEffect PickupForceFeedback_Old; // 0x4F8(0x8)
		bool HasUniqueMaterialIds; // 0x500(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x501(0x7) UNKNOWN PROPERTY
		TArray BackgroundRarityColors; // 0x508(0x10)
		double Random_Rotation; // 0x518(0x8)
		FVector MobileSelectedOffset; // 0x520(0x18)
		FVector MobileSelectedScale; // 0x538(0x18)
		UStaticMeshComponent MobileInteractIcon; // 0x550(0x8)
		FVector MobileInteractIconLocation; // 0x558(0x18)
		FVector MobileInteractIconScale; // 0x570(0x18)
		UMaterialInterface MobileInteractionMaterial; // 0x588(0x8)
		bool PickedUp; // 0x590(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x591(0x3) UNKNOWN PROPERTY
		FLinearColor MissionItemOutlineColor; // 0x594(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C");
			return ret;
		}

		int32_t GetViewDistanceQuality(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D499F2B00
		void Setup View Distances(int32_t& viewDistanceQuality); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D499F6000
		void Mobile Interation Icon Setup(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D499F2900
		void SetVisibleMobileInteractIcon(bool Visible); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D499F5F00
		void SetActiveBackgroundParticleSystem(bool Active, bool Reset); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D499F6300
		void SetHiddenBackgroundVisualComponents(bool Hidden); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D499F6200
		void DestroyBackgroundVisualComponents(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D499F2F00
		void ScaleHologramTimingsForPvP(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D499F2200
		void SetHologramPickedUpParams(bool Tier 0); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D499F6100
		void SpawnPickedUpTrailPS(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D499F5E00
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D499F5D00
		void MobileSelectedTL__FinishedFunc(); // Flags: BlueprintEvent 0x15D499F2800
		void MobileSelectedTL__UpdateFunc(); // Flags: BlueprintEvent 0x15D499F2700
		void EnableBacchusHighlight(); // Flags: Event|Public|BlueprintEvent 0x15D499F2D00
		void DisableBacchusHighlight(); // Flags: Event|Public|BlueprintEvent 0x15D499F2E00
		void HideBackgroundAndSpotlight(); // Flags: BlueprintCallable|BlueprintEvent 0x15D499F2A00
		void OnAttached(); // Flags: Event|Public|BlueprintEvent 0x15D499F2600
		void OnTossed(); // Flags: Event|Public|BlueprintEvent 0x15D499F2400
		void OnPickedUp(AFortPawn PickupTarget); // Flags: Event|Public|BlueprintEvent 0x15D499F2500
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D499F2300
		void ExecuteUbergraph_B_Pickups_Parent(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D499F2C00
	};


	// Class /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C
	// Inherited from AB_Pickups_Parent_C -> AFortPickupsParent -> AFortPickupEffect -> AActor -> UObject
	// Size: 0x3C (0x5E0 - 0x5A4)
	class AB_Pickups_Default_C : public AB_Pickups_Parent_C	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0x5A4(0x4) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x5A8(0x8)
		UStaticMeshComponent BG_Dark; // 0x5B0(0x8)
		UStaticMeshComponent BG; // 0x5B8(0x8)
		UStaticMeshComponent rarePickupFXMesh; // 0x5C0(0x8)
		USpotLightComponent SpotLightComp; // 0x5C8(0x8)
		UNiagaraComponent rareAmbientEmitter; // 0x5D0(0x8)
		USoundBase Pickup_Sound; // 0x5D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C");
			return ret;
		}

		void Setup View Distances(int32_t& viewDistanceQuality); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D68088D00
		void initializeSpotlightComponent(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D68089800
		void AddRareFX(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D68089C00
		void Set Initial BKGD Param(UMaterialInstanceDynamic Mid); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D68089400
		void HideBackgroundAndSpotlight(); // Flags: BlueprintCallable|BlueprintEvent 0x15D68089900
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D68089500
		void OnPickedUp(AFortPawn PickupTarget); // Flags: Event|Public|BlueprintEvent 0x15D68089700
		void OnTossed(); // Flags: Event|Public|BlueprintEvent 0x15D68089600
		void setDrawDistances(double BG, double bgdark, double gun); // Flags: BlueprintCallable|BlueprintEvent 0x15D68089300
		void setMaxDraw_Gun(double BG); // Flags: BlueprintCallable|BlueprintEvent 0x15D68089000
		void setMaxDraw_BGDark(double BG); // Flags: BlueprintCallable|BlueprintEvent 0x15D68089100
		void setMaxDraw_BG(double BG); // Flags: BlueprintCallable|BlueprintEvent 0x15D68089200
		void setMaxDraw_RareMesh(double BG); // Flags: BlueprintCallable|BlueprintEvent 0x15D68088E00
		void setMaxDraw_RareFX(double BG); // Flags: BlueprintCallable|BlueprintEvent 0x15D68088F00
		void drawDark(); // Flags: BlueprintCallable|BlueprintEvent 0x15D68089B00
		void ExecuteUbergraph_B_Pickups_Default(int32_t EntryPoint); // Flags: Final 0x15D68089A00
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x18 (0x398 - 0x380)
	class AB_CameraLens_Boat_Droplets_C : public AEmitterCameraLensEffectBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x8)
		float Timeline_0_Alpha_0C9ACFAF463718824428D0A86CC5D789; // 0x388(0x4)
		TEnumAsByte Timeline_0__Direction_0C9ACFAF463718824428D0A86CC5D789; // 0x38C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x38D(0x3) UNKNOWN PROPERTY
		UTimelineComponent Timeline; // 0x390(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C");
			return ret;
		}

		void Timeline_0__FinishedFunc(); // Flags: BlueprintEvent 0x15D6808BA00
		void Timeline_0__UpdateFunc(); // Flags: BlueprintEvent 0x15D6808B900
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D6808BC00
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent 0x15D6808BB00
		void ExecuteUbergraph_B_CameraLens_Boat_Droplets(int32_t EntryPoint); // Flags: Final 0x15D6808BD00
	};


	// Class /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C
	// Inherited from AActor -> UObject
	// Size: 0x184 (0x414 - 0x290)
	class ADuplicateResOutMesh_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		USceneComponent DefaultSceneRoot; // 0x298(0x8)
		float CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1; // 0x2A0(0x4)
		float CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1; // 0x2A4(0x4)
		float CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1; // 0x2A8(0x4)
		TEnumAsByte CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1; // 0x2AC(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x2AD(0x3) UNKNOWN PROPERTY
		UTimelineComponent CharacterSpawnInTimeline; // 0x2B0(0x8)
		USkeletalMeshComponent Skeletal_Mesh_Duplicate; // 0x2B8(0x8)
		bool Gun_True; // 0x2C0(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x2C1(0x7) UNKNOWN PROPERTY
		double BoundsRadius; // 0x2C8(0x8)
		TArray MIDArray; // 0x2D0(0x10)
		FVector World_location_for_the_dissolve_location; // 0x2E0(0x18)
		UMaterialInstanceDynamic Current_MID; // 0x2F8(0x8)
		double Head_Space; // 0x300(0x8)
		double Leg_Space; // 0x308(0x8)
		UPointLightComponent Spawn_Light; // 0x310(0x8)
		double light_intensity; // 0x318(0x8)
		int32_t Number_of_Base_skeletal_mesh_materials; // 0x320(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x324(0x4) UNKNOWN PROPERTY
		double FirstPassComplete; // 0x328(0x8)
		TArray ExternalSkeletalMeshComponent; // 0x330(0x10)
		FTransform Box_Local_Transform; // 0x340(0x60)
		double Timeline_Play_Length; // 0x3A0(0x8)
		bool TeleportOut_; // 0x3A8(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x3A9(0x7) UNKNOWN PROPERTY
		AActor ExternalActor; // 0x3B0(0x8)
		TArray InternalSkeletalMeshComponents; // 0x3B8(0x10)
		int32_t CurrentMeshMidIndex; // 0x3C8(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x3CC(0x4) UNKNOWN PROPERTY
		USkeletalMeshComponent External_Base_Mesh_Component; // 0x3D0(0x8)
		TArray ExternalMidArray; // 0x3D8(0x10)
		USkeletalMeshComponent ExternalRootMeshComponent; // 0x3E8(0x8)
		TArray ListOfMaterialsExemptFromReparenting; // 0x3F0(0x10)
		TArray Original_MIDs; // 0x400(0x10)
		int32_t Increment_End; // 0x410(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C");
			return ret;
		}

		void RestoreInProgressRes(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41F93D00
		void Store Original Material for Teleport In(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41F93B00
		void External Mesh Masked Setup(TArray& External MEsh Component Array, TArray& Corrected Mid Array); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41F90300
		void ProcessSpawnInTimeline(double ZHeight, double LightIntensity); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41F94000
		void Make internal mids and append external and intermal mids to mid array(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41F94100
		void Make and slave internal meshes(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41F94200
		void Spawn  Light(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41F93C00
		void Find Bounds(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41F90200
		void initializeExternalSkeletalMeshArray(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41F90100
		void CharacterSpawnInTimeline__FinishedFunc(); // Flags: BlueprintEvent 0x15D41F90600
		void CharacterSpawnInTimeline__UpdateFunc(); // Flags: BlueprintEvent 0x15D41F90500
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D41F93F00
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent 0x15D41F93E00
		void UpdateExternalParameters(TArray& MID Array, TArray& External MEsh Component Array); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D41F93A00
		void ExecuteUbergraph_DuplicateResOutMesh(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D41F90400
	};


	// Class /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C
	// Inherited from AFieldSystemActor -> AActor -> UObject
	// Size: 0xB4 (0x34C - 0x298)
	class AFN_RadialForce_C : public AFieldSystemActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x8)
		UOperatorField DistanceFadMult; // 0x2A0(0x8)
		URadialFalloff DistanceFalloff; // 0x2A8(0x8)
		UWaveScalar DecayScalar; // 0x2B0(0x8)
		UOperatorField DecayMult; // 0x2B8(0x8)
		UWaveScalar RadialFalloffWave; // 0x2C0(0x8)
		UOperatorField RadialVecMultiplyRadialFallOff; // 0x2C8(0x8)
		URadialVector RadialVector; // 0x2D0(0x8)
		double Wave_Period; // 0x2D8(0x8)
		double Force_Duration; // 0x2E0(0x8)
		double Radius; // 0x2E8(0x8)
		double Magnitude; // 0x2F0(0x8)
		double PlayRate; // 0x2F8(0x8)
		double Scale; // 0x300(0x8)
		double Impact_Time; // 0x308(0x8)
		double Period; // 0x310(0x8)
		double WaveLength; // 0x318(0x8)
		double Time_Decay; // 0x320(0x8)
		TEnumAsByte Falloff_Type; // 0x328(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x329(0x7) UNKNOWN PROPERTY
		double Expansion; // 0x330(0x8)
		double Impact_Radius; // 0x338(0x8)
		double Strength; // 0x340(0x8)
		float DelayTime; // 0x348(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C");
			return ret;
		}

		FTransform NewFunction(double Roll, double Scale); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D67095A00
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D67095900
		void ExecuteUbergraph_FN_RadialForce(int32_t EntryPoint); // Flags: Final 0x15D67095B00
	};


	// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Small_Explosion_CameraShake.B_Small_Explosion_CameraShake_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UB_Small_Explosion_CameraShake_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Small_Explosion_CameraShake.B_Small_Explosion_CameraShake_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x18 (0x398 - 0x380)
	class AB_CameraLens_Geyser_C : public AEmitterCameraLensEffectBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x8)
		float Timeline_0_Alpha_3D5AA2144E9B8D6D3B409B845315B143; // 0x388(0x4)
		TEnumAsByte Timeline_0__Direction_3D5AA2144E9B8D6D3B409B845315B143; // 0x38C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x38D(0x3) UNKNOWN PROPERTY
		UTimelineComponent Timeline; // 0x390(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C");
			return ret;
		}

		void Timeline_0__FinishedFunc(); // Flags: BlueprintEvent 0x15D3F513400
		void Timeline_0__UpdateFunc(); // Flags: BlueprintEvent 0x15D3F513500
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D3F513200
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent 0x15D3F513300
		void ExecuteUbergraph_B_CameraLens_Geyser(int32_t EntryPoint); // Flags: Final 0x15D3F513100
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_Loop.B_CameraLens_SpookyMist_Loop_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x8 (0x388 - 0x380)
	class AB_CameraLens_SpookyMist_Loop_C : public AEmitterCameraLensEffectBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_Loop.B_CameraLens_SpookyMist_Loop_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D31E5C000
		void ExecuteUbergraph_B_CameraLens_SpookyMist_Loop(int32_t EntryPoint); // Flags: Final 0x15D31E5C100
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_End.B_CameraLens_SpookyMist_End_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x8 (0x388 - 0x380)
	class AB_CameraLens_SpookyMist_End_C : public AEmitterCameraLensEffectBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_End.B_CameraLens_SpookyMist_End_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D6D4A6D00
		void ExecuteUbergraph_B_CameraLens_SpookyMist_End(int32_t EntryPoint); // Flags: Final 0x15D31E59600
	};


	// Class /Game/Effects/Niagara/Blueprints/AnimNotifyState_NiagaraNotify_SetParameters.AnimNotifyState_NiagaraNotify_SetParameters_C
	// Inherited from UAnimNotifyState_TimedNiagaraEffect -> UAnimNotifyState -> UObject
	// Size: 0x10 (0x88 - 0x78)
	class UAnimNotifyState_NiagaraNotify_SetParameters_C : public UAnimNotifyState_TimedNiagaraEffect	
	{
	public:
		TArray Parameter_Setup; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Niagara/Blueprints/AnimNotifyState_NiagaraNotify_SetParameters.AnimNotifyState_NiagaraNotify_SetParameters_C");
			return ret;
		}

		bool Received_NotifyTick(USkeletalMeshComponent MeshComp, UAnimSequenceBase Animation, float FrameDeltaTime, FAnimNotifyEventReference& EventReference); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15D80430700
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Splash_Water_Droplets.B_CameraLens_Splash_Water_Droplets_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x8 (0x388 - 0x380)
	class AB_CameraLens_Splash_Water_Droplets_C : public AEmitterCameraLensEffectBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Splash_Water_Droplets.B_CameraLens_Splash_Water_Droplets_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D41522000
		void ExecuteUbergraph_B_CameraLens_Splash_Water_Droplets(int32_t EntryPoint); // Flags: Final 0x15D41522100
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_CameraShake_PortalWarp.BP_CameraShake_PortalWarp_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UBP_CameraShake_PortalWarp_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/BP_CameraShake_PortalWarp.BP_CameraShake_PortalWarp_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SwimBoost.B_CameraLens_SwimBoost_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x8 (0x388 - 0x380)
	class AB_CameraLens_SwimBoost_C : public AEmitterCameraLensEffectBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SwimBoost.B_CameraLens_SwimBoost_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D41525D00
		void ExecuteUbergraph_B_CameraLens_SwimBoost(int32_t EntryPoint); // Flags: Final 0x15D41525E00
	};


	// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Small_Vertical_Jolt_CameraShake.B_Small_Vertical_Jolt_CameraShake_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UB_Small_Vertical_Jolt_CameraShake_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Small_Vertical_Jolt_CameraShake.B_Small_Vertical_Jolt_CameraShake_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_CameraShake_Lava_Bounce.BP_CameraShake_Lava_Bounce_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UBP_CameraShake_Lava_Bounce_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/BP_CameraShake_Lava_Bounce.BP_CameraShake_Lava_Bounce_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x10 (0x390 - 0x380)
	class AB_CameraLens_Lava_Bouncing_C : public AEmitterCameraLensEffectBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x8)
		UParticleSystemComponent P_Camera_Lava_Bouncing; // 0x388(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D4B7EA300
		void ExecuteUbergraph_B_CameraLens_Lava_Bouncing(int32_t EntryPoint); // Flags: Final 0x15D4B7EA400
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_CameraLens_HidingProp_Teleporting_Looping.BP_CameraLens_HidingProp_Teleporting_Looping_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x0 (0x380 - 0x380)
	class ABP_CameraLens_HidingProp_Teleporting_Looping_C : public AEmitterCameraLensEffectBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/BP_CameraLens_HidingProp_Teleporting_Looping.BP_CameraLens_HidingProp_Teleporting_Looping_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x8 (0x388 - 0x380)
	class AB_CameraLens_Drown_Damage_C : public AEmitterCameraLensEffectBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D44637D00
		void ExecuteUbergraph_B_CameraLens_Drown_Damage(int32_t EntryPoint); // Flags: Final 0x15D44637E00
	};


	// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/BP_CamShake_BlurPulse.BP_CamShake_BlurPulse_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UBP_CamShake_BlurPulse_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/BluePrints/CameraShakes/BP_CamShake_BlurPulse.BP_CamShake_BlurPulse_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_Loop.B_CameraLens_Shadow_Bomb_Loop_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x8 (0x388 - 0x380)
	class AB_CameraLens_Shadow_Bomb_Loop_C : public AEmitterCameraLensEffectBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_Loop.B_CameraLens_Shadow_Bomb_Loop_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D4463EA00
		void ExecuteUbergraph_B_CameraLens_Shadow_Bomb_Loop(int32_t EntryPoint); // Flags: Final 0x15D4463EB00
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_End.B_CameraLens_Shadow_Bomb_End_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x8 (0x388 - 0x380)
	class AB_CameraLens_Shadow_Bomb_End_C : public AEmitterCameraLensEffectBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_End.B_CameraLens_Shadow_Bomb_End_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D44A70500
		void ExecuteUbergraph_B_CameraLens_Shadow_Bomb_End(int32_t EntryPoint); // Flags: Final 0x15D44A70600
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete.BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x0 (0x380 - 0x380)
	class ABP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C : public AEmitterCameraLensEffectBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete.BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Looping_Camera_LensV2.BP_SpeedLines_Looping_Camera_LensV2_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x0 (0x380 - 0x380)
	class ABP_SpeedLines_Looping_Camera_LensV2_C : public AEmitterCameraLensEffectBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Looping_Camera_LensV2.BP_SpeedLines_Looping_Camera_LensV2_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Looping_Camera_Lens_Riding.BP_SpeedLines_Looping_Camera_Lens_Riding_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x0 (0x380 - 0x380)
	class ABP_SpeedLines_Looping_Camera_Lens_Riding_C : public AEmitterCameraLensEffectBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Looping_Camera_Lens_Riding.BP_SpeedLines_Looping_Camera_Lens_Riding_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Consumable_Chili_Looping_Camera_Lens.BP_SpeedLines_Consumable_Chili_Looping_Camera_Lens_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x0 (0x380 - 0x380)
	class ABP_SpeedLines_Consumable_Chili_Looping_Camera_Lens_C : public AEmitterCameraLensEffectBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Consumable_Chili_Looping_Camera_Lens.BP_SpeedLines_Consumable_Chili_Looping_Camera_Lens_C");
			return ret;
		}
	};


	// Class /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_WashForce.FN_WashForce_C
	// Inherited from AFieldSystemActor -> AActor -> UObject
	// Size: 0x38 (0x2D0 - 0x298)
	class AFN_WashForce_C : public AFieldSystemActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x8)
		URadialFalloff RadialFalloff; // 0x2A0(0x8)
		UOperatorField Multiply; // 0x2A8(0x8)
		URadialVector RadialVector; // 0x2B0(0x8)
		double Radius; // 0x2B8(0x8)
		double Strength; // 0x2C0(0x8)
		double Stop_TIme; // 0x2C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_WashForce.FN_WashForce_C");
			return ret;
		}

		bool Compute Strength(double& ReturnValue2); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D4B1A3300
		void SertRadius(double Radius); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4B1A2E00
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent 0x15D4B1A2F00
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent 0x15D4B1A3100
		void ReceiveEndPlay(TEnumAsByte EndPlayReason); // Flags: Event|Protected|BlueprintEvent 0x15D4B1A3000
		void ExecuteUbergraph_FN_WashForce(int32_t EntryPoint); // Flags: Final 0x15D4B1A3200
	};


	// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Large_Explosion_CameraShake.B_Large_Explosion_CameraShake_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UB_Large_Explosion_CameraShake_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Large_Explosion_CameraShake.B_Large_Explosion_CameraShake_C");
			return ret;
		}
	};


	// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Looping_Camera_Lens_Vehicle.BP_SpeedLines_Looping_Camera_Lens_Vehicle_C
	// Inherited from AEmitterCameraLensEffectBase -> AEmitter -> AActor -> UObject
	// Size: 0x0 (0x380 - 0x380)
	class ABP_SpeedLines_Looping_Camera_Lens_Vehicle_C : public AEmitterCameraLensEffectBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Looping_Camera_Lens_Vehicle.BP_SpeedLines_Looping_Camera_Lens_Vehicle_C");
			return ret;
		}
	};


	// Class /Game/Effects/Niagara/PerfBaselines/ContrailBaselineController.ContrailBaselineController_C
	// Inherited from UNiagaraBaselineController -> UObject
	// Size: 0x48 (0xA8 - 0x60)
	class UContrailBaselineController_C : public UNiagaraBaselineController	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x60(0x8)
		TWeakObjectPtr MeshAssetRef; // 0x68(0x20)
		TWeakObjectPtr AnimAssetRef; // 0x88(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Effects/Niagara/PerfBaselines/ContrailBaselineController.ContrailBaselineController_C");
			return ret;
		}

		bool OnTickTest(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D612C0D00
		void OnOwnerTick(float DeltaTime); // Flags: Event|Public|BlueprintEvent 0x15D612C0C00
		void OnEndTest(FNiagaraPerfBaselineStats Stats); // Flags: Event|Public|BlueprintEvent 0x15D612C0B00
		void OnBeginTest(); // Flags: Event|Public|BlueprintEvent 0x15D612C0A00
		void ExecuteUbergraph_ContrailBaselineController(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D612C0900
	};

}
