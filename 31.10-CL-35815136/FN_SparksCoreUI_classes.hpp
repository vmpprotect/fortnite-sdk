#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksCoreUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SparksCoreUI.DynamicUISceneRequestCoordinatorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UDynamicUISceneRequestCoordinatorComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreUI.DynamicUISceneRequestCoordinatorComponent");
			return ret;
		}

		void RemoveSceneK2(FDynamicUISceneRequestHandle& Request); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751069AC0(relative to base address)
		UDynamicUISceneRequestCoordinatorComponent Get(APlayerController* Controller); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510695E0(relative to base address)
		FDynamicUISceneRequestHandle AddScenesK2(UObject* Requester, TArray<UDynamicUIScene*>& Scenes); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751069328(relative to base address)
		FDynamicUISceneRequestHandle AddSceneK2(FDynamicUISceneRequest& Request); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510691D0(relative to base address)
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

		void Reset(FDynamicUISceneRequestHandle& Request); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751069BBC(relative to base address)
		bool IsValid(FDynamicUISceneRequestHandle& Request); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751069944(relative to base address)
	};


	// Class SparksCoreUI.SparksDynamicUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x28 (0x2D8 - 0x2B0)
	class ASparksDynamicUIDirector : public ADynamicUIDirectorBase	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x2B0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreUI.SparksDynamicUIDirector");
			return ret;
		}

		void HandleCursorModeChanging(bool bCursorModeEnabled, FName ActionName); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751069678(relative to base address)
	};


	// Class SparksCoreUI.SparksQuestScreenContainer
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x328 - 0x2D8)
	class USparksQuestScreenContainer : public UCommonUserWidget	
	{
	public:
		FName QuestTabID; // 0x2D8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2DC(0x4) UNKNOWN PROPERTY
		UAthenaMapScreenContainer* AthenaScreenContainer; // 0x2E0(0x8)
		bool bUseToggleSongMenuInputAction; // 0x2E8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2E9(0x7) UNKNOWN PROPERTY
		UInputAction* ToggleSongMenuInputAction; // 0x2F0(0x8)
		unsigned char UnknownData02_6[0x24]; // 0x2F8(0x24) UNKNOWN PROPERTY
		TWeakObjectPtr<UGameplayEventRouterComponent*> EventRouter; // 0x31C(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x324(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreUI.SparksQuestScreenContainer");
			return ret;
		}

		void SetQuestScreenVisible(bool bVisible); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751069764(relative to base address)
		void InitEventRouterBindings(UGameplayEventRouterComponent* NewEventRouter); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7510697E4(relative to base address)
		void HandleToggleQuestListFromMapVisibility(bool bMapVisible); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751069764(relative to base address)
		void HandleToggleQuestList(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751069750(relative to base address)
		void HandleMapPanelExitButtonPressed(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75106973C(relative to base address)
		void HandleAthenaScreenDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751069660(relative to base address)
		void EventRouterToggleQuestList(FSparksQuestScreenToggleEvent& Payload); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751069568(relative to base address)
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

		void BP_SetSocialUserFromPlayerState(AFortPlayerState* PlayerState); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510694D4(relative to base address)
	};


	// Class SparksCoreUI.SparksSongItemDetailsVM
	// Inherited from UAthenaItemDetailsVM -> UFortItemDetailsVM -> UMVVMViewModelBase -> UObject
	// Size: 0x20 (0x320 - 0x300)
	class USparksSongItemDetailsVM : public UAthenaItemDetailsVM	
	{
	public:
		UTexture2D* CoverArt; // 0x300(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x308(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreUI.SparksSongItemDetailsVM");
			return ret;
		}

		void OnSongCatalogRetrieved(bool bSuccess); // Flags: Final|Native|Private, Memory Exec: 0x7FF751069A40(relative to base address)
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
