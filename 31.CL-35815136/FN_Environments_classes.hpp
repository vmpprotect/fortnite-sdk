#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Environments
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C
	// Inherited from AFortItemPreviewWorld -> AActor -> UObject
	// Size: 0x11 (0x351 - 0x340)
	class AVaultWorld_C : public AFortItemPreviewWorld	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x8)
		UStaticMeshComponent* SM_InvertedHalfSphere; // 0x348(0x8)
		bool bIsPrimaryBackgroundActive; // 0x350(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C");
			return ret;
		}

		void Assign Background Dynamic Materials(AStaticMeshActor* TargetBackground); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetVaultRotator(AVaultRotator_C* VaultRotator); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNewSceneBackgroundChildActor(AFortStaticMeshActor* NewActor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VaultWorld(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C
	// Inherited from AItemPreviewRotator -> AFortItemPreviewSceneChanger -> AActor -> UObject
	// Size: 0x1B8 (0x5B0 - 0x3F8)
	class AVaultRotator_C : public AItemPreviewRotator	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UDirectionalLightComponent* DirectionalLightMobile; // 0x400(0x8)
		UDirectionalLightComponent* DirectionalLight_LOWPC; // 0x408(0x8)
		USceneComponent* DirectionalLights; // 0x410(0x8)
		USkyLightComponent* SkyLightLowMobile; // 0x418(0x8)
		USkyLightComponent* SkyLight; // 0x420(0x8)
		USkyLightComponent* SkyLight_LOWPC; // 0x428(0x8)
		UArrowComponent* Arrow; // 0x430(0x8)
		UPostProcessComponent* PostProcess_Mobile; // 0x438(0x8)
		UPostProcessComponent* PostProcess_LOWPC; // 0x440(0x8)
		USceneComponent* GenericLighting; // 0x448(0x8)
		float Timeline_YawRotation_YawInterpAlpha_F13714DD4AFE0C9C8857E2950BEC127B; // 0x450(0x4)
		TEnumAsByte<ETimelineDirection> Timeline_YawRotation__Direction_F13714DD4AFE0C9C8857E2950BEC127B; // 0x454(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x455(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline_YawRotation; // 0x458(0x8)
		float Timeline_Zoom_ZoomLevel_6FFD6729471BD965D850258DA1C0AF39; // 0x460(0x4)
		TEnumAsByte<ETimelineDirection> Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39; // 0x464(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x465(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline_Zoom; // 0x468(0x8)
		FVector CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x470(0x18)
		FVector CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x488(0x18)
		float CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714; // 0x4A0(0x4)
		float CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714; // 0x4A4(0x4)
		TEnumAsByte<ETimelineDirection> CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714; // 0x4A8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x4A9(0x7) UNKNOWN PROPERTY
		UTimelineComponent* CameraTurn_180_to; // 0x4B0(0x8)
		FVector CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4B8(0x18)
		FVector CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4D0(0x18)
		float CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4E8(0x4)
		float CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4EC(0x4)
		TEnumAsByte<ETimelineDirection> CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4F0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x4F1(0x7) UNKNOWN PROPERTY
		UTimelineComponent* CameraTurn_0_to; // 0x4F8(0x8)
		FTransform InitialCameraTransform; // 0x500(0x60)
		USoundBase* ClockwiseSound; // 0x560(0x8)
		USoundBase* CounterClockwiseSound; // 0x568(0x8)
		bool DebugMobile_Lighting; // 0x570(0x1)
		bool DebugLightingPC; // 0x571(0x1)
		bool IsActive; // 0x572(0x1)
		bool AlwaysOn; // 0x573(0x1)
		bool DebugLighting_LOWDetailPC; // 0x574(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x575(0x3) UNKNOWN PROPERTY
		double TargetZoomLevel; // 0x578(0x8)
		FRotator StartingRotationOffset; // 0x580(0x18)
		FRotator TargetRotationOffset; // 0x598(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C");
			return ret;
		}

		void PlaySoundWhenEnabled(USoundBase* Sound); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundColor(FLinearColor RGBA0, FLinearColor RGBA1); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleBackgroundText(bool bDisplayText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LightControl(bool Active); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchPCLighting(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchPCLighting_LOWDetail(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchMobileLighting(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundString(FText CustomText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CameraTurn_0_to_180__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CameraTurn_0_to_180__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CameraTurn_180_to_360__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CameraTurn_180_to_360__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_Zoom__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_Zoom__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_YawRotation__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_YawRotation__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSettings(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCameraTransitionReady(bool bPrimaryToSecondary, UFortAccountItemDefinition* PrimaryRequestedItem, FSceneTransitionOptions& Options); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTargetZoomLevelSet(float TargetZoomLevel); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetBackgroundMessageText(FText& BackgroundMessageText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateBackgroundColor(bool bEnableAutotestBackground); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTargetRotationOffsetSet(FRotator& TargetRotationOffset); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTargetRotationOffsetCanceled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTargetZoomLevelCanceled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VaultRotator(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultSceneSinglePedestal.VaultSceneSinglePedestal_C
	// Inherited from AItemPreviewScene -> AActor -> UObject
	// Size: 0x0 (0x378 - 0x378)
	class AVaultSceneSinglePedestal_C : public AItemPreviewScene	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultSceneSinglePedestal.VaultSceneSinglePedestal_C");
			return ret;
		}
	};


	// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C
	// Inherited from AFortCameraTargetPedestal -> AActor -> UObject
	// Size: 0x9 (0x529 - 0x520)
	class AItemPreviewPedestal_C : public AFortCameraTargetPedestal	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x8)
		bool Floor_Enabled; // 0x528(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C");
			return ret;
		}

		void Remove Floor(AFortItemPreviewActor* Preview); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemDisplayed(EFortItemType ItemType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ItemPreviewPedestal(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C
	// Inherited from AAthenaWrapPreviewActor -> AFortItemPreviewMultiAngleActor -> AFortItemPreviewActor -> AActor -> UObject
	// Size: 0xC8 (0x708 - 0x640)
	class AWrapPreview_C : public AAthenaWrapPreviewActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x640(0x8)
		USkyLightComponent* SkyLightPC; // 0x648(0x8)
		USkeletalMeshComponent* AssaultRiflePreview; // 0x650(0x8)
		USkeletalMeshComponent* MechPreview; // 0x658(0x8)
		USkyLightComponent* SkyLightLowMobile; // 0x660(0x8)
		UArrowComponent* Arrow; // 0x668(0x8)
		UDirectionalLightComponent* DirectionalLightMobile; // 0x670(0x8)
		USpotLightComponent* KeyLight_StandaloneForSwitch; // 0x678(0x8)
		USpotLightComponent* KeyLigh4; // 0x680(0x8)
		USpotLightComponent* KeyLight7; // 0x688(0x8)
		USpotLightComponent* KeyLight8; // 0x690(0x8)
		USpotLightComponent* KeyLight3; // 0x698(0x8)
		USpotLightComponent* RimLowerRight2; // 0x6A0(0x8)
		USpotLightComponent* RimLeft2; // 0x6A8(0x8)
		USpotLightComponent* Bounce2; // 0x6B0(0x8)
		USpotLightComponent* BounceRear2; // 0x6B8(0x8)
		USpotLightComponent* RimTopRight2; // 0x6C0(0x8)
		USpotLightComponent* RimBottomLeft2; // 0x6C8(0x8)
		USceneComponent* LightingPivot; // 0x6D0(0x8)
		UStaticMeshComponent* Plane; // 0x6D8(0x8)
		bool bLightsScaledForVehicle; // 0x6E0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x6E1(0x7) UNKNOWN PROPERTY
		double DeltaScale; // 0x6E8(0x8)
		bool IsActive; // 0x6F0(0x1)
		bool AlwaysOn; // 0x6F1(0x1)
		bool FloorEverAllowed; // 0x6F2(0x1)
		bool debugConstructionLighting; // 0x6F3(0x1)
		unsigned char UnknownData01_6[0x4]; // 0x6F4(0x4) UNKNOWN PROPERTY
		FStateTransitionPauseRequestHandle ItemsPendingTransitionOutHandle; // 0x6F8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C");
			return ret;
		}

		void UpdateFloorVisibility(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchErebusLighting(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateLightingScale(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFloorEnabled(bool Floor Enabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LightControl(bool Active); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchPCLighting(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchMobileLighting(bool NewParam); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleLightingScale(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSettings(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetFloorMaterial(UMaterialInterface* InMaterialInstance); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateFloorMaterial(bool bEnableAutotestBackground); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemsPendingTransitionOut(FStateTransitionControllerHandle& TransitionController); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Internal_ItemsPendingTransitionOutComplete(FStateTransitionControllerHandle TransitionController); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemsPendingTransitionOut_SpawnResOutEffects(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FinishShowingResOutEffects(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemsPendingTransitionOut_EnsureAllResOutEffectsAreCleanedUp(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WrapPreview(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C
	// Inherited from AFortItemPreviewOnPawnActor -> AFortItemPreviewMultiAngleActor -> AFortItemPreviewActor -> AActor -> UObject
	// Size: 0x150 (0x8E0 - 0x790)
	class AItemOnPawnPreview_C : public AFortItemPreviewOnPawnActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x790(0x8)
		UArrowComponent* Temp_IASDerezAbsorbPoint; // 0x798(0x8)
		UArrowComponent* Arrow1; // 0x7A0(0x8)
		UDirectionalLightComponent* Directional_Light_For_Atmosphere_PC; // 0x7A8(0x8)
		USkyLightComponent* SkyLightPC; // 0x7B0(0x8)
		UArrowComponent* Arrow; // 0x7B8(0x8)
		USkyLightComponent* SkyLightLowMobile; // 0x7C0(0x8)
		UDirectionalLightComponent* DirectionalLightMobile; // 0x7C8(0x8)
		USpotLightComponent* KeyLight_StandaloneForSwitch; // 0x7D0(0x8)
		USpotLightComponent* KeyLight5; // 0x7D8(0x8)
		USpotLightComponent* KeyLight6; // 0x7E0(0x8)
		USpotLightComponent* KeyLigh3; // 0x7E8(0x8)
		USpotLightComponent* KeyLight2; // 0x7F0(0x8)
		USpotLightComponent* BounceRear1; // 0x7F8(0x8)
		USpotLightComponent* RimLowerRight1; // 0x800(0x8)
		USpotLightComponent* RimLeft1; // 0x808(0x8)
		USpotLightComponent* RimTopRight1; // 0x810(0x8)
		USpotLightComponent* RimBottomLeft1; // 0x818(0x8)
		USpotLightComponent* Bounce1; // 0x820(0x8)
		USceneComponent* LightTransform; // 0x828(0x8)
		UStaticMeshComponent* Plane; // 0x830(0x8)
		USkeletalMeshComponent* Sample_Mesh; // 0x838(0x8)
		float RezInMaterialEffectTimeLine2_NewTrack_0_FBE08AE14EC4BA399756F0BBFA6ABC31; // 0x840(0x4)
		TEnumAsByte<ETimelineDirection> RezInMaterialEffectTimeLine2__Direction_FBE08AE14EC4BA399756F0BBFA6ABC31; // 0x844(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x845(0x3) UNKNOWN PROPERTY
		UTimelineComponent* RezInMaterialEffectTimeLine2; // 0x848(0x8)
		float RezInMaterialEffectTimeLine_NewTrack_0_963A663B4B1DFB2954D581893C8ACFD8; // 0x850(0x4)
		TEnumAsByte<ETimelineDirection> RezInMaterialEffectTimeLine__Direction_963A663B4B1DFB2954D581893C8ACFD8; // 0x854(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x855(0x3) UNKNOWN PROPERTY
		UTimelineComponent* RezInMaterialEffectTimeLine; // 0x858(0x8)
		bool AlwaysOn; // 0x860(0x1)
		bool IsActive; // 0x861(0x1)
		bool debugConstructionLighting; // 0x862(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x863(0x5) UNKNOWN PROPERTY
		UParticleSystemComponent* ObscuringLoopEmitter; // 0x868(0x8)
		FRotator ToonLightRotatio; // 0x870(0x18)
		bool bIsBattlePassReward; // 0x888(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x889(0x7) UNKNOWN PROPERTY
		FTimerHandle LOD_StreamingSafetyTimer; // 0x890(0x8)
		UMaterialInterface* DefaultFloorMaterial; // 0x898(0x8)
		UMaterialInterface* CustomFloorMaterial; // 0x8A0(0x8)
		FStateTransitionPauseRequestHandle ItemsPendingTransitionOutHandle; // 0x8A8(0x10)
		UFXSystemComponent* IASLoadingFX_LoopFX; // 0x8B8(0x8)
		bool Use_Secondary_Transition_Effects; // 0x8C0(0x1)
		bool Show_Floor; // 0x8C1(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x8C2(0x6) UNKNOWN PROPERTY
		FTimerHandle IASLoadingDelayTimer; // 0x8C8(0x8)
		FTimerHandle IASLoadingFXDestroyDelayTimer; // 0x8D0(0x8)
		FTimerHandle IASResinDelayTimer; // 0x8D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C");
			return ret;
		}

		void IsSkyDiveContrailItem(bool& bSuccess); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OutroAndDestroyLoadingEffects(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleLightingSettingsChanged(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyLoadingEffects(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnLoadingEffects(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupLighting(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnResInEffects(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupFloor(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get LOD Streaming Safety Duration(); // Flags: Public|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchErebusLighting(bool Visibility); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFloorEnabled(bool Show Floor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LightControl(bool Active); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchPCLighting(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchMobileLighting(bool NewParam); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RezInMaterialEffectTimeLine__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RezInMaterialEffectTimeLine__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RezInMaterialEffectTimeLine2__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RezInMaterialEffectTimeLine2__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateFloorMaterial(bool bEnableAutotestBackground); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnSoundPlayback(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemsPendingTransitionOut(FStateTransitionControllerHandle& TransitionController); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetFloorMaterial(UMaterialInterface* InMaterialInstance); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Internal_ItemsPendingTransitionOutComplete(FStateTransitionControllerHandle TransitionController); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemsPendingTransitionOut_SpawnResOutEffects(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FinishShowingResOutEffects(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemsPendingTransitionOut_EnsureAllResOutEffectsAreCleanedUp(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAllLODStreamingComplete(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPreviewVisualsBeginLoading(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurrentVisualsCleanedUp(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Backup_LODStreamingFailed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RezInMaterialEffect(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ItemOnPawnPreview(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview_Outfits.ItemOnPawnPreview_Outfits_C
	// Inherited from AItemOnPawnPreview_C -> AFortItemPreviewOnPawnActor -> AFortItemPreviewMultiAngleActor -> AFortItemPreviewActor -> AActor -> UObject
	// Size: 0x0 (0x8E0 - 0x8E0)
	class AItemOnPawnPreview_Outfits_C : public AItemOnPawnPreview_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview_Outfits.ItemOnPawnPreview_Outfits_C");
			return ret;
		}
	};


	// Class /Game/Environments/FrontEnd/BackPlates/Blueprint/I_FrontendBackplateMatchmakingInteraction.I_FrontendBackplateMatchmakingInteraction_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UI_FrontendBackplateMatchmakingInteraction_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/BackPlates/Blueprint/I_FrontendBackplateMatchmakingInteraction.I_FrontendBackplateMatchmakingInteraction_C");
			return ret;
		}

		void MatchmakingEnded(bool bWasSuccess); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HasMatcmakingInteraction(bool& HasInteraction); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnteringMatchmaking(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/BackPlates/Blueprint/BP_FrontendBackPlate.BP_FrontendBackPlate_C
	// Inherited from AActor -> UObject
	// Size: 0x159 (0x3E9 - 0x290)
	class ABP_FrontendBackPlate_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		UStaticMeshComponent* SM_INvertedSphere; // 0x298(0x8)
		UStaticMeshComponent* SM_FrontendBackPlate_Floor; // 0x2A0(0x8)
		UStaticMeshComponent* StaticMesh_fog; // 0x2A8(0x8)
		UStaticMeshComponent* StaticMesh; // 0x2B0(0x8)
		USceneComponent* DefaultSceneRoot; // 0x2B8(0x8)
		float StopHyperSpeed_BlurControl_740818E745B3B8A476EC3CA79F88917D; // 0x2C0(0x4)
		float StopHyperSpeed_LessBrightFlash_740818E745B3B8A476EC3CA79F88917D; // 0x2C4(0x4)
		float StopHyperSpeed_Flash_740818E745B3B8A476EC3CA79F88917D; // 0x2C8(0x4)
		TEnumAsByte<ETimelineDirection> StopHyperSpeed__Direction_740818E745B3B8A476EC3CA79F88917D; // 0x2CC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2CD(0x3) UNKNOWN PROPERTY
		UTimelineComponent* StopHyperSpeed; // 0x2D0(0x8)
		float HyperSpace_StarUVScale_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2D8(0x4)
		float HyperSpace_StarFieldFade_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2DC(0x4)
		float HyperSpace_StarBloom_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2E0(0x4)
		float HyperSpace_NumStarLoops_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2E4(0x4)
		float HyperSpace_UVScale_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2E8(0x4)
		float HyperSpace_ShowStarLines_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2EC(0x4)
		float HyperSpace_bloom_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2F0(0x4)
		float HyperSpace_Tunnel_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2F4(0x4)
		float HyperSpace_flash_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2F8(0x4)
		float HyperSpace_starlines_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2FC(0x4)
		TEnumAsByte<ETimelineDirection> HyperSpace__Direction_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x300(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x301(0x7) UNKNOWN PROPERTY
		UTimelineComponent* HyperSpace; // 0x308(0x8)
		float UISpecailEventTransition_UsingUISpecialEventColors_26FA49894E4D045B21346598A2D837C2; // 0x310(0x4)
		TEnumAsByte<ETimelineDirection> UISpecailEventTransition__Direction_26FA49894E4D045B21346598A2D837C2; // 0x314(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x315(0x3) UNKNOWN PROPERTY
		UTimelineComponent* UISpecailEventTransition; // 0x318(0x8)
		UTexture* BackgroundTexture; // 0x320(0x8)
		UMaterialInterface* Material_background; // 0x328(0x8)
		UMaterialInterface* Material_Fog; // 0x330(0x8)
		UMaterialInstanceDynamic* BlurMaterial; // 0x338(0x8)
		UTextureRenderTarget2D* RenderTarget; // 0x340(0x8)
		bool UpdateFoginRealTime; // 0x348(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x349(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* MID_Floor; // 0x350(0x8)
		UMaterialInterface* PreBlurMaterial; // 0x358(0x8)
		UTextureRenderTarget2D* RenderTarget_preblur; // 0x360(0x8)
		UMaterialInstanceDynamic* MID_Background; // 0x368(0x8)
		UMaterialInstanceDynamic* MID_Preblur; // 0x370(0x8)
		FMulticastInlineDelegate BeginRockyRidge; // 0x378(0x10)
		FMulticastInlineDelegate OnRockyRidgeFinished; // 0x388(0x10)
		FMulticastInlineDelegate HidePlayer; // 0x398(0x10)
		FMulticastInlineDelegate RequestLobbyColorChanges; // 0x3A8(0x10)
		FLinearColor CurrentUIColorScheme; // 0x3B8(0x10)
		bool bHasUIColorOverride; // 0x3C8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x3C9(0x7) UNKNOWN PROPERTY
		TArray<AActor*> FloatingShapes; // 0x3D0(0x10)
		UAudioComponent* LoopingAudio; // 0x3E0(0x8)
		bool AllowMatchmakingInteraction; // 0x3E8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/BackPlates/Blueprint/BP_FrontendBackPlate.BP_FrontendBackPlate_C");
			return ret;
		}

		void HasMatcmakingInteraction(bool& HasInteraction); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateUniqueMaterialName(FString PostFix, FString& UniqueString); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFloatingShapeVisibility(bool Show); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSpecialEventUIColorScheme(bool SetUIPanelColors, FLinearColor Backing, FLinearColor Backing_Hover, FLinearColor Backing_Selection, bool SetFontColors, FLinearColor Primary, FLinearColor Secondary, FLinearColor Tertiary, FLinearColor Quaternary); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HasUIColorOverride(bool& HasUIColorOverride); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetUIColorScheme(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetUIColorScheme(FLinearColor& ColorScheme, bool& bHasOverride); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RequestUIColorScheme(FLinearColor MainUIColor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateRenderTargetRealtime(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnableRealtimeUpdate(bool Enabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateRenderTarget(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundTexture(UTexture* InTexture, UMaterialInterface* InMaterial, UMaterialInterface* InPreBlurMaterial); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UISpecailEventTransition__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UISpecailEventTransition__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HyperSpace__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HyperSpace__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopHyperSpeed__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopHyperSpeed__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSettings(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayUISpecialEventTransition(bool bTransitionToSpecialEvent); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayEnterMatchmakingAnim(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetMatchmakingAnim(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetAllowMatchmakingInteraction(bool AllowInteraction); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TestBlur(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSpecialEventAudioOnMatchmakingEnd(bool Success); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MatchmakingEnded(bool bWasSuccess); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnteringMatchmaking(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DebugScalabilitySettings(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_FrontendBackPlate(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RequestLobbyColorChanges__DelegateSignature(FLinearColor Color_A, bool UseDefaultScheme); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HidePlayer__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRockyRidgeFinished__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BeginRockyRidge__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/PedestalGroup_Background.PedestalGroup_Background_C
	// Inherited from AAthenaSquadPedestalGroup -> AActor -> UObject
	// Size: 0x20 (0x2E8 - 0x2C8)
	class APedestalGroup_Background_C : public AAthenaSquadPedestalGroup	
	{
	public:
		UChildActorComponent* CAC_Pedestal3; // 0x2C8(0x8)
		UChildActorComponent* CAC_Pedestal2; // 0x2D0(0x8)
		UChildActorComponent* CAC_Pedestal1; // 0x2D8(0x8)
		UChildActorComponent* CAC_Pedestal0; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/PedestalGroup_Background.PedestalGroup_Background_C");
			return ret;
		}
	};


	// Class /Game/Environments/FrontEnd/Blueprints/PedestalGroup_Primary.PedestalGroup_Primary_C
	// Inherited from AAthenaSquadPedestalGroup -> AActor -> UObject
	// Size: 0x20 (0x2E8 - 0x2C8)
	class APedestalGroup_Primary_C : public AAthenaSquadPedestalGroup	
	{
	public:
		UChildActorComponent* CAC_Pedestal3; // 0x2C8(0x8)
		UChildActorComponent* CAC_Pedestal2; // 0x2D0(0x8)
		UChildActorComponent* CAC_Pedestal1; // 0x2D8(0x8)
		UChildActorComponent* CAC_Pedestal0; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/PedestalGroup_Primary.PedestalGroup_Primary_C");
			return ret;
		}
	};


	// Class /Game/Environments/FrontEnd/Blueprints/TeamMemberPedestal.TeamMemberPedestal_C
	// Inherited from AFortTeamMemberPedestal -> AFortItemPlacementActor -> AActor -> UObject
	// Size: 0x4E0 (0xA58 - 0x578)
	class ATeamMemberPedestal_C : public AFortTeamMemberPedestal	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x578(0x8)
		UStaticMeshComponent* SM_Character_ShadowBlob; // 0x580(0x8)
		UStaticMeshComponent* SM_ObserverPlaceholder; // 0x588(0x8)
		UStaticMeshComponent* SM_LobbyFXSkipMatch; // 0x590(0x8)
		UStaticMeshComponent* SM_LobbyLightDisc_Floating_FX; // 0x598(0x8)
		UStaticMeshComponent* CharacterPlacement; // 0x5A0(0x8)
		UParticleSystemComponent* P_FE_Smoke; // 0x5A8(0x8)
		USceneComponent* LightsParent; // 0x5B0(0x8)
		UParticleSystemComponent* PS_NoPlayer_Sparkle; // 0x5B8(0x8)
		UParticleSystemComponent* PS_NoPlayer_Swirl02; // 0x5C0(0x8)
		UParticleSystemComponent* PS_NoPlayer_Swirl01; // 0x5C8(0x8)
		UStaticMeshComponent* SM_Lobby_Character_Pad_Light_Ring; // 0x5D0(0x8)
		UStaticMeshComponent* SM_Lobby_Character_Pad; // 0x5D8(0x8)
		UStaticMeshComponent* SM_Lobby_Character_TopSpot; // 0x5E0(0x8)
		UPointLightComponent* UnderlightBluePoint02; // 0x5E8(0x8)
		UPointLightComponent* UnderlightBluePoint01; // 0x5F0(0x8)
		USpotLightComponent* UnderlightBlue02; // 0x5F8(0x8)
		USpotLightComponent* UnderlightBlue01; // 0x600(0x8)
		USpotLightComponent* RimSpotLight; // 0x608(0x8)
		USpotLightComponent* TopSpotLight; // 0x610(0x8)
		float Timeline_2_NewTrack_1_5B2A92484943393ABEA8BF9AE94A7E65; // 0x618(0x4)
		float Timeline_2_NewTrack_0_5B2A92484943393ABEA8BF9AE94A7E65; // 0x61C(0x4)
		TEnumAsByte<ETimelineDirection> Timeline_2__Direction_5B2A92484943393ABEA8BF9AE94A7E65; // 0x620(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x621(0x7) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0x628(0x8)
		float Timeline_1_NewTrack_0_C7A2C78B4F1CEAE900A2CABA9772C922; // 0x630(0x4)
		TEnumAsByte<ETimelineDirection> Timeline_1__Direction_C7A2C78B4F1CEAE900A2CABA9772C922; // 0x634(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x635(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0x638(0x8)
		float Timeline_0_NewTrack_0_29F162B244A0FAE20371E7AE14A584FA; // 0x640(0x4)
		TEnumAsByte<ETimelineDirection> Timeline_0__Direction_29F162B244A0FAE20371E7AE14A584FA; // 0x644(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x645(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0x648(0x8)
		float FadeInPodium_NewTrack_0_AF4A58DF4085C76AD6B3168E661AB7DD; // 0x650(0x4)
		TEnumAsByte<ETimelineDirection> FadeInPodium__Direction_AF4A58DF4085C76AD6B3168E661AB7DD; // 0x654(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x655(0x3) UNKNOWN PROPERTY
		UTimelineComponent* FadeInPodium; // 0x658(0x8)
		bool PreviewMesh; // 0x660(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x661(0x7) UNKNOWN PROPERTY
		UStaticMesh* Mesh; // 0x668(0x8)
		bool bIsPlayerSelected; // 0x670(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x671(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* MID_Pad; // 0x678(0x8)
		FMulticastInlineDelegate Debug_OnFriendLFGRequest; // 0x680(0x10)
		UOverlay* Hovered_InputAction; // 0x690(0x8)
		ULobbyPlayerPadGadgets_C* Gadgets; // 0x698(0x8)
		UWBP_Lobby_AddPlayerBubble_C* PlayerAdd; // 0x6A0(0x8)
		AFortPlayerPawn* LastAnimatedPlayerPawn; // 0x6A8(0x8)
		bool bAllowPartySuggestions; // 0x6B0(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x6B1(0x7) UNKNOWN PROPERTY
		double OffsetLobbyAddPlayer; // 0x6B8(0x8)
		bool bPlayerPodiumHovered; // 0x6C0(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x6C1(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* MID_Pad_Light_Ring; // 0x6C8(0x8)
		UMaterialInstanceDynamic* MID_Top_Light_Ring; // 0x6D0(0x8)
		bool FxActive; // 0x6D8(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x6D9(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* MID_Holo; // 0x6E0(0x8)
		UMaterialInterface* HoloMaterial; // 0x6E8(0x8)
		USizeBox* Hovered_WithPlayer_InputAction; // 0x6F0(0x8)
		bool NewLobbyLayout; // 0x6F8(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x6F9(0x7) UNKNOWN PROPERTY
		double LightBrightnessScale; // 0x700(0x8)
		double TopSpotLight_Brightness; // 0x708(0x8)
		double TopSpotLight_Brightness_Hovered; // 0x710(0x8)
		double RimSpotLight_Brightness; // 0x718(0x8)
		double UnderlightBlueSpot_Brightness; // 0x720(0x8)
		double UnderlightBlueSpot_Brightness_Hovered; // 0x728(0x8)
		double UnderlightBluePoint_Brightness; // 0x730(0x8)
		double UnderlightBluePoint_Brightness_Hovered; // 0x738(0x8)
		bool debugHoveredLighting; // 0x740(0x1)
		unsigned char UnknownData10_6[0x7]; // 0x741(0x7) UNKNOWN PROPERTY
		TArray<FMcpVariantChannelInfo> NewVar; // 0x748(0x10)
		UMaterialInterface* HoloMaterialInst; // 0x758(0x8)
		UMaterialInstanceDynamic* MID_SkipMatchFX; // 0x760(0x8)
		bool isPopulated; // 0x768(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x769(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* MID_Pad_FX; // 0x770(0x8)
		unsigned char UnknownData12_6[0x8]; // 0x778(0x8) UNKNOWN PROPERTY
		FFortTeamMemberInfo TeamMemberInfo; // 0x780(0x230)
		UMaterialInstanceDynamic* MID_ObserverScreen; // 0x9B0(0x8)
		UMaterialInstanceDynamic* MID_Observer_Screen_Frame; // 0x9B8(0x8)
		UMaterialInstanceDynamic* MID_FakeBlobShadow; // 0x9C0(0x8)
		USizeBox* Hovered_WithPlayer_InputAction_AddFriend; // 0x9C8(0x8)
		FGuid MaterialOverride; // 0x9D0(0x10)
		FFortPawnMaterialOverrideCopiedParameters Material_Params_to_Copy; // 0x9E0(0x30)
		EFortPawnMaterialOverrideFlags Material_Override_Flags; // 0xA10(0x1)
		unsigned char UnknownData13_6[0x7]; // 0xA11(0x7) UNKNOWN PROPERTY
		FVector New_Location; // 0xA18(0x18)
		double DefaultNameplateHeight; // 0xA30(0x8)
		double DefaultSuggestionHeight; // 0xA38(0x8)
		bool isHoverSoundDisabled; // 0xA40(0x1)
		unsigned char UnknownData14_6[0x7]; // 0xA41(0x7) UNKNOWN PROPERTY
		UWBP_Nameplate_C* WBP_Nameplate; // 0xA48(0x8)
		UWBP_SocialNudge_C* WBP_SocialNudge; // 0xA50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/TeamMemberPedestal.TeamMemberPedestal_C");
			return ret;
		}

		void HasSuggestedSocialUser(bool& HasSuggestedSocialUser); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HandleNavigationUp(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HandleNavigationDown(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextMenuClosed(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayHoverSound(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleProductLightingSettings(FGameplayTag Selection); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateLightValues(float PadLightRingOpacityScale, float PadLightRingConePower, double LightBrightnessScale); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitilizeLightValuesFromContext(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UninitializeContextEvents(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurrentContextProductChanged(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Default Widget Component Heights(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnableHologram(bool Enabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyHoloMaterialOverrideToPawn(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearPawnMaterialOverride(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFNCrew(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Add Friend Button Interaction Enabled(bool IsHovered); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSparkleParticlesEnabled(bool IsEnabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopLobbyAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFakeBlobShadowVisiblity(bool Visible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPartyDataChanged(FFortTeamMemberInfo& Member Info); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTeamMemberStateChanged(FFortTeamMemberInfo Team Member Info); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayLobbyAnimation(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshWidgets(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFrontEndCameraChanged(EFrontEndCamera New Camera, EFrontEndCamera Old Camera); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeContextEvents(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleHoverInputActions(bool bIsHovered); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeInputActionRefs(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeInPodium__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeInPodium__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_0__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_0__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_1__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_1__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_2__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_2__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIsCurrentlyInMatchChanged(bool bIsInMatch); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPedestalIsPopulatedChanged(bool bIsPopulated, bool bOwningSquadContainsLocalPlayer); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnPad(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HidePad(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGameReadinessChanged(EGameReadiness GameReadiness); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNewSquadEstablished(bool bMultipleSquadsPopulated, bool bOwningSquadContainsLocalPlayer, FAthenaTeamDisplayInfo& OwningSquadStyle); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOwningPedestalGroupEstablished(int32_t SquadIdx, bool bSquadHasLocalPlayer, bool bIsPopulated); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConnectedToCampaignLobby(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTeamMemberSet(bool bHasValidTeamMember); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPreviewActorSpawned(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAvatarChanged(UTexture2D* AvatarImage, FColor AvatarBackground, FColor HighlightColor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionToCharacterScreen(bool bool); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionToLoadingScreen(bool bool); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionfromCharactertoLoadingscreen(bool bool); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDisconnectedToCampaignLobby(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleClientEvent_StoreTabSelected(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleClientEvent_StoreTabClosed(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetNameplateHeight(float Height); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetSuggestionHeight(float Height); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CallUpdateOnHovered(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HoverAudioBuffer(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Context Menu Closed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPartySuggestionChanged(FUniqueNetIdRepl SuggestedSocialUserId); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNameplateMatchmakingStatusUpdated(EPedestalNameplateMatchmakingStatus MatchmakingStatus); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHeroPawnSetupCompleted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_TeamMemberPedestal(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Debug_OnFriendLFGRequest__DelegateSignature(int32_t PlayerIndex); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C
	// Inherited from AVaultWorld_C -> AFortItemPreviewWorld -> AActor -> UObject
	// Size: 0x87 (0x3D8 - 0x351)
	class ASpecialEventVaultWorld_C : public AVaultWorld_C	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0x351(0x7) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x8)
		UStaticMeshComponent* floor; // 0x360(0x8)
		float ItemDetails_X_Offset_1EDCEF5F41216A9DADD25897C8B68493; // 0x368(0x4)
		TEnumAsByte<ETimelineDirection> ItemDetails__Direction_1EDCEF5F41216A9DADD25897C8B68493; // 0x36C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x36D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* ItemDetails; // 0x370(0x8)
		float Floor_Visibility_FloorMask_37382717410D795E9E7E0990FC3EFCC2; // 0x378(0x4)
		TEnumAsByte<ETimelineDirection> Floor_Visibility__Direction_37382717410D795E9E7E0990FC3EFCC2; // 0x37C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x37D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Floor_Visibility; // 0x380(0x8)
		float Background_Effects_SetStreaks_7B5688E44724D9F68D3C20A520093829; // 0x388(0x4)
		TEnumAsByte<ETimelineDirection> Background_Effects__Direction_7B5688E44724D9F68D3C20A520093829; // 0x38C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x38D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Background_Effects; // 0x390(0x8)
		float TransitionForward_FX_Transition_Fade_FDB9DC244ED5578954F07A87EDA84CA5; // 0x398(0x4)
		float TransitionForward_Pre_TransitionOffset_FDB9DC244ED5578954F07A87EDA84CA5; // 0x39C(0x4)
		float TransitionForward_Forward_FDB9DC244ED5578954F07A87EDA84CA5; // 0x3A0(0x4)
		TEnumAsByte<ETimelineDirection> TransitionForward__Direction_FDB9DC244ED5578954F07A87EDA84CA5; // 0x3A4(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x3A5(0x3) UNKNOWN PROPERTY
		UTimelineComponent* TransitionForward; // 0x3A8(0x8)
		float TransitionBackward_fx_Transition_fade_9CCDE9524354AF859735079DD2ED12AA; // 0x3B0(0x4)
		float TransitionBackward_Pre_Transition_Offset_9CCDE9524354AF859735079DD2ED12AA; // 0x3B4(0x4)
		float TransitionBackward_Backward_9CCDE9524354AF859735079DD2ED12AA; // 0x3B8(0x4)
		TEnumAsByte<ETimelineDirection> TransitionBackward__Direction_9CCDE9524354AF859735079DD2ED12AA; // 0x3BC(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x3BD(0x3) UNKNOWN PROPERTY
		UTimelineComponent* TransitionBackward; // 0x3C0(0x8)
		UMaterialInstance* FloorMI; // 0x3C8(0x8)
		UMaterialInstanceDynamic* FloorMID; // 0x3D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C");
			return ret;
		}

		void TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, UMaterialInstanceDynamic* Mid); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, UMaterialInstanceDynamic* Mid); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupBackgroundMaterial(UTexture2D* TextureBackground, FVaultWorldBackgroundData& BackgroundInfo, UMaterialInstanceDynamic* Mid); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionForward__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionForward__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionBackward__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionBackward__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Background-Effects__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Background-Effects__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Floor-Visibility__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Floor-Visibility__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemDetails__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemDetails__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetupBackground(UTexture2D* LoadedBackgroundTexture, FVaultWorldBackgroundData& BackgroundInfo); // Flags: HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateDisplay(bool bShowFloor, bool bShowEffects); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialBackgroundTransition(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionItemDetails(bool bShowItemDetails); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateMaterialIndex(int32_t MaterialIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_SpecialEventVaultWorld(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C
	// Inherited from AActor -> UObject
	// Size: 0x21 (0x2B1 - 0x290)
	class ACameraAnimationTransition_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		USceneComponent* DefaultSceneRoot; // 0x298(0x8)
		AFortnitePartyBackdrop_Camera_C* CameraBR; // 0x2A0(0x8)
		AFortnitePartyBackdrop_Camera_C* CameraBR16Player; // 0x2A8(0x8)
		EFrontEndCamera CameraState; // 0x2B0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C");
			return ret;
		}

		void CanChangeCamera(EFrontEndCamera FromCamera, EFrontEndCamera ToCamera, bool& CanChangeCamera); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoveCameraUp(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoveCameraDown(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_CameraAnimationTransition(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
	// Inherited from AActor -> UObject
	// Size: 0x8C (0x31C - 0x290)
	class ABP_FortniteLobbyLightSwitcher_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		USceneComponent* DefaultSceneRoot; // 0x298(0x8)
		ADirectionalLight* DirectionLight; // 0x2A0(0x8)
		ASkyLight* SkyLight; // 0x2A8(0x8)
		TArray<APointLight*> Pointlights; // 0x2B0(0x10)
		AExponentialHeightFog* ExponentialHeightFog; // 0x2C0(0x8)
		ADirectionalLight* DirectionalLight_LowDetailMode; // 0x2C8(0x8)
		TArray<AEmitter*> ParticleSystems; // 0x2D0(0x10)
		bool IsActive; // 0x2E0(0x1)
		bool DebugLOWQualityLighting; // 0x2E1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2E2(0x6) UNKNOWN PROPERTY
		ASkyLight* SkyLight_LowDetailMode; // 0x2E8(0x8)
		AExponentialHeightFog* ExponentialHeightfog_LowDetailMode; // 0x2F0(0x8)
		bool LOW_FX_Setting_Use_MobileLighting; // 0x2F8(0x1)
		bool IsLightalreadyActive; // 0x2F9(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2FA(0x2) UNKNOWN PROPERTY
		FLinearColor MPC_ManualSunlightVector; // 0x2FC(0x10)
		FLinearColor MPC_ManualSunlightColor; // 0x30C(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C");
			return ret;
		}

		void SetVisiblityofDetailSpecificMeshes(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetVisiblityofSceneLighting(bool Activate); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnableLobbySetLighting(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DisableLobbySetLighting(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSettings(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
	// Inherited from AFortCameraBase -> ACameraActor -> AActor -> UObject
	// Size: 0x71 (0xA81 - 0xA10)
	class AFortnitePartyBackdrop_Camera_C : public AFortCameraBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA10(0x8)
		UArrowComponent* Arrow; // 0xA18(0x8)
		FTransform SavedTransform; // 0xA20(0x60)
		bool Active; // 0xA80(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C");
			return ret;
		}

		void BP_OnActivated(AFortPlayerController* PlayerController); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(AFortPlayerController* PlayerController); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Reset Location(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ManualActivate(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/BP_DetailLevelMesh.BP_DetailLevelMesh_C
	// Inherited from AActor -> UObject
	// Size: 0x12 (0x2A2 - 0x290)
	class ABP_DetailLevelMesh_C : public AActor	
	{
	public:
		UStaticMeshComponent* StaticMesh; // 0x290(0x8)
		USceneComponent* DefaultSceneRoot; // 0x298(0x8)
		bool AlwaysVisible; // 0x2A0(0x1)
		bool NotVisibleOnSwitch; // 0x2A1(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/BP_DetailLevelMesh.BP_DetailLevelMesh_C");
			return ret;
		}
	};


	// Class /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C
	// Inherited from APartyDisplayManager -> AActor -> UObject
	// Size: 0x1DC (0x6F4 - 0x518)
	class APartyDisplayManagerBP_C : public APartyDisplayManager	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x8)
		UChildActorComponent* PrefabActorComp; // 0x520(0x8)
		USkeletalMeshComponent* SkeletalMesh; // 0x528(0x8)
		UStaticMeshComponent* StaticMesh; // 0x530(0x8)
		UStaticMeshComponent* ScalePivot; // 0x538(0x8)
		UStaticMeshComponent* PivotHolder; // 0x540(0x8)
		UParticleSystemComponent* CelebratoryFX; // 0x548(0x8)
		USceneComponent* DefaultSceneRoot; // 0x550(0x8)
		float HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8; // 0x558(0x4)
		TEnumAsByte<ETimelineDirection> HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8; // 0x55C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x55D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* HoloMatColorPulse; // 0x560(0x8)
		float ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x568(0x4)
		TEnumAsByte<ETimelineDirection> ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x56C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x56D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* ScaleAnimEvolve; // 0x570(0x8)
		float ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43; // 0x578(0x4)
		TEnumAsByte<ETimelineDirection> ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43; // 0x57C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x57D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* ScaleAnimLevel; // 0x580(0x8)
		FTimerHandle TimerHandle; // 0x588(0x8)
		double Rotation; // 0x590(0x8)
		UFortItem* ItemToRepresent; // 0x598(0x8)
		bool PreviewRotation; // 0x5A0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x5A1(0x7) UNKNOWN PROPERTY
		UCurveFloat* RotationAnimation; // 0x5A8(0x8)
		UParticleSystem* LevelUpFX; // 0x5B0(0x8)
		UParticleSystem* EvolveUpFX; // 0x5B8(0x8)
		FVector FXTargetLocation; // 0x5C0(0x18)
		bool IsCharacter; // 0x5D8(0x1)
		bool IsEvolve; // 0x5D9(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x5DA(0x6) UNKNOWN PROPERTY
		UParticleSystem* CharLevelUpFX; // 0x5E0(0x8)
		UParticleSystem* CharEvolveUpFX; // 0x5E8(0x8)
		UMaterialInstanceDynamic* UIoverrideMID; // 0x5F0(0x8)
		bool HasResetVisuals; // 0x5F8(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x5F9(0x7) UNKNOWN PROPERTY
		UParticleSystemComponent* ParticleSystem1; // 0x600(0x8)
		UParticleSystemComponent* ParticleSystem2; // 0x608(0x8)
		UParticleSystem* CharSwapTransitionFX; // 0x610(0x8)
		bool IsCharacterVisible; // 0x618(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x619(0x7) UNKNOWN PROPERTY
		AFortPlayerPawn* HeroPawn; // 0x620(0x8)
		bool SanityChecker; // 0x628(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x629(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* MID_HoloMaterial; // 0x630(0x8)
		FName HideElement; // 0x638(0x4)
		FName VertexRange; // 0x63C(0x4)
		FName HideElement; // 0x640(0x4)
		FName HideElement; // 0x644(0x4)
		FName HideElement; // 0x648(0x4)
		FName HideElement; // 0x64C(0x4)
		FName HideElement; // 0x650(0x4)
		FName HideElement; // 0x654(0x4)
		FName HideElement; // 0x658(0x4)
		FName HideElement; // 0x65C(0x4)
		FName HideElement; // 0x660(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x664(0x4) UNKNOWN PROPERTY
		FVector ScalePivotPreScaleLocation; // 0x668(0x18)
		FVector StaticMeshPreScaleLocation; // 0x680(0x18)
		FVector SkelMeshPreScaleLocation; // 0x698(0x18)
		FVector PrefabPreScaleLocation; // 0x6B0(0x18)
		UParticleSystemComponent* GhostPistolVFX; // 0x6C8(0x8)
		UParticleSystemComponent* Ghost_Sword_VFX; // 0x6D0(0x8)
		UStaticMeshComponent* Ghost_Sword_Mesh; // 0x6D8(0x8)
		UParticleSystemComponent* TransitionFXComponent; // 0x6E0(0x8)
		UParticleSystem* CharSwapTransitionFXLoop; // 0x6E8(0x8)
		FName HideElementsOnlyConsidersRedChannel; // 0x6F0(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C");
			return ret;
		}

		void ResetPreScaleLocations(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RestoreTeleportMIDsInProgress(AFortPlayerPawn* Pawn); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePartyMemberInProgressDisplayChanges(AFortPlayerPawn* Pawn); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PartyMemberInProgressCheck(AFortPlayerPawn* Pawn); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		AActor GetPrefabActorForCurrentDisplayedItem(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PostSetupPrefabVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMeshForCurrentDisplayedItem(UMeshComponent* OutDisplayedMesh); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetItemDefinitionToShow(UFortItemDefinition* ItemDefinition); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetUIOverrideVisuals(UTexture2D* Large Texture, UFortItemDefinition* Item, EFortRarity Rarity); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FTransform GetWeaponPlacementTransform(); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePreviewMeshTransforms(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FTransform GetItemPreviewOffset(UFortItemDefinition* ItemDefinition); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FTransform GetPreviewMeshWorldTransform(); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupStaticMeshVisuals(UStaticMesh* NewMesh); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupSkeletalMeshVisuals(USkeletalMesh* NewMesh); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetVisuals(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScaleAnimLevel__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScaleAnimLevel__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScaleAnimEvolve__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScaleAnimEvolve__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HoloMatColorPulse__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HoloMatColorPulse__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Completed_01D864884864692DBB7035B0996A5437(UFortItem* Item, FGuid RequestID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowItem(UFortItem* ItemToView, FGuid& RequestID); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayLevelUpEffect(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayEvolutionEffect(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CelebrateWithFX(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PerformScaleMeshFX(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleLoadingAssetsForItemCompleted(UFortItem* ItemWhoseAssetsWereLoaded, TArray<UObject*>& LoadedAssets, FGuid& RequestID); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Character Parts Visibility(bool NewVisible); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CharacterCustomizationFinished(AFortPlayerPawn* Pawn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerPawnAddedToLobby(AFortPlayerPawn* Pawn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResOutPawnFromLobby(AFortPlayerPawn* Pawn, int32_t PartyIndex); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupPrefabVisuals(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEmoteSetupFinished(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMeshLODStreamingFinished(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_PartyDisplayManagerBP(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C
	// Inherited from AActor -> UObject
	// Size: 0x50 (0x2E0 - 0x290)
	class AVaultWeaponPlacementHelper_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		UStaticMeshComponent* CUBE; // 0x298(0x8)
		UParticleSystemComponent* PS_NoPlayer_Sparkle; // 0x2A0(0x8)
		UParticleSystemComponent* PS_NoPlayer_Swirl02; // 0x2A8(0x8)
		UParticleSystemComponent* PS_NoPlayer_Swirl01; // 0x2B0(0x8)
		UStaticMeshComponent* CharacterPlacement; // 0x2B8(0x8)
		USceneComponent* Root; // 0x2C0(0x8)
		UStaticMesh* Mesh; // 0x2C8(0x8)
		FMulticastInlineDelegate NewEventDispatcher; // 0x2D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C");
			return ret;
		}

		void GetFrontendAnimInstance(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Initialize(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeContextEvents(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemRez(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VaultWeaponPlacementHelper(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NewEventDispatcher_0__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
	// Inherited from AActor -> UObject
	// Size: 0xC8 (0x358 - 0x290)
	class AVaultCharacterPlacementHelper_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		UStaticMeshComponent* floor; // 0x298(0x8)
		UStaticMeshComponent* CharacterPlacement; // 0x2A0(0x8)
		USceneComponent* Root; // 0x2A8(0x8)
		FTransform OriginalTransform; // 0x2B0(0x60)
		FVector OffsetTranslate; // 0x310(0x18)
		FRotator OffsetRotate; // 0x328(0x18)
		bool Athena; // 0x340(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x341(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnZoomLevelUpdated; // 0x348(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C");
			return ret;
		}

		void UpdatePosition For Camera(EFrontEndCamera FrontendCamera); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SubGameChanged_Event(ESubGame SubGame); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VaultCharacterPlacementHelper(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnZoomLevelUpdated__DelegateSignature(double CurrentZoomLevel); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C
	// Inherited from AVaultWorld_C -> AFortItemPreviewWorld -> AActor -> UObject
	// Size: 0xE7 (0x438 - 0x351)
	class ABattlePassVaultWorld_C : public AVaultWorld_C	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0x351(0x7) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x8)
		UStaticMeshComponent* floor; // 0x360(0x8)
		float TransitionForward_FX_Transition_Fade_46DACBD74D0A8B2278950785C007984A; // 0x368(0x4)
		float TransitionForward_Fade_46DACBD74D0A8B2278950785C007984A; // 0x36C(0x4)
		float TransitionForward_Forward_46DACBD74D0A8B2278950785C007984A; // 0x370(0x4)
		TEnumAsByte<ETimelineDirection> TransitionForward__Direction_46DACBD74D0A8B2278950785C007984A; // 0x374(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x375(0x3) UNKNOWN PROPERTY
		UTimelineComponent* TransitionForward; // 0x378(0x8)
		float BackgroundIntenstiy_Intensity_8C51F99C4026F0204F2184AD9661CD23; // 0x380(0x4)
		TEnumAsByte<ETimelineDirection> BackgroundIntenstiy__Direction_8C51F99C4026F0204F2184AD9661CD23; // 0x384(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x385(0x3) UNKNOWN PROPERTY
		UTimelineComponent* BackgroundIntenstiy; // 0x388(0x8)
		float ItemDetailsIntensity_TextureIntensity_1EC6205345E5A708DA53B5A9449F1700; // 0x390(0x4)
		TEnumAsByte<ETimelineDirection> ItemDetailsIntensity__Direction_1EC6205345E5A708DA53B5A9449F1700; // 0x394(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x395(0x3) UNKNOWN PROPERTY
		UTimelineComponent* ItemDetailsIntensity; // 0x398(0x8)
		float Background_Effects_SetStreaks_50767E4640E86998EC96B7B2D57E5E27; // 0x3A0(0x4)
		TEnumAsByte<ETimelineDirection> Background_Effects__Direction_50767E4640E86998EC96B7B2D57E5E27; // 0x3A4(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x3A5(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Background_Effects; // 0x3A8(0x8)
		float IconDissolve_NewTrack_0_983A4DA644BE5CFAED0C378063FC66FC; // 0x3B0(0x4)
		TEnumAsByte<ETimelineDirection> IconDissolve__Direction_983A4DA644BE5CFAED0C378063FC66FC; // 0x3B4(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x3B5(0x3) UNKNOWN PROPERTY
		UTimelineComponent* IconDissolve; // 0x3B8(0x8)
		float ItemDetails_Icon_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781; // 0x3C0(0x4)
		float ItemDetails_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781; // 0x3C4(0x4)
		TEnumAsByte<ETimelineDirection> ItemDetails__Direction_F4D1C4E246C708FA1F53EDA5A3FEE781; // 0x3C8(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x3C9(0x7) UNKNOWN PROPERTY
		UTimelineComponent* ItemDetails; // 0x3D0(0x8)
		float Floor_Visibility_FloorMask_CE7E338346E82397065B65AA77823F50; // 0x3D8(0x4)
		TEnumAsByte<ETimelineDirection> Floor_Visibility__Direction_CE7E338346E82397065B65AA77823F50; // 0x3DC(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x3DD(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Floor_Visibility; // 0x3E0(0x8)
		float TransitionBackward_fx_Transition_fade_7073CD0840227233D3A64795A5A1B1B8; // 0x3E8(0x4)
		float TransitionBackward_Fade_7073CD0840227233D3A64795A5A1B1B8; // 0x3EC(0x4)
		float TransitionBackward_Backward_7073CD0840227233D3A64795A5A1B1B8; // 0x3F0(0x4)
		TEnumAsByte<ETimelineDirection> TransitionBackward__Direction_7073CD0840227233D3A64795A5A1B1B8; // 0x3F4(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x3F5(0x3) UNKNOWN PROPERTY
		UTimelineComponent* TransitionBackward; // 0x3F8(0x8)
		UMaterialInstance* FloorMI; // 0x400(0x8)
		double BG_Intensity_Max; // 0x408(0x8)
		double BG_Intensity_Mid; // 0x410(0x8)
		UMaterialInstanceDynamic* FloorMID; // 0x418(0x8)
		double BG_Intensity_Min; // 0x420(0x8)
		bool bIsTransitioning; // 0x428(0x1)
		EBackgroundIntensityLevel Intensity_Transition; // 0x429(0x1)
		bool bIsPageA_Max; // 0x42A(0x1)
		bool bIsPageB_Max; // 0x42B(0x1)
		float PageA_X_Offset; // 0x42C(0x4)
		float PageB_X_Offset; // 0x430(0x4)
		float X_Offset_Anim_Distance; // 0x434(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C");
			return ret;
		}

		void AssignMaterials(AStaticMeshActor* TargetBackground); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Backgrounds Scalar Value(FName Param, double FloatValue); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PageTransitionIntensityUpdate(UMaterialInstanceDynamic* MID_Background, UMaterialInstanceDynamic* MID_Floor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionBackgroundBackward(double Backward, double Fade, double FXTransitionFade, UMaterialInstanceDynamic* Mid); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionBackgroundForward(double Forward, double Fade, double FXTransitionFade, UMaterialInstanceDynamic* Mid); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupBackgroundMaterial(UTexture2D* TextureBackground, FVaultWorldBackgroundData& BackgroundInfo, UMaterialInstanceDynamic* Mid); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionForward__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionForward__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionBackward__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionBackward__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Background-Effects__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Background-Effects__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Floor-Visibility__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Floor-Visibility__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemDetails__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemDetails__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IconDissolve__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IconDissolve__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemDetailsIntensity__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemDetailsIntensity__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BackgroundIntenstiy__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BackgroundIntenstiy__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateDisplay(bool bShowFloor, bool bShowEffects); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialBackgroundTransition(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionItemDetails(bool bShowItemDetails); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIntensityChange(bool bToLowIntensity); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetupTextureBackground(UTexture2D* LoadedBackgroundTexture, FVaultWorldBackgroundData& BackgroundInfo); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetupMaterialBackground(UMaterialInterface* LoadedBackgroundMaterial, FVaultWorldBackgroundData& BackgroundInfo); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNewSceneBackgroundChildActor(AFortStaticMeshActor* NewActor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BattlePassVaultWorld(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C
	// Inherited from AItemPreviewSwapper -> AFortItemPreviewSceneChanger -> AActor -> UObject
	// Size: 0x180 (0x580 - 0x400)
	class AItemPreviewSideSwap_C : public AItemPreviewSwapper	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x8)
		UPostProcessComponent* PostProcess_Mobile; // 0x408(0x8)
		USkyLightComponent* SkyLightLowMobile; // 0x410(0x8)
		USkyLightComponent* SkyLight; // 0x418(0x8)
		USkyLightComponent* SkyLight_LOWPC; // 0x420(0x8)
		UArrowComponent* Arrow; // 0x428(0x8)
		UPostProcessComponent* PostProcess_LOWPC; // 0x430(0x8)
		UDirectionalLightComponent* DirectionalLight_LOWPC; // 0x438(0x8)
		UDirectionalLightComponent* DirectionalLightMobile; // 0x440(0x8)
		USceneComponent* DirectionalLights; // 0x448(0x8)
		USceneComponent* GenericLighting; // 0x450(0x8)
		float Timeline_1_RotationOffsetLerp_F81FDC884C74C17EBF78B0B928138870; // 0x458(0x4)
		TEnumAsByte<ETimelineDirection> Timeline_1__Direction_F81FDC884C74C17EBF78B0B928138870; // 0x45C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x45D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0x460(0x8)
		float Timeline_0_ZoomLevel_F92CF88A423F8300F5A67CB744A0DA45; // 0x468(0x4)
		TEnumAsByte<ETimelineDirection> Timeline_0__Direction_F92CF88A423F8300F5A67CB744A0DA45; // 0x46C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x46D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0x470(0x8)
		FVector MoveOutRight_Location_89D9209D4024EFFF08326CBAE53949F1; // 0x478(0x18)
		TEnumAsByte<ETimelineDirection> MoveOutRight__Direction_89D9209D4024EFFF08326CBAE53949F1; // 0x490(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x491(0x7) UNKNOWN PROPERTY
		UTimelineComponent* MoveOutRight; // 0x498(0x8)
		FVector MoveInRight_Location_3FE1D8EB4B6BCBA0C3D120B521728FCE; // 0x4A0(0x18)
		TEnumAsByte<ETimelineDirection> MoveInRight__Direction_3FE1D8EB4B6BCBA0C3D120B521728FCE; // 0x4B8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x4B9(0x7) UNKNOWN PROPERTY
		UTimelineComponent* MoveInRight; // 0x4C0(0x8)
		FVector MoveInLeft_Location_B344DA1A46B3CB2F19E2E0A1F7E36A47; // 0x4C8(0x18)
		TEnumAsByte<ETimelineDirection> MoveInLeft__Direction_B344DA1A46B3CB2F19E2E0A1F7E36A47; // 0x4E0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x4E1(0x7) UNKNOWN PROPERTY
		UTimelineComponent* MoveInLeft; // 0x4E8(0x8)
		FVector MoveOutLeft_Location_6890893D4037128B5CB3B2AE9A4AE0A1; // 0x4F0(0x18)
		TEnumAsByte<ETimelineDirection> MoveOutLeft__Direction_6890893D4037128B5CB3B2AE9A4AE0A1; // 0x508(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x509(0x7) UNKNOWN PROPERTY
		UTimelineComponent* MoveOutLeft; // 0x510(0x8)
		bool DebugMobile_Lighting; // 0x518(0x1)
		bool DebugLightingPC; // 0x519(0x1)
		bool IsActive; // 0x51A(0x1)
		bool AlwaysOn; // 0x51B(0x1)
		bool DebugLighting_LOWDetailPC; // 0x51C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x51D(0x3) UNKNOWN PROPERTY
		FMulticastInlineDelegate On_New_Item_Spawned; // 0x520(0x10)
		double CurrentZoomLevel; // 0x530(0x8)
		double TargetZoomLevel; // 0x538(0x8)
		FRotator TargetRotationOffset; // 0x540(0x18)
		FRotator OrigRotationOffset; // 0x558(0x18)
		UFortAccountItemDefinition* Primary_Requested_Item; // 0x570(0x8)
		UFortAccountItemDefinition* Previous_Requested_Item; // 0x578(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C");
			return ret;
		}

		void LightControl(bool Active); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchPCLighting(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchPCLighting_LOWDetail(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchMobileLighting(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoveOutLeft__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoveOutLeft__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoveInLeft__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoveInLeft__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoveInRight__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoveInRight__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoveOutRight__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoveOutRight__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_0__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_0__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_1__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_1__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReadyToSwap(UFortAccountItemDefinition* PrimaryRequestedItem, FSceneTransitionOptions& Options); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNewSceneRequested(UFortAccountItemDefinition* PrimaryRequestedItem, FSceneTransitionOptions& TransitionOptions); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSettings(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTargetZoomLevelSet(float TargetZoomLevel); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTargetRotationOffsetSet(FRotator& TargetRotationOffset); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ItemPreviewSideSwap(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On New Item Spawned__DelegateSignature(bool Should Show Floor); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/BackPlates/Blueprint/BP_Background_Raytracing.BP_Background_Raytracing_C
	// Inherited from AActor -> UObject
	// Size: 0x40 (0x2D0 - 0x290)
	class ABP_Background_Raytracing_C : public AActor	
	{
	public:
		UStaticMeshComponent* SM_InvertedSphere_BackPlate_Half; // 0x290(0x8)
		USceneComponent* DefaultSceneRoot; // 0x298(0x8)
		bool FullSphere; // 0x2A0(0x1)
		bool UseCubemap; // 0x2A1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2A2(0x6) UNKNOWN PROPERTY
		double Brightness; // 0x2A8(0x8)
		UTexture* 2dTexture; // 0x2B0(0x8)
		UTexture* Cubemap; // 0x2B8(0x8)
		FLinearColor FadeColor; // 0x2C0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/BackPlates/Blueprint/BP_Background_Raytracing.BP_Background_Raytracing_C");
			return ret;
		}

		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ABP_CharacterRimlightDisabler_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		USceneComponent* DefaultSceneRoot; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_CharacterRimlightDisabler(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/BackPlates/CMSLobbyDirector.CMSLobbyDirector_C
	// Inherited from ADynamicBackgroundDirector -> AActor -> UObject
	// Size: 0x8 (0x488 - 0x480)
	class ACMSLobbyDirector_C : public ADynamicBackgroundDirector	
	{
	public:
		USceneComponent* DefaultSceneRoot; // 0x480(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/BackPlates/CMSLobbyDirector.CMSLobbyDirector_C");
			return ret;
		}
	};


	// Class /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
	// Inherited from AFortCameraBase -> ACameraActor -> AActor -> UObject
	// Size: 0x20 (0xA30 - 0xA10)
	class AFortnitePartyHeroSelect_Camera_C : public AFortCameraBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA10(0x8)
		UCameraComponent* CameraActor; // 0xA18(0x8)
		bool MouseDown; // 0xA20(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA21(0x7) UNKNOWN PROPERTY
		AFortPlayerPawn* CachedPawn; // 0xA28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C");
			return ret;
		}

		void HandleMousePress(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMouseRelease(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(AFortPlayerController* PlayerController); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(AFortPlayerController* PlayerController); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C
	// Inherited from AActor -> UObject
	// Size: 0xD0 (0x360 - 0x290)
	class AVaultCharacterLightingBP_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		UArrowComponent* Arrow1; // 0x298(0x8)
		USpotLightComponent* KeyLight4; // 0x2A0(0x8)
		USpotLightComponent* KeyLight3; // 0x2A8(0x8)
		USpotLightComponent* KeyLight2; // 0x2B0(0x8)
		UPostProcessComponent* PostProcess_Mobile; // 0x2B8(0x8)
		UPostProcessComponent* PostProcess_LOWPC; // 0x2C0(0x8)
		USkyLightComponent* SkyLight_LOWPC; // 0x2C8(0x8)
		UDirectionalLightComponent* DirectionalLight_LOWPC; // 0x2D0(0x8)
		UArrowComponent* Arrow; // 0x2D8(0x8)
		UDirectionalLightComponent* DirectionalLightMobile; // 0x2E0(0x8)
		USkyLightComponent* SkyLightLowMobil; // 0x2E8(0x8)
		USkyLightComponent* SkyLight; // 0x2F0(0x8)
		USpotLightComponent* RimLowerRight; // 0x2F8(0x8)
		USpotLightComponent* RimLeft; // 0x300(0x8)
		USpotLightComponent* RimTopRight; // 0x308(0x8)
		USpotLightComponent* RimBottomLeft; // 0x310(0x8)
		USpotLightComponent* KeyLight; // 0x318(0x8)
		USpotLightComponent* Bounce; // 0x320(0x8)
		USpotLightComponent* BounceRear; // 0x328(0x8)
		USceneComponent* SharedRoot; // 0x330(0x8)
		bool DebugMobile_Lighting; // 0x338(0x1)
		bool DebugLightingPC; // 0x339(0x1)
		bool IsActive; // 0x33A(0x1)
		bool AlwaysOn; // 0x33B(0x1)
		bool DebugLighting_LOWDetailPC; // 0x33C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x33D(0x3) UNKNOWN PROPERTY
		FLinearColor MPC_ManualSunlightVector; // 0x340(0x10)
		FLinearColor MPC_ManualSunlightColor; // 0x350(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C");
			return ret;
		}

		void SwitchPCLighting_LOWDetail(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchPCLighting(bool Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchMobileLighting(bool Visibilty); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSettings(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleLighting(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OVERRIDELIGHTING(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LightControl(bool NewParam); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VaultCharacterLightingBP(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Environments/FrontEnd/BackPlates/LobbyActorDirector.LobbyActorDirector_C
	// Inherited from ALobbyActorDirector -> AActor -> UObject
	// Size: 0x0 (0x2A0 - 0x2A0)
	class ALobbyActorDirector_C : public ALobbyActorDirector	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Environments/FrontEnd/BackPlates/LobbyActorDirector.LobbyActorDirector_C");
			return ret;
		}
	};

}
