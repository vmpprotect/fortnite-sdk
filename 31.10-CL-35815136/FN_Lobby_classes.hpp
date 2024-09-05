#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Lobby
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Lobby.LobbyBeaconClient
	// Inherited from AOnlineBeaconClient -> AOnlineBeacon -> AActor -> UObject
	// Size: 0x88 (0x3A8 - 0x320)
	class ALobbyBeaconClient : public AOnlineBeaconClient	
	{
	public:
		ALobbyBeaconState* LobbyState; // 0x320(0x8)
		ALobbyBeaconPlayerState* PlayerState; // 0x328(0x8)
		unsigned char UnknownData00_6[0x1]; // 0x330(0x1) UNKNOWN PROPERTY
		ELobbyBeaconJoinState LobbyJoinServerState; // 0x331(0x1)
		unsigned char UnknownData01_7[0x76]; // 0x332(0x76) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Lobby.LobbyBeaconClient");
			return ret;
		}

		void ServerSetPartyOwner(FUniqueNetIdRepl InUniqueId, FUniqueNetIdRepl InPartyOwnerId); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D5CF2A8(relative to base address)
		void ServerNotifyJoiningServer(); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D5CF25C(relative to base address)
		void ServerLoginPlayer(FString InSessionId, FUniqueNetIdRepl InUniqueId, FString UrlString); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D5CEFB0(relative to base address)
		void ServerKickPlayer(FUniqueNetIdRepl PlayerToKick, FText Reason); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D5CED64(relative to base address)
		void ServerDisconnectFromLobby(); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D5CED18(relative to base address)
		void ServerCheat(FString Msg); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF74D5CEC60(relative to base address)
		void ClientWasKicked(FText KickReason); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74D5CEAFC(relative to base address)
		void ClientSetInviteFlags(FJoinabilitySettings Settings); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74D5CE9DC(relative to base address)
		void ClientPlayerLeft(FUniqueNetIdRepl InUniqueId); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74D5CE890(relative to base address)
		void ClientPlayerJoined(FText NewPlayerName, FUniqueNetIdRepl InUniqueId); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74D5CE6F8(relative to base address)
		void ClientLoginComplete(FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74D5CE4DC(relative to base address)
		void ClientJoinGame(); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74D5CE4C4(relative to base address)
		void ClientAckJoiningServer(); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF749734174(relative to base address)
	};


	// Class Lobby.LobbyBeaconHost
	// Inherited from AOnlineBeaconHostObject -> AActor -> UObject
	// Size: 0x30 (0x2E8 - 0x2B8)
	class ALobbyBeaconHost : public AOnlineBeaconHostObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> LobbyStateClass; // 0x2C0(0x20)
		ALobbyBeaconState* LobbyState; // 0x2E0(0x8)

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
		unsigned char UnknownData00_6[0x7]; // 0x301(0x7) UNKNOWN PROPERTY
		AOnlineBeaconClient* ClientActor; // 0x308(0x8)
		unsigned char UnknownData01_7[0x48]; // 0x310(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Lobby.LobbyBeaconPlayerState");
			return ret;
		}

		void OnRep_UniqueId(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D5CEC14(relative to base address)
		void OnRep_PartyOwner(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D5CEBDC(relative to base address)
		void OnRep_InLobby(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D5CEB90(relative to base address)
	};


	// Class Lobby.LobbyBeaconState
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x1A8 (0x438 - 0x290)
	class ALobbyBeaconState : public AInfo	
	{
	public:
		int32_t MaxPlayers; // 0x290(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		UClass* LobbyBeaconPlayerStateClass; // 0x298(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x2A0(0x8) UNKNOWN PROPERTY
		bool bLobbyStarted; // 0x2A8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x2A9(0x3) UNKNOWN PROPERTY
		float WaitForPlayersTimeRemaining; // 0x2AC(0x4)
		FLobbyPlayerStateInfoArray Players; // 0x2B0(0x120)
		unsigned char UnknownData03_7[0x68]; // 0x3D0(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Lobby.LobbyBeaconState");
			return ret;
		}

		void OnRep_WaitForPlayersTimeRemaining(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D5CEC4C(relative to base address)
		void OnRep_LobbyStarted(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D5CEBC8(relative to base address)
	};


	// Class /DiscoveryBrowser/Lobby/DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C
	// Inherited from UFortAthenaMatchmakingWidgetLegacy -> UFortMatchmakingWidgetBase -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x2D8 (0x7E0 - 0x508)
	class UDiscoveryLobbyMatchmakingPlay_C : public UFortAthenaMatchmakingWidgetLegacy	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x8)
		UFortLockerVM* FortLockerVM; // 0x510(0x8)
		UWidgetAnimation* Anim_ShowMatchmakingDetails; // 0x518(0x8)
		UWidgetAnimation* Anim_NewModeViolation; // 0x520(0x8)
		UBorder* Border_DisableModeSetBP; // 0x528(0x8)
		UBorder* Border_DisableModeSetBP; // 0x530(0x8)
		UHorizontalBox* Box_LimitedMatchmaking; // 0x538(0x8)
		UHorizontalBox* Box_LimitedMatchmaking; // 0x540(0x8)
		UHorizontalBox* Box_ModeLocked; // 0x548(0x8)
		UHorizontalBox* Box_ModeLocked; // 0x550(0x8)
		UWBP_UIKit_Button_Regular_C* Button_Cancel; // 0x558(0x8)
		unsigned char UnknownData00_7[0x280]; // 0x560(0x280) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Lobby/DiscoveryLobbyMatchmakingPlay.DiscoveryLobbyMatchmakingPlay_C");
			return ret;
		}

		ESlateVisibility __c2fc4cfa-41dd-9791-f280-97a4292256fb_SourceToDest(); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		ESlateVisibility __d24071ec-4a30-1fdb-80cc-8e978324533a_SourceToDest(); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModeLockedVisibility(AFortPlayerController* BestLockedPlayer); // Flags: Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePlayButtonStyleSheet(bool& Visibility); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Switch Style(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool OnGetPlayButtonEnabled(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FGeometry OnGetPlayButtonCachedGeometry(); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Mobile Style(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputMethodChanged(ECommonInputType bNewInputType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateModeSetButtonTextAndIsEnabled(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PickMatchmakingSucceededSound(USoundBase* SelectedMatchmakingSucceededSound); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FText GetButtonPublicMatchText(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FText GetButtonPrivateMatchText(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_B25A6A194877C2767759B49F2AE837DC(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPlayButtonText(FText& PlayButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetCancelButtonText(FText& CancelButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaylistChanged(FPlaylistFrontEndData& NewPlaylist, FText& PlaylistCMSOverrideName, EFortLobbyType LobbyType); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimateViolator(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMatchmakingFinishedBlueprint(bool bSuccess, UFortPlaylistAthena* Playlist); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCrossplayPreferencesChanged(bool IsCrossplayEnabled); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShouldShowMatchmakingDetails(bool bShow); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnViolatorStyleRefreshed(EFortMatchmakingViolatorStyle NewViolatorStyle); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_0_OnActivityChanged__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPlayButtonSecondaryText(FText& PlayButtonSecondaryText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Play_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_ModeSet_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetHabaneroText(FText& HabaneroString, EHabaneroDisplayState& State); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHabaneroStateUpdated(bool bIsHabaneroEnabled, bool bIsHabaneroIsland); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetCancelButtonEnabled(bool bEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetCancelButtonVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetMatchmakingHeaderText(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetMatchmakingMessageText(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetMatchmakingModeButtonEnabled(bool bEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPartySizeWarningText(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPartySizeWarningVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPlayButtonEnabled(bool bEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPlayButtonVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLocalPlayerSittingOut(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetStartMatchButtonVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSocialUserSittingOut(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Cancel_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_StartMatch_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_ModeSet_1_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Play_1_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_1_K2Node_ComponentBoundEvent_11_OnActivityChanged__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_1_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Cancel_1_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetMatchmakingModeButtonText(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBlackoutCountdownText(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBlackoutCountdownVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPreStartMatchmaking(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_StartMatch_1_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetContentDownloadProgressText(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetContentBeaconDownloadVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetContentDownloadProgressBar(float Progress); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModeSelectButtonUpdated(bool bShouldShow, bool bShouldEnable); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Install_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Install_1_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetInstallButtonEnabled(bool bEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetInstallButtonVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_DiscoveryLobbyMatchmakingPlay(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Lobby/MatchmakingSuggestionWidget.MatchmakingSuggestionWidget_C
	// Inherited from UFortMatchmakingSuggestionWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2F8 - 0x2F8)
	class UMatchmakingSuggestionWidget_C : public UFortMatchmakingSuggestionWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Lobby/MatchmakingSuggestionWidget.MatchmakingSuggestionWidget_C");
			return ret;
		}
	};


	// Class /DiscoveryBrowser/Lobby/DiscoveryGenericLobbyViolator.DiscoveryGenericLobbyViolator_C
	// Inherited from UAthenaMatchmakingViolator -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x330 - 0x330)
	class UDiscoveryGenericLobbyViolator_C : public UAthenaMatchmakingViolator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Lobby/DiscoveryGenericLobbyViolator.DiscoveryGenericLobbyViolator_C");
			return ret;
		}
	};


	// Class /DiscoveryBrowser/Lobby/ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C
	// Inherited from UFortActivityLobbyTile -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x14D8 - 0x1430)
	class UActivityBrowserLobbyTileButton_C : public UFortActivityLobbyTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x8)
		UWidgetAnimation* Anim_SelectedMatchmaking; // 0x1438(0x8)
		UWidgetAnimation* Anim_Unhovered; // 0x1440(0x8)
		UWidgetAnimation* Anim_Hovered; // 0x1448(0x8)
		UImage* Backing; // 0x1450(0x8)
		UWBP_Tile_FocusOutline_C* FocusOutline; // 0x1458(0x8)
		UImage* Image_KeyArt; // 0x1460(0x8)
		UBorder* Panel_ChangeMode; // 0x1468(0x8)
		UScaleBox* ScaleBox; // 0x1470(0x8)
		UCommonTextBlock* Text_ChangeModeLabel; // 0x1478(0x8)
		USizeBox* TileSize; // 0x1480(0x8)
		bool IsDisabled; // 0x1488(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1489(0x3) UNKNOWN PROPERTY
		FName KeyArtParameter; // 0x148C(0x4)
		FName MissingArtParameter; // 0x1490(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1494(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnActivityChanged; // 0x1498(0x10)
		FMulticastInlineDelegate OnShowChildModeChangedNotification; // 0x14A8(0x10)
		FMulticastInlineDelegate OnShowChildModeFirstTimeNotification; // 0x14B8(0x10)
		FMulticastInlineDelegate OnHideChildModeFirstTimeNotification; // 0x14C8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Lobby/ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C");
			return ret;
		}

		void OnUnSelectedMatchmakingCanceled(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_839C1612477AFCFDCF8BB89840A6FFE3(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSelectedMatchmaking(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDetailsUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowChildActivityChangedNotification(FText& DisplayName); // Flags: HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowChildActivityFirstTimeNotification(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHideChildActivityFirstTimeNotification(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityBrowserLobbyTileButton(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHideChildModeFirstTimeNotification__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowChildModeFirstTimeNotification__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowChildModeChangedNotification__DelegateSignature(FText DisplayName); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActivityChanged__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Lobby/ActivityBrowserLobbyTileButton_MinimalStyle.ActivityBrowserLobbyTileButton_MinimalStyle_C
	// Inherited from UFortActivityLobbyTile -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x5C (0x148C - 0x1430)
	class UActivityBrowserLobbyTileButton_MinimalStyle_C : public UFortActivityLobbyTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x8)
		bool IsDisabled; // 0x1438(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1439(0x3) UNKNOWN PROPERTY
		FName KeyArtParameter; // 0x143C(0x4)
		FName MissingArtParameter; // 0x1440(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1444(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnActivityChanged; // 0x1448(0x10)
		FMulticastInlineDelegate OnShowChildModeChangedNotification; // 0x1458(0x10)
		FMulticastInlineDelegate OnShowChildModeFirstTimeNotification; // 0x1468(0x10)
		FMulticastInlineDelegate OnHideChildModeFirstTimeNotification; // 0x1478(0x10)
		int32_t MaxActivityNameCharacters; // 0x1488(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Lobby/ActivityBrowserLobbyTileButton_MinimalStyle.ActivityBrowserLobbyTileButton_MinimalStyle_C");
			return ret;
		}

		void Limit Text Characters(FText Text, int32_t Max Spaces, int32_t Max Length, FText& Trimmed Text); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUnSelectedMatchmakingCanceled(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowChildActivityChangedNotification(FText& DisplayName); // Flags: HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDetailsUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHideChildActivityFirstTimeNotification(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowChildActivityFirstTimeNotification(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityBrowserLobbyTileButton_MinimalStyle(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHideChildModeFirstTimeNotification__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowChildModeFirstTimeNotification__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowChildModeChangedNotification__DelegateSignature(FText DisplayName); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActivityChanged__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
