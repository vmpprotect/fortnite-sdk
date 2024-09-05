#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Lobby
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Lobby.LobbyBeaconClient
	// Inherited from AOnlineBeaconClient -> AOnlineBeacon -> AActor -> UObject
	// Size: 0x88 (0x3A8 - 0x320)
	class ALobbyBeaconClient : public AOnlineBeaconClient	
	{
	public:
		ALobbyBeaconState LobbyState; // 0x320(0x8)
		ALobbyBeaconPlayerState PlayerState; // 0x328(0x8)
		unsigned char UnknownData02_6[0x1]; // 0x330(0x1) UNKNOWN PROPERTY
		ELobbyBeaconJoinState LobbyJoinServerState; // 0x331(0x1)
		unsigned char UnknownData03_7[0x76]; // 0x332(0x76) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Lobby.LobbyBeaconClient");
			return ret;
		}

		void ServerSetPartyOwner(FUniqueNetIdRepl InUniqueId, FUniqueNetIdRepl InPartyOwnerId); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF4146092B8
		void ServerNotifyJoiningServer(); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF4146091D8
		void ServerLoginPlayer(FString InSessionId, FUniqueNetIdRepl InUniqueId, FString UrlString); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF4146090F8
		void ServerKickPlayer(FUniqueNetIdRepl PlayerToKick, FText Reason); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414609018
		void ServerDisconnectFromLobby(); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414608F38
		void ServerCheat(FString Msg); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF414608E58
		void ClientWasKicked(FText KickReason); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414608D78
		void ClientSetInviteFlags(FJoinabilitySettings Settings); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414608C98
		void ClientPlayerLeft(FUniqueNetIdRepl InUniqueId); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414608BB8
		void ClientPlayerJoined(FText NewPlayerName, FUniqueNetIdRepl InUniqueId); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414608AD8
		void ClientLoginComplete(FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF4146089F8
		void ClientJoinGame(); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414608918
		void ClientAckJoiningServer(); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414608838
	};


	// Class Lobby.LobbyBeaconHost
	// Inherited from AOnlineBeaconHostObject -> AActor -> UObject
	// Size: 0x30 (0x2E8 - 0x2B8)
	class ALobbyBeaconHost : public AOnlineBeaconHostObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr LobbyStateClass; // 0x2C0(0x20)
		ALobbyBeaconState LobbyState; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Lobby.LobbyBeaconHost");
			return ret;
		}
	};


	// Class Lobby.LobbyBeaconPlayerState
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0xC8 (0x358 - 0x290)
	class ALobbyBeaconPlayerState : public AInfo	
	{
	public:
		FText DisplayName; // 0x290(0x10)
		FUniqueNetIdRepl UniqueID; // 0x2A0(0x30)
		FUniqueNetIdRepl PartyOwnerUniqueId; // 0x2D0(0x30)
		bool bInLobby; // 0x300(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x301(0x7) UNKNOWN PROPERTY
		AOnlineBeaconClient ClientActor; // 0x308(0x8)
		unsigned char UnknownData03_7[0x48]; // 0x310(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Lobby.LobbyBeaconPlayerState");
			return ret;
		}

		void OnRep_UniqueId(); // Flags: Final|Native|Protected 0x7FF414609558
		void OnRep_PartyOwner(); // Flags: Final|Native|Protected 0x7FF414609478
		void OnRep_InLobby(); // Flags: Final|Native|Protected 0x7FF414609398
	};


	// Class Lobby.LobbyBeaconState
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x1A8 (0x438 - 0x290)
	class ALobbyBeaconState : public AInfo	
	{
	public:
		int32_t MaxPlayers; // 0x290(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		UClass LobbyBeaconPlayerStateClass; // 0x298(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x2A0(0x8) UNKNOWN PROPERTY
		bool bLobbyStarted; // 0x2A8(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x2A9(0x3) UNKNOWN PROPERTY
		float WaitForPlayersTimeRemaining; // 0x2AC(0x4)
		FLobbyPlayerStateInfoArray Players; // 0x2B0(0x120)
		unsigned char UnknownData07_7[0x68]; // 0x3D0(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Lobby.LobbyBeaconState");
			return ret;
		}

		void OnRep_WaitForPlayersTimeRemaining(); // Flags: Final|Native|Protected 0x7FF414609718
		void OnRep_LobbyStarted(); // Flags: Final|Native|Protected 0x7FF414609638
	};


	// Class /DiscoveryBrowser/Lobby/DiscoveryGenericLobbyViolator.DiscoveryGenericLobbyViolator_C
	// Inherited from UAthenaMatchmakingViolator -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x338 - 0x338)
	class UDiscoveryGenericLobbyViolator_C : public UAthenaMatchmakingViolator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Lobby/DiscoveryGenericLobbyViolator.DiscoveryGenericLobbyViolator_C");
			return ret;
		}
	};


	// Class /DiscoveryBrowser/Lobby/MatchmakingSuggestionWidget.MatchmakingSuggestionWidget_C
	// Inherited from UFortMatchmakingSuggestionWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x300 - 0x300)
	class UMatchmakingSuggestionWidget_C : public UFortMatchmakingSuggestionWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Lobby/MatchmakingSuggestionWidget.MatchmakingSuggestionWidget_C");
			return ret;
		}
	};


	// Class /DiscoveryBrowser/Lobby/ActivityBrowserLobbyTileButton_MinimalStyle.ActivityBrowserLobbyTileButton_MinimalStyle_C
	// Inherited from UFortActivityLobbyTile -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x5C (0x148C - 0x1430)
	class UActivityBrowserLobbyTileButton_MinimalStyle_C : public UFortActivityLobbyTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x8)
		bool IsDisabled; // 0x1438(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1439(0x3) UNKNOWN PROPERTY
		FName KeyArtParameter; // 0x143C(0x4)
		FName MissingArtParameter; // 0x1440(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1444(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnActivityChanged; // 0x1448(0x10)
		FMulticastInlineDelegate OnShowChildModeChangedNotification; // 0x1458(0x10)
		FMulticastInlineDelegate OnShowChildModeFirstTimeNotification; // 0x1468(0x10)
		FMulticastInlineDelegate OnHideChildModeFirstTimeNotification; // 0x1478(0x10)
		int32_t MaxActivityNameCharacters; // 0x1488(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Lobby/ActivityBrowserLobbyTileButton_MinimalStyle.ActivityBrowserLobbyTileButton_MinimalStyle_C");
			return ret;
		}

		void Limit Text Characters(FText Text, int32_t Max Spaces, int32_t Max Length, FText& Trimmed Text); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5B0AD100
		void OnUnSelectedMatchmakingCanceled(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0AC800
		void OnShowChildActivityChangedNotification(FText& DisplayName); // Flags: HasOutParms|BlueprintEvent 0x15D5B0ACC00
		void OnDetailsUpdated(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0ACF00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5B0AC700
		void OnHideChildActivityFirstTimeNotification(); // Flags: BlueprintEvent 0x15D5B0ACE00
		void OnShowChildActivityFirstTimeNotification(); // Flags: BlueprintEvent 0x15D5B0ACB00
		void ExecuteUbergraph_ActivityBrowserLobbyTileButton_MinimalStyle(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D62E48500
		void OnHideChildModeFirstTimeNotification__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5B0ACD00
		void OnShowChildModeFirstTimeNotification__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5B0AC900
		void OnShowChildModeChangedNotification__DelegateSignature(FText DisplayName); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5B0ACA00
		void OnActivityChanged__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5B0AD000
	};


	// Class /DiscoveryBrowser/Lobby/ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C
	// Inherited from UFortActivityLobbyTile -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x14D8 - 0x1430)
	class UActivityBrowserLobbyTileButton_C : public UFortActivityLobbyTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x8)
		UWidgetAnimation Anim_SelectedMatchmaking; // 0x1438(0x8)
		UWidgetAnimation Anim_Unhovered; // 0x1440(0x8)
		UWidgetAnimation Anim_Hovered; // 0x1448(0x8)
		UImage Backing; // 0x1450(0x8)
		UWBP_Tile_FocusOutline_C FocusOutline; // 0x1458(0x8)
		UImage Image_KeyArt; // 0x1460(0x8)
		UBorder Panel_ChangeMode; // 0x1468(0x8)
		UScaleBox ScaleBox; // 0x1470(0x8)
		UCommonTextBlock Text_ChangeModeLabel; // 0x1478(0x8)
		USizeBox TileSize; // 0x1480(0x8)
		bool IsDisabled; // 0x1488(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1489(0x3) UNKNOWN PROPERTY
		FName KeyArtParameter; // 0x148C(0x4)
		FName MissingArtParameter; // 0x1490(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1494(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnActivityChanged; // 0x1498(0x10)
		FMulticastInlineDelegate OnShowChildModeChangedNotification; // 0x14A8(0x10)
		FMulticastInlineDelegate OnShowChildModeFirstTimeNotification; // 0x14B8(0x10)
		FMulticastInlineDelegate OnHideChildModeFirstTimeNotification; // 0x14C8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Lobby/ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C");
			return ret;
		}

		void OnUnSelectedMatchmakingCanceled(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0AF000
		void Finished_839C1612477AFCFDCF8BB89840A6FFE3(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0AFB00
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0AFE00
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0AFD00
		void OnPreviewImageChanged(bool bIsLoading, UTexture Texture); // Flags: Event|Protected|BlueprintEvent 0x15D5B0AF600
		void OnSelectedMatchmaking(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0AF500
		void OnDetailsUpdated(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0AF900
		void OnShowChildActivityChangedNotification(FText& DisplayName); // Flags: HasOutParms|BlueprintEvent 0x15D5B0AF400
		void OnShowChildActivityFirstTimeNotification(); // Flags: BlueprintEvent 0x15D5B0AF300
		void OnHideChildActivityFirstTimeNotification(); // Flags: BlueprintEvent 0x15D5B0AF800
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5B0AEF00
		void ExecuteUbergraph_ActivityBrowserLobbyTileButton(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D5B0AFC00
		void OnHideChildModeFirstTimeNotification__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5B0AF700
		void OnShowChildModeFirstTimeNotification__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5B0AF100
		void OnShowChildModeChangedNotification__DelegateSignature(FText DisplayName); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5B0AF200
		void OnActivityChanged__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5B0AFA00
	};


	// Class /DiscoveryBrowser/Lobby/DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C
	// Inherited from UFortAthenaMatchmakingWidgetLegacy -> UFortMatchmakingWidgetBase -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x2D0 (0x7E0 - 0x510)
	class UDiscoveryLobbyMatchmakingPlay_C : public UFortAthenaMatchmakingWidgetLegacy	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x8)
		UFortLockerVM FortLockerVM; // 0x518(0x8)
		UWidgetAnimation Anim_ShowMatchmakingDetails; // 0x520(0x8)
		UWidgetAnimation Anim_NewModeViolation; // 0x528(0x8)
		UBorder Border_DisableModeSetBP; // 0x530(0x8)
		UBorder Border_DisableModeSetBP; // 0x538(0x8)
		UHorizontalBox Box_LimitedMatchmaking; // 0x540(0x8)
		UHorizontalBox Box_LimitedMatchmaking; // 0x548(0x8)
		UHorizontalBox Box_ModeLocked; // 0x550(0x8)
		UHorizontalBox Box_ModeLocked; // 0x558(0x8)
		UWBP_UIKit_Button_Regular_C Button_Cancel; // 0x560(0x8)
		UWBP_UIKit_Button_Regular_C Button_Cancel; // 0x568(0x8)
		UWBP_UIKit_Button_Loud_C Button_Install; // 0x570(0x8)
		UWBP_UIKit_Button_Loud_C Button_Install; // 0x578(0x8)
		UActivityBrowserLobbyTileButton_C Button_MatchmakingMode; // 0x580(0x8)
		UActivityBrowserLobbyTileButton_MinimalStyle_C Button_MatchmakingMode; // 0x588(0x8)
		UWBP_UIKit_Button_Regular_C Button_ModeSet; // 0x590(0x8)
		UWBP_UIKit_Button_Regular_C Button_ModeSet; // 0x598(0x8)
		UWBP_UIKit_Button_Loud_C Button_Play; // 0x5A0(0x8)
		UWBP_UIKit_Button_Loud_C Button_Play; // 0x5A8(0x8)
		UWBP_UIKit_Button_Loud_C Button_StartMatch; // 0x5B0(0x8)
		UWBP_UIKit_Button_Loud_C Button_StartMatch; // 0x5B8(0x8)
		UCommonWidgetSwitcherLegacy CommonWidgetSwitcherLegacy; // 0x5C0(0x8)
		UOverlay ContentBeaconDownloadContainer; // 0x5C8(0x8)
		UOverlay ContentBeaconDownloadContainer; // 0x5D0(0x8)
		USimpleMaterialProgressBar_C ContentDownloadProgressBar; // 0x5D8(0x8)
		USimpleMaterialProgressBar_C ContentDownloadProgressBar; // 0x5E0(0x8)
		UCommonTextBlock ContentDownloadProgressText; // 0x5E8(0x8)
		UCommonTextBlock ContentDownloadProgressText; // 0x5F0(0x8)
		UWBP_UIKit_InfoBox_C CosmeticGate_Warning; // 0x5F8(0x8)
		UWBP_UIKit_InfoBox_C CosmeticGate_Warning; // 0x600(0x8)
		UMatchmakingInputIndicator_C MatchmakingInputIndicator; // 0x608(0x8)
		USizeBox MatchmakingStatus_Wrapper; // 0x610(0x8)
		USizeBox MatchmakingTitle_Wrapper; // 0x618(0x8)
		UNamedSlot NamedSlot_CustomHeader; // 0x620(0x8)
		UCommonTextBlock OptionalTextBlock_BlackoutCountdown; // 0x628(0x8)
		UCommonTextBlock OptionalTextBlock_BlackoutCountdown; // 0x630(0x8)
		UOverlay Overlay; // 0x638(0x8)
		UOverlay Overlay_MatchmakingTitle; // 0x640(0x8)
		UOverlay Overlay_Mobile; // 0x648(0x8)
		UOverlay Overlay_Mobile; // 0x650(0x8)
		UOverlay Overlay_ModeSet; // 0x658(0x8)
		UOverlay Overlay_ModeSet; // 0x660(0x8)
		UOverlay Overlay_PlayButton; // 0x668(0x8)
		UOverlay Overlay_PlayButton; // 0x670(0x8)
		USizeBox SizeBox_Content; // 0x678(0x8)
		USizeBox SizeBox_Violator; // 0x680(0x8)
		UVerticalBox SpinnerAndTextContainer; // 0x688(0x8)
		UVerticalBox SpinnerAndTextContainer; // 0x690(0x8)
		UCommonTextBlock TextBlock_MatchmakingHeader; // 0x698(0x8)
		UCommonTextBlock TextBlock_MatchmakingHeader; // 0x6A0(0x8)
		UCommonTextBlock TextBlock_MatchmakingMessage; // 0x6A8(0x8)
		UCommonTextBlock TextBlock_MatchmakingMessage; // 0x6B0(0x8)
		UCommonTextBlock TextBlock_PartySizeWarning; // 0x6B8(0x8)
		UCommonTextBlock TextBlock_PartySizeWarning; // 0x6C0(0x8)
		UVerticalBox VB_Warnings; // 0x6C8(0x8)
		UVerticalBox VB_Warnings; // 0x6D0(0x8)
		UWidgetSwitcher ViolatorSwitcher; // 0x6D8(0x8)
		UCommonVisibilitySwitcher Warning_Switcher; // 0x6E0(0x8)
		UCommonVisibilitySwitcher Warning_Switcher; // 0x6E8(0x8)
		FTimerHandle ShowNewPlaylistTimer; // 0x6F0(0x8)
		USoundBase MatchMakingSucceededSound; // 0x6F8(0x8)
		UFortPlaylistAthena PlaylistData; // 0x700(0x8)
		bool IsShowingMatchmakingDetails; // 0x708(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x709(0x7) UNKNOWN PROPERTY
		USoundBase CreativeMatchmakingSucceededSound; // 0x710(0x8)
		bool IsShowingSubModeFirstTimeNotification; // 0x718(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x719(0x7) UNKNOWN PROPERTY
		FTimerHandle Hide_ToolTip_Timer; // 0x720(0x8)
		bool IsSubModeFirstTimeNotificationHidden; // 0x728(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x729(0x7) UNKNOWN PROPERTY
		USoundBase MatchMakingSucceededOverrideSound; // 0x730(0x8)
		bool IsHabaneroMode; // 0x738(0x1)
		bool IsHabaneroEnabled; // 0x739(0x1)
		unsigned char UnknownData10_6[0x6]; // 0x73A(0x6) UNKNOWN PROPERTY
		FText HabaneroModeText; // 0x740(0x10)
		FText FirstTimeModeSetNotificationNoHabanero; // 0x750(0x10)
		bool DisplayNewVisualStyle; // 0x760(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x761(0x7) UNKNOWN PROPERTY
		FText ModeSetToolTipFirstLineText; // 0x768(0x10)
		FText ModeSetToolTipSecondLineRichText; // 0x778(0x10)
		FText CreativeModeSetToolTipFirstLineText; // 0x788(0x10)
		FText CreativeModeSetToolTipSecondLineRichText; // 0x798(0x10)
		bool IsTooltipReady; // 0x7A8(0x1)
		unsigned char UnknownData12_6[0x7]; // 0x7A9(0x7) UNKNOWN PROPERTY
		UClass CurrentHeaderWidget; // 0x7B0(0x8)
		bool IsMatchmaking; // 0x7B8(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x7B9(0x7) UNKNOWN PROPERTY
		FText CachedHabaneroText; // 0x7C0(0x10)
		TArray PlayButtonStyleTags; // 0x7D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Lobby/DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C");
			return ret;
		}

		ESlateVisibility __c2fc4cfa-41dd-9791-f280-97a4292256fb_SourceToDest(); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6143F00
		ESlateVisibility __d24071ec-4a30-1fdb-80cc-8e978324533a_SourceToDest(); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6143E00
		void UpdatePlayButtonStyleSheet(bool& Visibility); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6148100
		void Switch Style(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6148300
		bool OnGetPlayButtonEnabled(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15DB6142500
		FGeometry OnGetPlayButtonCachedGeometry(); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15DB6142600
		void Set Mobile Style(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6144300
		void OnInputMethodChanged(ECommonInputType bNewInputType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6142200
		void UpdateModeSetButtonTextAndIsEnabled(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6148200
		void PickMatchmakingSucceededSound(USoundBase& SelectedMatchmakingSucceededSound); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB6144600
		FText GetButtonPublicMatchText(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15DB6142A00
		FText GetButtonPrivateMatchText(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15DB6142B00
		void OnLoaded_B25A6A194877C2767759B49F2AE837DC(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6146300
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6142E00
		void OnSetPlayButtonText(FText& PlayButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB6144B00
		void OnSetCancelButtonText(FText& CancelButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB6145C00
		void PlaylistChanged(FPlaylistFrontEndData& NewPlaylist, FText& PlaylistCMSOverrideName, EFortLobbyType LobbyType); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB6144500
		void AnimateViolator(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6143D00
		void OnMatchmakingFinishedBlueprint(bool bSuccess, UFortPlaylistAthena Playlist); // Flags: Event|Protected|BlueprintEvent 0x15DB6146100
		void OnCrossplayPreferencesChanged(bool IsCrossplayEnabled); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6142700
		void ShouldShowMatchmakingDetails(bool bShow); // Flags: Event|Protected|BlueprintEvent 0x15DB6148400
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6142D00
		void OnViolatorStyleRefreshed(EFortMatchmakingViolatorStyle NewViolatorStyle); // Flags: Event|Protected|BlueprintEvent 0x15DB6144700
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_0_OnActivityChanged__DelegateSignature(); // Flags: BlueprintEvent 0x15DB6143600
		void OnSetPlayButtonSecondaryText(FText& PlayButtonSecondaryText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB6144C00
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6142300
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy Button); // Flags: BlueprintEvent 0x15DB6143500
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Play_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6143100
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_ModeSet_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6143300
		void OnSetHabaneroText(FText& HabaneroString, EHabaneroDisplayState& State); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB6145700
		void OnHabaneroStateUpdated(bool bIsHabaneroEnabled, bool bIsHabaneroIsland); // Flags: Event|Protected|BlueprintEvent 0x15DB6142400
		void OnSetCancelButtonEnabled(bool bEnabled); // Flags: Event|Protected|BlueprintEvent 0x15DB6145D00
		void OnSetCancelButtonVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x15DB6145B00
		void OnSetMatchmakingHeaderText(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB6145400
		void OnSetMatchmakingMessageText(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB6145300
		void OnSetMatchmakingModeButtonEnabled(bool bEnabled); // Flags: Event|Protected|BlueprintEvent 0x15DB6145200
		void OnSetPartySizeWarningText(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB6145000
		void OnSetPartySizeWarningVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x15DB6144E00
		void OnSetPlayButtonEnabled(bool bEnabled); // Flags: Event|Protected|BlueprintEvent 0x15DB6144D00
		void OnSetPlayButtonVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x15DB6144A00
		void OnLocalPlayerSittingOut(); // Flags: Event|Protected|BlueprintEvent 0x15DB6146200
		void OnSetStartMatchButtonVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x15DB6144900
		void OnSocialUserSittingOut(); // Flags: Event|Protected|BlueprintEvent 0x15DB6144800
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Cancel_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6143B00
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_StartMatch_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6142F00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6144400
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_ModeSet_1_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6143400
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Play_1_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6143200
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_1_K2Node_ComponentBoundEvent_11_OnActivityChanged__DelegateSignature(); // Flags: BlueprintEvent 0x15DB6143800
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_1_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy Button); // Flags: BlueprintEvent 0x15DB6143700
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Cancel_1_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6143C00
		void OnSetMatchmakingModeButtonText(); // Flags: Event|Protected|BlueprintEvent 0x15DB6145100
		void OnBlackoutCountdownText(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB6142900
		void OnBlackoutCountdownVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x15DB6142800
		void OnPreStartMatchmaking(); // Flags: Event|Protected|BlueprintEvent 0x15DB6145E00
		void OnModeLockedVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x15DB6146000
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_StartMatch_1_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6143000
		void OnSetContentDownloadProgressText(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB6145800
		void OnSetContentBeaconDownloadVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x15DB6145A00
		void OnSetContentDownloadProgressBar(float Progress); // Flags: Event|Protected|BlueprintEvent 0x15DB6145900
		void OnModeSelectButtonUpdated(bool bShouldShow, bool bShouldEnable); // Flags: Event|Protected|BlueprintEvent 0x15DB6145F00
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Install_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6143900
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Install_1_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6143A00
		void OnSetInstallButtonEnabled(bool bEnabled); // Flags: Event|Protected|BlueprintEvent 0x15DB6145600
		void OnSetInstallButtonVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x15DB6145500
		void ExecuteUbergraph_DiscoveryLobbyMatchmakingPlay(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB6142C00
	};

}
