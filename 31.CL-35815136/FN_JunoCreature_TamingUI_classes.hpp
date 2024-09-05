#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoCreature_TamingUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoCreature_TamingUI.JunoBarnAssignmentListEntry
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UJunoBarnAssignmentListEntry : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UJunoBarnAssignmentListObject* BarnAssignmentListObject; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoBarnAssignmentListEntry");
			return ret;
		}

		void OnBarnAssignmentObjectSet(UJunoBarnAssignmentListObject* NewBarnAssignmentListObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoBarnAssignmentListObject
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UJunoBarnAssignmentListObject : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x28(0x28) UNKNOWN PROPERTY
		TWeakObjectPtr<UTexture2D*> Icon; // 0x50(0x20)
		unsigned char UnknownData01_6[0x4]; // 0x70(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> AnimalActor; // 0x74(0x8)
		unsigned char UnknownData02_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject");
			return ret;
		}

		bool IsSelectable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D21E5C(relative to base address)
		FGameplayTag GetUniqueAIIdentifier(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D21D80(relative to base address)
		bool GetIsNoVillageSlot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D21D6C(relative to base address)
		bool GetIsNoNearbyAnimalEntry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1E6C(relative to base address)
		bool GetIsGlobalLimitReachedEntry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FC5E860(relative to base address)
		bool GetIsFollowingEntry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A20BA8(relative to base address)
		TWeakObjectPtr GetIcon(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D21C9C(relative to base address)
		bool GetHasBed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D21C88(relative to base address)
		float GetFriendshipValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7499B6EAC(relative to base address)
		FGameplayTag GetFriendshipStateTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1AC8(relative to base address)
		FText GetDisplayName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D21C24(relative to base address)
		FGameplayTag GetDescriptorTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7496973C8(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoUserGeneratedTextErrorModalHandler
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x300 - 0x2D8)
	class UJunoUserGeneratedTextErrorModalHandler : public UCommonUserWidget	
	{
	public:
		UDynamicUIScene* ErrorModalScene; // 0x2D8(0x8)
		FText ConfirmButtonText; // 0x2E0(0x10)
		FDataTableRowHandle ConfirmAction; // 0x2F0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoUserGeneratedTextErrorModalHandler");
			return ret;
		}

		void OpenSelectionModal(FText& Title, FText& Description); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D21E7C(relative to base address)
		void HandleErrorClosed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751CD5628(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoVillageTamingHubScreen
	// Inherited from UJunoVillageScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x170 (0x7D0 - 0x660)
	class UJunoVillageTamingHubScreen : public UJunoVillageScreenBase	
	{
	public:
		UScrollBox* ScrollBox_Ingredients; // 0x660(0x8)
		UDynamicEntryBox* EntryBox_Ingredients; // 0x668(0x8)
		UClass* SpacerWidgetClass; // 0x670(0x8)
		UClass* TownBuilderQuestWidgetClass; // 0x678(0x8)
		UClass* IngredientWidgetClass; // 0x680(0x8)
		UCommonButtonBase* Button_Upgrade; // 0x688(0x8)
		UCommonButtonBase* Button_RemoveVillage; // 0x690(0x8)
		UDynamicUIScene* RemoveVillageModalScene; // 0x698(0x8)
		FText RemoveVillageConfirmationTitle; // 0x6A0(0x10)
		FText RemoveVillageConfirmationDescription; // 0x6B0(0x10)
		FText RemoveVillageConfirmButtonText; // 0x6C0(0x10)
		FText RemoveVillageCancelButtonText; // 0x6D0(0x10)
		FDataTableRowHandle RemoveModalConfirmAction; // 0x6E0(0x10)
		FDataTableRowHandle RemoveModalCancelAction; // 0x6F0(0x10)
		UCommonButtonBase* Button_EditVillage; // 0x700(0x8)
		TMap<FGameplayTag, TWeakObjectPtr> JobToIconMap; // 0x708(0x50)
		FText StaticUpgradeItemDescription; // 0x758(0x10)
		UUserWidget* AwesomePointsIngredientWidget; // 0x768(0x8)
		TArray<UJunoVillageTownBuilderQuestEntry*> TownBuilderQuestWidgets; // 0x770(0x10)
		TMap<int32_t, UJunoIngredientWidget*> IngredientWidgetForIndex; // 0x780(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoVillageTamingHubScreen");
			return ret;
		}

		void OnCompleteEntriesUpdated(int32_t CompletedEntries, int32_t TotalEntries); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRemoveVillageConfirmed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D21DC8(relative to base address)
		void HandleRemoveVillageCancelled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751CD5628(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumn
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x250 (0x15E0 - 0x1390)
	class UJunoVillageTamingLevelRewardsColumn : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UDynamicEntryBox* EntriesList; // 0x1398(0x8)
		FJunoVillageTamingLevelRewardsColumnInfo VillageRewardsColumnInfo; // 0x13A0(0x18)
		FJunoVillageUIData ParentVillageUIData; // 0x13B8(0x218)
		UScrollBox* ScrollBox_RewardEntries; // 0x15D0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x15D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumn");
			return ret;
		}

		void SetVillageRewardEntryInfo(FJunoVillageTamingLevelRewardsColumnInfo& InVillageTamingLevelRewardsColumnInfo, FJunoVillageUIData& InParentVillageUIData); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751D22008(relative to base address)
		void SetIsExpanded(bool bIsExpanded); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751D21F84(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntry
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x280 (0x558 - 0x2D8)
	class UJunoVillageTamingLevelRewardsEntry : public UCommonUserWidget	
	{
	public:
		FJunoVillageTamingLevelRewardsEntryInfo VillageRewardsEntryInfo; // 0x2D8(0x68)
		FJunoVillageUIData ParentVillageUIData; // 0x340(0x218)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntry");
			return ret;
		}

		void SetVillageRewardEntryInfo(FJunoVillageTamingLevelRewardsEntryInfo& InVillageTamingLevelRewardsEntryInfo, FJunoVillageUIData& InParentVillageUIData); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751D22144(relative to base address)
		void SetExpanded(bool bInIsExpanded); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoVillageTamingLevelRewardsScreen
	// Inherited from UJunoVillageScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x690 - 0x660)
	class UJunoVillageTamingLevelRewardsScreen : public UJunoVillageScreenBase	
	{
	public:
		UDynamicEntryBox* RewardsList; // 0x660(0x8)
		UJunoVillageTamingLevelRewardsColumn* LastHoveredEntry; // 0x668(0x8)
		UCommonButtonGroupBase* ButtonGroup_AllRewards; // 0x670(0x8)
		UCommonButtonBase* Button_Previous; // 0x678(0x8)
		UCommonButtonBase* Button_Next; // 0x680(0x8)
		UScrollBox* ScrollBox; // 0x688(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsScreen");
			return ret;
		}

		void RefreshPointsProgressBars(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRewardsFilledOut(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoVillageTamingMenuContainer
	// Inherited from UJunoHudMenuBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x438 - 0x428)
	class UJunoVillageTamingMenuContainer : public UJunoHudMenuBase	
	{
	public:
		FName VillagersTabName; // 0x428(0x4)
		FName HubTabName; // 0x42C(0x4)
		FName RewardsTabName; // 0x430(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x434(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		FJunoVillageTamingVillagerEntryInfo VillagerInfo; // 0x1398(0x138)
		FJunoVillageUIData ParentVillageUIData; // 0x14D0(0x218)
		unsigned char UnknownData01_7[0x8]; // 0x16E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoVillageTamingVillagerEntry");
			return ret;
		}

		void SetVillagerInfo(FJunoVillageTamingVillagerEntryInfo& InVillagerInfo, FJunoVillageUIData& InParentVillageUIData); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751D2227C(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoBarnAssignmentMenuContainer
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x418 - 0x3F0)
	class UJunoBarnAssignmentMenuContainer : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UJunoBarnAssignmentScreen* BarnAssignmentScreen; // 0x3F8(0x8)
		UJunoBarnNameAnimalScreen* BarnNameAnimalScreen; // 0x400(0x8)
		UCommonActivatableWidgetSwitcher* WidgetSwitcher_Screens; // 0x408(0x8)
		UJunoBarnAssignmentMenuInitData* JunoBarnAssignmentMenuInitData; // 0x410(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoBarnAssignmentMenuContainer");
			return ret;
		}
	};


	// Class JunoCreature_TamingUI.JunoBarnAssignmentScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD0 (0x4C0 - 0x3F0)
	class UJunoBarnAssignmentScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x3F0(0x38) UNKNOWN PROPERTY
		UCommonButtonBase* BackButton; // 0x428(0x8)
		UCommonButtonBase* CloseButton; // 0x430(0x8)
		UCommonListView* List_Characters; // 0x438(0x8)
		UJunoBarnAssignmentListObject* ThisBedListObject; // 0x440(0x8)
		AActor* BarnObject; // 0x448(0x8)
		UJunoCampRecruitmentComponent* JunoCampRecruitmentComponent; // 0x450(0x8)
		UJunoCampAIManagementComponent* JunoCampAIManagementComponent; // 0x458(0x8)
		UCommonButtonBase* Button_Assign; // 0x460(0x8)
		FText AssignedHeaderText; // 0x468(0x10)
		FText NoBarnHeaderText; // 0x478(0x10)
		FText NearbyAnimalsHeaderText; // 0x488(0x10)
		FText AssignButtonText; // 0x498(0x10)
		FText ReassignButtonText; // 0x4A8(0x10)
		UClass* ListHeaderClass; // 0x4B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoBarnAssignmentScreen");
			return ret;
		}

		void OnSelectionChanged(UJunoBarnAssignmentListObject* InSelectedListObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetVillageHasSlotForAnimal(); // Flags: Final|Native|Protected|BlueprintCallable|Const, Memory Exec: 0x7FF751D21D94(relative to base address)
		bool GetGlobalHasSlotForAnimal(); // Flags: Final|Native|Protected|BlueprintCallable|Const, Memory Exec: 0x7FF751D21C68(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoBarnNameAnimalScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB8 (0x4A8 - 0x3F0)
	class UJunoBarnNameAnimalScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x3F0(0x38) UNKNOWN PROPERTY
		AActor* BarnObject; // 0x428(0x8)
		UJunoBarnAssignmentMenuInitData* JunoBarnAssignmentMenuInitData; // 0x430(0x8)
		UCommonButtonBase* Button_RandomName; // 0x438(0x8)
		UCommonButtonBase* BackButton; // 0x440(0x8)
		UCommonButtonBase* CloseButton; // 0x448(0x8)
		UCommonButtonBase* Button_Assign; // 0x450(0x8)
		UCommonUserWidget* UserGeneratedText_ParentalControls; // 0x458(0x8)
		UJunoUGCViewModel* UGCViewModel; // 0x460(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x468(0x10) UNKNOWN PROPERTY
		FGameplayTag AllAnimalNamesGameplayTag; // 0x478(0x4)
		FName AnimalNameRegistryName; // 0x47C(0x4)
		FText DefaultName; // 0x480(0x10)
		FText DefaultHintText; // 0x490(0x10)
		bool bAllowUserInput; // 0x4A0(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x4A1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoBarnNameAnimalScreen");
			return ret;
		}

		void UpdateIsProcessingNameVisuals(bool bIsProcessingName); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoBarnProcessorScreen
	// Inherited from UJunoDisassemblingScreen -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x560 - 0x558)
	class UJunoBarnProcessorScreen : public UJunoDisassemblingScreen	
	{
	public:
		UJunoCampRecruitmentComponent* JunoCampRecruitmentComponent; // 0x558(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoBarnProcessorScreen");
			return ret;
		}

		void ShowLoadingState(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupAnimalInfo(FActiveCampCreatureEntry& Data); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoTamingMapMarkerIconScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x458 - 0x3F0)
	class UJunoTamingMapMarkerIconScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UClass* EntryClass; // 0x3F8(0x8)
		FName ColorParamName; // 0x400(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x404(0x4) UNKNOWN PROPERTY
		UDynamicEntryBox* ColorPanel; // 0x408(0x8)
		UDynamicEntryBox* IconPanel; // 0x410(0x8)
		UCommonButtonGroupBase* ButtonGroup_AllIconSlots; // 0x418(0x8)
		UCommonButtonGroupBase* ButtonGroup_AllColorSlots; // 0x420(0x8)
		UFortLazyImage* Image_PreviewMarker; // 0x428(0x8)
		UJunoMapMarkerCustomizationEntry* SelectedColor; // 0x430(0x8)
		UJunoMapMarkerCustomizationEntry* SelectedIcon; // 0x438(0x8)
		UJunoMapMarkerCustomizationInitData* InitData; // 0x440(0x8)
		FDataTableRowHandle CampRow; // 0x448(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoTamingMapMarkerIconScreen");
			return ret;
		}

		void SetPreviewMarkerMaterial(bool bIsTown); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMarkerNameText(bool bIsTown, FText& Name); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoTamingMapMarkerMenuContainer
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x460 - 0x3F0)
	class UJunoTamingMapMarkerMenuContainer : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UCommonButtonBase* Button_Next; // 0x3F8(0x8)
		UCommonButtonBase* Button_Confirm; // 0x400(0x8)
		UCommonButtonBase* Button_Close; // 0x408(0x8)
		UCommonButtonBase* Button_Close_Touch; // 0x410(0x8)
		UJunoMapMarkerCustomizationInitData* InitData; // 0x418(0x8)
		FName NameScreenTabName; // 0x420(0x4)
		FName IconScreenTabName; // 0x424(0x4)
		UFortTabListWidgetBase* TabList_MenuTabs; // 0x428(0x8)
		UCommonActivatableWidgetSwitcher* Switcher_Tabs; // 0x430(0x8)
		UCommonTextBlock* Text_Title; // 0x438(0x8)
		UCommonUserWidget* UserGeneratedText_ParentalControls; // 0x440(0x8)
		FDataTableRowHandle CampRow; // 0x448(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x458(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoTamingMapMarkerMenuContainer");
			return ret;
		}

		void HandleTabSelected(FName SelectedTabId); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D21DDC(relative to base address)
		bool GetIsInCabinMode(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D21D40(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoTamingMapMarkerNameScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x460 - 0x3F0)
	class UJunoTamingMapMarkerNameScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x3F0(0x18) UNKNOWN PROPERTY
		UCommonButtonBase* RandomizeButton; // 0x408(0x8)
		UJunoMapMarkerCustomizationInitData* InitData; // 0x410(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x418(0x18) UNKNOWN PROPERTY
		UJunoUGCViewModel* UGCViewModel; // 0x430(0x8)
		FText DefaultName; // 0x438(0x10)
		FText DefaultHintText; // 0x448(0x10)
		bool bAllowUserInput; // 0x458(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x459(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoTamingMapMarkerNameScreen");
			return ret;
		}

		void UpdateIsProcessingNameVisuals(bool bIsProcessingName); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMarkerNameText(FText& Name); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoCreature_TamingUI.JunoVillageTamingVillagersScreen
	// Inherited from UJunoVillageScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x98 (0x6F8 - 0x660)
	class UJunoVillageTamingVillagersScreen : public UJunoVillageScreenBase	
	{
	public:
		UDynamicEntryBox* VillageInhabitantsList; // 0x660(0x8)
		UCommonButtonBase* Button_AskToLeave; // 0x668(0x8)
		UCommonButtonBase* Button_ChangeName; // 0x670(0x8)
		UCommonButtonGroupBase* ButtonGroup_AllVillagers; // 0x678(0x8)
		UJunoVillageTamingVillagerEntry* LastHoveredEntry; // 0x680(0x8)
		UDynamicUIScene* AskToLeaveModalScene; // 0x688(0x8)
		FText AskToLeaveConfirmationTitle; // 0x690(0x10)
		FText AskToLeaveConfirmationDescription; // 0x6A0(0x10)
		FText AskToLeaveConfirmButtonText; // 0x6B0(0x10)
		FText AskToLeaveCancelButtonText; // 0x6C0(0x10)
		FDataTableRowHandle ModalConfirmAction; // 0x6D0(0x10)
		FDataTableRowHandle ModalCancelAction; // 0x6E0(0x10)
		int32_t OsirisVillagerSlotCount; // 0x6F0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x6F4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoCreature_TamingUI.JunoVillageTamingVillagersScreen");
			return ret;
		}

		void OnEntryHovered(UJunoVillageTamingVillagerEntry* Entry); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAskToLeaveConfirmed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D21DB4(relative to base address)
		void HandleAskToLeaveCancelled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751CD5628(relative to base address)
	};

}
