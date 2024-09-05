#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UIKit
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_Outline.WBP_UIKit_Block_Outline_C
	// Inherited from UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x65 (0x350 - 0x2EB)
	class UWBP_UIKit_Block_Outline_C : public UWBP_UIKit_Block_Base_C	
	{
	public:
		unsigned char UnknownData03_3[0x5]; // 0x2EB(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F0(0x8)
		UWidgetAnimation Anim_Sheen; // 0x2F8(0x8)
		UWidgetAnimation Anim_Unhover; // 0x300(0x8)
		UWidgetAnimation Anim_Hover; // 0x308(0x8)
		UImage FocusOutline; // 0x310(0x8)
		bool RadiusInPixels; // 0x318(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x319(0x7) UNKNOWN PROPERTY
		double TopLeftCornerRadius; // 0x320(0x8)
		double TopRightCornerRadius; // 0x328(0x8)
		double BottomRightCornerRadius; // 0x330(0x8)
		double BottomLeftCornerRadius; // 0x338(0x8)
		bool Contain_Outline_Padding; // 0x340(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x341(0x7) UNKNOWN PROPERTY
		USoundBase BlockOutlineHoverSound; // 0x348(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_Outline.WBP_UIKit_Block_Outline_C");
			return ret;
		}

		void ResetAnimationState(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D8900
		void ContainOutline(bool ContainOutlinePadding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D9100
		void SetCornerRadiuses(float TopLeft, float TopRight, float BottomLeft, float BottomRight, bool RadiusInPixels); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D8800
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D8C00
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D8B00
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D8D00
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent 0x15D618D8E00
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent 0x15D618D8F00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D618D9200
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D618D8A00
		void ExecuteUbergraph_WBP_UIKit_Block_Outline(int32_t EntryPoint); // Flags: Final 0x15D618D9000
	};


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


	// Class /FortUILibrary/UIKit/StatusIndicator/WBP_UIKit_StatusIndicator.WBP_UIKit_StatusIndicator_C
	// Inherited from UWBP_UIKit_StatusIndicator_Base_C -> UFortBangWrapper_NUI -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3E4 - 0x3E4)
	class UWBP_UIKit_StatusIndicator_C : public UWBP_UIKit_StatusIndicator_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/StatusIndicator/WBP_UIKit_StatusIndicator.WBP_UIKit_StatusIndicator_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/Backplates/WBP_UIKit_Backplate.WBP_UIKit_Backplate_C
	// Inherited from UWBP_UIKit_Backplate_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x338 - 0x330)
	class UWBP_UIKit_Backplate_C : public UWBP_UIKit_Backplate_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Backplates/WBP_UIKit_Backplate.WBP_UIKit_Backplate_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D61D63800
		void ExecuteUbergraph_WBP_UIKit_Backplate(int32_t EntryPoint); // Flags: Final 0x15D61D63900
	};


	// Class /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C
	// Inherited from UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x388 - 0x318)
	class UWBP_UIKit_Block_BackgroundWithOutline_C : public UWBP_UIKit_BlockBackground_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x8)
		UWidgetAnimation Anim_Disabled_Transition; // 0x320(0x8)
		UWidgetAnimation Anim_Pressed_Transition; // 0x328(0x8)
		UWidgetAnimation Anim_Hover_Transition; // 0x330(0x8)
		UWidgetAnimation Anim_Sheen; // 0x338(0x8)
		UWidgetAnimation Anim_OutlineUnhover; // 0x340(0x8)
		UWidgetAnimation Anim_OutlineHover; // 0x348(0x8)
		UImage Backing; // 0x350(0x8)
		UImage FocusOutline; // 0x358(0x8)
		bool RadiusInPixels; // 0x360(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x361(0x7) UNKNOWN PROPERTY
		double TopLeftCornerRadius; // 0x368(0x8)
		double TopRightCornerRadius; // 0x370(0x8)
		double BottomRightCornerRadius; // 0x378(0x8)
		double BottomLeftCornerRadius; // 0x380(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C");
			return ret;
		}

		void SetOutlineMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D61D65400
		void SetBackgroundMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D61D65600
		void SetCornerRadiuses(float TopLeft, float TopRight, float BottomLeft, float BottomRight, bool RadiusInPixels); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D65500
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D61D65700
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D61D66100
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D65B00
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D65800
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D65D00
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent 0x15D61D65E00
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent 0x15D61D65F00
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D65A00
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D65900
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D65C00
		void ExecuteUbergraph_WBP_UIKit_Block_BackgroundWithOutline(int32_t EntryPoint); // Flags: Final 0x15D61D66000
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C
	// Inherited from UWBP_UIKit_ButtonCTA_Base_C -> UFortCTAButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x56 (0x1850 - 0x17FA)
	class UWBP_UIKit_Button_Regular_C : public UWBP_UIKit_ButtonCTA_Base_C	
	{
	public:
		unsigned char UnknownData02_3[0x6]; // 0x17FA(0x6) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1800(0x8)
		TEnumAsByte ButtonType; // 0x1808(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1809(0x7) UNKNOWN PROPERTY
		UMaterialInstance RegularFontMaterial; // 0x1810(0x8)
		UMaterialInstance RegularSecondaryFontMaterial; // 0x1818(0x8)
		UMaterialInstance RegularBackgroundMaterial; // 0x1820(0x8)
		UMaterialInstance RegularOutlineMaterial; // 0x1828(0x8)
		UMaterialInstance QuietFontMaterial; // 0x1830(0x8)
		UMaterialInstance QuietSecondaryFontMaterial; // 0x1838(0x8)
		UMaterialInstance QuietBackgroundMaterial; // 0x1840(0x8)
		UMaterialInstance QuietOutlineMaterial; // 0x1848(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C");
			return ret;
		}

		void SetButtonType(TEnumAsByte ButtonType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D68B00
		void OverrideFontMaterials(UMaterialInstance PrimaryFontMaterial, UMaterialInstance SecondaryFontMaterial); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D61D68D00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D61D68C00
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent 0x15D61D68F00
		void BndEvt__WBP_UIKit_Button_Quiet_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputIconUpdated__DelegateSignature(); // Flags: BlueprintEvent 0x15D61D69000
		void ExecuteUbergraph_WBP_UIKit_Button_Regular(int32_t EntryPoint); // Flags: Final 0x15D61D68E00
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C
	// Inherited from UWBP_UIKit_ButtonCTA_Base_C -> UFortCTAButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE (0x1808 - 0x17FA)
	class UWBP_UIKit_Button_Loud_C : public UWBP_UIKit_ButtonCTA_Base_C	
	{
	public:
		unsigned char UnknownData01_3[0x6]; // 0x17FA(0x6) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1800(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C");
			return ret;
		}

		void BndEvt__WBP_UIKit_Button_Quiet_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputIconUpdated__DelegateSignature(); // Flags: BlueprintEvent 0x15D620B0900
		void ExecuteUbergraph_WBP_UIKit_Button_Loud(int32_t EntryPoint); // Flags: Final 0x15D620B0800
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C
	// Inherited from UWBP_UIKit_ButtonCTA_Base_C -> UFortCTAButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x66 (0x1860 - 0x17FA)
	class UWBP_UIKit_Button_Quiet_C : public UWBP_UIKit_ButtonCTA_Base_C	
	{
	public:
		unsigned char UnknownData01_3[0x6]; // 0x17FA(0x6) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1800(0x8)
		FSlateFontInfo GamepadPromptFont; // 0x1808(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C");
			return ret;
		}

		void UpdateFonts(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D620B9B00
		void UpdateButtonSIze(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B9C00
		void UpdateButtonPadding(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B9D00
		void HideBackground(ECommonInputType InputType); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B9F00
		void BP_OnPressed(); // Flags: Event|Protected|BlueprintEvent 0x15D620BA200
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D620BA100
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent 0x15D620BA300
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D620B9E00
		void BndEvt__WBP_UIKit_Button_Quiet_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputIconUpdated__DelegateSignature(); // Flags: BlueprintEvent 0x15D620BA400
		void ExecuteUbergraph_WBP_UIKit_Button_Quiet(int32_t EntryPoint); // Flags: Final 0x15D620BA000
	};


	// Class /FortUILibrary/UIKit/Buttons/TabButtons/_Blocks/WBP_UIKit_Block_BackgroundTopNavBar.WBP_UIKit_Block_BackgroundTopNavBar_C
	// Inherited from UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x59 (0x371 - 0x318)
	class UWBP_UIKit_Block_BackgroundTopNavBar_C : public UWBP_UIKit_BlockBackground_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x8)
		UWidgetAnimation Anim_Visuals; // 0x320(0x8)
		UWidgetAnimation Anim_BackingInstantSelect; // 0x328(0x8)
		UWidgetAnimation Anim_BackingSelect; // 0x330(0x8)
		UWidgetAnimation Anim_OutlineUnhover; // 0x338(0x8)
		UWidgetAnimation Anim_OutlineHover; // 0x340(0x8)
		UImage Backing; // 0x348(0x8)
		UImage FocusOutline; // 0x350(0x8)
		UImage Visuals; // 0x358(0x8)
		bool RadiusInPixels; // 0x360(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x361(0x7) UNKNOWN PROPERTY
		double CornerRadius; // 0x368(0x8)
		bool UseBackgroundVisuals; // 0x370(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/TabButtons/_Blocks/WBP_UIKit_Block_BackgroundTopNavBar.WBP_UIKit_Block_BackgroundTopNavBar_C");
			return ret;
		}

		void SetOutlineMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D620B8A00
		void SetBackgroundMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D620B8C00
		void SetCornerRadiuses(float CornerRadius, bool RadiusInPixels); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B8B00
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D620B8E00
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D620B9000
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D620B9600
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D620B9400
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent 0x15D620B9300
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D620B8F00
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D620B9100
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D620B8D00
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D620B9200
		void ExecuteUbergraph_WBP_UIKit_Block_BackgroundTopNavBar(int32_t EntryPoint); // Flags: Final 0x15D620B9500
	};


	// Class /FortUILibrary/UIKit/Buttons/TabButtons/WBP_UIKit_Button_TopNavBar.WBP_UIKit_Button_TopNavBar_C
	// Inherited from UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x4D (0x1770 - 0x1723)
	class UWBP_UIKit_Button_TopNavBar_C : public UWBP_UIKit_ButtonGeneric_Base_C	
	{
	public:
		unsigned char UnknownData02_3[0x5]; // 0x1723(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1728(0x8)
		UFortTabViewModel FortTabViewModel; // 0x1730(0x8)
		UMaterialInstance TextMaterial; // 0x1738(0x8)
		UMaterialInstance TextOutlineMaterial; // 0x1740(0x8)
		UMaterialInstance MobileTextMaterial; // 0x1748(0x8)
		UMaterialInstance MobileTextOutlineMaterial; // 0x1750(0x8)
		bool IsMobile; // 0x1758(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1759(0x7) UNKNOWN PROPERTY
		UTexture2D IconVBuck; // 0x1760(0x8)
		UWBP_UIKit_Block_Text_C Block_Text_Secondary; // 0x1768(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/TabButtons/WBP_UIKit_Button_TopNavBar.WBP_UIKit_Button_TopNavBar_C");
			return ret;
		}

		void SetFortTabViewModel(UFortTabViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D620BBD00
		void SetFontStyle(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D620BBE00
		void SetTextLayout(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620BBA00
		void SetData(UUIKitSelectableButtonViewModel VM Button); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620BBF00
		void SetIcon(UObject Icon); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620BBC00
		void SetText(FText Text); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D620BBB00
		void SetBangType(EFortBangType EBangType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620BC000
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent 0x15D620BC400
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D620BC100
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D620BC600
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D620BC500
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D620BC300
		void ExecuteUbergraph_WBP_UIKit_Button_TopNavBar(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D620BC200
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Selectable.WBP_UIKit_Button_Selectable_C
	// Inherited from UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x15 (0x1738 - 0x1723)
	class UWBP_UIKit_Button_Selectable_C : public UWBP_UIKit_ButtonGeneric_Base_C	
	{
	public:
		unsigned char UnknownData01_3[0x5]; // 0x1723(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1728(0x8)
		UUIKitSelectableButtonViewModel UIKitSelectableButtonViewModel; // 0x1730(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Selectable.WBP_UIKit_Button_Selectable_C");
			return ret;
		}

		void SetUIKitSelectableButtonViewModel(UUIKitSelectableButtonViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D66782C00
		void SetPreviewData(UMVVMViewModelBase VM); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66782E00
		void SetData(UUIKitSelectableButtonViewModel VM Button); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66782F00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D66783800
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D817B4900
		void ExecuteUbergraph_WBP_UIKit_Button_Selectable(int32_t EntryPoint); // Flags: Final 0x15D66785900
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Generic.WBP_UIKit_Button_Generic_C
	// Inherited from UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D (0x1740 - 0x1723)
	class UWBP_UIKit_Button_Generic_C : public UWBP_UIKit_ButtonGeneric_Base_C	
	{
	public:
		unsigned char UnknownData01_3[0x5]; // 0x1723(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1728(0x8)
		UWidgetAnimation Anim_Pressed; // 0x1730(0x8)
		UWidgetAnimation Anim_Bounce; // 0x1738(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Generic.WBP_UIKit_Button_Generic_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D66784800
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D66784300
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D66785000
		void BP_OnPressed(); // Flags: Event|Protected|BlueprintEvent 0x15D66784700
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D66784C00
		void ExecuteUbergraph_WBP_UIKit_Button_Generic(int32_t EntryPoint); // Flags: Final 0x15D66784F00
	};


	// Class /FortUILibrary/UIKit/Buttons/TabButtons/_Blocks/WBP_UIKit_Block_BackgroundTabSideNav.WBP_UIKit_Block_BackgroundTabSideNav_C
	// Inherited from UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x358 - 0x318)
	class UWBP_UIKit_Block_BackgroundTabSideNav_C : public UWBP_UIKit_BlockBackground_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x8)
		UWidgetAnimation Anim_Selected_Transition; // 0x320(0x8)
		UWidgetAnimation Anim_OutlineUnhover; // 0x328(0x8)
		UWidgetAnimation Anim_OutlineHover; // 0x330(0x8)
		UImage Backing; // 0x338(0x8)
		UImage FocusOutline; // 0x340(0x8)
		bool RadiusInPixels; // 0x348(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x349(0x7) UNKNOWN PROPERTY
		double CornerRadius; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/TabButtons/_Blocks/WBP_UIKit_Block_BackgroundTabSideNav.WBP_UIKit_Block_BackgroundTabSideNav_C");
			return ret;
		}

		void SetOutlineMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D63E21D00
		void SetBackgroundMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D63E21F00
		void SetCornerRadiuses(float CornerRadius, bool RadiusInPixels); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D63E21E00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D6015F000
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D6015E900
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D63E22100
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D6015ED00
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent 0x15D6015EC00
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D6015E800
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D6015EA00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D63E22000
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D6015EB00
		void ExecuteUbergraph_WBP_UIKit_Block_BackgroundTabSideNav(int32_t EntryPoint); // Flags: Final 0x15D6015EE00
	};


	// Class /FortUILibrary/UIKit/Buttons/TabButtons/WBP_UIKit_Button_Tab.WBP_UIKit_Button_Tab_C
	// Inherited from UWBP_UIKit_Button_Selectable_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x29 (0x1761 - 0x1738)
	class UWBP_UIKit_Button_Tab_C : public UWBP_UIKit_Button_Selectable_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1738(0x8)
		UMaterialInstance TextMaterial; // 0x1740(0x8)
		UMaterialInstance TextOutlineMaterial; // 0x1748(0x8)
		UMaterialInstance MobileTextMaterial; // 0x1750(0x8)
		UMaterialInstance MobileTextOutlineMaterial; // 0x1758(0x8)
		bool IsMobile; // 0x1760(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/TabButtons/WBP_UIKit_Button_Tab.WBP_UIKit_Button_Tab_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D63E21500
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D63E21800
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D63E21700
		void ExecuteUbergraph_WBP_UIKit_Button_Tab(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D63E21600
	};


	// Class /FortUILibrary/UIKit/Tabs/WBP_UIKit_Tabs.WBP_UIKit_Tabs_C
	// Inherited from UWBP_UIKit_Tabs_Base_C -> UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x14 (0x738 - 0x724)
	class UWBP_UIKit_Tabs_C : public UWBP_UIKit_Tabs_Base_C	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0x724(0x4) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x8)
		UUIKitTabGroupViewModel UIKitTabGroupViewModel; // 0x730(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Tabs/WBP_UIKit_Tabs.WBP_UIKit_Tabs_C");
			return ret;
		}

		void SetUIKitTabGroupViewModel(UUIKitTabGroupViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D63E20E00
		void HandleTabCreation(FName TabNameID, UCommonButtonBase TabButton); // Flags: Event|Protected|BlueprintEvent 0x15D63E21000
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D63E20F00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D63E21400
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D63E21200
		void ExecuteUbergraph_WBP_UIKit_Tabs(int32_t EntryPoint); // Flags: Final 0x15D63E21100
	};


	// Class /FortUILibrary/UIKit/Throbber/WBP_UIKit_Throbber.WBP_UIKit_Throbber_C
	// Inherited from UWBP_UIKit_Throbber_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2F1 - 0x2F1)
	class UWBP_UIKit_Throbber_C : public UWBP_UIKit_Throbber_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Throbber/WBP_UIKit_Throbber.WBP_UIKit_Throbber_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_BlockBackground_Tab_Enhanced.WBP_UIKit_BlockBackground_Tab_Enhanced_C
	// Inherited from UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x49 (0x361 - 0x318)
	class UWBP_UIKit_BlockBackground_Tab_Enhanced_C : public UWBP_UIKit_BlockBackground_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x8)
		UWidgetAnimation Anim_Outline_Glow; // 0x320(0x8)
		UWidgetAnimation Anim_Outline; // 0x328(0x8)
		UWidgetAnimation Anim_Disabled_Transition; // 0x330(0x8)
		UWidgetAnimation Anim_Pressed_Transition; // 0x338(0x8)
		UWidgetAnimation Anim_Focused_Transition; // 0x340(0x8)
		UImage Backing; // 0x348(0x8)
		UImage FocusOutline; // 0x350(0x8)
		bool AdditiveBorder; // 0x358(0x1)
		bool SelectionIsAvailable; // 0x359(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x35A(0x2) UNKNOWN PROPERTY
		float Corner_Radius; // 0x35C(0x4)
		bool Radius_in_Pixels; // 0x360(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_BlockBackground_Tab_Enhanced.WBP_UIKit_BlockBackground_Tab_Enhanced_C");
			return ret;
		}

		void SetCornerRadiuses(float CornerRadius, bool RadiusInPixels); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D3F27F900
		void UnhoverBackgroundReset(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D3F27F700
		void SetOutlineMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D3F27F800
		void SetBackgroundMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D3F27FA00
		void SetBackgroundBrush(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D44E08500
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D3FB2FD00
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D3FB28600
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D3FB26200
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D3FB2CA00
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D3FB28500
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D3FB26100
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D3FB2C800
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D3FB26300
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D3FB2C900
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent 0x15D3FB2FE00
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent 0x15D3FB2FF00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D3FB22200
		void ExecuteUbergraph_WBP_UIKit_BlockBackground_Tab_Enhanced(int32_t EntryPoint); // Flags: Final 0x15D3FB2B800
	};


	// Class /FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x410 - 0x3F8)
	class UWBP_UIKit_Dialog_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UUIKitDialogViewModel UIKitDialogViewModel; // 0x400(0x8)
		UWBP_UIKit_Dialog_Base_C Dialog_Base; // 0x408(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C");
			return ret;
		}

		void SetUIKitDialogViewModel(UUIKitDialogViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D3FB25000
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D3FB24F00
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15D3FB25600
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15D3FB25500
		void ExecuteUbergraph_WBP_UIKit_Dialog(int32_t EntryPoint); // Flags: Final 0x15D3FB24E00
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Tab_Enhanced.WBP_UIKit_Button_Tab_Enhanced_C
	// Inherited from UWBP_UIKit_Button_Selectable_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x1790 - 0x1738)
	class UWBP_UIKit_Button_Tab_Enhanced_C : public UWBP_UIKit_Button_Selectable_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1738(0x8)
		TWeakObjectPtr StatusIndicatorClass; // 0x1740(0x20)
		bool EnableCustomLayout; // 0x1760(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1761(0x3) UNKNOWN PROPERTY
		FMargin BangPadding; // 0x1764(0x10)
		TEnumAsByte BangVerticalAlignment; // 0x1774(0x1)
		TEnumAsByte BangHorizontalAlignment; // 0x1775(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x1776(0x2) UNKNOWN PROPERTY
		FVector2D BangNudge; // 0x1778(0x10)
		TEnumAsByte Configuration; // 0x1788(0x1)
		TEnumAsByte Type; // 0x1789(0x1)
		EFortBangType BangType; // 0x178A(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x178B(0x1) UNKNOWN PROPERTY
		FName TutorialName; // 0x178C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Tab_Enhanced.WBP_UIKit_Button_Tab_Enhanced_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D3F27B400
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D3F27B600
		void ExecuteUbergraph_WBP_UIKit_Button_Tab_Enhanced(int32_t EntryPoint); // Flags: Final 0x15D3F27B500
	};


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Contextual.WBP_UIKit_Button_Contextual_C
	// Inherited from UWBP_UIKit_Button_Generic_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1758 - 0x1740)
	class UWBP_UIKit_Button_Contextual_C : public UWBP_UIKit_Button_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UWBP_UIKit_Block_Outline_C UIKit_Block_Outline; // 0x1748(0x8)
		UWBP_CaptureForPostBufferUpdate_C WBP_CaptureForPostBufferUpdate; // 0x1750(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Contextual.WBP_UIKit_Button_Contextual_C");
			return ret;
		}

		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D51B3BB00
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D51B35D00
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D51B35C00
		void ExecuteUbergraph_WBP_UIKit_Button_Contextual(int32_t EntryPoint); // Flags: Final 0x15D51B35E00
	};


	// Class /FortUILibrary/UIKit/Highlight/WBP_UIKit_Highlight.WBP_UIKit_Highlight_C
	// Inherited from UWBP_UIKit_Highlight_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x420 - 0x420)
	class UWBP_UIKit_Highlight_C : public UWBP_UIKit_Highlight_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Highlight/WBP_UIKit_Highlight.WBP_UIKit_Highlight_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/Tag/WBP_UIKit_Tag.WBP_UIKit_Tag_C
	// Inherited from UWBP_UIKit_Tag_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x558 - 0x550)
	class UWBP_UIKit_Tag_C : public UWBP_UIKit_Tag_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Tag/WBP_UIKit_Tag.WBP_UIKit_Tag_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5ACE1C00
		void ExecuteUbergraph_WBP_UIKit_Tag(int32_t EntryPoint); // Flags: Final 0x15D5ACE4100
	};


	// Class /FortUILibrary/UIKit/ContextMenu/WBP_UIKit_ContextMenuAnchorButton.WBP_UIKit_ContextMenuAnchorButton_C
	// Inherited from UWBP_UIKit_ContextMenuAnchorButton_Base_C -> UUIKitContextMenuAnchor -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x460 - 0x458)
	class UWBP_UIKit_ContextMenuAnchorButton_C : public UWBP_UIKit_ContextMenuAnchorButton_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/ContextMenu/WBP_UIKit_ContextMenuAnchorButton.WBP_UIKit_ContextMenuAnchorButton_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D3F51D900
		void Action1(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15D3F518500
		void Action2(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15D3F51C900
		void ExecuteUbergraph_WBP_UIKit_ContextMenuAnchorButton(int32_t EntryPoint); // Flags: Final 0x15D3F51B100
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


	// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_ButtonWithToggle.WBP_UIKit_ButtonWithToggle_C
	// Inherited from UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1E (0x1741 - 0x1723)
	class UWBP_UIKit_ButtonWithToggle_C : public UWBP_UIKit_ButtonGeneric_Base_C	
	{
	public:
		unsigned char UnknownData01_3[0x5]; // 0x1723(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1728(0x8)
		UWBP_UIKit_Block_Outline_C Block_Outline; // 0x1730(0x8)
		UWBP_UIKit_Block_Toggle_C Block_Toggle; // 0x1738(0x8)
		TEnumAsByte ToggleType; // 0x1740(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/WBP_UIKit_ButtonWithToggle.WBP_UIKit_ButtonWithToggle_C");
			return ret;
		}

		void SetToggleType(TEnumAsByte Type); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637BA400
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D637BA500
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D637B6400
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent 0x15D637B6500
		void ExecuteUbergraph_WBP_UIKit_ButtonWithToggle(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D586E4600
	};


	// Class /FortUILibrary/UIKit/InfoBox/WBP_UIKit_InfoBox.WBP_UIKit_InfoBox_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x330 - 0x2B8)
	class UWBP_UIKit_InfoBox_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UHorizontalBox HorizontalBox; // 0x2C0(0x8)
		UImage Icon; // 0x2C8(0x8)
		USizeBox SizeBox_Text; // 0x2D0(0x8)
		UCommonRichTextBlock Text; // 0x2D8(0x8)
		UWBP_UIKit_Backplate_C WBP_UIKit_Backplate; // 0x2E0(0x8)
		bool ShowIcon; // 0x2E8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x2E9(0x7) UNKNOWN PROPERTY
		FVector2D IconSize; // 0x2F0(0x10)
		bool ShowText; // 0x300(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x301(0x7) UNKNOWN PROPERTY
		double WrapTextAt; // 0x308(0x8)
		FText PreviewText; // 0x310(0x10)
		bool Show_Background; // 0x320(0x1)
		bool Use_Preview_Text; // 0x321(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x322(0x6) UNKNOWN PROPERTY
		UMaterialInterface IconMaterial; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/InfoBox/WBP_UIKit_InfoBox.WBP_UIKit_InfoBox_C");
			return ret;
		}

		void SetText(FText InText); // Flags: BlueprintCallable|BlueprintEvent 0x15D6A1AA500
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D6A1A6700
		void SetIconSize(FVector2D InSize); // Flags: BlueprintCallable|BlueprintEvent 0x15D6A1A6400
		void SetShowIcon(bool Show Icon); // Flags: BlueprintCallable|BlueprintEvent 0x15D6A1A6600
		void SetIconImage(UMaterialInterface Material); // Flags: BlueprintCallable|BlueprintEvent 0x15D6A1A6500
		void ExecuteUbergraph_WBP_UIKit_InfoBox(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6A1A6800
	};


	// Class /FortUILibrary/UIKit/Buttons/SpecialButtons/WBP_UIKit_SideBarLeaveButton.WBP_UIKit_SideBarLeaveButton_C
	// Inherited from UFortMainMenuLeaveButtonWrapper -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x330 - 0x310)
	class UWBP_UIKit_SideBarLeaveButton_C : public UFortMainMenuLeaveButtonWrapper	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x8)
		UWBP_UIKit_ButtonCTA_Base_C CommonButtonInternal; // 0x318(0x8)
		FText Text; // 0x320(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/SpecialButtons/WBP_UIKit_SideBarLeaveButton.WBP_UIKit_SideBarLeaveButton_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D87670B00
		void OnTimerTextChanged(FText& Text); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D87670D00
		void OnTimerVisibilityChanged(ESlateVisibility InVisibility); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D87670C00
		void OnTextChanged(FText& Text); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D87670E00
		void ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D87670F00
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


	// Class /FortUILibrary/UIKit/Badge/WBP_UIKit_Badge.WBP_UIKit_Badge_C
	// Inherited from UWBP_UIKit_Badge_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x490 - 0x490)
	class UWBP_UIKit_Badge_C : public UWBP_UIKit_Badge_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Badge/WBP_UIKit_Badge.WBP_UIKit_Badge_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_BattlePass.WBP_UIKit_ItemCard_BattlePass_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x1780 - 0x1740)
	class UWBP_UIKit_ItemCard_BattlePass_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortItemVM FortItemVM; // 0x1748(0x8)
		UWBP_UIKit_StatusIndicator_C StatusIndicator_Owned; // 0x1750(0x8)
		int32_t OwnedVariants; // 0x1758(0x4)
		int32_t TotalVariants; // 0x175C(0x4)
		bool IsOwned; // 0x1760(0x1)
		bool PartiallyOwnsVariants; // 0x1761(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x1762(0x6) UNKNOWN PROPERTY
		UAthenaSeasonItemEntryBase ItemEntryBase; // 0x1768(0x8)
		TArray Variants; // 0x1770(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_BattlePass.WBP_UIKit_ItemCard_BattlePass_C");
			return ret;
		}

		void SetFortItemVM(UFortItemVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB6DE5900
		void Set Item from Item Definition(UFortItemDefinition ItemDef); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DE5C00
		void SetAthenaItemEntry(UAthenaSeasonItemEntryBase ItemEntry); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DE5A00
		void UpdateVariantsInfo(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DE5400
		void SetIsOwned(bool IsOwned); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DE5800
		void ResetVariantsInfo(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DE5D00
		void Set Variants Info(UFortItem ItemInstance); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6DE5B00
		void SetOwnedVariantsText(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DE5600
		void SetVariantsCountVisibility(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DE5500
		void CountOwnedVariants(TArray& VariantChannels, UAthenaCosmeticItemDefinition CosmeticItem); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6DE6100
		void SetItemVM(UFortItemVM Item VM); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DE5700
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15DB6DE2200
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15DB6DE6300
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15DB6DE6200
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6DE5E00
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15DB6DE5F00
		void ExecuteUbergraph_WBP_UIKit_ItemCard_BattlePass(int32_t EntryPoint); // Flags: Final 0x15DB6DE6000
	};


	// Class /FortUILibrary/UIKit/InputField/WBP_UIKit_InputField.WBP_UIKit_InputField_C
	// Inherited from UWBP_UIKit_InputField_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB (0x1590 - 0x1585)
	class UWBP_UIKit_InputField_C : public UWBP_UIKit_InputField_Base_C	
	{
	public:
		unsigned char UnknownData01_3[0x3]; // 0x1585(0x3) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1588(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/InputField/WBP_UIKit_InputField.WBP_UIKit_InputField_C");
			return ret;
		}

		void GetEditableText(UUIKitEditableText& NewParam); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB6DE8300
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6DE8200
		void ExecuteUbergraph_WBP_UIKit_InputField(int32_t EntryPoint); // Flags: Final 0x15DB6DE8400
	};


	// Class /FortUILibrary/UIKit/InputField/WBP_UIKit_FilteredInputField.WBP_UIKit_FilteredInputField_C
	// Inherited from UFortEditableFilteredCountedTextBox -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x528 - 0x3D0)
	class UWBP_UIKit_FilteredInputField_C : public UFortEditableFilteredCountedTextBox	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3D0(0x8)
		UWidgetAnimation Error; // 0x3D8(0x8)
		UCommonTextBlock CommonText_Label; // 0x3E0(0x8)
		UCommonTextBlock CommonTextBlock_Prompt; // 0x3E8(0x8)
		UCommonTextBlock ErrorText; // 0x3F0(0x8)
		UHorizontalBox Header; // 0x3F8(0x8)
		UImage Image_WrongTextFrame; // 0x400(0x8)
		UOverlay Info; // 0x408(0x8)
		UWBP_UIKit_InputField_C InputField; // 0x410(0x8)
		UCommonTextBlock Text_CharCount; // 0x418(0x8)
		bool HideValidationInfo; // 0x420(0x1)
		TEnumAsByte Justification; // 0x421(0x1)
		bool ShowTextPrompt; // 0x422(0x1)
		unsigned char UnknownData06_6[0x5]; // 0x423(0x5) UNKNOWN PROPERTY
		FText PromptText; // 0x428(0x10)
		FMulticastInlineDelegate OnTextChanged; // 0x438(0x10)
		bool UseHintText; // 0x448(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x449(0x7) UNKNOWN PROPERTY
		FText HintText; // 0x450(0x10)
		FMulticastInlineDelegate OnSanitizedTextReady; // 0x460(0x10)
		FMulticastInlineDelegate OnTextCommitByEnter; // 0x470(0x10)
		bool SanitizedTextReady; // 0x480(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x481(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTextCommitted; // 0x488(0x10)
		FText PersistentIDValidationErrorText; // 0x498(0x10)
		bool Is_Bad_Text; // 0x4A8(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x4A9(0x7) UNKNOWN PROPERTY
		FText LabelText; // 0x4B0(0x10)
		bool HideLabel; // 0x4C0(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x4C1(0x3) UNKNOWN PROPERTY
		FLinearColor DefaultColor; // 0x4C4(0x10)
		FLinearColor ErrorColor; // 0x4D4(0x10)
		FLinearColor ValidColor; // 0x4E4(0x10)
		bool IsSearchField; // 0x4F4(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x4F5(0x3) UNKNOWN PROPERTY
		FDataTableRowHandle Input_Action_Row; // 0x4F8(0x10)
		FS_UI_BoolFloat Width_Override; // 0x508(0x10)
		FS_UI_BoolFloat Height_Override; // 0x518(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/InputField/WBP_UIKit_FilteredInputField.WBP_UIKit_FilteredInputField_C");
			return ret;
		}

		FText GetEditedText(); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 0x15DB6DE7D00
		void UpdateColors(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6DE6D00
		void SetReadOnly(bool IsReadOnly); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DE6F00
		void SetInputFieldText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DE7100
		void SetMinWidth(double InWidth); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DE7000
		void GetErrorText(bool Additional Validator Failed, FText& Appropriate Text); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB6DE7C00
		void GetCurrentText(FText& Text); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6DE7E00
		void HandleShowPrompt(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15DB6DE7B00
		void SetTextFocus(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DE6E00
		void UpdateConfiguration(bool bHideValidation, TEnumAsByte TextJustification, bool bShouldShowTextPrompt, FText PromptDisplayText); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15DB6DE6C00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6DE7200
		void ValidatePersistentID(FText& Text); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6DE6B00
		void BndEvt__FilteredTextEntryWidget_WBP_UIKit_InputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(FText Text); // Flags: BlueprintEvent 0x15DB6DE8100
		void BndEvt__FilteredTextEntryWidget_WBP_UIKit_InputField_K2Node_ComponentBoundEvent_3_OnTextCommited__DelegateSignature(FText Text, TEnumAsByte Commit method); // Flags: BlueprintEvent 0x15DB6DE8000
		void OnEditableTextChanged(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB6DE7800
		void OnCharCountTextChanged(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB6DE7A00
		void OnEditableTextHintChanged(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB6DE7700
		void OnDirtyTextAttempted(bool bIsBadText, bool bAdditionalValidationFailed); // Flags: Event|Public|BlueprintEvent 0x15DB6DE7900
		void ExecuteUbergraph_WBP_UIKit_FilteredInputField(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB6DE7F00
		void OnTextCommitted__DelegateSignature(TEnumAsByte CommitMethod); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6DE7300
		void OnTextCommitByEnter__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6DE7400
		void OnSanitizedTextReady__DelegateSignature(FText Text, bool BadText); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6DE7600
		void OnTextChanged__DelegateSignature(FText Text); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6DE7500
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

		void GetPrioritizedConflictFromMap(TMap Conflicts, UObject __WorldContext, FText& ConflictText, TEnumAsByte& ConflictType); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB6DE8A00
		void GetConflictsFromItem(UFortItemVM SelectedItem, UFortVariantSelectorVM VariantSelectorVM, UObject __WorldContext, TMap& Conflicts); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB6DE8C00
		void GetConflictsFromVariant(UFortVariantItemVM SelectedVariant, UFortVariantSelectorVM VariantSelectorVM, UObject __WorldContext, TMap& Conflicts); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB6DE8B00
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Base.WBP_UIKit_VariantRow_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x300 - 0x2B8)
	class UWBP_UIKit_VariantRow_Base_C : public UUserWidget	
	{
	public:
		UNamedSlot Slot_Content; // 0x2B8(0x8)
		UCommonTextBlock Text_Disclaimer; // 0x2C0(0x8)
		UCommonTextBlock Text_RowHeader; // 0x2C8(0x8)
		FMulticastInlineDelegate OnConflictsUpdated; // 0x2D0(0x10)
		FMulticastInlineDelegate OnVariantItemEngaged; // 0x2E0(0x10)
		FMulticastInlineDelegate OnVariantItemPreviewed; // 0x2F0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Base.WBP_UIKit_VariantRow_Base_C");
			return ret;
		}

		void GetDesiredFocusTarget(UWidget& FocusTarget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6DE8900
		void InitializeRow(UFortVariantChannelVM ChannelVM); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DE8800
		void OnVariantItemPreviewed__DelegateSignature(UFortVariantItemVM VariantItem); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6DE8500
		void OnVariantItemEngaged__DelegateSignature(UFortVariantItemVM VariantItem, UFortVariantChannelVM VariantChannel, FString AdditionalInfo); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6DE8600
		void OnConflictsUpdated__DelegateSignature(TMap Conflicts); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6DE8700
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Numeric.WBP_UIKit_VariantRow_Numeric_C
	// Inherited from UWBP_UIKit_VariantRow_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x338 - 0x300)
	class UWBP_UIKit_VariantRow_Numeric_C : public UWBP_UIKit_VariantRow_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x8)
		UCommonTextBlock Text_NumericalValue; // 0x308(0x8)
		UFortVariantNumericChannelVM FortVariantNumericChannelVM; // 0x310(0x8)
		UPanelButton_C Button_TenDigitDown; // 0x318(0x8)
		UPanelButton_C Button_TenDigitUp; // 0x320(0x8)
		UPanelButton_C Button_ZeroDigitDown; // 0x328(0x8)
		UPanelButton_C Button_ZeroDigitUp; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Numeric.WBP_UIKit_VariantRow_Numeric_C");
			return ret;
		}

		void SetFortVariantNumericChannelVM(UFortVariantNumericChannelVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB6DEBF00
		void GetDesiredFocusTarget(UWidget& FocusTarget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6DEC100
		void InitializeRow(UFortVariantChannelVM ChannelVM); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DEC000
		void BndEvt__WBP_UIKit_VariantRow_Numeric_Button_TenDigitDown_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6DEC600
		void BndEvt__WBP_UIKit_VariantRow_Numeric_Button_TenDigitUp_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6DEC500
		void BndEvt__WBP_UIKit_VariantRow_Numeric_Button_ZeroDigitDown_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6DEC400
		void BndEvt__WBP_UIKit_VariantRow_Numeric_Button_ZeroDigitUp_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6DEC300
		void ExecuteUbergraph_WBP_UIKit_VariantRow_Numeric(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB6DEC200
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Slider.WBP_UIKit_VariantRow_Slider_C
	// Inherited from UWBP_UIKit_VariantRow_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x340 - 0x300)
	class UWBP_UIKit_VariantRow_Slider_C : public UWBP_UIKit_VariantRow_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x8)
		UCommonTextBlock Text_Value; // 0x308(0x8)
		UFortVariantSliderChannelVM FortVariantSliderChannelVM; // 0x310(0x8)
		USimpleMaterialProgressBar_C Progress; // 0x318(0x8)
		UAnalogSlider Slider_Value; // 0x320(0x8)
		double CommitHoldTime; // 0x328(0x8)
		FTimerHandle CommitTimer; // 0x330(0x8)
		double PendingCommitValue; // 0x338(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Slider.WBP_UIKit_VariantRow_Slider_C");
			return ret;
		}

		void SetFortVariantSliderChannelVM(UFortVariantSliderChannelVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB6DEB700
		void CommitFloatValue(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DEBC00
		void GetDesiredFocusTarget(UWidget& FocusTarget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6DEBA00
		void InitializeRow(UFortVariantChannelVM ChannelVM); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DEB900
		void BndEvt__FortCosmeticVariantRow_Slider_Slider_Value_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Flags: BlueprintEvent 0x15DB6DEBD00
		void OnCommitHoldTimerFinished(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6DEB800
		void ExecuteUbergraph_WBP_UIKit_VariantRow_Slider(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB6DEBB00
	};


	// Class /FortUILibrary/UIKit/Items/WBP_DynamicSubtitle.WBP_DynamicSubtitle_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x320 - 0x2B8)
	class UWBP_DynamicSubtitle_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UCommonTextBlock Text_Subtitle; // 0x2C0(0x8)
		FSlateFontInfo SubtitleFont; // 0x2C8(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_DynamicSubtitle.WBP_DynamicSubtitle_C");
			return ret;
		}

		void SetSubtitleFont(FSlateFontInfo Font); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DEB200
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6DEB300
		void ExecuteUbergraph_WBP_DynamicSubtitle(int32_t EntryPoint); // Flags: Final 0x15DB6DEB400
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Redirector.WBP_UIKit_VariantRow_Redirector_C
	// Inherited from UFortRedirectorVariantWrapper -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x398 - 0x330)
	class UWBP_UIKit_VariantRow_Redirector_C : public UFortRedirectorVariantWrapper	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x8)
		TMap VariantChannelsMap; // 0x338(0x50)
		FMulticastInlineDelegate OnVariantItemEngaged; // 0x388(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Redirector.WBP_UIKit_VariantRow_Redirector_C");
			return ret;
		}

		void GetDesiredFocusTarget(UWidget& FocusTarget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB6DEAF00
		void InitializeRow(TArray& ChannelVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6DEAD00
		void HandleVariantEngaged(FMcpVariantChannelInfo& InVariantChannelInfo, UFortVariantItemVM ItemVM); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15DB6DEAE00
		void ExecuteUbergraph_WBP_UIKit_VariantRow_Redirector(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB6DEB000
		void OnVariantItemEngaged__DelegateSignature(UFortVariantItemVM VariantItem, UFortVariantChannelVM VariantChannel, FString AdditionalInfo); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6DEAC00
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_ItemVariant.WBP_UIKit_ItemVariant_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1758 - 0x1740)
	class UWBP_UIKit_ItemVariant_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortVariantItemVM FortVariantItemVM; // 0x1748(0x8)
		UWBP_UIKit_StatusIndicator_C StatusIndicator_Owned; // 0x1750(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_ItemVariant.WBP_UIKit_ItemVariant_C");
			return ret;
		}

		void __666b9567-4692-31d2-4548-1ab35747b648_SourceToDest(bool& IsAgeGatedOut); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6DEA900
		void SetFortVariantItemVM(UFortVariantItemVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB6DEE200
		void GetIsVariantAgeGated(bool IsAgeGated, UFortItemVM CosmeticItem, bool& IsAgeGatedOut); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6DEE600
		void SetItemIsDisabled(bool Disabled); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DEE100
		void SetItemIsOwned(bool IsOwned); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DEE000
		void OwnedVisibility(bool IsOwned, ESlateVisibility& NewParam); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6DEE400
		void SetVariantDisplayInfo(FVariantDisplayInfo VariantDisplayInfo); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DEDF00
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15DB6DEA800
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15DB6DEA700
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15DB6DEA600
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15DB6DEE500
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6DEE300
		void ExecuteUbergraph_WBP_UIKit_ItemVariant(int32_t EntryPoint); // Flags: Final 0x15DB6DEE700
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Tiled.WBP_UIKit_VariantRow_Tiled_C
	// Inherited from UWBP_UIKit_VariantRow_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x21 (0x321 - 0x300)
	class UWBP_UIKit_VariantRow_Tiled_C : public UWBP_UIKit_VariantRow_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x8)
		UFortVariantSelectorVM FortVariantSelectorVM; // 0x308(0x8)
		UFortVariantChannelVM FortVariantChannelVM; // 0x310(0x8)
		UFortCommonTileView TileView_Variants; // 0x318(0x8)
		bool IsColorRow; // 0x320(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Tiled.WBP_UIKit_VariantRow_Tiled_C");
			return ret;
		}

		void SetFortVariantChannelVM(UFortVariantChannelVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB6DED100
		bool GetHasConflict(UFortVariantItemVM VariantItemVM); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6DED400
		void EngageSelectedItem(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DED700
		void PreviewItem(UObject VariantItem, bool ShowPreview); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6DED200
		void EngageItem(UObject VariantItem); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6DED800
		void GetDesiredFocusTarget(UWidget& FocusTarget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6DED500
		void InitializeRow(UFortVariantChannelVM ChannelVM); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DED300
		void BndEvt__WBP_UIKit_VariantRow_Tiled_TileViewVariants_K2Node_ComponentBoundEvent_1_OnListEntryInitializedDynamic__DelegateSignature(UObject Item, UUserWidget Widget); // Flags: BlueprintEvent 0x15DB6DEDB00
		void BndEvt__WBP_UIKit_VariantRow_Tiled_TileViewVariants_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature(UObject Item); // Flags: BlueprintEvent 0x15DB6DEDA00
		void BndEvt__WBP_UIKit_VariantRow_Tiled_TileViewVariants_K2Node_ComponentBoundEvent_4_OnItemIsHoveredChangedDynamic__DelegateSignature(UObject Item, bool bIsHovered); // Flags: BlueprintEvent 0x15DB6DED900
		void ExecuteUbergraph_WBP_UIKit_VariantRow_Tiled(int32_t EntryPoint); // Flags: Final 0x15DB6DED600
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Wrapper.WBP_UIKit_VariantRow_Wrapper_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x308 - 0x2B8)
	class UWBP_UIKit_VariantRow_Wrapper_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UFortVariantSetVM FortVariantSetVM; // 0x2C0(0x8)
		UNamedSlot Slot_WrappedRow; // 0x2C8(0x8)
		UUserWidget WrappedRow; // 0x2D0(0x8)
		FMulticastInlineDelegate OnConflictsUpdated; // 0x2D8(0x10)
		FMulticastInlineDelegate OnVariantItemEngaged; // 0x2E8(0x10)
		FMulticastInlineDelegate OnVariantItemPreviewed; // 0x2F8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantRow_Wrapper.WBP_UIKit_VariantRow_Wrapper_C");
			return ret;
		}

		void SetFortVariantSetVM(UFortVariantSetVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB6DEF800
		void EngageSelectedItem(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6DECB00
		void GetDesiredFocusTarget(UWidget& FocusTarget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6DEC900
		void VM_VariantChannelsUpdated(TArray& ChannelVMs); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6DEF700
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15DB6DECE00
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15DB6DECD00
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15DB6DECC00
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15DB6DEFC00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6DEF900
		void HandleOnRotationRequested(FRotator& RotationOffset, bool bSnap); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6DEC700
		void HandleOnConflictsUpdated(TMap Conflicts); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6DEC800
		void HandleOnVariantItemPreviewed(UFortVariantItemVM VariantItem); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6DEFE00
		void HandleOnVariantItemEngaged(UFortVariantItemVM VariantItem, UFortVariantChannelVM VariantChannel, FString AdditionalInfo); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6DEFF00
		void ExecuteUbergraph_WBP_UIKit_VariantRow_Wrapper(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB6DECA00
		void OnVariantItemPreviewed__DelegateSignature(UFortVariantItemVM VariantItem); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6DEFA00
		void OnVariantItemEngaged__DelegateSignature(UFortVariantItemVM VariantItem, UFortVariantChannelVM VariantChannel, FString AdditionalInfo); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6DEFB00
		void OnConflictsUpdated__DelegateSignature(TMap Conflicts); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6DEFD00
	};


	// Class /FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantSelector.WBP_UIKit_VariantSelector_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC9 (0x381 - 0x2B8)
	class UWBP_UIKit_VariantSelector_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UFortItemSelectionVM FortItemSelectionVM; // 0x2C0(0x8)
		UFortVariantSelectorVM FortVariantSelectorVM; // 0x2C8(0x8)
		UDynamicEntryBox EntryBox_ChannelRows; // 0x2D0(0x8)
		UScrollBox ScrollBox_Content; // 0x2D8(0x8)
		UCommonVisibilitySwitcher Switcher_Content; // 0x2E0(0x8)
		UWBP_UIKit_Tabs_C Tabs_PrimaryFilter; // 0x2E8(0x8)
		UWBP_UIKit_Tabs_C Tabs_SecondaryFilter; // 0x2F0(0x8)
		UCommonTextBlock Text_PrimaryFilter; // 0x2F8(0x8)
		UCommonTextBlock Text_SecondaryFilter; // 0x300(0x8)
		UWBP_UIKit_Throbber_C Throbber_Content; // 0x308(0x8)
		TWeakObjectPtr DefaultFilterIcon; // 0x310(0x20)
		FMulticastInlineDelegate OnFilterChanged; // 0x330(0x10)
		FMulticastInlineDelegate OnConflictTextUpdated; // 0x340(0x10)
		FMulticastInlineDelegate OnRotationRequested; // 0x350(0x10)
		FMulticastInlineDelegate OnVariantItemEngaged; // 0x360(0x10)
		FMulticastInlineDelegate OnVariantItemPreviewed; // 0x370(0x10)
		bool ShowTabHeaders; // 0x380(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/VariantSelector/WBP_UIKit_VariantSelector.WBP_UIKit_VariantSelector_C");
			return ret;
		}

		void CREATEDELEGATE_PROXYFUNCTION(FRotator& RotationOffset, bool bSnap); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6DEF400
		void VM_SelectedItemUpdated(UFortItemVM SelectedItem); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F1200
		void UnregisterStwTabInputs(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15DB71F1500
		void HandleStwPreviousTabInput(bool& Pass Through); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6DEE900
		void HandleStwNextTabInput(bool& Pass Through); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6DEEA00
		void RegisterStwTabInputs(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15DB71F1A00
		void SetMobileTabSizing(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F1700
		UWidget GetDesiredFocusTarget(); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6DEF000
		void EngageAllSelectedItems(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6DEF200
		void SetTabgroupFromFilters(TArray& FilterVMs, UWBP_UIKit_Tabs_C TabGroup, UCommonTextBlock TabGroupHeader, FDelegateProperty& OnTabSelected); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F1600
		void SetCustomRowNavigation(UUserWidget TargetRow, int32_t TargetRowIndex, EUINavigation Direction); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F1800
		void SetAllRowsNavigation(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F1900
		void VM_VariantSetsUpdated(TArray& VariantSetVMs); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB71F1100
		void VM_SecondaryFiltersUpdated(TArray& SubFilterVMs); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F1300
		void VM_PrimaryFiltersUpdated(TArray& FilterVMs); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F1400
		void GetIcon(TWeakObjectPtr Asset, UTexture2D& Texture); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6DEEF00
		void OnSecondaryTabSelected(FName TabID); // Flags: BlueprintCallable|BlueprintEvent 0x15DB71F1E00
		void HandleOnConflictsUpdated(TMap Conflicts); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6DEEE00
		void HandleOnVariantItemPreviewed(UFortVariantItemVM VariantItem); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6DEEB00
		void HandleOnRotationRequested(FRotator RotationOffset, bool Snap); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6DEED00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB71F1B00
		void OnPrimaryTabSelected(FName TabID); // Flags: BlueprintCallable|BlueprintEvent 0x15DB71F2000
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6DEF500
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6DEF300
		void HandleOnVariantItemEngaged(UFortVariantItemVM VariantItem, UFortVariantChannelVM VariantChannel, FString AdditionalInfo); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6DEEC00
		void ExecuteUbergraph_WBP_UIKit_VariantSelector(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB6DEF100
		void OnRotationRequested__DelegateSignature(FRotator RotationOffset, bool Snap); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB71F1F00
		void OnVariantItemPreviewed__DelegateSignature(UFortVariantItemVM VariantItem); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB71F1C00
		void OnVariantItemEngaged__DelegateSignature(UFortVariantItemVM VariantItem, UFortVariantChannelVM VariantChannel, FString AdditionalInfo); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB71F1D00
		void OnConflictTextUpdated__DelegateSignature(FText ConflictText, TEnumAsByte ConflictType); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6DEE800
		void OnFilterChanged__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB71F2100
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_DescriptionWithSubtitle.WBP_UIKit_DescriptionWithSubtitle_C
	// Inherited from UWBP_UIKit_ItemDescription_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8D (0x4D5 - 0x448)
	class UWBP_UIKit_DescriptionWithSubtitle_C : public UWBP_UIKit_ItemDescription_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x8)
		UFortItemDetailsVM FortItemDetailsVM; // 0x450(0x8)
		UWBP_DynamicSubtitle_C Subtitle; // 0x458(0x8)
		int32_t SubtitleRow; // 0x460(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x464(0x4) UNKNOWN PROPERTY
		FSlateFontInfo SubtitleFont; // 0x468(0x58)
		TEnumAsByte RarityTagType; // 0x4C0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x4C1(0x3) UNKNOWN PROPERTY
		FMargin SubtitlePadding; // 0x4C4(0x10)
		bool HideSubtitle; // 0x4D4(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_DescriptionWithSubtitle.WBP_UIKit_DescriptionWithSubtitle_C");
			return ret;
		}

		void __96e8e66b-402a-a6aa-9e19-2688f5dec065_SourceToDest(FFortColorPalette& OutputPin); // Flags: Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB71F3700
		void SetFortItemDetailsVM(UFortItemDetailsVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB71F3000
		void Set Alignments(TEnumAsByte Alignment); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F3100
		void ShowDynamicSubtitle(bool Show); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F2A00
		void GetRarityColors(bool IsSeries, FFortColorPalette& FortColorPalette, FFortColorPalette& OutputPin); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB71F3500
		void InitializeWidget(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F3400
		void SetWidgetLayout(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F2B00
		void SetRarityTagType(TEnumAsByte RarityTagType); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F2E00
		void SetSubtitleText(FText InText); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F2C00
		void SetSubtitle(FText SubTitleText); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F2D00
		void MakeDynamicSubtitle(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15DB71F3300
		void SetRarityTag(FText TagPrimaryText, FText TagSecondaryText, TEnumAsByte TagType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F2F00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB71F3200
		void ExecuteUbergraph_WBP_UIKit_DescriptionWithSubtitle(int32_t EntryPoint); // Flags: Final 0x15DB71F3600
	};


	// Class /FortUILibrary/UIKit/Tabs/WBP_UIKit_TabGroup.WBP_UIKit_TabGroup_C
	// Inherited from UWBP_UIKit_TabGroup_Base_C -> UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x820 - 0x820)
	class UWBP_UIKit_TabGroup_C : public UWBP_UIKit_TabGroup_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Tabs/WBP_UIKit_TabGroup.WBP_UIKit_TabGroup_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_PresetSubTile.WBP_UIKit_PresetSubTile_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x1778 - 0x1740)
	class UWBP_UIKit_PresetSubTile_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortModularLoadoutItemVM FortModularLoadoutItemVM; // 0x1748(0x8)
		UWidgetAnimation Anim_OnSelected; // 0x1750(0x8)
		TWeakObjectPtr LargePreviewImage; // 0x1758(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_PresetSubTile.WBP_UIKit_PresetSubTile_C");
			return ret;
		}

		void SetFortModularLoadoutItemVM(UFortModularLoadoutItemVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB71F9600
		void SetTileImage(TWeakObjectPtr Image); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6085900
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15DB71FAD00
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15DB75A1100
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15DB6080500
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15DB71F6400
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB75A3800
		void ExecuteUbergraph_WBP_UIKit_PresetSubTile(int32_t EntryPoint); // Flags: Final 0x15D5B0ABA00
	};


	// Class /FortUILibrary/UIKit/Buttons/TabButtons/_Blocks/WBP_UIKit_Block_BackgroundSideNavigation.WBP_UIKit_Block_BackgroundSideNavigation_C
	// Inherited from UWBP_UIKit_Block_BackgroundGeneric_C -> UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x398 - 0x378)
	class UWBP_UIKit_Block_BackgroundSideNavigation_C : public UWBP_UIKit_Block_BackgroundGeneric_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x8)
		UWidgetAnimation Anim_SelectedFocused; // 0x380(0x8)
		UWidgetAnimation Anim_UnhoverOutline; // 0x388(0x8)
		UWidgetAnimation Anim_HoverOutline; // 0x390(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/TabButtons/_Blocks/WBP_UIKit_Block_BackgroundSideNavigation.WBP_UIKit_Block_BackgroundSideNavigation_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB75A1700
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15DB71F6F00
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15DB71F5200
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D55802100
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15DB71F4300
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent 0x15DB6085F00
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent 0x15DB75A2B00
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent 0x15DB6149A00
		void ExecuteUbergraph_WBP_UIKit_Block_BackgroundSideNavigation(int32_t EntryPoint); // Flags: Final 0x15DB75A3900
	};


	// Class /FortUILibrary/UIKit/Buttons/TabButtons/WBP_UIKit_SideNavigation_Button.WBP_UIKit_SideNavigation_Button_C
	// Inherited from UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x55 (0x1778 - 0x1723)
	class UWBP_UIKit_SideNavigation_Button_C : public UWBP_UIKit_ButtonGeneric_Base_C	
	{
	public:
		unsigned char UnknownData02_3[0x5]; // 0x1723(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1728(0x8)
		UWidgetAnimation OnSelected; // 0x1730(0x8)
		UWidgetAnimation OnCollapsed; // 0x1738(0x8)
		UImage Image_Pip; // 0x1740(0x8)
		int32_t WrapTextAt; // 0x1748(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x174C(0x4) UNKNOWN PROPERTY
		double CollapsedAnimValue; // 0x1750(0x8)
		FVector2D CachedContentSize; // 0x1758(0x10)
		FVector2D CollapsedSize; // 0x1768(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Buttons/TabButtons/WBP_UIKit_SideNavigation_Button.WBP_UIKit_SideNavigation_Button_C");
			return ret;
		}

		void SetButtonPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F7100
		void RefreshButtonSize(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71FAF00
		void SetText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F8000
		void SetCollapsedAnimValue(double Value); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71FE300
		void ResetAnimations(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F4600
		void InitializeText(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75A6300
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent 0x15DB75A1F00
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent 0x15DB71F5800
		void OnButtonCollapsed(bool SkipAnimation); // Flags: BlueprintCallable|BlueprintEvent 0x15DB71FC600
		void OnButtonExpanded(bool SkipAnimation); // Flags: BlueprintCallable|BlueprintEvent 0x15DB75A1500
		void SetIsCollapsed(bool IsCollapsed, bool SkipAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F6200
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent 0x15DB71F8E00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB71F5B00
		void ExecuteUbergraph_WBP_UIKit_SideNavigation_Button(int32_t EntryPoint); // Flags: Final 0x15DB75A2900
	};


	// Class /FortUILibrary/UIKit/Tabs/WBP_UIKit_SideNavigation.WBP_UIKit_SideNavigation_C
	// Inherited from UWBP_UIKit_SideNavigation_Base_C -> UWBP_UIKit_TabGroup_Base_C -> UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x9E9 - 0x9E9)
	class UWBP_UIKit_SideNavigation_C : public UWBP_UIKit_SideNavigation_Base_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Tabs/WBP_UIKit_SideNavigation.WBP_UIKit_SideNavigation_C");
			return ret;
		}
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_Locker.WBP_UIKit_ItemCard_Locker_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA1 (0x17E1 - 0x1740)
	class UWBP_UIKit_ItemCard_Locker_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortLockerEquipUtilityVM FortLockerEquipUtilityVM; // 0x1748(0x8)
		UFortItemSelectionVM FortItemSelectionVM; // 0x1750(0x8)
		UFortItemVM FortItemVM; // 0x1758(0x8)
		UWidgetAnimation Anim_Hovered; // 0x1760(0x8)
		UWBP_UIKit_ContextMenuAnchorButton_C ContextMenu; // 0x1768(0x8)
		bool IsItemCardLockerHovered; // 0x1770(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1771(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnContextMenuOpened; // 0x1778(0x10)
		FMulticastInlineDelegate OnContextMenuClosed; // 0x1788(0x10)
		UUIKitContextMenuActionContext ContextMenuActionContext; // 0x1798(0x8)
		FMulticastInlineDelegate OnItemCardHovered; // 0x17A0(0x10)
		FMulticastInlineDelegate OnItemDoubleClicked; // 0x17B0(0x10)
		FMulticastInlineDelegate OnContextMenuEditStylesClicked; // 0x17C0(0x10)
		FMulticastInlineDelegate GoToLockerItemDetails; // 0x17D0(0x10)
		bool AwaitingContextMenuClose; // 0x17E0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_Locker.WBP_UIKit_ItemCard_Locker_C");
			return ret;
		}

		void __fd451a77-40b3-5dfc-7513-07a6840b8b78_SourceToDest(bool& NewParam); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE76600
		void SetFortItemVM(UFortItemVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D5CE7B900
		bool CanReactToRightClickDown(FPointerEvent& Input); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D5CE79A00
		void SelectCard(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5CE7BF00
		void On Secondary Action Button Clicked(FName NameId); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5CE78E00
		void On Primary Preview Action Button Clicked(FName NameId); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5CE78F00
		void AnalyticsItemInteracted(FString Context); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5CE76500
		void HandleContextMenuOpenChanged(bool IsOpen); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D5CE79100
		void SelectAndMarkSeen(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5CE7C000
		void Can Display Context Menu(bool& Value); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D5CE79B00
		FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5CE78500
		void Update Equipped Indexes(TArray& Equipped Indexes); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5CE7B600
		void Is Item Equipped(UFortItemVM Category Item, UFortItemVM Selected Item, bool& NewParam); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE79000
		void CloseContextMenu(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5CE79900
		void SetFIVMItemAndSlot(UFortItemVM& Selected Item, int32_t& Slot Index); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5CE7BA00
		void SetContextMenuSecondaryPreviewActions(FText PreviewActionName, FDelegateProperty& PreviewActionInInteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5CE7BB00
		void SetContextMenuPrimaryPreviewActions(FText PreviewActionName, FDelegateProperty& PreviewActionInInteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5CE7BC00
		void Set Is New(bool IsNew); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5CE7BE00
		void SetContextMenuActionContext(FDelegateProperty& ArchiveItemInInteractionDelegate, FDelegateProperty& FavoriteItemInInteractionDelegate, FDelegateProperty& ApplyToAllInInteractionDelegate, FDelegateProperty& EditStylesInInteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5CE7BD00
		void OnOperationCompleted_5A8AD2704B8B176D35386498F38A6122(bool Success); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE7C500
		void OnOperationCompleted_2D0ECFBF4D017B0203E8508736C20384(bool Success); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE7C600
		void OnOperationCompleted_F7F975A947821D6ADE73CC80F51FDBF6(bool Success); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE7C400
		void Event On Archive Item(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE79500
		void Event On Favorite Item(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE79400
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x15D5CE7A500
		void BP_OnDoubleClicked(); // Flags: Event|Protected|BlueprintEvent 0x15D5CE7A300
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15D5CE78600
		void Apply to All(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE76400
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5CE7C100
		void ToggleContextMenuIfSelected(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE7B800
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15D5CE79E00
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D5CE7A100
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D5CE79C00
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15D5CE79F00
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent 0x15D5CE79D00
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D5CE7A200
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent 0x15D5CE7A000
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent 0x15D5CE7A400
		void EditStyles(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE79600
		void OnRightClickDown(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE7C200
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5CE79800
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5CE79700
		void OnAddedToFocusPath(FFocusEvent InFocusEvent); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5CE78D00
		void OnRemovedFromFocusPath(FFocusEvent InFocusEvent); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5CE7C300
		void ExecuteUbergraph_WBP_UIKit_ItemCard_Locker(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D5CE79300
		void GoToLockerItemDetails__DelegateSignature(UClass CustomItemDetails); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5CE79200
		void OnContextMenuEditStylesClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5CE78A00
		void OnItemDoubleClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5CE78700
		void OnItemCardHovered__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5CE78800
		void OnContextMenuClosed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5CE78B00
		void OnContextMenuOpened__DelegateSignature(UWidget ContextMenuWidgetParentEntry); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5CE78900
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_PresetSubPreviewTile.WBP_UIKit_PresetSubPreviewTile_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x1778 - 0x1740)
	class UWBP_UIKit_PresetSubPreviewTile_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortLockerCategoryItemVM FortLockerCategoryItemVM; // 0x1748(0x8)
		UWidgetAnimation Anim_OnSelected; // 0x1750(0x8)
		TWeakObjectPtr LargePreviewImage; // 0x1758(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_PresetSubPreviewTile.WBP_UIKit_PresetSubPreviewTile_C");
			return ret;
		}

		void SetFortLockerCategoryItemVM(UFortLockerCategoryItemVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D5F9D2200
		void SetTileImage(TWeakObjectPtr Image); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5F9D6300
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D2800
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D2700
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D2600
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D2400
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5F9D2300
		void ExecuteUbergraph_WBP_UIKit_PresetSubPreviewTile(int32_t EntryPoint); // Flags: Final 0x15D5F9D2500
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_Category.WBP_UIKit_ItemCard_Category_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xF9 (0x1839 - 0x1740)
	class UWBP_UIKit_ItemCard_Category_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortTypedModularLoadoutsVM FortTypedModularLoadoutsVM; // 0x1748(0x8)
		UFortLockerVM FortLockerVM; // 0x1750(0x8)
		UFortLockerCategoryItemVM FortLockerCategoryItemVM; // 0x1758(0x8)
		UFortItemSelectionVM FortItemSelectionVM; // 0x1760(0x8)
		UFortItemVM FortItemVM; // 0x1768(0x8)
		UWidgetAnimation Anim_Hovered; // 0x1770(0x8)
		UWBP_UIKit_ContextMenuAnchorButton_C ContextMenu; // 0x1778(0x8)
		UFortLazyImage EmoteWheelPositionImage; // 0x1780(0x8)
		UFortVisualAttachment FortVisualAttachment; // 0x1788(0x8)
		UWBP_UIKit_StatusIndicator_C StatusIndicator_PresetsShuffle; // 0x1790(0x8)
		UObject List_Item_Object; // 0x1798(0x8)
		FMulticastInlineDelegate OnCategoryClicked; // 0x17A0(0x10)
		bool IsWrap; // 0x17B0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x17B1(0x7) UNKNOWN PROPERTY
		UUIKitContextMenuActionContext ContextMenuActionContext; // 0x17B8(0x8)
		FMulticastInlineDelegate OnContextMenuCardEditStylesClicked; // 0x17C0(0x10)
		bool IsNewItem; // 0x17D0(0x1)
		bool AwaitingContextMenuClose; // 0x17D1(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x17D2(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnContextMenuOpened; // 0x17D8(0x10)
		FMulticastInlineDelegate OnContextMenuClosed; // 0x17E8(0x10)
		bool Is_Item_Card_Category_Hovered; // 0x17F8(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x17F9(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate CategoryCardHovered; // 0x1800(0x10)
		FTimerHandle RandomizeTimerHandle; // 0x1810(0x8)
		FMulticastInlineDelegate OnRandomizeTimer; // 0x1818(0x10)
		FMulticastInlineDelegate OnFortItemVM; // 0x1828(0x10)
		bool Is_Shuffle_Enabled; // 0x1838(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_ItemCard_Category.WBP_UIKit_ItemCard_Category_C");
			return ret;
		}

		void __79e9f624-449e-0d40-8030-13852634ec9a_SourceToDest(ESlateVisibility& Visibility); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5F9D8200
		ESlateVisibility __5b383b64-4f8e-5cf5-053d-ed9109e9c8c2_SourceToDest(); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5F9D8300
		void __2ad0d653-4c9d-80a2-9595-929cef9646b3_SourceToDest(bool& Result); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5F9D8400
		void SetFortLockerCategoryItemVM(UFortLockerCategoryItemVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D5F9D8B00
		void SetFortItemVM(UFortItemVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D5F9D8C00
		void GetShuffleVisibility(bool IsShuffleEnabled, bool CanEnableShuffle, ESlateVisibility& Visibility); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5F9D6A00
		void OnFortItemVMChanged(UFortItemVM InFortVM); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F9D9F00
		void SetEmoteIndicatorVisibility(bool EquippedItemValid); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F9D8F00
		void SetEmoteSlotIndicatorIcon(FFortLockerCategorySlotInfo FortLockerCategorySlotInfo); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F9D8E00
		FEventReply BP_OnHoldTriggered(ECommonInputType CurrentInputType); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5F9D7D00
		void On Secondary Action Button Clicked(FName NameId); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F9D6500
		void On Primary Preview Action Button Clicked(FName NameId); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F9D6600
		void AnalyticsCategoryInteracted(FString Context); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5F9D8100
		FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5F9D9D00
		void HandleContextMenuOpenChanged(bool IsOpen); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D5F9D6800
		void Get Is Favorite State(bool Is Favorite, bool Is New, bool& Result); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5F9D6C00
		void SelectIfPreviewed(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F9D9600
		void SetBangCount(int32_t NewBangCount); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F9D9100
		void SetFIVMItemAndSlot(UFortItemVM& Selected Item, int32_t& Slot Index); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5F9D8D00
		void GetCurrentCategory(bool& CanApplyToAll, bool& CanFavorite); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5F9D6B00
		void Set Context Menu Preview Actions(FText PreviewActionName, FDelegateProperty& InInPreviewActionIteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5F9D9300
		void CloseContextMenu(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F9D7500
		void Initialize(UFortLockerCategoryItemVM Category Item); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5F9D6700
		void Set Context Menu Action Context(FDelegateProperty& FavoriteInInteractionDelegate, FDelegateProperty& ClearBadgesInInteractionDelegate, FDelegateProperty& EditStylesInInteractionDelegate, FDelegateProperty& ApplyToAllInInteractionDelegate, FDelegateProperty& RandomizeItemInInteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5F9D9500
		void SetContextMenuAnchorPadding(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F9D9000
		void SetImageSize(bool IsSmall, double SmallSize, double DefaultSize); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F9D8A00
		void SetNewIcon(int32_t Item Count); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F9D8900
		void Set Tile Image(TWeakObjectPtr Image); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F9D9200
		void SetTileSize(TEnumAsByte TileSize); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F9D8800
		void OnOperationCompleted_06BF0EFB44946B786AFEF88F1D9387CA(bool Success); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F9D9C00
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D7900
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D9E00
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D7A00
		void Event On Favorite Item(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F9D6F00
		void Event On Clear All Badges(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F9D7100
		void Event On Edit Styles(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F9D7000
		void Event On Apply To All(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F9D7200
		void Event On Randomize Item(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F9D6E00
		void HandleContextActions(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F9D6900
		void OnRandomizeTimer_Event(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F9D9A00
		void OnFortItemVM_Event(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F9DA000
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5F9D9700
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D7E00
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D7C00
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D8000
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D7700
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5F9D7400
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D7B00
		void OnAddedToFocusPath(FFocusEvent InFocusEvent); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5F9D6400
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5F9D7300
		void OnRightClickDown(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F9D9900
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D7F00
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent 0x15D5F9D7800
		void OnSetContextMenuActionContext(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F9D9800
		void ToggleContextMenuIfSelected(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F9D8700
		void ExecuteUbergraph_WBP_UIKit_ItemCard_Category(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D5F9D6D00
		void OnFortItemVM__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5F9DA100
		void OnRandomizeTimer__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5F9D9B00
		void CategoryCardHovered__DelegateSignature(bool IsCategoryCardHovered); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5F9D7600
		void OnContextMenuClosed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5F9DA300
		void OnContextMenuOpened__DelegateSignature(UWidget ContextMenuWidgetParentEntry); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5F9DA200
		void OnContextMenuCardEditStylesClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5F9DA400
		void OnCategoryClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5F9DA500
	};


	// Class /FortUILibrary/UIKit/Items/WBP_UIKit_PresetCard.WBP_UIKit_PresetCard_C
	// Inherited from UWBP_UIKit_ItemCard_Base_C -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xF8 (0x1838 - 0x1740)
	class UWBP_UIKit_PresetCard_C : public UWBP_UIKit_ItemCard_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortModularLoadoutItemVM FortModularLoadoutItemVM; // 0x1748(0x8)
		UFortTypedModularLoadoutsVM FortTypedModularLoadoutsVM; // 0x1750(0x8)
		UFortTypedModularLoadoutVM FortTypedModularLoadoutVM; // 0x1758(0x8)
		UWidgetAnimation OnFocus; // 0x1760(0x8)
		UWBP_UIKit_ContextMenuAnchorButton_C ContextMenu; // 0x1768(0x8)
		UScaleBox ScaleBox; // 0x1770(0x8)
		UCommonTextBlock Text_Loadoutname; // 0x1778(0x8)
		TWeakObjectPtr LargePreviewImage; // 0x1780(0x20)
		FMulticastInlineDelegate SelectedTileVM; // 0x17A0(0x10)
		FText Rename_In_Action_Info_Display_Name; // 0x17B0(0x10)
		FText Delete_In_Action_Info_Display_Name; // 0x17C0(0x10)
		FMulticastInlineDelegate OnRenameEventFired; // 0x17D0(0x10)
		FMulticastInlineDelegate OnDeleteEventFired; // 0x17E0(0x10)
		bool IsSaveShuffleTile; // 0x17F0(0x1)
		bool IsItemHovered; // 0x17F1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x17F2(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate DisableOptionsHint; // 0x17F8(0x10)
		FMulticastInlineDelegate EnableOptionsHint; // 0x1808(0x10)
		FMulticastInlineDelegate OnContextMenuOpened; // 0x1818(0x10)
		FMulticastInlineDelegate OnContextMenuClosed; // 0x1828(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/UIKit/Items/WBP_UIKit_PresetCard.WBP_UIKit_PresetCard_C");
			return ret;
		}

		void __4ba91ee8-4cb9-6a47-df1a-8a8aaee3642a_SourceToDest(TWeakObjectPtr& OutItemImage); // Flags: Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB5661100
		void __e736f2bf-42b4-fd4a-7d71-7d834778056d_SourceToDest(bool& IsTileEnabled); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB5660F00
		void __a95d2a70-494a-fcec-4100-fb8d6da56ed1_SourceToDest(bool& Void); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB5661000
		void SetFortModularLoadoutItemVM(UFortModularLoadoutItemVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB5663200
		void SetFortTypedModularLoadoutVM(UFortTypedModularLoadoutVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB5663100
		void GetPreviewImage(TWeakObjectPtr ItemImage, FFortLockerCategorySlotInfo& SlotInfo, TWeakObjectPtr& OutItemImage); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB5664100
		void IsShuffleLoadoutSufficient(int32_t ActiveLoadouts, bool IsShuffleTile, bool& IsTileEnabled); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB5663F00
		void Set Shuffle Tile Enabled Style(bool IsShuffleEnabled); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB5663500
		FEventReply BP_OnHoldTriggered(ECommonInputType CurrentInputType); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB5660A00
		void IsShuffleActive(bool Void); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB5664000
		void IsShuffleTile(bool IsShuffleTile, bool IsShuffled, bool GetCanEnableShuffle, bool& Void); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB5663E00
		void ToggleContextMenu(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB5662D00
		void Toggle Context Menu If Hovered(bool& ToggleSucess); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB5662E00
		void Set Image if Valid(UFortModularLoadoutItemVM LoadoutItem); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB5663600
		void SetText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB5663000
		void SetContextMenuPadding(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB5663300
		void SetContextMenuActionContext(FDelegateProperty& RenameInInteractionDelegate, FDelegateProperty& DeleteInInteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB5663400
		void SetupPresetCard(TArray& Items); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB5662F00
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15DB5660B00
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15DB5660800
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15DB5660700
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB5663800
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15DB5663A00
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent 0x15DB5660600
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15DB5660900
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15DB5660500
		void Event On Rename Preset(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15DB5660100
		void Event On Delete Preset(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15DB5660200
		void BndEvt__WBP_UIKit_PresetCard_ContextMenu_K2Node_ComponentBoundEvent_0_OnContextMenuClosed__DelegateSignature(); // Flags: BlueprintEvent 0x15DB5660E00
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent 0x15DB5660C00
		void BndEvt__WBP_UIKit_PresetCard_ContextMenu_K2Node_ComponentBoundEvent_1_OnContextMenuOpened__DelegateSignature(); // Flags: BlueprintEvent 0x15DB5660D00
		void ExecuteUbergraph_WBP_UIKit_PresetCard(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB5664200
		void OnContextMenuClosed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB5663D00
		void OnContextMenuOpened__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB5663C00
		void EnableOptionsHint__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB5660300
		void DisableOptionsHint__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB5660400
		void OnDeleteEventFired__DelegateSignature(UWBP_UIKit_PresetCard_C PresetCard); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB5663B00
		void OnRenameEventFired__DelegateSignature(UWBP_UIKit_PresetCard_C PresetCard); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB5663900
		void SelectedTileVM__DelegateSignature(UFortTypedModularLoadoutVM PresetContents); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB5663700
	};

}
