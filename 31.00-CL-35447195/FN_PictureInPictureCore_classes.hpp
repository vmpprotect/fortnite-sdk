#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PictureInPictureCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData03_6[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		FString UserName; // 0x70(0x10)
		UEpicCMSImage UserAvatarImage; // 0x80(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
		UTexture2DDynamic CurrentQRCodeTexture; // 0x90(0x8)
		unsigned char UnknownData05_7[0x10]; // 0x98(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureCore.PictureInPictureClient");
			return ret;
		}

		void Logout(); // Flags: Native|Public|BlueprintCallable 0x7FF414D0CD58
		bool IsLoggedIn(); // Flags: Native|Public|BlueprintCallable 0x7FF414D0CC78
		UTexture2DDynamic GetQRCodeTexture(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0CB98
		TEnumAsByte GetLoginState(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0CAB8
		UEpicCMSImage GetAvatarImage(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0C9D8
		void EndLogin(UObject InWorldContext); // Flags: Native|Public|BlueprintCallable 0x7FF414D0C8F8
		void CheckLogin(UObject InWorldContext); // Flags: Native|Public|BlueprintCallable 0x7FF414D0C818
		void BeginLogin(UObject InWorldContext); // Flags: Native|Public|BlueprintCallable 0x7FF414D0C738
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

		void SuspendPiP(); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414D0D298
		void ResumePiP(); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414D0D1B8
		void PrintPiPRegionInfo(); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414D0D0D8
		void EnablePiP(); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414D0CFF8
		void DisablePiP(); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414D0CF18
		void CanEnablePartnerPIP(); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414D0CE38
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
		unsigned char UnknownData05_6[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		TArray ActionDataArray; // 0x48(0x10)
		FPIPVideoPlayerAssetConfig DefaultPlayerAssetConfig; // 0x58(0x88)
		FPIPVideoPlayerAssetConfig PlayerAssetConfig; // 0xE0(0x88)
		UPictureInPicturePlayer VideoWidget; // 0x168(0x8)
		FPIPVideoPlayerConfig VideoWidgetConfig; // 0x170(0x48)
		TWeakObjectPtr ThumbnailImageNext; // 0x1B8(0x8)
		TWeakObjectPtr ThumbnailImagePrevious; // 0x1C0(0x8)
		bool bSupportsMultipleSources; // 0x1C8(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x1C9(0x7) UNKNOWN PROPERTY
		FPiPPartnerSource CurrentSource; // 0x1D0(0x1F0)
		TArray Sources; // 0x3C0(0x10)
		TArray ValidSources; // 0x3D0(0x10)
		FMediaPlayerOptions LocalOptions; // 0x3E0(0x80)
		FMulticastInlineDelegate BaseErrorEvent; // 0x460(0x10)
		FMulticastInlineDelegate BaseEnabledEvent; // 0x470(0x10)
		FMulticastInlineDelegate SourcesChangedEvent; // 0x480(0x10)
		FMulticastInlineDelegate SourceSelectedEvent; // 0x490(0x10)
		unsigned char UnknownData07_6[0x8]; // 0x4A0(0x8) UNKNOWN PROPERTY
		TArray InstanceActionData; // 0x4A8(0x10)
		UPictureInPictureAnalyticsManager AnalyticsManager; // 0x4B8(0x8)
		FDateTime ActiveStartTime; // 0x4C0(0x8)
		FDateTime PausedStartTime; // 0x4C8(0x8)
		unsigned char UnknownData08_6[0x8]; // 0x4D0(0x8) UNKNOWN PROPERTY
		FPiPSuspendInfo SuspendedInfo; // 0x4D8(0x1F8)
		unsigned char UnknownData09_7[0x68]; // 0x6D0(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureCore.PictureInPictureMediaController");
			return ret;
		}

		void ToggleFullScreen(); // Flags: Final|Native|Public 0x7FF414D0E878
		void Stop(); // Flags: Native|Public|BlueprintCallable 0x7FF414D0E798
		void SetEnabled(bool bIsEnabled, bool bIsFromUser); // Flags: Native|Public|BlueprintCallable 0x7FF414D0E6B8
		void SetCurrentSource(FPiPPartnerSource& SelectedSource); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414D0E5D8
		void Play(bool bForcePlay); // Flags: Native|Public|BlueprintCallable 0x7FF414D0E4F8
		void Pause(); // Flags: Native|Public|BlueprintCallable 0x7FF414D0E418
		void OnPrevThumbnailReceived(UTexture2DDynamic InTexture); // Flags: Final|Native|Private 0x7FF414D0E338
		void OnNextThumbnailReceived(UTexture2DDynamic InTexture); // Flags: Final|Native|Private 0x7FF414D0E258
		void OnMediaStartedAnalytics(); // Flags: Final|Native|Private 0x7FF414D0E178
		void OnMediaResumedAnalytics(); // Flags: Final|Native|Private 0x7FF414D0E098
		void OnMediaPausedAnalytics(); // Flags: Final|Native|Private 0x7FF414D0DFB8
		void OnMediaClosedAnalytics(); // Flags: Final|Native|Private 0x7FF414D0DED8
		bool IsPlaying(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0DDF8
		bool IsPaused(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0DD18
		bool IsMultiSourceSupported(); // Flags: Native|Public|BlueprintCallable 0x7FF414D0DC38
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D0DB58
		void HandleSourceSelectedEvent(FString SelectedSource); // Flags: Native|Protected 0x7FF414D0DA78
		TArray GetValidSources(); // Flags: Native|Public|BlueprintCallable 0x7FF414D0D998
		TArray GetSources(); // Flags: Native|Public|BlueprintCallable 0x7FF414D0D8B8
		FPIPVideoPlayerAssetConfig GetPlayerAssetConfig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D0D7D8
		UPictureInPicturePlayer GetMediaPlayerWidget(); // Flags: Final|Native|Public|Const 0x7FF414D0D6F8
		FPIPVideoPlayerAssetConfig GetDefaultPlayerAssetConfig(); // Flags: Final|Native|Public|Const 0x7FF414D0D618
		FPiPPartnerSource GetCurrentSource(); // Flags: Native|Public|BlueprintCallable 0x7FF414D0D538
		TArray GetActions(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0D458
		void Exit(bool bStop); // Flags: Native|Public|BlueprintCallable 0x7FF414D0D378
	};


	// Class PictureInPictureCore.PictureInPictureMediaPlayerCtrl
	// Inherited from UFortMediaPlayerCtrl -> UObject
	// Size: 0x10 (0x168 - 0x158)
	class UPictureInPictureMediaPlayerCtrl : public UFortMediaPlayerCtrl	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x158(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData03_3[0xE0]; // 0x28(0xE0) UNKNOWN PROPERTY
		FPIPVideoPlayerAssetConfig AssetConfig; // 0x108(0x88)
		UPictureInPictureMediaPlayerCtrl MediaController; // 0x190(0x8)
		unsigned char UnknownData04_6[0x50]; // 0x198(0x50) UNKNOWN PROPERTY
		USoundSubmixBase DefaultSubmix; // 0x1E8(0x8)
		USoundSubmixBase LicensedSubmix; // 0x1F0(0x8)
		unsigned char UnknownData05_7[0x38]; // 0x1F8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureCore.PictureInPicturePlayer");
			return ret;
		}

		void UpdateStreamingPlayerSize(FVector2D& InVector); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D0EE98
		void StreamedVideoOnUrlSuccess(FString URL); // Flags: Final|Native|Private 0x7FF414D0EDB8
		void StreamedVideoOnUrlFailure(FString URL); // Flags: Final|Native|Private 0x7FF414D0ECD8
		bool SetPlayerAssetConfig(FPIPVideoPlayerAssetConfig& InAssetConfig); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D0EBF8
		bool IsAssetConfigSet(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0EB18
		void HandleUCPAudioChanged(UFortClientSettingsRecord Settings); // Flags: Final|Native|Private 0x7FF414D0EA38
		void FlushPlayerAssetConfig(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0E958
	};


	// Class PictureInPictureCore.PictureInPicturePartnerControls
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UPictureInPicturePartnerControls : public UObject	
	{
	public:
		bool bRequiresAgeOfConsent; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		UPictureInPictureClient ClientObject; // 0x30(0x8)
		UPictureInPictureMediaController MediaController; // 0x38(0x8)

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
		TArray AvailableClientsList; // 0x30(0x10)
		FMulticastInlineDelegate OnPartnerUpdateComplete; // 0x40(0x10)
		FMulticastInlineDelegate OnPartnerChanged; // 0x50(0x10)
		bool bPartnerListUpdated; // 0x60(0x1)
		bool bIsSuspended; // 0x61(0x1)
		bool bCMSInitialized; // 0x62(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x63(0x5) UNKNOWN PROPERTY
		FString CurrentPlatform; // 0x68(0x10)
		unsigned char UnknownData03_6[0x10]; // 0x78(0x10) UNKNOWN PROPERTY
		TMap SupportedPartnerControls; // 0x88(0x50)
		FString CurrentPartnerName; // 0xD8(0x10)
		FString CurrentContinent; // 0xE8(0x10)
		FString CurrentCountry; // 0xF8(0x10)
		TArray CurrentSubdivisions; // 0x108(0x10)
		UFortMediaCMSEventsComponent CMSEventsComponent; // 0x118(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureCore.PictureInPictureSubsystem");
			return ret;
		}

		void UpdatePartnerItemList(UObject InWorldContext, bool bForce); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D10638
		void ToggleFullScreenPiP(); // Flags: Final|Native|Public 0x7FF414D10558
		void SuspendCurrentMediaController(); // Flags: Final|Native|Public 0x7FF414D10478
		void StoreLastUsedSource(FString InPartnerSourceName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D10398
		void StoreLastUsedPartner(FString InPartnerName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D102B8
		void StoreAutoEnableSetting(bool InUserEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D101D8
		void ShutdownAllPartners(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D100F8
		void ResumeCurrentMediaController(); // Flags: Final|Native|Public 0x7FF414D10018
		void OnCurrentPartnerSourceSelected(FPiPPartnerSource& SelectedSource); // Flags: Final|Native|Private|HasOutParms 0x7FF414D0FF38
		void OnCMSEventValid(UMediaCMSEvent ValidEvent); // Flags: Final|Native|Private 0x7FF414D0FE58
		void OnCMSEventInvalid(UMediaCMSEvent InvalidEvent); // Flags: Final|Native|Private 0x7FF414D0FD78
		bool IsPartnerListUpdated(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0FC98
		void HandleMediaSourceRequest(); // Flags: Final|Native|Private 0x7FF414D0FBB8
		void HandleFNEventsSetCurrentMediaControllerEnabled(bool InEnabled); // Flags: Final|Native|Private 0x7FF414D0FAD8
		TArray GetPartnerItemList(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0F9F8
		UPictureInPicturePartnerDataAsset GetPartnerItem(FString PartnerName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0F918
		UPictureInPicturePartnerControls GetPartnerControls(FString PartnerName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0F838
		UPictureInPictureMediaController GetPartnerController(FString PartnerName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0F758
		UPictureInPictureClient GetPartnerClient(FString PartnerName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0F678
		void GetLastUsedSource(FString& OutPartnerSourceName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D0F598
		void GetLastUsedPartner(FString& OutPartnerName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D0F4B8
		UPictureInPicturePartnerDataAsset GetCurrentPartnerItem(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0F3D8
		UPictureInPicturePartnerControls GetCurrentPartnerControls(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0F2F8
		UPictureInPictureMediaController GetCurrentPartnerController(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0F218
		UPictureInPictureClient GetCurrentPartnerClient(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0F138
		bool GetAutoEnableSetting(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D0F058
		void EnableFullScreenPiPOption(bool bEnable); // Flags: Final|Native|Public 0x7FF414D0EF78
	};

}
