#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FrontendPreview
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /SparksCosmetics/FrontendPreview/BP_SparksCosmeticPreviewDisplay_Base.BP_SparksCosmeticPreviewDisplay_Base_C
	// Inherited from ASparksInstrumentPreviewActor -> AFortItemPreviewActor -> AActor -> UObject
	// Size: 0x0 (0x4B8 - 0x4B8)
	class ABP_SparksCosmeticPreviewDisplay_Base_C : public ASparksInstrumentPreviewActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksCosmetics/FrontendPreview/BP_SparksCosmeticPreviewDisplay_Base.BP_SparksCosmeticPreviewDisplay_Base_C");
			return ret;
		}
	};


	// Class /SparksCosmetics/FrontendPreview/Bp_SparksActorPreviewLightRig_Base.Bp_SparksActorPreviewLightRig_Base_C
	// Inherited from ASparksItemPreviewOffPawnActor -> AFortItemPreviewOffPawnActor -> AFortItemPreviewSingleAngleActor -> AFortItemPreviewActor -> AActor -> UObject
	// Size: 0x0 (0x4D0 - 0x4D0)
	class ABp_SparksActorPreviewLightRig_Base_C : public ASparksItemPreviewOffPawnActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksCosmetics/FrontendPreview/Bp_SparksActorPreviewLightRig_Base.Bp_SparksActorPreviewLightRig_Base_C");
			return ret;
		}
	};


	// Class /SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C
	// Inherited from ABP_SparksCosmeticPreviewDisplay_Base_C -> ASparksInstrumentPreviewActor -> AFortItemPreviewActor -> AActor -> UObject
	// Size: 0x50 (0x508 - 0x4B8)
	class AB_SparksCosmeticPreviewDisplay_C : public ABP_SparksCosmeticPreviewDisplay_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4B8(0x8)
		USkeletalMeshComponent MicMesh; // 0x4C0(0x8)
		USkeletalMeshComponent LHDrumstick; // 0x4C8(0x8)
		USkeletalMeshComponent RHDrumstick; // 0x4D0(0x8)
		USkeletalMeshComponent MicStandMesh; // 0x4D8(0x8)
		USkeletalMeshComponent DrumMesh; // 0x4E0(0x8)
		USkeletalMeshComponent GuitarMesh; // 0x4E8(0x8)
		bool Is__active; // 0x4F0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x4F1(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate NewEventDispatcher; // 0x4F8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C");
			return ret;
		}

		void FixupMeshAndMaterials(USkeletalMeshComponent MeshComponent, USkeletalMesh NewMesh, UMaterialInstance Material1, UMaterialInstance Material2, UFXSystemAsset FX, FName FX_Socket); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE0C00
		void Hide all(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE0B00
		void CustomizePreviewInstance(UFortItemDefinition InItemDefinition); // Flags: Event|Public|BlueprintEvent 0x15D4BEE0D00
		void ExecuteUbergraph_B_SparksCosmeticPreviewDisplay(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D4BEE0E00
		void NewEventDispatcher__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D4BEE0A00
	};


	// Class /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C
	// Inherited from ABp_SparksActorPreviewLightRig_Base_C -> ASparksItemPreviewOffPawnActor -> AFortItemPreviewOffPawnActor -> AFortItemPreviewSingleAngleActor -> AFortItemPreviewActor -> AActor -> UObject
	// Size: 0xA0 (0x570 - 0x4D0)
	class AB_SparksOffActorPreview_C : public ABp_SparksActorPreviewLightRig_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4D0(0x8)
		USkeletalMeshComponent SampleMesh; // 0x4D8(0x8)
		UArrowComponent Arrow; // 0x4E0(0x8)
		UDirectionalLightComponent DirectionalLight_pc; // 0x4E8(0x8)
		UDirectionalLightComponent DirectionalLight_mobile; // 0x4F0(0x8)
		USkyLightComponent SkyLight_mobile; // 0x4F8(0x8)
		USpotLightComponent RimRight3_pc; // 0x500(0x8)
		USkyLightComponent SkyLight_pc; // 0x508(0x8)
		USpotLightComponent SpotLight_rimlight_pc; // 0x510(0x8)
		USpotLightComponent RimRight2_pc; // 0x518(0x8)
		USpotLightComponent RimBottom_pc; // 0x520(0x8)
		USpotLightComponent RimTop_pc; // 0x528(0x8)
		USceneComponent Lighting; // 0x530(0x8)
		float Timeline_0_HiddenAmount_1D4E289F4B8CA6B6B9F4579D0FE7ABCC; // 0x538(0x4)
		TEnumAsByte Timeline_0__Direction_1D4E289F4B8CA6B6B9F4579D0FE7ABCC; // 0x53C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x53D(0x3) UNKNOWN PROPERTY
		UTimelineComponent Timeline; // 0x540(0x8)
		TEnumAsByte Timeline__Direction_941C70EB408D2013A38BD198CDF9688B; // 0x548(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x549(0x7) UNKNOWN PROPERTY
		UTimelineComponent Timeline; // 0x550(0x8)
		bool Is__active; // 0x558(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x559(0x7) UNKNOWN PROPERTY
		TArray SkeletalMeshToResIn; // 0x560(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C");
			return ret;
		}

		void GetInstrumentMeshComponents(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D58FE7900
		void Light Control(bool Active); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D58FE7B00
		void Set UP Lighting(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D58FE7F00
		void Switch Mobile Lighting(bool NewParam); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D58FE8100
		void Switch PC Lighting(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D58FE8200
		void HandleLightingSettingsChanged(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D58FE7A00
		void Switch Erebus Lighting(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D58FE8000
		void Timeline__FinishedFunc(); // Flags: BlueprintEvent 0x15D58FEB500
		void Timeline__UpdateFunc(); // Flags: BlueprintEvent 0x15D6C039F00
		void Timeline__PlayResIn__EventFunc(); // Flags: BlueprintEvent 0x15D58FEB600
		void Timeline__LoadingFXOutro__EventFunc(); // Flags: BlueprintEvent 0x15D58FEB700
		void Timeline__ShowPawn__EventFunc(); // Flags: BlueprintEvent 0x15D58FEA900
		void Timeline_0__FinishedFunc(); // Flags: BlueprintEvent 0x15D58FE8300
		void Timeline_0__UpdateFunc(); // Flags: BlueprintEvent 0x15D58FE8400
		void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor); // Flags: Event|Protected|BlueprintEvent 0x15D58FE7E00
		void UpdateSettings(); // Flags: BlueprintCallable|BlueprintEvent 0x15D58FEC100
		void OnPreviewVisualsBeginLoading(); // Flags: Event|Protected|BlueprintEvent 0x15D58FE7D00
		void OnAllLODStreamingComplete(); // Flags: Event|Public|BlueprintEvent 0x15D58FE7C00
		void ExecuteUbergraph_B_SparksOffActorPreview(int32_t EntryPoint); // Flags: Final 0x15D4BEE0100
	};


	// Class /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C
	// Inherited from ASparksItemPreviewOnPawnActor -> AFortItemPreviewOnPawnActor -> AFortItemPreviewMultiAngleActor -> AFortItemPreviewActor -> AActor -> UObject
	// Size: 0x150 (0x8F0 - 0x7A0)
	class AB_SparksOnActorPreviewDefault_C : public ASparksItemPreviewOnPawnActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x7A0(0x8)
		UArrowComponent Temp_IASDerezAbsorbPoint; // 0x7A8(0x8)
		UArrowComponent Arrow1; // 0x7B0(0x8)
		UDirectionalLightComponent Directional_Light_For_Atmosphere_PC; // 0x7B8(0x8)
		USkyLightComponent SkyLightPC; // 0x7C0(0x8)
		UArrowComponent Arrow; // 0x7C8(0x8)
		USkyLightComponent SkyLightLowMobile; // 0x7D0(0x8)
		UDirectionalLightComponent DirectionalLightMobile; // 0x7D8(0x8)
		USpotLightComponent KeyLight_StandaloneForSwitch; // 0x7E0(0x8)
		USpotLightComponent KeyLight5; // 0x7E8(0x8)
		USpotLightComponent KeyLight6; // 0x7F0(0x8)
		USpotLightComponent KeyLigh3; // 0x7F8(0x8)
		USpotLightComponent KeyLight2; // 0x800(0x8)
		USpotLightComponent BounceRear1; // 0x808(0x8)
		USpotLightComponent RimLowerRight1; // 0x810(0x8)
		USpotLightComponent RimLeft1; // 0x818(0x8)
		USpotLightComponent RimTopRight1; // 0x820(0x8)
		USpotLightComponent RimBottomLeft1; // 0x828(0x8)
		USpotLightComponent Bounce1; // 0x830(0x8)
		USceneComponent LightTransform; // 0x838(0x8)
		UStaticMeshComponent Plane; // 0x840(0x8)
		USkeletalMeshComponent Sample_Mesh; // 0x848(0x8)
		float RezInMaterialEffectTimeLine2_NewTrack_0_EE684F644FE38B4A30D17FB8CF917357; // 0x850(0x4)
		TEnumAsByte RezInMaterialEffectTimeLine2__Direction_EE684F644FE38B4A30D17FB8CF917357; // 0x854(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x855(0x3) UNKNOWN PROPERTY
		UTimelineComponent RezInMaterialEffectTimeLine2; // 0x858(0x8)
		float RezInMaterialEffectTimeLine_NewTrack_0_9C89220943F4EBA1DF12D38A05B1FC5C; // 0x860(0x4)
		TEnumAsByte RezInMaterialEffectTimeLine__Direction_9C89220943F4EBA1DF12D38A05B1FC5C; // 0x864(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x865(0x3) UNKNOWN PROPERTY
		UTimelineComponent RezInMaterialEffectTimeLine; // 0x868(0x8)
		bool AlwaysOn; // 0x870(0x1)
		bool IsActive; // 0x871(0x1)
		bool debugConstructionLighting; // 0x872(0x1)
		unsigned char UnknownData07_6[0x5]; // 0x873(0x5) UNKNOWN PROPERTY
		UParticleSystemComponent ObscuringLoopEmitter; // 0x878(0x8)
		FRotator ToonLightRotatio; // 0x880(0x18)
		bool bIsBattlePassReward; // 0x898(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x899(0x7) UNKNOWN PROPERTY
		FTimerHandle LOD_StreamingSafetyTimer; // 0x8A0(0x8)
		UMaterialInterface DefaultFloorMaterial; // 0x8A8(0x8)
		UMaterialInterface CustomFloorMaterial; // 0x8B0(0x8)
		FStateTransitionPauseRequestHandle ItemsPendingTransitionOutHandle; // 0x8B8(0x10)
		UFXSystemComponent IASLoadingFX_LoopFX; // 0x8C8(0x8)
		bool Use_Secondary_Transition_Effects; // 0x8D0(0x1)
		bool Show_Floor; // 0x8D1(0x1)
		unsigned char UnknownData09_6[0x6]; // 0x8D2(0x6) UNKNOWN PROPERTY
		FTimerHandle IASLoadingDelayTimer; // 0x8D8(0x8)
		FTimerHandle IASLoadingFXDestroyDelayTimer; // 0x8E0(0x8)
		FTimerHandle IASResinDelayTimer; // 0x8E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C");
			return ret;
		}

		void IsSkyDiveContrailItem(bool& bSuccess); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D4BEE2400
		void OutroAndDestroyLoadingEffects(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D4BEE5900
		void HandleLightingSettingsChanged(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE2300
		void DestroyLoadingEffects(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE2800
		void SpawnLoadingEffects(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE5000
		void SetupLighting(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE5100
		void SpawnResInEffects(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE4F00
		void SetupFloor(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D4BEE5200
		void Get LOD Streaming Safety Duration(); // Flags: Public|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D4BEE2500
		void SwitchErebusLighting(bool Visibility); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D4BEE4D00
		void SetFloorEnabled(bool Show Floor); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE5300
		void LightControl(bool Active); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE6300
		void SwitchPCLighting(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE4B00
		void SwitchMobileLighting(bool NewParam); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE4C00
		void RezInMaterialEffectTimeLine__FinishedFunc(); // Flags: BlueprintEvent 0x15D4BEE5500
		void RezInMaterialEffectTimeLine__UpdateFunc(); // Flags: BlueprintEvent 0x15D4BEE5400
		void RezInMaterialEffectTimeLine2__FinishedFunc(); // Flags: BlueprintEvent 0x15D4BEE5700
		void RezInMaterialEffectTimeLine2__UpdateFunc(); // Flags: BlueprintEvent 0x15D4BEE5600
		void SpawnSoundPlayback(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4BEE4E00
		void OnUpdateFloorMaterial(bool bEnableAutotestBackground); // Flags: Event|Protected|BlueprintEvent 0x15D4BEE5A00
		void OnItemsPendingTransitionOut(FStateTransitionControllerHandle& TransitionController); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D4BEE6000
		void Internal_ItemsPendingTransitionOutComplete(FStateTransitionControllerHandle TransitionController); // Flags: BlueprintCallable|BlueprintEvent 0x15D4BEE2200
		void OnItemsPendingTransitionOut_SpawnResOutEffects(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4BEE5E00
		void FinishShowingResOutEffects(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4BEE2600
		void OnItemsPendingTransitionOut_EnsureAllResOutEffectsAreCleanedUp(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4BEE5F00
		void OnSetFloorMaterial(UMaterialInterface InMaterialInstance); // Flags: Event|Public|BlueprintEvent 0x15D4BEE5B00
		void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor); // Flags: Event|Protected|BlueprintEvent 0x15D4BEE5C00
		void OnAllLODStreamingComplete(); // Flags: Event|Public|BlueprintEvent 0x15D4BEE6200
		void OnPreviewVisualsBeginLoading(); // Flags: Event|Protected|BlueprintEvent 0x15D4BEE5D00
		void OnCurrentVisualsCleanedUp(); // Flags: Event|Public|BlueprintEvent 0x15D4BEE6100
		void Backup_LODStreamingFailed(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4BEE2900
		void RezInMaterialEffect(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4BEE5800
		void ExecuteUbergraph_B_SparksOnActorPreviewDefault(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D4BEE2700
	};


	// Class /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C
	// Inherited from AFortItemPreviewOffPawnActor -> AFortItemPreviewSingleAngleActor -> AFortItemPreviewActor -> AActor -> UObject
	// Size: 0xAA (0x57A - 0x4D0)
	class ASongItemPreview_C : public AFortItemPreviewOffPawnActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4D0(0x8)
		UStaticMeshComponent StageLight3; // 0x4D8(0x8)
		UStaticMeshComponent StageLight2; // 0x4E0(0x8)
		UStaticMeshComponent AlbumCover_StageLights; // 0x4E8(0x8)
		UStaticMeshComponent SM_AlbumCover; // 0x4F0(0x8)
		USkyLightComponent SkyLightLowMobile; // 0x4F8(0x8)
		UArrowComponent Arrow; // 0x500(0x8)
		UDirectionalLightComponent DirectionalLightMobile; // 0x508(0x8)
		USpotLightComponent KeyLight6; // 0x510(0x8)
		USpotLightComponent KeyLigh3; // 0x518(0x8)
		USpotLightComponent KeyLight2; // 0x520(0x8)
		USpotLightComponent RimLowerRight1; // 0x528(0x8)
		USpotLightComponent RimLeft1; // 0x530(0x8)
		USpotLightComponent KeyLight5; // 0x538(0x8)
		USpotLightComponent RimBottomLeft1; // 0x540(0x8)
		USpotLightComponent Bounce1; // 0x548(0x8)
		USpotLightComponent BounceRear1; // 0x550(0x8)
		USpotLightComponent RimTopRight1; // 0x558(0x8)
		USceneComponent Scene_Lighting; // 0x560(0x8)
		float Timeline_LErp_440FD4D745E0E071C641BAB46D630F85; // 0x568(0x4)
		TEnumAsByte Timeline__Direction_440FD4D745E0E071C641BAB46D630F85; // 0x56C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x56D(0x3) UNKNOWN PROPERTY
		UTimelineComponent Timeline; // 0x570(0x8)
		bool IsActive; // 0x578(0x1)
		bool AlwaysOn; // 0x579(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C");
			return ret;
		}

		void LightControl(bool Active); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE9E00
		void SwitchPCLighting(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE9B00
		void SwitchMobileLighting(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4BEE9C00
		void Timeline__FinishedFunc(); // Flags: BlueprintEvent 0x15D4BEE9A00
		void Timeline__UpdateFunc(); // Flags: BlueprintEvent 0x15D4BEE9900
		void UpdateSettings(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4BEE9800
		void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor); // Flags: Event|Protected|BlueprintEvent 0x15D4BEE9D00
		void ExecuteUbergraph_SongItemPreview(int32_t EntryPoint); // Flags: Final 0x15D4BEE9F00
	};


	// Class /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C
	// Inherited from ASparksSongPreviewActor -> AActor -> UObject
	// Size: 0x60 (0x318 - 0x2B8)
	class AB_SparksSong_PreviewDisplay_C : public ASparksSongPreviewActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UBPC_SparksSongPreviewer_C SongPreviewer; // 0x2C0(0x8)
		UPaperSpriteComponent PaperSprite; // 0x2C8(0x8)
		UStaticMeshComponent SM_AlbumCover; // 0x2D0(0x8)
		USceneComponent Scene; // 0x2D8(0x8)
		UMaterialInstanceDynamic AlbumCoverMID; // 0x2E0(0x8)
		UAthenaMusicPackItemDefinition MyMusicPack; // 0x2E8(0x8)
		bool CanRetriggerNextMusicPack; // 0x2F0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2F1(0x7) UNKNOWN PROPERTY
		FDataTableRowHandle InputAbandon; // 0x2F8(0x10)
		UAudioComponent CurrentPreviewAudio; // 0x308(0x8)
		FTimerHandle DebounceTimerHandle; // 0x310(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C");
			return ret;
		}

		FTransform GetFrameTargetTransform(); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D4BEEC100
		FBoxSphereBounds GetFrameTargetBounds(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D4BEEC200
		void PerformSpecialAction(FName ActionName); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D4BEEBF00
		void StartSongPreview(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D4BEEBE00
		void OnSongTextureLoaded(UTexture2D CoverArt); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D4BEEC000
		void DebounceEvent(); // Flags: BlueprintCallable|BlueprintEvent 0x15D4BEEC400
		void ExecuteUbergraph_B_SparksSong_PreviewDisplay(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D4BEEC300
	};

}
