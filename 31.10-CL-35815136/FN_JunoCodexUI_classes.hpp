#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoCodexUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoCodexUI.JunoCodexFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoCodexFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCodexUI.JunoCodexFunctionLibrary");
			return ret;
		}

		FText MakeDeterministicLocalizableCodexTextFromItemDef(UFortItemDefinition* ItemDef, FString PropertyName, FString DisplayName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751D14788(relative to base address)
		FText MakeDeterministicLocalizableCodexText(UDataTable* DataTable, FName RowName, FString PropertyName, FString DisplayName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751D14620(relative to base address)
		bool HasUnviewedCodexEntries(AFortPlayerController* PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751D145A0(relative to base address)
	};


	// Class JunoCodexUI.JunoCodexEntrySlot
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x13F0 - 0x1390)
	class UJunoCodexEntrySlot : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x1390(0x10) UNKNOWN PROPERTY
		UMenuAnchor* ContextMenuAnchor; // 0x13A0(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x13A8(0x4) UNKNOWN PROPERTY
		int32_t StackSizeMultiplier; // 0x13AC(0x4)
		UJunoCodexListEntry* ListEntry; // 0x13B0(0x8)
		UClass* ContextMenuClass; // 0x13B8(0x8)
		unsigned char UnknownData02_7[0x30]; // 0x13C0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCodexUI.JunoCodexEntrySlot");
			return ret;
		}

		void SetUnknown(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemKnown(FJunoCodexEntry& CodexEntry); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsViewed(bool bIsViewed); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTrackedChanged(bool bIsTracked); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoadCharacterIcon(TWeakObjectPtr<UTexture2D*>& Image); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLeaveContextMenuMode(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D14520(relative to base address)
		UUserWidget GetContextMenu(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D1447C(relative to base address)
	};


	// Class JunoCodexUI.JunoCodexSubCategoryHeader
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UJunoCodexSubCategoryHeader : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UCommonTextBlock* Text_Name; // 0x1398(0x8)
		UJunoCodexListEntry* ListEntry; // 0x13A0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCodexUI.JunoCodexSubCategoryHeader");
			return ret;
		}
	};


	// Class JunoCodexUI.JunoCodexFilterButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x13C0 - 0x1390)
	class UJunoCodexFilterButton : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UJunoBangWidget* JunoBangWidget; // 0x1398(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x13A0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCodexUI.JunoCodexFilterButton");
			return ret;
		}
	};


	// Class JunoCodexUI.JunoCodexScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x368 (0x758 - 0x3F0)
	class UJunoCodexScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x3F0(0x30) UNKNOWN PROPERTY
		UFortTabListWidgetBase* TabList_FilterTabs; // 0x420(0x8)
		UClass* FilterTabWidget; // 0x428(0x8)
		TMap<FGameplayTag, FJunoCodexItemTagOrder> SubCategoryTagOrderByCategoryTag; // 0x430(0x50)
		TMap<FGameplayTag, FJunoCodexItemTagOrder> ItemTypeTagOrderBySubCategoryTag; // 0x480(0x50)
		UGridListView* GridListView_SubCategories; // 0x4D0(0x8)
		URichTextBlock* Text_EmptyCategory; // 0x4D8(0x8)
		FName SubCategoryItemType; // 0x4E0(0x4)
		FName EntrySlotItemType; // 0x4E4(0x4)
		UWidget* LastFocusedWidget; // 0x4E8(0x8)
		unsigned char UnknownData01_6[0x1C]; // 0x4F0(0x1C) UNKNOWN PROPERTY
		FName TrackedRecipe; // 0x50C(0x4)
		FName SelectedRecipe; // 0x510(0x4)
		TWeakObjectPtr<UJunoCodexListEntry*> TrackedEntry; // 0x514(0x8)
		FGameplayTag NPCGameplayTag; // 0x51C(0x4)
		UDataTable* NPCDetailsDataTable; // 0x520(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x528(0x8) UNKNOWN PROPERTY
		TMap<FName, FGameplayTag> TabIDToCategoryTagMap; // 0x530(0x50)
		UJunoCodexListEntry* SelectedListEntry; // 0x580(0x8)
		UCommonButtonBase* Button_Back; // 0x588(0x8)
		UCommonButtonBase* Button_Close; // 0x590(0x8)
		UCommonButtonBase* Button_Spawn; // 0x598(0x8)
		UCommonButtonBase* Button_SpawnMultiple; // 0x5A0(0x8)
		UCommonButtonBase* Button_Track; // 0x5A8(0x8)
		UCommonButtonBase* Button_ClearBangs; // 0x5B0(0x8)
		UJunoNotificationWidget* ItemSpawnedNotification; // 0x5B8(0x8)
		UVerticalBox* VerticalBox_RecipeDetails; // 0x5C0(0x8)
		unsigned char UnknownData03_6[0xC0]; // 0x5C8(0xC0) UNKNOWN PROPERTY
		UDynamicEntryBox* EntryBox_Ingredients; // 0x688(0x8)
		FGameplayTagContainer IgnoredCraftingSourceObjectTags; // 0x690(0x20)
		FGameplayTagQuery ShouldShowResourceDropsTagQuery; // 0x6B0(0x48)
		TMap<FGameplayTag, int32_t> CraftingSourceObjectTagPriorites; // 0x6F8(0x50)
		FText EnemyItemDrops; // 0x748(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCodexUI.JunoCodexScreen");
			return ret;
		}

		void UpdateItemDetails(FJunoCodexEntry& Entry, UFortItemDefinition* ItemDefinition, bool bIsKnown, FText& SubCategoryUnknownText, bool bIsLoadingLargeImage); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRecipeHeaderTextFromCraftingStation(FText& CraftingStationName); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRecipeHeaderText(FText& OverrideText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTrackedRecipeStateChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoadingStart(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoadingComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLargeImageLoadedFromAMS(TWeakObjectPtr<UTexture2D*>& LargeImage); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCharacterNameLoaded(FText& CharacterName); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCategoryTabSelected(FName TabID); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D144A0(relative to base address)
		bool GetCanSpawnItems(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D14458(relative to base address)
		void ClearItemDetails(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoCodexUI.JunoCodexListEntry
	// Inherited from UObject
	// Size: 0x1A8 (0x1D0 - 0x28)
	class UJunoCodexListEntry : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x158]; // 0x28(0x158) UNKNOWN PROPERTY
		UFortItemDefinition* ItemDefinition; // 0x180(0x8)
		unsigned char UnknownData01_7[0x48]; // 0x188(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCodexUI.JunoCodexListEntry");
			return ret;
		}
	};

}
