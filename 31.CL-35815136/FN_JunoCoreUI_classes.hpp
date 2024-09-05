#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoCoreUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoCoreUI.JunoIndexedWidgetInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoIndexedWidgetInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCoreUI.JunoIndexedWidgetInterface");
			return ret;
		}

		void TriggerWidgetUpdated(); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerWidgetInitialized(); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWidgetIndex(int32_t InIndex); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoCoreUI.JunoPlayerAvatarContainer
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x320 - 0x318)
	class UJunoPlayerAvatarContainer : public UFortHUDElementWidget	
	{
	public:
		UFortPlayerAvatarViewModel* PlayerAvatarViewModel; // 0x318(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCoreUI.JunoPlayerAvatarContainer");
			return ret;
		}

		void RepresentRemotePlayer(FUniqueNetIdRepl& UniqueID, UFortPlayerAvatarViewModel* InPlayerAvatarViewModel); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751AEEE8C(relative to base address)
		void RepresentLocalPlayer(UFortPlayerAvatarViewModel* InPlayerAvatarViewModel); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751AEED70(relative to base address)
	};


	// Class JunoCoreUI.JunoPlayerCardViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0xA0 (0x108 - 0x68)
	class UJunoPlayerCardViewModel : public UMVVMViewModelBase	
	{
	public:
		FText PlayerName; // 0x68(0x10)
		EJunoWorldOccupantKind PlayerRole; // 0x78(0x1)
		EJunoPlayerCardStatus PlayerStatus; // 0x79(0x1)
		bool IsInParty; // 0x7A(0x1)
		bool IsViewOnly; // 0x7B(0x1)
		bool IsFriendsWithWorldOwner; // 0x7C(0x1)
		bool IsEliminated; // 0x7D(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x7E(0x2) UNKNOWN PROPERTY
		int32_t NumKeysLeft; // 0x80(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FUniqueNetIdRepl UniqueNetId; // 0x88(0x30)
		AFortPlayerControllerAthena* OwningPlayerController; // 0xB8(0x8)
		UClass* OpenProfileActionMenuClass; // 0xC0(0x8)
		unsigned char UnknownData02_6[0x20]; // 0xC8(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnWorldKeyGranted; // 0xE8(0x10)
		FMulticastInlineDelegate OnWorldKeyRevoked; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCoreUI.JunoPlayerCardViewModel");
			return ret;
		}

		void ShowNotificationToast(AFortPlayerController* FortPlayerController, FText& Title, FText& Description, EFortNotificationType NotificationType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751AEF414(relative to base address)
		void RevokeWorldKey(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEF0BC(relative to base address)
		void OpenSidebarUserProfile(UCommonActivatableWidget* CurrentStateWidget, ULocalPlayer* LocalPlayer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEEB88(relative to base address)
		void OnWorldKeyRevoked__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWorldKeyGranted__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void KickWorldUser(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEEB74(relative to base address)
		void GrantWorldKey(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEE88C(relative to base address)
	};


	// Class JunoCoreUI.JunoPlayerManagementViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x78 (0xE0 - 0x68)
	class UJunoPlayerManagementViewModel : public UMVVMViewModelBase	
	{
	public:
		TArray<UJunoPlayerCardViewModel*> NeedsInvitePlayerCards; // 0x68(0x10)
		TArray<UJunoPlayerCardViewModel*> InWorldPlayerCards; // 0x78(0x10)
		TArray<UJunoPlayerCardViewModel*> NotInWorldPlayerCards; // 0x88(0x10)
		UJunoPlayerCardViewModel* SelectedPlayerCard; // 0x98(0x8)
		EJunoWorldSanctionType WorldSanctionType; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		int32_t NumKeysLeft; // 0xA4(0x4)
		int32_t NumSpotsLeft; // 0xA8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FText WorldName; // 0xB0(0x10)
		FText OwnerName; // 0xC0(0x10)
		bool IsWorldOwner; // 0xD0(0x1)
		bool IsViewOnly; // 0xD1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0xD2(0x2) UNKNOWN PROPERTY
		int32_t NumSurvivingKeyholders; // 0xD4(0x4)
		int32_t MaxNumOfPlayers; // 0xD8(0x4)
		int32_t MaxNumOfKeys; // 0xDC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCoreUI.JunoPlayerManagementViewModel");
			return ret;
		}

		void UpdateFromData(APlayerController* WidgetOwner, UJunoWorld* JunoWorld); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEF5D8(relative to base address)
		void SetupDummyData(); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF751AEF400(relative to base address)
		bool IsInGame(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEEB50(relative to base address)
	};


	// Class JunoCoreUI.JunoSettingRotator
	// Inherited from UCommonRotator -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x1400 - 0x13F8)
	class UJunoSettingRotator : public UCommonRotator	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x13F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCoreUI.JunoSettingRotator");
			return ret;
		}

		void SetAllowNavigationControl(bool InAllowNavigationControl); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEF164(relative to base address)
	};


	// Class JunoCoreUI.JunoUGCViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x68 (0xD0 - 0x68)
	class UJunoUGCViewModel : public UMVVMViewModelBase	
	{
	public:
		FString ContextId; // 0x68(0x10)
		FString ContextEntity; // 0x78(0x10)
		FText CurrentText; // 0x88(0x10)
		FText DefaultText; // 0x98(0x10)
		bool bPendingSave; // 0xA8(0x1)
		bool bCharLimitReached; // 0xA9(0x1)
		bool bContainsSpecialChar; // 0xAA(0x1)
		bool bContainsProfanity; // 0xAB(0x1)
		bool bCustomValidationFailed; // 0xAC(0x1)
		bool bTextIsValid; // 0xAD(0x1)
		bool bGenericErrorOccurred; // 0xAE(0x1)
		unsigned char UnknownData00_7[0x21]; // 0xAF(0x21) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCoreUI.JunoUGCViewModel");
			return ret;
		}

		void SetTextIfValid(bool bIsValid, FText& ValidText); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751AEF314(relative to base address)
	};


	// Class JunoCoreUI.JunoWorldDataViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x140 (0x1A8 - 0x68)
	class UJunoWorldDataViewModel : public UMVVMViewModelBase	
	{
	public:
		FText WorldName; // 0x68(0x10)
		int32_t WorldSlotNumber; // 0x78(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		FText WorldOwner; // 0x80(0x10)
		FUniqueNetIdRepl WorldOwnerId; // 0x90(0x30)
		FDateTime CreationDate; // 0xC0(0x8)
		FDateTime LastPlayed; // 0xC8(0x8)
		FText TimePlayed; // 0xD0(0x10)
		bool bIsEliminated; // 0xE0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		int32_t NumSurvivingKeyholders; // 0xE4(0x4)
		bool bIsCreateFlow; // 0xE8(0x1)
		bool bIsEmptyWorldSlot; // 0xE9(0x1)
		bool bIsNewInvitation; // 0xEA(0x1)
		unsigned char UnknownData02_6[0x5]; // 0xEB(0x5) UNKNOWN PROPERTY
		UJunoWorldImageObject* WorldImageObj; // 0xF0(0x8)
		int32_t ActivePlayers; // 0xF8(0x4)
		int32_t GrantedKeys; // 0xFC(0x4)
		UJunoWorldSettingViewModel* NameVM; // 0x100(0x8)
		UJunoWorldSettingViewModel* ModeVM; // 0x108(0x8)
		UJunoWorldSettingViewModel* ImageVM; // 0x110(0x8)
		UJunoWorldSettingViewModel* SeedVM; // 0x118(0x8)
		bool bSettingsLocked; // 0x120(0x1)
		bool bSettingsChangedAfterGeneration; // 0x121(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x122(0x2) UNKNOWN PROPERTY
		int32_t MaxPlayersInWorld; // 0x124(0x4)
		EMatchmakingErrorType MatchmakingError; // 0x128(0x1)
		ESanctionType SanctionType; // 0x129(0x1)
		bool bIsSharedWorld; // 0x12A(0x1)
		bool bIsCustom; // 0x12B(0x1)
		bool bCanBeSaved; // 0x12C(0x1)
		bool bAllowWorldUGCCreation; // 0x12D(0x1)
		bool bIsInCabinMode; // 0x12E(0x1)
		unsigned char UnknownData04_6[0x29]; // 0x12F(0x29) UNKNOWN PROPERTY
		TArray<UJunoWorldSettingViewModel*> AdvancedSettingsList; // 0x158(0x10)
		TArray<UJunoWorldImageObject*> WorldImageList; // 0x168(0x10)
		unsigned char UnknownData05_6[0x10]; // 0x178(0x10) UNKNOWN PROPERTY
		FString WorldId; // 0x188(0x10)
		UJunoWorld* OriginalData; // 0x198(0x8)
		AFortPlayerController* WidgetOwnerPC; // 0x1A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCoreUI.JunoWorldDataViewModel");
			return ret;
		}

		bool WorldCanBeRenamed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEF728(relative to base address)
		void SaveChanges(FDelegateProperty CompletedDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEF0D0(relative to base address)
		void RenameWorld(FDelegateProperty CompletedDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEECDC(relative to base address)
		void RemoveSharedWorld(FDelegateProperty CompletedDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEEC48(relative to base address)
		void OnRequestCompleted__DelegateSignature(bool RequestResult); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasPendingActions(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEEB08(relative to base address)
		bool HasChanges(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEEAE4(relative to base address)
		void HandlePlayClicked(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751AEE9FC(relative to base address)
		TArray GetTagNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEE808(relative to base address)
		int32_t GetSelectedWorldImageIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEE7B8(relative to base address)
		EJunoUserGeneratedTextErrorType GetNextPendingAction(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEE72C(relative to base address)
		FText GetLastPlayedFormatted(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEE6F0(relative to base address)
		FText GetCreationDateFormatted(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEE618(relative to base address)
		void DeleteWorld(FDelegateProperty CompletedDelegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEE554(relative to base address)
		bool CheckWorldMatchmakingAvailability(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEE530(relative to base address)
		void CancelChanges(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEE4A8(relative to base address)
		void AcknowledgePendingAction(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEE424(relative to base address)
	};


	// Class JunoCoreUI.JunoWorldImageObject
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UJunoWorldImageObject : public UObject	
	{
	public:
		FMulticastInlineDelegate OnTextureUpdated; // 0x28(0x10)
		FDataTableRowHandle RowHandle; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCoreUI.JunoWorldImageObject");
			return ret;
		}

		void UpdateImageReference(FName& NewRowName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751AEF69C(relative to base address)
		TWeakObjectPtr GetTexture(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEE844(relative to base address)
		FName GetImageReferenceName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7496973C8(relative to base address)
	};


	// Class JunoCoreUI.JunoWorldSettingViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0xC0 (0x128 - 0x68)
	class UJunoWorldSettingViewModel : public UMVVMViewModelBase	
	{
	public:
		FString SettingId; // 0x68(0x10)
		FText SettingName; // 0x78(0x10)
		EJunoWorldSettingCategory SettingCategory; // 0x88(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		int32_t SelectedOption; // 0x8C(0x4)
		int32_t SelectedModeIndex; // 0x90(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
		TArray<bool> CanDefaultBeChangedPerMode; // 0x98(0x10)
		TArray<bool> CanChangePostCreation; // 0xA8(0x10)
		TArray<int32_t> DefaultOptionPerMode; // 0xB8(0x10)
		int32_t NumericValue; // 0xC8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		UJunoUGCViewModel* UGCViewModel; // 0xD0(0x8)
		bool bIsGameMode; // 0xD8(0x1)
		bool bContainsUGC; // 0xD9(0x1)
		unsigned char UnknownData03_6[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY
		TArray<FJunoWorldSettingOptionRow> OptionList; // 0xE0(0x10)
		TWeakObjectPtr<UTexture2D*> SettingImage; // 0xF0(0x20)
		bool bShowDefaultTag; // 0x110(0x1)
		bool bIsCustom; // 0x111(0x1)
		bool bIsLocked; // 0x112(0x1)
		bool bCanBeLocked; // 0x113(0x1)
		unsigned char UnknownData04_7[0x14]; // 0x114(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCoreUI.JunoWorldSettingViewModel");
			return ret;
		}

		bool IsDefaultOptionSelected(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEEB24(relative to base address)
		FText GetOptionName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEE784(relative to base address)
		FText GetOptionDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEE750(relative to base address)
		int32_t GetCurrentDefaultIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEE6C8(relative to base address)
	};


	// Class JunoCoreUI.JunoDropSplitModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x418 - 0x3F0)
	class UJunoDropSplitModal : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x3F0(0x20) UNKNOWN PROPERTY
		UCommonButtonBase* Button_Confirm; // 0x410(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCoreUI.JunoDropSplitModal");
			return ret;
		}

		void OnOperationSet(EJunoContextMenuAction ActionType, FText& ActionText, int32_t StackCount, int32_t QuantityDisplayMultiplier); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleQuantityChanged(EJunoContextMenuAction InActionType, int32_t InUpdatedCount); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751AEEA10(relative to base address)
		void HandleConfirmOperation(EJunoContextMenuAction InActionType, int32_t InDesiredCount); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751AEE8A0(relative to base address)
	};


	// Class JunoCoreUI.JunoContextMenu
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x490 - 0x3F0)
	class UJunoContextMenu : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x3F0(0x38) UNKNOWN PROPERTY
		TMap<EJunoContextMenuAction, FText> MenuActionToDisplayText; // 0x428(0x50)
		UJunoDropSplitModal* Widget_QuantitySelector; // 0x478(0x8)
		FDataTableRowHandle BackAction; // 0x480(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCoreUI.JunoContextMenu");
			return ret;
		}

		void OnShowQuantitySelectorState(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAddMenuEntry(EJunoContextMenuAction MenuAction, bool bDisabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleContextEntrySelected(EJunoContextMenuAction MenuAction); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751AEE97C(relative to base address)
		TSet GetAllAvailableActions(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoCoreUI.JunoSanitizedEditableText
	// Inherited from UEditableTextBox -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0xEF0 - 0xE68)
	class UJunoSanitizedEditableText : public UEditableTextBox	
	{
	public:
		FMulticastInlineDelegate OnCharacterLimitReached; // 0xE68(0x10)
		FMulticastInlineDelegate OnInvalidCharacterUsed; // 0xE78(0x10)
		FMulticastInlineDelegate OnProfanityDetected; // 0xE88(0x10)
		FMulticastInlineDelegate OnTextIsValid; // 0xE98(0x10)
		int32_t CharacterLimit; // 0xEA8(0x4)
		int32_t CharacterCount; // 0xEAC(0x4)
		FString ContextId; // 0xEB0(0x10)
		FString ContextEntity; // 0xEC0(0x10)
		unsigned char UnknownData00_7[0x20]; // 0xED0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCoreUI.JunoSanitizedEditableText");
			return ret;
		}

		void SetPredefinedText(FText& InPredefinedText); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751AEF264(relative to base address)
		void SetCharacterLimit(int32_t NewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AEF1E4(relative to base address)
		int32_t GetCharacterLimit(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEE600(relative to base address)
		int32_t GetCharacterCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AEE5E8(relative to base address)
	};


	// Class JunoCoreUI.JunoTouchControlsHelp
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x410 - 0x3F0)
	class UJunoTouchControlsHelp : public UCommonActivatableWidget	
	{
	public:
		UCommonButtonBase* Button_TouchClose; // 0x3F0(0x8)
		FDataTableRowHandle CloseAction; // 0x3F8(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x408(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCoreUI.JunoTouchControlsHelp");
			return ret;
		}
	};

}
