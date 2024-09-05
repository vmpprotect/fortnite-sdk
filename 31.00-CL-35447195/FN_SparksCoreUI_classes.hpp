#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCoreUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksCoreUI.DynamicUISceneRequestCoordinatorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UDynamicUISceneRequestCoordinatorComponent : public UActorComponent	
	{
	public:
		UDynamicUIManager CachedDynamicUIManager; // 0xA0(0x8)
		unsigned char UnknownData01_7[0x28]; // 0xA8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreUI.DynamicUISceneRequestCoordinatorComponent");
			return ret;
		}

		void RemoveSceneK2(FDynamicUISceneRequestHandle& Request); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF414C12698
		UDynamicUISceneRequestCoordinatorComponent Get(APlayerController Controller); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414C125B8
		FDynamicUISceneRequestHandle AddScenesK2(UObject Requester, TArray& Scenes); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF414C124D8
		FDynamicUISceneRequestHandle AddSceneK2(FDynamicUISceneRequest& Request); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF414C123F8
	};


	// Class SparksCoreUI.DynamicUISceneRequestUtilities
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDynamicUISceneRequestUtilities : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreUI.DynamicUISceneRequestUtilities");
			return ret;
		}

		void Reset(FDynamicUISceneRequestHandle& Request); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C12858
		bool IsValid(FDynamicUISceneRequestHandle& Request); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C12778
	};


	// Class SparksCoreUI.SparksDynamicUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x28 (0x2D8 - 0x2B0)
	class ASparksDynamicUIDirector : public ADynamicUIDirectorBase	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x2B0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreUI.SparksDynamicUIDirector");
			return ret;
		}

		void HandleCursorModeChanging(bool bCursorModeEnabled, FName ActionName); // Flags: Final|Native|Protected 0x7FF414C12938
	};


	// Class SparksCoreUI.SparksQuestScreenContainer
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x330 - 0x2E0)
	class USparksQuestScreenContainer : public UCommonUserWidget	
	{
	public:
		FName QuestTabID; // 0x2E0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		UAthenaMapScreenContainer AthenaScreenContainer; // 0x2E8(0x8)
		bool bUseToggleSongMenuInputAction; // 0x2F0(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x2F1(0x7) UNKNOWN PROPERTY
		UInputAction ToggleSongMenuInputAction; // 0x2F8(0x8)
		unsigned char UnknownData06_6[0x24]; // 0x300(0x24) UNKNOWN PROPERTY
		TWeakObjectPtr EventRouter; // 0x324(0x8)
		unsigned char UnknownData07_7[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreUI.SparksQuestScreenContainer");
			return ret;
		}

		void SetQuestScreenVisible(bool bVisible); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C12F58
		void InitEventRouterBindings(UGameplayEventRouterComponent NewEventRouter); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C12E78
		void HandleToggleQuestListFromMapVisibility(bool bMapVisible); // Flags: Final|Native|Protected 0x7FF414C12D98
		void HandleToggleQuestList(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C12CB8
		void HandleMapPanelExitButtonPressed(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C12BD8
		void HandleAthenaScreenDeactivated(); // Flags: Final|Native|Protected 0x7FF414C12AF8
		void EventRouterToggleQuestList(FSparksQuestScreenToggleEvent& Payload); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C12A18
	};


	// Class SparksCoreUI.SparksSocialAvatarIcon
	// Inherited from UFortSocialAvatarIcon -> UFortLazyImage -> UCommonLazyImage -> UImage -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3C0 - 0x3C0)
	class USparksSocialAvatarIcon : public UFortSocialAvatarIcon	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreUI.SparksSocialAvatarIcon");
			return ret;
		}

		void BP_SetSocialUserFromPlayerState(AFortPlayerState PlayerState); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C13038
	};


	// Class SparksCoreUI.SparksSongItemDetailsVM
	// Inherited from UAthenaItemDetailsVM -> UFortItemDetailsVM -> UMVVMViewModelBase -> UObject
	// Size: 0x20 (0x320 - 0x300)
	class USparksSongItemDetailsVM : public UAthenaItemDetailsVM	
	{
	public:
		UTexture2D CoverArt; // 0x300(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x308(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreUI.SparksSongItemDetailsVM");
			return ret;
		}

		void OnSongCatalogRetrieved(bool bSuccess); // Flags: Final|Native|Private 0x7FF414C13118
	};


	// Class SparksCoreUI.SparksSongItemVM
	// Inherited from UAthenaItemVM -> UFortItemVM -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x110 - 0x110)
	class USparksSongItemVM : public UAthenaItemVM	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreUI.SparksSongItemVM");
			return ret;
		}
	};


	// Class SparksCoreUI.SparksSongLockerCategoryConfig
	// Inherited from UAthenaLockerCategoryConfig -> UFortLockerCategoryConfig -> UDataAsset -> UObject
	// Size: 0x0 (0x198 - 0x198)
	class USparksSongLockerCategoryConfig : public UAthenaLockerCategoryConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreUI.SparksSongLockerCategoryConfig");
			return ret;
		}
	};


	// Class SparksCoreUI.SparksCoreUIGlobals
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USparksCoreUIGlobals : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreUI.SparksCoreUIGlobals");
			return ret;
		}
	};

}
