#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PictureInPictureFNEvents
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PictureInPictureFNEvents.LiveEventHUDAd
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class ULiveEventHUDAd : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureFNEvents.LiveEventHUDAd");
			return ret;
		}

		void ShowAdvertisement(bool& Result); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPictureInPictureFNEventsCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager");
			return ret;
		}

		void StopPiPBouncingLlama(); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void StartPiPBouncingLlama(); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SelectPiPEvent(FString EventName); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void RemovePiPEvent(FString EventName); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void ListPiPEvents(); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ListAllPiPEvents(); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void AddPiPEvent(FString EventName, FString VUID); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E56A5C4(relative to base address)
	};


	// Class PictureInPictureFNEvents.PictureInPictureFNEventsClient
	// Inherited from UPictureInPictureClient -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPictureInPictureFNEventsClient : public UPictureInPictureClient	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureFNEvents.PictureInPictureFNEventsClient");
			return ret;
		}
	};


	// Class PictureInPictureFNEvents.PictureInPictureFNEventsController
	// Inherited from UPictureInPictureMediaController -> UObject
	// Size: 0x30 (0x768 - 0x738)
	class UPictureInPictureFNEventsController : public UPictureInPictureMediaController	
	{
	public:
		UPictureInPictureFNEventsClient* FNEventsClient; // 0x738(0x8)
		ULiveEventHUDAd* HUDAdvertWidget; // 0x740(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x748(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureFNEvents.PictureInPictureFNEventsController");
			return ret;
		}

		void UpdateClientLoginState(TArray<FPiPPartnerSource>& UpdatedSources); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7514987D4(relative to base address)
		void OnClientLogoutSuccess(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751498788(relative to base address)
		void OnClientLoginSuccess(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751498774(relative to base address)
		void HandleFNMediaRemoveEventsStream(FString InEventName); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514986E4(relative to base address)
		void HandleFNMediaEventsStreams(FFortMediaEventsStreamAssets& VideoStreamAssets); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751498608(relative to base address)
		void ExitEvent(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514985F4(relative to base address)
		void AddPartnerActionAnalytics(FString InPartnerName, PictureInPictureAction InActionType); // Flags: Final|Native|Private, Memory Exec: 0x7FF751498520(relative to base address)
	};

}
