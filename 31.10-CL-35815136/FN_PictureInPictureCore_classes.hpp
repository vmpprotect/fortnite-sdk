#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PictureInPictureCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PictureInPictureCore.PictureInPictureClient
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UPictureInPictureClient : public UObject	
	{
	public:
		FMulticastInlineDelegate LoginSuccessEvent; // 0x28(0x10)
		FMulticastInlineDelegate LogoutSuccessEvent; // 0x38(0x10)
		FMulticastInlineDelegate QRCodeReceivedEvent; // 0x48(0x10)
		FMulticastInlineDelegate ErrorDelegate; // 0x58(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		FString UserName; // 0x70(0x10)
		UEpicCMSImage* UserAvatarImage; // 0x80(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
		UTexture2DDynamic* CurrentQRCodeTexture; // 0x90(0x8)
		unsigned char UnknownData02_7[0x10]; // 0x98(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureCore.PictureInPictureClient");
			return ret;
		}

		void Logout(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF748333524(relative to base address)
		bool IsLoggedIn(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C5A798C(relative to base address)
		UTexture2DDynamic GetQRCodeTexture(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7488CD12C(relative to base address)
		TEnumAsByte GetLoginState(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E228C6C(relative to base address)
		UEpicCMSImage GetAvatarImage(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E44BC4C(relative to base address)
		void EndLogin(UObject* InWorldContext); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D04D084(relative to base address)
		void CheckLogin(UObject* InWorldContext); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FC63DD8(relative to base address)
		void BeginLogin(UObject* InWorldContext); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D87CD00(relative to base address)
	};


	// Class PictureInPictureCore.PictureInPictureCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPictureInPictureCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureCore.PictureInPictureCheatManager");
			return ret;
		}

		void ToggleFullScreenPiP(); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SuspendPiP(); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ResumePiP(); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void PrintPiPRegionInfo(); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void EnablePiP(); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DisablePiP(); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void CanEnablePartnerPIP(); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class PictureInPictureCore.PictureInPictureCoreEnableDisableAction
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPictureInPictureCoreEnableDisableAction : public UFortUIGameFeatureAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureCore.PictureInPictureCoreEnableDisableAction");
			return ret;
		}
	};


	// Class PictureInPictureCore.PictureInPictureMediaController
	// Inherited from UObject
	// Size: 0x710 (0x738 - 0x28)
	class UPictureInPictureMediaController : public UObject	
	{
	public:
		FString PartnerName; // 0x28(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		TArray<UPictureInPictureActionData*> ActionDataArray; // 0x48(0x10)
		FPIPVideoPlayerAssetConfig DefaultPlayerAssetConfig; // 0x58(0x88)
		FPIPVideoPlayerAssetConfig PlayerAssetConfig; // 0xE0(0x88)
		UPictureInPicturePlayer* VideoWidget; // 0x168(0x8)
		FPIPVideoPlayerConfig VideoWidgetConfig; // 0x170(0x48)
		TWeakObjectPtr<UCommonLazyImage*> ThumbnailImageNext; // 0x1B8(0x8)
		TWeakObjectPtr<UCommonLazyImage*> ThumbnailImagePrevious; // 0x1C0(0x8)
		bool bSupportsMultipleSources; // 0x1C8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1C9(0x7) UNKNOWN PROPERTY
		FPiPPartnerSource CurrentSource; // 0x1D0(0x1F0)
		TArray<FPiPPartnerSource> Sources; // 0x3C0(0x10)
		TArray<FPiPPartnerSource> ValidSources; // 0x3D0(0x10)
		FMediaPlayerOptions LocalOptions; // 0x3E0(0x80)
		FMulticastInlineDelegate BaseErrorEvent; // 0x460(0x10)
		FMulticastInlineDelegate BaseEnabledEvent; // 0x470(0x10)
		FMulticastInlineDelegate SourcesChangedEvent; // 0x480(0x10)
		FMulticastInlineDelegate SourceSelectedEvent; // 0x490(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x4A0(0x8) UNKNOWN PROPERTY
		TArray<FPictureInPictureActionConfig> InstanceActionData; // 0x4A8(0x10)
		UPictureInPictureAnalyticsManager* AnalyticsManager; // 0x4B8(0x8)
		FDateTime ActiveStartTime; // 0x4C0(0x8)
		FDateTime PausedStartTime; // 0x4C8(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x4D0(0x8) UNKNOWN PROPERTY
		FPiPSuspendInfo SuspendedInfo; // 0x4D8(0x1F8)
		unsigned char UnknownData04_7[0x68]; // 0x6D0(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureCore.PictureInPictureMediaController");
			return ret;
		}

		void ToggleFullScreen(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7514910D8(relative to base address)
		void Stop(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494B08D8(relative to base address)
		void SetEnabled(bool bIsEnabled, bool bIsFromUser); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751490C98(relative to base address)
		void SetCurrentSource(FPiPPartnerSource& SelectedSource); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751490BD0(relative to base address)
		void Play(bool bForcePlay); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751490B38(relative to base address)
		void Pause(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF747B0DC80(relative to base address)
		void OnPrevThumbnailReceived(UTexture2DDynamic* InTexture); // Flags: Final|Native|Private, Memory Exec: 0x7FF751490AB8(relative to base address)
		void OnNextThumbnailReceived(UTexture2DDynamic* InTexture); // Flags: Final|Native|Private, Memory Exec: 0x7FF751490A38(relative to base address)
		void OnMediaStartedAnalytics(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751490A24(relative to base address)
		void OnMediaResumedAnalytics(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514909FC(relative to base address)
		void OnMediaPausedAnalytics(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751490A10(relative to base address)
		void OnMediaClosedAnalytics(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514909FC(relative to base address)
		bool IsPlaying(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751490814(relative to base address)
		bool IsPaused(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514907F0(relative to base address)
		bool IsMultiSourceSupported(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C316748(relative to base address)
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA285E8(relative to base address)
		void HandleSourceSelectedEvent(FString SelectedSource); // Flags: Native|Protected, Memory Exec: 0x7FF7514906C4(relative to base address)
		TArray GetValidSources(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751490600(relative to base address)
		TArray GetSources(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514905D0(relative to base address)
		FPIPVideoPlayerAssetConfig GetPlayerAssetConfig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514905B4(relative to base address)
		UPictureInPicturePlayer GetMediaPlayerWidget(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF7514902A4(relative to base address)
		FPIPVideoPlayerAssetConfig GetDefaultPlayerAssetConfig(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF751490168(relative to base address)
		FPiPPartnerSource GetCurrentSource(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751490138(relative to base address)
		TArray GetActions(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75148FFF4(relative to base address)
		void Exit(bool bStop); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C68EDA8(relative to base address)
	};


	// Class PictureInPictureCore.PictureInPictureMediaPlayerCtrl
	// Inherited from UFortMediaPlayerCtrl -> UObject
	// Size: 0x10 (0x168 - 0x158)
	class UPictureInPictureMediaPlayerCtrl : public UFortMediaPlayerCtrl	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x158(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureCore.PictureInPictureMediaPlayerCtrl");
			return ret;
		}
	};


	// Class PictureInPictureCore.PictureInPicturePlayer
	// Inherited from UObject
	// Size: 0x208 (0x230 - 0x28)
	class UPictureInPicturePlayer : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0xE0]; // 0x28(0xE0) UNKNOWN PROPERTY
		FPIPVideoPlayerAssetConfig AssetConfig; // 0x108(0x88)
		UPictureInPictureMediaPlayerCtrl* MediaController; // 0x190(0x8)
		unsigned char UnknownData01_6[0x50]; // 0x198(0x50) UNKNOWN PROPERTY
		USoundSubmixBase* DefaultSubmix; // 0x1E8(0x8)
		USoundSubmixBase* LicensedSubmix; // 0x1F0(0x8)
		unsigned char UnknownData02_7[0x38]; // 0x1F8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureCore.PictureInPicturePlayer");
			return ret;
		}

		void UpdateStreamingPlayerSize(FVector2D& InVector); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7514911C8(relative to base address)
		void StreamedVideoOnUrlSuccess(FString URL); // Flags: Final|Native|Private, Memory Exec: 0x7FF751491028(relative to base address)
		void StreamedVideoOnUrlFailure(FString URL); // Flags: Final|Native|Private, Memory Exec: 0x7FF751490F8C(relative to base address)
		bool SetPlayerAssetConfig(FPIPVideoPlayerAssetConfig& InAssetConfig); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751490D60(relative to base address)
		bool IsAssetConfigSet(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514907D8(relative to base address)
		void HandleUCPAudioChanged(UFortClientSettingsRecord* Settings); // Flags: Final|Native|Private, Memory Exec: 0x7FF751490758(relative to base address)
		void FlushPlayerAssetConfig(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75148FFE0(relative to base address)
	};


	// Class PictureInPictureCore.PictureInPicturePartnerControls
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UPictureInPicturePartnerControls : public UObject	
	{
	public:
		bool bRequiresAgeOfConsent; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		UPictureInPictureClient* ClientObject; // 0x30(0x8)
		UPictureInPictureMediaController* MediaController; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureCore.PictureInPicturePartnerControls");
			return ret;
		}
	};


	// Class PictureInPictureCore.PictureInPictureSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0xF0 (0x120 - 0x30)
	class UPictureInPictureSubsystem : public UEngineSubsystem	
	{
	public:
		TArray<UPictureInPicturePartnerDataAsset*> AvailableClientsList; // 0x30(0x10)
		FMulticastInlineDelegate OnPartnerUpdateComplete; // 0x40(0x10)
		FMulticastInlineDelegate OnPartnerChanged; // 0x50(0x10)
		bool bPartnerListUpdated; // 0x60(0x1)
		bool bIsSuspended; // 0x61(0x1)
		bool bCMSInitialized; // 0x62(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x63(0x5) UNKNOWN PROPERTY
		FString CurrentPlatform; // 0x68(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x78(0x10) UNKNOWN PROPERTY
		TMap<FString, UPictureInPicturePartnerControls*> SupportedPartnerControls; // 0x88(0x50)
		FString CurrentPartnerName; // 0xD8(0x10)
		FString CurrentContinent; // 0xE8(0x10)
		FString CurrentCountry; // 0xF8(0x10)
		TArray<FString> CurrentSubdivisions; // 0x108(0x10)
		UFortMediaCMSEventsComponent* CMSEventsComponent; // 0x118(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureCore.PictureInPictureSubsystem");
			return ret;
		}

		void UpdatePartnerItemList(UObject* InWorldContext, bool bForce); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751491100(relative to base address)
		void ToggleFullScreenPiP(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7514910EC(relative to base address)
		void SuspendCurrentMediaController(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7514910C4(relative to base address)
		void StoreLastUsedSource(FString InPartnerSourceName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751490F0C(relative to base address)
		void StoreLastUsedPartner(FString InPartnerName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751490E8C(relative to base address)
		void StoreAutoEnableSetting(bool InUserEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751490E1C(relative to base address)
		void ShutdownAllPartners(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751490E08(relative to base address)
		void ResumeCurrentMediaController(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751490BBC(relative to base address)
		void OnCurrentPartnerSourceSelected(FPiPPartnerSource& SelectedSource); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751490938(relative to base address)
		void OnCMSEventValid(UMediaCMSEvent* ValidEvent); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514908B8(relative to base address)
		void OnCMSEventInvalid(UMediaCMSEvent* InvalidEvent); // Flags: Final|Native|Private, Memory Exec: 0x7FF751490838(relative to base address)
		bool IsPartnerListUpdated(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3C1498(relative to base address)
		void HandleMediaSourceRequest(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514906B0(relative to base address)
		void HandleFNEventsSetCurrentMediaControllerEnabled(bool InEnabled); // Flags: Final|Native|Private, Memory Exec: 0x7FF751490630(relative to base address)
		TArray GetPartnerItemList(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75149053C(relative to base address)
		UPictureInPicturePartnerDataAsset GetPartnerItem(FString PartnerName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75149049C(relative to base address)
		UPictureInPicturePartnerControls GetPartnerControls(FString PartnerName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514903FC(relative to base address)
		UPictureInPictureMediaController GetPartnerController(FString PartnerName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75149035C(relative to base address)
		UPictureInPictureClient GetPartnerClient(FString PartnerName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514902BC(relative to base address)
		void GetLastUsedSource(FString& OutPartnerSourceName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751490214(relative to base address)
		void GetLastUsedPartner(FString& OutPartnerName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751490184(relative to base address)
		UPictureInPicturePartnerDataAsset GetCurrentPartnerItem(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751490114(relative to base address)
		UPictureInPicturePartnerControls GetCurrentPartnerControls(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514900E8(relative to base address)
		UPictureInPictureMediaController GetCurrentPartnerController(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514900BC(relative to base address)
		UPictureInPictureClient GetCurrentPartnerClient(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751490090(relative to base address)
		bool GetAutoEnableSetting(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75149006C(relative to base address)
		void EnableFullScreenPiPOption(bool bEnable); // Flags: Final|Native|Public, Memory Exec: 0x7FF75148FF60(relative to base address)
	};

}
