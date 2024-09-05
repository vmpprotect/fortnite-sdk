#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
	// Size: 0x20 (0x2D0 - 0x2B0)
	class UJunoBangWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x2B0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBangWidget");
			return ret;
		}

		void SetBangVisibility(EJunoBangVisibility BangVisibility); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBangCount(int32_t NewCount); // Flags: RequiredAPI|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFreeBuildToggled(bool bFreeBuildEnabled); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsFreeBuildEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C94268(relative to base address)
	};


	// Class JunoUI.JunoBedAssignmentListEntry
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UJunoBedAssignmentListEntry : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UJunoBedAssignmentListObject* BedAssignmentListObject; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBedAssignmentListEntry");
			return ret;
		}

		void OnBedAssignmentObjectSet(UJunoBedAssignmentListObject* NewBedAssignmentListObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoBedAssignmentListObject
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UJunoBedAssignmentListObject : public UObject	
	{
	public:
		FGameplayTag NPCGameplayTag; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FText NPCDisplayName; // 0x30(0x10)
		TWeakObjectPtr<UTexture2D*> NPCIcon; // 0x40(0x20)
		bool bHasBed; // 0x60(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		FUniqueNetIdRepl PlayerNetId; // 0x68(0x30)
		bool bIsBed; // 0x98(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBedAssignmentListObject");
			return ret;
		}

		bool IsSelectable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C942D4(relative to base address)
		bool IsPlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C942B0(relative to base address)
		bool IsNPC(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C94298(relative to base address)
		bool IsEmpty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C94184(relative to base address)
		TWeakObjectPtr GetNPCIcon(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C93E10(relative to base address)
		FGameplayTag GetNPCGameplayTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C910E0C(relative to base address)
		FText GetNPCDisplayName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C93DD4(relative to base address)
		bool GetIsBed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C93DBC(relative to base address)
		bool GetHasBed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3C1498(relative to base address)
	};


	// Class JunoUI.JunoBuildingDisplaySlot
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x318 - 0x2D8)
	class UJunoBuildingDisplaySlot : public UCommonUserWidget	
	{
	public:
		FJunoBuildingSlotData BuildingSlotData; // 0x2D8(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildingDisplaySlot");
			return ret;
		}

		void OnSetBuildingSlotInitData(FJunoBuildingSlotData& BuildingSlotInitData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSelectionChanged(bool bInSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoBuildingIngredientsGroup
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x390 - 0x318)
	class UJunoBuildingIngredientsGroup : public UFortHUDElementWidget	
	{
	public:
		UDynamicEntryBox* EntryBox_Ingredients; // 0x318(0x8)
		FGameplayTagContainer FilteredTags; // 0x320(0x20)
		unsigned char UnknownData00_7[0x50]; // 0x340(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildingIngredientsGroup");
			return ret;
		}

		void OnRecipeDisplayDataChanged(FText& RecipeDisplayName, UJunoBuildInstructionsItemDefinition* BuildingItemDefinition); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCanCraftChanged(bool bCanCraft); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoBuildingLimitComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoBuildingLimitComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildingLimitComponent");
			return ret;
		}
	};


	// Class JunoUI.JunoRecipeDetailsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x340 - 0x2D8)
	class UJunoRecipeDetailsWidget : public UCommonUserWidget	
	{
	public:
		bool bCanCraft; // 0x2D8(0x1)
		bool bDisableInfiniteIcon; // 0x2D9(0x1)
		unsigned char UnknownData00_6[0x16]; // 0x2DA(0x16) UNKNOWN PROPERTY
		TArray<FCraftingIngredientRequirement> IngredientRequirements; // 0x2F0(0x10)
		int32_t FolderContentsPreviewCount; // 0x300(0x4)
		TWeakObjectPtr<AActor*> CraftingObject; // 0x304(0x8)
		FName CurrentRecipe; // 0x30C(0x4)
		FGameplayTag CurrentFolder; // 0x310(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x314(0x4) UNKNOWN PROPERTY
		TArray<FName> CurrentFolderContents; // 0x318(0x10)
		UDynamicEntryBox* EntryBox_Ingredients; // 0x328(0x8)
		UDynamicEntryBox* FolderContentRecipeList; // 0x330(0x8)
		UScrollBox* ScrollBox_Ingredients; // 0x338(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoRecipeDetailsWidget");
			return ret;
		}

		void UpdateRecipeFocus(FName& Recipe); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751CAA0A8(relative to base address)
		void UpdateFolderFocus(FGameplayTag& FolderTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751CAA01C(relative to base address)
		void SetFolderContents(TArray<FName>& FolderContents); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751CA9CC4(relative to base address)
		void SetCraftingObject(AActor* InCraftingObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751CA9BC4(relative to base address)
		void OnSetRecipeDetails(FText& Name, EJunoKnowledgeState KnowledgeState, int32_t CraftCount, UItemDefinitionBase* CraftedItemDef, FText& SourceName, FSlateBrush SourceIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetFolderDetails(FJunoCraftingFolderUIDataEntry& FolderDef); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRefreshWidget(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifyParentDeactivated(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7470D9EB4(relative to base address)
		void NotifyParentActivated(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7474A9F44(relative to base address)
		void HandleInventoryChanged(FJunoItemSlot& Item, EJunoItemChangeType ChangeType); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751CA93EC(relative to base address)
		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751CA9298(relative to base address)
		FName GetCurrentRecipe(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CA8CA4(relative to base address)
		FGameplayTag GetCurrentFolder(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC16674(relative to base address)
	};


	// Class JunoUI.JunoBuildingRecipeDetails
	// Inherited from UJunoRecipeDetailsWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x390 - 0x340)
	class UJunoBuildingRecipeDetails : public UJunoRecipeDetailsWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x340(0x8) UNKNOWN PROPERTY
		UDynamicEntryBox* EntryBox_GuidedBuildingIngredients; // 0x348(0x8)
		float LoadingMinimumWaitTimeSeconds; // 0x350(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x354(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> ActorClassToBuild; // 0x358(0x20)
		unsigned char UnknownData02_6[0x10]; // 0x378(0x10) UNKNOWN PROPERTY
		UScrollBox* ScrollBox_Requirements; // 0x388(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildingRecipeDetails");
			return ret;
		}

		void SetGuidedBuildIngredientsToPreviewCount(int32_t InGuidedBuildIngredientsToPreviewCount); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C9453C(relative to base address)
		void OnLoadingBuildingActorAssetComplete(FJunoGuidedBuildingUIData GuidedBuildingUIData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoadingBuildingActorAsset(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoCompassWidget
	// Inherited from UFortCompassWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x240 (0x6B0 - 0x470)
	class UJunoCompassWidget : public UFortCompassWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x470(0x8) UNKNOWN PROPERTY
		float CompassWidth; // 0x478(0x4)
		FVector2f MarkerSize; // 0x47C(0x8)
		FVector2f MobileMarkerSize; // 0x484(0x8)
		float MinMarkerScaleDistanceCutOff; // 0x48C(0x4)
		float MaxMarkerScaleCutOff; // 0x490(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x494(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve MarkerScaleCurve; // 0x498(0x88)
		float MarkerDistanceOffset; // 0x520(0x4)
		float MobileMarkerDistanceOffset; // 0x524(0x4)
		FGameplayTag AdvancedCompassTag; // 0x528(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x52C(0x4) UNKNOWN PROPERTY
		FSlateFontInfo MarkerDistanceTextFont; // 0x530(0x58)
		FSlateFontInfo MarkerDistanceTextFont_Mobile; // 0x588(0x58)
		FDataTableRowHandle PreviousSpawnPointMarkerRow; // 0x5E0(0x10)
		TMap<FGuid, UMaterialInstanceDynamic*> ActiveMarkers; // 0x5F0(0x50)
		unsigned char UnknownData03_6[0x10]; // 0x640(0x10) UNKNOWN PROPERTY
		TMap<FSoftObjectPath, FJunoMarkerMaterialInstances> AvailableMaterialInstances; // 0x650(0x50)
		unsigned char UnknownData04_7[0x10]; // 0x6A0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoCompassWidget");
			return ret;
		}

		void UpdateHasAdvancedCompassFlag(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C945E4(relative to base address)
	};


	// Class JunoUI.JunoDisassemblingScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x168 (0x558 - 0x3F0)
	class UJunoDisassemblingScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x3F0(0x30) UNKNOWN PROPERTY
		EStationInventoryState StationInventoryState; // 0x420(0x1)
		unsigned char UnknownData01_6[0x27]; // 0x421(0x27) UNKNOWN PROPERTY
		AJunoCraftingObjectBGA* CraftingObject; // 0x448(0x8)
		UJunoPlayerInventoryContainer* Container_PlayerInventory; // 0x450(0x8)
		UJunoInventoryGroup* InventoryGroup_Input; // 0x458(0x8)
		UJunoInventoryGroup* InventoryGroup_Output; // 0x460(0x8)
		UCommonButtonBase* Button_Back; // 0x468(0x8)
		UCommonButtonBase* Button_CloseTouch; // 0x470(0x8)
		UCommonButtonBase* Button_TakeStack; // 0x478(0x8)
		UCommonButtonBase* Button_DepositStack; // 0x480(0x8)
		UCommonButtonBase* Button_MoreActions; // 0x488(0x8)
		UCommonButtonBase* Button_TakeAll; // 0x490(0x8)
		UCommonButtonGroupBase* ButtonGroup_AllSlots; // 0x498(0x8)
		FDataTableRowHandle CancelAction; // 0x4A0(0x10)
		FDataTableRowHandle BackAction; // 0x4B0(0x10)
		UJunoInventorySlot* LastSelectedSlot; // 0x4C0(0x8)
		UJunoInventorySlot* LastClickedSlot; // 0x4C8(0x8)
		UJunoPassiveCraftingComponent* JunoPassiveCraftingComponent; // 0x4D0(0x8)
		UJunoInventoryDragAndDropHandler* JunoInventoryDragAndDropHandler; // 0x4D8(0x8)
		unsigned char UnknownData02_7[0x78]; // 0x4E0(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoDisassemblingScreen");
			return ret;
		}

		void OnUpdateStationCraftingState(EStationInventoryState NewState); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSlotItemSelected(UFortItem* Item); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemsTaken(TArray<UFortItem*>& Items); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDisabledInventoryItemHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCrafringFormulaResultsChanged(TArray<FItemAndCount>& CraftingResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCraftingFormulaChanged(AActor* CraftingObjectActor, FName& NewFormula); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751C93F10(relative to base address)
	};


	// Class JunoUI.JunoComposterScreen
	// Inherited from UJunoDisassemblingScreen -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x588 - 0x558)
	class UJunoComposterScreen : public UJunoDisassemblingScreen	
	{
	public:
		UJunoMultiCraftingComponent* JunoMultiCraftingComponent; // 0x558(0x8)
		EStationInventoryState CurrentStationInventoryState; // 0x560(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x561(0x7) UNKNOWN PROPERTY
		TArray<FCraftingProcess> CurrentCraftingProcesses; // 0x568(0x10)
		UJunoProcessingInventoryGroup* InventoryGroup_Processing; // 0x578(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x580(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoComposterScreen");
			return ret;
		}

		void OnProceessingSlotsChanged(int32_t NumberOfOccupiedSlots); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCraftingProcessesFinished(AActor* CraftingObjectRaw); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C9405C(relative to base address)
		void HandleCraftingProcessesBlocked(AActor* CraftingObjectRaw); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C93FE0(relative to base address)
	};


	// Class JunoUI.JunoConversationMarker
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x4F8 - 0x3C0)
	class UJunoConversationMarker : public UFortActorIndicatorWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3C0(0x8) UNKNOWN PROPERTY
		UFortKeybindWidget* Keybind_Interact; // 0x3C8(0x8)
		float MessageBubbleDuration; // 0x3D0(0x4)
		float LastTextBubbleDuration; // 0x3D4(0x4)
		bool bSetCustomInteractionWidgetOnlyWhenNeeded; // 0x3D8(0x1)
		unsigned char UnknownData01_6[0x1F]; // 0x3D9(0x1F) UNKNOWN PROPERTY
		TMap<FGameplayTag, FJunoNPCStateUIData> CachedNPCStateMap; // 0x3F8(0x50)
		TMap<FGameplayTag, FJunoNPCStateUIData> ActiveNPCStateMap; // 0x448(0x50)
		unsigned char UnknownData02_7[0x60]; // 0x498(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoConversationMarker");
			return ret;
		}

		void SetNPCStatus(FJunoNPCStateUIData& NPCStateData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnParticipantNameChanged(FText& InParticipantName); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMessageUpdated(FText& MessageText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConversationInteractionUpdated(EDialogMarkerInteractionState NewInteractionState, bool bNewCanInteract); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool OnCanInteract(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C94390(relative to base address)
		EDialogMarkerInteractionState GetInteractionState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EDD1828(relative to base address)
		void ClearNPCStatus(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoConversationOption
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x1400 - 0x1390)
	class UJunoConversationOption : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		FClientConversationOptionEntry RepresentedOption; // 0x1398(0x68)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoConversationOption");
			return ret;
		}

		void OnDisplayItemDefLoaded(UItemDefinitionBase* ResolvedItemDef); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDisplayAssetLoaded(UObject* ResolvedAsset); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConversationOptionUpdated(FClientConversationOptionEntry& InOption); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FClientConversationOptionEntry GetConversationOption(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C93DA0(relative to base address)
	};


	// Class JunoUI.JunoConversationScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x470 - 0x3F0)
	class UJunoConversationScreen : public UCommonActivatableWidget	
	{
	public:
		UCommonButtonGroupBase* Group_Options; // 0x3F0(0x8)
		TWeakObjectPtr<UTexture2D*> ParticipantIconSmall; // 0x3F8(0x20)
		UDynamicEntryBox* EntryBox_Options; // 0x418(0x8)
		UJunoConversationOption* LastEntryHovered; // 0x420(0x8)
		FDataTableRowHandle CloseScreenAction; // 0x428(0x10)
		unsigned char UnknownData00_7[0x38]; // 0x438(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoConversationScreen");
			return ret;
		}

		void OnParticipantIconChanged(TWeakObjectPtr<UTexture2D*>& Icon); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConversationStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConversationOptionsUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConversationMessageUpdated(FClientConversationMessage& ConversationMessage); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleParticipantIconChanged(TWeakObjectPtr<UTexture2D*>& Icon); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751C940DC(relative to base address)
		void EndConversation(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751C93D8C(relative to base address)
	};


	// Class JunoUI.JunoCraftingCategoryFilterViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0xD0 (0x138 - 0x68)
	class UJunoCraftingCategoryFilterViewModel : public UMVVMViewModelBase	
	{
	public:
		TWeakObjectPtr<UJunoGameStateComponent_UIData*> UIData; // 0x68(0x8)
		FGameplayTag LastSelectedTab; // 0x70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		TSet<FGameplayTag> SelectedFilterIds; // 0x78(0x50)
		TMap<FGameplayTag, FGameplayTagContainer> Filters; // 0xC8(0x50)
		FGameplayTagContainer AllRecipeTags; // 0x118(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoCraftingCategoryFilterViewModel");
			return ret;
		}

		void ResetAllFilters(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C94528(relative to base address)
		void RemoveFilters(FGameplayTagContainer& FilterIds); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C94434(relative to base address)
		void RemoveFilter(FGameplayTag& FilterId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C943A8(relative to base address)
		int32_t NumSelectedFiltersInParentId(FGameplayTag& ParentID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C942F8(relative to base address)
		bool IsFilterIdSelected(FGameplayTag& FilterId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C941A8(relative to base address)
		TSet GetSelectedFilterIds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C93EB4(relative to base address)
		void AddFilters(FGameplayTagContainer& FilterIds); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C93C98(relative to base address)
		void AddFilter(FGameplayTag& FilterId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C93C0C(relative to base address)
	};


	// Class JunoUI.JunoDebugWatermark
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x318 - 0x318)
	class UJunoDebugWatermark : public UFortHUDElementWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoDebugWatermark");
			return ret;
		}

		bool ShouldShowSeed(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C945B8(relative to base address)
		FString GetWorldID(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751C93ED0(relative to base address)
	};


	// Class JunoUI.JunoDynamicControlPromptsWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x320 - 0x318)
	class UJunoDynamicControlPromptsWidget : public UFortHUDElementWidget	
	{
	public:
		UDynamicEntryBox* EntryBox; // 0x318(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoDynamicControlPromptsWidget");
			return ret;
		}

		void InitializeEntry(FJunoInputAlternateDisplayText& DisplayText, UUserWidget* EntryWidget); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddEntry(FJunoInputAlternateDisplayText& DisplayText); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C95BB0(relative to base address)
	};


	// Class JunoUI.JunoEnchantmentScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x478 - 0x3F0)
	class UJunoEnchantmentScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UJunoPlayerInventoryContainer* Container_PlayerInventory; // 0x3F8(0x8)
		UGridListView* RecipeList_Enchantments; // 0x400(0x8)
		UDynamicEntryBox* EntryBox_RecipeIngredients; // 0x408(0x8)
		UCommonButtonBase* Button_Enchant; // 0x410(0x8)
		UCommonButtonBase* Button_TouchSelect; // 0x418(0x8)
		AJunoCraftingObjectBGA* CraftingObject; // 0x420(0x8)
		UJunoInventorySlot* LastInventorySlot; // 0x428(0x8)
		UFortItem* ChosenItem; // 0x430(0x8)
		TArray<FFortAlterationSlotStatus> ChosenItemAlterations; // 0x438(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x448(0x8) UNKNOWN PROPERTY
		UJunoInventorySlot* HoveredInventorySlot; // 0x450(0x8)
		unsigned char UnknownData02_7[0x20]; // 0x458(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoEnchantmentScreen");
			return ret;
		}

		void SelectInventorySlot(UJunoInventorySlot* InventorySlot); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C96478(relative to base address)
		void RequestBackout(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751C963EC(relative to base address)
		void OnRecipeEntrySelected(UFortAlterationItemDefinition* PreviewEnchantment); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRecipeEntryHovered(UFortAlterationItemDefinition* PreviewEnchantment); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemEnchanted(UFortItem* Item, UFortItemDefinition* PreviewAlteration, int32_t UpdatedAlterationIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInventoryItemHovered(UFortItem* HoveredInventoryItem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInventoryItemChosen(UFortItem* ChosenInventoryItem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputMethodChanged(ECommonInputType NewInputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnchantmentStationHeaderData(FJunoCraftingStationUIDataEntry& InEntry); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnchantButtonStateChanged(EJunoEnchantButtonState InButtonState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnchantableItemSlotsCreated(bool bNothingToEnchant); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDisabledInventoryItemHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751C95D5C(relative to base address)
		EJunoEnchantmentScreenState GetCurrentScreenState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C95D08(relative to base address)
		void CancelEnchanting(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751C95C70(relative to base address)
	};


	// Class JunoUI.JunoEnchantmentsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UJunoEnchantmentsWidget : public UCommonUserWidget	
	{
	public:
		UDynamicEntryBox* EntryBox_Enchantments; // 0x2D8(0x8)
		UFortItem* RepresentedItem; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoEnchantmentsWidget");
			return ret;
		}

		void SetUpdatedEnchantmentIndex(int32_t UpdatedIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C968F8(relative to base address)
		void SetRepresentedItem(UFortItem* InRepresentedItem); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C96718(relative to base address)
		void SetPreviewEnchantment(UFortAlterationItemDefinition* InEnchantment); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C96644(relative to base address)
		void OnEnchantmentsUpdated(bool bHasEnchantments); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoEnchantmentWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UJunoEnchantmentWidget : public UCommonUserWidget	
	{
	public:
		UFortAlterationItemDefinition* Enchantment; // 0x2D8(0x8)
		EJunoEnchantmentState EnchantmentState; // 0x2E0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x2E1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoEnchantmentWidget");
			return ret;
		}

		void OnRepresentedItemChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoFolderRecipeWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2D8 - 0x2D8)
	class UJunoFolderRecipeWidget : public UCommonUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoFolderRecipeWidget");
			return ret;
		}

		void OnSetRecipeInfo(UItemDefinitionBase* CraftedItemDef); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetExtraRecipesInfo(int32_t NumExtraRecipes); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoFortItemViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UJunoFortItemViewModel : public UMVVMViewModelBase	
	{
	public:
		UFortItem* RepresentedItem; // 0x68(0x8)
		int32_t MaxAllowedItemAlterations; // 0x70(0x4)
		unsigned char UnknownData00_7[0x1C]; // 0x74(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoFortItemViewModel");
			return ret;
		}

		void HandleItemUpdatedPostCrafting(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged, FName InRecipeRowName); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C95EAC(relative to base address)
		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751C95E04(relative to base address)
		TArray GetRepresentedItemAlterations(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C95D20(relative to base address)
		UFortItem GetRepresentedItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3166C8(relative to base address)
		bool CanBeEnhanced(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C95C4C(relative to base address)
	};


	// Class JunoUI.JunoFTUEPinnedQuestInfo
	// Inherited from UAthenaPinnedQuestInfo -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x378 - 0x338)
	class UJunoFTUEPinnedQuestInfo : public UAthenaPinnedQuestInfo	
	{
	public:
		FGameplayTagContainer QuestCategoryTags; // 0x338(0x20)
		FGameplayTagContainer MobileQuestCategoryTags; // 0x358(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoFTUEPinnedQuestInfo");
			return ret;
		}

		void HandleTrackedFTUEQuestsChanged(UJunoControllerComponent_FTUEQuestTracker* FTUEQuestTrackerComponent); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C9610C(relative to base address)
	};


	// Class JunoUI.JunoFullScreenMap
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1C0 (0x5B0 - 0x3F0)
	class UJunoFullScreenMap : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x3F0(0x28) UNKNOWN PROPERTY
		FDataTableRowHandle CloseScreenAction; // 0x418(0x10)
		UCommonButtonBase* Button_Back; // 0x428(0x8)
		UCommonButtonBase* Button_CloseTouch; // 0x430(0x8)
		UCommonButtonBase* Button_PlaceMarker; // 0x438(0x8)
		UCommonButtonBase* Button_ResetFocus; // 0x440(0x8)
		UJunoMapWidget* MapWidget; // 0x448(0x8)
		UCommonTextBlock* Text_EmptyList; // 0x450(0x8)
		UHorizontalBox* HBox_MapPrompts; // 0x458(0x8)
		UCommonRichTextBlock* RT_Location; // 0x460(0x8)
		UCommonRichTextBlock* RT_Biome; // 0x468(0x8)
		UFortLazyImage* Image_Biome; // 0x470(0x8)
		UCommonActionWidget* CommonActionWidget_Zoom_Gamepad; // 0x478(0x8)
		UCommonActionWidget* CommonActionWidget_Pan_Gamepad; // 0x480(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x488(0x8) UNKNOWN PROPERTY
		FSlateBrush CaveIcon; // 0x490(0xB0)
		float ZoomMouseWheelScale; // 0x540(0x4)
		float TouchZoomSpeed; // 0x544(0x4)
		float GamepadZoomSpeed; // 0x548(0x4)
		float GamepadPanSpeed; // 0x54C(0x4)
		float VirtualCursorMoveSpeed; // 0x550(0x4)
		float GamepadDeadZone; // 0x554(0x4)
		UCurveFloat* VirtualCursorCurve; // 0x558(0x8)
		TArray<FBlockingWidgetData> VirtualCursorBlockingWidgets; // 0x560(0x10)
		bool bCanPlaceMapPings; // 0x570(0x1)
		unsigned char UnknownData02_7[0x3F]; // 0x571(0x3F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoFullScreenMap");
			return ret;
		}

		void OnMapIconHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMapIconClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsMapTabAllowed(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C962AC(relative to base address)
	};


	// Class JunoUI.JunoGameStateComponent_UIData
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x108 (0x1A8 - 0xA0)
	class UJunoGameStateComponent_UIData : public UGameStateComponent	
	{
	public:
		FName CraftingFormulaRegistryType; // 0xA0(0x4)
		FName CraftingCategoryFilterRegistryType; // 0xA4(0x4)
		unsigned char UnknownData00_7[0x100]; // 0xA8(0x100) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoGameStateComponent_UIData");
			return ret;
		}

		void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751C962D0(relative to base address)
	};


	// Class JunoUI.JunoHudMenuBaseInitData
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoHudMenuBaseInitData : public UObject	
	{
	public:
		FName InitialHudMenuBaseTab; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoHudMenuBaseInitData");
			return ret;
		}
	};


	// Class JunoUI.JunoHudMenuBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x428 - 0x3F0)
	class UJunoHudMenuBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x3F0(0x10) UNKNOWN PROPERTY
		UFortTabListWidgetBase* TabList_MenuTabs; // 0x400(0x8)
		UCommonActivatableWidgetSwitcher* Switcher_Tabs; // 0x408(0x8)
		FDataTableRowHandle CloseHUDMenuAction; // 0x410(0x10)
		UJunoHudMenuBaseInitData* HudMenuBaseInitData; // 0x420(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoHudMenuBase");
			return ret;
		}

		void OnInitDataSet(UJunoHudMenuBaseInitData* InInitData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		int32_t GetNumUnviewedItems(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74E12724C(relative to base address)
	};


	// Class JunoUI.JunoInGameWorldSettingsScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x418 - 0x3F0)
	class UJunoInGameWorldSettingsScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x3F0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInGameWorldSettingsScreen");
			return ret;
		}

		void RequestClose(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C96430(relative to base address)
	};


	// Class JunoUI.JunoInGameWorldSettingsViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x58 (0xC0 - 0x68)
	class UJunoInGameWorldSettingsViewModel : public UMVVMViewModelBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		UJunoWorldDataViewModel* CurrentWorldViewModel; // 0x70(0x8)
		TWeakObjectPtr<UDataTable*> SettingsDataTable; // 0x78(0x20)
		TWeakObjectPtr<UDataTable*> WorldImageDataTable; // 0x98(0x20)
		unsigned char UnknownData01_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInGameWorldSettingsViewModel");
			return ret;
		}

		void SendSettingsUpdatedNotification(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C965D4(relative to base address)
		void InitWorldData(TWeakObjectPtr<UDataTable*>& InSettingDataTable, TWeakObjectPtr<UDataTable*>& InWorldImageDataTable); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C96188(relative to base address)
	};


	// Class JunoUI.JunoIngredientWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x350 - 0x2D8)
	class UJunoIngredientWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x2D8(0x10) UNKNOWN PROPERTY
		bool bDisableInfiniteIcon; // 0x2E8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2E9(0x7) UNKNOWN PROPERTY
		FText StaticDescriptionText; // 0x2F0(0x10)
		FJunoIngredientInfo CachedInfo; // 0x300(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoIngredientWidget");
			return ret;
		}

		void OnIngredientInfoSet(FJunoIngredientInfo& InCachedInfo); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIngredientInfoCleared(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoInventoryUIData
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoInventoryUIData : public UDataAsset	
	{
	public:
		TMap<FGameplayTag, FJunoInventoryGroupUIDataList> IndividualInventoryGroupUIData; // 0x30(0x50)

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
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UMenuAnchor* ContextMenuAnchor; // 0x1398(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x13A0(0x4) UNKNOWN PROPERTY
		int32_t StackSizeMultiplier; // 0x13A4(0x4)
		UJunoItemSpawnerListEntry* ListEntry; // 0x13A8(0x8)
		UClass* ContextMenuClass; // 0x13B0(0x8)
		unsigned char UnknownData02_7[0x28]; // 0x13B8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoItemSpawnerEntrySlot");
			return ret;
		}

		void UpdateItemDisplay(UFortItemDefinition* FortItemDefinition); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLeaveContextMenuMode(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C9600C(relative to base address)
		UUserWidget GetContextMenu(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C95CE4(relative to base address)
	};


	// Class JunoUI.JunoItemSpawnerSubCategoryHeader
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UJunoItemSpawnerSubCategoryHeader : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UCommonTextBlock* Text_Name; // 0x1398(0x8)
		UJunoItemSpawnerListEntry* ListEntry; // 0x13A0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoItemSpawnerSubCategoryHeader");
			return ret;
		}
	};


	// Class JunoUI.JunoItemSpawnerScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x238 (0x628 - 0x3F0)
	class UJunoItemSpawnerScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x3F0(0x28) UNKNOWN PROPERTY
		UFortTabListWidgetBase* TabList_FilterTabs; // 0x418(0x8)
		UClass* FilterTabWidget; // 0x420(0x8)
		TMap<FGameplayTag, FJunoItemSpawnerItemTagOrder> SubCategoryTagOrderByCategoryTag; // 0x428(0x50)
		TMap<FGameplayTag, FJunoItemSpawnerItemTagOrder> ItemTypeTagOrderBySubCategoryTag; // 0x478(0x50)
		UGridListView* GridListView_SubCategories; // 0x4C8(0x8)
		FName SubCategoryItemType; // 0x4D0(0x4)
		FName EntrySlotItemType; // 0x4D4(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x4D8(0x8) UNKNOWN PROPERTY
		TMap<FName, FGameplayTag> TabIDToCategoryTagMap; // 0x4E0(0x50)
		UJunoItemSpawnerListEntry* SelectedListEntry; // 0x530(0x8)
		UFortItemDefinition* SelectedListItemDefinition; // 0x538(0x8)
		UCommonButtonBase* Button_Back; // 0x540(0x8)
		UCommonButtonBase* Button_Close; // 0x548(0x8)
		UCommonButtonBase* Button_Spawn; // 0x550(0x8)
		UCommonButtonBase* Button_SpawnMultiple; // 0x558(0x8)
		UJunoNotificationWidget* ItemSpawnedNotification; // 0x560(0x8)
		unsigned char UnknownData02_7[0xC0]; // 0x568(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoItemSpawnerScreen");
			return ret;
		}

		void UpdateItemDetails(UFortItemDefinition* FortItemDefinition); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTabSelected(FName TabID); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C9608C(relative to base address)
	};


	// Class JunoUI.JunoItemSpawnerListEntry
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UJunoItemSpawnerListEntry : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		UFortItemDefinition* ItemDefinition; // 0x40(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoItemSpawnerListEntry");
			return ret;
		}
	};


	// Class JunoUI.JunoItemStatsList
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class UJunoItemStatsList : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoItemStatsList");
			return ret;
		}

		float GetWeaponEssencesBonusDamage(UFortItem* WeaponItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C97DA0(relative to base address)
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
		TWeakObjectPtr<UMaterialInterface*> DefaultPlayerIconMaterial; // 0x28(0x20)
		TWeakObjectPtr<UMaterialInterface*> DefaultAnchoringArrowIconMaterial; // 0x48(0x20)
		TWeakObjectPtr<UMaterialInterface*> DefaultMapTileMaterial; // 0x68(0x20)
		TWeakObjectPtr<UMaterialInterface*> PlayerIconMaterial; // 0x88(0x20)
		TWeakObjectPtr<UMaterialInterface*> AnchoringArrowIconMaterial; // 0xA8(0x20)
		TWeakObjectPtr<UMaterialInterface*> MapTileMaterial; // 0xC8(0x20)
		TWeakObjectPtr<UJunoMapViewModel*> MapViewModel; // 0xE8(0x8)
		unsigned char UnknownData00_7[0x60]; // 0xF0(0x60) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery TagQuery; // 0x30(0x48)
		unsigned char UnknownData01_7[0x18]; // 0x78(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0x90(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
		FSlateBrush TeamIcon; // 0xA0(0xB0)
		TArray<UMaterialInstanceDynamic*> MIDTeamIcons; // 0x150(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapTeamIndicators");
			return ret;
		}
	};


	// Class JunoUI.JunoMapWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x168 (0x418 - 0x2B0)
	class UJunoMapWidget : public UUserWidget	
	{
	public:
		FJunoMapZoomBounds ZoomBounds; // 0x2B0(0xC)
		float PlayerVisibilityPadding; // 0x2BC(0x4)
		float AnchorMapPadding; // 0x2C0(0x4)
		float MarkerCyclingDisplayDuration; // 0x2C4(0x4)
		float InContainerIconDistance; // 0x2C8(0x4)
		float IconHoverScale; // 0x2CC(0x4)
		int32_t PlayerIconSize; // 0x2D0(0x4)
		int32_t AnchoringArrowIconSize; // 0x2D4(0x4)
		bool bEnableFullMapDisplay; // 0x2D8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2D9(0x3) UNKNOWN PROPERTY
		FLinearColor NonSelectableIconColor; // 0x2DC(0x10)
		unsigned char UnknownData01_6[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UMaterialInterface*> PlayerIconMaterial; // 0x2F0(0x20)
		TWeakObjectPtr<UMaterialInterface*> AnchoringArrowIconMaterial; // 0x310(0x20)
		TWeakObjectPtr<UMaterialInterface*> MapTileMaterial; // 0x330(0x20)
		FName TerrainMaterialParameterName; // 0x350(0x4)
		FName ZoomLevelMaterialParameterName; // 0x354(0x4)
		FName MapContainerSizeXParameterName; // 0x358(0x4)
		FName MapContainerSizeYParameterName; // 0x35C(0x4)
		FName MapContainerVerticalOffsetParameterName; // 0x360(0x4)
		FName FogOfWarMaterialParameterName; // 0x364(0x4)
		FName FogOfWarScaleParameterName; // 0x368(0x4)
		FName FogOfWarOffsetParameterName; // 0x36C(0x4)
		FName FogOfWarRandomSignParameterName; // 0x370(0x4)
		FName FogOfWarRandomIntensityParameterName; // 0x374(0x4)
		FName MinZoomParameterName; // 0x378(0x4)
		FName MaxZoomParameterName; // 0x37C(0x4)
		FGameplayTagContainer GameplayTags; // 0x380(0x20)
		unsigned char UnknownData02_6[0x10]; // 0x3A0(0x10) UNKNOWN PROPERTY
		TArray<UJunoMapIndicatorType*> IndicatorTypes; // 0x3B0(0x10)
		FMulticastInlineDelegate OnMapDragBlocked; // 0x3C0(0x10)
		UMaterialInterface* VirtualCursorMaterial; // 0x3D0(0x8)
		TWeakObjectPtr<UJunoMapViewModel*> MapViewModel; // 0x3D8(0x8)
		unsigned char UnknownData03_7[0x38]; // 0x3E0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapWidget");
			return ret;
		}

		void RemoveCustomMapElement(FName ID); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751C9897C(relative to base address)
		void AddCustomMapElement(FName ID, FJunoCustomMapElement& InCustomElement); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C97BE0(relative to base address)
	};


	// Class JunoUI.JunoModalSelectionContext
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UJunoModalSelectionContext : public UObject	
	{
	public:
		FText Title; // 0x28(0x10)
		FText Description; // 0x38(0x10)
		TArray<FJunoModalSelectionChoice> Choices; // 0x48(0x10)
		FMulticastInlineDelegate TouchCloseDelegate; // 0x58(0x10)
		UObject* InitObject; // 0x68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoModalSelectionContext");
			return ret;
		}
	};


	// Class JunoUI.JunoSelectionModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x428 - 0x3F0)
	class UJunoSelectionModal : public UCommonActivatableWidget	
	{
	public:
		UClass* SelectionButtonClass; // 0x3F0(0x8)
		UCommonButtonBase* Button_TouchClose; // 0x3F8(0x8)
		UJunoModalSelectionContext* SelectionContext; // 0x400(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x408(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoSelectionModal");
			return ret;
		}

		void OnSetTitleAndDescription(FText& Title, FText& Description); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSelectionButtonCreated(UCommonButtonBase* NewButton, FText& SelectionTitle); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModalWidgetInitialized(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoNPCStatusWidgetBase
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x3F0 - 0x3C0)
	class UJunoNPCStatusWidgetBase : public UFortActorIndicatorWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x3C0(0x10) UNKNOWN PROPERTY
		UJunoAnimatedProgressBar* AnimatedProgressBar; // 0x3D0(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x3D8(0x4) UNKNOWN PROPERTY
		float MinRadius; // 0x3DC(0x4)
		float MaxRadius; // 0x3E0(0x4)
		float MinScalingDistance; // 0x3E4(0x4)
		float MaxScalingDistance; // 0x3E8(0x4)
		float BuildingStaticUIScaleFactor; // 0x3EC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoNPCStatusWidgetBase");
			return ret;
		}

		void OnTakeDamage(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnScalingFactorChanged(float NewScalingFactor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBuildingHealthChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751C987D8(relative to base address)
		void OnActorHealthChanged(float NewHealth, float NewMaxHealth); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751C98714(relative to base address)
	};


	// Class JunoUI.JunoPlayerActiveBuffViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x30 (0x98 - 0x68)
	class UJunoPlayerActiveBuffViewModel : public UMVVMViewModelBase	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x68(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerActiveBuffViewModel");
			return ret;
		}

		void TriggerAllCurrentEffectNotifies(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C98A9C(relative to base address)
		FJunoBuffInfo NotifyUIBuff(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C98678(relative to base address)
		bool Initialize(AFortPlayerControllerZone* FortPC); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C984E4(relative to base address)
	};


	// Class JunoUI.JunoPlayerBuffManager
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2B8 - 0x2B0)
	class UJunoPlayerBuffManager : public UUserWidget	
	{
	public:
		UJunoPlayerActiveBuffViewModel* PlayerActiveBuffVM; // 0x2B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerBuffManager");
			return ret;
		}
	};


	// Class JunoUI.JunoPlayerInventoryContainer
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x318 - 0x2D8)
	class UJunoPlayerInventoryContainer : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr<AFortPlayerController*> OwningPlayer; // 0x2D8(0x8)
		UJunoInventoryGroup* Group_MainInventory; // 0x2E0(0x8)
		UJunoInventoryGroup* Group_MainHand; // 0x2E8(0x8)
		UJunoInventoryGroup* Group_OffHand; // 0x2F0(0x8)
		TArray<UJunoInventoryGroup*> GroupList; // 0x2F8(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x308(0x10) UNKNOWN PROPERTY

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
		UJunoInventoryUIData* JunoInventoryUIData; // 0x68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerInventoryViewModel");
			return ret;
		}

		void RefreshData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C98904(relative to base address)
		UJunoInventoryUIData GetJunoInventoryUIData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3166C8(relative to base address)
	};


	// Class JunoUI.JunoPlayerManagementScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x438 - 0x3F0)
	class UJunoPlayerManagementScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x48]; // 0x3F0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerManagementScreen");
			return ret;
		}

		void OpenSidebar(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C98880(relative to base address)
		void HandleBackButtonClicked(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C96430(relative to base address)
	};


	// Class JunoUI.JunoPlayerStateComponent_UIViewModels
	// Inherited from UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UJunoPlayerStateComponent_UIViewModels : public UPlayerStateComponent	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerStateComponent_UIViewModels");
			return ret;
		}
	};


	// Class JunoUI.JunoQuickBuildRadialPicker
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x410 - 0x3F0)
	class UJunoQuickBuildRadialPicker : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UFortPickerOverlay* PickerOverlay_QuickBuildItems; // 0x3F8(0x8)
		UDynamicEntryBox* EntryBox_Ingredients; // 0x400(0x8)
		UJunoQuickBuildSelectionData* QuickBuildSelectionData; // 0x408(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoQuickBuildRadialPicker");
			return ret;
		}

		void OnQuickBuildSlotSelected(FJunoQuickBuildSlotData& SelectedQuickBuildSlotData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CancelSelection(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF749B1B2C4(relative to base address)
		void ApplyCurrentSelection(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751C97CE4(relative to base address)
	};


	// Class JunoUI.JunoRecipeFilterButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x13D0 - 0x1390)
	class UJunoRecipeFilterButton : public UCommonButtonBase	
	{
	public:
		TWeakObjectPtr<AActor*> CraftingObject; // 0x1390(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x1398(0x10) UNKNOWN PROPERTY
		UJunoBangWidget* JunoBangWidget; // 0x13A8(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x13B0(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UMenuAnchor* ContextMenuAnchor; // 0x1398(0x8)
		UJunoBangWidget* JunoBangWidget; // 0x13A0(0x8)
		UJunoRecipeListObject* RecipeListObject; // 0x13A8(0x8)
		UClass* ContextMenuClass; // 0x13B0(0x8)
		unsigned char UnknownData01_6[0x50]; // 0x13B8(0x50) UNKNOWN PROPERTY
		int32_t MaxCraftCount; // 0x1408(0x4)
		bool bCanCraft; // 0x140C(0x1)
		unsigned char UnknownData02_7[0x43]; // 0x140D(0x43) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoRecipeListEntry");
			return ret;
		}

		void ViewRecipe(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751C98AF0(relative to base address)
		void SetPartsRemaining(FJunoGuidedBuildRemainingPartsInfo& RemainingParts); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751C98A00(relative to base address)
		void OnUpdateListEntryVisuals(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateBangVisibility(EJunoBangVisibility BangType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetRecipeInfo(UItemDefinitionBase* CraftedItemDef, int32_t CraftCount, FSlateBrush& SourceIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetFolderInfo(FGameplayTag& FolderTag, FText& FolderText, TWeakObjectPtr<UTexture2D*>& SourceIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRecipePinned(bool bIsPinned); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLeaveContextMenuMode(bool bUnselectSlot); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitWidgetComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurrentStageUpdate(FGuidedBuildingUpdate& UpdateData); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751C987EC(relative to base address)
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751C97D7C(relative to base address)
		EJunoKnowledgeState GetKnowledgeState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C97D18(relative to base address)
		bool GetCanCraft(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751C97D00(relative to base address)
	};


	// Class JunoUI.JunoRecipeHeaderWidget
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UJunoRecipeHeaderWidget : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UCommonTextBlock* Text_Name; // 0x1398(0x8)
		UJunoRecipeListObject* RecipeListObject; // 0x13A0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

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
		TWeakObjectPtr<AJunoCraftingObjectBGA*> CraftingObject; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoStandaloneCraftingInitData");
			return ret;
		}
	};


	// Class JunoUI.JunoStandaloneCraftingContainer
	// Inherited from UJunoHudMenuBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x430 - 0x428)
	class UJunoStandaloneCraftingContainer : public UJunoHudMenuBase	
	{
	public:
		FName UpgradeTab; // 0x428(0x4)
		FName JobTab; // 0x42C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoStandaloneCraftingContainer");
			return ret;
		}

		void OnUpdateCraftingStationAttachedRecipe(FText& NewAttachedRecipe); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetCraftingStationUIEntry(FJunoCraftingStationUIDataEntry CraftingStationUIEntry); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRecipeCraftingComplete(UItemDefinitionBase* Item); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751C9843C(relative to base address)
		void HandleCraftingStationRecipeChanged(FName FormulaRowName); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C983BC(relative to base address)
		void HandleCraftingObjectDeath(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF751C97E20(relative to base address)
	};


	// Class JunoUI.JunoStationUpgradeScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x498 - 0x3F0)
	class UJunoStationUpgradeScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x3F0(0x30) UNKNOWN PROPERTY
		TWeakObjectPtr<AJunoCraftingObjectBGA*> CraftingObject; // 0x420(0x8)
		UJunoRecipeDetailsWidget* RecipeDetailsWidget; // 0x428(0x8)
		UCommonButtonBase* Button_Craft; // 0x430(0x8)
		FName RecipeToCraft; // 0x438(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x43C(0x4) UNKNOWN PROPERTY
		UCommonButtonBase* Button_Close; // 0x440(0x8)
		UCommonButtonBase* Button_TouchClose; // 0x448(0x8)
		unsigned char UnknownData02_7[0x48]; // 0x450(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoStationUpgradeScreen");
			return ret;
		}

		void OnUpdateCraftButton(EJunoCraftButtonState InButtonState, bool bIsStationUpgrade); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetCurrentCraftingRecipeIcon(TWeakObjectPtr<UTexture2D*>& UpgradeIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF751CA9340(relative to base address)
	};


	// Class JunoUI.JunoTaggedWidgetData
	// Inherited from UDataAsset -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UJunoTaggedWidgetData : public UDataAsset	
	{
	public:
		TMap<FGameplayTag, FJunoTaggedWidgetScene> TaggedWidgetScenes; // 0x30(0x50)
		TMap<FGameplayTag, FJunoTaggedWidget> TaggedWidgets; // 0x80(0x50)

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

		bool ShouldShowUnacquiredBang(APlayerController* PlayerController, FName RecipeRowName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751CA9F5C(relative to base address)
		void RemoveModalScene(APlayerController* PlayerController); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751CA9B54(relative to base address)
		int32_t NumUnviewedRecipesInCategory(FCountUnviewedRecipesInCategoryArgs& InArgs); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751CA9ABC(relative to base address)
		int32_t NumUnviewedItemsInInventory(AFortPlayerController* PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751CA9784(relative to base address)
		int32_t NumUnviewedItemsInGroup(AFortPlayerController* PlayerController, FGameplayTag& GroupTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751CA961C(relative to base address)
		TArray GetRecipesFromCraftingObject(AFortPlayerController* PlayerController, AActor* CraftingObject, FGameplayTag& CategoryTag, FGameplayTag& SubCategoryTag, bool bOnlyKnownRecipes, bool bOnlyOwnedRecipes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751CA8F9C(relative to base address)
		FJunoCraftingCategoryUIDataEntry GetRecipeCategoryUIData(FGameplayTag& CategoryTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751CA8EB4(relative to base address)
		bool GetBiomeUIDataFromName(FName& EventName, FJunoBiomeUIDataRow& OutRow); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751CA8BA4(relative to base address)
		bool GetBiomeUIDataFromEnum(EJunoBiome& Biome, FJunoBiomeUIDataRow& OutRow); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751CA8AA4(relative to base address)
		bool GetBiomeUIData(EJunoBiome& Biome, FName& EventName, FJunoBiomeUIDataRow& OutRow); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751CA8968(relative to base address)
		void AddModalScene(APlayerController* PlayerController, FJunoModalSceneOperation& ModalScene); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751CA88A4(relative to base address)
	};


	// Class JunoUI.JunoUIGameFeatureData
	// Inherited from UFortGameFeatureData -> UGameFeatureData -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xF8 (0x638 - 0x540)
	class UJunoUIGameFeatureData : public UFortGameFeatureData	
	{
	public:
		TWeakObjectPtr<UJunoRecipeCraftingCategoryUIData*> CraftingCategoryUIData; // 0x540(0x20)
		TWeakObjectPtr<UJunoCraftingFolderUIData*> CraftingFolderUIData; // 0x560(0x20)
		TWeakObjectPtr<UJunoFreeBuildCategoryUIData*> FreeBuildCategoryUIData; // 0x580(0x20)
		TWeakObjectPtr<UJunoInventoryUIData*> InventoryUIData; // 0x5A0(0x20)
		TWeakObjectPtr<UJunoVillageUIDataAsset*> VillageUIData; // 0x5C0(0x20)
		TMap<FGameplayTag, FJunoNPCStateUIData> NPCStateUIDataMap; // 0x5E0(0x50)
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
		AJunoCampActor* CampActor; // 0x30(0x8)
		UJunoCampMembershipActorComponent* CampActorMembershipActorComponent; // 0x38(0x8)
		UJunoAwesomeLevelComponent* AwesomeLevelComponent; // 0x40(0x8)

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

		void SetAwesomePointsInfo(int32_t CurrentAwesomePoints, int32_t RequiredAwesomePoints, int32_t CurrentAwesomeLevel); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoVillageRewardEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x290 (0x1620 - 0x1390)
	class UJunoVillageRewardEntry : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		FJunoVillageRewardEntryInfo VillageRewardEntryInfo; // 0x1398(0x70)
		FJunoVillageUIData ParentVillageUIData; // 0x1408(0x218)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoVillageRewardEntry");
			return ret;
		}

		void SetVillageRewardEntryInfo(FJunoVillageRewardEntryInfo& InVillageRewardEntryInfo, FJunoVillageUIData& InParentVillageUIData); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751CA9E24(relative to base address)
	};


	// Class JunoUI.JunoVillageTownBuilderQuestEntry
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x358 - 0x2D8)
	class UJunoVillageTownBuilderQuestEntry : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY
		FString ItemDefinitionTagQueryDescription; // 0x2E0(0x10)
		TArray<FGameplayTag> ItemDefinitionTagQueryTags; // 0x2F0(0x10)
		UItemDefinitionBase* ItemDefinition; // 0x300(0x8)
		FText Name; // 0x308(0x10)
		FText Description; // 0x318(0x10)
		TWeakObjectPtr<UTexture2D*> Icon; // 0x328(0x20)
		int32_t StepIndex; // 0x348(0x4)
		int32_t StepCount; // 0x34C(0x4)
		bool bIsComplete; // 0x350(0x1)
		bool bIsOsirisCamp; // 0x351(0x1)
		bool bIsTownbuilder; // 0x352(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x353(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoVillageTownBuilderQuestEntry");
			return ret;
		}

		void BP_SetRecruitmentCount(int32_t CurrentCount, int32_t GoalCount); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_SetPersistentTag(FGameplayTag& InGameplayTag); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_SetGeneralInfo(FText& InName, FText& InDescription, TWeakObjectPtr<UTexture2D*>& InIcon, int32_t InStepIndex, int32_t InStepCount, bool bInIsComplete); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_SetBuiltObject(FJunoAwesomeUpgradeBuiltObjectsRequirement& InRequirement); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnQuestInfoChanged(int32_t InAchieved, int32_t InRequired, EFortRarity InRarity, FText& InDescription, FText& InCategoryHeader); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoWorldManagementUIComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x40 (0xE8 - 0xA8)
	class UJunoWorldManagementUIComponent : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_1[0x40]; // 0xA8(0x40) UNKNOWN PROPERTY

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
		TArray<UJunoMapIndicatorType*> IndicatorTypes; // 0x28(0x10)

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
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.PermaDeathFlowInitData");
			return ret;
		}
	};


	// Class JunoUI.PermaDeathFlowScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x3F8 - 0x3F0)
	class UPermaDeathFlowScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.PermaDeathFlowScreen");
			return ret;
		}

		void SetInitialActiveWidget(bool ShouldOpenOnPlayerManagement); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoFreeBuildCategoryUIData
	// Inherited from UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UJunoFreeBuildCategoryUIData : public UDataAsset	
	{
	public:
		TArray<FJunoFreeBuildCategoryUIDataEntry> Categories; // 0x30(0x10)
		TArray<FJunoFreeBuildSubCategoryUIDataEntry> Subcategories; // 0x40(0x10)

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
		TArray<FGridListViewInfo> GridListViewInfo; // 0xB58(0x10)
		bool bAlwaysShowScrollbar; // 0xB68(0x1)
		bool bAlwaysShowScrollbarTrack; // 0xB69(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xB6A(0x6) UNKNOWN PROPERTY
		FVector2D ScrollbarThickness; // 0xB70(0x10)
		FGridListSlotInfoContainer GeneratedGridListSlotInfo; // 0xB80(0x10)
		unsigned char UnknownData01_7[0x10]; // 0xB90(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.GridListView");
			return ret;
		}
	};


	// Class JunoUI.JunoAdjustableInventorySlot
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x348 - 0x2D8)
	class UJunoAdjustableInventorySlot : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x2D8(0x38) UNKNOWN PROPERTY
		UCommonButtonBase* Button_Increase; // 0x310(0x8)
		UCommonButtonBase* Button_Decrease; // 0x318(0x8)
		UJunoInventorySlot* Container_InventorySlot; // 0x320(0x8)
		FDataTableRowHandle IncreaseAction; // 0x328(0x10)
		FDataTableRowHandle DecreaseAction; // 0x338(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoAdjustableInventorySlot");
			return ret;
		}

		void OnNotifySlotReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIncreaseEventHandled(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDecreaseEventHandled(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnButtonsStateUpdated(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoDurabilityCountdown
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2B8 - 0x2B0)
	class UJunoDurabilityCountdown : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoDurabilityCountdown");
			return ret;
		}

		void SetItem(UFortItem* InItem); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74EAAA194(relative to base address)
		UFortItem GetItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CA8D54(relative to base address)
		float GetDurabilityCooldownTimeRemaining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CA8CF8(relative to base address)
		float GetDurabilityCooldownDuration(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CA8CBC(relative to base address)
	};


	// Class JunoUI.JunoInventorySlot
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x170 (0x1500 - 0x1390)
	class UJunoInventorySlot : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x70]; // 0x1390(0x70) UNKNOWN PROPERTY
		UMenuAnchor* ContextMenuAnchor; // 0x1400(0x8)
		UJunoBangWidget* JunoBangWidget; // 0x1408(0x8)
		bool bCanShowItemDetails; // 0x1410(0x1)
		bool bSupportsTooltipDisplay; // 0x1411(0x1)
		bool bDragAndDropAllowed; // 0x1412(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x1413(0x5) UNKNOWN PROPERTY
		UClass* ContextMenuClass; // 0x1418(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x1420(0x8) UNKNOWN PROPERTY
		AActor* InventoryOwner; // 0x1428(0x8)
		TWeakObjectPtr<UObject*> InventoryGroupIcon; // 0x1430(0x20)
		TWeakObjectPtr<UTexture2D*> MatchingItemIcon; // 0x1450(0x20)
		unsigned char UnknownData03_6[0x8]; // 0x1470(0x8) UNKNOWN PROPERTY
		FJunoItemSlot SlotData; // 0x1478(0x50)
		unsigned char UnknownData04_7[0x38]; // 0x14C8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInventorySlot");
			return ret;
		}

		void ShowItemDetails(bool bShow); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsEnabledForScreen(bool bInEnabledForScreen); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751CA9DA4(relative to base address)
		void OnStackCountChanged(int32_t StackCount, int32_t MaxStackCount); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowSelected(bool bInSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnResetDurabilityCooldown(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPreviewStackCountChanged(int32_t StackCount, int32_t MaxStackCount); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPreviewImageChanged(TWeakObjectPtr<UTexture2D*>& SlotImage, bool bIsValidItem, TWeakObjectPtr<UObject*>& InInventoryGroupIcon, TWeakObjectPtr<UTexture2D*>& InMatchingItemIcon, EFortRarity ItemRarity); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNotifySlotReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLeaveSwappingMode(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLeaveContextMenuMode(bool bUnselectSlot); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemHasBeenViewed(bool bHasBeenPreviouslyViewed); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnterSwappingMode(EJunoSwapItemType InSwapItemType, UFortItem* Item); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnchantmentsChanged(int32_t TotalSlots, int32_t OccupiedSlots); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnabledForScreenChanged(bool bEnabledForScreen); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDurabilityCooldownStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDurabilityCooldownEnded(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDurabilityChanged(float CurrentDurability, float MaxDurability, float NormalizedDurability, bool bFromItemInitializtion); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private, Memory Exec: 0x7FF751CA959C(relative to base address)
		FGameplayTagContainer GetSlotTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CA9254(relative to base address)
		UFortItem GetRepresentedItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CA923C(relative to base address)
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751CA8E90(relative to base address)
		FGameplayTagContainer GetMatchingItemGameplayTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CA8D78(relative to base address)
		bool GetIsEnabledForScreen(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CA8D3C(relative to base address)
	};


	// Class JunoUI.JunoInventorySlotsInfo
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UJunoInventorySlotsInfo : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr<AActor*> WeakOptionalInventoryObject; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInventorySlotsInfo");
			return ret;
		}

		void OnInventorySlotChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetNumInventorySlots(bool bOccupied); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CA8E00(relative to base address)
		int32_t GetMaxInventorySlotsAvailable(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CA8DB4(relative to base address)
	};


	// Class JunoUI.JunoRecipeCraftingCategoryUIData
	// Inherited from UDataAsset -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UJunoRecipeCraftingCategoryUIData : public UDataAsset	
	{
	public:
		UJunoCraftingCategoryUIData* CraftingCategoryUIData; // 0x30(0x8)
		TArray<FJunoCraftingStationUIDataEntry> Stations; // 0x38(0x10)
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
		unsigned char UnknownData00_3[0x24]; // 0x28(0x24) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> CraftingObject; // 0x4C(0x8)
		TWeakObjectPtr<UJunoRecipeScreenBase*> RecipeScreen; // 0x54(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoRecipeListObject");
			return ret;
		}

		bool GetIsRecipeBeingCrafted(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0740C8(relative to base address)
	};


	// Class JunoUI.JunoRecipeScreenBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE8 (0x4D8 - 0x3F0)
	class UJunoRecipeScreenBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x3F0(0x30) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> CraftingObject; // 0x420(0x8)
		UJunoRecipeDetailsWidget* RecipeDetailsWidget; // 0x428(0x8)
		UCommonButtonBase* Button_TouchSelect; // 0x430(0x8)
		UCommonButtonBase* Button_Back; // 0x438(0x8)
		UCommonButtonBase* Button_TouchClose; // 0x440(0x8)
		UGridListView* RecipeList; // 0x448(0x8)
		FGameplayTag HeaderPrefix; // 0x450(0x4)
		FGameplayTag FolderPrefix; // 0x454(0x4)
		bool SkipSortOnInventoryChange; // 0x458(0x1)
		bool EnableFolders; // 0x459(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x45A(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> WeakSelectedRecipe; // 0x45C(0x8)
		unsigned char UnknownData02_6[0x4]; // 0x464(0x4) UNKNOWN PROPERTY
		TArray<UJunoRecipeListObject*> CurrentRecipes; // 0x468(0x10)
		FGameplayTag CurrentFolder; // 0x478(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x47C(0x4) UNKNOWN PROPERTY
		UClass* FilterTabWidget; // 0x480(0x8)
		FName HeaderEntryType; // 0x488(0x4)
		FName RecipeEntryType; // 0x48C(0x4)
		FName FolderEntryType; // 0x490(0x4)
		unsigned char UnknownData04_7[0x44]; // 0x494(0x44) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoRecipeScreenBase");
			return ret;
		}

		void OnRecipeListUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurrentFolderUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FGameplayTag GetCurrentFolder(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75007672C(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> TabButtonType; // 0x30(0x20)
		TWeakObjectPtr<UClass*> TabContentType; // 0x50(0x20)
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x70(0xF0)
		FString OptionalBooleanGatingCVar; // 0x160(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoUIGameFeatureAction_AddHUDMenuTab");
			return ret;
		}
	};


	// Class JunoUI.JunoBedAssignmentScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x128 (0x518 - 0x3F0)
	class UJunoBedAssignmentScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		FText AssignPlayerCharacterDisplayText; // 0x3F8(0x10)
		TWeakObjectPtr<UTexture2D*> AssignPlayerCharacterIcon; // 0x408(0x20)
		UCommonButtonBase* BackButton; // 0x428(0x8)
		UCommonButtonBase* CloseButton; // 0x430(0x8)
		UCommonListView* List_Characters; // 0x438(0x8)
		UJunoBedAssignmentListObject* ThisBedListObject; // 0x440(0x8)
		AActor* BedObject; // 0x448(0x8)
		UCommonButtonBase* Button_Assign; // 0x450(0x8)
		FText AssignButtonText; // 0x458(0x10)
		FText UnassignButtonText; // 0x468(0x10)
		FText ReassignButtonText; // 0x478(0x10)
		FJunoModalDescription ModalDescription; // 0x488(0x68)
		UClass* ListHeaderClass; // 0x4F0(0x8)
		FText ThisBedHeaderText; // 0x4F8(0x10)
		FText VillagersHeaderText; // 0x508(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBedAssignmentScreen");
			return ret;
		}

		void OnStartLoadingData(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSelectionChanged(UJunoBedAssignmentListObject* InSelectedListObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModalConfirmed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751CD5A64(relative to base address)
		void OnModalCancelled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751CD5628(relative to base address)
		void OnDataLoadingComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		EJunoBedAssignmentActionType GetTypeFromListObject(UJunoBedAssignmentListObject* InSelectedListObject); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751CD5474(relative to base address)
		bool GetShouldShowModal(UJunoBedAssignmentListObject* InSelectedListObject); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF74EBB8CE0(relative to base address)
	};


	// Class JunoUI.JunoBuildingScreen
	// Inherited from UJunoRecipeScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x220 (0x6F8 - 0x4D8)
	class UJunoBuildingScreen : public UJunoRecipeScreenBase	
	{
	public:
		FName PreviewRecipe; // 0x4D8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4DC(0x4) UNKNOWN PROPERTY
		UCommonButtonBase* Button_ItemShop; // 0x4E0(0x8)
		FGameplayTag PrimaryCategoryPrefix; // 0x4E8(0x4)
		FGameplayTag SecondaryCategoryPrefix; // 0x4EC(0x4)
		bool bSortPriorityAscending; // 0x4F0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x4F1(0x7) UNKNOWN PROPERTY
		UFortTabListWidgetBase* TabList_PrimaryCategories; // 0x4F8(0x8)
		UFortTabListWidgetBase* TabList_SecondaryCategories; // 0x500(0x8)
		FDataTableRowHandle CloseScreenAction; // 0x508(0x10)
		float PreviewWaitTime; // 0x518(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x51C(0x4) UNKNOWN PROPERTY
		TArray<EJunoRecipeSortType> DefaultSortingPreferences; // 0x520(0x10)
		unsigned char UnknownData03_6[0x1B8]; // 0x530(0x1B8) UNKNOWN PROPERTY
		TWeakObjectPtr<UJunoCraftingCategoryFilterViewModel*> CraftingCategoryFilterViewModel; // 0x6E8(0x8)
		unsigned char UnknownData04_7[0x8]; // 0x6F0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildingScreen");
			return ret;
		}

		void SetIgnoreFilterViewModelChanges(bool bIgnoreViewModelChanges); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751CD5A78(relative to base address)
		void OnUpdateFilterBangCount(int32_t NumFilters); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSecondaryCategoriesChanged(bool bHasSecondaryCategories); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRecipeHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGuidedBuildingSnapsUpdated(TArray<int32_t>& UpdatedSnaps); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751CD59D0(relative to base address)
		void OnGuidedBuildingSetComplete(FGuidedBuildingUpdate& UpdateData); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751CD594C(relative to base address)
		void OnFolderHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasPreviewRecipe(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CD5930(relative to base address)
		void HandleShopClicked(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751CD591C(relative to base address)
		void HandleSecondaryTabTransitionComplete(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751CD58F8(relative to base address)
		void HandleSecondaryCategorySelected(FName TabID); // Flags: Final|Native|Private, Memory Exec: 0x7FF751CD5878(relative to base address)
		void HandlePrimaryCategorySelected(FName TabID); // Flags: Final|Native|Private, Memory Exec: 0x7FF751CD57F8(relative to base address)
		void HandleBackClicked(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D8BBAE4(relative to base address)
		UJunoRecipeListEntry GetWidgetFromItem(UObject* Item); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CD5530(relative to base address)
		bool GetSecondaryCategoryUIData(FName PrimaryTabId, FName SecondaryTabId, FJunoCraftingSubCategoryUIDataEntry& OutSecondaryCategoryUIData); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CD5348(relative to base address)
		bool GetPrimaryCategoryUIData(FName PrimaryTabId, FJunoCraftingCategoryUIDataEntry& OutPrimaryCategoryUIData); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CD51A4(relative to base address)
		AActor GetCraftingObject(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CD4FD8(relative to base address)
	};


	// Class JunoUI.JunoBuildMenuFilterListObject
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UJunoBuildMenuFilterListObject : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x44]; // 0x28(0x44) UNKNOWN PROPERTY
		TWeakObjectPtr<UJunoCraftingCategoryFilterViewModel*> CraftingCategoryFilterViewModel; // 0x6C(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UJunoBangWidget* JunoBangWidget; // 0x1398(0x8)
		TWeakObjectPtr<UJunoCraftingCategoryFilterViewModel*> CraftingCategoryFilterViewModel; // 0x13A0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UJunoBuildMenuFilterListObject* FilterListObject; // 0x1398(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildMenuFilterEntry");
			return ret;
		}

		void OnSetFilterInfo(UJunoCraftingCategoryFilterViewModel* ViewModel, FGameplayTag& FilterId, FText& FilterText, TWeakObjectPtr<UObject*>& FilterIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoBuildMenuFilterHeaderEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UJunoBuildMenuFilterHeaderEntry : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UCommonTextBlock* Text_Name; // 0x1398(0x8)
		UJunoBuildMenuFilterListObject* FilterListObject; // 0x13A0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildMenuFilterHeaderEntry");
			return ret;
		}

		void OnSetHeaderInfo(FText& FilterText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoFilterTagWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2D8 - 0x2D8)
	class UJunoFilterTagWidget : public UCommonUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoFilterTagWidget");
			return ret;
		}

		void OnSetFilterTagInfo(FText& DisplayText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetExtraTagsInfo(int32_t NumExtraTags); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoBuildMenuFilteringScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x438 - 0x3F0)
	class UJunoBuildMenuFilteringScreen : public UCommonActivatableWidget	
	{
	public:
		UFortTabListWidgetBase* TabList_FilterTabs; // 0x3F0(0x8)
		UGridListView* GridListView_SubFilters; // 0x3F8(0x8)
		UDynamicEntryBox* DynamicEntryBox_FilterTags; // 0x400(0x8)
		int32_t MaxNumFilterTagsDisplayed; // 0x408(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x40C(0x4) UNKNOWN PROPERTY
		UClass* FilterTabWidget; // 0x410(0x8)
		FName HeaderEntryType; // 0x418(0x4)
		FName SubCategoryEntryType; // 0x41C(0x4)
		TArray<UJunoBuildMenuFilterListObject*> CurrentFilterListObjects; // 0x420(0x10)
		TWeakObjectPtr<UJunoCraftingCategoryFilterViewModel*> CraftingCategoryFilterViewModel; // 0x430(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoBuildMenuFilteringScreen");
			return ret;
		}

		void HandleFilterTabSelected(FName TabID); // Flags: Final|Native|Private, Memory Exec: 0x7FF751CD5778(relative to base address)
		UJunoCraftingCategoryFilterViewModel GetViewModel(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CD5508(relative to base address)
	};


	// Class JunoUI.JunoCraftingFolderUIData
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UJunoCraftingFolderUIData : public UDataAsset	
	{
	public:
		TArray<FJunoCraftingFolderUIDataEntry> Entries; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoCraftingFolderUIData");
			return ret;
		}
	};


	// Class JunoUI.JunoCraftingScreen
	// Inherited from UJunoRecipeScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1E0 (0x6B8 - 0x4D8)
	class UJunoCraftingScreen : public UJunoRecipeScreenBase	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x4D8(0x10) UNKNOWN PROPERTY
		FName SelectedRecipe; // 0x4E8(0x4)
		FName AttachedRecipe; // 0x4EC(0x4)
		ECraftingStationsInventoryState CraftingStationInventoryState; // 0x4F0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x4F1(0x7) UNKNOWN PROPERTY
		UDynamicUIScene* ConfirmationModalScene; // 0x4F8(0x8)
		FText CancelJobConfirmationTitle; // 0x500(0x10)
		FText CancelJobConfirmationDescription; // 0x510(0x10)
		FText CancelJobConfirmButtonText; // 0x520(0x10)
		FText CancelJobCancelButtonText; // 0x530(0x10)
		FGameplayTag CategoryTagPrefix; // 0x540(0x4)
		FGameplayTag TypeTagPrefix; // 0x544(0x4)
		UCommonButtonBase* Button_Craft; // 0x548(0x8)
		UCommonButtonBase* Button_SelectRecipe; // 0x550(0x8)
		UCommonButtonBase* Button_QuickDeposit; // 0x558(0x8)
		UCommonButtonBase* Button_RemoveAll; // 0x560(0x8)
		UCommonButtonBase* Button_WithdrawOutput; // 0x568(0x8)
		UCommonButtonBase* Button_Track; // 0x570(0x8)
		UFortTabListWidgetBase* TabList_Categories; // 0x578(0x8)
		unsigned char UnknownData02_6[0xA0]; // 0x580(0xA0) UNKNOWN PROPERTY
		UWidget* Container_PassiveSlots; // 0x620(0x8)
		UJunoInventoryGroup* InventoryGroup_Input; // 0x628(0x8)
		UJunoInventoryGroup* InventoryGroup_Output; // 0x630(0x8)
		FDataTableRowHandle ModalConfirmAction; // 0x638(0x10)
		FDataTableRowHandle ModalCancelAction; // 0x648(0x10)
		UJunoPassiveCraftingComponent* JunoPassiveCraftingComponent; // 0x658(0x8)
		UJunoControllerComponent_CraftingNetworkEvents* CraftingEventComp; // 0x660(0x8)
		unsigned char UnknownData03_6[0x48]; // 0x668(0x48) UNKNOWN PROPERTY
		FName TrackedRecipe; // 0x6B0(0x4)
		unsigned char UnknownData04_7[0x4]; // 0x6B4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoCraftingScreen");
			return ret;
		}

		void OnWithdrawStateUpdated(bool bWithdrawEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateSelectRecipeButton(ESelectRecipeButtonState InButtonState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdatePassiveCraftingProgress(int32_t ItemsToCraft); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateCraftingStationInventoryState(ECraftingStationsInventoryState StationInventoryState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateCraftButton(EJunoCraftButtonState InButtonState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTrackedRecipeStateChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPassiveScreenFocusChange(bool bInputSlotsFocused); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemsTaken(TArray<UFortWorldItem*>& Items); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751CD56D0(relative to base address)
		void HandleCategorySelected(FName TabID); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751CD5650(relative to base address)
		void HandleAttachNewRecipeConfirmed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751CD563C(relative to base address)
		void HandleAttachNewRecipeCancelled(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751CD5628(relative to base address)
		void ForceCloseCraftingScreen(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751CD4FC4(relative to base address)
	};


	// Class JunoUI.JunoProcessingInventoryGroup
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x300 - 0x2D8)
	class UJunoProcessingInventoryGroup : public UCommonUserWidget	
	{
	public:
		UClass* ProcessingSlotClass; // 0x2D8(0x8)
		FGameplayTag GroupTag; // 0x2E0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		TArray<UJunoProcessingSlot*> TrackedInventorySlots; // 0x2E8(0x10)
		UUniformGridPanel* GridPanel_Slots; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoProcessingInventoryGroup");
			return ret;
		}

		UJunoProcessingSlot GetInventorySlot(int32_t RowIndex, int32_t ColumnIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CD50E4(relative to base address)
	};


	// Class JunoUI.JunoProcessingSlot
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xF0 (0x3C8 - 0x2D8)
	class UJunoProcessingSlot : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x2D8(0x10) UNKNOWN PROPERTY
		AActor* InventoryOwner; // 0x2E8(0x8)
		FJunoItemSlot SlotData; // 0x2F0(0x50)
		unsigned char UnknownData01_6[0x8]; // 0x340(0x8) UNKNOWN PROPERTY
		UFortLazyImage* Image_SlotIcon; // 0x348(0x8)
		UImage* Image_Progress; // 0x350(0x8)
		FCraftingProcess CurrentCraftingProcess; // 0x358(0x70)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoProcessingSlot");
			return ret;
		}

		void OnNotifySlotReleased(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemRemoved(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemAdded(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortItem GetRepresentedItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7493E4454(relative to base address)
	};


	// Class JunoUI.JunoInventoryGroup
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x360 - 0x2D8)
	class UJunoInventoryGroup : public UCommonUserWidget	
	{
	public:
		TArray<UJunoInventorySlot*> TrackedInventorySlots; // 0x2D8(0x10)
		TArray<UJunoAdjustableInventorySlot*> CraftingInputInventorySlots; // 0x2E8(0x10)
		unsigned char UnknownData00_6[0x18]; // 0x2F8(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> GroupIcon; // 0x310(0x20)
		unsigned char UnknownData01_6[0x10]; // 0x330(0x10) UNKNOWN PROPERTY
		UUniformGridPanel* GridPanel_Slots; // 0x340(0x8)
		UCommonButtonBase* Button_Sort; // 0x348(0x8)
		UClass* InventorySlotClass; // 0x350(0x8)
		UClass* CraftingInputInventorySlotClass; // 0x358(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInventoryGroup");
			return ret;
		}

		void OnSetGroupName(FText& InGroupName); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UJunoInventorySlot GetInventorySlot(int32_t RowIndex, int32_t ColumnIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CD5024(relative to base address)
		UJunoInventorySlot GetFirstSlot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751CD5000(relative to base address)
	};


	// Class JunoUI.JunoInventoryScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1F8 (0x5E8 - 0x3F0)
	class UJunoInventoryScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x3F0(0x30) UNKNOWN PROPERTY
		FText MoveAllProgressTitle; // 0x420(0x10)
		FText MoveAllProgressDescription; // 0x430(0x10)
		FText MergeAllProgressTitle; // 0x440(0x10)
		FText MergeAllProgressDescription; // 0x450(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x460(0x8) UNKNOWN PROPERTY
		UJunoInventorySlot* LastSelectedSlot; // 0x468(0x8)
		UJunoInventorySlot* LastHoveredSlot; // 0x470(0x8)
		UJunoInventorySlot* LastClickedSlot; // 0x478(0x8)
		TWeakObjectPtr<AActor*> WeakOtherInventoryActor; // 0x480(0x8)
		UJunoInventoryGroup* Group_ObjectInventory; // 0x488(0x8)
		UCommonButtonGroupBase* ButtonGroup_AllSlots; // 0x490(0x8)
		UClass* InventoryGroupClass; // 0x498(0x8)
		UCommonButtonBase* Button_Back; // 0x4A0(0x8)
		UCommonButtonBase* WBP_Juno_CloseButton_Touch; // 0x4A8(0x8)
		UCommonButtonBase* Button_MoreActions; // 0x4B0(0x8)
		UCommonButtonBase* Button_Equip; // 0x4B8(0x8)
		UCommonButtonBase* Button_Unequip; // 0x4C0(0x8)
		UCommonButtonBase* Button_MoveToInventory; // 0x4C8(0x8)
		UCommonButtonBase* Button_MoveToMainHand; // 0x4D0(0x8)
		UCommonButtonBase* Button_Drop; // 0x4D8(0x8)
		UCommonButtonBase* Button_DropOne; // 0x4E0(0x8)
		UCommonButtonBase* Button_MoveToOffHand; // 0x4E8(0x8)
		UCommonButtonBase* Button_TakeAll; // 0x4F0(0x8)
		UCommonButtonBase* Button_SmartDeposit; // 0x4F8(0x8)
		UCommonButtonBase* Button_TakeStack; // 0x500(0x8)
		UCommonButtonBase* Button_DepositStack; // 0x508(0x8)
		FDataTableRowHandle CancelAction; // 0x510(0x10)
		FDataTableRowHandle BackAction; // 0x520(0x10)
		FDataTableRowHandle CloseScreenAction; // 0x530(0x10)
		FDataTableRowHandle SortAction; // 0x540(0x10)
		UJunoPlayerInventoryContainer* Container_PlayerInventory; // 0x550(0x8)
		UJunoInventoryGroup* Group_PlayerGear; // 0x558(0x8)
		UNamedSlot* NamedSlot_ObjectInventory; // 0x560(0x8)
		float ItemsModificationProgressMinimumWaitTimeSeconds; // 0x568(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x56C(0x4) UNKNOWN PROPERTY
		TArray<FGameplayTagContainer> SortOrder; // 0x570(0x10)
		unsigned char UnknownData03_6[0x58]; // 0x580(0x58) UNKNOWN PROPERTY
		UJunoInventoryDragAndDropHandler* JunoInventoryDragAndDropHandler; // 0x5D8(0x8)
		unsigned char UnknownData04_7[0x8]; // 0x5E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInventoryScreen");
			return ret;
		}

		void OnSlotItemSelected(UFortItem* Item); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInventoryObjectUpdated(bool bInventoryObjectPresent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoHudMenu
	// Inherited from UJunoHudMenuBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x438 - 0x428)
	class UJunoHudMenu : public UJunoHudMenuBase	
	{
	public:
		UCommonButtonBase* Button_ItemShop; // 0x428(0x8)
		FName DefaultSelectedTabId; // 0x430(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x434(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoHudMenu");
			return ret;
		}

		bool ShouldShowPlayersTab(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751C945B8(relative to base address)
	};


	// Class JunoUI.JunoInventoryDragAndDropHandler
	// Inherited from UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UJunoInventoryDragAndDropHandler : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x80]; // 0x28(0x80) UNKNOWN PROPERTY
		TWeakObjectPtr<UCommonButtonGroupBase*> WeakButtonGroup_InventorySlots; // 0xA8(0x8)
		TWeakObjectPtr<AFortPlayerController*> WeakOwningPlayer; // 0xB0(0x8)
		unsigned char UnknownData01_6[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		UJunoInventorySlot* SourceInventorySlot; // 0xC0(0x8)
		UJunoInventorySlot* DestinationInventorySlot; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInventoryDragAndDropHandler");
			return ret;
		}
	};


	// Class JunoUI.JunoMapLegendWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UJunoMapLegendWidget : public UCommonUserWidget	
	{
	public:
		int32_t MaxDisplayedTeamPlayers; // 0x2D8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2DC(0x4) UNKNOWN PROPERTY
		UDynamicEntryBox* EntryBox_TeamPlayers; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapLegendWidget");
			return ret;
		}

		void OnUpdateTeamPlayerEntry(UUserWidget* EntryWidget, FUniqueNetIdRepl PlayerUniqueNetId, FString PlayerName); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoMapMarkerCustomizationEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x1400 - 0x1390)
	class UJunoMapMarkerCustomizationEntry : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x1390(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr<UTexture*> Icon; // 0x13A0(0x20)
		unsigned char UnknownData01_6[0x10]; // 0x13C0(0x10) UNKNOWN PROPERTY
		UFortLazyImage* Image_MarkerIcon; // 0x13D0(0x8)
		UBorder* ColorBorder; // 0x13D8(0x8)
		UImage* Checkmark; // 0x13E0(0x8)
		FLinearColor IconEntryBackgroundColor; // 0x13E8(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x13F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapMarkerCustomizationEntry");
			return ret;
		}

		void OnEntryInitialized(FJunoMapMarkerEntryInitData EntryInitData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoMapMarkerCustomizationScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x468 - 0x3F0)
	class UJunoMapMarkerCustomizationScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UJunoMapMarkerCustomizationEntry* SelectedColor; // 0x3F8(0x8)
		UJunoMapMarkerCustomizationEntry* SelectedIcon; // 0x400(0x8)
		UClass* EntryClass; // 0x408(0x8)
		FName ColorParamName; // 0x410(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x414(0x4) UNKNOWN PROPERTY
		UDynamicEntryBox* ColorPanel; // 0x418(0x8)
		UDynamicEntryBox* IconPanel; // 0x420(0x8)
		UCommonButtonBase* ConfirmButton; // 0x428(0x8)
		UCommonButtonGroupBase* ButtonGroup_AllIconSlots; // 0x430(0x8)
		UCommonButtonGroupBase* ButtonGroup_AllColorSlots; // 0x438(0x8)
		UFortLazyImage* Image_PreviewMarker; // 0x440(0x8)
		UJunoMapMarkerCustomizationInitData* InitData; // 0x448(0x8)
		unsigned char UnknownData02_7[0x18]; // 0x450(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapMarkerCustomizationScreen");
			return ret;
		}

		void SetPreviewMarkerMaterial(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMarkerNameText(FText& Name); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FText GetRandomName(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751CD52B4(relative to base address)
	};


	// Class JunoUI.JunoVillageScreenBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x270 (0x660 - 0x3F0)
	class UJunoVillageScreenBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x3F0(0x30) UNKNOWN PROPERTY
		UCommonButtonBase* Button_Back; // 0x420(0x8)
		UCommonButtonBase* Button_Close; // 0x428(0x8)
		FJunoVillageUIData VillageUIData; // 0x430(0x218)
		AJunoCampActor* CampActor; // 0x648(0x8)
		UJunoCampMembershipActorComponent* CampMembershipActorComponent; // 0x650(0x8)
		UJunoAwesomeLevelComponent* AwesomeLevelComponent; // 0x658(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoVillageScreenBase");
			return ret;
		}

		void OnVillageDataChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAwesomePointsModified(FJunoAwesomePointModificationData& PointModificationData); // Flags: RequiredAPI|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D05300(relative to base address)
		void OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& LevelChangeData); // Flags: RequiredAPI|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D0526C(relative to base address)
		bool GetIsTownbuilder(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D04AD0(relative to base address)
		bool GetIsOsirisCamp(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D04AAC(relative to base address)
		void BP_OnAwesomePointsChanged(FJunoAwesomePointModificationData& Data); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& Data); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoVillageUIDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UJunoVillageUIDataAsset : public UDataAsset	
	{
	public:
		TMap<FGameplayTag, TWeakObjectPtr> PerkTagToIcon; // 0x30(0x50)
		TMap<FGameplayTag, TWeakObjectPtr> RoleTagToIcon; // 0x80(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoVillageUIDataAsset");
			return ret;
		}

		TWeakObjectPtr FindRoleImage(FGameplayTagContainer& InTagContainer); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751D045C4(relative to base address)
		TWeakObjectPtr FindPerkImage(FGameplayTagContainer& InTagContainer); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751D044E0(relative to base address)
	};


	// Class JunoUI.JunoVillageUpgradeCelebrationScreen
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x318 - 0x318)
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
	// Size: 0x50 (0x328 - 0x2D8)
	class UJunoGuidedBuildingHudStateWidget : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr<AJunoGuidedBuildingActor*> CurrentGuidedBuildingActor; // 0x2D8(0x8)
		float AutoHideTimeLength; // 0x2E0(0x4)
		unsigned char UnknownData00_7[0x44]; // 0x2E4(0x44) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoGuidedBuildingHudStateWidget");
			return ret;
		}

		void ShowWidget(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74E2551C0(relative to base address)
		void OnStageComplete(FGuidedBuildingUpdate& UpdateData); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751D05610(relative to base address)
		void OnSnapsUpdated(TArray<int32_t>& UpdatedSnaps); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751D05570(relative to base address)
		void OnSetComplete(FGuidedBuildingUpdate& UpdateData); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751D054DC(relative to base address)
		void OnSectionComplete(FGuidedBuildingUpdate& UpdateData); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751D05448(relative to base address)
		void OnCurrentStageUpdate(FGuidedBuildingUpdate& UpdateData); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751D053A0(relative to base address)
		void OnAutoHideTimereFinished(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7474A9F44(relative to base address)
		void HideWidget(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF749483DBC(relative to base address)
	};


	// Class JunoUI.JunoGameEventStreamEntryWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class UJunoGameEventStreamEntryWidget : public UUserWidget	
	{
	public:
		FMulticastInlineDelegate OnHideAnimComplete; // 0x2B0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoGameEventStreamEntryWidget");
			return ret;
		}

		void OnInitGameEventEntry(FJunoEvent_GameEventMessage& GameEventMessage); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHideExpiredGameEvent(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHideAnimCompleteDelegate__DelegateSignature(UJunoGameEventStreamEntryWidget* EntryWidget); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoGameEventStreamWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x358 - 0x318)
	class UJunoGameEventStreamWidget : public UFortHUDElementWidget	
	{
	public:
		TArray<FJunoGameEventStreamData> GameEvents; // 0x318(0x10)
		unsigned char UnknownData00_6[0x1C]; // 0x328(0x1C) UNKNOWN PROPERTY
		int32_t MaxDisplayedItems; // 0x344(0x4)
		float ExpirationTime; // 0x348(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34C(0x4) UNKNOWN PROPERTY
		UDynamicEntryBox* EntryBox_GameEvents; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoGameEventStreamWidget");
			return ret;
		}

		void OnInitGameEventEntry(UUserWidget* EntryWidget, FJunoEvent_GameEventMessage& GameEventMessage); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHideExpiredGameEvent(UUserWidget* EntryWidget); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActiveGameEventsPresent(bool bHasActiveGameEvents); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleEntryHideAnimComplete(UJunoGameEventStreamEntryWidget* EntryWidget); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D04CC4(relative to base address)
	};


	// Class JunoUI.JunoAnimatedProgressBar
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x108 (0x3E0 - 0x2D8)
	class UJunoAnimatedProgressBar : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY
		FSlateBrush ProgressMaterialBrush; // 0x2E0(0xB0)
		FName FillEndParamName; // 0x390(0x4)
		FName FillStartParamName; // 0x394(0x4)
		FName FillPercentParamName; // 0x398(0x4)
		FName DeltaStartParamName; // 0x39C(0x4)
		FName DeltaEndParamName; // 0x3A0(0x4)
		FName DeltaPercentParamName; // 0x3A4(0x4)
		UFortLazyImage* Image_ProgressBar; // 0x3A8(0x8)
		UMaterialInstanceDynamic* CachedMID; // 0x3B0(0x8)
		UWidgetAnimation* BoundAnim_FillBar; // 0x3B8(0x8)
		UWidgetAnimation* BoundAnim_DeltaBar; // 0x3C0(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x3C8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoAnimatedProgressBar");
			return ret;
		}

		void SetFill(float Fill); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D05B04(relative to base address)
		void SetDelta(float Fill); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D05A84(relative to base address)
		UMaterialInstanceDynamic GetBarDynamicMaterial(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D049F8(relative to base address)
		void AnimateDeltaFromCurrent(float End, float AnimSpeed); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D04408(relative to base address)
	};


	// Class JunoUI.JunoEquipmentWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x378 - 0x318)
	class UJunoEquipmentWidget : public UFortHUDElementWidget	
	{
	public:
		UJunoInventorySlot* InventorySlot_Item; // 0x318(0x8)
		FJunoItemSlot ItemSlotData; // 0x320(0x50)
		unsigned char UnknownData00_7[0x8]; // 0x370(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoEquipmentWidget");
			return ret;
		}

		void OnSlotItemChanged(EJunoItemChangeType ChangeType, UFortItem* SlotItem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoGliderWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x330 - 0x318)
	class UJunoGliderWidget : public UFortHUDElementWidget	
	{
	public:
		UWidget* MainContent; // 0x318(0x8)
		UOverlay* Overlay_MainContent; // 0x320(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x328(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoGliderWidget");
			return ret;
		}
	};


	// Class JunoUI.JunoIndicatorLayerManagerWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D0 (0x4E8 - 0x318)
	class UJunoIndicatorLayerManagerWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x318(0x8) UNKNOWN PROPERTY
		UFortActorCanvas* GeneralIndicators; // 0x320(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x328(0x8) UNKNOWN PROPERTY
		int32_t PlayerIndicatorPoolSize; // 0x330(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x334(0x4) UNKNOWN PROPERTY
		FUserWidgetPool IndicatorPool; // 0x338(0x88)
		UJunoLocalPlayerViewModel* LocalPlayerViewModel; // 0x3C0(0x8)
		UClass* PlayerIndicatorClass; // 0x3C8(0x8)
		UFortActorCanvas* PlayerIndicators; // 0x3D0(0x8)
		float MinimumInFocusRadius; // 0x3D8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x3DC(0x4) UNKNOWN PROPERTY
		TMap<FGameplayTag, UClass*> IndicatorClasses; // 0x3E0(0x50)
		UClass* BuildingHealthWidgetClass; // 0x430(0x8)
		unsigned char UnknownData04_6[0xA0]; // 0x438(0xA0) UNKNOWN PROPERTY
		float BuildingHealthDisplayDuration; // 0x4D8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x4DC(0x4) UNKNOWN PROPERTY
		UFortActorIndicatorWidget* BuildingHealthIndicatorWidget; // 0x4E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoIndicatorLayerManagerWidget");
			return ret;
		}
	};


	// Class JunoUI.JunoInteractionIndicatorWidget
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x3E0 - 0x3C0)
	class UJunoInteractionIndicatorWidget : public UFortActorIndicatorWidget	
	{
	public:
		UFortInteractContextInfo* CurrentContextInfo; // 0x3C0(0x8)
		TWeakObjectPtr<AActor*> LastReceivingActor; // 0x3C8(0x8)
		UFortKeybindWidget* KeybindWidget; // 0x3D0(0x8)
		UCommonTextBlock* Text_KeyBindName; // 0x3D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoInteractionIndicatorWidget");
			return ret;
		}

		void OnShowPickup(AFortPickup* InCurrentPickup); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowBasicInteractionWithSecondary(FText& Description, FLinearColor DescriptionColor, FText& SecondaryDescription, FLinearColor SecondaryDescriptionColor, int32_t InteractionCount, bool bPlayAnim); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowBasicInteraction(FText& Description, FLinearColor DescriptionColor, int32_t InteractionCount, bool bPlayAnim); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoLocalPlayerViewModel
	// Inherited from UFortPlayerViewModel -> UObject
	// Size: 0x38 (0x1C0 - 0x188)
	class UJunoLocalPlayerViewModel : public UFortPlayerViewModel	
	{
	public:
		TWeakObjectPtr<AFortPlayerControllerAthena*> TrackedPlayerController; // 0x188(0x8)
		TArray<TWeakObjectPtr> CachedPlayerStates; // 0x190(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x1A0(0x20) UNKNOWN PROPERTY

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
		TMap<FUniqueNetIdRepl, UFortPlayerAvatarViewModel*> TeamPlayerAvatarViewModels; // 0x70(0x50)
		UFortPlayerAvatarViewModel* LocalPlayerAvatarViewModel; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoMapViewModel");
			return ret;
		}
	};


	// Class JunoUI.JunoNotificationWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x448 - 0x3F0)
	class UJunoNotificationWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0x3F0(0x40) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PrioData; // 0x430(0x2)
		unsigned char UnknownData01_6[0x6]; // 0x432(0x6) UNKNOWN PROPERTY
		TArray<FJunoNotificationData> QueuedNotifications; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoNotificationWidget");
			return ret;
		}

		void OnNotificationFinished(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D05434(relative to base address)
		void BP_DisplayNotification(FJunoNotificationData& NotificationData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoNotificationHostWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x118 (0x430 - 0x318)
	class UJunoNotificationHostWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x318(0x48) UNKNOWN PROPERTY
		UFortPrioritizedWidgetSwitcher* WidgetSwitcher; // 0x360(0x8)
		TMap<FGameplayTag, UClass*> TagToWidgetClassMap; // 0x368(0x50)
		TMap<FGameplayTag, UJunoNotificationWidget*> TagToWidgetMap; // 0x3B8(0x50)
		FGameplayTagContainer RecipeFilterTags; // 0x408(0x20)
		FFortPrioritizedWidgetData PrioritizationData; // 0x428(0x2)
		unsigned char UnknownData01_7[0x6]; // 0x42A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoNotificationHostWidget");
			return ret;
		}

		bool ShouldSetHasActiveContent(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74E0AB77C(relative to base address)
	};


	// Class JunoUI.JunoOffhandWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x360 - 0x318)
	class UJunoOffhandWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x318(0x18) UNKNOWN PROPERTY
		UJunoQuickbarItemRules* QuickBarTouchItemRules; // 0x330(0x8)
		UDynamicEntryBox* EntryBox_Slots; // 0x338(0x8)
		TArray<UJunoOffhandWidgetSlot*> CachedOffhandWidgetSlots; // 0x340(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x350(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoOffhandWidget");
			return ret;
		}
	};


	// Class JunoUI.JunoOffhandWidgetSlot
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x380 - 0x318)
	class UJunoOffhandWidgetSlot : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x318(0x10) UNKNOWN PROPERTY
		FJunoItemSlot ItemSlotData; // 0x328(0x50)
		UJunoInventorySlot* InventorySlot_Item; // 0x378(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoOffhandWidgetSlot");
			return ret;
		}

		void OnSlotItemChanged(EJunoItemChangeType ChangeType, UFortItem* SlotItem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.JunoPickupStream
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB8 (0x3D0 - 0x318)
	class UJunoPickupStream : public UFortHUDElementWidget	
	{
	public:
		FUserWidgetPool PickupDisplayPool; // 0x318(0x88)
		unsigned char UnknownData00_6[0x10]; // 0x3A0(0x10) UNKNOWN PROPERTY
		int32_t MaxDisplayedItems; // 0x3B0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3B4(0x4) UNKNOWN PROPERTY
		UClass* PickupEntryWidgetClass; // 0x3B8(0x8)
		float ExpirationTime; // 0x3C0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x3C4(0x4) UNKNOWN PROPERTY
		UVerticalBox* VerticalBox_PickupMessages; // 0x3C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPickupStream");
			return ret;
		}

		void RefreshPickupEntry(UUserWidget* EntryWidget, TWeakObjectPtr<UTexture2D*>& Icon, FText& DisplayName, int32_t Count, int32_t TotalInventoryCount, EFortRarity ItemRarity, EJunoPickupStreamAnim AnimType); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHideExpiredPickup(UUserWidget* EntryWidget); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActivePickupsPresent(bool bHasActivePickups); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleItemPickedUp(UFortWorldItem* WorldItem, int32_t Count); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D04DEC(relative to base address)
		void HandleEntryHideAnimComplete(UUserWidget* EntryWidget); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D04D44(relative to base address)
	};


	// Class JunoUI.JunoPlayerHitpointWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x330 - 0x318)
	class UJunoPlayerHitpointWidget : public UFortHUDElementWidget	
	{
	public:
		EJunoHealthBarType BarType; // 0x318(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x319(0x3) UNKNOWN PROPERTY
		float ValueCurrent; // 0x31C(0x4)
		float ValueLast; // 0x320(0x4)
		float ValueMax; // 0x324(0x4)
		UJunoLocalPlayerViewModel* JunoPlayerViewModel; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerHitpointWidget");
			return ret;
		}

		void OnValueChangedWithReason(EFortHitPointModificationReason Reason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMaxValueChanged(float Value); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeltaChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetLastValuePercentage(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D04AF4(relative to base address)
		float GetCurrentValuePercentage(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D04A1C(relative to base address)
	};


	// Class JunoUI.JunoPlayerIndicatorWidget
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x3F0 - 0x3C0)
	class UJunoPlayerIndicatorWidget : public UFortActorIndicatorWidget	
	{
	public:
		bool bCollapseInfoOnClamp; // 0x3C0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x3C1(0x3) UNKNOWN PROPERTY
		float MinDistanceToDisplayInfo; // 0x3C4(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x3C8(0x8) UNKNOWN PROPERTY
		UCommonTextBlock* Text_Distance; // 0x3D0(0x8)
		unsigned char UnknownData02_7[0x18]; // 0x3D8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerIndicatorWidget");
			return ret;
		}

		void OnTargetPlayerChanged(AFortPlayerStateAthena* TargetedPlayer); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInFocusStateChanged(bool bInInFocus); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnClampedStatusChanged(bool bInIsClamped); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePlayerStatePawnDied(FPawnDamageData& PawnDamageInfo); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751D04F88(relative to base address)
		void HandleCurrentPawnChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D04CB0(relative to base address)
	};


	// Class JunoUI.JunoQuickbar
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC0 (0x3D8 - 0x318)
	class UJunoQuickbar : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x318(0x18) UNKNOWN PROPERTY
		UJunoQuickbarItemRules* QuickBarTouchItemRules; // 0x330(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x338(0x8) UNKNOWN PROPERTY
		UDynamicEntryBox* EntryBox_Slots; // 0x340(0x8)
		TArray<UJunoQuickbarSlot*> CachedQuickbarSlots; // 0x348(0x10)
		unsigned char UnknownData02_7[0x80]; // 0x358(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoQuickbar");
			return ret;
		}

		void OnQuickbarSlotChanged(int32_t SelectedSlotIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleClientStopSmartObjectInteraction(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D04C9C(relative to base address)
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
	// Size: 0x20 (0x368 - 0x348)
	class UJunoQuickbarMobileContainer : public UFortMobileHUDElement	
	{
	public:
		UJunoQuickbar* JunoQuickbar; // 0x348(0x8)
		UJunoOffhandWidget* JunoOffhandWidget; // 0x350(0x8)
		UJunoInventoryDragAndDropHandler* JunoInventoryDragAndDropHandler; // 0x358(0x8)
		UCommonButtonGroupBase* ButtonGroup_AllSlots; // 0x360(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoQuickbarMobileContainer");
			return ret;
		}
	};


	// Class JunoUI.JunoQuickbarSlot
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x300 - 0x2D8)
	class UJunoQuickbarSlot : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x2D8(0x10) UNKNOWN PROPERTY
		UJunoInventorySlot* InventorySlot_Item; // 0x2E8(0x8)
		UFortKeybindWidget* Keybind_Keyboard; // 0x2F0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoQuickbarSlot");
			return ret;
		}

		void OnSlotItemChangeFailed(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSlotItemChanged(EJunoItemChangeType ChangeType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSlotInitialized(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetQuickbarSlotSelected(bool bInSelected, FText& ItemName); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPrebuildStateChanged(bool bInEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortItem GetSlotItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D04B6C(relative to base address)
	};


	// Class JunoUI.JunoReticleWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x320 - 0x318)
	class UJunoReticleWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x318(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoReticleWidget");
			return ret;
		}

		void OnWeaponFired(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDurabilityChanged(float NewDurability); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDisplayHitMarker(FGameplayTagContainer& HitTags, TEnumAsByte<EFortDamageZone> DamageZone); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAmmoChanged(int32_t MagazineAmmoRemaining, int32_t TotalAmmoRemaining); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleWeaponFire(AFortWeapon* Weapon); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D051D0(relative to base address)
		void HandleLocalReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D04EB0(relative to base address)
		void HandleAmmoChanged(int32_t MagazineAmmoRemaining, int32_t TotalAmmoRemaining); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D04BDC(relative to base address)
		float GetWeaponSpread(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D04BB4(relative to base address)
		float GetSpreadToFieldOfViewRatio(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D04B8C(relative to base address)
		AFortWeapon GetFortWeapon(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D04A70(relative to base address)
		UFortItem GetFortItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D04A4C(relative to base address)
	};


	// Class JunoUI.JunoTrackRecipeWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x398 - 0x318)
	class UJunoTrackRecipeWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x318(0x20) UNKNOWN PROPERTY
		UDynamicEntryBox* EntryBox_Ingredients; // 0x338(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x340(0x8) UNKNOWN PROPERTY
		TMap<int32_t, UJunoIngredientWidget*> JunoIngredientWidgets; // 0x348(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoTrackRecipeWidget");
			return ret;
		}

		void OnStopTrackingRecipe(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRecipeCompletionChanged(bool bIsRecipeComplete); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsTrackingRecipe(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D05250(relative to base address)
		void BP_OnTrackedRecipeChanged(FText& CraftedItem, TWeakObjectPtr<UTexture2D*>& CraftedItemIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoUI.GFA_JunoUI_OverrideReticle
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UGFA_JunoUI_OverrideReticle : public UFortUIGameFeatureAction	
	{
	public:
		TMap<UFortWeaponItemDefinition*, TWeakObjectPtr> ReticleOverrides; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.GFA_JunoUI_OverrideReticle");
			return ret;
		}
	};


	// Class JunoUI.JunoReticleContainerWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x340 - 0x318)
	class UJunoReticleContainerWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x318(0x8) UNKNOWN PROPERTY
		UCommonVisibilitySwitcher* ReticleSwitcher; // 0x320(0x8)
		UNamedSlot* ReticleOverrideSlot; // 0x328(0x8)
		UWidget* FortReticleWidget; // 0x330(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x338(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoReticleContainerWidget");
			return ret;
		}

		void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D0510C(relative to base address)
		void HandlePossessedPawnChanged(APawn* OldPawn, APawn* NewPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D05048(relative to base address)
	};


	// Class JunoUI.JunoReticleOverrideSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoReticleOverrideSubsystem : public UEngineSubsystem	
	{
	public:
		TMap<UFortWeaponItemDefinition*, TWeakObjectPtr> ActiveReticleOverrides; // 0x30(0x50)

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
		UJunoLocalPlayerViewModel* PlayerViewModel; // 0x2B0(0x8)
		UJunoAsyncAction_WaitForEventRouter* WaitForEventRouterAction; // 0x2B8(0x8)
		UClass* LocalPlayerUIMapStateClass; // 0x2C0(0x8)
		UJunoLocalPlayerUIMapState* LocalPlayerUIMapState; // 0x2C8(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x2D0(0x8) UNKNOWN PROPERTY
		FGameplayTag LastBuildingRecipeTag; // 0x2D8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2DC(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer HideWithMenuTags; // 0x2E0(0x20)
		FGameplayTagContainer DisallowMenuTags; // 0x300(0x20)
		TArray<FJunoWidgetPoolInitData> WidgetPoolInitDataArray; // 0x320(0x10)
		UJunoTaggedWidgetData* TaggedWidgetSceneData; // 0x330(0x8)
		FJunoPendingActionSetupData PendingActionSetupData; // 0x338(0x88)
		TMap<FGameplayTag, FJunoTaggedWidgetScene> TaggedWidgetScenes; // 0x3C0(0x50)
		TMap<FGameplayTag, FJunoTaggedWidget> TaggedWidgets; // 0x410(0x50)
		FJunoWidgetPool WidgetPool; // 0x460(0xB0)
		unsigned char UnknownData02_7[0x120]; // 0x510(0x120) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoDynamicUIDirector");
			return ret;
		}

		void StartRegisteringUI(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OpenStandaloneMenuScene(FJunoWidgetSceneAndIndex WidgetSceneAndIndex, UObject* BoundObject); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D05894(relative to base address)
		void OpenHudMenuScene(FJunoWidgetSceneAndIndex WidgetSceneAndIndex, UJunoHudMenuBaseInitData* HudMenuData); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D056A4(relative to base address)
		void OnIsMobileHUDShowingChanged(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnteredConversation(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePendingActionEventCleared(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D04F74(relative to base address)
		void HandleHudMenuSceneClosed(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D04DC4(relative to base address)
		bool GetIsMobileHUDShowing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D04A94(relative to base address)
		bool FindTagDrivenWidget(FGameplayTag& Tag, UClass* OutWidgetClass); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D04910(relative to base address)
		bool FindTagDrivenSceneByTagContainer(FGameplayTagContainer& TagContainer, FGameplayTag& ParentTag, FJunoWidgetSceneAndIndex& OutWidgetSceneAndIndex); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D0479C(relative to base address)
		bool FindTagDrivenScene(FGameplayTag& Tag, FJunoWidgetSceneAndIndex& OutWidgetSceneAndIndex); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D046A8(relative to base address)
		void AttemptRemoveMenuScene(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D044CC(relative to base address)
		void AckPendingAction(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D043F4(relative to base address)
	};


	// Class JunoUI.JunoDynamicUIDirectorComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UJunoDynamicUIDirectorComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		UJunoTaggedWidgetData* TaggedWidgetSceneData; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoDynamicUIDirectorComponent");
			return ret;
		}

		void UpdateHUDLayoutContexts(FGameplayTagContainer ContextsToAdd, FGameplayTagContainer ContextsToRemove); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D05C04(relative to base address)
		void OnStartRegisteringUI(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIsMobileHUDShowingChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		APlayerController GetOwningLocalPlayerController(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D04B48(relative to base address)
		AJunoDynamicUIDirector GetOwningJunoDirector(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D04B24(relative to base address)
		bool GetIsMobileHUDShowing(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E228C6C(relative to base address)
	};


	// Class JunoUI.JunoNullHUD
	// Inherited from UFortNullHUD -> UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x450 - 0x448)
	class UJunoNullHUD : public UFortNullHUD	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x448(0x8) UNKNOWN PROPERTY

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

		void JunoBuildMenuFilterResetAll(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoBuildMenuFilterRemove(FString InFilterTags); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void JunoBuildMenuFilterAdd(FString InFilterTags); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C7B3138(relative to base address)
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
		unsigned char UnknownData00_6[0xF]; // 0x81(0xF) UNKNOWN PROPERTY
		TWeakObjectPtr<AFortPlayerStateAthena*> PlayerState; // 0x90(0x8)
		float UpdatePlayerHealthInterval; // 0x98(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoUI.JunoPlayerHealthViewModel");
			return ret;
		}

		void SetupPlayerHealthVM(AFortPlayerStateAthena* InPlayerState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D05B84(relative to base address)
	};

}
