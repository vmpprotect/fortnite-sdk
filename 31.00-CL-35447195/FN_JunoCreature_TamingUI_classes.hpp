#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoCreature_TamingUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoCreature_TamingUI.JunoBarnAssignmentListEntry
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UJunoBarnAssignmentListEntry : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UJunoBarnAssignmentListObject BarnAssignmentListObject; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoBarnAssignmentListEntry");
			return ret;
		}

		void OnBarnAssignmentObjectSet(UJunoBarnAssignmentListObject NewBarnAssignmentListObject); // Flags: Event|Protected|BlueprintEvent 0x7FF414E38B20
	};


	// Class JunoCreature_TamingUI.JunoBarnAssignmentListObject
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UJunoBarnAssignmentListObject : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x28]; // 0x28(0x28) UNKNOWN PROPERTY
		TWeakObjectPtr Icon; // 0x50(0x20)
		unsigned char UnknownData04_6[0x4]; // 0x70(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr AnimalActor; // 0x74(0x8)
		unsigned char UnknownData05_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject");
			return ret;
		}

		bool IsSelectable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E395A0
		FGameplayTag GetUniqueAIIdentifier(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E394C0
		bool GetIsNoVillageSlot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E393E0
		bool GetIsNoNearbyAnimalEntry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E39300
		bool GetIsGlobalLimitReachedEntry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E39220
		bool GetIsFollowingEntry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E39140
		TWeakObjectPtr GetIcon(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E39060
		bool GetHasBed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E38F80
		float GetFriendshipValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E38EA0
		FGameplayTag GetFriendshipStateTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E38DC0
		FText GetDisplayName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E38CE0
		FGameplayTag GetDescriptorTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E38C00
	};


	// Class JunoCreature_TamingUI.JunoUserGeneratedTextErrorModalHandler
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x308 - 0x2E0)
	class UJunoUserGeneratedTextErrorModalHandler : public UCommonUserWidget	
	{
	public:
		UDynamicUIScene ErrorModalScene; // 0x2E0(0x8)
		FText ConfirmButtonText; // 0x2E8(0x10)
		FDataTableRowHandle ConfirmAction; // 0x2F8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoUserGeneratedTextErrorModalHandler");
			return ret;
		}

		void OpenSelectionModal(FText& Title, FText& Description); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E39760
		void HandleErrorClosed(); // Flags: Final|Native|Private 0x7FF414E39680
	};


	// Class JunoCreature_TamingUI.JunoVillageTamingHubScreen
	// Inherited from UJunoVillageScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x170 (0x7D8 - 0x668)
	class UJunoVillageTamingHubScreen : public UJunoVillageScreenBase	
	{
	public:
		UScrollBox ScrollBox_Ingredients; // 0x668(0x8)
		UDynamicEntryBox EntryBox_Ingredients; // 0x670(0x8)
		UClass SpacerWidgetClass; // 0x678(0x8)
		UClass TownBuilderQuestWidgetClass; // 0x680(0x8)
		UClass IngredientWidgetClass; // 0x688(0x8)
		UCommonButtonBase Button_Upgrade; // 0x690(0x8)
		UCommonButtonBase Button_RemoveVillage; // 0x698(0x8)
		UDynamicUIScene RemoveVillageModalScene; // 0x6A0(0x8)
		FText RemoveVillageConfirmationTitle; // 0x6A8(0x10)
		FText RemoveVillageConfirmationDescription; // 0x6B8(0x10)
		FText RemoveVillageConfirmButtonText; // 0x6C8(0x10)
		FText RemoveVillageCancelButtonText; // 0x6D8(0x10)
		FDataTableRowHandle RemoveModalConfirmAction; // 0x6E8(0x10)
		FDataTableRowHandle RemoveModalCancelAction; // 0x6F8(0x10)
		UCommonButtonBase Button_EditVillage; // 0x708(0x8)
		TMap JobToIconMap; // 0x710(0x50)
		FText StaticUpgradeItemDescription; // 0x760(0x10)
		UUserWidget AwesomePointsIngredientWidget; // 0x770(0x8)
		TArray TownBuilderQuestWidgets; // 0x778(0x10)
		TMap IngredientWidgetForIndex; // 0x788(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoVillageTamingHubScreen");
			return ret;
		}

		void OnCompleteEntriesUpdated(int32_t CompletedEntries, int32_t TotalEntries); // Flags: Event|Protected|BlueprintEvent 0x7FF414E39A00
		void HandleRemoveVillageConfirmed(); // Flags: Final|Native|Protected 0x7FF414E39920
		void HandleRemoveVillageCancelled(); // Flags: Final|Native|Protected 0x7FF414E39840
	};


	// Class JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumn
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x250 (0x15E0 - 0x1390)
	class UJunoVillageTamingLevelRewardsColumn : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UDynamicEntryBox EntriesList; // 0x1398(0x8)
		FJunoVillageTamingLevelRewardsColumnInfo VillageRewardsColumnInfo; // 0x13A0(0x18)
		FJunoVillageUIData ParentVillageUIData; // 0x13B8(0x218)
		UScrollBox ScrollBox_RewardEntries; // 0x15D0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x15D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumn");
			return ret;
		}

		void SetVillageRewardEntryInfo(FJunoVillageTamingLevelRewardsColumnInfo& InVillageTamingLevelRewardsColumnInfo, FJunoVillageUIData& InParentVillageUIData); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414E39BC0
		void SetIsExpanded(bool bIsExpanded); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E39AE0
	};


	// Class JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntry
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x280 (0x560 - 0x2E0)
	class UJunoVillageTamingLevelRewardsEntry : public UCommonUserWidget	
	{
	public:
		FJunoVillageTamingLevelRewardsEntryInfo VillageRewardsEntryInfo; // 0x2E0(0x68)
		FJunoVillageUIData ParentVillageUIData; // 0x348(0x218)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntry");
			return ret;
		}

		void SetVillageRewardEntryInfo(FJunoVillageTamingLevelRewardsEntryInfo& InVillageTamingLevelRewardsEntryInfo, FJunoVillageUIData& InParentVillageUIData); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414E39D80
		void SetExpanded(bool bInIsExpanded); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E39CA0
	};


	// Class JunoCreature_TamingUI.JunoVillageTamingLevelRewardsScreen
	// Inherited from UJunoVillageScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x698 - 0x668)
	class UJunoVillageTamingLevelRewardsScreen : public UJunoVillageScreenBase	
	{
	public:
		UDynamicEntryBox RewardsList; // 0x668(0x8)
		UJunoVillageTamingLevelRewardsColumn LastHoveredEntry; // 0x670(0x8)
		UCommonButtonGroupBase ButtonGroup_AllRewards; // 0x678(0x8)
		UCommonButtonBase Button_Previous; // 0x680(0x8)
		UCommonButtonBase Button_Next; // 0x688(0x8)
		UScrollBox ScrollBox; // 0x690(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsScreen");
			return ret;
		}

		void RefreshPointsProgressBars(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E39F40
		void OnRewardsFilledOut(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E39E60
	};


	// Class JunoCreature_TamingUI.JunoVillageTamingMenuContainer
	// Inherited from UJunoHudMenuBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x440 - 0x430)
	class UJunoVillageTamingMenuContainer : public UJunoHudMenuBase	
	{
	public:
		FName VillagersTabName; // 0x430(0x4)
		FName HubTabName; // 0x434(0x4)
		FName RewardsTabName; // 0x438(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x43C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoVillageTamingMenuContainer");
			return ret;
		}
	};


	// Class JunoCreature_TamingUI.JunoVillageTamingVillagerEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x360 (0x16F0 - 0x1390)
	class UJunoVillageTamingVillagerEntry : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		FJunoVillageTamingVillagerEntryInfo VillagerInfo; // 0x1398(0x138)
		FJunoVillageUIData ParentVillageUIData; // 0x14D0(0x218)
		unsigned char UnknownData03_7[0x8]; // 0x16E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoVillageTamingVillagerEntry");
			return ret;
		}

		void SetVillagerInfo(FJunoVillageTamingVillagerEntryInfo& InVillagerInfo, FJunoVillageUIData& InParentVillageUIData); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414E3A020
	};


	// Class JunoCreature_TamingUI.JunoBarnAssignmentMenuContainer
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x420 - 0x3F8)
	class UJunoBarnAssignmentMenuContainer : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UJunoBarnAssignmentScreen BarnAssignmentScreen; // 0x400(0x8)
		UJunoBarnNameAnimalScreen BarnNameAnimalScreen; // 0x408(0x8)
		UCommonActivatableWidgetSwitcher WidgetSwitcher_Screens; // 0x410(0x8)
		UJunoBarnAssignmentMenuInitData JunoBarnAssignmentMenuInitData; // 0x418(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoBarnAssignmentMenuContainer");
			return ret;
		}
	};


	// Class JunoCreature_TamingUI.JunoBarnAssignmentScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD0 (0x4C8 - 0x3F8)
	class UJunoBarnAssignmentScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x38]; // 0x3F8(0x38) UNKNOWN PROPERTY
		UCommonButtonBase BackButton; // 0x430(0x8)
		UCommonButtonBase CloseButton; // 0x438(0x8)
		UCommonListView List_Characters; // 0x440(0x8)
		UJunoBarnAssignmentListObject ThisBedListObject; // 0x448(0x8)
		AActor BarnObject; // 0x450(0x8)
		UJunoCampRecruitmentComponent JunoCampRecruitmentComponent; // 0x458(0x8)
		UJunoCampAIManagementComponent JunoCampAIManagementComponent; // 0x460(0x8)
		UCommonButtonBase Button_Assign; // 0x468(0x8)
		FText AssignedHeaderText; // 0x470(0x10)
		FText NoBarnHeaderText; // 0x480(0x10)
		FText NearbyAnimalsHeaderText; // 0x490(0x10)
		FText AssignButtonText; // 0x4A0(0x10)
		FText ReassignButtonText; // 0x4B0(0x10)
		UClass ListHeaderClass; // 0x4C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoBarnAssignmentScreen");
			return ret;
		}

		void OnSelectionChanged(UJunoBarnAssignmentListObject InSelectedListObject); // Flags: Event|Protected|BlueprintEvent 0x7FF414E5A2C0
		bool GetVillageHasSlotForAnimal(); // Flags: Final|Native|Protected|BlueprintCallable|Const 0x7FF414E5A1E0
		bool GetGlobalHasSlotForAnimal(); // Flags: Final|Native|Protected|BlueprintCallable|Const 0x7FF414E5A100
	};


	// Class JunoCreature_TamingUI.JunoBarnNameAnimalScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB8 (0x4B0 - 0x3F8)
	class UJunoBarnNameAnimalScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x38]; // 0x3F8(0x38) UNKNOWN PROPERTY
		AActor BarnObject; // 0x430(0x8)
		UJunoBarnAssignmentMenuInitData JunoBarnAssignmentMenuInitData; // 0x438(0x8)
		UCommonButtonBase Button_RandomName; // 0x440(0x8)
		UCommonButtonBase BackButton; // 0x448(0x8)
		UCommonButtonBase CloseButton; // 0x450(0x8)
		UCommonButtonBase Button_Assign; // 0x458(0x8)
		UCommonUserWidget UserGeneratedText_ParentalControls; // 0x460(0x8)
		UJunoUGCViewModel UGCViewModel; // 0x468(0x8)
		unsigned char UnknownData04_6[0x10]; // 0x470(0x10) UNKNOWN PROPERTY
		FGameplayTag AllAnimalNamesGameplayTag; // 0x480(0x4)
		FName AnimalNameRegistryName; // 0x484(0x4)
		FText DefaultName; // 0x488(0x10)
		FText DefaultHintText; // 0x498(0x10)
		bool bAllowUserInput; // 0x4A8(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x4A9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoBarnNameAnimalScreen");
			return ret;
		}

		void UpdateIsProcessingNameVisuals(bool bIsProcessingName); // Flags: Event|Protected|BlueprintEvent 0x7FF414E5A3A0
	};


	// Class JunoCreature_TamingUI.JunoBarnProcessorScreen
	// Inherited from UJunoDisassemblingScreen -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x568 - 0x560)
	class UJunoBarnProcessorScreen : public UJunoDisassemblingScreen	
	{
	public:
		UJunoCampRecruitmentComponent JunoCampRecruitmentComponent; // 0x560(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoBarnProcessorScreen");
			return ret;
		}

		void ShowLoadingState(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E5A560
		void SetupAnimalInfo(FActiveCampCreatureEntry& Data); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E5A480
	};


	// Class JunoCreature_TamingUI.JunoTamingMapMarkerIconScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x460 - 0x3F8)
	class UJunoTamingMapMarkerIconScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UClass EntryClass; // 0x400(0x8)
		FName ColorParamName; // 0x408(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x40C(0x4) UNKNOWN PROPERTY
		UDynamicEntryBox ColorPanel; // 0x410(0x8)
		UDynamicEntryBox IconPanel; // 0x418(0x8)
		UCommonButtonGroupBase ButtonGroup_AllIconSlots; // 0x420(0x8)
		UCommonButtonGroupBase ButtonGroup_AllColorSlots; // 0x428(0x8)
		UFortLazyImage Image_PreviewMarker; // 0x430(0x8)
		UJunoMapMarkerCustomizationEntry SelectedColor; // 0x438(0x8)
		UJunoMapMarkerCustomizationEntry SelectedIcon; // 0x440(0x8)
		UJunoMapMarkerCustomizationInitData InitData; // 0x448(0x8)
		FDataTableRowHandle CampRow; // 0x450(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoTamingMapMarkerIconScreen");
			return ret;
		}

		void SetPreviewMarkerMaterial(bool bIsTown); // Flags: Event|Public|BlueprintEvent 0x7FF414E5A720
		void SetMarkerNameText(bool bIsTown, FText& Name); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E5A640
	};


	// Class JunoCreature_TamingUI.JunoTamingMapMarkerMenuContainer
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x468 - 0x3F8)
	class UJunoTamingMapMarkerMenuContainer : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UCommonButtonBase Button_Next; // 0x400(0x8)
		UCommonButtonBase Button_Confirm; // 0x408(0x8)
		UCommonButtonBase Button_Close; // 0x410(0x8)
		UCommonButtonBase Button_Close_Touch; // 0x418(0x8)
		UJunoMapMarkerCustomizationInitData InitData; // 0x420(0x8)
		FName NameScreenTabName; // 0x428(0x4)
		FName IconScreenTabName; // 0x42C(0x4)
		UFortTabListWidgetBase TabList_MenuTabs; // 0x430(0x8)
		UCommonActivatableWidgetSwitcher Switcher_Tabs; // 0x438(0x8)
		UCommonTextBlock Text_Title; // 0x440(0x8)
		UCommonUserWidget UserGeneratedText_ParentalControls; // 0x448(0x8)
		FDataTableRowHandle CampRow; // 0x450(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x460(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoTamingMapMarkerMenuContainer");
			return ret;
		}

		void HandleTabSelected(FName SelectedTabId); // Flags: Final|Native|Private 0x7FF414E5A8E0
		bool GetIsInCabinMode(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E5A800
	};


	// Class JunoCreature_TamingUI.JunoTamingMapMarkerNameScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x468 - 0x3F8)
	class UJunoTamingMapMarkerNameScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x18]; // 0x3F8(0x18) UNKNOWN PROPERTY
		UCommonButtonBase RandomizeButton; // 0x410(0x8)
		UJunoMapMarkerCustomizationInitData InitData; // 0x418(0x8)
		unsigned char UnknownData04_6[0x18]; // 0x420(0x18) UNKNOWN PROPERTY
		UJunoUGCViewModel UGCViewModel; // 0x438(0x8)
		FText DefaultName; // 0x440(0x10)
		FText DefaultHintText; // 0x450(0x10)
		bool bAllowUserInput; // 0x460(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x461(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoTamingMapMarkerNameScreen");
			return ret;
		}

		void UpdateIsProcessingNameVisuals(bool bIsProcessingName); // Flags: Event|Public|BlueprintEvent 0x7FF414E5AAA0
		void SetMarkerNameText(FText& Name); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E5A9C0
	};


	// Class JunoCreature_TamingUI.JunoVillageTamingVillagersScreen
	// Inherited from UJunoVillageScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x98 (0x700 - 0x668)
	class UJunoVillageTamingVillagersScreen : public UJunoVillageScreenBase	
	{
	public:
		UDynamicEntryBox VillageInhabitantsList; // 0x668(0x8)
		UCommonButtonBase Button_AskToLeave; // 0x670(0x8)
		UCommonButtonBase Button_ChangeName; // 0x678(0x8)
		UCommonButtonGroupBase ButtonGroup_AllVillagers; // 0x680(0x8)
		UJunoVillageTamingVillagerEntry LastHoveredEntry; // 0x688(0x8)
		UDynamicUIScene AskToLeaveModalScene; // 0x690(0x8)
		FText AskToLeaveConfirmationTitle; // 0x698(0x10)
		FText AskToLeaveConfirmationDescription; // 0x6A8(0x10)
		FText AskToLeaveConfirmButtonText; // 0x6B8(0x10)
		FText AskToLeaveCancelButtonText; // 0x6C8(0x10)
		FDataTableRowHandle ModalConfirmAction; // 0x6D8(0x10)
		FDataTableRowHandle ModalCancelAction; // 0x6E8(0x10)
		int32_t OsirisVillagerSlotCount; // 0x6F8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x6FC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoVillageTamingVillagersScreen");
			return ret;
		}

		void OnEntryHovered(UJunoVillageTamingVillagerEntry Entry); // Flags: Event|Protected|BlueprintEvent 0x7FF414E5AD40
		void HandleAskToLeaveConfirmed(); // Flags: Final|Native|Protected 0x7FF414E5AC60
		void HandleAskToLeaveCancelled(); // Flags: Final|Native|Protected 0x7FF414E5AB80
	};

}
