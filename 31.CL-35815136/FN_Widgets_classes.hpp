#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Widgets
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Squeegee/Widgets/WBP_ContentGate_RatingTag.WBP_ContentGate_RatingTag_C
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x14 (0x30C - 0x2F8)
	class UWBP_ContentGate_RatingTag_C : public UFortSqueegeeWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F8(0x8)
		UWBP_UIKit_Tag_C* WBP_UIKit_Tag; // 0x300(0x8)
		float InHeightOverride; // 0x308(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Squeegee/Widgets/WBP_ContentGate_RatingTag.WBP_ContentGate_RatingTag_C");
			return ret;
		}

		void SetGameActivity(UFortGameActivity* GameActivity); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ContentGate_RatingTag(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Squeegee/Widgets/WBP_ContentGate_VideoBumper.WBP_ContentGate_VideoBumper_C
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x328 - 0x2F8)
	class UWBP_ContentGate_VideoBumper_C : public UFortSqueegeeWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F8(0x8)
		UImage* Image_Divider; // 0x300(0x8)
		UImage* Image_RatingIcon; // 0x308(0x8)
		UCommonTextBlock* Text_ContentDescriptor; // 0x310(0x8)
		UCommonTextBlock* Text_InteractionDescriptor; // 0x318(0x8)
		UCommonTextBlock* Text_Rating; // 0x320(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Squeegee/Widgets/WBP_ContentGate_VideoBumper.WBP_ContentGate_VideoBumper_C");
			return ret;
		}

		void ShowGameRatingInfo(UFortGameActivity* GameActivity); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTextFromDescriptorArray(TArray<FText>& Descriptors, FText& Text); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGameActivity(UFortGameActivity* GameActivity); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ContentGate_VideoBumper(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Squeegee/Widgets/WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x348 - 0x2F8)
	class UWBP_ContentGate_LockIcon_C : public UFortSqueegeeWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F8(0x8)
		UWBP_UIKit_StatusIndicator_C* StatusIndicator_Locked; // 0x300(0x8)
		FLinearColor OutlineColor; // 0x308(0x10)
		FLinearColor TextureColor; // 0x318(0x10)
		FVector2D IconSize; // 0x328(0x10)
		bool IsLocked; // 0x338(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x339(0x3) UNKNOWN PROPERTY
		FName IsUnlockedParam; // 0x33C(0x4)
		FName OutlineColorParam; // 0x340(0x4)
		FName TextureColorParam; // 0x344(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Squeegee/Widgets/WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGameActivity(UFortGameActivity* GameActivity); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ContentGate_LockIcon(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Motd/Widgets/WBP_MOTD_Teaser_List.WBP_MOTD_Teaser_List_C
	// Inherited from UFortDynamicMotdTeaserWidget -> UMotdWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x100 (0x570 - 0x470)
	class UWBP_MOTD_Teaser_List_C : public UFortDynamicMotdTeaserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x8)
		UMotdListViewModel* MotdListViewModel; // 0x478(0x8)
		UWidgetAnimation* Anim_ContentLoaded; // 0x480(0x8)
		UWidgetAnimation* Hover; // 0x488(0x8)
		UWidgetAnimation* FrameTransition; // 0x490(0x8)
		UWBP_UIKit_Block_Outline_C* Block_Outline; // 0x498(0x8)
		UButton* Button; // 0x4A0(0x8)
		UCommonActionWidget* InputActionWidget; // 0x4A8(0x8)
		UOverlay* Overlay_MOTD; // 0x4B0(0x8)
		USimpleCommonButton_C* SimpleCommonButton; // 0x4B8(0x8)
		URichTextBlock* TeaserTextA; // 0x4C0(0x8)
		URichTextBlock* TeaserTextB; // 0x4C8(0x8)
		UImage* Thumbnail; // 0x4D0(0x8)
		UWBP_MOTD_Pip_List_C* WBP_MOTD_Pip_List; // 0x4D8(0x8)
		TArray<UWBP_MOTD_Pip_Entry_C*> PipsArray; // 0x4E0(0x10)
		int32_t Count; // 0x4F0(0x4)
		int32_t Index; // 0x4F4(0x4)
		FTimerHandle timer_handle; // 0x4F8(0x8)
		double Entry_Show_Time; // 0x500(0x8)
		TArray<UMotdViewModel*> MyMotds; // 0x508(0x10)
		UCMSImage_C* CMS_Image; // 0x518(0x8)
		TArray<UTexture2D*> TeaserImages; // 0x520(0x10)
		bool Animate_Pip; // 0x530(0x1)
		bool Show_Progressbar; // 0x531(0x1)
		bool IsLoading; // 0x532(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x533(0x5) UNKNOWN PROPERTY
		USoundBase* HoverSound; // 0x538(0x8)
		USoundBase* PressedSound; // 0x540(0x8)
		FName CurrentlyUsedTextureParam; // 0x548(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x54C(0x4) UNKNOWN PROPERTY
		FText CurrentTeaser; // 0x550(0x10)
		bool ImageA; // 0x560(0x1)
		bool FullScreenMotdActioning; // 0x561(0x1)
		bool FirstLoop; // 0x562(0x1)
		bool ActivatedOnce; // 0x563(0x1)
		bool LobbyActivated; // 0x564(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x565(0x3) UNKNOWN PROPERTY
		FTimerHandle DebounceUpdateHandle; // 0x568(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Motd/Widgets/WBP_MOTD_Teaser_List.WBP_MOTD_Teaser_List_C");
			return ret;
		}

		void SetMotdListViewModel(UMotdListViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DebouncedUpdateMOTD(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BlockStartIfVideoNotReady(bool& bLock); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VideoEndedEvent(FName TextureParam); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBindings(bool Bindings Enabled); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VideoPlayingEvent(FName TextureParam, UMediaTexture* Texture, FText Name); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetNextTileInfo(bool First, bool Peek, FName& Param, URichTextBlock* TextBlock); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetIndex(int32_t WantIndex, bool Increment, int32_t& Index); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Reset MOTD State(bool FromActivated); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetLoadingDisplay(bool IsLoading); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get CMS Image(int32_t Image Index); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set MOTD(int32_t Index, FName TextureParam, URichTextBlock* TeaserText, bool First, FName& OutTextureParam); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get MOTD View Models Array(TArray<UMotdViewModel*>& Motds); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_E6CCEB054D417B47E0A900AC43512D5C(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Start Timer(double Time); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Add Progress(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_MOTD_Teaser_List_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_MOTD_Teaser_List_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_MOTD_Teaser_List_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Add MOTD Images to Array(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnImageLoadingComplete(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_MOTD_Teaser_List_SimpleCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Start Next Frame(bool FromLoop); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVideoBackgroundsAllowedChanged(bool bAllowVideoBackgrounds); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartVideoBP(UMotdViewModel* Motd, FName TextureParam, bool PlayImmediately); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopVideo(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FUllScreenWidgetCreatedEvent(UFortDynamicMotdFullscreenWidget* Widget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FullScreenWidgetClosed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VideoReadyEvent(bool bReady); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_MOTD_Teaser_List(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Motd/Widgets/WBP_MOTD_Full_List.WBP_MOTD_Full_List_C
	// Inherited from UFortDynamicMotdFullscreenWidget -> UMotdWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x4B8 - 0x410)
	class UWBP_MOTD_Full_List_C : public UFortDynamicMotdFullscreenWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x8)
		UMotdListViewModel* MotdListViewModel; // 0x418(0x8)
		UWidgetAnimation* Intro; // 0x420(0x8)
		UCloseButton_C* Button_CloseTouch; // 0x428(0x8)
		UWBP_BottomBarDecoyButton_C* DecoyButton_Close; // 0x430(0x8)
		UWBP_ArrowButton_C* WBP_ArrowButton_Left; // 0x438(0x8)
		UWBP_ArrowButton_C* WBP_ArrowButton_Right; // 0x440(0x8)
		UWBP_MOTD_Pip_List_C* WBP_MOTD_Pip_List; // 0x448(0x8)
		UWBP_UIKit_Scrim_C* WBP_UIKit_Scrim; // 0x450(0x8)
		int32_t Count; // 0x458(0x4)
		int32_t Index; // 0x45C(0x4)
		UMaterialInstanceDynamic* Material; // 0x460(0x8)
		TArray<UMotdViewModel*> MyMotds; // 0x468(0x10)
		UWBP_MOTD_Pip_Entry_C* Current_Pip_Entry; // 0x478(0x8)
		UWBP_MOTD_Pip_Entry_C* PrevPipEntry; // 0x480(0x8)
		TArray<UWBP_MOTD_Pip_Entry_C*> PipsArray; // 0x488(0x10)
		bool Anim_Pip; // 0x498(0x1)
		bool SwitchingMOTD; // 0x499(0x1)
		bool SentManualControlEvent; // 0x49A(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x49B(0x5) UNKNOWN PROPERTY
		double CurrentScrollboxOffset; // 0x4A0(0x8)
		bool IgnoreScrolled; // 0x4A8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x4A9(0x7) UNKNOWN PROPERTY
		UMotdViewModel* CurrentMotd; // 0x4B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Motd/Widgets/WBP_MOTD_Full_List.WBP_MOTD_Full_List_C");
			return ret;
		}

		void SetMotdListViewModel(UMotdListViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ChildVideoPlayingControlBroadcast(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearMOTDList(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Active Slide(int32_t Index, bool Scrolled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Goto Right(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Goto Left(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Add MOTD to List(TArray<UMotdViewModel*>& Motds); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwipeLeft(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwipeRight(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSlideIndex(int32_t Index); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_MOTD_Full_List_WBP_ArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_MOTD_Full_List_WBP_ArrowButton_Left_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_MOTD_Full_List_Button_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_MOTD_Full_List_Button_CloseTouch_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputTypeChange(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_MOTD_Full_List_ScrollBox_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_MOTD_Full_List(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Motd/Widgets/WBP_MOTD_Full_TileItem.WBP_MOTD_Full_TileItem_C
	// Inherited from UFortDynamicMotdFullscreenTile -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x538 - 0x400)
	class UWBP_MOTD_Full_TileItem_C : public UFortDynamicMotdFullscreenTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x8)
		UMotdViewModel* MotdViewModel; // 0x408(0x8)
		UWidgetAnimation* Loaded; // 0x410(0x8)
		UCommonRichTextBlock* Content_Horizontal; // 0x418(0x8)
		UCommonRichTextBlock* Content_Vertical; // 0x420(0x8)
		UGridPanel* GP_Content; // 0x428(0x8)
		UImage* Image; // 0x430(0x8)
		USizeBox* SB_ScrollingText; // 0x438(0x8)
		UScrollBox* ScrollBox; // 0x440(0x8)
		USizeBox* SizeBox_Buttons; // 0x448(0x8)
		UCommonRichTextBlock* Title_Horizontal; // 0x450(0x8)
		UCommonRichTextBlock* Title_Vertical; // 0x458(0x8)
		UVerticalBox* VB_Horizontal_Content; // 0x460(0x8)
		UVerticalBox* VB_Vertical_Content; // 0x468(0x8)
		UVerticalBox* VerticalBox_Buttons; // 0x470(0x8)
		UWBP_CaptureForPostBufferUpdate_C* WBP_CaptureForPostBufferUpdate; // 0x478(0x8)
		UMaterialInstanceDynamic* Material; // 0x480(0x8)
		int32_t Index; // 0x488(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x48C(0x4) UNKNOWN PROPERTY
		TArray<UTexture2D*> Teaser_Images; // 0x490(0x10)
		UMotdViewModel* As_Motd_View_Model; // 0x4A0(0x8)
		UCMSImage_C* NewVar; // 0x4A8(0x8)
		TArray<FMotdButton> Motd_Buttons; // 0x4B0(0x10)
		bool Loading; // 0x4C0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x4C1(0x7) UNKNOWN PROPERTY
		UWidget* Parent; // 0x4C8(0x8)
		FMulticastInlineDelegate CloseWidget; // 0x4D0(0x10)
		TArray<FMotdButton> Buttons_Array; // 0x4E0(0x10)
		int32_t Button_Index; // 0x4F0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4F4(0x4) UNKNOWN PROPERTY
		FText Text; // 0x4F8(0x10)
		UWBP_UIKit_Button_Regular_C* NewRegularButton; // 0x508(0x8)
		UWBP_UIKit_Button_Loud_C* NewLoudButton; // 0x510(0x8)
		bool Debug_IsVertical; // 0x518(0x1)
		bool VideoPlaying; // 0x519(0x1)
		bool DoingAction; // 0x51A(0x1)
		bool VideoHasPriority; // 0x51B(0x1)
		unsigned char UnknownData03_6[0x4]; // 0x51C(0x4) UNKNOWN PROPERTY
		UTexture2D* ImageTexture; // 0x520(0x8)
		bool StartVideoDelayed_Scrolled; // 0x528(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x529(0x7) UNKNOWN PROPERTY
		FTimerHandle StartVideoDelayed_Handle; // 0x530(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Motd/Widgets/WBP_MOTD_Full_TileItem.WBP_MOTD_Full_TileItem_C");
			return ret;
		}

		void SetMotdViewModel(UMotdViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VideoTerminalErrorEvent(EBaseMediaTerminalErrorReason Reason); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VideoEndedEvent(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VideoPlayingEvent(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VideoLoadedEvent(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PerformCallToAction(UCommonButtonBase* Button Context); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Vertical Layout(bool IsVertical); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Button Pressed(UMotdActionBase* Action, UCommonButtonBase* Button Context); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget DoCustomNavigation Down(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget DoCustomNavigation Up(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget Do Custom Navigation Right(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget Do Custom Navigation Left(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Active(bool Active, UWidget* Parent, bool Scroll); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Background Image(FMotdBackground Motd Background); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get CMS Image(FString URL); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnImageLoadingComplete_Event(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GoUp(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GoDown(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Buttons(TArray<FMotdButton>& Buttons Array); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Loud Button Call Action(UCommonButtonBase* Button); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Regular Button Call Action(UCommonButtonBase* Button); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVideoBackgroundsAllowedChanged(bool bAllowVideoBackgrounds); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartVideo(bool SkipClosedControlBroadcast); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopVideo(bool SkipClosedControlBroadcast); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleVideoAction(UMotdActionBase* Action); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VideoStartedEvent(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VideoActionEndedEvent(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartVideoDelayed(bool Delay); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DelayedVideoStart(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_MOTD_Full_TileItem(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CloseWidget__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Motd/Widgets/WBP_MOTD_Pip_List.WBP_MOTD_Pip_List_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x300 - 0x2B0)
	class UWBP_MOTD_Pip_List_C : public UUserWidget	
	{
	public:
		UDynamicEntryBox* PipBox; // 0x2B0(0x8)
		TArray<UWBP_MOTD_Pip_Entry_C*> PipsArray; // 0x2B8(0x10)
		int32_t Count; // 0x2C8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2CC(0x4) UNKNOWN PROPERTY
		UWBP_MOTD_Pip_Entry_C* Current_Pip_Entry; // 0x2D0(0x8)
		int32_t Index; // 0x2D8(0x4)
		bool Anim_Pip; // 0x2DC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2DD(0x3) UNKNOWN PROPERTY
		double Duration_Value; // 0x2E0(0x8)
		bool Show_Progress; // 0x2E8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x2E9(0x7) UNKNOWN PROPERTY
		FVector2D PipSize; // 0x2F0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Motd/Widgets/WBP_MOTD_Pip_List.WBP_MOTD_Pip_List_C");
			return ret;
		}

		void PauseActivePip(bool Is Paused); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetActivePip(int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPipsCount(int32_t Count, double Duration Value, bool Anim Pip, bool Show Progress); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Motd/Widgets/WBP_MOTD_Pip_Entry.WBP_MOTD_Pip_Entry_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x310 - 0x2B0)
	class UWBP_MOTD_Pip_Entry_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UWidgetAnimation* Anim_Progress; // 0x2B8(0x8)
		UWidgetAnimation* Anim_Active_NoTimer; // 0x2C0(0x8)
		UWidgetAnimation* Anim_Active; // 0x2C8(0x8)
		UBorder* PIP; // 0x2D0(0x8)
		USpacer* PipSpacer; // 0x2D8(0x8)
		bool DisplayTimer; // 0x2E0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2E1(0x3) UNKNOWN PROPERTY
		float CurrentProgressionTime; // 0x2E4(0x4)
		double Duration_Value; // 0x2E8(0x8)
		bool Show_Progressbar; // 0x2F0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2F1(0x7) UNKNOWN PROPERTY
		double PipWidthRatio; // 0x2F8(0x8)
		FVector2D PipSize; // 0x300(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Motd/Widgets/WBP_MOTD_Pip_Entry.WBP_MOTD_Pip_Entry_C");
			return ret;
		}

		void SetPipSize(FVector2D PipSize); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPipWidthRatio(double NewParam); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTimerAnimPlaying(bool IsPaused); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDisplayTimer(bool DisplayTimer, bool Show Progressbar); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDuration(double DurationValue); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetActive(bool Active); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_MOTD_Pip_Entry(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Motd/Widgets/WBP_ArrowButton.WBP_ArrowButton_C
	// Inherited from UWBP_UIKit_Button_Generic_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x9 (0x1761 - 0x1758)
	class UWBP_ArrowButton_C : public UWBP_UIKit_Button_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1758(0x8)
		bool InverseArrow; // 0x1760(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Motd/Widgets/WBP_ArrowButton.WBP_ArrowButton_C");
			return ret;
		}

		void InverseArrowDirection(bool InverseArrow); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCornerRadius(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ArrowButton(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Squeegee/Widgets/WBP_ContentGate_RatingCard.WBP_ContentGate_RatingCard_C
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x308 - 0x2F8)
	class UWBP_ContentGate_RatingCard_C : public UFortSqueegeeWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F8(0x8)
		UWBP_ContentGate_RatingCardButton_C* WBP_ContentGate_RatingCardButton; // 0x300(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Squeegee/Widgets/WBP_ContentGate_RatingCard.WBP_ContentGate_RatingCard_C");
			return ret;
		}

		void SetGameActivity(UFortGameActivity* GameActivity); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ContentGate_RatingCard(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Squeegee/Widgets/WBP_ContentGate_UnlockDetails.WBP_ContentGate_UnlockDetails_C
	// Inherited from UFortSqueegeeWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x338 - 0x2F8)
	class UWBP_ContentGate_UnlockDetails_C : public UFortSqueegeeWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F8(0x8)
		UWBP_ContentGate_RatingCardButton_C* RatingCard; // 0x300(0x8)
		UCommonTextBlock* Text_Info; // 0x308(0x8)
		FText InfoText; // 0x310(0x10)
		FText InfoTextOtherPlayer; // 0x320(0x10)
		AFortPlayerController* Unlock_Player; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Squeegee/Widgets/WBP_ContentGate_UnlockDetails.WBP_ContentGate_UnlockDetails_C");
			return ret;
		}

		void SetInfoText(UFortGameActivity* GameActivity); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowGameRatingInfo(UFortGameActivity* GameActivity); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGameActivity(UFortGameActivity* GameActivity); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetUnlockPlayer(AFortPlayerController* UnlockPlayer); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ContentGate_UnlockDetails(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Squeegee/Widgets/WBP_ContentGate_RatingCardButton.WBP_ContentGate_RatingCardButton_C
	// Inherited from UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x49 (0x13F1 - 0x13A8)
	class UWBP_ContentGate_RatingCardButton_C : public UUIKitModularButton	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x13B0(0x8)
		UWBP_UIKit_Block_Outline_C* Block_Outline; // 0x13B8(0x8)
		UImage* Image_Divider; // 0x13C0(0x8)
		UImage* Image_RatingIcon; // 0x13C8(0x8)
		UCommonTextBlock* Text_ContentDescriptor; // 0x13D0(0x8)
		UCommonTextBlock* Text_InteractionDescriptor; // 0x13D8(0x8)
		UCommonTextBlock* Text_Rating; // 0x13E0(0x8)
		UFortGameActivity* CachedGameActivity; // 0x13E8(0x8)
		bool bIsUsingInstrumentController; // 0x13F0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Squeegee/Widgets/WBP_ContentGate_RatingCardButton.WBP_ContentGate_RatingCardButton_C");
			return ret;
		}

		void ShowGameRatingInfo(UFortGameActivity* GameActivity); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTextFromDescriptorArray(TArray<FText>& Descriptors, FText& Text); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CustomEvent(FPlatformUserId UserId, FInputDeviceId DeviceID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ContentGate_RatingCardButton(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
