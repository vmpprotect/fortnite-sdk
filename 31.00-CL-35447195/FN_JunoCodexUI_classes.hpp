#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoCodexUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		FText MakeDeterministicLocalizableCodexTextFromItemDef(UFortItemDefinition ItemDef, FString PropertyName, FString DisplayName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E36F20
		FText MakeDeterministicLocalizableCodexText(UDataTable DataTable, FName RowName, FString PropertyName, FString DisplayName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414E36E40
		bool HasUnviewedCodexEntries(AFortPlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414E36D60
	};


	// Class JunoCodexUI.JunoCodexEntrySlot
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x13F0 - 0x1390)
	class UJunoCodexEntrySlot : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x1390(0x10) UNKNOWN PROPERTY
		UMenuAnchor ContextMenuAnchor; // 0x13A0(0x8)
		unsigned char UnknownData04_6[0x4]; // 0x13A8(0x4) UNKNOWN PROPERTY
		int32_t StackSizeMultiplier; // 0x13AC(0x4)
		UJunoCodexListEntry ListEntry; // 0x13B0(0x8)
		UClass ContextMenuClass; // 0x13B8(0x8)
		unsigned char UnknownData05_7[0x30]; // 0x13C0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCodexUI.JunoCodexEntrySlot");
			return ret;
		}

		void SetUnknown(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E37700
		void SetItemKnown(FJunoCodexEntry& CodexEntry); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E37620
		void SetIsViewed(bool bIsViewed); // Flags: Event|Public|BlueprintEvent 0x7FF414E37540
		void OnTrackedChanged(bool bIsTracked); // Flags: Event|Protected|BlueprintEvent 0x7FF414E37460
		void OnLoadCharacterIcon(TWeakObjectPtr& Image); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E37380
		void OnLeaveContextMenuMode(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E372A0
		void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot); // Flags: Event|Protected|BlueprintEvent 0x7FF414E371C0
		void HandleOnMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private 0x7FF414E370E0
		UUserWidget GetContextMenu(); // Flags: Final|Native|Private 0x7FF414E37000
	};


	// Class JunoCodexUI.JunoCodexSubCategoryHeader
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UJunoCodexSubCategoryHeader : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UCommonTextBlock Text_Name; // 0x1398(0x8)
		UJunoCodexListEntry ListEntry; // 0x13A0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UJunoBangWidget JunoBangWidget; // 0x1398(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x13A0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCodexUI.JunoCodexFilterButton");
			return ret;
		}
	};


	// Class JunoCodexUI.JunoCodexScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x368 (0x760 - 0x3F8)
	class UJunoCodexScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData04_3[0x30]; // 0x3F8(0x30) UNKNOWN PROPERTY
		UFortTabListWidgetBase TabList_FilterTabs; // 0x428(0x8)
		UClass FilterTabWidget; // 0x430(0x8)
		TMap SubCategoryTagOrderByCategoryTag; // 0x438(0x50)
		TMap ItemTypeTagOrderBySubCategoryTag; // 0x488(0x50)
		UGridListView GridListView_SubCategories; // 0x4D8(0x8)
		URichTextBlock Text_EmptyCategory; // 0x4E0(0x8)
		FName SubCategoryItemType; // 0x4E8(0x4)
		FName EntrySlotItemType; // 0x4EC(0x4)
		UWidget LastFocusedWidget; // 0x4F0(0x8)
		unsigned char UnknownData05_6[0x1C]; // 0x4F8(0x1C) UNKNOWN PROPERTY
		FName TrackedRecipe; // 0x514(0x4)
		FName SelectedRecipe; // 0x518(0x4)
		TWeakObjectPtr TrackedEntry; // 0x51C(0x8)
		FGameplayTag NPCGameplayTag; // 0x524(0x4)
		UDataTable NPCDetailsDataTable; // 0x528(0x8)
		unsigned char UnknownData06_6[0x8]; // 0x530(0x8) UNKNOWN PROPERTY
		TMap TabIDToCategoryTagMap; // 0x538(0x50)
		UJunoCodexListEntry SelectedListEntry; // 0x588(0x8)
		UCommonButtonBase Button_Back; // 0x590(0x8)
		UCommonButtonBase Button_Close; // 0x598(0x8)
		UCommonButtonBase Button_Spawn; // 0x5A0(0x8)
		UCommonButtonBase Button_SpawnMultiple; // 0x5A8(0x8)
		UCommonButtonBase Button_Track; // 0x5B0(0x8)
		UCommonButtonBase Button_ClearBangs; // 0x5B8(0x8)
		UJunoNotificationWidget ItemSpawnedNotification; // 0x5C0(0x8)
		UVerticalBox VerticalBox_RecipeDetails; // 0x5C8(0x8)
		unsigned char UnknownData07_6[0xC0]; // 0x5D0(0xC0) UNKNOWN PROPERTY
		UDynamicEntryBox EntryBox_Ingredients; // 0x690(0x8)
		FGameplayTagContainer IgnoredCraftingSourceObjectTags; // 0x698(0x20)
		FGameplayTagQuery ShouldShowResourceDropsTagQuery; // 0x6B8(0x48)
		TMap CraftingSourceObjectTagPriorites; // 0x700(0x50)
		FText EnemyItemDrops; // 0x750(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCodexUI.JunoCodexScreen");
			return ret;
		}

		void UpdateItemDetails(FJunoCodexEntry& Entry, UFortItemDefinition ItemDefinition, bool bIsKnown, FText& SubCategoryUnknownText, bool bIsLoadingLargeImage); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E380A0
		void SetRecipeHeaderTextFromCraftingStation(FText& CraftingStationName); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E37FC0
		void SetRecipeHeaderText(FText& OverrideText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E37EE0
		void OnTrackedRecipeStateChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E37E00
		void OnLoadingStart(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E37D20
		void OnLoadingComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E37C40
		void OnLargeImageLoadedFromAMS(TWeakObjectPtr& LargeImage); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E37B60
		void OnCharacterNameLoaded(FText& CharacterName); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E37A80
		void HandleCategoryTabSelected(FName TabID); // Flags: Final|Native|Private 0x7FF414E379A0
		bool GetCanSpawnItems(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF414E378C0
		void ClearItemDetails(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E377E0
	};


	// Class JunoCodexUI.JunoCodexListEntry
	// Inherited from UObject
	// Size: 0x1A8 (0x1D0 - 0x28)
	class UJunoCodexListEntry : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x158]; // 0x28(0x158) UNKNOWN PROPERTY
		UFortItemDefinition ItemDefinition; // 0x180(0x8)
		unsigned char UnknownData03_7[0x48]; // 0x188(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCodexUI.JunoCodexListEntry");
			return ret;
		}
	};

}
