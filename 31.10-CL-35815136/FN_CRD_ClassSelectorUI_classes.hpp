#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRD_ClassSelectorUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CRD_ClassSelectorUI.ClassSelectorLoadoutContainer
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x320 - 0x2D8)
	class UClassSelectorLoadoutContainer : public UCommonUserWidget	
	{
	public:
		UWrapBox* WrapBox; // 0x2D8(0x8)
		UClass* EntryWidgetClass; // 0x2E0(0x8)
		TArray<UAthenaItemElementWidgetBase*> EntryWidgets; // 0x2E8(0x10)
		UFortItemDefinition* PreviewItemDef; // 0x2F8(0x8)
		int32_t NumPreviewEntries; // 0x300(0x4)
		unsigned char UnknownData00_7[0x1C]; // 0x304(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ClassSelectorUI.ClassSelectorLoadoutContainer");
			return ret;
		}
	};


	// Class CRD_ClassSelectorUI.ClassSelectorTabButtons
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB8 (0x390 - 0x2D8)
	class UClassSelectorTabButtons : public UCommonUserWidget	
	{
	public:
		UCommonActionWidget* LeftActionWidget; // 0x2D8(0x8)
		UCommonActionWidget* RightActionWidget; // 0x2E0(0x8)
		UScrollBox* TabButtonsScrollBox; // 0x2E8(0x8)
		UCommonButtonBase* LeftButton; // 0x2F0(0x8)
		UCommonButtonBase* RightButton; // 0x2F8(0x8)
		FDataTableRowHandle LeftInputAction; // 0x300(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x310(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle RightInputAction; // 0x318(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x328(0x8) UNKNOWN PROPERTY
		TArray<UClassSelectorTeamTile*> TabButtons; // 0x330(0x10)
		UClass* TabButtonClass; // 0x340(0x8)
		FMargin TabButtonPadding; // 0x348(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x358(0x8) UNKNOWN PROPERTY
		TArray<FText> DesignerPreviewTabNames; // 0x360(0x10)
		float ButtonScrollAmount; // 0x370(0x4)
		unsigned char UnknownData03_7[0x1C]; // 0x374(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ClassSelectorUI.ClassSelectorTabButtons");
			return ret;
		}
	};


	// Class CRD_ClassSelectorUI.ClassSelectorTeamInfoWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2C8 - 0x2B0)
	class UClassSelectorTeamInfoWidget : public UUserWidget	
	{
	public:
		UCommonTextBlock* TeamName; // 0x2B0(0x8)
		UCommonTextBlock* TeamCountText; // 0x2B8(0x8)
		UCommonTextBlock* TeamDescription; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ClassSelectorUI.ClassSelectorTeamInfoWidget");
			return ret;
		}
	};


	// Class CRD_ClassSelectorUI.CreativeClassSelectorButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x13D0 - 0x1390)
	class UCreativeClassSelectorButton : public UCommonButtonBase	
	{
	public:
		UCommonTextBlock* ButtonTextBlock; // 0x1390(0x8)
		UCommonActionWidget* ActionWidget; // 0x1398(0x8)
		FText ButtonText; // 0x13A0(0x10)
		FDataTableRowHandle buttonInputAction; // 0x13B0(0x10)
		bool bAutoCapitalize; // 0x13C0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x13C1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ClassSelectorUI.CreativeClassSelectorButton");
			return ret;
		}

		void SetButtonText(FText& InText); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7515FDBD4(relative to base address)
	};


	// Class CRD_ClassSelectorUI.ClassSelectorTeamTile
	// Inherited from UCreativeClassSelectorButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x1460 - 0x13D0)
	class UClassSelectorTeamTile : public UCreativeClassSelectorButton	
	{
	public:
		unsigned char UnknownData00_3[0x78]; // 0x13D0(0x78) UNKNOWN PROPERTY
		UTextBlock* PlayerCount; // 0x1448(0x8)
		UCommonLazyImage* TeamIconImage; // 0x1450(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x1458(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ClassSelectorUI.ClassSelectorTeamTile");
			return ret;
		}

		void OnTeamSet(FMinigameTeam& NewTeamData); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTeamIconSet(FCreativeIconOption& NewTeamIcon); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTeamColorIndexSet(int32_t TeamColorIndex); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerCountSet(int32_t NewPlayerCount); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CRD_ClassSelectorUI.ClassSelectorTeamTiles
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x320 - 0x2D8)
	class UClassSelectorTeamTiles : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY
		TArray<UClassSelectorTeamTile*> TeamTiles; // 0x2E0(0x10)
		UUniformGridPanel* RootPanel; // 0x2F0(0x8)
		UClass* EntryClass; // 0x2F8(0x8)
		int32_t DesignerPreviewEntries; // 0x300(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x304(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ClassSelectorUI.ClassSelectorTeamTiles");
			return ret;
		}
	};


	// Class CRD_ClassSelectorUI.CreativeClassItemInfo
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UCreativeClassItemInfo : public UObject	
	{
	public:
		FMinigameClassSlot ClassSlot; // 0x28(0x40)
		unsigned char UnknownData00_7[0x8]; // 0x68(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ClassSelectorUI.CreativeClassItemInfo");
			return ret;
		}
	};


	// Class CRD_ClassSelectorUI.CreativeClassEntry
	// Inherited from UCreativeClassSelectorButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13E0 - 0x13D0)
	class UCreativeClassEntry : public UCreativeClassSelectorButton	
	{
	public:
		UCreativeClassItemInfo* ItemInfo; // 0x13D0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x13D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ClassSelectorUI.CreativeClassEntry");
			return ret;
		}

		void OnClassEntryDataSet(bool bIsCurrentClass, bool bIsPendingClass); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBrowsingLoadout(bool bBrowsingLoadout); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CRD_ClassSelectorUI.CreativeClassSelector
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x528 - 0x3F0)
	class UCreativeClassSelector : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x3F0(0x10) UNKNOWN PROPERTY
		UClassSelectorTabButtons* TabButtons_TeamSelection; // 0x400(0x8)
		UCommonListView* ListView_Classes; // 0x408(0x8)
		TArray<UCreativeClassItemInfo*> ClassItemInfos; // 0x410(0x10)
		UScrollBox* LoadoutScrollBox; // 0x420(0x8)
		UClassSelectorLoadoutContainer* LoadoutContainer_Inventory; // 0x428(0x8)
		UClassSelectorLoadoutContainer* LoadoutContainer_Resources; // 0x430(0x8)
		UCommonButtonBase* Button_SelectLoadout; // 0x438(0x8)
		UCommonButtonBase* Button_RandomClass; // 0x440(0x8)
		UWidgetSwitcher* Switcher_Descriptions; // 0x448(0x8)
		UPanelWidget* ClassAndTeamDescriptionContainer; // 0x450(0x8)
		UPanelWidget* ItemDescriptionContainer; // 0x458(0x8)
		UPanelWidget* InventoryPanel; // 0x460(0x8)
		UPanelWidget* ResourcesPanel; // 0x468(0x8)
		UCommonTextBlock* ItemRarity; // 0x470(0x8)
		UCommonTextBlock* ItemName; // 0x478(0x8)
		UCommonTextBlock* ItemDescription; // 0x480(0x8)
		UPanelWidget* TeamDescriptionContainer; // 0x488(0x8)
		UClassSelectorTeamInfoWidget* TeamInfoWidget_FullView; // 0x490(0x8)
		UClassSelectorTeamInfoWidget* TeamInfoWidget_TeamsOnly; // 0x498(0x8)
		UWidgetSwitcher* DisplaySwitcher; // 0x4A0(0x8)
		UPanelWidget* ClassAndTeamSelectionContainer; // 0x4A8(0x8)
		UPanelWidget* OnlyTeamSelectionContainer; // 0x4B0(0x8)
		UPanelWidget* InvalidDataContainer; // 0x4B8(0x8)
		UClassSelectorTeamTiles* TeamTiles; // 0x4C0(0x8)
		UClass* TeamSelectionTabClass; // 0x4C8(0x8)
		bool bIsModalVersion; // 0x4D0(0x1)
		bool bEnableModalTimeLimit; // 0x4D1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x4D2(0x2) UNKNOWN PROPERTY
		int32_t ModalTimeLimitInSeconds; // 0x4D4(0x4)
		unsigned char UnknownData02_6[0x10]; // 0x4D8(0x10) UNKNOWN PROPERTY
		EClassSelectorDisplayMode DisplayMode; // 0x4E8(0x1)
		bool bDeferRespawn; // 0x4E9(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x4EA(0x6) UNKNOWN PROPERTY
		FDataTableRowHandle ReturnToClassSelectionInputAction; // 0x4F0(0x10)
		float LoadoutScrollPadding; // 0x500(0x4)
		unsigned char UnknownData04_6[0x1C]; // 0x504(0x1C) UNKNOWN PROPERTY
		UCreativeClassItemInfo* SelectedClassItemInfo; // 0x520(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ClassSelectorUI.CreativeClassSelector");
			return ret;
		}

		void OnTimerCountdown(int32_t RemainingTime); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoadoutCommitted(FText& NewClassName, FText& NewTeamName, bool bNewLoadout, bool bDefer, char SelectedClassIndex); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnClassSelectorUIPopulated(bool bHasValidData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnClassSelectionChanged(FText& NewClassName, FText& NewClassDescription); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515FDB14(relative to base address)
		UWidget GetFirstLoadoutItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515FDAD8(relative to base address)
	};


	// Class CRD_ClassSelectorUI.CreativeClassSelectorMapTab
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x460 - 0x3F0)
	class UCreativeClassSelectorMapTab : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x3F0(0x28) UNKNOWN PROPERTY
		FAthenaMapScreenContainerTabInfo MapTabInfo; // 0x418(0x40)
		UCreativeClassSelector* CreativeClassSelector; // 0x458(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ClassSelectorUI.CreativeClassSelectorMapTab");
			return ret;
		}

		void SetTabName(FText& TabName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7515FDC70(relative to base address)
	};


	// Class CRD_ClassSelectorUI.Mutator_ClassSelectorUI
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x0 (0x338 - 0x338)
	class AMutator_ClassSelectorUI : public AFortAthenaMutator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ClassSelectorUI.Mutator_ClassSelectorUI");
			return ret;
		}
	};

}
