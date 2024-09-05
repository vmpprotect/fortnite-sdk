#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: UIKit
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /FortUILibrary/UIKit/Buttons/Blocks/ButtonStyle_UIKit_Empty.ButtonStyle_UIKit_Empty_C
	// Inherited from UButtonStyle-Base_C -> UCommonButtonStyle -> UObject
	// Size: 0x0 (0x6B0 - 0x6B0)
	class UButtonStyle_UIKit_Empty_C : public UButtonStyle-Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/Blocks/ButtonStyle_UIKit_Empty.ButtonStyle_UIKit_Empty_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_Outline.WBP_UIKit_Block_Outline_C
	// Inherited from UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x65 (0x348 - 0x2E3)
	class UWBP_UIKit_Block_Outline_C : public UWBP_UIKit_Block_Base_C	
	{
	public:
		unsigned char UnknownData00_3[0x5]; // 0x2E3(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E8(0x8)
		UWidgetAnimation* Anim_Sheen; // 0x2F0(0x8)
		UWidgetAnimation* Anim_Unhover; // 0x2F8(0x8)
		UWidgetAnimation* Anim_Hover; // 0x300(0x8)
		UImage* FocusOutline; // 0x308(0x8)
		bool RadiusInPixels; // 0x310(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x311(0x7) UNKNOWN PROPERTY
		double TopLeftCornerRadius; // 0x318(0x8)
		double TopRightCornerRadius; // 0x320(0x8)
		double BottomRightCornerRadius; // 0x328(0x8)
		double BottomLeftCornerRadius; // 0x330(0x8)
		bool Contain_Outline_Padding; // 0x338(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x339(0x7) UNKNOWN PROPERTY
		USoundBase* BlockOutlineHoverSound; // 0x340(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_Outline.WBP_UIKit_Block_Outline_C");
			return ret;
		}

		void ResetAnimationState(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ContainOutline(bool ContainOutlinePadding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCornerRadiuses(float TopLeft, float TopRight, float BottomLeft, float BottomRight, bool RadiusInPixels); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Block_Outline(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C
	// Inherited from UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x380 - 0x310)
	class UWBP_UIKit_Block_BackgroundWithOutline_C : public UWBP_UIKit_BlockBackground_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x8)
		UWidgetAnimation* Anim_Disabled_Transition; // 0x318(0x8)
		UWidgetAnimation* Anim_Pressed_Transition; // 0x320(0x8)
		UWidgetAnimation* Anim_Hover_Transition; // 0x328(0x8)
		UWidgetAnimation* Anim_Sheen; // 0x330(0x8)
		UWidgetAnimation* Anim_OutlineUnhover; // 0x338(0x8)
		UWidgetAnimation* Anim_OutlineHover; // 0x340(0x8)
		UImage* Backing; // 0x348(0x8)
		UImage* FocusOutline; // 0x350(0x8)
		bool RadiusInPixels; // 0x358(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x359(0x7) UNKNOWN PROPERTY
		double TopLeftCornerRadius; // 0x360(0x8)
		double TopRightCornerRadius; // 0x368(0x8)
		double BottomRightCornerRadius; // 0x370(0x8)
		double BottomLeftCornerRadius; // 0x378(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C");
			return ret;
		}

		void SetOutlineMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCornerRadiuses(float TopLeft, float TopRight, float BottomLeft, float BottomRight, bool RadiusInPixels); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Block_BackgroundWithOutline(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/StatusIndicator/WBP_UIKit_StatusIndicator.WBP_UIKit_StatusIndicator_C
	// Inherited from UWBP_UIKit_StatusIndicator_Base_C -> UFortBangWrapper_NUI -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3DC - 0x3DC)
	class UWBP_UIKit_StatusIndicator_C : public UWBP_UIKit_StatusIndicator_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/StatusIndicator/WBP_UIKit_StatusIndicator.WBP_UIKit_StatusIndicator_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C
	// Inherited from UWBP_UIKit_ButtonCTA_Base_C -> UFortCTAButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x56 (0x1850 - 0x17FA)
	class UWBP_UIKit_Button_Regular_C : public UWBP_UIKit_ButtonCTA_Base_C	
	{
	public:
		unsigned char UnknownData00_3[0x6]; // 0x17FA(0x6) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1800(0x8)
		TEnumAsByte<E_UI_CTAButtonType> ButtonType; // 0x1808(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1809(0x7) UNKNOWN PROPERTY
		UMaterialInstance* RegularFontMaterial; // 0x1810(0x8)
		UMaterialInstance* RegularSecondaryFontMaterial; // 0x1818(0x8)
		UMaterialInstance* RegularBackgroundMaterial; // 0x1820(0x8)
		UMaterialInstance* RegularOutlineMaterial; // 0x1828(0x8)
		UMaterialInstance* QuietFontMaterial; // 0x1830(0x8)
		UMaterialInstance* QuietSecondaryFontMaterial; // 0x1838(0x8)
		UMaterialInstance* QuietBackgroundMaterial; // 0x1840(0x8)
		UMaterialInstance* QuietOutlineMaterial; // 0x1848(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C");
			return ret;
		}

		void SetButtonType(TEnumAsByte<E_UI_CTAButtonType> ButtonType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OverrideFontMaterials(UMaterialInstance* PrimaryFontMaterial, UMaterialInstance* SecondaryFontMaterial); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_Button_Quiet_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputIconUpdated__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Button_Regular(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Backplates/WBP_UIKit_Backplate.WBP_UIKit_Backplate_C
	// Inherited from UWBP_UIKit_Backplate_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x330 - 0x328)
	class UWBP_UIKit_Backplate_C : public UWBP_UIKit_Backplate_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Backplates/WBP_UIKit_Backplate.WBP_UIKit_Backplate_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Backplate(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C
	// Inherited from UWBP_UIKit_ButtonCTA_Base_C -> UFortCTAButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE (0x1808 - 0x17FA)
	class UWBP_UIKit_Button_Loud_C : public UWBP_UIKit_ButtonCTA_Base_C	
	{
	public:
		unsigned char UnknownData00_3[0x6]; // 0x17FA(0x6) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1800(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C");
			return ret;
		}

		void BndEvt__WBP_UIKit_Button_Quiet_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputIconUpdated__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Button_Loud(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C
	// Inherited from UWBP_UIKit_ButtonCTA_Base_C -> UFortCTAButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x66 (0x1860 - 0x17FA)
	class UWBP_UIKit_Button_Quiet_C : public UWBP_UIKit_ButtonCTA_Base_C	
	{
	public:
		unsigned char UnknownData00_3[0x6]; // 0x17FA(0x6) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1800(0x8)
		FSlateFontInfo GamepadPromptFont; // 0x1808(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C");
			return ret;
		}

		void UpdateFonts(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateButtonSIze(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateButtonPadding(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideBackground(ECommonInputType InputType); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnPressed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_Button_Quiet_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputIconUpdated__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Button_Quiet(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/TabButtons/_Blocks/WBP_UIKit_Block_BackgroundTopNavBar.WBP_UIKit_Block_BackgroundTopNavBar_C
	// Inherited from UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x59 (0x369 - 0x310)
	class UWBP_UIKit_Block_BackgroundTopNavBar_C : public UWBP_UIKit_BlockBackground_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x8)
		UWidgetAnimation* Anim_Visuals; // 0x318(0x8)
		UWidgetAnimation* Anim_BackingInstantSelect; // 0x320(0x8)
		UWidgetAnimation* Anim_BackingSelect; // 0x328(0x8)
		UWidgetAnimation* Anim_OutlineUnhover; // 0x330(0x8)
		UWidgetAnimation* Anim_OutlineHover; // 0x338(0x8)
		UImage* Backing; // 0x340(0x8)
		UImage* FocusOutline; // 0x348(0x8)
		UImage* Visuals; // 0x350(0x8)
		bool RadiusInPixels; // 0x358(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x359(0x7) UNKNOWN PROPERTY
		double CornerRadius; // 0x360(0x8)
		bool UseBackgroundVisuals; // 0x368(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/TabButtons/_Blocks/WBP_UIKit_Block_BackgroundTopNavBar.WBP_UIKit_Block_BackgroundTopNavBar_C");
			return ret;
		}

		void SetOutlineMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCornerRadiuses(float CornerRadius, bool RadiusInPixels); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Block_BackgroundTopNavBar(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/TabButtons/WBP_UIKit_Button_TopNavBar.WBP_UIKit_Button_TopNavBar_C
	// Inherited from UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x1788 - 0x1740)
	class UWBP_UIKit_Button_TopNavBar_C : public UWBP_UIKit_ButtonGeneric_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortTabViewModel* FortTabViewModel; // 0x1748(0x8)
		UMaterialInstance* TextMaterial; // 0x1750(0x8)
		UMaterialInstance* TextOutlineMaterial; // 0x1758(0x8)
		UMaterialInstance* MobileTextMaterial; // 0x1760(0x8)
		UMaterialInstance* MobileTextOutlineMaterial; // 0x1768(0x8)
		bool IsMobile; // 0x1770(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1771(0x7) UNKNOWN PROPERTY
		UTexture2D* IconVBuck; // 0x1778(0x8)
		UWBP_UIKit_Block_Text_C* Block_Text_Secondary; // 0x1780(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/TabButtons/WBP_UIKit_Button_TopNavBar.WBP_UIKit_Button_TopNavBar_C");
			return ret;
		}

		void SetFortTabViewModel(UFortTabViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFontStyle(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTextLayout(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetData(UUIKitSelectableButtonViewModel* VM Button); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIcon(UObject* Icon); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetText(FText Text); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBangType(EFortBangType EBangType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Button_TopNavBar(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Selectable.WBP_UIKit_Button_Selectable_C
	// Inherited from UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x1750 - 0x1740)
	class UWBP_UIKit_Button_Selectable_C : public UWBP_UIKit_ButtonGeneric_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UUIKitSelectableButtonViewModel* UIKitSelectableButtonViewModel; // 0x1748(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Selectable.WBP_UIKit_Button_Selectable_C");
			return ret;
		}

		void SetUIKitSelectableButtonViewModel(UUIKitSelectableButtonViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPreviewData(UMVVMViewModelBase* VM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetData(UUIKitSelectableButtonViewModel* VM Button); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Button_Selectable(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Generic.WBP_UIKit_Button_Generic_C
	// Inherited from UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1758 - 0x1740)
	class UWBP_UIKit_Button_Generic_C : public UWBP_UIKit_ButtonGeneric_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UWidgetAnimation* Anim_Pressed; // 0x1748(0x8)
		UWidgetAnimation* Anim_Bounce; // 0x1750(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Generic.WBP_UIKit_Button_Generic_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnPressed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Button_Generic(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/TabButtons/_Blocks/WBP_UIKit_Block_BackgroundTabSideNav.WBP_UIKit_Block_BackgroundTabSideNav_C
	// Inherited from UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x350 - 0x310)
	class UWBP_UIKit_Block_BackgroundTabSideNav_C : public UWBP_UIKit_BlockBackground_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x8)
		UWidgetAnimation* Anim_Selected_Transition; // 0x318(0x8)
		UWidgetAnimation* Anim_OutlineUnhover; // 0x320(0x8)
		UWidgetAnimation* Anim_OutlineHover; // 0x328(0x8)
		UImage* Backing; // 0x330(0x8)
		UImage* FocusOutline; // 0x338(0x8)
		bool RadiusInPixels; // 0x340(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x341(0x7) UNKNOWN PROPERTY
		double CornerRadius; // 0x348(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/TabButtons/_Blocks/WBP_UIKit_Block_BackgroundTabSideNav.WBP_UIKit_Block_BackgroundTabSideNav_C");
			return ret;
		}

		void SetOutlineMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCornerRadiuses(float CornerRadius, bool RadiusInPixels); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Block_BackgroundTabSideNav(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/TabButtons/WBP_UIKit_Button_Tab.WBP_UIKit_Button_Tab_C
	// Inherited from UWBP_UIKit_Button_Selectable_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x29 (0x1779 - 0x1750)
	class UWBP_UIKit_Button_Tab_C : public UWBP_UIKit_Button_Selectable_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1750(0x8)
		UMaterialInstance* TextMaterial; // 0x1758(0x8)
		UMaterialInstance* TextOutlineMaterial; // 0x1760(0x8)
		UMaterialInstance* MobileTextMaterial; // 0x1768(0x8)
		UMaterialInstance* MobileTextOutlineMaterial; // 0x1770(0x8)
		bool IsMobile; // 0x1778(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/TabButtons/WBP_UIKit_Button_Tab.WBP_UIKit_Button_Tab_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Button_Tab(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Tabs/WBP_UIKit_Tabs.WBP_UIKit_Tabs_C
	// Inherited from UWBP_UIKit_Tabs_Base_C -> UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x14 (0x730 - 0x71C)
	class UWBP_UIKit_Tabs_C : public UWBP_UIKit_Tabs_Base_C	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x71C(0x4) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x720(0x8)
		UUIKitTabGroupViewModel* UIKitTabGroupViewModel; // 0x728(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Tabs/WBP_UIKit_Tabs.WBP_UIKit_Tabs_C");
			return ret;
		}

		void SetUIKitTabGroupViewModel(UUIKitTabGroupViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTabCreation(FName TabNameID, UCommonButtonBase* TabButton); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Tabs(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_ButtonWithToggle.WBP_UIKit_ButtonWithToggle_C
	// Inherited from UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x21 (0x1761 - 0x1740)
	class UWBP_UIKit_ButtonWithToggle_C : public UWBP_UIKit_ButtonGeneric_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UWBP_UIKit_Block_Outline_C* Block_Outline; // 0x1748(0x8)
		UWBP_UIKit_Block_Toggle_C* Block_Toggle; // 0x1750(0x8)
		USpacer* Spacer_Size; // 0x1758(0x8)
		TEnumAsByte<E_UI_ToggleType> ToggleType; // 0x1760(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_ButtonWithToggle.WBP_UIKit_ButtonWithToggle_C");
			return ret;
		}

		void SetToggleType(TEnumAsByte<E_UI_ToggleType> Type); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMobileStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ButtonWithToggle(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/ItemShopTile/WBP_UIKit_PriceSwitcher.WBP_UIKit_PriceSwitcher_C
	// Inherited from UWBP_PriceSwitcher_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x5B8 - 0x5A0)
	class UWBP_UIKit_PriceSwitcher_C : public UWBP_PriceSwitcher_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x5A0(0x8)
		UFortSubscriptionVM* FortSubscriptionVM; // 0x5A8(0x8)
		UFortItemShopOfferVM* FortItemShopOfferVM; // 0x5B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/ItemShopTile/WBP_UIKit_PriceSwitcher.WBP_UIKit_PriceSwitcher_C");
			return ret;
		}

		void __24b4991b-48f7-e478-a76a-d0b1ec0af2c1_SourceToDest(FText& SalePrice); // Flags: Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void __c9eda1e1-46f7-a82a-146c-d2af770cc10b_SourceToDest(FText& SalePrice); // Flags: Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void __f683aab4-4856-773c-db32-309fbbdf138e_SourceToDest(TEnumAsByte<E_PriceSwitcherState>& SwitcherState); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void __8aa7d011-47c6-fe44-1c90-658e43fe1574_SourceToDest(FText& SubInfoText); // Flags: Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void __731a614b-45a3-7f0d-eeab-168c09c90858_SourceToDest(ESlateVisibility& StrikethroughPriceVisibility); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFortSubscriptionVM(UFortSubscriptionVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFortItemShopOfferVM(UFortItemShopOfferVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetPriceFormattedText(bool IsSalePrice, int32_t Price, FText& SalePrice); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_PriceSwitcher(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Tabs/WBP_UIKit_SideNavigation.WBP_UIKit_SideNavigation_C
	// Inherited from UWBP_UIKit_SideNavigation_Base_C -> UWBP_UIKit_TabGroup_Base_C -> UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x9D9 - 0x9D9)
	class UWBP_UIKit_SideNavigation_C : public UWBP_UIKit_SideNavigation_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Tabs/WBP_UIKit_SideNavigation.WBP_UIKit_SideNavigation_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_PresetCard.WBP_UIKit_PresetCard_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xF8 (0x1838 - 0x1740)
	class UWBP_UIKit_PresetCard_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortModularLoadoutItemVM* FortModularLoadoutItemVM; // 0x1748(0x8)
		UFortTypedModularLoadoutsVM* FortTypedModularLoadoutsVM; // 0x1750(0x8)
		UFortTypedModularLoadoutVM* FortTypedModularLoadoutVM; // 0x1758(0x8)
		UWidgetAnimation* OnFocus; // 0x1760(0x8)
		UWBP_UIKit_ContextMenuAnchorButton_C* ContextMenu; // 0x1768(0x8)
		UScaleBox* ScaleBox; // 0x1770(0x8)
		UCommonTextBlock* Text_Loadoutname; // 0x1778(0x8)
		TWeakObjectPtr<UTexture2D*> LargePreviewImage; // 0x1780(0x20)
		FMulticastInlineDelegate SelectedTileVM; // 0x17A0(0x10)
		FText Rename_In_Action_Info_Display_Name; // 0x17B0(0x10)
		FText Delete_In_Action_Info_Display_Name; // 0x17C0(0x10)
		FMulticastInlineDelegate OnRenameEventFired; // 0x17D0(0x10)
		FMulticastInlineDelegate OnDeleteEventFired; // 0x17E0(0x10)
		bool IsSaveShuffleTile; // 0x17F0(0x1)
		bool IsItemHovered; // 0x17F1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x17F2(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate DisableOptionsHint; // 0x17F8(0x10)
		FMulticastInlineDelegate EnableOptionsHint; // 0x1808(0x10)
		FMulticastInlineDelegate OnContextMenuOpened; // 0x1818(0x10)
		FMulticastInlineDelegate OnContextMenuClosed; // 0x1828(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_PresetCard.WBP_UIKit_PresetCard_C");
			return ret;
		}

		void __4ba91ee8-4cb9-6a47-df1a-8a8aaee3642a_SourceToDest(TWeakObjectPtr<UObject*>& OutItemImage); // Flags: Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void __e736f2bf-42b4-fd4a-7d71-7d834778056d_SourceToDest(bool& IsTileEnabled); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void __a95d2a70-494a-fcec-4100-fb8d6da56ed1_SourceToDest(bool& Void); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFortModularLoadoutItemVM(UFortModularLoadoutItemVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFortTypedModularLoadoutVM(UFortTypedModularLoadoutVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetPreviewImage(TWeakObjectPtr<UTexture2D*> ItemImage, FFortLockerCategorySlotInfo& SlotInfo, TWeakObjectPtr<UObject*>& OutItemImage); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsShuffleLoadoutSufficient(int32_t ActiveLoadouts, bool IsShuffleTile, bool& IsTileEnabled); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Shuffle Tile Enabled Style(bool IsShuffleEnabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply BP_OnHoldTriggered(ECommonInputType CurrentInputType); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsShuffleActive(bool Void); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsShuffleTile(bool IsShuffleTile, bool IsShuffled, bool GetCanEnableShuffle, bool& Void); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleContextMenu(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Toggle Context Menu If Hovered(bool& ToggleSucess); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Image if Valid(UFortModularLoadoutItemVM* LoadoutItem); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetContextMenuPadding(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetContextMenuActionContext(FDelegateProperty& RenameInInteractionDelegate, FDelegateProperty& DeleteInInteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupPresetCard(TArray<UFortModularLoadoutItemVM*>& Items); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Rename Preset(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Delete Preset(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_PresetCard_ContextMenu_K2Node_ComponentBoundEvent_0_OnContextMenuClosed__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_PresetCard_ContextMenu_K2Node_ComponentBoundEvent_1_OnContextMenuOpened__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_PresetCard(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextMenuClosed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextMenuOpened__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnableOptionsHint__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DisableOptionsHint__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeleteEventFired__DelegateSignature(UWBP_UIKit_PresetCard_C* PresetCard); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRenameEventFired__DelegateSignature(UWBP_UIKit_PresetCard_C* PresetCard); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SelectedTileVM__DelegateSignature(UFortTypedModularLoadoutVM* PresetContents); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_Category.WBP_UIKit_ItemCard_Category_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xF9 (0x1839 - 0x1740)
	class UWBP_UIKit_ItemCard_Category_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortTypedModularLoadoutsVM* FortTypedModularLoadoutsVM; // 0x1748(0x8)
		UFortLockerVM* FortLockerVM; // 0x1750(0x8)
		UFortLockerCategoryItemVM* FortLockerCategoryItemVM; // 0x1758(0x8)
		UFortItemSelectionVM* FortItemSelectionVM; // 0x1760(0x8)
		UFortItemVM* FortItemVM; // 0x1768(0x8)
		UWidgetAnimation* Anim_Hovered; // 0x1770(0x8)
		UWBP_UIKit_ContextMenuAnchorButton_C* ContextMenu; // 0x1778(0x8)
		UFortLazyImage* EmoteWheelPositionImage; // 0x1780(0x8)
		UFortVisualAttachment* FortVisualAttachment; // 0x1788(0x8)
		UWBP_UIKit_StatusIndicator_C* StatusIndicator_PresetsShuffle; // 0x1790(0x8)
		UObject* List_Item_Object; // 0x1798(0x8)
		FMulticastInlineDelegate OnCategoryClicked; // 0x17A0(0x10)
		bool IsWrap; // 0x17B0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x17B1(0x7) UNKNOWN PROPERTY
		UUIKitContextMenuActionContext* ContextMenuActionContext; // 0x17B8(0x8)
		FMulticastInlineDelegate OnContextMenuCardEditStylesClicked; // 0x17C0(0x10)
		bool IsNewItem; // 0x17D0(0x1)
		bool AwaitingContextMenuClose; // 0x17D1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x17D2(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnContextMenuOpened; // 0x17D8(0x10)
		FMulticastInlineDelegate OnContextMenuClosed; // 0x17E8(0x10)
		bool Is_Item_Card_Category_Hovered; // 0x17F8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x17F9(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate CategoryCardHovered; // 0x1800(0x10)
		FTimerHandle RandomizeTimerHandle; // 0x1810(0x8)
		FMulticastInlineDelegate OnRandomizeTimer; // 0x1818(0x10)
		FMulticastInlineDelegate OnFortItemVM; // 0x1828(0x10)
		bool Is_Shuffle_Enabled; // 0x1838(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_Category.WBP_UIKit_ItemCard_Category_C");
			return ret;
		}

		void __79e9f624-449e-0d40-8030-13852634ec9a_SourceToDest(ESlateVisibility& Visibility); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		ESlateVisibility __5b383b64-4f8e-5cf5-053d-ed9109e9c8c2_SourceToDest(); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void __2ad0d653-4c9d-80a2-9595-929cef9646b3_SourceToDest(bool& Result); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFortLockerCategoryItemVM(UFortLockerCategoryItemVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFortItemVM(UFortItemVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AdjustContextMenuMobile(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetShuffleVisibility(bool IsShuffleEnabled, bool CanEnableShuffle, ESlateVisibility& Visibility); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFortItemVMChanged(UFortItemVM* InFortVM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetEmoteIndicatorVisibility(bool EquippedItemValid); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetEmoteSlotIndicatorIcon(FFortLockerCategorySlotInfo FortLockerCategorySlotInfo); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply BP_OnHoldTriggered(ECommonInputType CurrentInputType); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Secondary Action Button Clicked(FName NameId); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Primary Preview Action Button Clicked(FName NameId); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnalyticsCategoryInteracted(FString Context); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleContextMenuOpenChanged(bool IsOpen); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Is Favorite State(bool Is Favorite, bool Is New, bool& Result); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SelectIfPreviewed(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBangCount(int32_t NewBangCount); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFIVMItemAndSlot(UFortItemVM* Selected Item, int32_t& Slot Index); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCurrentCategory(bool& CanApplyToAll, bool& CanFavorite); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Context Menu Preview Actions(FText PreviewActionName, FDelegateProperty& InInPreviewActionIteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CloseContextMenu(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Initialize(UFortLockerCategoryItemVM* Category Item); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Context Menu Action Context(FDelegateProperty& FavoriteInInteractionDelegate, FDelegateProperty& ClearBadgesInInteractionDelegate, FDelegateProperty& EditStylesInInteractionDelegate, FDelegateProperty& ApplyToAllInInteractionDelegate, FDelegateProperty& RandomizeItemInInteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetContextMenuAnchorPadding(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetImageSize(bool IsSmall, double SmallSize, double DefaultSize); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetNewIcon(int32_t Item Count); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Tile Image(TWeakObjectPtr<UTexture2D*> Image); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTileSize(TEnumAsByte<ELockerTileSize> TileSize); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOperationCompleted_06BF0EFB44946B786AFEF88F1D9387CA(bool Success); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Favorite Item(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Clear All Badges(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Edit Styles(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Apply To All(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Randomize Item(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleContextActions(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRandomizeTimer_Event(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFortItemVM_Event(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAddedToFocusPath(FFocusEvent InFocusEvent); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRightClickDown(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetContextMenuActionContext(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleContextMenuIfSelected(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ItemCard_Category(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFortItemVM__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRandomizeTimer__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CategoryCardHovered__DelegateSignature(bool IsCategoryCardHovered); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextMenuClosed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextMenuOpened__DelegateSignature(UWidget* ContextMenuWidgetParentEntry); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextMenuCardEditStylesClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_PresetSubPreviewTile.WBP_UIKit_PresetSubPreviewTile_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x1778 - 0x1740)
	class UWBP_UIKit_PresetSubPreviewTile_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortLockerCategoryItemVM* FortLockerCategoryItemVM; // 0x1748(0x8)
		UWidgetAnimation* Anim_OnSelected; // 0x1750(0x8)
		TWeakObjectPtr<UTexture2D*> LargePreviewImage; // 0x1758(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_PresetSubPreviewTile.WBP_UIKit_PresetSubPreviewTile_C");
			return ret;
		}

		void SetFortLockerCategoryItemVM(UFortLockerCategoryItemVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTileImage(TWeakObjectPtr<UTexture2D*> Image); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_PresetSubPreviewTile(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_Locker.WBP_UIKit_ItemCard_Locker_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA1 (0x17E1 - 0x1740)
	class UWBP_UIKit_ItemCard_Locker_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortLockerEquipUtilityVM* FortLockerEquipUtilityVM; // 0x1748(0x8)
		UFortItemSelectionVM* FortItemSelectionVM; // 0x1750(0x8)
		UFortItemVM* FortItemVM; // 0x1758(0x8)
		UWidgetAnimation* Anim_Hovered; // 0x1760(0x8)
		UWBP_UIKit_ContextMenuAnchorButton_C* ContextMenu; // 0x1768(0x8)
		bool IsItemCardLockerHovered; // 0x1770(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1771(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnContextMenuOpened; // 0x1778(0x10)
		FMulticastInlineDelegate OnContextMenuClosed; // 0x1788(0x10)
		UUIKitContextMenuActionContext* ContextMenuActionContext; // 0x1798(0x8)
		FMulticastInlineDelegate OnItemCardHovered; // 0x17A0(0x10)
		FMulticastInlineDelegate OnItemDoubleClicked; // 0x17B0(0x10)
		FMulticastInlineDelegate OnContextMenuEditStylesClicked; // 0x17C0(0x10)
		FMulticastInlineDelegate GoToLockerItemDetails; // 0x17D0(0x10)
		bool AwaitingContextMenuClose; // 0x17E0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_Locker.WBP_UIKit_ItemCard_Locker_C");
			return ret;
		}

		void __fd451a77-40b3-5dfc-7513-07a6840b8b78_SourceToDest(bool& NewParam); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFortItemVM(UFortItemVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanReactToRightClickDown(FPointerEvent& Input); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SelectCard(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Secondary Action Button Clicked(FName NameId); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Primary Preview Action Button Clicked(FName NameId); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnalyticsItemInteracted(FString Context); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleContextMenuOpenChanged(bool IsOpen); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SelectAndMarkSeen(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Can Display Context Menu(bool& Value); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Equipped Indexes(TArray<int32_t>& Equipped Indexes); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Is Item Equipped(UFortItemVM* Category Item, UFortItemVM* Selected Item, bool& NewParam); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CloseContextMenu(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFIVMItemAndSlot(UFortItemVM* Selected Item, int32_t& Slot Index); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetContextMenuSecondaryPreviewActions(FText PreviewActionName, FDelegateProperty& PreviewActionInInteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetContextMenuPrimaryPreviewActions(FText PreviewActionName, FDelegateProperty& PreviewActionInInteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Is New(bool IsNew); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetContextMenuActionContext(FDelegateProperty& ArchiveItemInInteractionDelegate, FDelegateProperty& FavoriteItemInInteractionDelegate, FDelegateProperty& ApplyToAllInInteractionDelegate, FDelegateProperty& EditStylesInInteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOperationCompleted_5A8AD2704B8B176D35386498F38A6122(bool Success); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOperationCompleted_2D0ECFBF4D017B0203E8508736C20384(bool Success); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOperationCompleted_F7F975A947821D6ADE73CC80F51FDBF6(bool Success); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Archive Item(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Favorite Item(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDoubleClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Apply to All(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleContextMenuIfSelected(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EditStyles(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRightClickDown(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAddedToFocusPath(FFocusEvent InFocusEvent); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovedFromFocusPath(FFocusEvent InFocusEvent); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ItemCard_Locker(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GoToLockerItemDetails__DelegateSignature(UClass* CustomItemDetails); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextMenuEditStylesClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemDoubleClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemCardHovered__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextMenuClosed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextMenuOpened__DelegateSignature(UWidget* ContextMenuWidgetParentEntry); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/TabButtons/WBP_UIKit_SideNavigation_Button.WBP_UIKit_SideNavigation_Button_C
	// Inherited from UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x1790 - 0x1740)
	class UWBP_UIKit_SideNavigation_Button_C : public UWBP_UIKit_ButtonGeneric_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UWidgetAnimation* OnSelected; // 0x1748(0x8)
		UWidgetAnimation* OnCollapsed; // 0x1750(0x8)
		UImage* Image_Pip; // 0x1758(0x8)
		int32_t WrapTextAt; // 0x1760(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1764(0x4) UNKNOWN PROPERTY
		double CollapsedAnimValue; // 0x1768(0x8)
		FVector2D CachedContentSize; // 0x1770(0x10)
		FVector2D CollapsedSize; // 0x1780(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/TabButtons/WBP_UIKit_SideNavigation_Button.WBP_UIKit_SideNavigation_Button_C");
			return ret;
		}

		void SetButtonPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshButtonSize(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCollapsedAnimValue(double Value); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetAnimations(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeText(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnButtonCollapsed(bool SkipAnimation); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnButtonExpanded(bool SkipAnimation); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsCollapsed(bool IsCollapsed, bool SkipAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_SideNavigation_Button(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/TabButtons/_Blocks/WBP_UIKit_Block_BackgroundSideNavigation.WBP_UIKit_Block_BackgroundSideNavigation_C
	// Inherited from UWBP_UIKit_Block_BackgroundGeneric_C -> UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x390 - 0x370)
	class UWBP_UIKit_Block_BackgroundSideNavigation_C : public UWBP_UIKit_Block_BackgroundGeneric_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x8)
		UWidgetAnimation* Anim_SelectedFocused; // 0x378(0x8)
		UWidgetAnimation* Anim_UnhoverOutline; // 0x380(0x8)
		UWidgetAnimation* Anim_HoverOutline; // 0x388(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/TabButtons/_Blocks/WBP_UIKit_Block_BackgroundSideNavigation.WBP_UIKit_Block_BackgroundSideNavigation_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Block_BackgroundSideNavigation(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_PresetSubTile.WBP_UIKit_PresetSubTile_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x1778 - 0x1740)
	class UWBP_UIKit_PresetSubTile_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortModularLoadoutItemVM* FortModularLoadoutItemVM; // 0x1748(0x8)
		UWidgetAnimation* Anim_OnSelected; // 0x1750(0x8)
		TWeakObjectPtr<UTexture2D*> LargePreviewImage; // 0x1758(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_PresetSubTile.WBP_UIKit_PresetSubTile_C");
			return ret;
		}

		void SetFortModularLoadoutItemVM(UFortModularLoadoutItemVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTileImage(TWeakObjectPtr<UTexture2D*> Image); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_PresetSubTile(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantSelector.WBP_UIKit_VariantSelector_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC9 (0x379 - 0x2B0)
	class UWBP_UIKit_VariantSelector_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UFortItemSelectionVM* FortItemSelectionVM; // 0x2B8(0x8)
		UFortVariantSelectorVM* FortVariantSelectorVM; // 0x2C0(0x8)
		UDynamicEntryBox* EntryBox_ChannelRows; // 0x2C8(0x8)
		UScrollBox* ScrollBox_Content; // 0x2D0(0x8)
		UCommonVisibilitySwitcher* Switcher_Content; // 0x2D8(0x8)
		UWBP_UIKit_Tabs_C* Tabs_PrimaryFilter; // 0x2E0(0x8)
		UWBP_UIKit_Tabs_C* Tabs_SecondaryFilter; // 0x2E8(0x8)
		UCommonTextBlock* Text_PrimaryFilter; // 0x2F0(0x8)
		UCommonTextBlock* Text_SecondaryFilter; // 0x2F8(0x8)
		UWBP_UIKit_Throbber_C* Throbber_Content; // 0x300(0x8)
		TWeakObjectPtr<UTexture2D*> DefaultFilterIcon; // 0x308(0x20)
		FMulticastInlineDelegate OnFilterChanged; // 0x328(0x10)
		FMulticastInlineDelegate OnConflictTextUpdated; // 0x338(0x10)
		FMulticastInlineDelegate OnRotationRequested; // 0x348(0x10)
		FMulticastInlineDelegate OnVariantItemEngaged; // 0x358(0x10)
		FMulticastInlineDelegate OnVariantItemPreviewed; // 0x368(0x10)
		bool ShowTabHeaders; // 0x378(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantSelector.WBP_UIKit_VariantSelector_C");
			return ret;
		}

		void CREATEDELEGATE_PROXYFUNCTION(FRotator& RotationOffset, bool bSnap); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VM_SelectedItemUpdated(UFortItemVM* SelectedItem); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnregisterStwTabInputs(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleStwPreviousTabInput(bool& Pass Through); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleStwNextTabInput(bool& Pass Through); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RegisterStwTabInputs(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMobileTabSizing(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget GetDesiredFocusTarget(); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EngageAllSelectedItems(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTabgroupFromFilters(TArray<UObject*>& FilterVMs, UWBP_UIKit_Tabs_C* TabGroup, UCommonTextBlock* TabGroupHeader, FDelegateProperty& OnTabSelected); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCustomRowNavigation(UUserWidget* TargetRow, int32_t TargetRowIndex, EUINavigation Direction); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetAllRowsNavigation(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VM_VariantSetsUpdated(TArray<UFortVariantSetVM*>& VariantSetVMs); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VM_SecondaryFiltersUpdated(TArray<UFortVariantSelectorSubFilterVM*>& SubFilterVMs); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VM_PrimaryFiltersUpdated(TArray<UFortVariantSelectorFilterVM*>& FilterVMs); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetIcon(TWeakObjectPtr<UObject*> Asset, UTexture2D* Texture); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSecondaryTabSelected(FName TabID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnConflictsUpdated(TMap<TEnumAsByte, FText> Conflicts); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnVariantItemPreviewed(UFortVariantItemVM* VariantItem); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnRotationRequested(FRotator RotationOffset, bool Snap); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPrimaryTabSelected(FName TabID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnVariantItemEngaged(UFortVariantItemVM* VariantItem, UFortVariantChannelVM* VariantChannel, FString AdditionalInfo); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_VariantSelector(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRotationRequested__DelegateSignature(FRotator RotationOffset, bool Snap); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVariantItemPreviewed__DelegateSignature(UFortVariantItemVM* VariantItem); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVariantItemEngaged__DelegateSignature(UFortVariantItemVM* VariantItem, UFortVariantChannelVM* VariantChannel, FString AdditionalInfo); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConflictTextUpdated__DelegateSignature(FText ConflictText, TEnumAsByte<E_VariantConflictType> ConflictType); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFilterChanged__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Wrapper.WBP_UIKit_VariantRow_Wrapper_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x300 - 0x2B0)
	class UWBP_UIKit_VariantRow_Wrapper_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UFortVariantSetVM* FortVariantSetVM; // 0x2B8(0x8)
		UNamedSlot* Slot_WrappedRow; // 0x2C0(0x8)
		UUserWidget* WrappedRow; // 0x2C8(0x8)
		FMulticastInlineDelegate OnConflictsUpdated; // 0x2D0(0x10)
		FMulticastInlineDelegate OnVariantItemEngaged; // 0x2E0(0x10)
		FMulticastInlineDelegate OnVariantItemPreviewed; // 0x2F0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Wrapper.WBP_UIKit_VariantRow_Wrapper_C");
			return ret;
		}

		void SetFortVariantSetVM(UFortVariantSetVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EngageSelectedItem(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetDesiredFocusTarget(UWidget* FocusTarget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VM_VariantChannelsUpdated(TArray<UFortVariantChannelVM*>& ChannelVMs); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnRotationRequested(FRotator& RotationOffset, bool bSnap); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnConflictsUpdated(TMap<TEnumAsByte, FText> Conflicts); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnVariantItemPreviewed(UFortVariantItemVM* VariantItem); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnVariantItemEngaged(UFortVariantItemVM* VariantItem, UFortVariantChannelVM* VariantChannel, FString AdditionalInfo); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_VariantRow_Wrapper(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVariantItemPreviewed__DelegateSignature(UFortVariantItemVM* VariantItem); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVariantItemEngaged__DelegateSignature(UFortVariantItemVM* VariantItem, UFortVariantChannelVM* VariantChannel, FString AdditionalInfo); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConflictsUpdated__DelegateSignature(TMap<TEnumAsByte, FText> Conflicts); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Slider.WBP_UIKit_VariantRow_Slider_C
	// Inherited from UWBP_UIKit_VariantRow_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x330 - 0x2F8)
	class UWBP_UIKit_VariantRow_Slider_C : public UWBP_UIKit_VariantRow_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F8(0x8)
		UFortVariantSliderChannelVM* FortVariantSliderChannelVM; // 0x300(0x8)
		UWBP_UIKit_Slider_C* WBP_UIKit_Slider; // 0x308(0x8)
		double CommitHoldTime; // 0x310(0x8)
		FTimerHandle CommitTimer; // 0x318(0x8)
		double PendingCommitValue; // 0x320(0x8)
		double LastValue; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Slider.WBP_UIKit_VariantRow_Slider_C");
			return ret;
		}

		void SetFortVariantSliderChannelVM(UFortVariantSliderChannelVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CommitFloatValue(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetDesiredFocusTarget(UWidget* FocusTarget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeRow(UFortVariantChannelVM* ChannelVM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCommitHoldTimerFinished(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_VariantRow_Slider_WBP_UIKit_Slider_K2Node_ComponentBoundEvent_5_OnSliderValueChanged__DelegateSignature(double Value); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_VariantRow_Slider(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Slider/WBP_UIKit_Slider.WBP_UIKit_Slider_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x320 - 0x2D8)
	class UWBP_UIKit_Slider_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2D8(0x8)
		UWidgetAnimation* Anim_Focus; // 0x2E0(0x8)
		UWBP_UIKit_SliderButton_C* Button_Decrease; // 0x2E8(0x8)
		UWBP_UIKit_SliderButton_C* Button_Increase; // 0x2F0(0x8)
		UAnalogSlider* Slider_Value; // 0x2F8(0x8)
		UWBP_UIKit_ProgressBar_C* SliderProgressBar; // 0x300(0x8)
		UWBP_UIKit_Button_Generic_C* WBP_UIKit_Button_Generic; // 0x308(0x8)
		FMulticastInlineDelegate OnSliderValueChanged; // 0x310(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Slider/WBP_UIKit_Slider.WBP_UIKit_Slider_C");
			return ret;
		}

		void ShowIcons(bool Show); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_Slider_Slider_Value_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_Slider_Button_Decrease_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_Slider_WBP_UIKit_Button_Generic_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_Slider_WBP_UIKit_Button_Generic_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_Slider_Button_Increase_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Slider(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSliderValueChanged__DelegateSignature(double Value); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/ProgressBar/WBP_UIKit_ProgressBar.WBP_UIKit_ProgressBar_C
	// Inherited from UWBP_UIKit_ProgressBar_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x440 - 0x440)
	class UWBP_UIKit_ProgressBar_C : public UWBP_UIKit_ProgressBar_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/ProgressBar/WBP_UIKit_ProgressBar.WBP_UIKit_ProgressBar_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Tiled.WBP_UIKit_VariantRow_Tiled_C
	// Inherited from UWBP_UIKit_VariantRow_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x21 (0x319 - 0x2F8)
	class UWBP_UIKit_VariantRow_Tiled_C : public UWBP_UIKit_VariantRow_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F8(0x8)
		UFortVariantSelectorVM* FortVariantSelectorVM; // 0x300(0x8)
		UFortVariantChannelVM* FortVariantChannelVM; // 0x308(0x8)
		UFortCommonTileView* TileView_Variants; // 0x310(0x8)
		bool IsColorRow; // 0x318(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Tiled.WBP_UIKit_VariantRow_Tiled_C");
			return ret;
		}

		void SetFortVariantChannelVM(UFortVariantChannelVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetHasConflict(UFortVariantItemVM* VariantItemVM); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EngageSelectedItem(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreviewItem(UObject* VariantItem, bool ShowPreview); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EngageItem(UObject* VariantItem); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetDesiredFocusTarget(UWidget* FocusTarget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeRow(UFortVariantChannelVM* ChannelVM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_VariantRow_Tiled_TileViewVariants_K2Node_ComponentBoundEvent_1_OnListEntryInitializedDynamic__DelegateSignature(UObject* Item, UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_VariantRow_Tiled_TileViewVariants_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature(UObject* Item); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_VariantRow_Tiled_TileViewVariants_K2Node_ComponentBoundEvent_4_OnItemIsHoveredChangedDynamic__DelegateSignature(UObject* Item, bool bIsHovered); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_VariantRow_Tiled(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_ItemVariant.WBP_UIKit_ItemVariant_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1758 - 0x1740)
	class UWBP_UIKit_ItemVariant_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortVariantItemVM* FortVariantItemVM; // 0x1748(0x8)
		UWBP_UIKit_StatusIndicator_C* StatusIndicator_Owned; // 0x1750(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_ItemVariant.WBP_UIKit_ItemVariant_C");
			return ret;
		}

		void __666b9567-4692-31d2-4548-1ab35747b648_SourceToDest(bool& IsAgeGatedOut); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFortVariantItemVM(UFortVariantItemVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetIsVariantAgeGated(bool IsAgeGated, UFortItemVM* CosmeticItem, bool& IsAgeGatedOut); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemIsDisabled(bool Disabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemIsOwned(bool IsOwned); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OwnedVisibility(bool IsOwned, ESlateVisibility& NewParam); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetVariantDisplayInfo(FVariantDisplayInfo VariantDisplayInfo); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ItemVariant(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_DescriptionWithSubtitle.WBP_UIKit_DescriptionWithSubtitle_C
	// Inherited from UWBP_UIKit_ItemDescription_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x91 (0x4FD - 0x46C)
	class UWBP_UIKit_DescriptionWithSubtitle_C : public UWBP_UIKit_ItemDescription_Base_C	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x46C(0x4) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x8)
		UFortItemDetailsVM* FortItemDetailsVM; // 0x478(0x8)
		UWBP_DynamicSubtitle_C* Subtitle; // 0x480(0x8)
		int32_t SubtitleRow; // 0x488(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x48C(0x4) UNKNOWN PROPERTY
		FSlateFontInfo SubtitleFont; // 0x490(0x58)
		TEnumAsByte<E_UI_TagType> RarityTagType; // 0x4E8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x4E9(0x3) UNKNOWN PROPERTY
		FMargin SubtitlePadding; // 0x4EC(0x10)
		bool HideSubtitle; // 0x4FC(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_DescriptionWithSubtitle.WBP_UIKit_DescriptionWithSubtitle_C");
			return ret;
		}

		void __96e8e66b-402a-a6aa-9e19-2688f5dec065_SourceToDest(FFortColorPalette& OutputPin); // Flags: Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFortItemDetailsVM(UFortItemDetailsVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsEquipped(bool IsEquipped); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Alignments(TEnumAsByte<EHorizontalAlignment> Alignment); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowDynamicSubtitle(bool Show); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetRarityColors(bool IsSeries, FFortColorPalette& FortColorPalette, FFortColorPalette& OutputPin); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeWidget(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWidgetLayout(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRarityTagType(TEnumAsByte<E_UI_TagType> RarityTagType); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSubtitleText(FText InText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSubtitle(FText SubTitleText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MakeDynamicSubtitle(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRarityTag(FText TagPrimaryText, FText TagSecondaryText, TEnumAsByte<E_UI_TagType> TagType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_DescriptionWithSubtitle(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Items/WBP_DynamicSubtitle.WBP_DynamicSubtitle_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x318 - 0x2B0)
	class UWBP_DynamicSubtitle_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UCommonTextBlock* Text_Subtitle; // 0x2B8(0x8)
		FSlateFontInfo SubtitleFont; // 0x2C0(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_DynamicSubtitle.WBP_DynamicSubtitle_C");
			return ret;
		}

		void SetSubtitleFont(FSlateFontInfo Font); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_DynamicSubtitle(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Redirector.WBP_UIKit_VariantRow_Redirector_C
	// Inherited from UFortRedirectorVariantWrapper -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x3A0 - 0x328)
	class UWBP_UIKit_VariantRow_Redirector_C : public UFortRedirectorVariantWrapper	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x8)
		TMap<FGameplayTag, UFortVariantChannelVM*> VariantChannelsMap; // 0x330(0x50)
		FMulticastInlineDelegate OnVariantItemEngaged; // 0x380(0x10)
		FString SprayID; // 0x390(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Redirector.WBP_UIKit_VariantRow_Redirector_C");
			return ret;
		}

		void GetDesiredFocusTarget(UWidget* FocusTarget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeRow(TArray<UFortVariantChannelVM*>& ChannelVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleVariantEngaged(FMcpVariantChannelInfo& InVariantChannelInfo, UFortVariantItemVM* ItemVM); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_VariantRow_Redirector(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVariantItemEngaged__DelegateSignature(UFortVariantItemVM* VariantItem, UFortVariantChannelVM* VariantChannel, FString AdditionalInfo); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Numeric.WBP_UIKit_VariantRow_Numeric_C
	// Inherited from UWBP_UIKit_VariantRow_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x330 - 0x2F8)
	class UWBP_UIKit_VariantRow_Numeric_C : public UWBP_UIKit_VariantRow_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F8(0x8)
		UCommonTextBlock* Text_NumericalValue; // 0x300(0x8)
		UFortVariantNumericChannelVM* FortVariantNumericChannelVM; // 0x308(0x8)
		UPanelButton_C* Button_TenDigitDown; // 0x310(0x8)
		UPanelButton_C* Button_TenDigitUp; // 0x318(0x8)
		UPanelButton_C* Button_ZeroDigitDown; // 0x320(0x8)
		UPanelButton_C* Button_ZeroDigitUp; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Numeric.WBP_UIKit_VariantRow_Numeric_C");
			return ret;
		}

		void SetFortVariantNumericChannelVM(UFortVariantNumericChannelVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetDesiredFocusTarget(UWidget* FocusTarget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeRow(UFortVariantChannelVM* ChannelVM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_VariantRow_Numeric_Button_TenDigitDown_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_VariantRow_Numeric_Button_TenDigitUp_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_VariantRow_Numeric_Button_ZeroDigitDown_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_VariantRow_Numeric_Button_ZeroDigitUp_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_VariantRow_Numeric(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Slider/WBP_UIKit_SliderButton.WBP_UIKit_SliderButton_C
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x100 (0x1490 - 0x1390)
	class UWBP_UIKit_SliderButton_C : public UCommonButtonBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1390(0x8)
		USizeBox* Content; // 0x1398(0x8)
		UImage* Icon; // 0x13A0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY
		FSlateBrush Icon_Brush; // 0x13B0(0xB0)
		TEnumAsByte<EVerticalAlignment> IconVerticalAlignment; // 0x1460(0x1)
		TEnumAsByte<EHorizontalAlignment> IconHorizontalAlignment; // 0x1461(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x1462(0x2) UNKNOWN PROPERTY
		float ButtonMinHeight; // 0x1464(0x4)
		float ButtonMinWidth; // 0x1468(0x4)
		FMargin IconPadding; // 0x146C(0x10)
		unsigned char UnknownData02_6[0x4]; // 0x147C(0x4) UNKNOWN PROPERTY
		FVector2D MobileIconSize; // 0x1480(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Slider/WBP_UIKit_SliderButton.WBP_UIKit_SliderButton_C");
			return ret;
		}

		void ShownIcon(bool IsShow); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_SliderButton(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Base.WBP_UIKit_VariantRow_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x2F8 - 0x2B0)
	class UWBP_UIKit_VariantRow_Base_C : public UUserWidget	
	{
	public:
		UNamedSlot* Slot_Content; // 0x2B0(0x8)
		UCommonTextBlock* Text_Disclaimer; // 0x2B8(0x8)
		UCommonTextBlock* Text_RowHeader; // 0x2C0(0x8)
		FMulticastInlineDelegate OnConflictsUpdated; // 0x2C8(0x10)
		FMulticastInlineDelegate OnVariantItemEngaged; // 0x2D8(0x10)
		FMulticastInlineDelegate OnVariantItemPreviewed; // 0x2E8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Base.WBP_UIKit_VariantRow_Base_C");
			return ret;
		}

		void GetDesiredFocusTarget(UWidget* FocusTarget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeRow(UFortVariantChannelVM* ChannelVM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVariantItemPreviewed__DelegateSignature(UFortVariantItemVM* VariantItem); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVariantItemEngaged__DelegateSignature(UFortVariantItemVM* VariantItem, UFortVariantChannelVM* VariantChannel, FString AdditionalInfo); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConflictsUpdated__DelegateSignature(TMap<TEnumAsByte, FText> Conflicts); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/VariantSelector/BPFL_VariantSelector_Functions.BPFL_VariantSelector_Functions_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBPFL_VariantSelector_Functions_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/BPFL_VariantSelector_Functions.BPFL_VariantSelector_Functions_C");
			return ret;
		}

		void GetPrioritizedConflictFromMap(TMap<TEnumAsByte, FText> Conflicts, UObject* __WorldContext, FText& ConflictText, TEnumAsByte<E_VariantConflictType>& ConflictType); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetConflictsFromItem(UFortItemVM* SelectedItem, UFortVariantSelectorVM* VariantSelectorVM, UObject* __WorldContext, TMap<TEnumAsByte, FText>& Conflicts); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetConflictsFromVariant(UFortVariantItemVM* SelectedVariant, UFortVariantSelectorVM* VariantSelectorVM, UObject* __WorldContext, TMap<TEnumAsByte, FText>& Conflicts); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/InputField/WBP_UIKit_FilteredInputField.WBP_UIKit_FilteredInputField_C
	// Inherited from UFortEditableFilteredCountedTextBox -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x528 - 0x3D0)
	class UWBP_UIKit_FilteredInputField_C : public UFortEditableFilteredCountedTextBox	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3D0(0x8)
		UWidgetAnimation* Error; // 0x3D8(0x8)
		UCommonTextBlock* CommonText_Label; // 0x3E0(0x8)
		UCommonTextBlock* CommonTextBlock_Prompt; // 0x3E8(0x8)
		UCommonTextBlock* ErrorText; // 0x3F0(0x8)
		UHorizontalBox* Header; // 0x3F8(0x8)
		UImage* Image_WrongTextFrame; // 0x400(0x8)
		UOverlay* Info; // 0x408(0x8)
		UWBP_UIKit_InputField_C* InputField; // 0x410(0x8)
		UCommonTextBlock* Text_CharCount; // 0x418(0x8)
		bool HideValidationInfo; // 0x420(0x1)
		TEnumAsByte<ETextJustify> Justification; // 0x421(0x1)
		bool ShowTextPrompt; // 0x422(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x423(0x5) UNKNOWN PROPERTY
		FText PromptText; // 0x428(0x10)
		FMulticastInlineDelegate OnTextChanged; // 0x438(0x10)
		bool UseHintText; // 0x448(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x449(0x7) UNKNOWN PROPERTY
		FText HintText; // 0x450(0x10)
		FMulticastInlineDelegate OnSanitizedTextReady; // 0x460(0x10)
		FMulticastInlineDelegate OnTextCommitByEnter; // 0x470(0x10)
		bool SanitizedTextReady; // 0x480(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x481(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTextCommitted; // 0x488(0x10)
		FText PersistentIDValidationErrorText; // 0x498(0x10)
		bool Is_Bad_Text; // 0x4A8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x4A9(0x7) UNKNOWN PROPERTY
		FText LabelText; // 0x4B0(0x10)
		bool HideLabel; // 0x4C0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x4C1(0x3) UNKNOWN PROPERTY
		FLinearColor DefaultColor; // 0x4C4(0x10)
		FLinearColor ErrorColor; // 0x4D4(0x10)
		FLinearColor ValidColor; // 0x4E4(0x10)
		bool IsSearchField; // 0x4F4(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x4F5(0x3) UNKNOWN PROPERTY
		FDataTableRowHandle Input_Action_Row; // 0x4F8(0x10)
		FS_UI_BoolFloat Width_Override; // 0x508(0x10)
		FS_UI_BoolFloat Height_Override; // 0x518(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/InputField/WBP_UIKit_FilteredInputField.WBP_UIKit_FilteredInputField_C");
			return ret;
		}

		FText GetEditedText(); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateColors(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetReadOnly(bool IsReadOnly); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetInputFieldText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMinWidth(double InWidth); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetErrorText(bool Additional Validator Failed, FText& Appropriate Text); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCurrentText(FText& Text); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleShowPrompt(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTextFocus(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateConfiguration(bool bHideValidation, TEnumAsByte<ETextJustify> TextJustification, bool bShouldShowTextPrompt, FText PromptDisplayText); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ValidatePersistentID(FText& Text); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FilteredTextEntryWidget_WBP_UIKit_InputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(FText Text); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FilteredTextEntryWidget_WBP_UIKit_InputField_K2Node_ComponentBoundEvent_3_OnTextCommited__DelegateSignature(FText Text, TEnumAsByte<ETextCommit> Commit method); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEditableTextChanged(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCharCountTextChanged(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEditableTextHintChanged(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDirtyTextAttempted(bool bIsBadText, bool bAdditionalValidationFailed); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_FilteredInputField(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextCommitted__DelegateSignature(TEnumAsByte<ETextCommit> CommitMethod); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextCommitByEnter__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSanitizedTextReady__DelegateSignature(FText Text, bool BadText); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextChanged__DelegateSignature(FText Text); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_BattlePass.WBP_UIKit_ItemCard_BattlePass_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x1780 - 0x1740)
	class UWBP_UIKit_ItemCard_BattlePass_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortItemVM* FortItemVM; // 0x1748(0x8)
		UWBP_UIKit_StatusIndicator_C* StatusIndicator_Owned; // 0x1750(0x8)
		int32_t OwnedVariants; // 0x1758(0x4)
		int32_t TotalVariants; // 0x175C(0x4)
		bool IsOwned; // 0x1760(0x1)
		bool PartiallyOwnsVariants; // 0x1761(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x1762(0x6) UNKNOWN PROPERTY
		UAthenaSeasonItemEntryBase* ItemEntryBase; // 0x1768(0x8)
		TArray<FMcpVariantChannelInfo> Variants; // 0x1770(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_BattlePass.WBP_UIKit_ItemCard_BattlePass_C");
			return ret;
		}

		void SetFortItemVM(UFortItemVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Item from Item Definition(UFortItemDefinition* ItemDef); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetAthenaItemEntry(UAthenaSeasonItemEntryBase* ItemEntry); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateVariantsInfo(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsOwned(bool IsOwned); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetVariantsInfo(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Variants Info(UFortItem* ItemInstance); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOwnedVariantsText(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetVariantsCountVisibility(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CountOwnedVariants(TArray<FMcpVariantChannelInfo>& VariantChannels, UAthenaCosmeticItemDefinition* CosmeticItem); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemVM(UFortItemVM* Item VM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ItemCard_BattlePass(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Badge/WBP_UIKit_Badge.WBP_UIKit_Badge_C
	// Inherited from UWBP_UIKit_Badge_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x488 - 0x488)
	class UWBP_UIKit_Badge_C : public UWBP_UIKit_Badge_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Badge/WBP_UIKit_Badge.WBP_UIKit_Badge_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/Tabs/WBP_UIKit_TabGroup.WBP_UIKit_TabGroup_C
	// Inherited from UWBP_UIKit_TabGroup_Base_C -> UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x818 - 0x818)
	class UWBP_UIKit_TabGroup_C : public UWBP_UIKit_TabGroup_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Tabs/WBP_UIKit_TabGroup.WBP_UIKit_TabGroup_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/CoachMark/WBP_UIKit_CoachMark.WBP_UIKit_CoachMark_C
	// Inherited from UWBP_UIKit_CoachMark_Base_C -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x750 - 0x750)
	class UWBP_UIKit_CoachMark_C : public UWBP_UIKit_CoachMark_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/CoachMark/WBP_UIKit_CoachMark.WBP_UIKit_CoachMark_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/Buttons/SpecialButtons/WBP_UIKit_SideBarLeaveButton.WBP_UIKit_SideBarLeaveButton_C
	// Inherited from UFortMainMenuLeaveButtonWrapper -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x328 - 0x308)
	class UWBP_UIKit_SideBarLeaveButton_C : public UFortMainMenuLeaveButtonWrapper	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x8)
		UWBP_UIKit_ButtonCTA_Base_C* CommonButtonInternal; // 0x310(0x8)
		FText Text; // 0x318(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/SpecialButtons/WBP_UIKit_SideBarLeaveButton.WBP_UIKit_SideBarLeaveButton_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTimerTextChanged(FText& Text); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTimerVisibilityChanged(ESlateVisibility InVisibility); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextChanged(FText& Text); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/InputField/WBP_UIKit_InputField.WBP_UIKit_InputField_C
	// Inherited from UWBP_UIKit_InputField_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB (0x1590 - 0x1585)
	class UWBP_UIKit_InputField_C : public UWBP_UIKit_InputField_Base_C	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1585(0x3) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1588(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/InputField/WBP_UIKit_InputField.WBP_UIKit_InputField_C");
			return ret;
		}

		void GetEditableText(UUIKitEditableText* NewParam); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_InputField(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/InfoBox/WBP_UIKit_InfoBox.WBP_UIKit_InfoBox_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x328 - 0x2B0)
	class UWBP_UIKit_InfoBox_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UHorizontalBox* HorizontalBox; // 0x2B8(0x8)
		UImage* Icon; // 0x2C0(0x8)
		USizeBox* SizeBox_Text; // 0x2C8(0x8)
		UCommonRichTextBlock* Text; // 0x2D0(0x8)
		UWBP_UIKit_Backplate_C* WBP_UIKit_Backplate; // 0x2D8(0x8)
		bool ShowIcon; // 0x2E0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2E1(0x7) UNKNOWN PROPERTY
		FVector2D IconSize; // 0x2E8(0x10)
		bool ShowText; // 0x2F8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2F9(0x7) UNKNOWN PROPERTY
		double WrapTextAt; // 0x300(0x8)
		FText PreviewText; // 0x308(0x10)
		bool Show_Background; // 0x318(0x1)
		bool Use_Preview_Text; // 0x319(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x31A(0x6) UNKNOWN PROPERTY
		UMaterialInterface* IconMaterial; // 0x320(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/InfoBox/WBP_UIKit_InfoBox.WBP_UIKit_InfoBox_C");
			return ret;
		}

		void SetText(FText InText); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconSize(FVector2D InSize); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetShowIcon(bool Show Icon); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconImage(UMaterialInterface* Material); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_InfoBox(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Tab_Enhanced.WBP_UIKit_Button_Tab_Enhanced_C
	// Inherited from UWBP_UIKit_Button_Selectable_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x17A8 - 0x1750)
	class UWBP_UIKit_Button_Tab_Enhanced_C : public UWBP_UIKit_Button_Selectable_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1750(0x8)
		TWeakObjectPtr<UClass*> StatusIndicatorClass; // 0x1758(0x20)
		bool EnableCustomLayout; // 0x1778(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1779(0x3) UNKNOWN PROPERTY
		FMargin BangPadding; // 0x177C(0x10)
		TEnumAsByte<EVerticalAlignment> BangVerticalAlignment; // 0x178C(0x1)
		TEnumAsByte<EHorizontalAlignment> BangHorizontalAlignment; // 0x178D(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x178E(0x2) UNKNOWN PROPERTY
		FVector2D BangNudge; // 0x1790(0x10)
		TEnumAsByte<E_UI_StatusIndicator_Configuration> Configuration; // 0x17A0(0x1)
		TEnumAsByte<E_UI_StatusIndicator_Type> Type; // 0x17A1(0x1)
		EFortBangType BangType; // 0x17A2(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x17A3(0x1) UNKNOWN PROPERTY
		FName TutorialName; // 0x17A4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Tab_Enhanced.WBP_UIKit_Button_Tab_Enhanced_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Button_Tab_Enhanced(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Tag/WBP_UIKit_Tag.WBP_UIKit_Tag_C
	// Inherited from UWBP_UIKit_Tag_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x550 - 0x548)
	class UWBP_UIKit_Tag_C : public UWBP_UIKit_Tag_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Tag/WBP_UIKit_Tag.WBP_UIKit_Tag_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Tag(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x408 - 0x3F0)
	class UWBP_UIKit_Dialog_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)
		UUIKitDialogViewModel* UIKitDialogViewModel; // 0x3F8(0x8)
		UWBP_UIKit_Dialog_Base_C* Dialog_Base; // 0x400(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C");
			return ret;
		}

		void SetUIKitDialogViewModel(UUIKitDialogViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Dialog(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_BlockBackground_Tab_Enhanced.WBP_UIKit_BlockBackground_Tab_Enhanced_C
	// Inherited from UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x49 (0x359 - 0x310)
	class UWBP_UIKit_BlockBackground_Tab_Enhanced_C : public UWBP_UIKit_BlockBackground_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x8)
		UWidgetAnimation* Anim_Outline_Glow; // 0x318(0x8)
		UWidgetAnimation* Anim_Outline; // 0x320(0x8)
		UWidgetAnimation* Anim_Disabled_Transition; // 0x328(0x8)
		UWidgetAnimation* Anim_Pressed_Transition; // 0x330(0x8)
		UWidgetAnimation* Anim_Focused_Transition; // 0x338(0x8)
		UImage* Backing; // 0x340(0x8)
		UImage* FocusOutline; // 0x348(0x8)
		bool AdditiveBorder; // 0x350(0x1)
		bool SelectionIsAvailable; // 0x351(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x352(0x2) UNKNOWN PROPERTY
		float Corner_Radius; // 0x354(0x4)
		bool Radius_in_Pixels; // 0x358(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_BlockBackground_Tab_Enhanced.WBP_UIKit_BlockBackground_Tab_Enhanced_C");
			return ret;
		}

		void SetCornerRadiuses(float CornerRadius, bool RadiusInPixels); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnhoverBackgroundReset(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOutlineMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundBrush(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_BlockBackground_Tab_Enhanced(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Throbber/WBP_UIKit_Throbber.WBP_UIKit_Throbber_C
	// Inherited from UWBP_UIKit_Throbber_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E9 - 0x2E9)
	class UWBP_UIKit_Throbber_C : public UWBP_UIKit_Throbber_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Throbber/WBP_UIKit_Throbber.WBP_UIKit_Throbber_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/ContextMenu/ContextMenu_HoldData_Base.ContextMenu_HoldData_Base_C
	// Inherited from UCommonUIHoldData -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UContextMenu_HoldData_Base_C : public UCommonUIHoldData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/ContextMenu/ContextMenu_HoldData_Base.ContextMenu_HoldData_Base_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/ContextMenu/WBP_UIKit_ContextMenuAnchorButton.WBP_UIKit_ContextMenuAnchorButton_C
	// Inherited from UWBP_UIKit_ContextMenuAnchorButton_Base_C -> UUIKitContextMenuAnchor -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x458 - 0x450)
	class UWBP_UIKit_ContextMenuAnchorButton_C : public UWBP_UIKit_ContextMenuAnchorButton_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/ContextMenu/WBP_UIKit_ContextMenuAnchorButton.WBP_UIKit_ContextMenuAnchorButton_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Action1(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Action2(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ContextMenuAnchorButton(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Contextual.WBP_UIKit_Button_Contextual_C
	// Inherited from UWBP_UIKit_Button_Generic_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1770 - 0x1758)
	class UWBP_UIKit_Button_Contextual_C : public UWBP_UIKit_Button_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1758(0x8)
		UWBP_UIKit_Block_Outline_C* UIKit_Block_Outline; // 0x1760(0x8)
		UWBP_CaptureForPostBufferUpdate_C* WBP_CaptureForPostBufferUpdate; // 0x1768(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Contextual.WBP_UIKit_Button_Contextual_C");
			return ret;
		}

		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Button_Contextual(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Highlight/WBP_UIKit_Highlight.WBP_UIKit_Highlight_C
	// Inherited from UWBP_UIKit_Highlight_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x418 - 0x418)
	class UWBP_UIKit_Highlight_C : public UWBP_UIKit_Highlight_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Highlight/WBP_UIKit_Highlight.WBP_UIKit_Highlight_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/Dialogs/Data/DialogButtonVM.DialogButtonVM_C
	// Inherited from UUIKitDialogButtonViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UDialogButtonVM_C : public UUIKitDialogButtonViewModel	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Dialogs/Data/DialogButtonVM.DialogButtonVM_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/Tabs/WBP_UIKit_Tabs_Categories.WBP_UIKit_Tabs_Categories_C
	// Inherited from UUIKitTabGroupCategories -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x64 (0x34C - 0x2E8)
	class UWBP_UIKit_Tabs_Categories_C : public UUIKitTabGroupCategories	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E8(0x8)
		UUIKitTabGroupCategoriesViewModel* UIKitTabGroupCategoriesViewModel; // 0x2F0(0x8)
		UNamedSlot* Slot_Categories; // 0x2F8(0x8)
		FMulticastInlineDelegate OnCategoryTabClicked; // 0x300(0x10)
		FMulticastInlineDelegate OnSelectionChanged; // 0x310(0x10)
		FMulticastInlineDelegate OnCategoryClicked; // 0x320(0x10)
		UClass* CategoriesClass; // 0x330(0x8)
		UWBP_UIKit_Tabs_Categories_Base_C* CategoriesWidget; // 0x338(0x8)
		bool ShouldWaitForCategoryTabCallback; // 0x340(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x341(0x3) UNKNOWN PROPERTY
		FName LastNotifiedSelectedCategoryID; // 0x344(0x4)
		FName LastNotifiedCategoryTabID; // 0x348(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Tabs/WBP_UIKit_Tabs_Categories.WBP_UIKit_Tabs_Categories_C");
			return ret;
		}

		void SetUIKitTabGroupCategoriesViewModel(UUIKitTabGroupCategoriesViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCategoriesData(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveCategoriesWidget(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddCategoriesWidget(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsCategoryExpanded(FName CategoryID, bool& IsExpanded); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsEmptyCategory(FName CategoryID, bool& IsEmpty); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifySelectionChanged(FName CategoryID, FName CategoryTabID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool SelectCategoryTabByIndex(int32_t CategoryIndex, int32_t TabIndex, bool bSuppressClickFeedback); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool SelectCategoryTabByID(FName CategoryID, FName TabID, bool bSuppressClickFeedback); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetEntryViewModel(FName CategoryID, FName TabID, UUIKitTabGroupButtonViewModel* VM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCategoryTabsCount(FName CategoryID, int32_t& Count); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCategoryTabIndex(FName CategoryID, FName TabID, int32_t& Index); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCategoryTabIDAtIndex(FName CategoryID, int32_t Index, FName& TabID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCategoryIDAtIndex(int32_t Index, FName& CategoryID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCategoryIndex(FName CategoryID, int32_t& Index); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTabButton(FName CategoryID, FName TabID, UCommonButtonBase* Button); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSelectedTabButton(UCommonButtonBase* Button); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSelectedCategoryTabIndex(FName CategoryID, int32_t& Index); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSelectedCategoryTabID(FName CategoryID, FName& TabID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSelectedCategoryID(FName& CategoryID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSelectedCategoryIndex(int32_t& Index); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnTabSelected(FName TabID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnCategoryTabSelected(FName CategoryID, FName TabID, UUIKitTabGroupButtonViewModel* TabVM); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnCategoryTabClicked(FName CategoryID, FName TabID, UUIKitTabGroupButtonViewModel* TabVM); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnCategoryButtonClicked(FName TabID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Tabs_Categories(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryTabClicked__DelegateSignature(FName CategoryID, FName TabID, UUIKitTabGroupButtonViewModel* TabVM); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryClicked__DelegateSignature(UCommonButtonBase* Button, FName CategoryID, bool IsCategoryExpanded, UUIKitTabGroupCategoryViewModel* CategoryVM); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSelectionChanged__DelegateSignature(FName CategoryID, FName TabID); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Tab_CollapsibleSub_Enhanced.WBP_UIKit_Button_Tab_CollapsibleSub_Enhanced_C
	// Inherited from UWBP_UIKit_Button_Tab_Collapsible_Base_C -> UWBP_UIKit_Button_Selectable_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x91 (0x17E9 - 0x1758)
	class UWBP_UIKit_Button_Tab_CollapsibleSub_Enhanced_C : public UWBP_UIKit_Button_Tab_Collapsible_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1758(0x8)
		UWidgetAnimation* OnSelected; // 0x1760(0x8)
		UWidgetAnimation* OnCollapsed; // 0x1768(0x8)
		UImage* Image_Pip; // 0x1770(0x8)
		UWBP_UIKit_Block_Outline_C* UIKit_Block_Outline; // 0x1778(0x8)
		FMargin TopAlignmentPadding; // 0x1780(0x10)
		FMargin BottomAlignmentPadding; // 0x1790(0x10)
		FMargin LeftAlignmentPadding; // 0x17A0(0x10)
		FMargin RightAlignmentPadding; // 0x17B0(0x10)
		TEnumAsByte<E_UI_Alignment> SelectedBarPosition; // 0x17C0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x17C1(0x3) UNKNOWN PROPERTY
		int32_t WrapTextAt; // 0x17C4(0x4)
		double CollapsedAnimValue; // 0x17C8(0x8)
		FMargin CachedTextMargin; // 0x17D0(0x10)
		FName TypefaceCollapsed; // 0x17E0(0x4)
		FName TypefaceExpanded; // 0x17E4(0x4)
		bool Is_Category_Expanded; // 0x17E8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Tab_CollapsibleSub_Enhanced.WBP_UIKit_Button_Tab_CollapsibleSub_Enhanced_C");
			return ret;
		}

		void SequenceEvent__ENTRYPOINTWBP_UIKit_Button_Tab_CollapsibleSub_Enhanced(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Text Wrap(bool ShouldCollapse); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCollapsedAnimValue(double Value); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetAnimations(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeLayout(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeText(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateAlignment(TEnumAsByte<E_UI_Alignment> Selection Alignment); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePadding(TEnumAsByte<E_UI_Alignment> SelectionAlignment); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSelectionAlignment(TEnumAsByte<E_UI_Alignment> Selection Alignment); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Collapsed(bool IsImmediate); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Expanded(bool IsImmediate); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFocusReceived(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFocusLost(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryExpandedStateChanged(bool IsCategoryExpanded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SequencerEventToggleTextWrap(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Button_Tab_CollapsibleSub_Enhanced(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_Shop.WBP_UIKit_ItemCard_Shop_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x32 (0x1772 - 0x1740)
	class UWBP_UIKit_ItemCard_Shop_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortItemVM* FortItemVM; // 0x1748(0x8)
		UWBP_UIKit_Highlight_C* Highlight_OwnedAmount; // 0x1750(0x8)
		UOverlay* O_OwnedAmount; // 0x1758(0x8)
		UWBP_UIKit_StatusIndicator_C* StatusIndicator_Owned; // 0x1760(0x8)
		int32_t OwnedVariants; // 0x1768(0x4)
		int32_t TotalVariants; // 0x176C(0x4)
		bool IsOwned; // 0x1770(0x1)
		bool PartiallyOwnsVariants; // 0x1771(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_Shop.WBP_UIKit_ItemCard_Shop_C");
			return ret;
		}

		void SetFortItemVM(UFortItemVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateVariantsInfo(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsOwned(bool IsOwned); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetVariantsInfo(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Variants Info(UFortItem* ItemInstance); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOwnedVariantsText(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetVariantsCountVisibility(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CountOwnedVariants(TArray<FMcpVariantChannelInfo>& VariantChannels, UAthenaCosmeticItemDefinition* CosmeticItem); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemVM(UFortItemVM* Item VM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ItemCard_Shop(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Tab_Collapsible_Base.WBP_UIKit_Button_Tab_Collapsible_Base_C
	// Inherited from UWBP_UIKit_Button_Selectable_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x1758 - 0x1750)
	class UWBP_UIKit_Button_Tab_Collapsible_Base_C : public UWBP_UIKit_Button_Selectable_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1750(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Tab_Collapsible_Base.WBP_UIKit_Button_Tab_Collapsible_Base_C");
			return ret;
		}

		void Set Is Category(bool IsCategory); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Expanded(bool IsImmediate); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Collapsed(bool IsImmediate); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryExpandedStateChanged(bool IsCategoryExpanded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Button_Tab_Collapsible_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
