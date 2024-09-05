#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PictureInPictureFNEvents
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PictureInPictureFNEvents.LiveEventHUDAd
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class ULiveEventHUDAd : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureFNEvents.LiveEventHUDAd");
			return ret;
		}

		void ShowAdvertisement(bool& Result); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D11A58
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

		void StopPiPBouncingLlama(); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414D12078
		void StartPiPBouncingLlama(); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414D11F98
		void SelectPiPEvent(FString EventName); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414D11EB8
		void RemovePiPEvent(FString EventName); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414D11DD8
		void ListPiPEvents(); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414D11CF8
		void ListAllPiPEvents(); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414D11C18
		void AddPiPEvent(FString EventName, FString VUID); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414D11B38
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
		UPictureInPictureFNEventsClient FNEventsClient; // 0x738(0x8)
		ULiveEventHUDAd HUDAdvertWidget; // 0x740(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x748(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureFNEvents.PictureInPictureFNEventsController");
			return ret;
		}

		void UpdateClientLoginState(TArray& UpdatedSources); // Flags: Final|Native|Private|HasOutParms 0x7FF414D12698
		void OnClientLogoutSuccess(); // Flags: Final|Native|Private 0x7FF414D125B8
		void OnClientLoginSuccess(); // Flags: Final|Native|Private 0x7FF414D124D8
		void HandleFNMediaRemoveEventsStream(FString InEventName); // Flags: Final|Native|Protected 0x7FF414D123F8
		void HandleFNMediaEventsStreams(FFortMediaEventsStreamAssets& VideoStreamAssets); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D12318
		void ExitEvent(); // Flags: Final|Native|Private 0x7FF414D12238
		void AddPartnerActionAnalytics(FString InPartnerName, PictureInPictureAction InActionType); // Flags: Final|Native|Private 0x7FF414D12158
	};

}
