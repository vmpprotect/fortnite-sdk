#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoUI.GameStateComponent_JunoFeedback
	// Inherited from UGameStateComponent_PlayerFeedback -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UGameStateComponent_JunoFeedback : public UGameStateComponent_PlayerFeedback	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.GameStateComponent_JunoFeedback");
			return ret;
		}
	};


	// Class JunoUI.GridListDataInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGridListDataInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.GridListDataInterface");
			return ret;
		}
	};


	// Class JunoUI.JunoBangWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2D8 - 0x2B8)
	class UJunoBangWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x2B8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBangWidget");
			return ret;
		}

		void SetBangVisibility(EJunoBangVisibility BangVisibility); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E214A0
		void SetBangCount(int32_t NewCount); // Flags: RequiredAPI|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E213C0
		void OnFreeBuildToggled(bool bFreeBuildEnabled); // Flags: Event|Public|BlueprintEvent 0x7FF414E212E0
		bool IsFreeBuildEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E21200
	};


	// Class JunoUI.JunoBedAssignmentListEntry
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UJunoBedAssignmentListEntry : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UJunoBedAssignmentListObject BedAssignmentListObject; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBedAssignmentListEntry");
			return ret;
		}

		void OnBedAssignmentObjectSet(UJunoBedAssignmentListObject NewBedAssignmentListObject); // Flags: Event|Protected|BlueprintEvent 0x7FF414E21580
	};


	// Class JunoUI.JunoBedAssignmentListObject
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UJunoBedAssignmentListObject : public UObject	
	{
	public:
		FGameplayTag NPCGameplayTag; // 0x28(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FText NPCDisplayName; // 0x30(0x10)
		TWeakObjectPtr NPCIcon; // 0x40(0x20)
		bool bHasBed; // 0x60(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		FUniqueNetIdRepl PlayerNetId; // 0x68(0x30)
		bool bIsBed; // 0x98(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBedAssignmentListObject");
			return ret;
		}

		bool IsSelectable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E21D60
		bool IsPlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E21C80
		bool IsNPC(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E21BA0
		bool IsEmpty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E21AC0
		TWeakObjectPtr GetNPCIcon(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E219E0
		FGameplayTag GetNPCGameplayTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E21900
		FText GetNPCDisplayName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E21820
		bool GetIsBed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E21740
		bool GetHasBed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E21660
	};


	// Class JunoUI.JunoBuildingDisplaySlot
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x320 - 0x2E0)
	class UJunoBuildingDisplaySlot : public UCommonUserWidget	
	{
	public:
		FJunoBuildingSlotData BuildingSlotData; // 0x2E0(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildingDisplaySlot");
			return ret;
		}

		void OnSetBuildingSlotInitData(FJunoBuildingSlotData& BuildingSlotInitData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E21F20
		void OnSelectionChanged(bool bInSelected); // Flags: Event|Protected|BlueprintEvent 0x7FF414E21E40
	};


	// Class JunoUI.JunoBuildingIngredientsGroup
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x398 - 0x320)
	class UJunoBuildingIngredientsGroup : public UFortHUDElementWidget	
	{
	public:
		UDynamicEntryBox EntryBox_Ingredients; // 0x320(0x8)
		FGameplayTagContainer FilteredTags; // 0x328(0x20)
		unsigned char UnknownData01_7[0x50]; // 0x348(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildingIngredientsGroup");
			return ret;
		}

		void OnRecipeDisplayDataChanged(FText& RecipeDisplayName, UJunoBuildInstructionsItemDefinition BuildingItemDefinition); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E220E0
		void OnCanCraftChanged(bool bCanCraft); // Flags: Event|Protected|BlueprintEvent 0x7FF414E22000
	};


	// Class JunoUI.JunoBuildingLimitComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoBuildingLimitComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildingLimitComponent");
			return ret;
		}
	};


	// Class JunoUI.JunoRecipeDetailsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x348 - 0x2E0)
	class UJunoRecipeDetailsWidget : public UCommonUserWidget	
	{
	public:
		bool bCanCraft; // 0x2E0(0x1)
		bool bDisableInfiniteIcon; // 0x2E1(0x1)
		unsigned char UnknownData02_6[0x16]; // 0x2E2(0x16) UNKNOWN PROPERTY
		TArray IngredientRequirements; // 0x2F8(0x10)
		int32_t FolderContentsPreviewCount; // 0x308(0x4)
		TWeakObjectPtr CraftingObject; // 0x30C(0x8)
		FName CurrentRecipe; // 0x314(0x4)
		FGameplayTag CurrentFolder; // 0x318(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x31C(0x4) UNKNOWN PROPERTY
		TArray CurrentFolderContents; // 0x320(0x10)
		UDynamicEntryBox EntryBox_Ingredients; // 0x330(0x8)
		UDynamicEntryBox FolderContentRecipeList; // 0x338(0x8)
		UScrollBox ScrollBox_Ingredients; // 0x340(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoRecipeDetailsWidget");
			return ret;
		}

		void UpdateRecipeFocus(FName& Recipe); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E22C40
		void UpdateFolderFocus(FGameplayTag& FolderTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E22B60
		void SetFolderContents(TArray& FolderContents); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E22A80
		void SetCraftingObject(AActor InCraftingObject); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E229A0
		void OnSetRecipeDetails(FText& Name, EJunoKnowledgeState KnowledgeState, int32_t CraftCount, UItemDefinitionBase CraftedItemDef, FText& SourceName, FSlateBrush SourceIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E228C0
		void OnSetFolderDetails(FJunoCraftingFolderUIDataEntry& FolderDef); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E227E0
		void OnRefreshWidget(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E22700
		void NotifyParentDeactivated(); // Flags: Native|Public|BlueprintCallable 0x7FF414E22620
		void NotifyParentActivated(); // Flags: Native|Public|BlueprintCallable 0x7FF414E22540
		void HandleInventoryChanged(FJunoItemSlot& Item, EJunoItemChangeType ChangeType); // Flags: Final|Native|Protected|HasOutParms 0x7FF414E22460
		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414E22380
		FName GetCurrentRecipe(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E222A0
		FGameplayTag GetCurrentFolder(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E221C0
	};


	// Class JunoUI.JunoBuildingRecipeDetails
	// Inherited from UJunoRecipeDetailsWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x398 - 0x348)
	class UJunoBuildingRecipeDetails : public UJunoRecipeDetailsWidget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x348(0x8) UNKNOWN PROPERTY
		UDynamicEntryBox EntryBox_GuidedBuildingIngredients; // 0x350(0x8)
		float LoadingMinimumWaitTimeSeconds; // 0x358(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x35C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr ActorClassToBuild; // 0x360(0x20)
		unsigned char UnknownData05_6[0x10]; // 0x380(0x10) UNKNOWN PROPERTY
		UScrollBox ScrollBox_Requirements; // 0x390(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildingRecipeDetails");
			return ret;
		}

		void SetGuidedBuildIngredientsToPreviewCount(int32_t InGuidedBuildIngredientsToPreviewCount); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E22EE0
		void OnLoadingBuildingActorAssetComplete(FJunoGuidedBuildingUIData GuidedBuildingUIData); // Flags: Event|Protected|BlueprintEvent 0x7FF414E22E00
		void OnLoadingBuildingActorAsset(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E22D20
	};


	// Class JunoUI.JunoCompassWidget
	// Inherited from UFortCompassWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x240 (0x6B0 - 0x470)
	class UJunoCompassWidget : public UFortCompassWidget	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0x470(0x8) UNKNOWN PROPERTY
		float CompassWidth; // 0x478(0x4)
		FVector2f MarkerSize; // 0x47C(0x8)
		FVector2f MobileMarkerSize; // 0x484(0x8)
		float MinMarkerScaleDistanceCutOff; // 0x48C(0x4)
		float MaxMarkerScaleCutOff; // 0x490(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x494(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve MarkerScaleCurve; // 0x498(0x88)
		float MarkerDistanceOffset; // 0x520(0x4)
		float MobileMarkerDistanceOffset; // 0x524(0x4)
		FGameplayTag AdvancedCompassTag; // 0x528(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x52C(0x4) UNKNOWN PROPERTY
		FSlateFontInfo MarkerDistanceTextFont; // 0x530(0x58)
		FSlateFontInfo MarkerDistanceTextFont_Mobile; // 0x588(0x58)
		FDataTableRowHandle PreviousSpawnPointMarkerRow; // 0x5E0(0x10)
		TMap ActiveMarkers; // 0x5F0(0x50)
		unsigned char UnknownData08_6[0x10]; // 0x640(0x10) UNKNOWN PROPERTY
		TMap AvailableMaterialInstances; // 0x650(0x50)
		unsigned char UnknownData09_7[0x10]; // 0x6A0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoCompassWidget");
			return ret;
		}

		void UpdateHasAdvancedCompassFlag(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E22FC0
	};


	// Class JunoUI.JunoDisassemblingScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x168 (0x560 - 0x3F8)
	class UJunoDisassemblingScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x30]; // 0x3F8(0x30) UNKNOWN PROPERTY
		EStationInventoryState StationInventoryState; // 0x428(0x1)
		unsigned char UnknownData04_6[0x27]; // 0x429(0x27) UNKNOWN PROPERTY
		AJunoCraftingObjectBGA CraftingObject; // 0x450(0x8)
		UJunoPlayerInventoryContainer Container_PlayerInventory; // 0x458(0x8)
		UJunoInventoryGroup InventoryGroup_Input; // 0x460(0x8)
		UJunoInventoryGroup InventoryGroup_Output; // 0x468(0x8)
		UCommonButtonBase Button_Back; // 0x470(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x478(0x8)
		UCommonButtonBase Button_TakeStack; // 0x480(0x8)
		UCommonButtonBase Button_DepositStack; // 0x488(0x8)
		UCommonButtonBase Button_MoreActions; // 0x490(0x8)
		UCommonButtonBase Button_TakeAll; // 0x498(0x8)
		UCommonButtonGroupBase ButtonGroup_AllSlots; // 0x4A0(0x8)
		FDataTableRowHandle CancelAction; // 0x4A8(0x10)
		FDataTableRowHandle BackAction; // 0x4B8(0x10)
		UJunoInventorySlot LastSelectedSlot; // 0x4C8(0x8)
		UJunoInventorySlot LastClickedSlot; // 0x4D0(0x8)
		UJunoPassiveCraftingComponent JunoPassiveCraftingComponent; // 0x4D8(0x8)
		UJunoInventoryDragAndDropHandler JunoInventoryDragAndDropHandler; // 0x4E0(0x8)
		unsigned char UnknownData05_7[0x78]; // 0x4E8(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoDisassemblingScreen");
			return ret;
		}

		void OnUpdateStationCraftingState(EStationInventoryState NewState); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF414E23500
		void OnSlotItemSelected(UFortItem Item); // Flags: Event|Protected|BlueprintEvent 0x7FF414E23420
		void OnItemsTaken(TArray& Items); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E23340
		void OnDisabledInventoryItemHovered(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E23260
		void OnCrafringFormulaResultsChanged(TArray& CraftingResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E23180
		void HandleCraftingFormulaChanged(AActor CraftingObjectActor, FName& NewFormula); // Flags: Final|Native|Protected|HasOutParms 0x7FF414E230A0
	};


	// Class JunoUI.JunoComposterScreen
	// Inherited from UJunoDisassemblingScreen -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x590 - 0x560)
	class UJunoComposterScreen : public UJunoDisassemblingScreen	
	{
	public:
		UJunoMultiCraftingComponent JunoMultiCraftingComponent; // 0x560(0x8)
		EStationInventoryState CurrentStationInventoryState; // 0x568(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x569(0x7) UNKNOWN PROPERTY
		TArray CurrentCraftingProcesses; // 0x570(0x10)
		UJunoProcessingInventoryGroup InventoryGroup_Processing; // 0x580(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x588(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoComposterScreen");
			return ret;
		}

		void OnProceessingSlotsChanged(int32_t NumberOfOccupiedSlots); // Flags: Event|Protected|BlueprintEvent 0x7FF414E237A0
		void HandleCraftingProcessesFinished(AActor CraftingObjectRaw); // Flags: Final|Native|Private 0x7FF414E236C0
		void HandleCraftingProcessesBlocked(AActor CraftingObjectRaw); // Flags: Final|Native|Private 0x7FF414E235E0
	};


	// Class JunoUI.JunoConversationMarker
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x500 - 0x3C8)
	class UJunoConversationMarker : public UFortActorIndicatorWidget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x3C8(0x8) UNKNOWN PROPERTY
		UFortKeybindWidget Keybind_Interact; // 0x3D0(0x8)
		float MessageBubbleDuration; // 0x3D8(0x4)
		float LastTextBubbleDuration; // 0x3DC(0x4)
		bool bSetCustomInteractionWidgetOnlyWhenNeeded; // 0x3E0(0x1)
		unsigned char UnknownData04_6[0x1F]; // 0x3E1(0x1F) UNKNOWN PROPERTY
		TMap CachedNPCStateMap; // 0x400(0x50)
		TMap ActiveNPCStateMap; // 0x450(0x50)
		unsigned char UnknownData05_7[0x60]; // 0x4A0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoConversationMarker");
			return ret;
		}

		void SetNPCStatus(FJunoNPCStateUIData& NPCStateData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E23DC0
		void OnParticipantNameChanged(FText& InParticipantName); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E23CE0
		void OnMessageUpdated(FText& MessageText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E23C00
		void OnConversationInteractionUpdated(EDialogMarkerInteractionState NewInteractionState, bool bNewCanInteract); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E23B20
		bool OnCanInteract(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E23A40
		EDialogMarkerInteractionState GetInteractionState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E23960
		void ClearNPCStatus(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E23880
	};


	// Class JunoUI.JunoConversationOption
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x1400 - 0x1390)
	class UJunoConversationOption : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		FClientConversationOptionEntry RepresentedOption; // 0x1398(0x68)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoConversationOption");
			return ret;
		}

		void OnDisplayItemDefLoaded(UItemDefinitionBase ResolvedItemDef); // Flags: Event|Protected|BlueprintEvent 0x7FF414E24140
		void OnDisplayAssetLoaded(UObject ResolvedAsset); // Flags: Event|Protected|BlueprintEvent 0x7FF414E24060
		void OnConversationOptionUpdated(FClientConversationOptionEntry& InOption); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E23F80
		FClientConversationOptionEntry GetConversationOption(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E23EA0
	};


	// Class JunoUI.JunoConversationScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x478 - 0x3F8)
	class UJunoConversationScreen : public UCommonActivatableWidget	
	{
	public:
		UCommonButtonGroupBase Group_Options; // 0x3F8(0x8)
		TWeakObjectPtr ParticipantIconSmall; // 0x400(0x20)
		UDynamicEntryBox EntryBox_Options; // 0x420(0x8)
		UJunoConversationOption LastEntryHovered; // 0x428(0x8)
		FDataTableRowHandle CloseScreenAction; // 0x430(0x10)
		unsigned char UnknownData01_7[0x38]; // 0x440(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoConversationScreen");
			return ret;
		}

		void OnParticipantIconChanged(TWeakObjectPtr& Icon); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E24680
		void OnConversationStarted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E245A0
		void OnConversationOptionsUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E244C0
		void OnConversationMessageUpdated(FClientConversationMessage& ConversationMessage); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E243E0
		void HandleParticipantIconChanged(TWeakObjectPtr& Icon); // Flags: Final|Native|Private|HasOutParms 0x7FF414E24300
		void EndConversation(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E24220
	};


	// Class JunoUI.JunoCraftingCategoryFilterViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0xD0 (0x138 - 0x68)
	class UJunoCraftingCategoryFilterViewModel : public UMVVMViewModelBase	
	{
	public:
		TWeakObjectPtr UIData; // 0x68(0x8)
		FGameplayTag LastSelectedTab; // 0x70(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		TSet SelectedFilterIds; // 0x78(0x50)
		TMap Filters; // 0xC8(0x50)
		FGameplayTagContainer AllRecipeTags; // 0x118(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoCraftingCategoryFilterViewModel");
			return ret;
		}

		void ResetAllFilters(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E24D80
		void RemoveFilters(FGameplayTagContainer& FilterIds); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E24CA0
		void RemoveFilter(FGameplayTag& FilterId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E24BC0
		int32_t NumSelectedFiltersInParentId(FGameplayTag& ParentID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E24AE0
		bool IsFilterIdSelected(FGameplayTag& FilterId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E24A00
		TSet GetSelectedFilterIds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E24920
		void AddFilters(FGameplayTagContainer& FilterIds); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E24840
		void AddFilter(FGameplayTag& FilterId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E24760
	};


	// Class JunoUI.JunoDebugWatermark
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x320 - 0x320)
	class UJunoDebugWatermark : public UFortHUDElementWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoDebugWatermark");
			return ret;
		}

		bool ShouldShowSeed(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E24F40
		FString GetWorldID(); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF414E24E60
	};


	// Class JunoUI.JunoDynamicControlPromptsWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x328 - 0x320)
	class UJunoDynamicControlPromptsWidget : public UFortHUDElementWidget	
	{
	public:
		UDynamicEntryBox EntryBox; // 0x320(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoDynamicControlPromptsWidget");
			return ret;
		}

		void InitializeEntry(FJunoInputAlternateDisplayText& DisplayText, UUserWidget EntryWidget); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E25100
		void AddEntry(FJunoInputAlternateDisplayText& DisplayText); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E25020
	};


	// Class JunoUI.JunoEnchantmentScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x480 - 0x3F8)
	class UJunoEnchantmentScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UJunoPlayerInventoryContainer Container_PlayerInventory; // 0x400(0x8)
		UGridListView RecipeList_Enchantments; // 0x408(0x8)
		UDynamicEntryBox EntryBox_RecipeIngredients; // 0x410(0x8)
		UCommonButtonBase Button_Enchant; // 0x418(0x8)
		UCommonButtonBase Button_TouchSelect; // 0x420(0x8)
		AJunoCraftingObjectBGA CraftingObject; // 0x428(0x8)
		UJunoInventorySlot LastInventorySlot; // 0x430(0x8)
		UFortItem ChosenItem; // 0x438(0x8)
		TArray ChosenItemAlterations; // 0x440(0x10)
		unsigned char UnknownData04_6[0x8]; // 0x450(0x8) UNKNOWN PROPERTY
		UJunoInventorySlot HoveredInventorySlot; // 0x458(0x8)
		unsigned char UnknownData05_7[0x20]; // 0x460(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoEnchantmentScreen");
			return ret;
		}

		void SelectInventorySlot(UJunoInventorySlot InventorySlot); // Flags: Final|Native|Private 0x7FF414E25E20
		void RequestBackout(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E25D40
		void OnRecipeEntrySelected(UFortAlterationItemDefinition PreviewEnchantment); // Flags: Event|Protected|BlueprintEvent 0x7FF414E25C60
		void OnRecipeEntryHovered(UFortAlterationItemDefinition PreviewEnchantment); // Flags: Event|Protected|BlueprintEvent 0x7FF414E25B80
		void OnItemEnchanted(UFortItem Item, UFortItemDefinition PreviewAlteration, int32_t UpdatedAlterationIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414E25AA0
		void OnInventoryItemHovered(UFortItem HoveredInventoryItem); // Flags: Event|Protected|BlueprintEvent 0x7FF414E259C0
		void OnInventoryItemChosen(UFortItem ChosenInventoryItem); // Flags: Event|Protected|BlueprintEvent 0x7FF414E258E0
		void OnInputMethodChanged(ECommonInputType NewInputType); // Flags: Event|Protected|BlueprintEvent 0x7FF414E25800
		void OnEnchantmentStationHeaderData(FJunoCraftingStationUIDataEntry& InEntry); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E25720
		void OnEnchantButtonStateChanged(EJunoEnchantButtonState InButtonState); // Flags: Event|Protected|BlueprintEvent 0x7FF414E25640
		void OnEnchantableItemSlotsCreated(bool bNothingToEnchant); // Flags: Event|Protected|BlueprintEvent 0x7FF414E25560
		void OnDisabledInventoryItemHovered(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E25480
		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF414E253A0
		EJunoEnchantmentScreenState GetCurrentScreenState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E252C0
		void CancelEnchanting(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E251E0
	};


	// Class JunoUI.JunoEnchantmentsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UJunoEnchantmentsWidget : public UCommonUserWidget	
	{
	public:
		UDynamicEntryBox EntryBox_Enchantments; // 0x2E0(0x8)
		UFortItem RepresentedItem; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoEnchantmentsWidget");
			return ret;
		}

		void SetUpdatedEnchantmentIndex(int32_t UpdatedIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E261A0
		void SetRepresentedItem(UFortItem InRepresentedItem); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E260C0
		void SetPreviewEnchantment(UFortAlterationItemDefinition InEnchantment); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E25FE0
		void OnEnchantmentsUpdated(bool bHasEnchantments); // Flags: Event|Protected|BlueprintEvent 0x7FF414E25F00
	};


	// Class JunoUI.JunoEnchantmentWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UJunoEnchantmentWidget : public UCommonUserWidget	
	{
	public:
		UFortAlterationItemDefinition Enchantment; // 0x2E0(0x8)
		EJunoEnchantmentState EnchantmentState; // 0x2E8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x2E9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoEnchantmentWidget");
			return ret;
		}

		void OnRepresentedItemChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E26280
	};


	// Class JunoUI.JunoFolderRecipeWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E0 - 0x2E0)
	class UJunoFolderRecipeWidget : public UCommonUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoFolderRecipeWidget");
			return ret;
		}

		void OnSetRecipeInfo(UItemDefinitionBase CraftedItemDef); // Flags: Event|Protected|BlueprintEvent 0x7FF414E26440
		void OnSetExtraRecipesInfo(int32_t NumExtraRecipes); // Flags: Event|Protected|BlueprintEvent 0x7FF414E26360
	};


	// Class JunoUI.JunoFortItemViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UJunoFortItemViewModel : public UMVVMViewModelBase	
	{
	public:
		UFortItem RepresentedItem; // 0x68(0x8)
		int32_t MaxAllowedItemAlterations; // 0x70(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x74(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoFortItemViewModel");
			return ret;
		}

		void HandleItemUpdatedPostCrafting(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged, FName InRecipeRowName); // Flags: Final|Native|Private 0x7FF414E268A0
		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF414E267C0
		TArray GetRepresentedItemAlterations(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E266E0
		UFortItem GetRepresentedItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E26600
		bool CanBeEnhanced(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E26520
	};


	// Class JunoUI.JunoFTUEPinnedQuestInfo
	// Inherited from UAthenaPinnedQuestInfo -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x380 - 0x340)
	class UJunoFTUEPinnedQuestInfo : public UAthenaPinnedQuestInfo	
	{
	public:
		FGameplayTagContainer QuestCategoryTags; // 0x340(0x20)
		FGameplayTagContainer MobileQuestCategoryTags; // 0x360(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoFTUEPinnedQuestInfo");
			return ret;
		}

		void HandleTrackedFTUEQuestsChanged(UJunoControllerComponent_FTUEQuestTracker FTUEQuestTrackerComponent); // Flags: Final|Native|Private 0x7FF414E26980
	};


	// Class JunoUI.JunoFullScreenMap
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1B8 (0x5B0 - 0x3F8)
	class UJunoFullScreenMap : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x28]; // 0x3F8(0x28) UNKNOWN PROPERTY
		FDataTableRowHandle CloseScreenAction; // 0x420(0x10)
		UCommonButtonBase Button_Back; // 0x430(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x438(0x8)
		UCommonButtonBase Button_PlaceMarker; // 0x440(0x8)
		UCommonButtonBase Button_ResetFocus; // 0x448(0x8)
		UJunoMapWidget MapWidget; // 0x450(0x8)
		UCommonTextBlock Text_EmptyList; // 0x458(0x8)
		UHorizontalBox HBox_MapPrompts; // 0x460(0x8)
		UCommonRichTextBlock RT_Location; // 0x468(0x8)
		UCommonRichTextBlock RT_Biome; // 0x470(0x8)
		UFortLazyImage Image_Biome; // 0x478(0x8)
		UCommonActionWidget CommonActionWidget_Zoom_Gamepad; // 0x480(0x8)
		UCommonActionWidget CommonActionWidget_Pan_Gamepad; // 0x488(0x8)
		FSlateBrush CaveIcon; // 0x490(0xB0)
		float ZoomMouseWheelScale; // 0x540(0x4)
		float TouchZoomSpeed; // 0x544(0x4)
		float GamepadZoomSpeed; // 0x548(0x4)
		float GamepadPanSpeed; // 0x54C(0x4)
		float VirtualCursorMoveSpeed; // 0x550(0x4)
		float GamepadDeadZone; // 0x554(0x4)
		UCurveFloat VirtualCursorCurve; // 0x558(0x8)
		TArray VirtualCursorBlockingWidgets; // 0x560(0x10)
		bool bCanPlaceMapPings; // 0x570(0x1)
		unsigned char UnknownData03_7[0x3F]; // 0x571(0x3F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoFullScreenMap");
			return ret;
		}

		void OnMapIconHovered(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E26C20
		void OnMapIconClicked(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E26B40
		bool IsMapTabAllowed(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E26A60
	};


	// Class JunoUI.JunoGameStateComponent_UIData
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x108 (0x1A8 - 0xA0)
	class UJunoGameStateComponent_UIData : public UGameStateComponent	
	{
	public:
		FName CraftingFormulaRegistryType; // 0xA0(0x4)
		FName CraftingCategoryFilterRegistryType; // 0xA4(0x4)
		unsigned char UnknownData01_7[0x100]; // 0xA8(0x100) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoGameStateComponent_UIData");
			return ret;
		}

		void OnPlaylistDataReady(AFortGameStateAthena GameState, UFortPlaylist Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms 0x7FF414E26D00
	};


	// Class JunoUI.JunoHudMenuBaseInitData
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoHudMenuBaseInitData : public UObject	
	{
	public:
		FName InitialHudMenuBaseTab; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoHudMenuBaseInitData");
			return ret;
		}
	};


	// Class JunoUI.JunoHudMenuBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x430 - 0x3F8)
	class UJunoHudMenuBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x3F8(0x10) UNKNOWN PROPERTY
		UFortTabListWidgetBase TabList_MenuTabs; // 0x408(0x8)
		UCommonActivatableWidgetSwitcher Switcher_Tabs; // 0x410(0x8)
		FDataTableRowHandle CloseHUDMenuAction; // 0x418(0x10)
		UJunoHudMenuBaseInitData HudMenuBaseInitData; // 0x428(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoHudMenuBase");
			return ret;
		}

		void OnInitDataSet(UJunoHudMenuBaseInitData InInitData); // Flags: Event|Protected|BlueprintEvent 0x7FF414E26DE0
	};


	// Class JunoUI.JunoHudMenuContentInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoHudMenuContentInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoHudMenuContentInterface");
			return ret;
		}
	};


	// Class JunoUI.JunoHUDMenuTabButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x1390 - 0x1390)
	class UJunoHUDMenuTabButton : public UCommonButtonBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoHUDMenuTabButton");
			return ret;
		}

		int32_t GetNumUnviewedItems(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414E26EC0
	};


	// Class JunoUI.JunoInGameWorldSettingsScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x420 - 0x3F8)
	class UJunoInGameWorldSettingsScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x3F8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInGameWorldSettingsScreen");
			return ret;
		}

		void RequestClose(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E26FA0
	};


	// Class JunoUI.JunoInGameWorldSettingsViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x58 (0xC0 - 0x68)
	class UJunoInGameWorldSettingsViewModel : public UMVVMViewModelBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		UJunoWorldDataViewModel CurrentWorldViewModel; // 0x70(0x8)
		TWeakObjectPtr SettingsDataTable; // 0x78(0x20)
		TWeakObjectPtr WorldImageDataTable; // 0x98(0x20)
		unsigned char UnknownData03_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInGameWorldSettingsViewModel");
			return ret;
		}

		void SendSettingsUpdatedNotification(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E27160
		void InitWorldData(TWeakObjectPtr& InSettingDataTable, TWeakObjectPtr& InWorldImageDataTable); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E27080
	};


	// Class JunoUI.JunoIngredientWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x358 - 0x2E0)
	class UJunoIngredientWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x2E0(0x10) UNKNOWN PROPERTY
		bool bDisableInfiniteIcon; // 0x2F0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x2F1(0x7) UNKNOWN PROPERTY
		FText StaticDescriptionText; // 0x2F8(0x10)
		FJunoIngredientInfo CachedInfo; // 0x308(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoIngredientWidget");
			return ret;
		}

		void OnIngredientInfoSet(FJunoIngredientInfo& InCachedInfo); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E27320
		void OnIngredientInfoCleared(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E27240
	};


	// Class JunoUI.JunoInventoryUIData
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoInventoryUIData : public UDataAsset	
	{
	public:
		TMap IndividualInventoryGroupUIData; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInventoryUIData");
			return ret;
		}
	};


	// Class JunoUI.JunoItemSpawnerEntrySlot
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x13E0 - 0x1390)
	class UJunoItemSpawnerEntrySlot : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UMenuAnchor ContextMenuAnchor; // 0x1398(0x8)
		unsigned char UnknownData04_6[0x4]; // 0x13A0(0x4) UNKNOWN PROPERTY
		int32_t StackSizeMultiplier; // 0x13A4(0x4)
		UJunoItemSpawnerListEntry ListEntry; // 0x13A8(0x8)
		UClass ContextMenuClass; // 0x13B0(0x8)
		unsigned char UnknownData05_7[0x28]; // 0x13B8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoItemSpawnerEntrySlot");
			return ret;
		}

		void UpdateItemDisplay(UFortItemDefinition FortItemDefinition); // Flags: Event|Protected|BlueprintEvent 0x7FF414E27780
		void OnLeaveContextMenuMode(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E276A0
		void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot); // Flags: Event|Protected|BlueprintEvent 0x7FF414E275C0
		void HandleOnMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private 0x7FF414E274E0
		UUserWidget GetContextMenu(); // Flags: Final|Native|Private 0x7FF414E27400
	};


	// Class JunoUI.JunoItemSpawnerSubCategoryHeader
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UJunoItemSpawnerSubCategoryHeader : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UCommonTextBlock Text_Name; // 0x1398(0x8)
		UJunoItemSpawnerListEntry ListEntry; // 0x13A0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoItemSpawnerSubCategoryHeader");
			return ret;
		}
	};


	// Class JunoUI.JunoItemSpawnerScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x238 (0x630 - 0x3F8)
	class UJunoItemSpawnerScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x28]; // 0x3F8(0x28) UNKNOWN PROPERTY
		UFortTabListWidgetBase TabList_FilterTabs; // 0x420(0x8)
		UClass FilterTabWidget; // 0x428(0x8)
		TMap SubCategoryTagOrderByCategoryTag; // 0x430(0x50)
		TMap ItemTypeTagOrderBySubCategoryTag; // 0x480(0x50)
		UGridListView GridListView_SubCategories; // 0x4D0(0x8)
		FName SubCategoryItemType; // 0x4D8(0x4)
		FName EntrySlotItemType; // 0x4DC(0x4)
		unsigned char UnknownData04_6[0x8]; // 0x4E0(0x8) UNKNOWN PROPERTY
		TMap TabIDToCategoryTagMap; // 0x4E8(0x50)
		UJunoItemSpawnerListEntry SelectedListEntry; // 0x538(0x8)
		UFortItemDefinition SelectedListItemDefinition; // 0x540(0x8)
		UCommonButtonBase Button_Back; // 0x548(0x8)
		UCommonButtonBase Button_Close; // 0x550(0x8)
		UCommonButtonBase Button_Spawn; // 0x558(0x8)
		UCommonButtonBase Button_SpawnMultiple; // 0x560(0x8)
		UJunoNotificationWidget ItemSpawnedNotification; // 0x568(0x8)
		unsigned char UnknownData05_7[0xC0]; // 0x570(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoItemSpawnerScreen");
			return ret;
		}

		void UpdateItemDetails(UFortItemDefinition FortItemDefinition); // Flags: Event|Protected|BlueprintEvent 0x7FF414E27940
		void HandleTabSelected(FName TabID); // Flags: Final|Native|Private 0x7FF414E27860
	};


	// Class JunoUI.JunoItemSpawnerListEntry
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UJunoItemSpawnerListEntry : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		UFortItemDefinition ItemDefinition; // 0x40(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoItemSpawnerListEntry");
			return ret;
		}
	};


	// Class JunoUI.JunoItemStatsList
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UJunoItemStatsList : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoItemStatsList");
			return ret;
		}

		float GetWeaponEssencesBonusDamage(UFortItem WeaponItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E27A20
	};


	// Class JunoUI.JunoListViewHeaderObject
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UJunoListViewHeaderObject : public UObject	
	{
	public:
		FText HeaderText; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoListViewHeaderObject");
			return ret;
		}
	};


	// Class JunoUI.JunoLocalPlayerUIMapState
	// Inherited from UObject
	// Size: 0x128 (0x150 - 0x28)
	class UJunoLocalPlayerUIMapState : public UObject	
	{
	public:
		TWeakObjectPtr DefaultPlayerIconMaterial; // 0x28(0x20)
		TWeakObjectPtr DefaultAnchoringArrowIconMaterial; // 0x48(0x20)
		TWeakObjectPtr DefaultMapTileMaterial; // 0x68(0x20)
		TWeakObjectPtr PlayerIconMaterial; // 0x88(0x20)
		TWeakObjectPtr AnchoringArrowIconMaterial; // 0xA8(0x20)
		TWeakObjectPtr MapTileMaterial; // 0xC8(0x20)
		TWeakObjectPtr MapViewModel; // 0xE8(0x8)
		unsigned char UnknownData01_7[0x60]; // 0xF0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoLocalPlayerUIMapState");
			return ret;
		}
	};


	// Class JunoUI.JunoMapIndicatorType
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UJunoMapIndicatorType : public UObject	
	{
	public:
		int32_t SortOrder; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery TagQuery; // 0x30(0x48)
		unsigned char UnknownData03_7[0x18]; // 0x78(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapIndicatorType");
			return ret;
		}
	};


	// Class JunoUI.JunoMapMarkerIndicators
	// Inherited from UJunoMapIndicatorType -> UObject
	// Size: 0x8 (0x98 - 0x90)
	class UJunoMapMarkerIndicators : public UJunoMapIndicatorType	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x90(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapMarkerIndicators");
			return ret;
		}
	};


	// Class JunoUI.JunoMapPingIndicators
	// Inherited from UJunoMapIndicatorType -> UObject
	// Size: 0xB0 (0x140 - 0x90)
	class UJunoMapPingIndicators : public UJunoMapIndicatorType	
	{
	public:
		FSlateBrush MarkerBrush; // 0x90(0xB0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapPingIndicators");
			return ret;
		}
	};


	// Class JunoUI.JunoMapTeamIndicators
	// Inherited from UJunoMapIndicatorType -> UObject
	// Size: 0xD0 (0x160 - 0x90)
	class UJunoMapTeamIndicators : public UJunoMapIndicatorType	
	{
	public:
		FName RotationParamName; // 0x90(0x4)
		FName AvatarParamName; // 0x94(0x4)
		FName ShowDirectionParamName; // 0x98(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
		FSlateBrush TeamIcon; // 0xA0(0xB0)
		TArray MIDTeamIcons; // 0x150(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapTeamIndicators");
			return ret;
		}
	};


	// Class JunoUI.JunoMapWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x168 (0x420 - 0x2B8)
	class UJunoMapWidget : public UUserWidget	
	{
	public:
		FJunoMapZoomBounds ZoomBounds; // 0x2B8(0xC)
		float PlayerVisibilityPadding; // 0x2C4(0x4)
		float AnchorMapPadding; // 0x2C8(0x4)
		float MarkerCyclingDisplayDuration; // 0x2CC(0x4)
		float InContainerIconDistance; // 0x2D0(0x4)
		float IconHoverScale; // 0x2D4(0x4)
		int32_t PlayerIconSize; // 0x2D8(0x4)
		int32_t AnchoringArrowIconSize; // 0x2DC(0x4)
		bool bEnableFullMapDisplay; // 0x2E0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x2E1(0x3) UNKNOWN PROPERTY
		FLinearColor NonSelectableIconColor; // 0x2E4(0x10)
		unsigned char UnknownData05_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr PlayerIconMaterial; // 0x2F8(0x20)
		TWeakObjectPtr AnchoringArrowIconMaterial; // 0x318(0x20)
		TWeakObjectPtr MapTileMaterial; // 0x338(0x20)
		FName TerrainMaterialParameterName; // 0x358(0x4)
		FName ZoomLevelMaterialParameterName; // 0x35C(0x4)
		FName MapContainerSizeXParameterName; // 0x360(0x4)
		FName MapContainerSizeYParameterName; // 0x364(0x4)
		FName MapContainerVerticalOffsetParameterName; // 0x368(0x4)
		FName FogOfWarMaterialParameterName; // 0x36C(0x4)
		FName FogOfWarScaleParameterName; // 0x370(0x4)
		FName FogOfWarOffsetParameterName; // 0x374(0x4)
		FName FogOfWarRandomSignParameterName; // 0x378(0x4)
		FName FogOfWarRandomIntensityParameterName; // 0x37C(0x4)
		FName MinZoomParameterName; // 0x380(0x4)
		FName MaxZoomParameterName; // 0x384(0x4)
		FGameplayTagContainer GameplayTags; // 0x388(0x20)
		unsigned char UnknownData06_6[0x10]; // 0x3A8(0x10) UNKNOWN PROPERTY
		TArray IndicatorTypes; // 0x3B8(0x10)
		FMulticastInlineDelegate OnMapDragBlocked; // 0x3C8(0x10)
		UMaterialInterface VirtualCursorMaterial; // 0x3D8(0x8)
		TWeakObjectPtr MapViewModel; // 0x3E0(0x8)
		unsigned char UnknownData07_7[0x38]; // 0x3E8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapWidget");
			return ret;
		}

		void RemoveCustomMapElement(FName ID); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E27BE0
		void AddCustomMapElement(FName ID, FJunoCustomMapElement& InCustomElement); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E27B00
	};


	// Class JunoUI.JunoModalSelectionContext
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UJunoModalSelectionContext : public UObject	
	{
	public:
		FText Title; // 0x28(0x10)
		FText Description; // 0x38(0x10)
		TArray Choices; // 0x48(0x10)
		FMulticastInlineDelegate TouchCloseDelegate; // 0x58(0x10)
		UObject InitObject; // 0x68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoModalSelectionContext");
			return ret;
		}
	};


	// Class JunoUI.JunoSelectionModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x430 - 0x3F8)
	class UJunoSelectionModal : public UCommonActivatableWidget	
	{
	public:
		UClass SelectionButtonClass; // 0x3F8(0x8)
		UCommonButtonBase Button_TouchClose; // 0x400(0x8)
		UJunoModalSelectionContext SelectionContext; // 0x408(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x410(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoSelectionModal");
			return ret;
		}

		void OnSetTitleAndDescription(FText& Title, FText& Description); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E27E80
		void OnSelectionButtonCreated(UCommonButtonBase NewButton, FText& SelectionTitle); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E27DA0
		void OnModalWidgetInitialized(); // Flags: Event|Public|BlueprintEvent 0x7FF414E27CC0
	};


	// Class JunoUI.JunoNPCStatusWidgetBase
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x3F8 - 0x3C8)
	class UJunoNPCStatusWidgetBase : public UFortActorIndicatorWidget	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x3C8(0x10) UNKNOWN PROPERTY
		UJunoAnimatedProgressBar AnimatedProgressBar; // 0x3D8(0x8)
		unsigned char UnknownData03_6[0x4]; // 0x3E0(0x4) UNKNOWN PROPERTY
		float MinRadius; // 0x3E4(0x4)
		float MaxRadius; // 0x3E8(0x4)
		float MinScalingDistance; // 0x3EC(0x4)
		float MaxScalingDistance; // 0x3F0(0x4)
		float BuildingStaticUIScaleFactor; // 0x3F4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoNPCStatusWidgetBase");
			return ret;
		}

		void OnTakeDamage(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E28200
		void OnScalingFactorChanged(float NewScalingFactor); // Flags: Event|Protected|BlueprintEvent 0x7FF414E28120
		void OnBuildingHealthChanged(); // Flags: Final|Native|Protected 0x7FF414E28040
		void OnActorHealthChanged(float NewHealth, float NewMaxHealth); // Flags: Final|Native|Protected 0x7FF414E27F60
	};


	// Class JunoUI.JunoPlayerActiveBuffViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x30 (0x98 - 0x68)
	class UJunoPlayerActiveBuffViewModel : public UMVVMViewModelBase	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x68(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerActiveBuffViewModel");
			return ret;
		}

		void TriggerAllCurrentEffectNotifies(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E284A0
		FJunoBuffInfo NotifyUIBuff(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E283C0
		bool Initialize(AFortPlayerControllerZone FortPC); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E282E0
	};


	// Class JunoUI.JunoPlayerBuffManager
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UJunoPlayerBuffManager : public UUserWidget	
	{
	public:
		UJunoPlayerActiveBuffViewModel PlayerActiveBuffVM; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerBuffManager");
			return ret;
		}
	};


	// Class JunoUI.JunoPlayerInventoryContainer
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x320 - 0x2E0)
	class UJunoPlayerInventoryContainer : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr OwningPlayer; // 0x2E0(0x8)
		UJunoInventoryGroup Group_MainInventory; // 0x2E8(0x8)
		UJunoInventoryGroup Group_MainHand; // 0x2F0(0x8)
		UJunoInventoryGroup Group_OffHand; // 0x2F8(0x8)
		TArray GroupList; // 0x300(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x310(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerInventoryContainer");
			return ret;
		}
	};


	// Class JunoUI.JunoPlayerInventoryViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x8 (0x70 - 0x68)
	class UJunoPlayerInventoryViewModel : public UMVVMViewModelBase	
	{
	public:
		UJunoInventoryUIData JunoInventoryUIData; // 0x68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerInventoryViewModel");
			return ret;
		}

		void RefreshData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414E28660
		UJunoInventoryUIData GetJunoInventoryUIData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E28580
	};


	// Class JunoUI.JunoPlayerManagementScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x440 - 0x3F8)
	class UJunoPlayerManagementScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0x3F8(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerManagementScreen");
			return ret;
		}

		void OpenSidebar(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E28820
		void HandleBackButtonClicked(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E28740
	};


	// Class JunoUI.JunoPlayerStateComponent_UIViewModels
	// Inherited from UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UJunoPlayerStateComponent_UIViewModels : public UPlayerStateComponent	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerStateComponent_UIViewModels");
			return ret;
		}
	};


	// Class JunoUI.JunoQuickBuildRadialPicker
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x418 - 0x3F8)
	class UJunoQuickBuildRadialPicker : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UFortPickerOverlay PickerOverlay_QuickBuildItems; // 0x400(0x8)
		UDynamicEntryBox EntryBox_Ingredients; // 0x408(0x8)
		UJunoQuickBuildSelectionData QuickBuildSelectionData; // 0x410(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoQuickBuildRadialPicker");
			return ret;
		}

		void OnQuickBuildSlotSelected(FJunoQuickBuildSlotData& SelectedQuickBuildSlotData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E28AC0
		void CancelSelection(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E289E0
		void ApplyCurrentSelection(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E28900
	};


	// Class JunoUI.JunoRecipeFilterButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x13D0 - 0x1390)
	class UJunoRecipeFilterButton : public UCommonButtonBase	
	{
	public:
		TWeakObjectPtr CraftingObject; // 0x1390(0x8)
		unsigned char UnknownData02_6[0x10]; // 0x1398(0x10) UNKNOWN PROPERTY
		UJunoBangWidget JunoBangWidget; // 0x13A8(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x13B0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoRecipeFilterButton");
			return ret;
		}
	};


	// Class JunoUI.JunoRecipeListEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC0 (0x1450 - 0x1390)
	class UJunoRecipeListEntry : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UMenuAnchor ContextMenuAnchor; // 0x1398(0x8)
		UJunoBangWidget JunoBangWidget; // 0x13A0(0x8)
		UJunoRecipeListObject RecipeListObject; // 0x13A8(0x8)
		UClass ContextMenuClass; // 0x13B0(0x8)
		unsigned char UnknownData04_6[0x50]; // 0x13B8(0x50) UNKNOWN PROPERTY
		int32_t MaxCraftCount; // 0x1408(0x4)
		bool bCanCraft; // 0x140C(0x1)
		unsigned char UnknownData05_7[0x43]; // 0x140D(0x43) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoRecipeListEntry");
			return ret;
		}

		void ViewRecipe(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E29700
		void SetPartsRemaining(FJunoGuidedBuildRemainingPartsInfo& RemainingParts); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E29620
		void OnUpdateListEntryVisuals(); // Flags: Event|Public|BlueprintEvent 0x7FF414E29540
		void OnUpdateBangVisibility(EJunoBangVisibility BangType); // Flags: Event|Protected|BlueprintEvent 0x7FF414E29460
		void OnSetRecipeInfo(UItemDefinitionBase CraftedItemDef, int32_t CraftCount, FSlateBrush& SourceIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E29380
		void OnSetFolderInfo(FGameplayTag& FolderTag, FText& FolderText, TWeakObjectPtr& SourceIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E292A0
		void OnRecipePinned(bool bIsPinned); // Flags: Event|Protected|BlueprintEvent 0x7FF414E291C0
		void OnLeaveContextMenuMode(bool bUnselectSlot); // Flags: Event|Protected|BlueprintEvent 0x7FF414E290E0
		void OnInitWidgetComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E29000
		void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot); // Flags: Event|Protected|BlueprintEvent 0x7FF414E28F20
		void OnCurrentStageUpdate(FGuidedBuildingUpdate& UpdateData); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E28E40
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Protected 0x7FF414E28D60
		EJunoKnowledgeState GetKnowledgeState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E28C80
		bool GetCanCraft(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure 0x7FF414E28BA0
	};


	// Class JunoUI.JunoRecipeHeaderWidget
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UJunoRecipeHeaderWidget : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UCommonTextBlock Text_Name; // 0x1398(0x8)
		UJunoRecipeListObject RecipeListObject; // 0x13A0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoRecipeHeaderWidget");
			return ret;
		}
	};


	// Class JunoUI.JunoStandaloneCraftingInitData
	// Inherited from UJunoHudMenuBaseInitData -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UJunoStandaloneCraftingInitData : public UJunoHudMenuBaseInitData	
	{
	public:
		TWeakObjectPtr CraftingObject; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoStandaloneCraftingInitData");
			return ret;
		}
	};


	// Class JunoUI.JunoStandaloneCraftingContainer
	// Inherited from UJunoHudMenuBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x438 - 0x430)
	class UJunoStandaloneCraftingContainer : public UJunoHudMenuBase	
	{
	public:
		FName UpgradeTab; // 0x430(0x4)
		FName JobTab; // 0x434(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoStandaloneCraftingContainer");
			return ret;
		}

		void OnUpdateCraftingStationAttachedRecipe(FText& NewAttachedRecipe); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E29C40
		void OnSetCraftingStationUIEntry(FJunoCraftingStationUIDataEntry CraftingStationUIEntry); // Flags: Event|Protected|BlueprintEvent 0x7FF414E29B60
		void OnRecipeCraftingComplete(UItemDefinitionBase Item); // Flags: Event|Protected|BlueprintEvent 0x7FF414E29A80
		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF414E299A0
		void HandleCraftingStationRecipeChanged(FName FormulaRowName); // Flags: Final|Native|Private 0x7FF414E298C0
		void HandleCraftingObjectDeath(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn InstigatedBy, AActor DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Private|HasOutParms|HasDefaults 0x7FF414E297E0
	};


	// Class JunoUI.JunoStationUpgradeScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x4A0 - 0x3F8)
	class UJunoStationUpgradeScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x30]; // 0x3F8(0x30) UNKNOWN PROPERTY
		TWeakObjectPtr CraftingObject; // 0x428(0x8)
		UJunoRecipeDetailsWidget RecipeDetailsWidget; // 0x430(0x8)
		UCommonButtonBase Button_Craft; // 0x438(0x8)
		FName RecipeToCraft; // 0x440(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x444(0x4) UNKNOWN PROPERTY
		UCommonButtonBase Button_Close; // 0x448(0x8)
		UCommonButtonBase Button_TouchClose; // 0x450(0x8)
		unsigned char UnknownData05_7[0x48]; // 0x458(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoStationUpgradeScreen");
			return ret;
		}

		void OnUpdateCraftButton(EJunoCraftButtonState InButtonState, bool bIsStationUpgrade); // Flags: Event|Protected|BlueprintEvent 0x7FF414E29EE0
		void OnSetCurrentCraftingRecipeIcon(TWeakObjectPtr& UpgradeIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E29E00
		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Native|Protected|HasOutParms 0x7FF414E29D20
	};


	// Class JunoUI.JunoTaggedWidgetData
	// Inherited from UDataAsset -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UJunoTaggedWidgetData : public UDataAsset	
	{
	public:
		TMap TaggedWidgetScenes; // 0x30(0x50)
		TMap TaggedWidgets; // 0x80(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoTaggedWidgetData");
			return ret;
		}
	};


	// Class JunoUI.JunoUIFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoUIFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoUIFunctionLibrary");
			return ret;
		}

		bool ShouldShowUnacquiredBang(APlayerController PlayerController, FName RecipeRowName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414E2A880
		void RemoveModalScene(APlayerController PlayerController); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414E2A7A0
		int32_t NumUnviewedRecipesInCategory(FCountUnviewedRecipesInCategoryArgs& InArgs); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E2A6C0
		int32_t NumUnviewedItemsInInventory(AFortPlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414E2A5E0
		int32_t NumUnviewedItemsInGroup(AFortPlayerController PlayerController, FGameplayTag& GroupTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E2A500
		TArray GetRecipesFromCraftingObject(AFortPlayerController PlayerController, AActor CraftingObject, FGameplayTag& CategoryTag, FGameplayTag& SubCategoryTag, bool bOnlyKnownRecipes, bool bOnlyOwnedRecipes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E2A420
		FJunoCraftingCategoryUIDataEntry GetRecipeCategoryUIData(FGameplayTag& CategoryTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E2A340
		bool GetBiomeUIDataFromName(FName& EventName, FJunoBiomeUIDataRow& OutRow); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E2A260
		bool GetBiomeUIDataFromEnum(EJunoBiome& Biome, FJunoBiomeUIDataRow& OutRow); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E2A180
		bool GetBiomeUIData(EJunoBiome& Biome, FName& EventName, FJunoBiomeUIDataRow& OutRow); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E2A0A0
		void AddModalScene(APlayerController PlayerController, FJunoModalSceneOperation& ModalScene); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E29FC0
	};


	// Class JunoUI.JunoUIGameFeatureData
	// Inherited from UFortGameFeatureData -> UGameFeatureData -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xF8 (0x638 - 0x540)
	class UJunoUIGameFeatureData : public UFortGameFeatureData	
	{
	public:
		TWeakObjectPtr CraftingCategoryUIData; // 0x540(0x20)
		TWeakObjectPtr CraftingFolderUIData; // 0x560(0x20)
		TWeakObjectPtr FreeBuildCategoryUIData; // 0x580(0x20)
		TWeakObjectPtr InventoryUIData; // 0x5A0(0x20)
		TWeakObjectPtr VillageUIData; // 0x5C0(0x20)
		TMap NPCStateUIDataMap; // 0x5E0(0x50)
		FDataRegistryType WeaponEssenceDataRegistryType; // 0x630(0x4)
		FDataRegistryType BiomeUIDataRegistryType; // 0x634(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoUIGameFeatureData");
			return ret;
		}
	};


	// Class JunoUI.JunoVillageMenuInitData
	// Inherited from UJunoHudMenuBaseInitData -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UJunoVillageMenuInitData : public UJunoHudMenuBaseInitData	
	{
	public:
		AJunoCampActor CampActor; // 0x30(0x8)
		UJunoCampMembershipActorComponent CampActorMembershipActorComponent; // 0x38(0x8)
		UJunoAwesomeLevelComponent AwesomeLevelComponent; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoVillageMenuInitData");
			return ret;
		}
	};


	// Class JunoUI.JunoVillageRequiredAwesomePointsInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoVillageRequiredAwesomePointsInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoVillageRequiredAwesomePointsInterface");
			return ret;
		}

		void SetAwesomePointsInfo(int32_t CurrentAwesomePoints, int32_t RequiredAwesomePoints, int32_t CurrentAwesomeLevel); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF414E2A960
	};


	// Class JunoUI.JunoVillageRewardEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x290 (0x1620 - 0x1390)
	class UJunoVillageRewardEntry : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		FJunoVillageRewardEntryInfo VillageRewardEntryInfo; // 0x1398(0x70)
		FJunoVillageUIData ParentVillageUIData; // 0x1408(0x218)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoVillageRewardEntry");
			return ret;
		}

		void SetVillageRewardEntryInfo(FJunoVillageRewardEntryInfo& InVillageRewardEntryInfo, FJunoVillageUIData& InParentVillageUIData); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414E2AA40
	};


	// Class JunoUI.JunoVillageTownBuilderQuestEntry
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x360 - 0x2E0)
	class UJunoVillageTownBuilderQuestEntry : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
		FString ItemDefinitionTagQueryDescription; // 0x2E8(0x10)
		TArray ItemDefinitionTagQueryTags; // 0x2F8(0x10)
		UItemDefinitionBase ItemDefinition; // 0x308(0x8)
		FText Name; // 0x310(0x10)
		FText Description; // 0x320(0x10)
		TWeakObjectPtr Icon; // 0x330(0x20)
		int32_t StepIndex; // 0x350(0x4)
		int32_t StepCount; // 0x354(0x4)
		bool bIsComplete; // 0x358(0x1)
		bool bIsOsirisCamp; // 0x359(0x1)
		bool bIsTownbuilder; // 0x35A(0x1)
		unsigned char UnknownData03_7[0x5]; // 0x35B(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoVillageTownBuilderQuestEntry");
			return ret;
		}

		void BP_SetRecruitmentCount(int32_t CurrentCount, int32_t GoalCount); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2AEA0
		void BP_SetPersistentTag(FGameplayTag& InGameplayTag); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E2ADC0
		void BP_SetGeneralInfo(FText& InName, FText& InDescription, TWeakObjectPtr& InIcon, int32_t InStepIndex, int32_t InStepCount, bool bInIsComplete); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E2ACE0
		void BP_SetBuiltObject(FJunoAwesomeUpgradeBuiltObjectsRequirement& InRequirement); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E2AC00
		void BP_OnQuestInfoChanged(int32_t InAchieved, int32_t InRequired, EFortRarity InRarity, FText& InDescription, FText& InCategoryHeader); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E2AB20
	};


	// Class JunoUI.JunoWorldManagementUIComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x40 (0xE8 - 0xA8)
	class UJunoWorldManagementUIComponent : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0xA8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoWorldManagementUIComponent");
			return ret;
		}
	};


	// Class JunoUI.Juno_GFA_AddMapIndicatorTypes
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UJuno_GFA_AddMapIndicatorTypes : public UFortUIGameFeatureAction	
	{
	public:
		TArray IndicatorTypes; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.Juno_GFA_AddMapIndicatorTypes");
			return ret;
		}
	};


	// Class JunoUI.PermaDeathFlowInitData
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UPermaDeathFlowInitData : public UObject	
	{
	public:
		bool ShouldOpenOnPlayerManagement; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.PermaDeathFlowInitData");
			return ret;
		}
	};


	// Class JunoUI.PermaDeathFlowScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x400 - 0x3F8)
	class UPermaDeathFlowScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.PermaDeathFlowScreen");
			return ret;
		}

		void SetInitialActiveWidget(bool ShouldOpenOnPlayerManagement); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2AF80
	};


	// Class JunoUI.JunoFreeBuildCategoryUIData
	// Inherited from UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UJunoFreeBuildCategoryUIData : public UDataAsset	
	{
	public:
		TArray Categories; // 0x30(0x10)
		TArray Subcategories; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoFreeBuildCategoryUIData");
			return ret;
		}
	};


	// Class JunoUI.GridListView
	// Inherited from UCommonTileView -> UTileView -> UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0xBA0 - 0xB58)
	class UGridListView : public UCommonTileView	
	{
	public:
		TArray GridListViewInfo; // 0xB58(0x10)
		bool bAlwaysShowScrollbar; // 0xB68(0x1)
		bool bAlwaysShowScrollbarTrack; // 0xB69(0x1)
		unsigned char UnknownData02_6[0x6]; // 0xB6A(0x6) UNKNOWN PROPERTY
		FVector2D ScrollbarThickness; // 0xB70(0x10)
		FGridListSlotInfoContainer GeneratedGridListSlotInfo; // 0xB80(0x10)
		unsigned char UnknownData03_7[0x10]; // 0xB90(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.GridListView");
			return ret;
		}
	};


	// Class JunoUI.JunoAdjustableInventorySlot
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x350 - 0x2E0)
	class UJunoAdjustableInventorySlot : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_3[0x38]; // 0x2E0(0x38) UNKNOWN PROPERTY
		UCommonButtonBase Button_Increase; // 0x318(0x8)
		UCommonButtonBase Button_Decrease; // 0x320(0x8)
		UJunoInventorySlot Container_InventorySlot; // 0x328(0x8)
		FDataTableRowHandle IncreaseAction; // 0x330(0x10)
		FDataTableRowHandle DecreaseAction; // 0x340(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoAdjustableInventorySlot");
			return ret;
		}

		void OnNotifySlotReleased(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2B300
		void OnIncreaseEventHandled(); // Flags: Event|Public|BlueprintEvent 0x7FF414E2B220
		void OnDecreaseEventHandled(); // Flags: Event|Public|BlueprintEvent 0x7FF414E2B140
		void OnButtonsStateUpdated(); // Flags: Event|Public|BlueprintEvent 0x7FF414E2B060
	};


	// Class JunoUI.JunoDurabilityCountdown
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UJunoDurabilityCountdown : public UUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoDurabilityCountdown");
			return ret;
		}

		void SetItem(UFortItem InItem); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E2B680
		UFortItem GetItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E2B5A0
		float GetDurabilityCooldownTimeRemaining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E2B4C0
		float GetDurabilityCooldownDuration(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E2B3E0
	};


	// Class JunoUI.JunoInventorySlot
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x170 (0x1500 - 0x1390)
	class UJunoInventorySlot : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData05_3[0x70]; // 0x1390(0x70) UNKNOWN PROPERTY
		UMenuAnchor ContextMenuAnchor; // 0x1400(0x8)
		UJunoBangWidget JunoBangWidget; // 0x1408(0x8)
		bool bCanShowItemDetails; // 0x1410(0x1)
		bool bSupportsTooltipDisplay; // 0x1411(0x1)
		bool bDragAndDropAllowed; // 0x1412(0x1)
		unsigned char UnknownData06_6[0x5]; // 0x1413(0x5) UNKNOWN PROPERTY
		UClass ContextMenuClass; // 0x1418(0x8)
		unsigned char UnknownData07_6[0x8]; // 0x1420(0x8) UNKNOWN PROPERTY
		AActor InventoryOwner; // 0x1428(0x8)
		TWeakObjectPtr InventoryGroupIcon; // 0x1430(0x20)
		TWeakObjectPtr MatchingItemIcon; // 0x1450(0x20)
		unsigned char UnknownData08_6[0x8]; // 0x1470(0x8) UNKNOWN PROPERTY
		FJunoItemSlot SlotData; // 0x1478(0x50)
		unsigned char UnknownData09_7[0x38]; // 0x14C8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInventorySlot");
			return ret;
		}

		void ShowItemDetails(bool bShow); // Flags: Event|Public|BlueprintEvent 0x7FF414E2CB80
		void SetIsEnabledForScreen(bool bInEnabledForScreen); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E2CAA0
		void OnStackCountChanged(int32_t StackCount, int32_t MaxStackCount); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2C9C0
		void OnShowSelected(bool bInSelected); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2C8E0
		void OnResetDurabilityCooldown(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E2C800
		void OnPreviewStackCountChanged(int32_t StackCount, int32_t MaxStackCount); // Flags: Event|Public|BlueprintEvent 0x7FF414E2C720
		void OnPreviewImageChanged(TWeakObjectPtr& SlotImage, bool bIsValidItem, TWeakObjectPtr& InInventoryGroupIcon, TWeakObjectPtr& InMatchingItemIcon, EFortRarity ItemRarity); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E2C640
		void OnNotifySlotReleased(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2C560
		void OnLeaveSwappingMode(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2C480
		void OnLeaveContextMenuMode(bool bUnselectSlot); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2C3A0
		void OnItemHasBeenViewed(bool bHasBeenPreviouslyViewed); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2C2C0
		void OnEnterSwappingMode(EJunoSwapItemType InSwapItemType, UFortItem Item); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2C1E0
		void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2C100
		void OnEnchantmentsChanged(int32_t TotalSlots, int32_t OccupiedSlots); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2C020
		void OnEnabledForScreenChanged(bool bEnabledForScreen); // Flags: Event|Public|BlueprintEvent 0x7FF414E2BF40
		void OnDurabilityCooldownStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF414E2BE60
		void OnDurabilityCooldownEnded(); // Flags: Event|Public|BlueprintEvent 0x7FF414E2BD80
		void OnDurabilityChanged(float CurrentDurability, float MaxDurability, float NormalizedDurability, bool bFromItemInitializtion); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2BCA0
		void HandleOnMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private 0x7FF414E2BBC0
		FGameplayTagContainer GetSlotTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E2BAE0
		UFortItem GetRepresentedItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E2BA00
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Private 0x7FF414E2B920
		FGameplayTagContainer GetMatchingItemGameplayTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E2B840
		bool GetIsEnabledForScreen(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E2B760
	};


	// Class JunoUI.JunoInventorySlotsInfo
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E8 - 0x2E0)
	class UJunoInventorySlotsInfo : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr WeakOptionalInventoryObject; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInventorySlotsInfo");
			return ret;
		}

		void OnInventorySlotChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2CE20
		int32_t GetNumInventorySlots(bool bOccupied); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E2CD40
		int32_t GetMaxInventorySlotsAvailable(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E2CC60
	};


	// Class JunoUI.JunoRecipeCraftingCategoryUIData
	// Inherited from UDataAsset -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UJunoRecipeCraftingCategoryUIData : public UDataAsset	
	{
	public:
		UJunoCraftingCategoryUIData CraftingCategoryUIData; // 0x30(0x8)
		TArray Stations; // 0x38(0x10)
		FGameplayTagContainer IgnoredCraftingCategories; // 0x48(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoRecipeCraftingCategoryUIData");
			return ret;
		}
	};


	// Class JunoUI.JunoRecipeListObject
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UJunoRecipeListObject : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x24]; // 0x28(0x24) UNKNOWN PROPERTY
		TWeakObjectPtr CraftingObject; // 0x4C(0x8)
		TWeakObjectPtr RecipeScreen; // 0x54(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoRecipeListObject");
			return ret;
		}

		bool GetIsRecipeBeingCrafted(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E2CF00
	};


	// Class JunoUI.JunoRecipeScreenBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE8 (0x4E0 - 0x3F8)
	class UJunoRecipeScreenBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData05_3[0x30]; // 0x3F8(0x30) UNKNOWN PROPERTY
		TWeakObjectPtr CraftingObject; // 0x428(0x8)
		UJunoRecipeDetailsWidget RecipeDetailsWidget; // 0x430(0x8)
		UCommonButtonBase Button_TouchSelect; // 0x438(0x8)
		UCommonButtonBase Button_Back; // 0x440(0x8)
		UCommonButtonBase Button_TouchClose; // 0x448(0x8)
		UGridListView RecipeList; // 0x450(0x8)
		FGameplayTag HeaderPrefix; // 0x458(0x4)
		FGameplayTag FolderPrefix; // 0x45C(0x4)
		bool SkipSortOnInventoryChange; // 0x460(0x1)
		bool EnableFolders; // 0x461(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x462(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr WeakSelectedRecipe; // 0x464(0x8)
		unsigned char UnknownData07_6[0x4]; // 0x46C(0x4) UNKNOWN PROPERTY
		TArray CurrentRecipes; // 0x470(0x10)
		FGameplayTag CurrentFolder; // 0x480(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x484(0x4) UNKNOWN PROPERTY
		UClass FilterTabWidget; // 0x488(0x8)
		FName HeaderEntryType; // 0x490(0x4)
		FName RecipeEntryType; // 0x494(0x4)
		FName FolderEntryType; // 0x498(0x4)
		unsigned char UnknownData09_7[0x44]; // 0x49C(0x44) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoRecipeScreenBase");
			return ret;
		}

		void OnRecipeListUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2D1A0
		void OnCurrentFolderUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2D0C0
		FGameplayTag GetCurrentFolder(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E2CFE0
	};


	// Class JunoUI.JunoPooledWidget
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoPooledWidget : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPooledWidget");
			return ret;
		}
	};


	// Class JunoUI.JunoUIGameFeatureAction_AddHUDMenuTab
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x148 (0x170 - 0x28)
	class UJunoUIGameFeatureAction_AddHUDMenuTab : public UFortUIGameFeatureAction	
	{
	public:
		FName TabNameID; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr TabButtonType; // 0x30(0x20)
		TWeakObjectPtr TabContentType; // 0x50(0x20)
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x70(0xF0)
		FString OptionalBooleanGatingCVar; // 0x160(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoUIGameFeatureAction_AddHUDMenuTab");
			return ret;
		}
	};


	// Class JunoUI.JunoBedAssignmentScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x128 (0x520 - 0x3F8)
	class UJunoBedAssignmentScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		FText AssignPlayerCharacterDisplayText; // 0x400(0x10)
		TWeakObjectPtr AssignPlayerCharacterIcon; // 0x410(0x20)
		UCommonButtonBase BackButton; // 0x430(0x8)
		UCommonButtonBase CloseButton; // 0x438(0x8)
		UCommonListView List_Characters; // 0x440(0x8)
		UJunoBedAssignmentListObject ThisBedListObject; // 0x448(0x8)
		AActor BedObject; // 0x450(0x8)
		UCommonButtonBase Button_Assign; // 0x458(0x8)
		FText AssignButtonText; // 0x460(0x10)
		FText UnassignButtonText; // 0x470(0x10)
		FText ReassignButtonText; // 0x480(0x10)
		FJunoModalDescription ModalDescription; // 0x490(0x68)
		UClass ListHeaderClass; // 0x4F8(0x8)
		FText ThisBedHeaderText; // 0x500(0x10)
		FText VillagersHeaderText; // 0x510(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBedAssignmentScreen");
			return ret;
		}

		void OnStartLoadingData(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2D7C0
		void OnSelectionChanged(UJunoBedAssignmentListObject InSelectedListObject); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2D6E0
		void OnModalConfirmed(); // Flags: Final|Native|Protected 0x7FF414E2D600
		void OnModalCancelled(); // Flags: Final|Native|Protected 0x7FF414E2D520
		void OnDataLoadingComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2D440
		EJunoBedAssignmentActionType GetTypeFromListObject(UJunoBedAssignmentListObject InSelectedListObject); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414E2D360
		bool GetShouldShowModal(UJunoBedAssignmentListObject InSelectedListObject); // Flags: Native|Event|Protected|BlueprintEvent|Const 0x7FF414E2D280
	};


	// Class JunoUI.JunoBuildingScreen
	// Inherited from UJunoRecipeScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x220 (0x700 - 0x4E0)
	class UJunoBuildingScreen : public UJunoRecipeScreenBase	
	{
	public:
		FName PreviewRecipe; // 0x4E0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x4E4(0x4) UNKNOWN PROPERTY
		UCommonButtonBase Button_ItemShop; // 0x4E8(0x8)
		FGameplayTag PrimaryCategoryPrefix; // 0x4F0(0x4)
		FGameplayTag SecondaryCategoryPrefix; // 0x4F4(0x4)
		bool bSortPriorityAscending; // 0x4F8(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x4F9(0x7) UNKNOWN PROPERTY
		UFortTabListWidgetBase TabList_PrimaryCategories; // 0x500(0x8)
		UFortTabListWidgetBase TabList_SecondaryCategories; // 0x508(0x8)
		FDataTableRowHandle CloseScreenAction; // 0x510(0x10)
		float PreviewWaitTime; // 0x520(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x524(0x4) UNKNOWN PROPERTY
		TArray DefaultSortingPreferences; // 0x528(0x10)
		unsigned char UnknownData08_6[0x1B8]; // 0x538(0x1B8) UNKNOWN PROPERTY
		TWeakObjectPtr CraftingCategoryFilterViewModel; // 0x6F0(0x8)
		unsigned char UnknownData09_7[0x8]; // 0x6F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildingScreen");
			return ret;
		}

		void SetIgnoreFilterViewModelChanges(bool bIgnoreViewModelChanges); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E2E6A0
		void OnUpdateFilterBangCount(int32_t NumFilters); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2E5C0
		void OnSecondaryCategoriesChanged(bool bHasSecondaryCategories); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2E4E0
		void OnRecipeHovered(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2E400
		void OnGuidedBuildingSnapsUpdated(TArray& UpdatedSnaps); // Flags: Final|Native|Private|HasOutParms 0x7FF414E2E320
		void OnGuidedBuildingSetComplete(FGuidedBuildingUpdate& UpdateData); // Flags: Final|Native|Private|HasOutParms 0x7FF414E2E240
		void OnFolderHovered(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2E160
		bool HasPreviewRecipe(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E2E080
		void HandleShopClicked(); // Flags: Final|Native|Private 0x7FF414E2DFA0
		void HandleSecondaryTabTransitionComplete(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E2DEC0
		void HandleSecondaryCategorySelected(FName TabID); // Flags: Final|Native|Private 0x7FF414E2DDE0
		void HandlePrimaryCategorySelected(FName TabID); // Flags: Final|Native|Private 0x7FF414E2DD00
		void HandleBackClicked(); // Flags: Native|Protected|BlueprintCallable 0x7FF414E2DC20
		UJunoRecipeListEntry GetWidgetFromItem(UObject Item); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E2DB40
		bool GetSecondaryCategoryUIData(FName PrimaryTabId, FName SecondaryTabId, FJunoCraftingSubCategoryUIDataEntry& OutSecondaryCategoryUIData); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E2DA60
		bool GetPrimaryCategoryUIData(FName PrimaryTabId, FJunoCraftingCategoryUIDataEntry& OutPrimaryCategoryUIData); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E2D980
		AActor GetCraftingObject(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E2D8A0
	};


	// Class JunoUI.JunoBuildMenuFilterListObject
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UJunoBuildMenuFilterListObject : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x44]; // 0x28(0x44) UNKNOWN PROPERTY
		TWeakObjectPtr CraftingCategoryFilterViewModel; // 0x6C(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildMenuFilterListObject");
			return ret;
		}
	};


	// Class JunoUI.JunoBuildMenuFilterTab
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UJunoBuildMenuFilterTab : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UJunoBangWidget JunoBangWidget; // 0x1398(0x8)
		TWeakObjectPtr CraftingCategoryFilterViewModel; // 0x13A0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildMenuFilterTab");
			return ret;
		}
	};


	// Class JunoUI.JunoBuildMenuFilterEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UJunoBuildMenuFilterEntry : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UJunoBuildMenuFilterListObject FilterListObject; // 0x1398(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildMenuFilterEntry");
			return ret;
		}

		void OnSetFilterInfo(UJunoCraftingCategoryFilterViewModel ViewModel, FGameplayTag& FilterId, FText& FilterText, TWeakObjectPtr& FilterIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E2E780
	};


	// Class JunoUI.JunoBuildMenuFilterHeaderEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UJunoBuildMenuFilterHeaderEntry : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UCommonTextBlock Text_Name; // 0x1398(0x8)
		UJunoBuildMenuFilterListObject FilterListObject; // 0x13A0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildMenuFilterHeaderEntry");
			return ret;
		}

		void OnSetHeaderInfo(FText& FilterText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E2E860
	};


	// Class JunoUI.JunoFilterTagWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E0 - 0x2E0)
	class UJunoFilterTagWidget : public UCommonUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoFilterTagWidget");
			return ret;
		}

		void OnSetFilterTagInfo(FText& DisplayText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E2EA20
		void OnSetExtraTagsInfo(int32_t NumExtraTags); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2E940
	};


	// Class JunoUI.JunoBuildMenuFilteringScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x440 - 0x3F8)
	class UJunoBuildMenuFilteringScreen : public UCommonActivatableWidget	
	{
	public:
		UFortTabListWidgetBase TabList_FilterTabs; // 0x3F8(0x8)
		UGridListView GridListView_SubFilters; // 0x400(0x8)
		UDynamicEntryBox DynamicEntryBox_FilterTags; // 0x408(0x8)
		int32_t MaxNumFilterTagsDisplayed; // 0x410(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x414(0x4) UNKNOWN PROPERTY
		UClass FilterTabWidget; // 0x418(0x8)
		FName HeaderEntryType; // 0x420(0x4)
		FName SubCategoryEntryType; // 0x424(0x4)
		TArray CurrentFilterListObjects; // 0x428(0x10)
		TWeakObjectPtr CraftingCategoryFilterViewModel; // 0x438(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildMenuFilteringScreen");
			return ret;
		}

		void HandleFilterTabSelected(FName TabID); // Flags: Final|Native|Private 0x7FF414E2EBE0
		UJunoCraftingCategoryFilterViewModel GetViewModel(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF414E2EB00
	};


	// Class JunoUI.JunoCraftingFolderUIData
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UJunoCraftingFolderUIData : public UDataAsset	
	{
	public:
		TArray Entries; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoCraftingFolderUIData");
			return ret;
		}
	};


	// Class JunoUI.JunoCraftingScreen
	// Inherited from UJunoRecipeScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1E0 (0x6C0 - 0x4E0)
	class UJunoCraftingScreen : public UJunoRecipeScreenBase	
	{
	public:
		unsigned char UnknownData05_3[0x10]; // 0x4E0(0x10) UNKNOWN PROPERTY
		FName SelectedRecipe; // 0x4F0(0x4)
		FName AttachedRecipe; // 0x4F4(0x4)
		ECraftingStationsInventoryState CraftingStationInventoryState; // 0x4F8(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x4F9(0x7) UNKNOWN PROPERTY
		UDynamicUIScene ConfirmationModalScene; // 0x500(0x8)
		FText CancelJobConfirmationTitle; // 0x508(0x10)
		FText CancelJobConfirmationDescription; // 0x518(0x10)
		FText CancelJobConfirmButtonText; // 0x528(0x10)
		FText CancelJobCancelButtonText; // 0x538(0x10)
		FGameplayTag CategoryTagPrefix; // 0x548(0x4)
		FGameplayTag TypeTagPrefix; // 0x54C(0x4)
		UCommonButtonBase Button_Craft; // 0x550(0x8)
		UCommonButtonBase Button_SelectRecipe; // 0x558(0x8)
		UCommonButtonBase Button_QuickDeposit; // 0x560(0x8)
		UCommonButtonBase Button_RemoveAll; // 0x568(0x8)
		UCommonButtonBase Button_WithdrawOutput; // 0x570(0x8)
		UCommonButtonBase Button_Track; // 0x578(0x8)
		UFortTabListWidgetBase TabList_Categories; // 0x580(0x8)
		unsigned char UnknownData07_6[0xA0]; // 0x588(0xA0) UNKNOWN PROPERTY
		UWidget Container_PassiveSlots; // 0x628(0x8)
		UJunoInventoryGroup InventoryGroup_Input; // 0x630(0x8)
		UJunoInventoryGroup InventoryGroup_Output; // 0x638(0x8)
		FDataTableRowHandle ModalConfirmAction; // 0x640(0x10)
		FDataTableRowHandle ModalCancelAction; // 0x650(0x10)
		UJunoPassiveCraftingComponent JunoPassiveCraftingComponent; // 0x660(0x8)
		UJunoControllerComponent_CraftingNetworkEvents CraftingEventComp; // 0x668(0x8)
		unsigned char UnknownData08_6[0x48]; // 0x670(0x48) UNKNOWN PROPERTY
		FName TrackedRecipe; // 0x6B8(0x4)
		unsigned char UnknownData09_7[0x4]; // 0x6BC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoCraftingScreen");
			return ret;
		}

		void OnWithdrawStateUpdated(bool bWithdrawEnabled); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2F740
		void OnUpdateSelectRecipeButton(ESelectRecipeButtonState InButtonState); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2F660
		void OnUpdatePassiveCraftingProgress(int32_t ItemsToCraft); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2F580
		void OnUpdateCraftingStationInventoryState(ECraftingStationsInventoryState StationInventoryState); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2F4A0
		void OnUpdateCraftButton(EJunoCraftButtonState InButtonState); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2F3C0
		void OnTrackedRecipeStateChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2F2E0
		void OnPassiveScreenFocusChange(bool bInputSlotsFocused); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2F200
		void OnItemsTaken(TArray& Items); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E2F120
		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414E2F040
		void HandleCategorySelected(FName TabID); // Flags: Final|Native|Protected 0x7FF414E2EF60
		void HandleAttachNewRecipeConfirmed(); // Flags: Final|Native|Private 0x7FF414E2EE80
		void HandleAttachNewRecipeCancelled(); // Flags: Final|Native|Private 0x7FF414E2EDA0
		void ForceCloseCraftingScreen(); // Flags: Final|Native|Private 0x7FF414E2ECC0
	};


	// Class JunoUI.JunoProcessingInventoryGroup
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x308 - 0x2E0)
	class UJunoProcessingInventoryGroup : public UCommonUserWidget	
	{
	public:
		UClass ProcessingSlotClass; // 0x2E0(0x8)
		FGameplayTag GroupTag; // 0x2E8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY
		TArray TrackedInventorySlots; // 0x2F0(0x10)
		UUniformGridPanel GridPanel_Slots; // 0x300(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoProcessingInventoryGroup");
			return ret;
		}

		UJunoProcessingSlot GetInventorySlot(int32_t RowIndex, int32_t ColumnIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E2F820
	};


	// Class JunoUI.JunoProcessingSlot
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xF0 (0x3D0 - 0x2E0)
	class UJunoProcessingSlot : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x2E0(0x10) UNKNOWN PROPERTY
		AActor InventoryOwner; // 0x2F0(0x8)
		FJunoItemSlot SlotData; // 0x2F8(0x50)
		unsigned char UnknownData03_6[0x8]; // 0x348(0x8) UNKNOWN PROPERTY
		UFortLazyImage Image_SlotIcon; // 0x350(0x8)
		UImage Image_Progress; // 0x358(0x8)
		FCraftingProcess CurrentCraftingProcess; // 0x360(0x70)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoProcessingSlot");
			return ret;
		}

		void OnNotifySlotReleased(); // Flags: Event|Public|BlueprintEvent 0x7FF414E2FBA0
		void OnItemRemoved(); // Flags: Event|Public|BlueprintEvent 0x7FF414E2FAC0
		void OnItemAdded(); // Flags: Event|Public|BlueprintEvent 0x7FF414E2F9E0
		UFortItem GetRepresentedItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E2F900
	};


	// Class JunoUI.JunoInventoryGroup
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x368 - 0x2E0)
	class UJunoInventoryGroup : public UCommonUserWidget	
	{
	public:
		TArray TrackedInventorySlots; // 0x2E0(0x10)
		TArray CraftingInputInventorySlots; // 0x2F0(0x10)
		unsigned char UnknownData02_6[0x18]; // 0x300(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr GroupIcon; // 0x318(0x20)
		unsigned char UnknownData03_6[0x10]; // 0x338(0x10) UNKNOWN PROPERTY
		UUniformGridPanel GridPanel_Slots; // 0x348(0x8)
		UCommonButtonBase Button_Sort; // 0x350(0x8)
		UClass InventorySlotClass; // 0x358(0x8)
		UClass CraftingInputInventorySlotClass; // 0x360(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInventoryGroup");
			return ret;
		}

		void OnSetGroupName(FText& InGroupName); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E2FE40
		UJunoInventorySlot GetInventorySlot(int32_t RowIndex, int32_t ColumnIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E2FD60
		UJunoInventorySlot GetFirstSlot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E2FC80
	};


	// Class JunoUI.JunoInventoryScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1F8 (0x5F0 - 0x3F8)
	class UJunoInventoryScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData05_3[0x30]; // 0x3F8(0x30) UNKNOWN PROPERTY
		FText MoveAllProgressTitle; // 0x428(0x10)
		FText MoveAllProgressDescription; // 0x438(0x10)
		FText MergeAllProgressTitle; // 0x448(0x10)
		FText MergeAllProgressDescription; // 0x458(0x10)
		unsigned char UnknownData06_6[0x8]; // 0x468(0x8) UNKNOWN PROPERTY
		UJunoInventorySlot LastSelectedSlot; // 0x470(0x8)
		UJunoInventorySlot LastHoveredSlot; // 0x478(0x8)
		UJunoInventorySlot LastClickedSlot; // 0x480(0x8)
		TWeakObjectPtr WeakOtherInventoryActor; // 0x488(0x8)
		UJunoInventoryGroup Group_ObjectInventory; // 0x490(0x8)
		UCommonButtonGroupBase ButtonGroup_AllSlots; // 0x498(0x8)
		UClass InventoryGroupClass; // 0x4A0(0x8)
		UCommonButtonBase Button_Back; // 0x4A8(0x8)
		UCommonButtonBase WBP_Juno_CloseButton_Touch; // 0x4B0(0x8)
		UCommonButtonBase Button_MoreActions; // 0x4B8(0x8)
		UCommonButtonBase Button_Equip; // 0x4C0(0x8)
		UCommonButtonBase Button_Unequip; // 0x4C8(0x8)
		UCommonButtonBase Button_MoveToInventory; // 0x4D0(0x8)
		UCommonButtonBase Button_MoveToMainHand; // 0x4D8(0x8)
		UCommonButtonBase Button_Drop; // 0x4E0(0x8)
		UCommonButtonBase Button_DropOne; // 0x4E8(0x8)
		UCommonButtonBase Button_MoveToOffHand; // 0x4F0(0x8)
		UCommonButtonBase Button_TakeAll; // 0x4F8(0x8)
		UCommonButtonBase Button_SmartDeposit; // 0x500(0x8)
		UCommonButtonBase Button_TakeStack; // 0x508(0x8)
		UCommonButtonBase Button_DepositStack; // 0x510(0x8)
		FDataTableRowHandle CancelAction; // 0x518(0x10)
		FDataTableRowHandle BackAction; // 0x528(0x10)
		FDataTableRowHandle CloseScreenAction; // 0x538(0x10)
		FDataTableRowHandle SortAction; // 0x548(0x10)
		UJunoPlayerInventoryContainer Container_PlayerInventory; // 0x558(0x8)
		UJunoInventoryGroup Group_PlayerGear; // 0x560(0x8)
		UNamedSlot NamedSlot_ObjectInventory; // 0x568(0x8)
		float ItemsModificationProgressMinimumWaitTimeSeconds; // 0x570(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x574(0x4) UNKNOWN PROPERTY
		TArray SortOrder; // 0x578(0x10)
		unsigned char UnknownData08_6[0x58]; // 0x588(0x58) UNKNOWN PROPERTY
		UJunoInventoryDragAndDropHandler JunoInventoryDragAndDropHandler; // 0x5E0(0x8)
		unsigned char UnknownData09_7[0x8]; // 0x5E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInventoryScreen");
			return ret;
		}

		void OnSlotItemSelected(UFortItem Item); // Flags: Event|Protected|BlueprintEvent 0x7FF414E30000
		void OnInventoryObjectUpdated(bool bInventoryObjectPresent); // Flags: Event|Protected|BlueprintEvent 0x7FF414E2FF20
	};


	// Class JunoUI.JunoHudMenu
	// Inherited from UJunoHudMenuBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x440 - 0x430)
	class UJunoHudMenu : public UJunoHudMenuBase	
	{
	public:
		UCommonButtonBase Button_ItemShop; // 0x430(0x8)
		FName DefaultSelectedTabId; // 0x438(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x43C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoHudMenu");
			return ret;
		}

		bool ShouldShowPlayersTab(); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF414E300E0
	};


	// Class JunoUI.JunoInventoryDragAndDropHandler
	// Inherited from UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UJunoInventoryDragAndDropHandler : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x80]; // 0x28(0x80) UNKNOWN PROPERTY
		TWeakObjectPtr WeakButtonGroup_InventorySlots; // 0xA8(0x8)
		TWeakObjectPtr WeakOwningPlayer; // 0xB0(0x8)
		unsigned char UnknownData03_6[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		UJunoInventorySlot SourceInventorySlot; // 0xC0(0x8)
		UJunoInventorySlot DestinationInventorySlot; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInventoryDragAndDropHandler");
			return ret;
		}
	};


	// Class JunoUI.JunoMapLegendWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UJunoMapLegendWidget : public UCommonUserWidget	
	{
	public:
		int32_t MaxDisplayedTeamPlayers; // 0x2E0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		UDynamicEntryBox EntryBox_TeamPlayers; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapLegendWidget");
			return ret;
		}

		void OnUpdateTeamPlayerEntry(UUserWidget EntryWidget, FUniqueNetIdRepl PlayerUniqueNetId, FString PlayerName); // Flags: Event|Protected|BlueprintEvent 0x7FF414E301C0
	};


	// Class JunoUI.JunoMapMarkerCustomizationEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x1400 - 0x1390)
	class UJunoMapMarkerCustomizationEntry : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x1390(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr Icon; // 0x13A0(0x20)
		unsigned char UnknownData04_6[0x10]; // 0x13C0(0x10) UNKNOWN PROPERTY
		UFortLazyImage Image_MarkerIcon; // 0x13D0(0x8)
		UBorder ColorBorder; // 0x13D8(0x8)
		UImage Checkmark; // 0x13E0(0x8)
		FLinearColor IconEntryBackgroundColor; // 0x13E8(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x13F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapMarkerCustomizationEntry");
			return ret;
		}

		void OnEntryInitialized(FJunoMapMarkerEntryInitData EntryInitData); // Flags: Event|Protected|BlueprintEvent 0x7FF414E302A0
	};


	// Class JunoUI.JunoMapMarkerCustomizationScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x470 - 0x3F8)
	class UJunoMapMarkerCustomizationScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UJunoMapMarkerCustomizationEntry SelectedColor; // 0x400(0x8)
		UJunoMapMarkerCustomizationEntry SelectedIcon; // 0x408(0x8)
		UClass EntryClass; // 0x410(0x8)
		FName ColorParamName; // 0x418(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x41C(0x4) UNKNOWN PROPERTY
		UDynamicEntryBox ColorPanel; // 0x420(0x8)
		UDynamicEntryBox IconPanel; // 0x428(0x8)
		UCommonButtonBase ConfirmButton; // 0x430(0x8)
		UCommonButtonGroupBase ButtonGroup_AllIconSlots; // 0x438(0x8)
		UCommonButtonGroupBase ButtonGroup_AllColorSlots; // 0x440(0x8)
		UFortLazyImage Image_PreviewMarker; // 0x448(0x8)
		UJunoMapMarkerCustomizationInitData InitData; // 0x450(0x8)
		unsigned char UnknownData05_7[0x18]; // 0x458(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapMarkerCustomizationScreen");
			return ret;
		}

		void SetPreviewMarkerMaterial(); // Flags: Event|Public|BlueprintEvent 0x7FF414E30540
		void SetMarkerNameText(FText& Name); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E30460
		FText GetRandomName(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E30380
	};


	// Class JunoUI.JunoVillageScreenBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x270 (0x668 - 0x3F8)
	class UJunoVillageScreenBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x30]; // 0x3F8(0x30) UNKNOWN PROPERTY
		UCommonButtonBase Button_Back; // 0x428(0x8)
		UCommonButtonBase Button_Close; // 0x430(0x8)
		FJunoVillageUIData VillageUIData; // 0x438(0x218)
		AJunoCampActor CampActor; // 0x650(0x8)
		UJunoCampMembershipActorComponent CampMembershipActorComponent; // 0x658(0x8)
		UJunoAwesomeLevelComponent AwesomeLevelComponent; // 0x660(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoVillageScreenBase");
			return ret;
		}

		void OnVillageDataChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E30B60
		void OnAwesomePointsModified(FJunoAwesomePointModificationData& PointModificationData); // Flags: RequiredAPI|Native|Protected|HasOutParms 0x7FF414E30A80
		void OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& LevelChangeData); // Flags: RequiredAPI|Native|Protected|HasOutParms 0x7FF414E309A0
		bool GetIsTownbuilder(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E308C0
		bool GetIsOsirisCamp(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E307E0
		void BP_OnAwesomePointsChanged(FJunoAwesomePointModificationData& Data); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E30700
		void BP_OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& Data); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E30620
	};


	// Class JunoUI.JunoVillageUIDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UJunoVillageUIDataAsset : public UDataAsset	
	{
	public:
		TMap PerkTagToIcon; // 0x30(0x50)
		TMap RoleTagToIcon; // 0x80(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoVillageUIDataAsset");
			return ret;
		}

		TWeakObjectPtr FindRoleImage(FGameplayTagContainer& InTagContainer); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E30D20
		TWeakObjectPtr FindPerkImage(FGameplayTagContainer& InTagContainer); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E30C40
	};


	// Class JunoUI.JunoVillageUpgradeCelebrationScreen
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x320 - 0x320)
	class UJunoVillageUpgradeCelebrationScreen : public UFortHUDElementWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoVillageUpgradeCelebrationScreen");
			return ret;
		}
	};


	// Class JunoUI.JunoGuidedBuildingHudStateWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x330 - 0x2E0)
	class UJunoGuidedBuildingHudStateWidget : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr CurrentGuidedBuildingActor; // 0x2E0(0x8)
		float AutoHideTimeLength; // 0x2E8(0x4)
		unsigned char UnknownData01_7[0x44]; // 0x2EC(0x44) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoGuidedBuildingHudStateWidget");
			return ret;
		}

		void ShowWidget(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E31420
		void OnStageComplete(FGuidedBuildingUpdate& UpdateData); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E31340
		void OnSnapsUpdated(TArray& UpdatedSnaps); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E31260
		void OnSetComplete(FGuidedBuildingUpdate& UpdateData); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E31180
		void OnSectionComplete(FGuidedBuildingUpdate& UpdateData); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E310A0
		void OnCurrentStageUpdate(FGuidedBuildingUpdate& UpdateData); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E30FC0
		void OnAutoHideTimereFinished(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E30EE0
		void HideWidget(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E30E00
	};


	// Class JunoUI.JunoGameEventStreamEntryWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C8 - 0x2B8)
	class UJunoGameEventStreamEntryWidget : public UUserWidget	
	{
	public:
		FMulticastInlineDelegate OnHideAnimComplete; // 0x2B8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoGameEventStreamEntryWidget");
			return ret;
		}

		void OnInitGameEventEntry(FJunoEvent_GameEventMessage& GameEventMessage); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4140FA038
		void OnHideExpiredGameEvent(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140F9F58
		void OnHideAnimCompleteDelegate__DelegateSignature(UJunoGameEventStreamEntryWidget EntryWidget); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F9E78
	};


	// Class JunoUI.JunoGameEventStreamWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x360 - 0x320)
	class UJunoGameEventStreamWidget : public UFortHUDElementWidget	
	{
	public:
		TArray GameEvents; // 0x320(0x10)
		unsigned char UnknownData02_6[0x1C]; // 0x330(0x1C) UNKNOWN PROPERTY
		int32_t MaxDisplayedItems; // 0x34C(0x4)
		float ExpirationTime; // 0x350(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x354(0x4) UNKNOWN PROPERTY
		UDynamicEntryBox EntryBox_GameEvents; // 0x358(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoGameEventStreamWidget");
			return ret;
		}

		void OnInitGameEventEntry(UUserWidget EntryWidget, FJunoEvent_GameEventMessage& GameEventMessage); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E317A0
		void OnHideExpiredGameEvent(UUserWidget EntryWidget); // Flags: Event|Protected|BlueprintEvent 0x7FF414E316C0
		void OnActiveGameEventsPresent(bool bHasActiveGameEvents); // Flags: Event|Protected|BlueprintEvent 0x7FF414E315E0
		void HandleEntryHideAnimComplete(UJunoGameEventStreamEntryWidget EntryWidget); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E31500
	};


	// Class JunoUI.JunoAnimatedProgressBar
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x100 (0x3E0 - 0x2E0)
	class UJunoAnimatedProgressBar : public UCommonUserWidget	
	{
	public:
		FSlateBrush ProgressMaterialBrush; // 0x2E0(0xB0)
		FName FillEndParamName; // 0x390(0x4)
		FName FillStartParamName; // 0x394(0x4)
		FName FillPercentParamName; // 0x398(0x4)
		FName DeltaStartParamName; // 0x39C(0x4)
		FName DeltaEndParamName; // 0x3A0(0x4)
		FName DeltaPercentParamName; // 0x3A4(0x4)
		UFortLazyImage Image_ProgressBar; // 0x3A8(0x8)
		UMaterialInstanceDynamic CachedMID; // 0x3B0(0x8)
		UWidgetAnimation BoundAnim_FillBar; // 0x3B8(0x8)
		UWidgetAnimation BoundAnim_DeltaBar; // 0x3C0(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x3C8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoAnimatedProgressBar");
			return ret;
		}

		void SetFill(float Fill); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E31B20
		void SetDelta(float Fill); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E31A40
		UMaterialInstanceDynamic GetBarDynamicMaterial(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E31960
		void AnimateDeltaFromCurrent(float End, float AnimSpeed); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E31880
	};


	// Class JunoUI.JunoEquipmentWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x380 - 0x320)
	class UJunoEquipmentWidget : public UFortHUDElementWidget	
	{
	public:
		UJunoInventorySlot InventorySlot_Item; // 0x320(0x8)
		FJunoItemSlot ItemSlotData; // 0x328(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x378(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoEquipmentWidget");
			return ret;
		}

		void OnSlotItemChanged(EJunoItemChangeType ChangeType, UFortItem SlotItem); // Flags: Event|Protected|BlueprintEvent 0x7FF414E31C00
	};


	// Class JunoUI.JunoGliderWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x338 - 0x320)
	class UJunoGliderWidget : public UFortHUDElementWidget	
	{
	public:
		UWidget MainContent; // 0x320(0x8)
		UOverlay Overlay_MainContent; // 0x328(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x330(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoGliderWidget");
			return ret;
		}
	};


	// Class JunoUI.JunoIndicatorLayerManagerWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D0 (0x4F0 - 0x320)
	class UJunoIndicatorLayerManagerWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData06_3[0x8]; // 0x320(0x8) UNKNOWN PROPERTY
		UFortActorCanvas GeneralIndicators; // 0x328(0x8)
		unsigned char UnknownData07_6[0x8]; // 0x330(0x8) UNKNOWN PROPERTY
		int32_t PlayerIndicatorPoolSize; // 0x338(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x33C(0x4) UNKNOWN PROPERTY
		FUserWidgetPool IndicatorPool; // 0x340(0x88)
		UJunoLocalPlayerViewModel LocalPlayerViewModel; // 0x3C8(0x8)
		UClass PlayerIndicatorClass; // 0x3D0(0x8)
		UFortActorCanvas PlayerIndicators; // 0x3D8(0x8)
		float MinimumInFocusRadius; // 0x3E0(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x3E4(0x4) UNKNOWN PROPERTY
		TMap IndicatorClasses; // 0x3E8(0x50)
		UClass BuildingHealthWidgetClass; // 0x438(0x8)
		unsigned char UnknownData10_6[0xA0]; // 0x440(0xA0) UNKNOWN PROPERTY
		float BuildingHealthDisplayDuration; // 0x4E0(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x4E4(0x4) UNKNOWN PROPERTY
		UFortActorIndicatorWidget BuildingHealthIndicatorWidget; // 0x4E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoIndicatorLayerManagerWidget");
			return ret;
		}
	};


	// Class JunoUI.JunoInteractionIndicatorWidget
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x3E8 - 0x3C8)
	class UJunoInteractionIndicatorWidget : public UFortActorIndicatorWidget	
	{
	public:
		UFortInteractContextInfo CurrentContextInfo; // 0x3C8(0x8)
		TWeakObjectPtr LastReceivingActor; // 0x3D0(0x8)
		UFortKeybindWidget KeybindWidget; // 0x3D8(0x8)
		UCommonTextBlock Text_KeyBindName; // 0x3E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInteractionIndicatorWidget");
			return ret;
		}

		void OnShowPickup(AFortPickup InCurrentPickup); // Flags: Event|Protected|BlueprintEvent 0x7FF414E31EA0
		void OnShowBasicInteractionWithSecondary(FText& Description, FLinearColor DescriptionColor, FText& SecondaryDescription, FLinearColor SecondaryDescriptionColor, int32_t InteractionCount, bool bPlayAnim); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414E31DC0
		void OnShowBasicInteraction(FText& Description, FLinearColor DescriptionColor, int32_t InteractionCount, bool bPlayAnim); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414E31CE0
	};


	// Class JunoUI.JunoLocalPlayerViewModel
	// Inherited from UFortPlayerViewModel -> UObject
	// Size: 0x38 (0x1C0 - 0x188)
	class UJunoLocalPlayerViewModel : public UFortPlayerViewModel	
	{
	public:
		TWeakObjectPtr TrackedPlayerController; // 0x188(0x8)
		TArray CachedPlayerStates; // 0x190(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x1A0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoLocalPlayerViewModel");
			return ret;
		}
	};


	// Class JunoUI.JunoMapViewModel
	// Inherited from UFortPerUserViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x58 (0xC8 - 0x70)
	class UJunoMapViewModel : public UFortPerUserViewModel	
	{
	public:
		TMap TeamPlayerAvatarViewModels; // 0x70(0x50)
		UFortPlayerAvatarViewModel LocalPlayerAvatarViewModel; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapViewModel");
			return ret;
		}
	};


	// Class JunoUI.JunoNotificationWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x450 - 0x3F8)
	class UJunoNotificationWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x40]; // 0x3F8(0x40) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PrioData; // 0x438(0x2)
		unsigned char UnknownData03_6[0x6]; // 0x43A(0x6) UNKNOWN PROPERTY
		TArray QueuedNotifications; // 0x440(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoNotificationWidget");
			return ret;
		}

		void OnNotificationFinished(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E32060
		void BP_DisplayNotification(FJunoNotificationData& NotificationData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E31F80
	};


	// Class JunoUI.JunoNotificationHostWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x118 (0x438 - 0x320)
	class UJunoNotificationHostWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData02_3[0x48]; // 0x320(0x48) UNKNOWN PROPERTY
		UFortPrioritizedWidgetSwitcher WidgetSwitcher; // 0x368(0x8)
		TMap TagToWidgetClassMap; // 0x370(0x50)
		TMap TagToWidgetMap; // 0x3C0(0x50)
		FGameplayTagContainer RecipeFilterTags; // 0x410(0x20)
		FFortPrioritizedWidgetData PrioritizationData; // 0x430(0x2)
		unsigned char UnknownData03_7[0x6]; // 0x432(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoNotificationHostWidget");
			return ret;
		}

		bool ShouldSetHasActiveContent(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E32140
	};


	// Class JunoUI.JunoOffhandWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x368 - 0x320)
	class UJunoOffhandWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x320(0x18) UNKNOWN PROPERTY
		UJunoQuickbarItemRules QuickBarTouchItemRules; // 0x338(0x8)
		UDynamicEntryBox EntryBox_Slots; // 0x340(0x8)
		TArray CachedOffhandWidgetSlots; // 0x348(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x358(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoOffhandWidget");
			return ret;
		}
	};


	// Class JunoUI.JunoOffhandWidgetSlot
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x388 - 0x320)
	class UJunoOffhandWidgetSlot : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x320(0x10) UNKNOWN PROPERTY
		FJunoItemSlot ItemSlotData; // 0x330(0x50)
		UJunoInventorySlot InventorySlot_Item; // 0x380(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoOffhandWidgetSlot");
			return ret;
		}

		void OnSlotItemChanged(EJunoItemChangeType ChangeType, UFortItem SlotItem); // Flags: Event|Protected|BlueprintEvent 0x7FF414E32220
	};


	// Class JunoUI.JunoPickupStream
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB8 (0x3D8 - 0x320)
	class UJunoPickupStream : public UFortHUDElementWidget	
	{
	public:
		FUserWidgetPool PickupDisplayPool; // 0x320(0x88)
		unsigned char UnknownData03_6[0x10]; // 0x3A8(0x10) UNKNOWN PROPERTY
		int32_t MaxDisplayedItems; // 0x3B8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x3BC(0x4) UNKNOWN PROPERTY
		UClass PickupEntryWidgetClass; // 0x3C0(0x8)
		float ExpirationTime; // 0x3C8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x3CC(0x4) UNKNOWN PROPERTY
		UVerticalBox VerticalBox_PickupMessages; // 0x3D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPickupStream");
			return ret;
		}

		void RefreshPickupEntry(UUserWidget EntryWidget, TWeakObjectPtr& Icon, FText& DisplayName, int32_t Count, int32_t TotalInventoryCount, EFortRarity ItemRarity, EJunoPickupStreamAnim AnimType); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E32680
		void OnHideExpiredPickup(UUserWidget EntryWidget); // Flags: Event|Protected|BlueprintEvent 0x7FF414E325A0
		void OnActivePickupsPresent(bool bHasActivePickups); // Flags: Event|Protected|BlueprintEvent 0x7FF414E324C0
		void HandleItemPickedUp(UFortWorldItem WorldItem, int32_t Count); // Flags: Final|Native|Protected 0x7FF414E323E0
		void HandleEntryHideAnimComplete(UUserWidget EntryWidget); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E32300
	};


	// Class JunoUI.JunoPlayerHitpointWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x338 - 0x320)
	class UJunoPlayerHitpointWidget : public UFortHUDElementWidget	
	{
	public:
		EJunoHealthBarType BarType; // 0x320(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x321(0x3) UNKNOWN PROPERTY
		float ValueCurrent; // 0x324(0x4)
		float ValueLast; // 0x328(0x4)
		float ValueMax; // 0x32C(0x4)
		UJunoLocalPlayerViewModel JunoPlayerViewModel; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerHitpointWidget");
			return ret;
		}

		void OnValueChangedWithReason(EFortHitPointModificationReason Reason); // Flags: Event|Protected|BlueprintEvent 0x7FF414E32AE0
		void OnMaxValueChanged(float Value); // Flags: Event|Protected|BlueprintEvent 0x7FF414E32A00
		void OnDeltaChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E32920
		float GetLastValuePercentage(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E32840
		float GetCurrentValuePercentage(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E32760
	};


	// Class JunoUI.JunoPlayerIndicatorWidget
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x3F8 - 0x3C8)
	class UJunoPlayerIndicatorWidget : public UFortActorIndicatorWidget	
	{
	public:
		bool bCollapseInfoOnClamp; // 0x3C8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x3C9(0x3) UNKNOWN PROPERTY
		float MinDistanceToDisplayInfo; // 0x3CC(0x4)
		unsigned char UnknownData04_6[0x8]; // 0x3D0(0x8) UNKNOWN PROPERTY
		UCommonTextBlock Text_Distance; // 0x3D8(0x8)
		unsigned char UnknownData05_7[0x18]; // 0x3E0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerIndicatorWidget");
			return ret;
		}

		void OnTargetPlayerChanged(AFortPlayerStateAthena TargetedPlayer); // Flags: Event|Protected|BlueprintEvent 0x7FF414E32F40
		void OnInFocusStateChanged(bool bInInFocus); // Flags: Event|Protected|BlueprintEvent 0x7FF414E32E60
		void OnClampedStatusChanged(bool bInIsClamped); // Flags: Event|Protected|BlueprintEvent 0x7FF414E32D80
		void HandlePlayerStatePawnDied(FPawnDamageData& PawnDamageInfo); // Flags: Final|Native|Private|HasOutParms 0x7FF414E32CA0
		void HandleCurrentPawnChanged(); // Flags: Final|Native|Private 0x7FF414E32BC0
	};


	// Class JunoUI.JunoQuickbar
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC0 (0x3E0 - 0x320)
	class UJunoQuickbar : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData03_3[0x18]; // 0x320(0x18) UNKNOWN PROPERTY
		UJunoQuickbarItemRules QuickBarTouchItemRules; // 0x338(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x340(0x8) UNKNOWN PROPERTY
		UDynamicEntryBox EntryBox_Slots; // 0x348(0x8)
		TArray CachedQuickbarSlots; // 0x350(0x10)
		unsigned char UnknownData05_7[0x80]; // 0x360(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoQuickbar");
			return ret;
		}

		void OnQuickbarSlotChanged(int32_t SelectedSlotIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414E33100
		void HandleClientStopSmartObjectInteraction(); // Flags: Final|Native|Protected 0x7FF414E33020
	};


	// Class JunoUI.JunoQuickbarItemRules
	// Inherited from UDataAsset -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UJunoQuickbarItemRules : public UDataAsset	
	{
	public:
		FGameplayTagQuery CanBeUsedInQuickbarQuery; // 0x30(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoQuickbarItemRules");
			return ret;
		}
	};


	// Class JunoUI.JunoQuickbarMobileContainer
	// Inherited from UFortMobileHUDElement -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x370 - 0x350)
	class UJunoQuickbarMobileContainer : public UFortMobileHUDElement	
	{
	public:
		UJunoQuickbar JunoQuickbar; // 0x350(0x8)
		UJunoOffhandWidget JunoOffhandWidget; // 0x358(0x8)
		UJunoInventoryDragAndDropHandler JunoInventoryDragAndDropHandler; // 0x360(0x8)
		UCommonButtonGroupBase ButtonGroup_AllSlots; // 0x368(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoQuickbarMobileContainer");
			return ret;
		}
	};


	// Class JunoUI.JunoQuickbarSlot
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x308 - 0x2E0)
	class UJunoQuickbarSlot : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x2E0(0x10) UNKNOWN PROPERTY
		UJunoInventorySlot InventorySlot_Item; // 0x2F0(0x8)
		UFortKeybindWidget Keybind_Keyboard; // 0x2F8(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x300(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoQuickbarSlot");
			return ret;
		}

		void OnSlotItemChangeFailed(); // Flags: Event|Public|BlueprintEvent 0x7FF414E33640
		void OnSlotItemChanged(EJunoItemChangeType ChangeType); // Flags: Event|Protected|BlueprintEvent 0x7FF414E33560
		void OnSlotInitialized(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E33480
		void OnSetQuickbarSlotSelected(bool bInSelected, FText& ItemName); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E333A0
		void OnPrebuildStateChanged(bool bInEnabled); // Flags: Event|Protected|BlueprintEvent 0x7FF414E332C0
		UFortItem GetSlotItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E331E0
	};


	// Class JunoUI.JunoReticleWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x328 - 0x320)
	class UJunoReticleWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x320(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoReticleWidget");
			return ret;
		}

		void OnWeaponFired(); // Flags: Event|Public|BlueprintEvent 0x7FF414E340C0
		void OnReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType); // Flags: Event|Public|BlueprintEvent 0x7FF414E33FE0
		void OnDurabilityChanged(float NewDurability); // Flags: Event|Public|BlueprintEvent 0x7FF414E33F00
		void OnDisplayHitMarker(FGameplayTagContainer& HitTags, TEnumAsByte DamageZone); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E33E20
		void OnAmmoChanged(int32_t MagazineAmmoRemaining, int32_t TotalAmmoRemaining); // Flags: Event|Public|BlueprintEvent 0x7FF414E33D40
		void HandleWeaponFire(AFortWeapon Weapon); // Flags: Final|Native|Protected 0x7FF414E33C60
		void HandleLocalReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType); // Flags: Final|Native|Protected 0x7FF414E33B80
		void HandleAmmoChanged(int32_t MagazineAmmoRemaining, int32_t TotalAmmoRemaining); // Flags: Final|Native|Protected 0x7FF414E33AA0
		float GetWeaponSpread(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E339C0
		float GetSpreadToFieldOfViewRatio(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E338E0
		AFortWeapon GetFortWeapon(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E33800
		UFortItem GetFortItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E33720
	};


	// Class JunoUI.JunoTrackRecipeWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x3A0 - 0x320)
	class UJunoTrackRecipeWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0x320(0x20) UNKNOWN PROPERTY
		UDynamicEntryBox EntryBox_Ingredients; // 0x340(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x348(0x8) UNKNOWN PROPERTY
		TMap JunoIngredientWidgets; // 0x350(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoTrackRecipeWidget");
			return ret;
		}

		void OnStopTrackingRecipe(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E34440
		void OnRecipeCompletionChanged(bool bIsRecipeComplete); // Flags: Event|Protected|BlueprintEvent 0x7FF414E34360
		bool IsTrackingRecipe(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E34280
		void BP_OnTrackedRecipeChanged(FText& CraftedItem, TWeakObjectPtr& CraftedItemIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E341A0
	};


	// Class JunoUI.GFA_JunoUI_OverrideReticle
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UGFA_JunoUI_OverrideReticle : public UFortUIGameFeatureAction	
	{
	public:
		TMap ReticleOverrides; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.GFA_JunoUI_OverrideReticle");
			return ret;
		}
	};


	// Class JunoUI.JunoReticleContainerWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x348 - 0x320)
	class UJunoReticleContainerWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x320(0x8) UNKNOWN PROPERTY
		UCommonVisibilitySwitcher ReticleSwitcher; // 0x328(0x8)
		UNamedSlot ReticleOverrideSlot; // 0x330(0x8)
		UWidget FortReticleWidget; // 0x338(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x340(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoReticleContainerWidget");
			return ret;
		}

		void HandleWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PreviousWeapon); // Flags: Final|Native|Protected 0x7FF414E34600
		void HandlePossessedPawnChanged(APawn OldPawn, APawn NewPawn); // Flags: Final|Native|Protected 0x7FF414E34520
	};


	// Class JunoUI.JunoReticleOverrideSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoReticleOverrideSubsystem : public UEngineSubsystem	
	{
	public:
		TMap ActiveReticleOverrides; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoReticleOverrideSubsystem");
			return ret;
		}
	};


	// Class JunoUI.JunoDynamicUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x380 (0x630 - 0x2B0)
	class AJunoDynamicUIDirector : public ADynamicUIDirectorBase	
	{
	public:
		UJunoLocalPlayerViewModel PlayerViewModel; // 0x2B0(0x8)
		UJunoAsyncAction_WaitForEventRouter WaitForEventRouterAction; // 0x2B8(0x8)
		UClass LocalPlayerUIMapStateClass; // 0x2C0(0x8)
		UJunoLocalPlayerUIMapState LocalPlayerUIMapState; // 0x2C8(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x2D0(0x8) UNKNOWN PROPERTY
		FGameplayTag LastBuildingRecipeTag; // 0x2D8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x2DC(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer HideWithMenuTags; // 0x2E0(0x20)
		FGameplayTagContainer DisallowMenuTags; // 0x300(0x20)
		TArray WidgetPoolInitDataArray; // 0x320(0x10)
		UJunoTaggedWidgetData TaggedWidgetSceneData; // 0x330(0x8)
		FJunoPendingActionSetupData PendingActionSetupData; // 0x338(0x88)
		TMap TaggedWidgetScenes; // 0x3C0(0x50)
		TMap TaggedWidgets; // 0x410(0x50)
		FJunoWidgetPool WidgetPool; // 0x460(0xB0)
		unsigned char UnknownData05_7[0x120]; // 0x510(0x120) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoDynamicUIDirector");
			return ret;
		}

		void StartRegisteringUI(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E35160
		void OpenStandaloneMenuScene(FJunoWidgetSceneAndIndex WidgetSceneAndIndex, UObject BoundObject); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E35080
		void OpenHudMenuScene(FJunoWidgetSceneAndIndex WidgetSceneAndIndex, UJunoHudMenuBaseInitData HudMenuData); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E34FA0
		void OnIsMobileHUDShowingChanged(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E34EC0
		void OnEnteredConversation(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E34DE0
		void HandlePendingActionEventCleared(); // Flags: Final|Native|Private 0x7FF414E34D00
		void HandleHudMenuSceneClosed(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E34C20
		bool GetIsMobileHUDShowing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E34B40
		bool FindTagDrivenWidget(FGameplayTag& tag, UClass& OutWidgetClass); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E34A60
		void FindTagDrivenSceneByTagContainer(FGameplayTagContainer& TagContainer); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E34980
		bool FindTagDrivenScene(FGameplayTag& tag, FJunoWidgetSceneAndIndex& OutWidgetSceneAndIndex); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E348A0
		void AttemptRemoveMenuScene(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E347C0
		void AckPendingAction(); // Flags: Final|Native|Private 0x7FF414E346E0
	};


	// Class JunoUI.JunoDynamicUIDirectorComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UJunoDynamicUIDirectorComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		UJunoTaggedWidgetData TaggedWidgetSceneData; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoDynamicUIDirectorComponent");
			return ret;
		}

		void UpdateHUDLayoutContexts(FGameplayTagContainer ContextsToAdd, FGameplayTagContainer ContextsToRemove); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E356A0
		void OnStartRegisteringUI(); // Flags: Event|Public|BlueprintEvent 0x7FF414E355C0
		void OnIsMobileHUDShowingChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414E354E0
		APlayerController GetOwningLocalPlayerController(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E35400
		AJunoDynamicUIDirector GetOwningJunoDirector(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E35320
		bool GetIsMobileHUDShowing(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E35240
	};


	// Class JunoUI.JunoNullHUD
	// Inherited from UFortNullHUD -> UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x458 - 0x450)
	class UJunoNullHUD : public UFortNullHUD	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x450(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoNullHUD");
			return ret;
		}
	};


	// Class JunoUI.JunoCheatManager_UI
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoCheatManager_UI : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoCheatManager_UI");
			return ret;
		}

		void JunoBuildMenuFilterResetAll(); // Flags: Final|Exec|Native|Public 0x7FF414E35940
		void JunoBuildMenuFilterRemove(FString InFilterTags); // Flags: Final|Exec|Native|Public 0x7FF414E35860
		void JunoBuildMenuFilterAdd(FString InFilterTags); // Flags: Final|Exec|Native|Public 0x7FF414E35780
	};


	// Class JunoUI.JunoPlayerHealthViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class UJunoPlayerHealthViewModel : public UMVVMViewModelBase	
	{
	public:
		float CurrentRawValue; // 0x68(0x4)
		float PreviousRawValue; // 0x6C(0x4)
		float MaxRawValue; // 0x70(0x4)
		float BonusRawValue; // 0x74(0x4)
		float CurrentPctValue; // 0x78(0x4)
		float PreviousPctValue; // 0x7C(0x4)
		bool bLowHealth; // 0x80(0x1)
		unsigned char UnknownData02_6[0xF]; // 0x81(0xF) UNKNOWN PROPERTY
		TWeakObjectPtr PlayerState; // 0x90(0x8)
		float UpdatePlayerHealthInterval; // 0x98(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerHealthViewModel");
			return ret;
		}

		void SetupPlayerHealthVM(AFortPlayerStateAthena InPlayerState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E35A20
	};

}
