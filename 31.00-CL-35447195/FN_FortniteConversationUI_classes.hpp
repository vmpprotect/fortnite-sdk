#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortniteConversationUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FortniteConversationUI.FortConversationOptionBrief
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E0 - 0x2E0)
	class UFortConversationOptionBrief : public UCommonUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortConversationOptionBrief");
			return ret;
		}

		void ConfigureBP(FConversationContext& ClientContext, FClientConversationOptionEntry& OptionEntry, int32_t SelectedIndex); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BCBC18
	};


	// Class FortniteConversationUI.FortItemTransactionBrief
	// Inherited from UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F8 - 0x2E0)
	class UFortItemTransactionBrief : public UFortConversationOptionBrief	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
		UFortTransactionStrip TransactionStrip_Main; // 0x2E8(0x8)
		UFortItem DisplayItem; // 0x2F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortItemTransactionBrief");
			return ret;
		}

		void OnTransactionInfoReceived(UFortItem Item); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCBCF8
	};


	// Class FortniteConversationUI.FortApplyAbilityBrief
	// Inherited from UFortItemTransactionBrief -> UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x310 - 0x2F8)
	class UFortApplyAbilityBrief : public UFortItemTransactionBrief	
	{
	public:
		FText PurchaseServiceText; // 0x2F8(0x10)
		UCommonRichTextBlock Text_Display; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortApplyAbilityBrief");
			return ret;
		}

		void OnUnableToPurchase(EPreventAbilityUseReason Reason); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCBEB8
		void OnAbleToPurchase(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCBDD8
	};


	// Class FortniteConversationUI.FortBasicBrief
	// Inherited from UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E0 - 0x2E0)
	class UFortBasicBrief : public UFortConversationOptionBrief	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortBasicBrief");
			return ret;
		}

		void OnChoiceTextReceived(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BCBF98
	};


	// Class FortniteConversationUI.FortBasicItemBrief
	// Inherited from UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x350 - 0x2E0)
	class UFortBasicItemBrief : public UFortConversationOptionBrief	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
		UCommonTextBlock Text_TitleBar; // 0x2E8(0x8)
		UFortTransactionStrip TransactionStrip_Main; // 0x2F0(0x8)
		UFortItem DisplayItem; // 0x2F8(0x8)
		TMap ServiceConfigs; // 0x300(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortBasicItemBrief");
			return ret;
		}

		void OnUpdateDescriptionText(FText& DescriptionText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BCC318
		void OnUnableToUse(FText& Reason); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BCC238
		void OnItemInfoReceived(UFortItem Item, int32_t StackSize); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCC158
		void OnAbleToUse(bool bShowWarningMessage); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCC078
	};


	// Class FortniteConversationUI.FortBuyBrief
	// Inherited from UFortItemTransactionBrief -> UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2F8 - 0x2F8)
	class UFortBuyBrief : public UFortItemTransactionBrief	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortBuyBrief");
			return ret;
		}

		void OnPurchaseDataReceived(int32_t StackSize, int32_t RemainingForSale); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCC4D8
		void OnDisplayUnavailability(ECannotBuyReason CannotBuyReason); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCC3F8
	};


	// Class FortniteConversationUI.FortConversationMarker
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x110 (0x4D8 - 0x3C8)
	class UFortConversationMarker : public UFortActorIndicatorWidget	
	{
	public:
		unsigned char UnknownData07_3[0x10]; // 0x3C8(0x10) UNKNOWN PROPERTY
		bool bShowConversationLimitHit; // 0x3D8(0x1)
		unsigned char UnknownData08_6[0x27]; // 0x3D9(0x27) UNKNOWN PROPERTY
		FVector InitialOffset; // 0x400(0x18)
		FVector ManualOffset; // 0x418(0x18)
		float MessageBubbleDuration; // 0x430(0x4)
		float LastTextBubbleDuration; // 0x434(0x4)
		bool bSetCustomInteractionWidgetOnlyWhenNeeded; // 0x438(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x439(0x7) UNKNOWN PROPERTY
		UCommonVisibilitySwitcher Switcher_States; // 0x440(0x8)
		UWidget Overlay_PreviewState; // 0x448(0x8)
		unsigned char UnknownData10_6[0x8]; // 0x450(0x8) UNKNOWN PROPERTY
		UFortConversationMessageWidget ConversationMessage_Main; // 0x458(0x8)
		unsigned char UnknownData11_6[0x8]; // 0x460(0x8) UNKNOWN PROPERTY
		UCommonTextBlock Text_ParticipantName; // 0x468(0x8)
		unsigned char UnknownData12_6[0x8]; // 0x470(0x8) UNKNOWN PROPERTY
		UFortKeybindWidget Keybind_Nameplate; // 0x478(0x8)
		UImage NPCIcon; // 0x480(0x8)
		UTexture2D CustomDialogMarkerIndicatorIcon; // 0x488(0x8)
		UTexture2D DefaultDialogMarkerIndicatorIcon; // 0x490(0x8)
		TWeakObjectPtr DefaultMaxParticipantIconTexture; // 0x498(0x20)
		unsigned char UnknownData13_7[0x20]; // 0x4B8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortConversationMarker");
			return ret;
		}

		void SetIsAtMaxConversations(UFortNonPlayerConversationParticipantComponent ConversationComponent, bool bIsAtMaxConversations); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BCCBD8
		void OnSetIndicatedActor(AActor NewIndicatorActor); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCCAF8
		void OnParticipantNameSanitizationComplete(bool bSuccess, TArray SanitizedEntries, int32_t SanitizeID); // Flags: Final|Native|Protected 0x7FF414BCCA18
		void OnMessageShownOverActor(AActor OverActor); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCC938
		void OnInteractionRangeChanged(EInteractionRange TargetInteractionRange); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCC858
		void OnEntityConversationComponentParticipantsChanged(UFortNonPlayerConversationParticipantComponent ConversationComponent, TArray& Participants, bool bIsMaxParticipants); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BCC778
		void OnConversationActorProximityChanged(EInteractionRange TargetInteractionRange, UFortNonPlayerConversationParticipantComponent ConversationComponent); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCC698
		void OnCanInteract(bool bCanInteract); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCC5B8
	};


	// Class FortniteConversationUI.FortConversationMessageWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x320 - 0x320)
	class UFortConversationMessageWidget : public UFortHUDElementWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortConversationMessageWidget");
			return ret;
		}

		void SetPreviewMessage(FText& MessageToSet); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BCD038
		void OnPreviewMessageSet(FText& PreviewText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BCCF58
		void OnMessageShown(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCCE78
		void OnMessageHidden(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCCD98
		void OnMainMessageSet(FText& NPCName, FText& MessageBody); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BCCCB8
	};


	// Class FortniteConversationUI.FortConversationOption
	// Inherited from UFortRadialPickerEntry -> UFortRadialSlot -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x14E0 - 0x1440)
	class UFortConversationOption : public UFortRadialPickerEntry	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1440(0x8) UNKNOWN PROPERTY
		USoundBase OnOptionConfirmedSound; // 0x1448(0x8)
		USoundBase OnOptionHoveredSound; // 0x1450(0x8)
		UCommonVisibilitySwitcher Switcher_DisplayAsset; // 0x1458(0x8)
		TWeakObjectPtr DefaultSoftTaskIcon; // 0x1460(0x20)
		TWeakObjectPtr DefaultConfirmChoiceSound; // 0x1480(0x20)
		TWeakObjectPtr DefaultHoverChoiceSound; // 0x14A0(0x20)
		unsigned char UnknownData03_7[0x20]; // 0x14C0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortConversationOption");
			return ret;
		}

		void OnSetupPivotFromRadialInformation(int32_t NumElements, int32_t ItemIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCD658
		void OnSetupFromItemDef(UFortItem Item); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCD578
		void OnSetupFromDisplayAsset(UObject DisplayAsset); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCD498
		void OnOptionConfirmed(); // Flags: Event|Public|BlueprintEvent 0x7FF414BCD3B8
		bool IsLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BCD2D8
		bool IsAvailable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BCD1F8
		int32_t GetUnlockLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BCD118
	};


	// Class FortniteConversationUI.FortConversationOptionsPanel
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x190 - 0x178)
	class UFortConversationOptionsPanel : public UPanelWidget	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x178(0x10) UNKNOWN PROPERTY
		int32_t MaxRows; // 0x188(0x4)
		int32_t MiddleColumnWidth; // 0x18C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortConversationOptionsPanel");
			return ret;
		}

		UPanelSlot AddChildToDynamicPanel(UWidget Content); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BCD738
	};


	// Class FortniteConversationUI.FortConversationScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1C8 (0x5C0 - 0x3F8)
	class UFortConversationScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData05_3[0x18]; // 0x3F8(0x18) UNKNOWN PROPERTY
		UCommonVisibilitySwitcher Switcher_Details; // 0x410(0x8)
		unsigned char UnknownData06_6[0x38]; // 0x418(0x38) UNKNOWN PROPERTY
		UInputComponent ConversationInputComp; // 0x450(0x8)
		int32_t CurrentlySelectedIndex; // 0x458(0x4)
		bool bBlockOptionIntroAnimation; // 0x45C(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x45D(0x3) UNKNOWN PROPERTY
		FName RadialSelectionMaterialParameterName; // 0x460(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x464(0x4) UNKNOWN PROPERTY
		TArray TagPriorities; // 0x468(0x10)
		FName InteractActionNameKBM; // 0x478(0x4)
		FName ADSInputAction; // 0x47C(0x4)
		FName InteractActionNameGamepad; // 0x480(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x484(0x4) UNKNOWN PROPERTY
		FDataTableRowHandle ConfirmBinding; // 0x488(0x10)
		FDataTableRowHandle MakeSelectionBinding; // 0x498(0x10)
		FDataTableRowHandle ADSMouseBinding; // 0x4A8(0x10)
		FDataTableRowHandle CancelActionBinding; // 0x4B8(0x10)
		FDataTableRowHandle RightTriggerBinding; // 0x4C8(0x10)
		TMap DetailsNodeTypeToBrief; // 0x4D8(0x50)
		TWeakObjectPtr ChatBrief; // 0x528(0x20)
		FString DataDrivenBriefPrefix; // 0x548(0x10)
		TWeakObjectPtr DataDrivenBrief; // 0x558(0x20)
		UFortSlottedRadialMenu RadialMenu_DialogOptions; // 0x578(0x8)
		UImage Image_RadialHighlight; // 0x580(0x8)
		UFortKeybindWidget Keybind_Confirm; // 0x588(0x8)
		UFortBasicBrief BasicBrief_Main; // 0x590(0x8)
		USizeBox SizeBox_RadialMenu; // 0x598(0x8)
		UWidget Overlay_Details; // 0x5A0(0x8)
		UWidget Overlay_WheelContainer; // 0x5A8(0x8)
		UImage Image_Background; // 0x5B0(0x8)
		UImage Image_LoadingSpinner; // 0x5B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortConversationScreen");
			return ret;
		}

		bool ShouldBlockOptionIntroAnim(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414BCDD58
		void OnSelectedItemAvailabilityChanged(bool bIsAvailable); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCDC78
		void OnOptionsPopulated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCDB98
		void OnItemSelected(int32_t OriginalIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCDAB8
		void OnConversationStarted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCD9D8
		void OnConversationOptionUnavailable(UFortRadialSlot SelectedEntry); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCD8F8
		void EndConversation(); // Flags: Native|Protected 0x7FF414BCD818
	};


	// Class FortniteConversationUI.FortDataDrivenServiceBrief
	// Inherited from UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x358 - 0x2E0)
	class UFortDataDrivenServiceBrief : public UFortConversationOptionBrief	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
		UCommonTextBlock Text_TitleBar; // 0x2E8(0x8)
		UCommonRichTextBlock RichText_Description; // 0x2F0(0x8)
		UCommonTextBlock Text_StockRemaining; // 0x2F8(0x8)
		UFortTransactionStrip TransactionStrip_Main; // 0x300(0x8)
		TMap ServiceConfigs; // 0x308(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortDataDrivenServiceBrief");
			return ret;
		}

		void OnWarningMessageUpdated(FText& WarningMessage); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BCE0D8
		void OnUnableToPurchase(FText& Reason); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BCDFF8
		void OnTransactionInfoReceived(UFortItem Item); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCDF18
		void OnAbleToPurchase(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCDE38
	};


	// Class FortniteConversationUI.FortDuelBrief
	// Inherited from UFortItemTransactionBrief -> UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x318 - 0x2F8)
	class UFortDuelBrief : public UFortItemTransactionBrief	
	{
	public:
		FText TextTemplate; // 0x2F8(0x10)
		UCommonRichTextBlock Text_Objective; // 0x308(0x8)
		UCommonTileView TileView; // 0x310(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortDuelBrief");
			return ret;
		}

		void DisplayLootItems(TArray& Items); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BCE1B8
	};


	// Class FortniteConversationUI.FortHireBrief
	// Inherited from UFortItemTransactionBrief -> UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x318 - 0x2F8)
	class UFortHireBrief : public UFortItemTransactionBrief	
	{
	public:
		FText TextTemplate; // 0x2F8(0x10)
		UCommonRichTextBlock Text_Objective; // 0x308(0x8)
		UDataTable SpecializationsVisualDataTable; // 0x310(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortHireBrief");
			return ret;
		}

		void HandleNPCDismissal(bool bAtMaxNPCNum, bool bWillDismissNPCAtHire); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCE378
		void BP_SetSpecializationIcon(UObject ResourceObject); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCE298
	};


	// Class FortniteConversationUI.FortIntelBrief
	// Inherited from UFortItemTransactionBrief -> UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x310 - 0x2F8)
	class UFortIntelBrief : public UFortItemTransactionBrief	
	{
	public:
		FText TextTemplate; // 0x2F8(0x10)
		UCommonRichTextBlock Text_Objective; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortIntelBrief");
			return ret;
		}
	};


	// Class FortniteConversationUI.FortItemFundBrief
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x128 (0x408 - 0x2E0)
	class UFortItemFundBrief : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_3[0xA8]; // 0x2E0(0xA8) UNKNOWN PROPERTY
		UCommonTextBlock Text_TitleBar; // 0x388(0x8)
		UCommonTextBlock Text_ProgressPercent; // 0x390(0x8)
		UCommonTextBlock Text_ProgressCount; // 0x398(0x8)
		UFortSimpleMaterialProgressBar Progress_Funding; // 0x3A0(0x8)
		UFortLazyImage LazyImage_Icon; // 0x3A8(0x8)
		UFortTransactionStrip TransactionStrip_Main; // 0x3B0(0x8)
		TMap ServiceConfigs; // 0x3B8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortItemFundBrief");
			return ret;
		}

		void OnProgressUpdated(float CurrentFundingFraction); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCE6F8
		void OnIntializationComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCE618
		void InitializeFromContext(FConversationContext& ConversationContext); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BCE538
		FText GetDataForKey(FString Key, bool bUseIndexAdjustment); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414BCE458
	};


	// Class FortniteConversationUI.FortSingleItemFundBrief
	// Inherited from UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x348 - 0x2E0)
	class UFortSingleItemFundBrief : public UFortConversationOptionBrief	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
		UFortItemFundBrief Item_Entry; // 0x2E8(0x8)
		UFortNPCTextDisplay NPCTextDisplay; // 0x2F0(0x8)
		TMap ServiceConfigs; // 0x2F8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortSingleItemFundBrief");
			return ret;
		}
	};


	// Class FortniteConversationUI.FortMultiItemFundBrief
	// Inherited from UFortSingleItemFundBrief -> UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x358 - 0x348)
	class UFortMultiItemFundBrief : public UFortSingleItemFundBrief	
	{
	public:
		UFortItemFundBrief Item_EntrySecondary; // 0x348(0x8)
		UFortItemFundBrief Item_EntryTertiary; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortMultiItemFundBrief");
			return ret;
		}

		void UpdateSelectedVisuals(int32_t SelectedIndex); // Flags: Event|Public|BlueprintEvent 0x7FF414BCE7D8
	};


	// Class FortniteConversationUI.FortNPCTextDisplay
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C8 - 0x2B8)
	class UFortNPCTextDisplay : public UUserWidget	
	{
	public:
		UCommonRichTextBlock Text_Message; // 0x2B8(0x8)
		UFortLazyImage LazyImage_NPCImage; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortNPCTextDisplay");
			return ret;
		}

		void OnTextUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCE998
		void OnItemNameUpdated(FString ItemName); // Flags: Event|Public|BlueprintEvent 0x7FF414BCE8B8
	};


	// Class FortniteConversationUI.FortPlayerConversationUIComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x148 (0x1E8 - 0xA0)
	class UFortPlayerConversationUIComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		bool bBlockUISpawning; // 0xA8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr DialogWidgetSoftClass; // 0xB0(0x20)
		TWeakObjectPtr DialogMarkerSoftClass; // 0xD0(0x20)
		TWeakObjectPtr MobileDialogWidgetSoftClass; // 0xF0(0x20)
		TArray SpectatorConversationScenes; // 0x110(0x10)
		TArray SpectatorMobileConversationScenes; // 0x120(0x10)
		UClass DialogWidgetClass; // 0x130(0x8)
		UClass DialogMarkerClass; // 0x138(0x8)
		FUserWidgetPool DialogWidgetPool; // 0x140(0x88)
		unsigned char UnknownData05_7[0x20]; // 0x1C8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortPlayerConversationUIComponent");
			return ret;
		}

		void OnMinigameStarted(); // Flags: Final|Native|Private 0x7FF414BCEB58
		void OnMinigameReady(AFortMinigame InMinigame); // Flags: Final|Native|Protected 0x7FF414BCEA78
	};


	// Class FortniteConversationUI.FortQuestBrief
	// Inherited from UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x328 - 0x2E0)
	class UFortQuestBrief : public UFortConversationOptionBrief	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
		FText ThisMatchOnlyQuestText; // 0x2E8(0x10)
		UCommonRichTextBlock Text_Objective; // 0x2F8(0x8)
		UCommonTextBlock Text_MoneyReward; // 0x300(0x8)
		UCommonTextBlock Text_XpReward; // 0x308(0x8)
		UCommonTextBlock Text_ExpirationTime; // 0x310(0x8)
		UCommonLazyImage LazyImage_QuestProviderImage; // 0x318(0x8)
		UOverlay Overlay_QuestProvider; // 0x320(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortQuestBrief");
			return ret;
		}

		void OnQuestInformationRecieved(FText& Objective, FFortRarityItemData& RarityData, FGameplayTag& CategoryTag, int32_t XPReward, int32_t MoneyReward, int32_t TokenReward, TWeakObjectPtr& TokenRewardIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BCED18
		void OnQuestExpirationTimeSet(bool bDisplayExpirationTime); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCEC38
	};


	// Class FortniteConversationUI.FortShowFutureStormCircleBrief
	// Inherited from UFortItemTransactionBrief -> UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x310 - 0x2F8)
	class UFortShowFutureStormCircleBrief : public UFortItemTransactionBrief	
	{
	public:
		FText PurchaseServiceText; // 0x2F8(0x10)
		UCommonRichTextBlock Text_Display; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortShowFutureStormCircleBrief");
			return ret;
		}

		void OnUnableToPurchase(EPreventUseStormCircleServiceReason Reason); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCEED8
		void OnAbleToPurchase(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCEDF8
	};


	// Class FortniteConversationUI.FortSingleOrMultiItemFundBrief
	// Inherited from UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x330 - 0x2E0)
	class UFortSingleOrMultiItemFundBrief : public UFortConversationOptionBrief	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr SingleItemBrief; // 0x2E8(0x20)
		TWeakObjectPtr MultiItemsBrief; // 0x308(0x20)
		UOverlay Overlay_Brief; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortSingleOrMultiItemFundBrief");
			return ret;
		}
	};


	// Class FortniteConversationUI.FortTransactionStrip
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x330 - 0x2B8)
	class UFortTransactionStrip : public UUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		UCommonTextBlock Text_CostDescription; // 0x2C0(0x8)
		TWeakObjectPtr CachedGlobalCurrency; // 0x2C8(0x8)
		UFortWorldItemDefinition ResourceCurrency; // 0x2D0(0x8)
		unsigned char UnknownData03_7[0x58]; // 0x2D8(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortTransactionStrip");
			return ret;
		}

		void OnTransactionInfoReceived(FFortServiceTransactionInfo& TransactionInfo); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BCF098
		void OnSetTransactionCostVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCEFB8
	};


	// Class FortniteConversationUI.FortUpgradeBrief
	// Inherited from UFortItemTransactionBrief -> UFortConversationOptionBrief -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2F8 - 0x2F8)
	class UFortUpgradeBrief : public UFortItemTransactionBrief	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.FortUpgradeBrief");
			return ret;
		}

		void OnUpgradeInfoReceived(UFortItem CurrentWeapon); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCF258
		void OnUnableToUpgrade(EFortWeaponUpgradeInteractionResult CannotUpgradeCause); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCF178
	};


	// Class FortniteConversationUI.MobileConversationScreen
	// Inherited from UFortConversationScreen -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x5F0 - 0x5C0)
	class UMobileConversationScreen : public UFortConversationScreen	
	{
	public:
		UButton MobileButtonConfirm; // 0x5C0(0x8)
		UButton MobileButtonTouchInformation; // 0x5C8(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x5D0(0x8) UNKNOWN PROPERTY
		UCommonButtonBase MobileCloseButton; // 0x5D8(0x8)
		UCommonVisibilitySwitcher Switcher_CenteredDetails; // 0x5E0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x5E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteConversationUI.MobileConversationScreen");
			return ret;
		}

		void OnHandleConfirmClicked(); // Flags: Final|Native|Protected 0x7FF414BCF338
	};

}
