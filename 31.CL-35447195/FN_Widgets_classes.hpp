#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Widgets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Squeegee/Widgets/WBP_ContentGate_VideoBumper.WBP_ContentGate_VideoBumper_C
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x330 - 0x300)
	class UWBP_ContentGate_VideoBumper_C : public UFortSqueegeeWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x8)
		UImage Image_Divider; // 0x308(0x8)
		UImage Image_RatingIcon; // 0x310(0x8)
		UCommonTextBlock Text_ContentDescriptor; // 0x318(0x8)
		UCommonTextBlock Text_InteractionDescriptor; // 0x320(0x8)
		UCommonTextBlock Text_Rating; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Squeegee/Widgets/WBP_ContentGate_VideoBumper.WBP_ContentGate_VideoBumper_C");
			return ret;
		}

		void ShowGameRatingInfo(UFortGameActivity GameActivity); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6507000
		void GetTextFromDescriptorArray(TArray& Descriptors, FText& Text); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB650A500
		void SetGameActivity(UFortGameActivity GameActivity); // Flags: Event|Public|BlueprintEvent 0x15DB6506F00
		void ExecuteUbergraph_WBP_ContentGate_VideoBumper(int32_t EntryPoint); // Flags: Final 0x15DB650A400
	};


	// Class /Squeegee/Widgets/WBP_ContentGate_RatingTag.WBP_ContentGate_RatingTag_C
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x14 (0x314 - 0x300)
	class UWBP_ContentGate_RatingTag_C : public UFortSqueegeeWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x8)
		UWBP_UIKit_Tag_C WBP_UIKit_Tag; // 0x308(0x8)
		float InHeightOverride; // 0x310(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Squeegee/Widgets/WBP_ContentGate_RatingTag.WBP_ContentGate_RatingTag_C");
			return ret;
		}

		void SetGameActivity(UFortGameActivity GameActivity); // Flags: Event|Public|BlueprintEvent 0x15DB6509C00
		void ExecuteUbergraph_WBP_ContentGate_RatingTag(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB6DE0600
	};


	// Class /Squeegee/Widgets/WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x350 - 0x300)
	class UWBP_ContentGate_LockIcon_C : public UFortSqueegeeWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x8)
		UWBP_UIKit_StatusIndicator_C StatusIndicator_Locked; // 0x308(0x8)
		FLinearColor OutlineColor; // 0x310(0x10)
		FLinearColor TextureColor; // 0x320(0x10)
		FVector2D IconSize; // 0x330(0x10)
		bool IsLocked; // 0x340(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x341(0x3) UNKNOWN PROPERTY
		FName IsUnlockedParam; // 0x344(0x4)
		FName OutlineColorParam; // 0x348(0x4)
		FName TextureColorParam; // 0x34C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Squeegee/Widgets/WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6509800
		void SetGameActivity(UFortGameActivity GameActivity); // Flags: Event|Public|BlueprintEvent 0x15DB650CC00
		void ExecuteUbergraph_WBP_ContentGate_LockIcon(int32_t EntryPoint); // Flags: Final 0x15DB6509700
	};


	// Class /Squeegee/Widgets/WBP_ContentGate_RatingCardButton.WBP_ContentGate_RatingCardButton_C
	// Inherited from UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x49 (0x13F1 - 0x13A8)
	class UWBP_ContentGate_RatingCardButton_C : public UUIKitModularButton	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x13B0(0x8)
		UWBP_UIKit_Block_Outline_C Block_Outline; // 0x13B8(0x8)
		UImage Image_Divider; // 0x13C0(0x8)
		UImage Image_RatingIcon; // 0x13C8(0x8)
		UCommonTextBlock Text_ContentDescriptor; // 0x13D0(0x8)
		UCommonTextBlock Text_InteractionDescriptor; // 0x13D8(0x8)
		UCommonTextBlock Text_Rating; // 0x13E0(0x8)
		UFortGameActivity CachedGameActivity; // 0x13E8(0x8)
		bool bIsUsingInstrumentController; // 0x13F0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Squeegee/Widgets/WBP_ContentGate_RatingCardButton.WBP_ContentGate_RatingCardButton_C");
			return ret;
		}

		void ShowGameRatingInfo(UFortGameActivity GameActivity); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D8B016A00
		void GetTextFromDescriptorArray(TArray& Descriptors, FText& Text); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D8B016C00
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D8B017100
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D8B017000
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D8B016B00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D8B016F00
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x15D8B017200
		void CustomEvent(FPlatformUserId UserId, FInputDeviceId DeviceID); // Flags: BlueprintCallable|BlueprintEvent 0x15D8B016E00
		void ExecuteUbergraph_WBP_ContentGate_RatingCardButton(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D8B016D00
	};


	// Class /Squeegee/Widgets/WBP_ContentGate_UnlockDetails.WBP_ContentGate_UnlockDetails_C
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x340 - 0x300)
	class UWBP_ContentGate_UnlockDetails_C : public UFortSqueegeeWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x8)
		UWBP_ContentGate_RatingCardButton_C RatingCard; // 0x308(0x8)
		UCommonTextBlock Text_Info; // 0x310(0x8)
		FText InfoText; // 0x318(0x10)
		FText InfoTextOtherPlayer; // 0x328(0x10)
		AFortPlayerController Unlock_Player; // 0x338(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Squeegee/Widgets/WBP_ContentGate_UnlockDetails.WBP_ContentGate_UnlockDetails_C");
			return ret;
		}

		void SetInfoText(UFortGameActivity GameActivity); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D8B016400
		void ShowGameRatingInfo(UFortGameActivity GameActivity); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8B01A400
		void SetGameActivity(UFortGameActivity GameActivity); // Flags: Event|Public|BlueprintEvent 0x15D8B016500
		void SetUnlockPlayer(AFortPlayerController UnlockPlayer); // Flags: Event|Public|BlueprintEvent 0x15D8B01A500
		void ExecuteUbergraph_WBP_ContentGate_UnlockDetails(int32_t EntryPoint); // Flags: Final 0x15D8B016600
	};


	// Class /Squeegee/Widgets/WBP_ContentGate_RatingCard.WBP_ContentGate_RatingCard_C
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x310 - 0x300)
	class UWBP_ContentGate_RatingCard_C : public UFortSqueegeeWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x8)
		UWBP_ContentGate_RatingCardButton_C WBP_ContentGate_RatingCardButton; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Squeegee/Widgets/WBP_ContentGate_RatingCard.WBP_ContentGate_RatingCard_C");
			return ret;
		}

		void SetGameActivity(UFortGameActivity GameActivity); // Flags: Event|Public|BlueprintEvent 0x15D8C02D600
		void ExecuteUbergraph_WBP_ContentGate_RatingCard(int32_t EntryPoint); // Flags: Final 0x15D8C02D700
	};


	// Class /Motd/Widgets/WBP_MOTD_Pip_Entry.WBP_MOTD_Pip_Entry_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x318 - 0x2B8)
	class UWBP_MOTD_Pip_Entry_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UWidgetAnimation Anim_Progress; // 0x2C0(0x8)
		UWidgetAnimation Anim_Active_NoTimer; // 0x2C8(0x8)
		UWidgetAnimation Anim_Active; // 0x2D0(0x8)
		UBorder PIP; // 0x2D8(0x8)
		USpacer PipSpacer; // 0x2E0(0x8)
		bool DisplayTimer; // 0x2E8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x2E9(0x3) UNKNOWN PROPERTY
		float CurrentProgressionTime; // 0x2EC(0x4)
		double Duration_Value; // 0x2F0(0x8)
		bool Show_Progressbar; // 0x2F8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x2F9(0x7) UNKNOWN PROPERTY
		double PipWidthRatio; // 0x300(0x8)
		FVector2D PipSize; // 0x308(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Motd/Widgets/WBP_MOTD_Pip_Entry.WBP_MOTD_Pip_Entry_C");
			return ret;
		}

		void SetPipSize(FVector2D PipSize); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC7C400
		void SetPipWidthRatio(double NewParam); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC7C600
		void SetTimerAnimPlaying(bool IsPaused); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC7C300
		void SetDisplayTimer(bool DisplayTimer, bool Show Progressbar); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC78A00
		void SetDuration(double DurationValue); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC7C700
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D5DC7FB00
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15D5DC7FA00
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15D5DC7F900
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15D5DC7F200
		void SetActive(bool Active); // Flags: BlueprintCallable|BlueprintEvent 0x15D5DC78B00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5DC7CA00
		void ExecuteUbergraph_WBP_MOTD_Pip_Entry(int32_t EntryPoint); // Flags: Final 0x15D5DC79C00
	};


	// Class /Motd/Widgets/WBP_MOTD_Pip_List.WBP_MOTD_Pip_List_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x308 - 0x2B8)
	class UWBP_MOTD_Pip_List_C : public UUserWidget	
	{
	public:
		UDynamicEntryBox PipBox; // 0x2B8(0x8)
		TArray PipsArray; // 0x2C0(0x10)
		int32_t Count; // 0x2D0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x2D4(0x4) UNKNOWN PROPERTY
		UWBP_MOTD_Pip_Entry_C Current_Pip_Entry; // 0x2D8(0x8)
		int32_t Index; // 0x2E0(0x4)
		bool Anim_Pip; // 0x2E4(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x2E5(0x3) UNKNOWN PROPERTY
		double Duration_Value; // 0x2E8(0x8)
		bool Show_Progress; // 0x2F0(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x2F1(0x7) UNKNOWN PROPERTY
		FVector2D PipSize; // 0x2F8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Motd/Widgets/WBP_MOTD_Pip_List.WBP_MOTD_Pip_List_C");
			return ret;
		}

		void PauseActivePip(bool Is Paused); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC7B600
		void SetActivePip(int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC7B800
		void SetPipsCount(int32_t Count, double Duration Value, bool Anim Pip, bool Show Progress); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC7B500
	};


	// Class /Motd/Widgets/WBP_ArrowButton.WBP_ArrowButton_C
	// Inherited from UWBP_UIKit_Button_Generic_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x9 (0x1749 - 0x1740)
	class UWBP_ArrowButton_C : public UWBP_UIKit_Button_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		bool InverseArrow; // 0x1748(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Motd/Widgets/WBP_ArrowButton.WBP_ArrowButton_C");
			return ret;
		}

		void InverseArrowDirection(bool InverseArrow); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC7E500
		void SetCornerRadius(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D5DC7DD00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5DC7DE00
		void ExecuteUbergraph_WBP_ArrowButton(int32_t EntryPoint); // Flags: Final 0x15D5DC7E100
	};


	// Class /Motd/Widgets/WBP_MOTD_Full_List.WBP_MOTD_Full_List_C
	// Inherited from UFortDynamicMotdFullscreenWidget -> UMotdWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x99 (0x4B9 - 0x420)
	class UWBP_MOTD_Full_List_C : public UFortDynamicMotdFullscreenWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x8)
		UMotdListViewModel MotdListViewModel; // 0x428(0x8)
		UWidgetAnimation Intro; // 0x430(0x8)
		UCloseButton_C Button_CloseTouch; // 0x438(0x8)
		UWBP_BottomBarDecoyButton_C DecoyButton_Close; // 0x440(0x8)
		UWBP_ArrowButton_C WBP_ArrowButton_Left; // 0x448(0x8)
		UWBP_ArrowButton_C WBP_ArrowButton_Right; // 0x450(0x8)
		UWBP_MOTD_Pip_List_C WBP_MOTD_Pip_List; // 0x458(0x8)
		UWBP_UIKit_Scrim_C WBP_UIKit_Scrim; // 0x460(0x8)
		int32_t Count; // 0x468(0x4)
		int32_t Index; // 0x46C(0x4)
		UMaterialInstanceDynamic Material; // 0x470(0x8)
		TArray MyMotds; // 0x478(0x10)
		UWBP_MOTD_Pip_Entry_C Current_Pip_Entry; // 0x488(0x8)
		UWBP_MOTD_Pip_Entry_C PrevPipEntry; // 0x490(0x8)
		TArray PipsArray; // 0x498(0x10)
		bool Anim_Pip; // 0x4A8(0x1)
		bool SwitchingMOTD; // 0x4A9(0x1)
		bool SentManualControlEvent; // 0x4AA(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x4AB(0x5) UNKNOWN PROPERTY
		double CurrentScrollboxOffset; // 0x4B0(0x8)
		bool IgnoreScrolled; // 0x4B8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Motd/Widgets/WBP_MOTD_Full_List.WBP_MOTD_Full_List_C");
			return ret;
		}

		void SetMotdListViewModel(UMotdListViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D5B0A4D00
		void ChildVideoPlayingControlBroadcast(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5B0A5A00
		void ClearMOTDList(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5B0A5900
		void Set Active Slide(int32_t Index, bool Scrolled); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A4E00
		void Goto Right(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A5400
		void Goto Left(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A5500
		void Add MOTD to List(TArray& Motds); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5B0A6200
		void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent 0x15D5B0A5100
		void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent 0x15D5B0A5000
		void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent 0x15D5B0A4F00
		void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent 0x15D5B0A5200
		void SwipeLeft(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0A4B00
		void SwipeRight(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0A4A00
		void SetSlideIndex(int32_t Index); // Flags: Event|Public|BlueprintEvent 0x15D5B0A4C00
		void BndEvt__WBP_MOTD_Full_List_WBP_ArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D5B0A5D00
		void BndEvt__WBP_MOTD_Full_List_WBP_ArrowButton_Left_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D5B0A5E00
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0A5C00
		void BndEvt__WBP_MOTD_Full_List_Button_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D5B0A6100
		void BndEvt__WBP_MOTD_Full_List_Button_CloseTouch_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D5B0A6000
		void HandleInputTypeChange(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A5300
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5B0A5800
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5B0A5700
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0A5B00
		void BndEvt__WBP_MOTD_Full_List_ScrollBox_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Flags: BlueprintEvent 0x15D5B0A5F00
		void ExecuteUbergraph_WBP_MOTD_Full_List(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D5B0A5600
	};


	// Class /Motd/Widgets/WBP_MOTD_Full_TileItem.WBP_MOTD_Full_TileItem_C
	// Inherited from UFortDynamicMotdFullscreenTile -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x540 - 0x408)
	class UWBP_MOTD_Full_TileItem_C : public UFortDynamicMotdFullscreenTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x8)
		UMotdViewModel MotdViewModel; // 0x410(0x8)
		UWidgetAnimation Loaded; // 0x418(0x8)
		UCommonRichTextBlock Content_Horizontal; // 0x420(0x8)
		UCommonRichTextBlock Content_Vertical; // 0x428(0x8)
		UGridPanel GP_Content; // 0x430(0x8)
		UImage Image; // 0x438(0x8)
		USizeBox SB_ScrollingText; // 0x440(0x8)
		UScrollBox ScrollBox; // 0x448(0x8)
		USizeBox SizeBox_Buttons; // 0x450(0x8)
		UCommonRichTextBlock Title_Horizontal; // 0x458(0x8)
		UCommonRichTextBlock Title_Vertical; // 0x460(0x8)
		UVerticalBox VB_Horizontal_Content; // 0x468(0x8)
		UVerticalBox VB_Vertical_Content; // 0x470(0x8)
		UVerticalBox VerticalBox_Buttons; // 0x478(0x8)
		UWBP_CaptureForPostBufferUpdate_C WBP_CaptureForPostBufferUpdate; // 0x480(0x8)
		UMaterialInstanceDynamic Material; // 0x488(0x8)
		int32_t Index; // 0x490(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x494(0x4) UNKNOWN PROPERTY
		TArray Teaser_Images; // 0x498(0x10)
		UMotdViewModel As_Motd_View_Model; // 0x4A8(0x8)
		UCMSImage_C NewVar; // 0x4B0(0x8)
		TArray Motd_Buttons; // 0x4B8(0x10)
		bool Loading; // 0x4C8(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x4C9(0x7) UNKNOWN PROPERTY
		UWidget Parent; // 0x4D0(0x8)
		FMulticastInlineDelegate CloseWidget; // 0x4D8(0x10)
		TArray Buttons_Array; // 0x4E8(0x10)
		int32_t Button_Index; // 0x4F8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x4FC(0x4) UNKNOWN PROPERTY
		FText Text; // 0x500(0x10)
		UWBP_UIKit_Button_Regular_C NewRegularButton; // 0x510(0x8)
		UWBP_UIKit_Button_Loud_C NewLoudButton; // 0x518(0x8)
		bool Debug_IsVertical; // 0x520(0x1)
		bool VideoPlaying; // 0x521(0x1)
		bool DoingAction; // 0x522(0x1)
		bool VideoHasPriority; // 0x523(0x1)
		unsigned char UnknownData08_6[0x4]; // 0x524(0x4) UNKNOWN PROPERTY
		UTexture2D ImageTexture; // 0x528(0x8)
		bool StartVideoDelayed_Scrolled; // 0x530(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x531(0x7) UNKNOWN PROPERTY
		FTimerHandle StartVideoDelayed_Handle; // 0x538(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Motd/Widgets/WBP_MOTD_Full_TileItem.WBP_MOTD_Full_TileItem_C");
			return ret;
		}

		void SetMotdViewModel(UMotdViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D5B0A4800
		void VideoTerminalErrorEvent(EBaseMediaTerminalErrorReason Reason); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A6600
		void VideoEndedEvent(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A6A00
		void VideoPlayingEvent(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A6800
		void VideoLoadedEvent(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A6900
		void PerformCallToAction(UCommonButtonBase Button Context); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5B0A7300
		void Set Vertical Layout(bool IsVertical); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A6F00
		void Button Pressed(UMotdActionBase Action, UCommonButtonBase Button Context); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5B0A8400
		UWidget DoCustomNavigation Down(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5B0A8000
		UWidget DoCustomNavigation Up(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5B0A7F00
		UWidget Do Custom Navigation Right(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5B0A8100
		UWidget Do Custom Navigation Left(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5B0A8200
		void Set Active(bool Active, UWidget Parent, bool Scroll); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A7000
		void Get Background Image(FMotdBackground Motd Background); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5B0A7D00
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0A4400
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15D5B0A4300
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15D5B0A4500
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15D5B0A7500
		void Get CMS Image(FString URL); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A7B00
		void OnImageLoadingComplete_Event(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A7600
		void GoUp(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A7900
		void GoDown(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A7A00
		void Get Buttons(TArray& Buttons Array); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5B0A7C00
		void Loud Button Call Action(UCommonButtonBase Button); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A7700
		void Regular Button Call Action(UCommonButtonBase Button); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A7100
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5B0A7200
		void OnVideoBackgroundsAllowedChanged(bool bAllowVideoBackgrounds); // Flags: Event|Protected|BlueprintEvent 0x15D5B0A7400
		void StartVideo(bool SkipClosedControlBroadcast); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A6E00
		void StopVideo(bool SkipClosedControlBroadcast); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A6C00
		void HandleVideoAction(UMotdActionBase Action); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A7800
		void VideoStartedEvent(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A6700
		void VideoActionEndedEvent(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A6B00
		void StartVideoDelayed(bool Delay); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A6D00
		void DelayedVideoStart(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A8300
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0A4600
		void ExecuteUbergraph_WBP_MOTD_Full_TileItem(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D5B0A7E00
		void CloseWidget__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5B0A4900
	};


	// Class /Motd/Widgets/WBP_MOTD_Teaser_List.WBP_MOTD_Teaser_List_C
	// Inherited from UFortDynamicMotdTeaserWidget -> UMotdWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x100 (0x578 - 0x478)
	class UWBP_MOTD_Teaser_List_C : public UFortDynamicMotdTeaserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x8)
		UMotdListViewModel MotdListViewModel; // 0x480(0x8)
		UWidgetAnimation Anim_ContentLoaded; // 0x488(0x8)
		UWidgetAnimation Hover; // 0x490(0x8)
		UWidgetAnimation FrameTransition; // 0x498(0x8)
		UWBP_UIKit_Block_Outline_C Block_Outline; // 0x4A0(0x8)
		UButton Button; // 0x4A8(0x8)
		UCommonActionWidget InputActionWidget; // 0x4B0(0x8)
		UOverlay Overlay_MOTD; // 0x4B8(0x8)
		USimpleCommonButton_C SimpleCommonButton; // 0x4C0(0x8)
		URichTextBlock TeaserTextA; // 0x4C8(0x8)
		URichTextBlock TeaserTextB; // 0x4D0(0x8)
		UImage Thumbnail; // 0x4D8(0x8)
		UWBP_MOTD_Pip_List_C WBP_MOTD_Pip_List; // 0x4E0(0x8)
		TArray PipsArray; // 0x4E8(0x10)
		int32_t Count; // 0x4F8(0x4)
		int32_t Index; // 0x4FC(0x4)
		FTimerHandle timer_handle; // 0x500(0x8)
		double Entry_Show_Time; // 0x508(0x8)
		TArray MyMotds; // 0x510(0x10)
		UCMSImage_C CMS_Image; // 0x520(0x8)
		TArray TeaserImages; // 0x528(0x10)
		bool Animate_Pip; // 0x538(0x1)
		bool Show_Progressbar; // 0x539(0x1)
		bool IsLoading; // 0x53A(0x1)
		unsigned char UnknownData03_6[0x5]; // 0x53B(0x5) UNKNOWN PROPERTY
		USoundBase HoverSound; // 0x540(0x8)
		USoundBase PressedSound; // 0x548(0x8)
		FName CurrentlyUsedTextureParam; // 0x550(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x554(0x4) UNKNOWN PROPERTY
		FText CurrentTeaser; // 0x558(0x10)
		bool ImageA; // 0x568(0x1)
		bool FullScreenMotdActioning; // 0x569(0x1)
		bool FirstLoop; // 0x56A(0x1)
		bool ActivatedOnce; // 0x56B(0x1)
		bool LobbyActivated; // 0x56C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x56D(0x3) UNKNOWN PROPERTY
		FTimerHandle DebounceUpdateHandle; // 0x570(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Motd/Widgets/WBP_MOTD_Teaser_List.WBP_MOTD_Teaser_List_C");
			return ret;
		}

		void SetMotdListViewModel(UMotdListViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D5B0A8B00
		void DebouncedUpdateMOTD(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A9A00
		void BlockStartIfVideoNotReady(bool& bLock); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5B0AA300
		void VideoEndedEvent(FName TextureParam); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A8600
		void SetBindings(bool Bindings Enabled); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5B0A8D00
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D5B0A9E00
		void VideoPlayingEvent(FName TextureParam, UMediaTexture Texture, FText Name); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A8500
		void GetNextTileInfo(bool First, bool Peek, FName& Param, URichTextBlock& TextBlock); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D5B0A9200
		void GetIndex(int32_t WantIndex, bool Increment, int32_t& Index); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5B0A9300
		void Reset MOTD State(bool FromActivated); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A8F00
		void SetLoadingDisplay(bool IsLoading); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5B0A8C00
		void Get CMS Image(int32_t Image Index); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5B0A9500
		void Set MOTD(int32_t Index, FName TextureParam, URichTextBlock TeaserText, bool First, FName& OutTextureParam); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5B0A8E00
		void Get MOTD View Models Array(TArray& Motds); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5B0A9400
		void Finished_E6CCEB054D417B47E0A900AC43512D5C(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A9800
		void Start Timer(double Time); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A8900
		void Add Progress(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0AA400
		void BndEvt__WBP_MOTD_Teaser_List_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Flags: BlueprintEvent 0x15D5B0AA200
		void BndEvt__WBP_MOTD_Teaser_List_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Flags: BlueprintEvent 0x15D5B0AA100
		void BndEvt__WBP_MOTD_Teaser_List_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Flags: BlueprintEvent 0x15D5B0AA000
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5B0A9B00
		void Add MOTD Images to Array(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0AA500
		void OnImageLoadingComplete(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A9100
		void BndEvt__WBP_MOTD_Teaser_List_SimpleCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy Button); // Flags: BlueprintEvent 0x15D5B0A9F00
		void Start Next Frame(bool FromLoop); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A8A00
		void OnVideoBackgroundsAllowedChanged(bool bAllowVideoBackgrounds); // Flags: Event|Protected|BlueprintEvent 0x15D5B0A9000
		void StartVideoBP(UMotdViewModel& Motd, FName TextureParam, bool PlayImmediately); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5B0A8800
		void StopVideo(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A8700
		void FUllScreenWidgetCreatedEvent(UFortDynamicMotdFullscreenWidget Widget); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A9600
		void FullScreenWidgetClosed(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0A9700
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0A9D00
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0A9C00
		void VideoReadyEvent(bool bReady); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0AC600
		void ExecuteUbergraph_WBP_MOTD_Teaser_List(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D5B0A9900
	};

}
