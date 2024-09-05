#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FrontEnd
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C
	// Inherited from AFortCameraBase -> ACameraActor -> AActor -> UObject
	// Size: 0x8 (0xA18 - 0xA10)
	class ASpecialEventsCamera_Blueprint_C : public AFortCameraBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA10(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C");
			return ret;
		}

		void BP_OnActivated(AFortPlayerController* PlayerController); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(AFortPlayerController* PlayerController); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_SpecialEventsCamera_Blueprint(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C
	// Inherited from AActor -> UObject
	// Size: 0x38 (0x2C8 - 0x290)
	class AHBOnboardingFlow_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		USceneComponent* DefaultSceneRoot; // 0x298(0x8)
		UFortQuestItemDefinition_Campaign* PlayPeriodicEventMovieQuest; // 0x2A0(0x8)
		bool bPlayedPeriodicEventMovie; // 0x2A8(0x1)
		bool bHasRecheckedNeedToPlayPeriodicEventMovie; // 0x2A9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2AA(0x6) UNKNOWN PROPERTY
		FDataTableRowHandle PlayPeriodicEventCineObjective; // 0x2B0(0x10)
		UClass* PeriodicEventMovieAnnouncementClass; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C");
			return ret;
		}

		void GetCampaignQuestManager(UFortQuestManager* QuestManager); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RecheckNeedToPlayEventMovie(bool& WaitingToCheckAgain); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool NeedsToPlayEventMovie(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCanceled_856A325D44ECC73B857CE5B301E90D33(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFailure_50CD26324B96B121A5B49DA66113AE5D(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIgnored_50CD26324B96B121A5B49DA66113AE5D(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSuccess_50CD26324B96B121A5B49DA66113AE5D(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePlayEventCine(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleClientEvent_PlayEventMovie(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartFlow(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_HBOnboardingFlow(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_Storm2018Cine.Announce_Storm2018Cine_C
	// Inherited from AAnnounce_EventCine_C -> AFortClientAnnouncement_Cinematic -> AFortClientAnnouncement -> AActor -> UObject
	// Size: 0x0 (0x338 - 0x338)
	class AAnnounce_Storm2018Cine_C : public AAnnounce_EventCine_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_Storm2018Cine.Announce_Storm2018Cine_C");
			return ret;
		}
	};


	// Class /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C
	// Inherited from AFortCameraBase -> ACameraActor -> AActor -> UObject
	// Size: 0xB0 (0xAC0 - 0xA10)
	class AStoreCamera_Blueprint_C : public AFortCameraBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA10(0x8)
		UStaticMeshComponent* Mesh_DarkenBG; // 0xA18(0x8)
		UCameraComponent* CameraPlaceholderGround; // 0xA20(0x8)
		float ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0; // 0xA28(0x4)
		TEnumAsByte<ETimelineDirection> ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0; // 0xA2C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA2D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* ChoicePack; // 0xA30(0x8)
		float Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9; // 0xA38(0x4)
		TEnumAsByte<ETimelineDirection> Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9; // 0xA3C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xA3D(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0xA40(0x8)
		FVector CameraGroundLoc; // 0xA48(0x18)
		FRotator CameraGroundRot; // 0xA60(0x18)
		FVector CameraOriginalLoc; // 0xA78(0x18)
		FRotator CameraOriginalRot; // 0xA90(0x18)
		bool CameraInStartPos; // 0xAA8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xAA9(0x7) UNKNOWN PROPERTY
		AStorePinataMaster_Parent_C* PinataInLevel; // 0xAB0(0x8)
		AStoreCardReveal_Parent_C* CardRevealInLevel; // 0xAB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C");
			return ret;
		}

		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_0__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_0__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ChoicePack__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ChoicePack__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(AFortPlayerController* PlayerController); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(AFortPlayerController* PlayerController); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OpeningCameraTransition(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetCamera(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DarkenBGVisibility(bool Enable); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ChoicePackFOV-Out(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ChoicePackFOV-In(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_StoreCamera_Blueprint(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_Parent.StoreCardReveal_Parent_C
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AStoreCardReveal_Parent_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		USceneComponent* PinataSceneRoot; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_Parent.StoreCardReveal_Parent_C");
			return ret;
		}

		void InitiatePinata(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_StoreCardReveal_Parent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/FrontEnd/FrontEndSettingsBP.FrontEndSettingsBP_C
	// Inherited from AFrontEndSettings -> AActor -> UObject
	// Size: 0x8 (0x2B8 - 0x2B0)
	class AFrontEndSettingsBP_C : public AFrontEndSettings	
	{
	public:
		USceneComponent* DefaultSceneRoot; // 0x2B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/FrontEnd/FrontEndSettingsBP.FrontEndSettingsBP_C");
			return ret;
		}
	};


	// Class /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C
	// Inherited from AFortCameraBase -> ACameraActor -> AActor -> UObject
	// Size: 0x18 (0xA28 - 0xA10)
	class AHeroesCamera_Blueprint_C : public AFortCameraBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA10(0x8)
		bool MouseDown; // 0xA18(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA19(0x7) UNKNOWN PROPERTY
		AFortPlayerPawn* Cached_Pawn; // 0xA20(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C");
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
		void ExecuteUbergraph_HeroesCamera_Blueprint(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C
	// Inherited from AFortClientAnnouncement_Cinematic -> AFortClientAnnouncement -> AActor -> UObject
	// Size: 0x28 (0x338 - 0x310)
	class AAnnounce_EventCine_C : public AFortClientAnnouncement_Cinematic	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x8)
		USceneComponent* DefaultSceneRoot; // 0x318(0x8)
		UMediaSource* EventMediaSource; // 0x320(0x8)
		bool AllowSkipping; // 0x328(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x329(0x7) UNKNOWN PROPERTY
		UFortMediaSubtitlesPlayer* EventSubtitlesPlayer; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C");
			return ret;
		}

		void OnClientAnnouncementStop(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerSkippedCutscene(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleClientEvent_CinematicFinishedPlaying(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAllowSkip(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnteredCinematicState(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Announce_EventCine(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/FrontEnd/FrontEnd_GameMode.FrontEnd_GameMode_C
	// Inherited from AFortGameModeFrontEnd -> AFortGameMode -> AFortGameModeBase -> AFGF_GameMode -> AGameMode -> AGameModeBase -> AInfo -> AActor -> UObject
	// Size: 0x8 (0x800 - 0x7F8)
	class AFrontEnd_GameMode_C : public AFortGameModeFrontEnd	
	{
	public:
		USceneComponent* DefaultSceneRoot; // 0x7F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/FrontEnd/FrontEnd_GameMode.FrontEnd_GameMode_C");
			return ret;
		}
	};


	// Class /Game/FrontEnd/FrontEnd_PlayerController.FrontEnd_PlayerController_C
	// Inherited from AFortPlayerControllerFrontEnd -> AFortPlayerController -> AFGF_PlayerController -> APlayerController -> AController -> AActor -> UObject
	// Size: 0x0 (0x2F10 - 0x2F10)
	class AFrontEnd_PlayerController_C : public AFortPlayerControllerFrontEnd	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/FrontEnd/FrontEnd_PlayerController.FrontEnd_PlayerController_C");
			return ret;
		}
	};


	// Class /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AStorePinataMaster_Parent_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		USceneComponent* PinataSceneRoot; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C");
			return ret;
		}

		void InitiatePinata(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CameraResetComplete(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CameraTransitionComplete(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_StorePinataMaster_Parent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C
	// Inherited from AFortCameraBase -> ACameraActor -> AActor -> UObject
	// Size: 0x18 (0xA28 - 0xA10)
	class ALoginCamera_Blueprint_C : public AFortCameraBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA10(0x8)
		UStaticMeshComponent* StaticMesh; // 0xA18(0x8)
		UCameraComponent* LoginCamera; // 0xA20(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C");
			return ret;
		}

		void BP_OnActivated(AFortPlayerController* PlayerController); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_LoginCamera_Blueprint(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C
	// Inherited from AFortCameraBase -> ACameraActor -> AActor -> UObject
	// Size: 0x8 (0xA18 - 0xA10)
	class AVaultCamera_Blueprint_C : public AFortCameraBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA10(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C");
			return ret;
		}

		void BP_OnActivated(AFortPlayerController* PlayerController); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(AFortPlayerController* PlayerController); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VaultCamera_Blueprint(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
