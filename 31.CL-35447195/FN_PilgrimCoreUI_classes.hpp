#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PilgrimCoreUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PilgrimCoreUI.FortSettingRegistryExtension_Pilgrim
	// Inherited from UFortGameSettingRegistryExtension -> UFortGameSettingRegistryExtensionBase -> UObject
	// Size: 0x58 (0x80 - 0x28)
	class UFortSettingRegistryExtension_Pilgrim : public UFortGameSettingRegistryExtension	
	{
	public:
		UPilgrimPresetSelector PilgrimPresetSelectorInstance; // 0x28(0x8)
		unsigned char UnknownData01_7[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.FortSettingRegistryExtension_Pilgrim");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimFTUEControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UPilgrimFTUEControllerComponent : public UControllerComponent	
	{
	public:
		UPilgrimGameUserSettings PilgrimUserSettings; // 0xA0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimFTUEControllerComponent");
			return ret;
		}

		void SetHasSeenFTUEMainStage(bool bHasSeenFTUEMainStage); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF5980
		void SetHasSeenFTUEBattleStage(bool bHasSeenFTUEBattleStage); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF58A0
		bool GetHasSeenFTUEMainStage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF57C0
		bool GetHasSeenFTUEBattleStage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF56E0
		void DisplayFTUEWidgets(); // Flags: Event|Public|BlueprintEvent 0x7FF414DF5600
	};


	// Class PilgrimCoreUI.PilgrimFTUEWidgetBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x418 - 0x3F8)
	class UPilgrimFTUEWidgetBase : public UCommonActivatableWidget	
	{
	public:
		FGameplayTagContainer ApprovedPlaylistTags; // 0x3F8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimFTUEWidgetBase");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimGameWidgetBase
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x310 - 0x2B8)
	class UPilgrimGameWidgetBase : public UUserWidget	
	{
	public:
		TArray GameplayEventHandles; // 0x2B8(0x10)
		APilgrimMusicBattleInstance MusicBattleInstance; // 0x2C8(0x8)
		unsigned char UnknownData01_7[0x40]; // 0x2D0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimGameWidgetBase");
			return ret;
		}

		void SubscribeForChangingVisibilityByTag(FGameplayTag& GameplayTag); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414DF5FA0
		void OnScoreDataReplicated(FPilgrimMusicBattleData& MusicBattleData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DF5EC0
		void OnScoreDataReceivedLocalPlayer(FPilgrimGameProgress& GameProgress); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DF5DE0
		void OnOverdriveDataReceivedLocalPlayer(FPilgrimGameProgress& GameProgress); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DF5D00
		void OnMusicBattleInstanceInitializeEvent(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DF5C20
		EPilgrimTrackType GetTrackTypeForPlayer(AFortPlayerStateAthena PlayerState); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DF5B40
		EPilgrimTrackType GetTrackTypeForMusicBattlePlayerIndex(int32_t PlayerIndex); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DF5A60
	};


	// Class PilgrimCoreUI.PilgrimInputSettingPreviewBehavior
	// Inherited from UFortInputSettingPreviewBehavior -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UPilgrimInputSettingPreviewBehavior : public UFortInputSettingPreviewBehavior	
	{
	public:
		EPresetLanesDifficulty PresetDifficulty; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimInputSettingPreviewBehavior");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimKeybindWidget
	// Inherited from UFortKeybindWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0xB30 - 0xB20)
	class UPilgrimKeybindWidget : public UFortKeybindWidget	
	{
	public:
		EPlayerMappableKeySlot MappableKeySlot; // 0xB20(0x1)
		unsigned char UnknownData01_7[0xF]; // 0xB21(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimKeybindWidget");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimPlayerInfoWidgetBase
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UPilgrimPlayerInfoWidgetBase : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimPlayerInfoWidgetBase");
			return ret;
		}

		void HookUpVoiceIcon(UFortVoiceChatStatusIcon Icon, AFortPlayerStateAthena Player); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF6080
	};


	// Class PilgrimCoreUI.PilgrimPostGameProgressWidget
	// Inherited from UFortSeasonDataWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E0 - 0x2E0)
	class UPilgrimPostGameProgressWidget : public UFortSeasonDataWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimPostGameProgressWidget");
			return ret;
		}

		int32_t GetTotalXP(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF414DF6240
		int32_t GetMatchXP(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF414DF6160
	};


	// Class PilgrimCoreUI.PilgrimPresetPreviewer
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x400 - 0x3F8)
	class UPilgrimPresetPreviewer : public UCommonActivatableWidget	
	{
	public:
		UPilgrimPresetSelector PilgrimPresetSelectorInstance; // 0x3F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimPresetPreviewer");
			return ret;
		}

		TArray GetKeyBrushesPlayerCustomMappings(APlayerController PlayerController, TArray& MappingNames, EHardwareDevicePrimaryType DeviceType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414DF64E0
		TArray GetKeyBrushesForMappingContext(UFortInputMappingContext InputMappingContext, EHardwareDevicePrimaryType DeviceType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF6400
		bool ApplyPreset(APlayerController CurrentPlayer, int32_t SelectedNumLanes, EHardwareDevicePrimaryType DeviceType, int32_t SelectedPresetIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF6320
	};


	// Class PilgrimCoreUI.PilgrimPresetSelector
	// Inherited from UPilgrimPresetSelectorBase -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPilgrimPresetSelector : public UPilgrimPresetSelectorBase	
	{
	public:
		TWeakObjectPtr PilgrimPresetConfiguration; // 0x28(0x8)
		TWeakObjectPtr OwningPlayer; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimPresetSelector");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimPresetSwitcher
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x308 - 0x2E0)
	class UPilgrimPresetSwitcher : public UCommonUserWidget	
	{
	public:
		int32_t NumLanes; // 0x2E0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		UFortSettingsRotator Rotator_Preset; // 0x2E8(0x8)
		UCommonButtonLegacy Button_Decrease_Preset; // 0x2F0(0x8)
		UCommonButtonLegacy Button_Increase_Preset; // 0x2F8(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x300(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimPresetSwitcher");
			return ret;
		}

		void InitializeForLanes(int32_t NewNumLanes, TArray& InputMappingContexts); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF414DF66A0
		void GetSelectedItems(int32_t& OutSelectedLaneNum, int32_t& OutSelectedIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DF65C0
	};


	// Class PilgrimCoreUI.PilgrimSongSortVM
	// Inherited from UFortSortItemVM -> UFortSortFilterItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x60 (0xE0 - 0x80)
	class UPilgrimSongSortVM : public UFortSortItemVM	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0x80(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongSortVM");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimSongAlphaSortVM
	// Inherited from UPilgrimSongSortVM -> UFortSortItemVM -> UFortSortFilterItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x10 (0xF0 - 0xE0)
	class UPilgrimSongAlphaSortVM : public UPilgrimSongSortVM	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongAlphaSortVM");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimSongFeaturedSortVM
	// Inherited from UPilgrimSongSortVM -> UFortSortItemVM -> UFortSortFilterItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UPilgrimSongFeaturedSortVM : public UPilgrimSongSortVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongFeaturedSortVM");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimSongOwnedSortVM
	// Inherited from UPilgrimSongSortVM -> UFortSortItemVM -> UFortSortFilterItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UPilgrimSongOwnedSortVM : public UPilgrimSongSortVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongOwnedSortVM");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimSongArtistSortVM
	// Inherited from UPilgrimSongSortVM -> UFortSortItemVM -> UFortSortFilterItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UPilgrimSongArtistSortVM : public UPilgrimSongSortVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongArtistSortVM");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimSongFilterItemVM
	// Inherited from UFortFilterItemVM -> UFortSortFilterItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x60 (0xE0 - 0x80)
	class UPilgrimSongFilterItemVM : public UFortFilterItemVM	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0x80(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongFilterItemVM");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimSongFilterOwnedVM
	// Inherited from UPilgrimSongFilterItemVM -> UFortFilterItemVM -> UFortSortFilterItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UPilgrimSongFilterOwnedVM : public UPilgrimSongFilterItemVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongFilterOwnedVM");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimSongFilterAvailableVM
	// Inherited from UPilgrimSongFilterItemVM -> UFortFilterItemVM -> UFortSortFilterItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UPilgrimSongFilterAvailableVM : public UPilgrimSongFilterItemVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongFilterAvailableVM");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimSongFilterOptionVM
	// Inherited from UFortOptionItemVM -> UFortSortFilterItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x8 (0x88 - 0x80)
	class UPilgrimSongFilterOptionVM : public UFortOptionItemVM	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x80(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongFilterOptionVM");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimSongSecondaryFilterVM
	// Inherited from UPilgrimSongFilterOptionVM -> UFortOptionItemVM -> UFortSortFilterItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x48 (0xD0 - 0x88)
	class UPilgrimSongSecondaryFilterVM : public UPilgrimSongFilterOptionVM	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0x88(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongSecondaryFilterVM");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimSongSecondaryFilterUnarchivedOnlyVM
	// Inherited from UPilgrimSongSecondaryFilterVM -> UPilgrimSongFilterOptionVM -> UFortOptionItemVM -> UFortSortFilterItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x70 (0x140 - 0xD0)
	class UPilgrimSongSecondaryFilterUnarchivedOnlyVM : public UPilgrimSongSecondaryFilterVM	
	{
	public:
		unsigned char UnknownData01_1[0x70]; // 0xD0(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongSecondaryFilterUnarchivedOnlyVM");
			return ret;
		}

		void HandleControllerProfileChanges(); // Flags: Final|Native|Protected 0x7FF414DF6780
	};


	// Class PilgrimCoreUI.PilgrimSongFilterFeaturedVM
	// Inherited from UPilgrimSongFilterItemVM -> UFortFilterItemVM -> UFortSortFilterItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UPilgrimSongFilterFeaturedVM : public UPilgrimSongFilterItemVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongFilterFeaturedVM");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimSongSearchTextVM
	// Inherited from UFortSortFilterSearchTextVM -> UMVVMViewModelBase -> UObject
	// Size: 0x48 (0xC0 - 0x78)
	class UPilgrimSongSearchTextVM : public UFortSortFilterSearchTextVM	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0x78(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongSearchTextVM");
			return ret;
		}
	};


	// Class PilgrimCoreUI.PilgrimSongFilterVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x20 (0x88 - 0x68)
	class UPilgrimSongFilterVM : public UMVVMViewModelBase	
	{
	public:
		UFortSortFilterVM SortFilter; // 0x68(0x8)
		TArray FilteredItems; // 0x70(0x10)
		APlayerController OwningController; // 0x80(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimSongFilterVM");
			return ret;
		}

		void Initialize(APlayerController InOwningController, FGameplayTagContainer& InSortTags, FGameplayTagContainer& InFilterTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DF6860
	};


	// Class PilgrimCoreUI.PilgrimCoreUIGlobals
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimCoreUIGlobals : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreUI.PilgrimCoreUIGlobals");
			return ret;
		}
	};

}
