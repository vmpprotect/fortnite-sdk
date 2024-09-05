#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Systems
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C
	// Inherited from UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x3 (0x2EB - 0x2E8)
	class UWBP_UIKit_Block_Base_C : public UUIKitBlock	
	{
	public:
		bool IsSelectable; // 0x2E8(0x1)
		bool IsSelected; // 0x2E9(0x1)
		bool IsLocked; // 0x2EA(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C");
			return ret;
		}

		void SetBlockVisibility(bool Visible); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60B5E000
		void SetIsSelectable(bool Is Selectable); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60B5DE00
		void GetIsSelectable(bool& IsSelectable); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D60B5E200
		void SetIsLocked(bool Is Locked); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60B5DF00
		void GetIsLocked(bool& IsLocked); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D60B5E300
		void SetIsSelected(bool IsSelected); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60B5DD00
		void GetIsSelected(bool& IsSelected); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D60B5E100
	};


	// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C
	// Inherited from UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x6D (0x358 - 0x2EB)
	class UWBP_UIKit_Block_Image_C : public UWBP_UIKit_Block_Base_C	
	{
	public:
		unsigned char UnknownData01_3[0x5]; // 0x2EB(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F0(0x8)
		UWidgetAnimation Anim_SelectedDisabled_Transition; // 0x2F8(0x8)
		UWidgetAnimation Anim_SelectedPressed_Transition; // 0x300(0x8)
		UWidgetAnimation Anim_SelectedFocused_Transition; // 0x308(0x8)
		UWidgetAnimation Anim_SelectedHovered_Transition; // 0x310(0x8)
		UWidgetAnimation Anim_Selected_Transition; // 0x318(0x8)
		UWidgetAnimation Anim_Disabled_Transition; // 0x320(0x8)
		UWidgetAnimation Anim_Pressed_Transition; // 0x328(0x8)
		UWidgetAnimation Anim_Focused_Transition; // 0x330(0x8)
		UWidgetAnimation Anim_Hovered_Transition; // 0x338(0x8)
		UFortMobileImage Image; // 0x340(0x8)
		UMaterialInstance ImageMaterial; // 0x348(0x8)
		UMaterialInstanceDynamic ImageMID; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C");
			return ret;
		}

		void RefreshImageMID(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D60B5F300
		void SetSize(FVector2D Desired Size); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60B5F000
		void SetTextureWithParameter(FName ParameterName, UTexture2D& InTexture); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D60B5EE00
		void SetTexture(UTexture2D& InTexture); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D60B5EF00
		void SetMaterial(UMaterialInstance& InMaterial); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D60B5F100
		void SetBrush(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D60B5F200
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5F500
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5FA00
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5F800
		void OnTransitionUnhoveredRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5F400
		void OnTransitionHoveredRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5F900
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5F700
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5FC00
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5FB00
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5F600
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5FD00
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5FE00
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5C700
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5C800
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent 0x15D60B5FF00
		void ExecuteUbergraph_WBP_UIKit_Block_Image(int32_t EntryPoint); // Flags: Final 0x15D60B5C900
	};


	// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_BlockBackground_Base.WBP_UIKit_BlockBackground_Base_C
	// Inherited from UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x2D (0x318 - 0x2EB)
	class UWBP_UIKit_BlockBackground_Base_C : public UWBP_UIKit_Block_Base_C	
	{
	public:
		unsigned char UnknownData01_3[0x5]; // 0x2EB(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F0(0x8)
		UMaterialInstance BackgroundMaterial; // 0x2F8(0x8)
		UMaterialInstanceDynamic BackgroundDynamicMaterial; // 0x300(0x8)
		UMaterialInstance OutlineMaterial; // 0x308(0x8)
		UMaterialInstanceDynamic OutlineDynamicMaterial; // 0x310(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_BlockBackground_Base.WBP_UIKit_BlockBackground_Base_C");
			return ret;
		}

		void RefreshOutlineMID(UMaterialInstanceDynamic Outline MID); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D0B00
		void SetOutlineMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D618D0700
		void SetOutlineBrush(FSlateBrush& In Brush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D618D0800
		void RefreshBackgroundMID(UMaterialInstanceDynamic Background MID); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D0C00
		void SetBackgroundMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D618D0900
		void SetBackgroundBrush(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D618D0A00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D618D0D00
		void ExecuteUbergraph_WBP_UIKit_BlockBackground_Base(int32_t EntryPoint); // Flags: Final 0x15D618D0E00
	};


	// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C
	// Inherited from UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x378 - 0x318)
	class UWBP_UIKit_Block_BackgroundGeneric_C : public UWBP_UIKit_BlockBackground_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x8)
		UWidgetAnimation Anim_SelectedDisabled_Transition; // 0x320(0x8)
		UWidgetAnimation Anim_SelectedPressed_Transition; // 0x328(0x8)
		UWidgetAnimation Anim_SelectedFocused_Transition; // 0x330(0x8)
		UWidgetAnimation Anim_SelectedHovered_Transition; // 0x338(0x8)
		UWidgetAnimation Anim_Selected_Transition; // 0x340(0x8)
		UWidgetAnimation Anim_Disabled_Transition; // 0x348(0x8)
		UWidgetAnimation Anim_Pressed_Transition; // 0x350(0x8)
		UWidgetAnimation Anim_Focused_Transition; // 0x358(0x8)
		UWidgetAnimation Anim_Hovered_Transition; // 0x360(0x8)
		UFortMobileImage Fill; // 0x368(0x8)
		UFortMobileImage Outline; // 0x370(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C");
			return ret;
		}

		void SetOutlineMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D618D2E00
		void SetOutlineBrush(FSlateBrush& In Brush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D618D2F00
		void SetBackgroundMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D618D3000
		void SetBackgroundBrush(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D618D3100
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D3500
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D3C00
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D3D00
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D3A00
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D3B00
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D3600
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D3700
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D3400
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D3900
		void OnTransitionUnhoveredRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D3300
		void OnTransitionHoveredRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D3800
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent 0x15D618D3F00
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent 0x15D618D4000
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent 0x15D618D3E00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D618D3200
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D618D4100
		void ExecuteUbergraph_WBP_UIKit_Block_BackgroundGeneric(int32_t EntryPoint); // Flags: Final 0x15D618D4200
	};


	// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C
	// Inherited from UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x6D (0x358 - 0x2EB)
	class UWBP_UIKit_Block_Text_C : public UWBP_UIKit_Block_Base_C	
	{
	public:
		unsigned char UnknownData01_3[0x5]; // 0x2EB(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F0(0x8)
		UWidgetAnimation Anim_SelectedDisabled_Transition; // 0x2F8(0x8)
		UWidgetAnimation Anim_SelectedPressed_Transition; // 0x300(0x8)
		UWidgetAnimation Anim_SelectedFocused_Transition; // 0x308(0x8)
		UWidgetAnimation Anim_SelectedHovered_Transition; // 0x310(0x8)
		UWidgetAnimation Anim_Selected_Transition; // 0x318(0x8)
		UWidgetAnimation Anim_Disabled_Transition; // 0x320(0x8)
		UWidgetAnimation Anim_Pressed_Transition; // 0x328(0x8)
		UWidgetAnimation Anim_Focused_Transition; // 0x330(0x8)
		UWidgetAnimation Anim_Hovered_Transition; // 0x338(0x8)
		UCommonTextBlock TextBlock; // 0x340(0x8)
		UMaterialInstanceDynamic FontMID; // 0x348(0x8)
		UMaterialInstanceDynamic OutlineMID; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C");
			return ret;
		}

		bool HasOutline(); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D618D4C00
		void RefreshOutlineMID(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D618D7E00
		void RefreshFontMID(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D618D7F00
		void SetMobileFontSizeMultiplier(double MobileFontSizeMultiplier); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D7A00
		void SetWrapping(bool IsAutoWrap, int32_t WrapTextAt); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D7500
		void SetJustification(TEnumAsByte Justification); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D7B00
		void SetTransformPolicy(ETextTransformPolicy Transform Policy); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D7600
		void SetOutlineSize(int32_t Size); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D618D7800
		void SetOutlineMaterial(UMaterialInstance In Material); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D7900
		void SetFontMaterial(UMaterialInstance In Material); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D7C00
		void SetFont(FSlateFontInfo& Font); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D618D7D00
		void SetText(FText Text); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D618D7700
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D8100
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D4400
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D8400
		void OnTransitionUnhoveredRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D8000
		void OnTransitionHoveredRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D4300
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D8300
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D4600
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D4500
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D8200
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D4700
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D618D4800
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent 0x15D618D4A00
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent 0x15D618D4B00
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent 0x15D618D4900
		void ExecuteUbergraph_WBP_UIKit_Block_Text(int32_t EntryPoint); // Flags: Final 0x15D618D4D00
	};


	// Class /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C
	// Inherited from UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x3D (0x328 - 0x2EB)
	class UWBP_UIKit_Block_EditableText_C : public UWBP_UIKit_Block_Base_C	
	{
	public:
		unsigned char UnknownData01_3[0x5]; // 0x2EB(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F0(0x8)
		UWidgetAnimation Anim_Disabled_Transition; // 0x2F8(0x8)
		UWidgetAnimation Anim_Pressed_Transition; // 0x300(0x8)
		UWidgetAnimation Anim_Focused_Transition; // 0x308(0x8)
		UWidgetAnimation Anim_Hovered_Transition; // 0x310(0x8)
		UUIKitEditableText EditableText; // 0x318(0x8)
		UMaterialInstanceDynamic FontDynamicMaterial; // 0x320(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C");
			return ret;
		}

		void SetFilledState(bool IsEmpty); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D618DA000
		void SetMobileFontSizeMultiplier(float MobileFontSizeMultiplier); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D9900
		void SetJustification(TEnumAsByte Justification); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D9B00
		void SetMinDesiredWidth(double Min Width); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D9A00
		void SetIsPassword(bool IsPassword); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D9C00
		void SetReadOnly(bool IsReadOnly); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D9800
		void SetFontMaterial(UMaterialInstance Material Instance); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D9E00
		void SetFont(FSlateFontInfo Font); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D9F00
		void SetHintText(FText Hint Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D9D00
		void SetText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618D9700
		void OnAddedToFocusPath(FFocusEvent InFocusEvent); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D618DA200
		void BndEvt__WBP_UIKit_Block_EditableText_EditableText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(FText& Text); // Flags: HasOutParms|BlueprintEvent 0x15D618DA400
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D618DA100
		void ExecuteUbergraph_WBP_UIKit_Block_EditableText(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D618DA300
	};


	// Class /FortUILibrary/Systems/StatusIndicator/WBP_UIKit_StatusIndicator_Base.WBP_UIKit_StatusIndicator_Base_C
	// Inherited from UFortBangWrapper_NUI -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xEC (0x3E4 - 0x2F8)
	class UWBP_UIKit_StatusIndicator_Base_C : public UFortBangWrapper_NUI	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F8(0x8)
		UWidgetAnimation Anim_Intro; // 0x300(0x8)
		UImage Image_BackgroundWithOutline; // 0x308(0x8)
		UGridPanel Root; // 0x310(0x8)
		int32_t Count; // 0x318(0x4)
		TEnumAsByte Configuration; // 0x31C(0x1)
		TEnumAsByte Type; // 0x31D(0x1)
		bool OverrideStatusIndicatorVisibility; // 0x31E(0x1)
		TEnumAsByte IconSize; // 0x31F(0x1)
		UObject Icon; // 0x320(0x8)
		bool OverrideStatusIndicatorState; // 0x328(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x329(0x7) UNKNOWN PROPERTY
		UCommonTextBlock Indicator_Text; // 0x330(0x8)
		UImage Indicator_Icon; // 0x338(0x8)
		UMaterialInstanceDynamic BackgroundDynamicMaterial; // 0x340(0x8)
		UMaterialInterface BackgroundMaterial; // 0x348(0x8)
		FSlateFontInfo Font; // 0x350(0x58)
		float SizeDot; // 0x3A8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x3AC(0x4) UNKNOWN PROPERTY
		double SizeNumber; // 0x3B0(0x8)
		double SizeIconCompact; // 0x3B8(0x8)
		double SizeIconDefault; // 0x3C0(0x8)
		double MobileIconSizeMultiplierCompact; // 0x3C8(0x8)
		double MobileIconSizeMultipierDefault; // 0x3D0(0x8)
		double MobileIconSizeMultiplierDot; // 0x3D8(0x8)
		float Mobile_Font_Size_MultiplierNumeric; // 0x3E0(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/StatusIndicator/WBP_UIKit_StatusIndicator_Base.WBP_UIKit_StatusIndicator_Base_C");
			return ret;
		}

		void Select Float with Boolean(double FALSE, double TRUE, bool Boolean, double& Output); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D618DBA00
		void Fotmat Text(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D618DC200
		void InitializeStatusIndicator(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D618DC100
		void SetIcon(UObject IconAsset); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D618DB900
		void PassBangTypeFromBP(EFortBangType EBangType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618DBC00
		void UpdateSize(TEnumAsByte IconSize); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618DB400
		void SetIndicatorType(TEnumAsByte IndicatorType); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D618DB700
		void TriggerReset(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618DB500
		void TriggerIntro(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618DB600
		void SetIndicatorConfiguration(int32_t InCount, TEnumAsByte IndicatorConfig); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D618DB800
		void OnStopCallout(); // Flags: Event|Protected|BlueprintEvent 0x15D618DBE00
		void OnStartCallout(FName TutorialObjectiveName, ETutorialType TutorialType); // Flags: Event|Protected|BlueprintEvent 0x15D618DBF00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D618DBB00
		void OnBangStateChanged(bool bEnabled, int32_t Count); // Flags: Event|Protected|BlueprintEvent 0x15D618DC000
		void OverrideCount(int32_t Count); // Flags: BlueprintCallable|BlueprintEvent 0x15D618DBD00
		void ExecuteUbergraph_WBP_UIKit_StatusIndicator_Base(int32_t EntryPoint); // Flags: Final 0x15D618DC300
	};


	// Class /FortUILibrary/Systems/Backplate/WBP_UIKit_Backplate_Base.WBP_UIKit_Backplate_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x330 - 0x2B8)
	class UWBP_UIKit_Backplate_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UImage Backplate; // 0x2C0(0x8)
		TEnumAsByte Brightness; // 0x2C8(0x1)
		TEnumAsByte CornerRadius; // 0x2C9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2CA(0x6) UNKNOWN PROPERTY
		UMaterialInstance BackplateMaterial; // 0x2D0(0x8)
		FS_UI_BackplateCornerRadiusValues Corners; // 0x2D8(0x28)
		FS_UI_BackplateCornerRadiusValues MobileCorners; // 0x300(0x28)
		UMaterialInstanceDynamic BackplateMID; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Backplate/WBP_UIKit_Backplate_Base.WBP_UIKit_Backplate_Base_C");
			return ret;
		}

		void RefreshBackplateMID(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D63D00
		void SetBackplateMaterial(UMaterialInstance Material Instance); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D63C00
		void SetBrightness(TEnumAsByte Brightness); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D63B00
		void SetCornerRadius(TEnumAsByte Corner Radius); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D63A00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D61D63E00
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D61D63F00
		void ExecuteUbergraph_WBP_UIKit_Backplate_Base(int32_t EntryPoint); // Flags: Final 0x15D61D64000
	};


	// Class /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_InputField_Background.WBP_UIKit_Block_InputField_Background_C
	// Inherited from UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x29 (0x341 - 0x318)
	class UWBP_UIKit_Block_InputField_Background_C : public UWBP_UIKit_BlockBackground_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x8)
		UWidgetAnimation Anim_Disabled_Transition; // 0x320(0x8)
		UWidgetAnimation Anim_Pressed_Transition; // 0x328(0x8)
		UWidgetAnimation Anim_Focused_Transition; // 0x330(0x8)
		UImage Backing; // 0x338(0x8)
		bool SelectionIsAvailable; // 0x340(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_InputField_Background.WBP_UIKit_Block_InputField_Background_C");
			return ret;
		}

		void SetCornerRadius(bool Radius in Pixels, double TopLeft, double TopRight, double BottomRight, double BottomLeft); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D62500
		void SetBackgroundMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D61D62600
		void SetBackgroundBrush(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D61D62700
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D63100
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D63000
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D62A00
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D62E00
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent 0x15D61D63200
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent 0x15D61D63300
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D62F00
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D62B00
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D62C00
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D62900
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D61D62D00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D61D62800
		void ExecuteUbergraph_WBP_UIKit_Block_InputField_Background(int32_t EntryPoint); // Flags: Final 0x15D61D63400
	};


	// Class /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C
	// Inherited from UFortCTAButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40A (0x17FA - 0x13F0)
	class UWBP_UIKit_ButtonCTA_Base_C : public UFortCTAButton	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x13F0(0x8)
		UWidgetAnimation Anim_Pressed_Base; // 0x13F8(0x8)
		UWBP_UIKit_Block_BackgroundWithOutline_C Block_Background; // 0x1400(0x8)
		UWBP_UIKit_Block_Text_C Block_Text; // 0x1408(0x8)
		UImage HoldIcon; // 0x1410(0x8)
		UImage HoldProgressBar; // 0x1418(0x8)
		UGridPanel Prompt; // 0x1420(0x8)
		UGridPanel Root; // 0x1428(0x8)
		USpacer Spacer_BottomRight; // 0x1430(0x8)
		USpacer Spacer_TopLeft; // 0x1438(0x8)
		UVerticalBox texts; // 0x1440(0x8)
		FSlateFontInfo LargePrimaryFont; // 0x1448(0x58)
		FSlateFontInfo LargeSecondaryFont; // 0x14A0(0x58)
		FSlateFontInfo MediumPrimaryFont; // 0x14F8(0x58)
		FSlateFontInfo MeduimSecondaryFont; // 0x1550(0x58)
		FSlateFontInfo SmallPrimaryFont; // 0x15A8(0x58)
		FSlateFontInfo SmallSecondaryFont; // 0x1600(0x58)
		TEnumAsByte ButtonSize; // 0x1658(0x1)
		bool OverrideSecondaryTextSize; // 0x1659(0x1)
		unsigned char UnknownData08_6[0x6]; // 0x165A(0x6) UNKNOWN PROPERTY
		double OverrideSecondaryTextSizeMultiplier; // 0x1660(0x8)
		UMaterialInstance BackgroundMaterial; // 0x1668(0x8)
		UMaterialInstance BorderMaterial; // 0x1670(0x8)
		int32_t LargeHeight; // 0x1678(0x4)
		int32_t MediumHeight; // 0x167C(0x4)
		int32_t SmallHeight; // 0x1680(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x1684(0x4) UNKNOWN PROPERTY
		UWBP_UIKit_Block_Text_C Block_SecondaryText; // 0x1688(0x8)
		UWBP_UIKit_Block_Image_C Block_Icon; // 0x1690(0x8)
		bool HasText; // 0x1698(0x1)
		bool HasIcon; // 0x1699(0x1)
		unsigned char UnknownData10_6[0x6]; // 0x169A(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFocusChanged; // 0x16A0(0x10)
		double MobileFontSizeMultiplierLarge; // 0x16B0(0x8)
		double MobileFontSizeMultiplierMedium; // 0x16B8(0x8)
		double MobileFontSizeMultiplierSmall; // 0x16C0(0x8)
		int32_t MobileMinWidth; // 0x16C8(0x4)
		bool OverrideDefaultHeight; // 0x16CC(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x16CD(0x3) UNKNOWN PROPERTY
		int32_t MobileMinHeight; // 0x16D0(0x4)
		int32_t MobileLargeHeight; // 0x16D4(0x4)
		int32_t MobileMediumHeight; // 0x16D8(0x4)
		int32_t MobileSmallHeight; // 0x16DC(0x4)
		double MobileFontSizeMultiplierSecondaryLarge; // 0x16E0(0x8)
		double MobileFontSizeMultiplierSecondaryMedium; // 0x16E8(0x8)
		double MobileFontSizeMultiplierSecondarySmall; // 0x16F0(0x8)
		bool OverrideDefaultMobileFontSizeMultiplier; // 0x16F8(0x1)
		unsigned char UnknownData12_6[0x7]; // 0x16F9(0x7) UNKNOWN PROPERTY
		double MobileFontSizeMultiplierOverride; // 0x1700(0x8)
		bool LastEnabledEvent; // 0x1708(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x1709(0x7) UNKNOWN PROPERTY
		double FadeInTime; // 0x1710(0x8)
		double FadeOutTime; // 0x1718(0x8)
		USoundBase PressedSound; // 0x1720(0x8)
		USoundBase HoveredSound; // 0x1728(0x8)
		USoundBase HoldPressedSound; // 0x1730(0x8)
		USoundBase HoldSound; // 0x1738(0x8)
		USoundBase HoldReleasedSound; // 0x1740(0x8)
		USoundBase HoldCompletedSound; // 0x1748(0x8)
		UAudioComponent HoldSoundAudioComponent; // 0x1750(0x8)
		UAudioComponent PressedSoundAudioComponent; // 0x1758(0x8)
		ECommonInputType CurrentInputType; // 0x1760(0x1)
		unsigned char UnknownData14_6[0x7]; // 0x1761(0x7) UNKNOWN PROPERTY
		UMaterialInstance IconMaterial; // 0x1768(0x8)
		UTexture2D Icon; // 0x1770(0x8)
		bool IconBeforeText; // 0x1778(0x1)
		unsigned char UnknownData15_6[0x7]; // 0x1779(0x7) UNKNOWN PROPERTY
		FVector2D LargeIconSize; // 0x1780(0x10)
		FVector2D MediumIconSize; // 0x1790(0x10)
		FVector2D SmallIconSize; // 0x17A0(0x10)
		FMulticastInlineDelegate OnHoldCompleted; // 0x17B0(0x10)
		double MobileFontSizeMultiplierSecondaryOverride; // 0x17C0(0x8)
		double CurrentHoldProgress; // 0x17C8(0x8)
		UMaterialInstanceDynamic HoldProgressMID; // 0x17D0(0x8)
		FMulticastInlineDelegate OnHoldActionProgress; // 0x17D8(0x10)
		FMargin IconPadding; // 0x17E8(0x10)
		bool EnableOnWidgetStyled; // 0x17F8(0x1)
		bool IsDarkMode; // 0x17F9(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C");
			return ret;
		}

		void IsHoldable(bool& Holdable); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D61D67600
		void Set Icon Dark Mode(bool IsDark); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D66800
		void PresetForDesignTime(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D61D66B00
		void FadeOutSound(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D67900
		void ShouldPlayHoldSound(bool& Holdable); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D61D69F00
		void PlaySoundHoldCompleted(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D67000
		void StopSoundHoldReleased(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D69B00
		void PlaySoundHoldPressed(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D66F00
		void PlaySoundPressed(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D66D00
		void PlaySoundHovered(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D66E00
		void UpdateBackground(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D69A00
		void UpdateButtonPadding(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D69900
		void UpdateButtonSIze(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D69800
		void UpdateFonts(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D61D69700
		void SetHoldPercentage(double HeldPercentageValue); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D6A500
		void SetBorderMaterial(UMaterialInstance BorderMaterial, bool IsAdditive); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D66600
		void IsPromptIcon(bool& Valid); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D61D67500
		void SetButtonIsEnabled(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D61D66500
		void ShowPromptFallbackAction(bool Show); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D61D69C00
		void UpdatePrompt(ECommonInputType InputType); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D61D69600
		void SetPrompt(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D61D6A200
		void SetBackgroundMaterial(UMaterialInstance Background); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D66700
		void RemoveBlock(UWBP_UIKit_Block_Base_C bLock); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D66A00
		void AddIconBlock(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D61D64C00
		void InitIcon(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D61D67700
		void AddSecondTextBlock(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D61D64B00
		void SetSecondText_BP(FText SecondaryText); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D6A100
		void SetText_BP(FText Text); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D6A000
		void InitializeButton(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D67800
		void ResetButtonState(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D66900
		void ShowInputActionText(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D61D69D00
		void SetIconMaterial(UMaterialInstance IconMaterial); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D6A300
		void SetIcon(UObject Icon); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D61D6A400
		void SetButtonSize(TEnumAsByte ButtonSize); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D66400
		void BP_OnFocusLost(); // Flags: Event|Protected|BlueprintEvent 0x15D61D64700
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D61D67D00
		void BP_OnFocusReceived(); // Flags: Event|Protected|BlueprintEvent 0x15D61D64600
		void EventOnFocusedManually(); // Flags: BlueprintCallable|BlueprintEvent 0x15D61D67B00
		void BP_SetSecondaryText(FText& ButtonSecondaryText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D61D67F00
		void BP_SetText(FText& ButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D61D67E00
		void BP_OnInputActionUpdated(); // Flags: Event|Protected|BlueprintEvent 0x15D61D64300
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x15D61D64A00
		void OnActionProgress(float HeldPercent); // Flags: Event|Protected|BlueprintEvent 0x15D61D67400
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent 0x15D61D68400
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D61D67C00
		void BP_OnInputActionTriggered(); // Flags: Event|Protected|BlueprintEvent 0x15D61D64400
		void BP_OnEnabled(); // Flags: Event|Protected|BlueprintEvent 0x15D61D64800
		void BP_OnDisabled(); // Flags: Event|Protected|BlueprintEvent 0x15D61D64900
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent 0x15D61D68000
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D61D68200
		void BP_OnPressed(); // Flags: Event|Protected|BlueprintEvent 0x15D61D68300
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D61D68100
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D61D64500
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D61D66C00
		void ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D61D67A00
		void OnHoldActionProgress__DelegateSignature(double HeldPercent); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D61D67200
		void OnHoldCompleted__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D61D67100
		void OnFocusChanged__DelegateSignature(bool HasFocus); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D61D67300
	};


	// Class /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C
	// Inherited from UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1DD (0x1585 - 0x13A8)
	class UWBP_UIKit_InputField_Base_C : public UUIKitModularButton	
	{
	public:
		unsigned char UnknownData06_3[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x13B0(0x8)
		UWBP_UIKit_Block_EditableText_C Block_EditableText; // 0x13B8(0x8)
		UWBP_UIKit_Block_Outline_C Block_Outline; // 0x13C0(0x8)
		UGridPanel Content; // 0x13C8(0x8)
		UGridPanel Main; // 0x13D0(0x8)
		USizeBox SizeBox; // 0x13D8(0x8)
		UNamedSlot Slot_Main; // 0x13E0(0x8)
		FMulticastInlineDelegate OnTextChanged; // 0x13E8(0x10)
		FMulticastInlineDelegate OnTextCommited; // 0x13F8(0x10)
		FText Text; // 0x1408(0x10)
		double Mobile_Text_Size_Multiplier; // 0x1418(0x8)
		FText Hint_Text; // 0x1420(0x10)
		FSlateFontInfo Font; // 0x1430(0x58)
		TEnumAsByte TextJustification; // 0x1488(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x1489(0x3) UNKNOWN PROPERTY
		FMargin TextPadding; // 0x148C(0x10)
		bool IsPassword; // 0x149C(0x1)
		bool IsReadOnly; // 0x149D(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x149E(0x2) UNKNOWN PROPERTY
		FS_UI_BoolFloat WidthOverride; // 0x14A0(0x10)
		FS_UI_BoolFloat HeightOverride; // 0x14B0(0x10)
		bool UseBackground; // 0x14C0(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x14C1(0x7) UNKNOWN PROPERTY
		UWBP_UIKit_BlockBackground_Base_C Block_Background; // 0x14C8(0x8)
		UClass BackgroundClass; // 0x14D0(0x8)
		UMaterialInstance BackgroundMaterial; // 0x14D8(0x8)
		bool UseIcon; // 0x14E0(0x1)
		unsigned char UnknownData10_6[0x7]; // 0x14E1(0x7) UNKNOWN PROPERTY
		UClass IconClass; // 0x14E8(0x8)
		UWBP_UIKit_Block_Image_C Block_Icon; // 0x14F0(0x8)
		UTexture2D Icon; // 0x14F8(0x8)
		FS_UI_Image IconProperties; // 0x1500(0x58)
		bool UsePixels; // 0x1558(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x1559(0x7) UNKNOWN PROPERTY
		double TopLeft; // 0x1560(0x8)
		double TopRight; // 0x1568(0x8)
		double BottomRight; // 0x1570(0x8)
		double BottomLeft; // 0x1578(0x8)
		int32_t MaxTextCharacters; // 0x1580(0x4)
		bool UseDarkInputIcon; // 0x1584(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C");
			return ret;
		}

		void SetInputIconDarkMode(bool UseDark); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D6B000
		void Is Text Empty(bool IsEmpty); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D6C100
		void UpdateIconVisibility(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D6AB00
		void SetMaxTextCharacters(bool& IsTextTrimmed); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D61D6AF00
		void PresetForDesignTime(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D61D6BA00
		void SetIconProperties(FS_UI_Image Data); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D6B100
		void AddIcon(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D68800
		void SetGridNudge(UWidget Widget, FVector2D Nudge); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D6B500
		void SetGridPadding(UWidget Widget, FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D6B400
		void SetGridLayer(UWidget Widget, int32_t Layer); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D6B600
		void SetGridAlignment(UWidget Widget, TEnumAsByte Horizontal, TEnumAsByte Vertical); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D6B800
		void SetGridColumnAndRow(UWidget Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D6B700
		void SetPlacement(UWidget Widget, FS_UI_Placement Placement); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D6AE00
		void Cleanup(UWidget Widget); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D61D6C300
		void AddBackground(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D68A00
		void SetEditableText(bool SetTextFields); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D61D6B900
		void SetSize(FS_UI_BoolFloat Width, FS_UI_BoolFloat Height); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D6AD00
		void SetIcon(UTexture2D Icon); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D6B200
		void SetHintText(FText Hint Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D6B300
		void SetText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D61D6AC00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D61D6BB00
		void OnTextChanged_Event(FText& Text); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D61D6BE00
		void OnTextCommitted_Event(FText& Text, TEnumAsByte CommitMethod); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D61D6BC00
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D61D6C000
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D61D68600
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D61D6C500
		void BP_OnPressed(); // Flags: Event|Protected|BlueprintEvent 0x15D61D68500
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D61D6C600
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent 0x15D61D6C400
		void BndEvt__WBP_UIKit_ButtonGeneric_Base_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputIconUpdated__DelegateSignature(); // Flags: BlueprintEvent 0x15D61D68700
		void ExecuteUbergraph_WBP_UIKit_InputField_Base(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D61D6C200
		void OnTextCommited__DelegateSignature(FText Text, TEnumAsByte Commit method); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D61D6BD00
		void OnTextChanged__DelegateSignature(FText Text); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D61D6BF00
	};


	// Class /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C
	// Inherited from UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x37B (0x1723 - 0x13A8)
	class UWBP_UIKit_ButtonGeneric_Base_C : public UUIKitModularButton	
	{
	public:
		unsigned char UnknownData18_3[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x13B0(0x8)
		UWidgetAnimation Anim_Focused_Base; // 0x13B8(0x8)
		UImage HoldIcon; // 0x13C0(0x8)
		UImage HoldProgressBar; // 0x13C8(0x8)
		UGridPanel Main; // 0x13D0(0x8)
		UStackBox Main_Stack; // 0x13D8(0x8)
		UGridPanel Prompt; // 0x13E0(0x8)
		UGridPanel Root; // 0x13E8(0x8)
		UNamedSlot Slot_Background; // 0x13F0(0x8)
		UNamedSlot Slot_Main; // 0x13F8(0x8)
		UCommonVisualAttachment VisualAttachment; // 0x1400(0x8)
		TEnumAsByte ContentHorizontalAlignment; // 0x1408(0x1)
		TEnumAsByte ContentVerticalAlignment; // 0x1409(0x1)
		unsigned char UnknownData19_6[0x2]; // 0x140A(0x2) UNKNOWN PROPERTY
		FMargin ButtonPadding; // 0x140C(0x10)
		unsigned char UnknownData20_6[0x4]; // 0x141C(0x4) UNKNOWN PROPERTY
		double FadeInTime; // 0x1420(0x8)
		double FadeOutTime; // 0x1428(0x8)
		USoundBase PressedSound; // 0x1430(0x8)
		USoundBase HoveredSound; // 0x1438(0x8)
		USoundBase HoldPressedSound; // 0x1440(0x8)
		USoundBase HoldSound; // 0x1448(0x8)
		USoundBase HoldReleasedSound; // 0x1450(0x8)
		USoundBase HoldCompletedSound; // 0x1458(0x8)
		UAudioComponent HoldSoundAudioComponent; // 0x1460(0x8)
		UAudioComponent PressedSoundAudioComponent; // 0x1468(0x8)
		FText Text; // 0x1470(0x10)
		bool UseIconBlock; // 0x1480(0x1)
		unsigned char UnknownData21_6[0x7]; // 0x1481(0x7) UNKNOWN PROPERTY
		UClass IconClass; // 0x1488(0x8)
		UMaterialInstance IconMaterial; // 0x1490(0x8)
		UTexture2D Icon; // 0x1498(0x8)
		FVector2D IconSize; // 0x14A0(0x10)
		TEnumAsByte IconHorizontalAlignment; // 0x14B0(0x1)
		TEnumAsByte IconVerticalAlignment; // 0x14B1(0x1)
		unsigned char UnknownData22_6[0x2]; // 0x14B2(0x2) UNKNOWN PROPERTY
		FMargin IconPadding; // 0x14B4(0x10)
		bool UseBackgroundBlock; // 0x14C4(0x1)
		unsigned char UnknownData23_6[0x3]; // 0x14C5(0x3) UNKNOWN PROPERTY
		UClass BackgroundClass; // 0x14C8(0x8)
		UMaterialInstance BackgroundMaterial; // 0x14D0(0x8)
		UMaterialInstance OutlineMaterial; // 0x14D8(0x8)
		TEnumAsByte PromptHorizontalAlignment; // 0x14E0(0x1)
		TEnumAsByte PromptVerticalAlignment; // 0x14E1(0x1)
		bool ShouldPromptImpactLayout; // 0x14E2(0x1)
		unsigned char UnknownData24_6[0x1]; // 0x14E3(0x1) UNKNOWN PROPERTY
		FMargin PromptPadding; // 0x14E4(0x10)
		unsigned char UnknownData25_6[0x4]; // 0x14F4(0x4) UNKNOWN PROPERTY
		FVector2D PromptNudge; // 0x14F8(0x10)
		double MobileFontSizeMultiplier; // 0x1508(0x8)
		bool OverrideDefaultMobileFontSizeMultiplier; // 0x1510(0x1)
		unsigned char UnknownData26_6[0x7]; // 0x1511(0x7) UNKNOWN PROPERTY
		double MobileFontSizeMultiplierOverride; // 0x1518(0x8)
		int32_t MobileMinWidth; // 0x1520(0x4)
		int32_t MobileMinHeight; // 0x1524(0x4)
		FMulticastInlineDelegate OnHoldCompleted; // 0x1528(0x10)
		UMaterialInstanceDynamic InputActionProgressMaterial; // 0x1538(0x8)
		UWBP_UIKit_BlockBackground_Base_C Block_Background; // 0x1540(0x8)
		UWBP_UIKit_Block_Text_C Block_Text; // 0x1548(0x8)
		UWBP_UIKit_Block_Text_C Block_SecondText; // 0x1550(0x8)
		UWBP_UIKit_Block_Image_C Block_Icon; // 0x1558(0x8)
		UWBP_UIKit_StatusIndicator_C StatusIndicator; // 0x1560(0x8)
		ECommonInputType CurrentInputType; // 0x1568(0x1)
		unsigned char UnknownData27_6[0x7]; // 0x1569(0x7) UNKNOWN PROPERTY
		double CurrentHoldProgress; // 0x1570(0x8)
		bool UseTextBlock; // 0x1578(0x1)
		unsigned char UnknownData28_6[0x7]; // 0x1579(0x7) UNKNOWN PROPERTY
		UClass TextClass; // 0x1580(0x8)
		FSlateFontInfo Font; // 0x1588(0x58)
		TEnumAsByte TextBlockAlignment; // 0x15E0(0x1)
		bool IsTextOutsideBackground; // 0x15E1(0x1)
		bool ShouldTextImpactLayout; // 0x15E2(0x1)
		ETextTransformPolicy TextTransformPolicy; // 0x15E3(0x1)
		FMargin TextPadding; // 0x15E4(0x10)
		unsigned char UnknownData29_6[0x4]; // 0x15F4(0x4) UNKNOWN PROPERTY
		FVector2D TextNudge; // 0x15F8(0x10)
		FMargin MobileButtonPadding; // 0x1608(0x10)
		bool IsInstantSelection; // 0x1618(0x1)
		bool LastEnabledEvent; // 0x1619(0x1)
		unsigned char UnknownData30_6[0x6]; // 0x161A(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHoldActionProgress; // 0x1620(0x10)
		FMulticastInlineDelegate OnReleased; // 0x1630(0x10)
		bool EnableFocusedSelectedState; // 0x1640(0x1)
		unsigned char UnknownData31_6[0x7]; // 0x1641(0x7) UNKNOWN PROPERTY
		FVector2D VisualAttachmentContentAnchor; // 0x1648(0x10)
		bool UseStatusIndicator; // 0x1658(0x1)
		unsigned char UnknownData32_6[0x7]; // 0x1659(0x7) UNKNOWN PROPERTY
		UClass StatusIndicatorClass; // 0x1660(0x8)
		TEnumAsByte Configuration; // 0x1668(0x1)
		TEnumAsByte Type; // 0x1669(0x1)
		TEnumAsByte StatusIndicatorHorizontalAlignment; // 0x166A(0x1)
		TEnumAsByte StatusIndicatorVerticalAlignment; // 0x166B(0x1)
		FMargin StatusIndicatorPadding; // 0x166C(0x10)
		unsigned char UnknownData33_6[0x4]; // 0x167C(0x4) UNKNOWN PROPERTY
		FVector2D StatusIndicatorNudge; // 0x1680(0x10)
		bool UseSecondTextBlock; // 0x1690(0x1)
		unsigned char UnknownData34_6[0x7]; // 0x1691(0x7) UNKNOWN PROPERTY
		UClass SecondTextClass; // 0x1698(0x8)
		FText SecondText; // 0x16A0(0x10)
		FSlateFontInfo SecondFont; // 0x16B0(0x58)
		TEnumAsByte SecondTextBlockAlignment; // 0x1708(0x1)
		ETextTransformPolicy SecondTextTransformPolicy; // 0x1709(0x1)
		unsigned char UnknownData35_6[0x2]; // 0x170A(0x2) UNKNOWN PROPERTY
		FMargin SecondTextPadding; // 0x170C(0x10)
		TEnumAsByte TextJustification; // 0x171C(0x1)
		TEnumAsByte TextSecondJustification; // 0x171D(0x1)
		TEnumAsByte VisualAttachmentHorizontalAlignment; // 0x171E(0x1)
		TEnumAsByte VisualAttachmentVerticalAlignment; // 0x171F(0x1)
		bool UseDisabledVisualsOnLocked; // 0x1720(0x1)
		TEnumAsByte Icon_Size; // 0x1721(0x1)
		bool UseDarkInputIcon; // 0x1722(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C");
			return ret;
		}

		void SetInputIconDarkMode(bool UseDark); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B7C00
		void Set Language Direction(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B4B00
		void SetButtonIsEnabled(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D620B4700
		void ResetButtonState(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B4C00
		void RequestInstantSelection(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B4D00
		void SetButtonPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B4500
		void SetButtonContentAlignment(TEnumAsByte HorizontalAlignment, TEnumAsByte VerticalAlignment); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B4800
		void SetButtonMinSize(int32_t Min Width, int32_t Min Height); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B4600
		void FadeOutSound(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B5D00
		void PlaySoundHoldCompleted(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B5500
		void PlaySoundHoldReleased(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B5300
		void PlaySoundHoldPressed(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B5400
		void PlaySoundPressed(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B5100
		void PlaySoundHovered(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B5200
		void PresetForDesignTime(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D620B4F00
		void IsPromptHoldable(bool& Holdable); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D620B5B00
		void IsPromptIcon(bool& Valid); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D620B5A00
		void ShowPromptFallbackAction(bool Show); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D620B7300
		void SetHoldPercentage(double HoldPercentage); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B8300
		void SetBlocksIsSelected(bool IsSelected); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B4900
		void ClearPrompt(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D620B6100
		void UpdatePrompt(ECommonInputType InputType); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D620B6E00
		void SetPrompt(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B7A00
		void AddStatusIndicator(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D620B2F00
		void RemoveIconBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D620B4E00
		void GetBackgroundDynamicMaterial(UMaterialInstanceDynamic& Dynamic Material); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D620B5C00
		void UpdateInputPrompt(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B6F00
		void UpdateStatusIndicator(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B6C00
		void UpdateBackground(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B7200
		void SetBackgroundMaterials(UMaterialInstance Background MI, UMaterialInstance Outline MI); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B4A00
		void SetStatusIndicatorConfiguration(TEnumAsByte Configuration, int32_t Count); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B7800
		void SetStatusIndicatorType(TEnumAsByte Type); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B7700
		void SetStatusIndicator(EFortBangType BangType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B7900
		void SetIconAlignment(TEnumAsByte Horizontal, TEnumAsByte Vertical); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B8100
		void AddIconBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D620B3100
		void AddSecondTextBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D620B3000
		void AddTextBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D620B2E00
		void AddBackground(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D620B3200
		void UpdateIcon(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B7000
		void UpdateSecondText(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B6D00
		void UpdateText(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B6B00
		void UpdateButton(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620B7100
		void SetIconPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B7F00
		void SetIconSize(FVector2D Icon); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B7E00
		void SetIconMaterial(UMaterialInstance Material Instance); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B8000
		void SetIconTexture(UTexture2D Icon); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D620B7D00
		void SetIcon(UObject Icon); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B8200
		void SetFont(FSlateFontInfo In Font); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B4300
		void SetTextNudge(FVector2D TextNudge); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B7500
		void SetTextPadding(FMargin TextPadding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B7400
		void SetText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B7600
		void SetPreviewData(UMVVMViewModelBase VM); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B7B00
		void SetData(UUIKitSelectableButtonViewModel VM Button); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620B4400
		void OnActionProgress(float HeldPercent); // Flags: Event|Protected|BlueprintEvent 0x15D620B5900
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x15D620B2C00
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent 0x15D620B2600
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D620B6000
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent 0x15D620B2B00
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent 0x15D620B2200
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent 0x15D620B6200
		void BP_OnInputActionTriggered(); // Flags: Event|Protected|BlueprintEvent 0x15D620B2700
		void BP_OnEnabled(); // Flags: Event|Protected|BlueprintEvent 0x15D620B2900
		void BP_OnDisabled(); // Flags: Event|Protected|BlueprintEvent 0x15D620B2A00
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D620B5F00
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D620B2300
		void BP_OnPressed(); // Flags: Event|Protected|BlueprintEvent 0x15D620B2400
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D620B6300
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D620B2800
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D620B5000
		void BP_OnLockedChanged(bool bIsLocked); // Flags: Event|Protected|BlueprintEvent 0x15D620B2500
		void BndEvt__WBP_UIKit_ButtonGeneric_Base_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputIconUpdated__DelegateSignature(); // Flags: BlueprintEvent 0x15D620B2D00
		void ExecuteUbergraph_WBP_UIKit_ButtonGeneric_Base(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D620B5E00
		void OnReleased__DelegateSignature(UWBP_UIKit_ButtonGeneric_Base_C Button); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D620B5600
		void OnHoldActionProgress__DelegateSignature(double HoldPercentage); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D620B5800
		void OnHoldCompleted__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D620B5700
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_Divider_Base.WBP_UIKit_Divider_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x2F0 - 0x2B8)
	class UWBP_UIKit_Divider_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UImage DividerBar; // 0x2C0(0x8)
		FLinearColor Div_Color_and_Opacity; // 0x2C8(0x10)
		double Div_Width; // 0x2D8(0x8)
		FMargin Div_Padding; // 0x2E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_Divider_Base.WBP_UIKit_Divider_Base_C");
			return ret;
		}

		void SetDividerPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66EDE100
		void SetDividerSpacing(double Spacing, bool IsVertical); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66EDE000
		void SetDividerOrientation(bool IsVertical); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6C034600
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D66EDBF00
		void ExecuteUbergraph_WBP_UIKit_Divider_Base(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D66EDBE00
	};


	// Class /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x41 (0x2F9 - 0x2B8)
	class UWBP_UIKit_Scrim_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UWidgetAnimation Anim_FadeOut; // 0x2C0(0x8)
		UWidgetAnimation Anim_FadeIn; // 0x2C8(0x8)
		UButton ClickCatcher; // 0x2D0(0x8)
		UImage OverlayBlur; // 0x2D8(0x8)
		UPostBufferUpdate PostBufferUpdate; // 0x2E0(0x8)
		UWBP_CaptureForPostBufferUpdate_C PostBufferUpdate_UpdateBacktoDefault; // 0x2E8(0x8)
		double Blur; // 0x2F0(0x8)
		bool UseClickCatcher; // 0x2F8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C");
			return ret;
		}

		void SetClickCatch(bool Enable); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66EDD300
		void SetDimMaterial(UMaterialInstance Material Instance); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66EDD100
		void SetDimColor(FLinearColor Color); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66EDD200
		void SetBlur(float Blur Strength); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66EDD400
		void FadeOut(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66EDD700
		void FadeIn(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66EDD800
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D66EDD500
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D66EDD600
		void ExecuteUbergraph_WBP_UIKit_Scrim(int32_t EntryPoint); // Flags: Final 0x15D66EDD900
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_Tabs_Base.WBP_UIKit_Tabs_Base_C
	// Inherited from UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x234 (0x724 - 0x4F0)
	class UWBP_UIKit_Tabs_Base_C : public UUIKitTabGroup	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4F0(0x8)
		UWidgetAnimation Anim_PromptSpaceChange; // 0x4F8(0x8)
		UGridPanel Main; // 0x500(0x8)
		UGridPanel Next_Prompt; // 0x508(0x8)
		USizeBox Next_SizeBox; // 0x510(0x8)
		USpacer Next_Spacer; // 0x518(0x8)
		UCommonActionWidget NextTabAction; // 0x520(0x8)
		UGridPanel Prev_Prompt; // 0x528(0x8)
		USizeBox Prev_SizeBox; // 0x530(0x8)
		USpacer Prev_Spacer; // 0x538(0x8)
		UCommonActionWidget PrevTabAction; // 0x540(0x8)
		UGridPanel Root; // 0x548(0x8)
		UNamedSlot Slot_Root; // 0x550(0x8)
		UNamedSlot Slot_Tabs; // 0x558(0x8)
		UGridPanel TabsContainer; // 0x560(0x8)
		FName InitialSelectedTabID; // 0x568(0x4)
		int32_t InitialSelectedTabIndex; // 0x56C(0x4)
		bool IsVertical; // 0x570(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x571(0x7) UNKNOWN PROPERTY
		UClass ButtonClass; // 0x578(0x8)
		int32_t MinButtonWidth; // 0x580(0x4)
		int32_t MinButtonHeight; // 0x584(0x4)
		TEnumAsByte ButtonHorizontalAlignment; // 0x588(0x1)
		TEnumAsByte ButtonVerticalAlignment; // 0x589(0x1)
		unsigned char UnknownData14_6[0x6]; // 0x58A(0x6) UNKNOWN PROPERTY
		double TabSpacing; // 0x590(0x8)
		FVector2D IconSize; // 0x598(0x10)
		bool IsNaturalNavigation; // 0x5A8(0x1)
		unsigned char UnknownData15_6[0x7]; // 0x5A9(0x7) UNKNOWN PROPERTY
		FDataTableRowHandle Bumper_NextTab; // 0x5B0(0x10)
		FDataTableRowHandle Bumper_PrevTab; // 0x5C0(0x10)
		FDataTableRowHandle Trigger_NextTab; // 0x5D0(0x10)
		FDataTableRowHandle Trigger_PrevTab; // 0x5E0(0x10)
		FDataTableRowHandle BumperAndMouseScroll_NextTab; // 0x5F0(0x10)
		FDataTableRowHandle BumperAndMouseScroll_PrevTab; // 0x600(0x10)
		FDataTableRowHandle TriggerAndMouseScroll_NextTab; // 0x610(0x10)
		FDataTableRowHandle TriggerAndMouseScroll_PrevTab; // 0x620(0x10)
		TEnumAsByte InputActions; // 0x630(0x1)
		bool InputActionsWithMouseScroll; // 0x631(0x1)
		TEnumAsByte NextPromptHorizontalAlignment; // 0x632(0x1)
		TEnumAsByte NextPromptVerticalAlignment; // 0x633(0x1)
		bool HidePrompts; // 0x634(0x1)
		bool HideMouseAndKeyboardPrompts; // 0x635(0x1)
		unsigned char UnknownData16_6[0x2]; // 0x636(0x2) UNKNOWN PROPERTY
		double ReservedPromptSpace; // 0x638(0x8)
		bool AnimateReservedPromptSpace; // 0x640(0x1)
		unsigned char UnknownData17_6[0x7]; // 0x641(0x7) UNKNOWN PROPERTY
		double TimeToHidePrompts; // 0x648(0x8)
		double TimeToShowPrompts; // 0x650(0x8)
		FMargin NextPromptPadding; // 0x658(0x10)
		TEnumAsByte SelectionAlignment; // 0x668(0x1)
		bool UseDividers; // 0x669(0x1)
		unsigned char UnknownData18_6[0x6]; // 0x66A(0x6) UNKNOWN PROPERTY
		UClass DividerClass; // 0x670(0x8)
		double DividerSpacing; // 0x678(0x8)
		bool IsPromptsVisible; // 0x680(0x1)
		TEnumAsByte TabGroupHorizontalAlignment; // 0x681(0x1)
		TEnumAsByte TabGroupVerticalAlignment; // 0x682(0x1)
		unsigned char UnknownData19_6[0x1]; // 0x683(0x1) UNKNOWN PROPERTY
		FMargin TabGroupPadding; // 0x684(0x10)
		unsigned char UnknownData20_6[0x4]; // 0x694(0x4) UNKNOWN PROPERTY
		UWBP_UIKit_Backplate_Base_C ContentBackplate; // 0x698(0x8)
		bool UseBackplate; // 0x6A0(0x1)
		unsigned char UnknownData21_6[0x7]; // 0x6A1(0x7) UNKNOWN PROPERTY
		UClass BackplateClass; // 0x6A8(0x8)
		TEnumAsByte BackplateBrightness; // 0x6B0(0x1)
		TEnumAsByte BackplateCornerRadius; // 0x6B1(0x1)
		unsigned char UnknownData22_6[0x6]; // 0x6B2(0x6) UNKNOWN PROPERTY
		UWBP_UIKit_Backplate_Base_C PrevPromptBackplate; // 0x6B8(0x8)
		UWBP_UIKit_Backplate_Base_C NextPromptBackplate; // 0x6C0(0x8)
		UWBP_UIKit_Divider_Base_C ContentDivider; // 0x6C8(0x8)
		FName CurrentSubGroupID; // 0x6D0(0x4)
		int32_t DividersCount; // 0x6D4(0x4)
		bool NoSpacingAfterDivider; // 0x6D8(0x1)
		bool UsePromptBackplate; // 0x6D9(0x1)
		unsigned char UnknownData23_6[0x6]; // 0x6DA(0x6) UNKNOWN PROPERTY
		UClass PromptsBackplateClass; // 0x6E0(0x8)
		TEnumAsByte PromptBackplateBrightness; // 0x6E8(0x1)
		TEnumAsByte PromptBackplateCornerRadius; // 0x6E9(0x1)
		TEnumAsByte PrevPromptHorizontalAlignment; // 0x6EA(0x1)
		TEnumAsByte PrevPromptVerticalAlignment; // 0x6EB(0x1)
		FMargin PrevPromptPadding; // 0x6EC(0x10)
		unsigned char UnknownData24_6[0x4]; // 0x6FC(0x4) UNKNOWN PROPERTY
		double PromptBackplateMinWidth; // 0x700(0x8)
		double PromptBackplateMinHeight; // 0x708(0x8)
		bool PromptsInsideTabsBackplate; // 0x710(0x1)
		ECommonInputType CurrentInputType; // 0x711(0x1)
		unsigned char UnknownData25_6[0x2]; // 0x712(0x2) UNKNOWN PROPERTY
		FMargin DividerPadding; // 0x714(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_Tabs_Base.WBP_UIKit_Tabs_Base_C");
			return ret;
		}

		void SequenceEvent__ENTRYPOINTWBP_UIKit_Tabs_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6692B300
		void SequenceEvent__ENTRYPOINTWBP_UIKit_Tabs_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6692A600
		void SequenceEvent__ENTRYPOINTWBP_UIKit_Tabs_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66785700
		void GetButtonClass(UUIKitTabGroupButtonViewModel TabVM, UClass& ButtonClass); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D66ED4F00
		void ClearTabGroup(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D66ED5100
		void SetBackplateProperties(UWBP_UIKit_Backplate_Base_C Backplate, TEnumAsByte Brightness, TEnumAsByte Corner Radius); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D66785600
		void AddBackplate(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D6B59ED00
		void AddButtonToGrid(UWidget Widget, int32_t Index); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D66783F00
		void AddDividerToGrid(UWBP_UIKit_Divider_Base_C Divider, int32_t Index); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D66ED5400
		void PresetForDesignTime(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D75E42100
		void Cleanup(UWidget Widget); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D66ED5300
		void SetGridNudge(UWidget Widget, FVector2D Nudge); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D66A8AC00
		void SetInputActionsType(TEnumAsByte InputActions, bool InputActionsWithMouseScroll); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66A8B000
		void SetGridPadding(UWidget Widget, FMargin Padding); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D66A8B400
		void SetGridLayer(UWidget Widget, int32_t Layer); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D66A8C100
		void SetGridAlignment(UWidget Widget, TEnumAsByte Horizontal, TEnumAsByte Vertical); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D620BD800
		void SetGridColumnAndRow(UWidget Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D7ADE2500
		void SetPlacement(UWidget Widget, FS_UI_Placement Placement); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D620BE600
		void AddDivider(int32_t Index, FName SubGroup); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D67095200
		void OverrideInputActions(FDataTableRowHandle Next Tab, FDataTableRowHandle PreviousTab); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D66784000
		void SetPromptsVisibility(bool ShowPrompts); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D6697EA00
		void UpdatePromptsVisibility(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D620BEA00
		void Set Tabs Data(TArray& InTabs Data); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66785500
		void UpdateInputActions(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D620BEC00
		void SetupTabButton(FName Tab ID, UCommonButtonBase CreatedButtonReference); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D6709F100
		void UpdateTabLayout(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D75E4E000
		void RestoreTabSelection(FName TabNameID); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D6709F200
		void Trigger_End(); // Flags: BlueprintCallable|BlueprintEvent 0x15D620BF300
		void Trigger_Start(); // Flags: BlueprintCallable|BlueprintEvent 0x15D620BEF00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D6B59E800
		void HandleTabCreation(FName TabNameID, UCommonButtonBase TabButton); // Flags: Event|Protected|BlueprintEvent 0x15D66ED5200
		void Repeater_PromptSpaceChange(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66782400
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D66ED5700
		void Event On Input Method Changed(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15D66ED4C00
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D66ED5600
		void ExecuteUbergraph_WBP_UIKit_Tabs_Base(int32_t EntryPoint); // Flags: Final 0x15D66ED4B00
	};


	// Class /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x56C (0x824 - 0x2B8)
	class UWBP_UIKit_Dialog_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UUIKitDialogViewModel UIKitDialogViewModel; // 0x2C0(0x8)
		UWidgetAnimation Anim_OnDeactivate_Base; // 0x2C8(0x8)
		UWidgetAnimation Anim_OnActivate_Base; // 0x2D0(0x8)
		UHorizontalBox ButtonsContainer; // 0x2D8(0x8)
		UGridPanel Content; // 0x2E0(0x8)
		UGridPanel Main; // 0x2E8(0x8)
		UWBP_CaptureForPostBufferUpdate_C PostBufferUpdate_Content; // 0x2F0(0x8)
		UGridPanel Root; // 0x2F8(0x8)
		UScrollBox ScrollBox_Text; // 0x300(0x8)
		USizeBox SizeBox_Dialog; // 0x308(0x8)
		UNamedSlot Slot_Background; // 0x310(0x8)
		UNamedSlot Slot_Content; // 0x318(0x8)
		UNamedSlot Slot_Main; // 0x320(0x8)
		UNamedSlot Slot_Root; // 0x328(0x8)
		UHorizontalBox TitleContainer; // 0x330(0x8)
		TArray ButtonWidgets; // 0x338(0x10)
		UCommonButtonGroupBase ButtonGroup; // 0x348(0x8)
		FMulticastInlineDelegate DialogButtonClickedDispatcher; // 0x350(0x10)
		UDataTable DefaultInputActionDataTable; // 0x360(0x8)
		UWBP_UIKit_Scrim_C Scrim; // 0x368(0x8)
		bool UseScrim; // 0x370(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x371(0x7) UNKNOWN PROPERTY
		double Blur; // 0x378(0x8)
		FLinearColor DimColor; // 0x380(0x10)
		UMaterialInstance DimMaterial; // 0x390(0x8)
		bool UseClickCatch; // 0x398(0x1)
		bool UseTitle; // 0x399(0x1)
		unsigned char UnknownData09_6[0x6]; // 0x39A(0x6) UNKNOWN PROPERTY
		UCommonTextBlock ContentTitle; // 0x3A0(0x8)
		UCommonTextBlock ContentText; // 0x3A8(0x8)
		UCommonRichTextBlock ContentRichText; // 0x3B0(0x8)
		TEnumAsByte UseText; // 0x3B8(0x1)
		bool UseTitleImage; // 0x3B9(0x1)
		unsigned char UnknownData10_6[0x6]; // 0x3BA(0x6) UNKNOWN PROPERTY
		FS_UI_Text TitleProperties; // 0x3C0(0xC0)
		FS_UI_Text TextProperties; // 0x480(0xC0)
		UImage ContentImage; // 0x540(0x8)
		bool UseImage; // 0x548(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x549(0x7) UNKNOWN PROPERTY
		FS_UI_Image ImageProperties; // 0x550(0x58)
		UImage ContentBackground; // 0x5A8(0x8)
		bool UseBackplate; // 0x5B0(0x1)
		unsigned char UnknownData12_6[0x7]; // 0x5B1(0x7) UNKNOWN PROPERTY
		FS_UI_Backplate BackplateProperties; // 0x5B8(0x50)
		bool UseBackground; // 0x608(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x609(0x7) UNKNOWN PROPERTY
		FS_UI_Image BackgroundProperties; // 0x610(0x58)
		FS_UI_SizeBox DialogSIze; // 0x668(0x80)
		FS_UI_DialogButtons Buttons; // 0x6E8(0x70)
		FS_UI_Placement DialogPlacement; // 0x758(0x40)
		UWBP_UIKit_Backplate_Base_C ContentBackplate; // 0x798(0x8)
		UMaterialInstanceDynamic ImageMID; // 0x7A0(0x8)
		FS_UI_BackplateCornerRadiusValues CornerRadiusValues; // 0x7A8(0x28)
		UImage ContentTitleImage; // 0x7D0(0x8)
		TEnumAsByte TitleImageHorizontalAligment; // 0x7D8(0x1)
		TEnumAsByte TitleImageVerticalAligment; // 0x7D9(0x1)
		unsigned char UnknownData14_6[0x6]; // 0x7DA(0x6) UNKNOWN PROPERTY
		double TitleImageSizeX; // 0x7E0(0x8)
		double TitleImageSizeY; // 0x7E8(0x8)
		TEnumAsByte TitleTextHorizontalAligment; // 0x7F0(0x1)
		TEnumAsByte TitleTextVerticalAligment; // 0x7F1(0x1)
		unsigned char UnknownData15_6[0x2]; // 0x7F2(0x2) UNKNOWN PROPERTY
		FMargin TitleImagePadding; // 0x7F4(0x10)
		FMargin TitleTextPadding; // 0x804(0x10)
		FSlateChildSize TitleTextSizeRule; // 0x814(0x8)
		FSlateChildSize TitleImageSizeRule; // 0x81C(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C");
			return ret;
		}

		void SetUIKitDialogViewModel(UUIKitDialogViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D66750D00
		void SetDialogTitleImage(UMaterialInstance MaterialInstance); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66751B00
		void SetTitleTextProperties(UWidget Widget); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D66750E00
		void SetTitleImageProperties(UImage Image); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D66751000
		void InitializeDialog(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D7ACEEE00
		void PresetForDesignTime(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D7ACEEB00
		void Cleanup(UWidget Widget); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D7ACEF300
		void ClearButtonWidgets(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D7ACEF200
		void SetBackgroundProperties(FS_UI_Image& Data); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D7ACEEA00
		void SetBackplateProperties(FS_UI_Backplate& Data); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D7ACEE900
		void AddBackground(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D7ACEFA00
		void AddBackplate(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D7ACEF900
		void SetImageProperties(FS_UI_Image& Data); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66751500
		void AddImage(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D7ACEF700
		void SetTextProperties(FS_UI_Text Data); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D66751100
		void AddText(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D7ACEF500
		void SetTitleProperties(FS_UI_Text Data); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D66750F00
		void AddTitle(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D7ACEF400
		void SetScrim(float Blur Strength, FLinearColor Color, UMaterialInstance Material Instance, bool Enable); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D66751300
		void AddScrim(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D7ACEF600
		void SetButtonFocus(int32_t& Focus Index); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66752100
		void SetButton(UWBP_UIKit_ButtonCTA_Base_C& Button, UUIKitDialogButtonViewModel Button Data); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D7ACEE800
		void SetButtonsProperties(FS_UI_DialogButtons& Data); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D66752000
		void DeactivateDialog(UWidgetAnimation OutroAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D7ACEF100
		void ActivateDialog(UWidgetAnimation IntroAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D7ACEFB00
		void SetDialogImage(UTexture2D Texture); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66751E00
		void AddDialogButtons(TArray& Action Buttons); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D7ACEF800
		void SetDialogText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66751D00
		void SetDialogTitle(FText Title); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66751C00
		void SetDialogData(UUIKitDialogViewModel Data); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66751F00
		void SetSizeBox(FS_UI_SizeBox& Data); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66751200
		void SetGridNudge(UWidget Widget, FVector2D Nudge); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66751700
		void SetGridPadding(UWidget Widget, FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66751600
		void SetGridLayer(UWidget Widget, int32_t Layer); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66751800
		void SetGridAlignment(UWidget Widget, TEnumAsByte Horizontal, TEnumAsByte Vertical); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66751A00
		void SetGridColumnAndRow(UWidget Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66751900
		void SetPlacement(UWidget Widget, FS_UI_Placement Placement); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66751400
		void OnDialogButtonClicked(UCommonButtonBase AssociatedButton, int32_t ButtonIndex); // Flags: BlueprintCallable|BlueprintEvent 0x15D7ACEED00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D7ACEEC00
		void ExecuteUbergraph_WBP_UIKit_Dialog_Base(int32_t EntryPoint); // Flags: Final 0x15D7ACEEF00
		void DialogButtonClickedDispatcher__DelegateSignature(int32_t ButtonIndex); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D7ACEF000
	};


	// Class /FortUILibrary/Systems/Throbber/WBP_UIKit_Throbber_Base.WBP_UIKit_Throbber_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x39 (0x2F1 - 0x2B8)
	class UWBP_UIKit_Throbber_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UImage Throbber; // 0x2C0(0x8)
		TEnumAsByte ThrobberSize; // 0x2C8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x2C9(0x3) UNKNOWN PROPERTY
		int32_t SizeSmall; // 0x2CC(0x4)
		int32_t SizeMedium; // 0x2D0(0x4)
		int32_t SizeLarge; // 0x2D4(0x4)
		TEnumAsByte ThrobberStyle; // 0x2D8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x2D9(0x7) UNKNOWN PROPERTY
		UMaterialInstance MonochromaticInstance; // 0x2E0(0x8)
		UMaterialInstanceDynamic CurrentMaterialInstance; // 0x2E8(0x8)
		bool DisplayBackground; // 0x2F0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Throbber/WBP_UIKit_Throbber_Base.WBP_UIKit_Throbber_Base_C");
			return ret;
		}

		void SetBackgroundVisibility(bool ShowBackground); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D3F27E600
		void InitializeStyle(TEnumAsByte StyleType); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D3F27A700
		void SetThrobberSize(TEnumAsByte Size); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D3FB2B100
		void InitializeThrobber(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D3F27A600
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D3F27E700
		void ExecuteUbergraph_WBP_UIKit_Throbber_Base(int32_t EntryPoint); // Flags: Final 0x15D3F27A800
	};


	// Class /FortUILibrary/Systems/Badge/WBP_UIKit_Badge_Base.WBP_UIKit_Badge_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D8 (0x490 - 0x2B8)
	class UWBP_UIKit_Badge_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UImage Background; // 0x2C0(0x8)
		UGridPanel Content; // 0x2C8(0x8)
		UWBP_UIKit_StatusIndicator_C StatusIndicator; // 0x2D0(0x8)
		UCommonTextBlock Text_Badge; // 0x2D8(0x8)
		FText BadgeText; // 0x2E0(0x10)
		TEnumAsByte BadgeType; // 0x2F0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x2F1(0x7) UNKNOWN PROPERTY
		FSlateFontInfo TextFont; // 0x2F8(0x58)
		FSlateFontInfo NumericFont; // 0x350(0x58)
		TEnumAsByte IndicatorConfig; // 0x3A8(0x1)
		TEnumAsByte Indicator_Type; // 0x3A9(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x3AA(0x6) UNKNOWN PROPERTY
		UObject IndicatorIcon; // 0x3B0(0x8)
		TEnumAsByte BadgeSize; // 0x3B8(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x3B9(0x3) UNKNOWN PROPERTY
		FMargin BadgePadding_Compact; // 0x3BC(0x10)
		FMargin BadgePadding_Default; // 0x3CC(0x10)
		unsigned char UnknownData07_6[0x4]; // 0x3DC(0x4) UNKNOWN PROPERTY
		FSlateFontInfo NumericFont_Compact; // 0x3E0(0x58)
		FSlateFontInfo TextFont_Compact; // 0x438(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Badge/WBP_UIKit_Badge_Base.WBP_UIKit_Badge_Base_C");
			return ret;
		}

		void RefreshBadge(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D3FB22900
		void SetBadgeSize(TEnumAsByte BadgeSize); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41520D00
		void SetIndicatorType(TEnumAsByte IndicatorType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D82A90400
		void SetIndicatorIcon(UObject IconAsset); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D3FBE2300
		void SetIndicatorConfiguration(TEnumAsByte Config); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8361F200
		void SetBadgeType(TEnumAsByte Type); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8013CA00
		void InitializeBadge(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D3FB22500
		void SetBadgeText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41522C00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D3FB22600
		void ExecuteUbergraph_WBP_UIKit_Badge_Base(int32_t EntryPoint); // Flags: Final 0x15D3FB22400
	};


	// Class /FortUILibrary/Systems/ContextMenu/WBP_UIKit_ContextMenuListEntry.WBP_UIKit_ContextMenuListEntry_C
	// Inherited from UWBP_UIKit_Button_Generic_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x1768 - 0x1740)
	class UWBP_UIKit_ContextMenuListEntry_C : public UWBP_UIKit_Button_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UWBP_UIKit_Block_Outline_C WBP_UIKit_Block_Outline; // 0x1748(0x8)
		FDataTableRowHandle Interaction; // 0x1750(0x10)
		UUIKitContextMenuActionWrapper Action; // 0x1760(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ContextMenu/WBP_UIKit_ContextMenuListEntry.WBP_UIKit_ContextMenuListEntry_C");
			return ret;
		}

		void OnLoaded_680981444C98AAB9F2F09C9F8D08AAA5(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D5ACE2C00
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15D5ACE2500
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15D5ACE8600
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15D5ACE2B00
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x15D5ACE6B00
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D5ACE2400
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D5ACE8500
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D5ACE6A00
		void InputMethodChanged(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15D5ACE2A00
		void ExecuteUbergraph_WBP_UIKit_ContextMenuListEntry(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D5ACE8200
	};


	// Class /FortUILibrary/Systems/Highlight/WBP_UIKit_Highlight_Base.WBP_UIKit_Highlight_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x168 (0x420 - 0x2B8)
	class UWBP_UIKit_Highlight_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UImage Background; // 0x2C0(0x8)
		USizeBox SB_WidthLimit; // 0x2C8(0x8)
		UCommonTextBlock Text_Highlight; // 0x2D0(0x8)
		FSlateFontInfo HighlightFont_Default; // 0x2D8(0x58)
		FS_UI_HighlightColors HighlightColors; // 0x330(0x50)
		TEnumAsByte HighlightType; // 0x380(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x381(0x7) UNKNOWN PROPERTY
		FText HighlightText; // 0x388(0x10)
		double MaxWidth; // 0x398(0x8)
		TEnumAsByte HighlightSize; // 0x3A0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x3A1(0x7) UNKNOWN PROPERTY
		FSlateFontInfo HighlightFont_Compact; // 0x3A8(0x58)
		FMargin HighlightPadding_Compact; // 0x400(0x10)
		FMargin Highlight_PaddingDefault; // 0x410(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Highlight/WBP_UIKit_Highlight_Base.WBP_UIKit_Highlight_Base_C");
			return ret;
		}

		void SetWidth(double MaxWidth); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE4C00
		void SetType(TEnumAsByte Type); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE4B00
		void SetText(FText Text); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5ACE4900
		void InitializeHighlight(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D5ACE9500
		void SetHighlightSize(TEnumAsByte FontSize); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5ACE9800
		void SetBackgroundStyle(TEnumAsByte HighlightType); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D5ACE9700
		void SetTextColor(FLinearColor Color); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5ACE4A00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5ACE9600
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent 0x15D5ACE9300
		void ExecuteUbergraph_WBP_UIKit_Highlight_Base(int32_t EntryPoint); // Flags: Final 0x15D5ACE9400
	};


	// Class /FortUILibrary/Systems/Tag/WBP_UIKit_Tag_Base.WBP_UIKit_Tag_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x298 (0x550 - 0x2B8)
	class UWBP_UIKit_Tag_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UImage Background; // 0x2C0(0x8)
		UGridPanel GridText_AndOptionalIcon; // 0x2C8(0x8)
		USpacer LabelSpacer; // 0x2D0(0x8)
		UGridPanel TagContainer; // 0x2D8(0x8)
		UCommonTextBlock Text_Label; // 0x2E0(0x8)
		UCommonTextBlock Text_Tag; // 0x2E8(0x8)
		TEnumAsByte TagType; // 0x2F0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x2F1(0x7) UNKNOWN PROPERTY
		FText TagText; // 0x2F8(0x10)
		FLinearColor TagColor; // 0x308(0x10)
		FMargin TagPadding; // 0x318(0x10)
		FLinearColor LabelColor; // 0x328(0x10)
		FMargin LabelPadding; // 0x338(0x10)
		FLinearColor BackgroundColor; // 0x348(0x10)
		UMaterialInstance BackgroundMaterial; // 0x358(0x8)
		FText LabelText; // 0x360(0x10)
		FSlateFontInfo RarityFont; // 0x370(0x58)
		FSlateFontInfo PrimaryFont; // 0x3C8(0x58)
		FSlateFontInfo TertiaryFont_Bold; // 0x420(0x58)
		FSlateFontInfo TertiaryFont_Regular; // 0x478(0x58)
		FLinearColor StyleColor; // 0x4D0(0x10)
		FMargin StylePadding; // 0x4E0(0x10)
		FText StyleText; // 0x4F0(0x10)
		bool UseIcon; // 0x500(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x501(0x7) UNKNOWN PROPERTY
		UImage IconWidget; // 0x508(0x8)
		bool IconLeftAligned; // 0x510(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x511(0x7) UNKNOWN PROPERTY
		UMaterialInstance IconMaterial; // 0x518(0x8)
		FVector2D IconSize; // 0x520(0x10)
		FLinearColor IconColor; // 0x530(0x10)
		FMargin IconPadding; // 0x540(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tag/WBP_UIKit_Tag_Base.WBP_UIKit_Tag_Base_C");
			return ret;
		}

		void SetIconPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE5F00
		void SetIconColor(FLinearColor Color); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE7000
		void SetIconSize(FVector2D IconSize); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE4500
		void SetIconMaterial(UMaterialInstance IconMaterial); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE2700
		void AddIcon(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D5ACEA900
		void SetStyleTextPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE6D00
		void SetStyleTextColor(FLinearColor Color); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5ACE4400
		void SetStyleText(FText Text); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5ACE4300
		void SetLabelTextPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE4800
		void SetLabelTextColor(FLinearColor Color); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5ACE8A00
		void SetLabelText(FText Text); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5ACE8B00
		void SetTagBackgroundColor(FLinearColor Color); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE6E00
		void SetTagVisibility(bool Visible); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE0C00
		void SetTagTextPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE5500
		void SetTagTextColor(FLinearColor Color); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5ACE5600
		void SetTagType(TEnumAsByte Type); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5ACE0B00
		void SetTagText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE6F00
		void InitializeTag(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE6600
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5ACE7C00
		void ExecuteUbergraph_WBP_UIKit_Tag_Base(int32_t EntryPoint); // Flags: Final 0x15D5ACEA800
	};


	// Class /FortUILibrary/Systems/ContextMenu/WBP_UIKit_ContextMenu.WBP_UIKit_ContextMenu_C
	// Inherited from UUIKitContextMenu -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x39 (0x439 - 0x400)
	class UWBP_UIKit_ContextMenu_C : public UUIKitContextMenu	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x8)
		UUIKitContextMenuViewModel UIKitContextMenuViewModel; // 0x408(0x8)
		UWidgetAnimation Show; // 0x410(0x8)
		UCommonListView Content; // 0x418(0x8)
		UImage MouseCatcher; // 0x420(0x8)
		UWBP_BottomBarDecoyButton_C WBP_BottomBarDecoyButton_Back; // 0x428(0x8)
		UWBP_BottomBarDecoyButton_C WBP_BottomBarDecoyButton_Select; // 0x430(0x8)
		bool UseBottomBarButtons; // 0x438(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ContextMenu/WBP_UIKit_ContextMenu.WBP_UIKit_ContextMenu_C");
			return ret;
		}

		void SetUIKitContextMenuViewModel(UUIKitContextMenuViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D5ACE1A00
		void InitActions(TArray& Actions); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5ACE1700
		FEventReply On_MouseCatcher_MouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5ACE1800
		void Update Bottom Bar Button Visibility(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE2600
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5ACE0500
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5ACE0600
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15D5ACE0400
		void HandleInputMethodChanged(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15D5ACE1900
		void ExecuteUbergraph_WBP_UIKit_ContextMenu(int32_t EntryPoint); // Flags: Final 0x15D5ACE0700
	};


	// Class /FortUILibrary/Systems/ContextMenu/WBP_UIKit_ContextMenuAnchorButton_Base.WBP_UIKit_ContextMenuAnchorButton_Base_C
	// Inherited from UUIKitContextMenuAnchor -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x148 (0x458 - 0x310)
	class UWBP_UIKit_ContextMenuAnchorButton_Base_C : public UUIKitContextMenuAnchor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x8)
		UGridPanel GridPanel_Root; // 0x318(0x8)
		TEnumAsByte MenuPlacement; // 0x320(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x321(0x7) UNKNOWN PROPERTY
		UUIKitContextMenuViewModel ViewModel; // 0x328(0x8)
		UUIKitContextMenuActionContext InteractionContext; // 0x330(0x8)
		UTexture2D ButtonIcon; // 0x338(0x8)
		FText ButtonText; // 0x340(0x10)
		FSlateFontInfo Button_Text_Font; // 0x350(0x58)
		UMaterialInstance Button_Background_Material; // 0x3A8(0x8)
		UMaterialInstance Button_Outline_Material; // 0x3B0(0x8)
		FMargin Button_Padding; // 0x3B8(0x10)
		FMulticastInlineDelegate OnContextMenuOpened; // 0x3C8(0x10)
		FMulticastInlineDelegate OnContextMenuClosed; // 0x3D8(0x10)
		UWBP_UIKit_ButtonGeneric_Base_C ContextMenuButton; // 0x3E8(0x8)
		UClass ButtonClass; // 0x3F0(0x8)
		UWBP_UIKit_ContextMenu_C SpawnedMenu; // 0x3F8(0x8)
		bool CloseMenuOnContextClicked; // 0x400(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x401(0x7) UNKNOWN PROPERTY
		FDataTableRowHandle Triggering_Input_Action; // 0x408(0x10)
		FDataTableRowHandle BackActionHandle; // 0x418(0x10)
		bool UseBottomBarButtons; // 0x428(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x429(0x3) UNKNOWN PROPERTY
		int32_t Min_Width; // 0x42C(0x4)
		int32_t Min_Height; // 0x430(0x4)
		bool UseQuickHotkeys; // 0x434(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x435(0x3) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHovered; // 0x438(0x10)
		FMulticastInlineDelegate OnUnhovered; // 0x448(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ContextMenu/WBP_UIKit_ContextMenuAnchorButton_Base.WBP_UIKit_ContextMenuAnchorButton_Base_C");
			return ret;
		}

		void Update Quick Actions(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D3F51E100
		void Toggle Quick Actions(bool Enabled); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D3F519100
		void Set Focus for STW(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D3F51CB00
		void OnBackPressed(bool& bPassThrough); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5ACE0F00
		void CloseMenu(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE3700
		void UpdatePadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D3F51FB00
		void UpdateBackground(UMaterialInstance Background MI, UMaterialInstance Outline MI); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D3F517800
		void UpdateTextFont(FSlateFontInfo In Font); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D3F51B900
		void UpdateText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D3F51AE00
		void UpdateIcon(UTexture2D Icon); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D3F517900
		void SetContext(UUIKitContextMenuActionContext InteractionContext_Data); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D3F51CE00
		void Init Context Menu(UObject Widget); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D5ACE0E00
		void OnMouseLeave(FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x15D3F518800
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D3F51AD00
		void OnButtonBaseClicked_ContextMenuButtonDynamic(UCommonButtonBase Button); // Flags: BlueprintCallable|BlueprintEvent 0x15D5ACE8300
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5ACE2900
		void ToggleContextMenu(); // Flags: BlueprintCallable|BlueprintEvent 0x15D3F51BF00
		void OnContextClicked(UObject Item); // Flags: BlueprintCallable|BlueprintEvent 0x15D5ACE8400
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5ACE3800
		void BP_OnMenuSpawned(UUserWidget Widget); // Flags: Event|Public|BlueprintEvent 0x15D5ACE3600
		void BndEvt__TestCall_PopupMenuAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Flags: BlueprintEvent 0x15D5ACE6400
		void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x15D3F518D00
		void ExecuteUbergraph_WBP_UIKit_ContextMenuAnchorButton_Base(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D5ACE3A00
		void OnUnhovered__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D3F51D300
		void OnHovered__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D3F510300
		void OnContextMenuClosed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5ACE6900
		void OnContextMenuOpened__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5ACE6800
	};


	// Class /FortUILibrary/Systems/Items/WBP_UIKit_EquippedState.WBP_UIKit_EquippedState_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x198 (0x450 - 0x2B8)
	class UWBP_UIKit_EquippedState_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UCommonVisibilitySwitcher EmoteDisplaySwitcher; // 0x2C0(0x8)
		UFortLazyImage EmoteWheelPositionImage; // 0x2C8(0x8)
		UCommonBorder EquippedSection; // 0x2D0(0x8)
		UCommonBorder Outline; // 0x2D8(0x8)
		UCommonTextBlock Text_EquippedSlot; // 0x2E0(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY
		FSlateBrush OutlineColor; // 0x2F0(0xB0)
		FSlateBrush SlotColor; // 0x3A0(0xB0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Items/WBP_UIKit_EquippedState.WBP_UIKit_EquippedState_C");
			return ret;
		}

		void SetEquippedState(bool IsCurrentSlotEquipped, bool DisplaySlot, FText EquippedSlot, TWeakObjectPtr SlotImage); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C0E800
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D49C0E900
		void ExecuteUbergraph_WBP_UIKit_EquippedState(int32_t EntryPoint); // Flags: Final 0x15D4115B900
	};


	// Class /FortUILibrary/Systems/Items/WBP_UIKit_Transference.WBP_UIKit_Transference_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2E0 - 0x2B8)
	class UWBP_UIKit_Transference_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UImage Image; // 0x2C0(0x8)
		double MobileSizeMultiplier; // 0x2C8(0x8)
		FVector2D Size; // 0x2D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Items/WBP_UIKit_Transference.WBP_UIKit_Transference_C");
			return ret;
		}

		void SetRoundedCorners(bool Is Rounded); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C0E300
		void SetSize(FVector2D Size); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C0E200
		void SetHasTransferenceModes(TSet Compatible Modes); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C0E500
		void SetHasTransference(bool Has Transference); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C0E600
		void SetIsEnhanced(bool Is Enhanced); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C0E400
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D49C0E700
		void ExecuteUbergraph_WBP_UIKit_Transference(int32_t EntryPoint); // Flags: Final 0x15D49C0A600
	};


	// Class /FortUILibrary/Systems/Items/WBP_UIKit_ItemCard_Base.WBP_UIKit_ItemCard_Base_C
	// Inherited from UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x2B0 (0x1740 - 0x1490)
	class UWBP_UIKit_ItemCard_Base_C : public UUIKitHoldableModularButton	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x8)
		UWidgetAnimation Anim_Hovered_Base; // 0x1498(0x8)
		UImage Background; // 0x14A0(0x8)
		UWBP_UIKit_Block_Outline_C Block_Outline; // 0x14A8(0x8)
		UImage Compatibility_Icon; // 0x14B0(0x8)
		UWBP_CosmeticGating_WarningIcon_C CosmeticGating_Icon; // 0x14B8(0x8)
		UWBP_UIKit_EquippedState_C EquippedState_Outline; // 0x14C0(0x8)
		UGridPanel IconsContainer; // 0x14C8(0x8)
		UFortLazyImage LazyImage_Item; // 0x14D0(0x8)
		UGridPanel LeftIndicators; // 0x14D8(0x8)
		UGridPanel RightIndicators; // 0x14E0(0x8)
		UGridPanel Root; // 0x14E8(0x8)
		USizeBox SizeBox; // 0x14F0(0x8)
		UNamedSlot Slot_Background; // 0x14F8(0x8)
		UNamedSlot Slot_Custom; // 0x1500(0x8)
		UNamedSlot Slot_Main; // 0x1508(0x8)
		UWBP_UIKit_Transference_C UIKit_Transference; // 0x1510(0x8)
		FVector2D ItemCardSize; // 0x1518(0x10)
		UMaterialInstance ItemMaterial; // 0x1528(0x8)
		TWeakObjectPtr ItemImage; // 0x1530(0x20)
		UMaterialInstanceDynamic ItemDynamicMaterial; // 0x1550(0x8)
		FVector2D MobileItemSize; // 0x1558(0x10)
		FVector2D MobileRewardItemSize; // 0x1568(0x10)
		double ItemScaleDelta; // 0x1578(0x8)
		USoundBase HoveredSound; // 0x1580(0x8)
		USoundBase PressedSound; // 0x1588(0x8)
		bool IsEquippedStateSet; // 0x1590(0x1)
		bool IsLockedStateSet; // 0x1591(0x1)
		bool IsFavoriteStateSet; // 0x1592(0x1)
		bool IsArchiveStateSet; // 0x1593(0x1)
		unsigned char UnknownData06_6[0x4]; // 0x1594(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr Fallback_Image; // 0x1598(0x20)
		FMulticastInlineDelegate OnCardHovered; // 0x15B8(0x10)
		FMulticastInlineDelegate OnCardUnhovered; // 0x15C8(0x10)
		bool IsConflictStateSet; // 0x15D8(0x1)
		bool IsNewStateSet; // 0x15D9(0x1)
		bool ShowSmallAgeGateIcon; // 0x15DA(0x1)
		bool IsAgeGateStateSet; // 0x15DB(0x1)
		unsigned char UnknownData07_6[0x4]; // 0x15DC(0x4) UNKNOWN PROPERTY
		UMaterialInstanceDynamic BackgroundDynamicMaterial; // 0x15E0(0x8)
		bool Is_Equipped; // 0x15E8(0x1)
		bool Is_Secondary_Equipped; // 0x15E9(0x1)
		unsigned char UnknownData08_6[0x6]; // 0x15EA(0x6) UNKNOWN PROPERTY
		UMaterialInterface DefaultBackgroundMaterial; // 0x15F0(0x8)
		int32_t Equipped_Slot; // 0x15F8(0x4)
		bool ShowEquipNumbers; // 0x15FC(0x1)
		bool UseAdaptiveBackground; // 0x15FD(0x1)
		unsigned char UnknownData09_6[0x2]; // 0x15FE(0x2) UNKNOWN PROPERTY
		UFortItemPreviewWidget PreviewWidget; // 0x1600(0x8)
		TArray Preview_Actions; // 0x1608(0x10)
		UWBP_UIKit_ContextMenuAnchorButton_Base_C Context_Menu; // 0x1618(0x8)
		bool ShouldClose; // 0x1620(0x1)
		unsigned char UnknownData10_6[0x7]; // 0x1621(0x7) UNKNOWN PROPERTY
		TMap StatusIndicatorCache; // 0x1628(0x50)
		TMap StatusIndicators; // 0x1678(0x50)
		TMap OverrideBangCounts; // 0x16C8(0x50)
		bool IsButtonFocused; // 0x1718(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x1719(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr Slot_Icon; // 0x1720(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Items/WBP_UIKit_ItemCard_Base.WBP_UIKit_ItemCard_Base_C");
			return ret;
		}

		void SetItemIsEquippedInOtherCategory(bool IsEquippedInOtherCategory); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C02E00
		void OverrideStatusIndicatorBangCount(TEnumAsByte Indicator, int32_t Value); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D49C00A00
		void FindCachedStatusIndicator(TEnumAsByte IndicatorType, UWBP_UIKit_StatusIndicator_Base_C& Status Indicator, bool& Valid); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D49C0FE00
		UGridPanel FindStatusIndicatorPlacementContainer(TEnumAsByte Placement); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D49C0FD00
		void RemoveStatusIndicator(TEnumAsByte Indicator); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D49C01000
		void Set Status Indicator Visibility(TEnumAsByte Indicator, bool Visibility); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D49C01900
		void SelectCard(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C01300
		void SetFocusState(bool IsFocused); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C01C00
		void Bind Preview Actions(UFortItemPreviewWidget Preview Widget, UWBP_UIKit_ContextMenuAnchorButton_Base_C Context Menu, UFortItemVM Item VM); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D49C0CC00
		void On Secondary Action Button Clicked(FName NameId); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C00600
		void On Primary Preview Action Button Clicked(FName NameId); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C00500
		void Set Context Menu Action(UWBP_UIKit_ContextMenuAnchorButton_Base_C Context Menu, FName Preview Action ID, FText Preview Action Text, int32_t In Action Info Sort Priority, FDataTableRowHandle In Action Info Interaction, FDelegateProperty& Preview Action IteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D49C01400
		void SetBackgroundBlendMode(bool UseAdaptiveColor); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C01B00
		void ResetAnimationState(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C01100
		void Refresh Equipped Visibility(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D49C00F00
		void Set Item Is Juno(bool IsIconVisible); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C01800
		void Set Custom Widget(UFortItemVM ItemVM); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C01500
		void GetIsItemAgeGatedFortCurrentExperience(UFortItemDefinition Item Def, bool& Is Item Gated); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D49C00300
		void ResetIconStates(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D49C01200
		void GetAreItemsAgeGated(TArray& ItemVMs, bool& Is Item Gated); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D49C0FC00
		void GetIsItemAgeGated(UFortItemDefinition Item Def, bool& Is Item Gated); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D49C0FB00
		void SetItemIsAgeGated(bool IsAgeGated); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C02900
		void SetItemIsNew(bool Is New); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C03300
		void PresetForDesignTime(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D49C00E00
		void Set Default Background(FLinearColor Color 1, FLinearColor Color 2, float GradientStart, float GradientEnd, float GradientAngle); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C01600
		void PlaySoundPressed(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D49C00C00
		void PlaySoundHovered(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D49C00B00
		void SetGridNudge(UWidget Widget, FVector2D Nudge); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C02100
		void SetGridPadding(UWidget Widget, FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C02000
		void SetGridLayer(UWidget Widget, int32_t Layer); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C01F00
		void SetGridAlignment(UWidget Widget, TEnumAsByte Horizontal, TEnumAsByte Vertical); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C01D00
		void SetGridColumnAndRow(UWidget Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C01E00
		void SetItemAnimationScale(double& Item Scale); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D49C02500
		void SetItemIsArchived(bool Is Archived); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C02A00
		void SetItemHasConflict(bool HasConflict); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C02700
		void SetItemIsFavorite(bool Is Favorite); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C03000
		void SetItemIsLocked(bool Is Locked); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C03100
		void SetItemIsEquippedSecondary(bool Is Equipped, bool ShowEquippedSlotIndex, int32_t EquippedSlotIndex, TWeakObjectPtr SlotIcon); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C02F00
		void SetItemIsEquipped(bool Is Equipped); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C02D00
		void SetItemIsMultiGame(bool Has Transference); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C03200
		void SetItemIsRestricted(bool IsCompatible); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C03400
		void SetItemIsEnhanced(bool Is Enhanced); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C02C00
		void Set Item Color(FSlateColor VariantColor); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C01700
		void SetItemImage(TWeakObjectPtr Item Image); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D49C02800
		void SetItemMaterial(UMaterialInstance& Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D49C03500
		void UpdateRoundCorners(UMaterialInstanceDynamic DynamicMaterialInstance); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D49C03600
		void SetItemCardSize(FVector2D ItemSize); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C02600
		void InitializeItemCard(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D49C00400
		void OnLoaded_3676C6CA4C3EB62147F5FD96AF4186A1(UObject Loaded); // Flags: BlueprintCallable|BlueprintEvent 0x15D49C00900
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D49C0C700
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D49C0C900
		void SetAsyncBackground(TWeakObjectPtr MaterialInterfaceValue); // Flags: BlueprintCallable|BlueprintEvent 0x15D49C01A00
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent 0x15D49C0C800
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x15D49C0CB00
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent 0x15D49C0CA00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D49C00D00
		void ExecuteUbergraph_WBP_UIKit_ItemCard_Base(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D49C0FF00
		void OnCardUnhovered__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D49C00800
		void OnCardHovered__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D49C00700
	};


	// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Toggle.WBP_UIKit_Block_Toggle_C
	// Inherited from UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x125 (0x410 - 0x2EB)
	class UWBP_UIKit_Block_Toggle_C : public UWBP_UIKit_Block_Base_C	
	{
	public:
		unsigned char UnknownData03_3[0x5]; // 0x2EB(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F0(0x8)
		UWidgetAnimation Anim_SelectedDisabled_Transition; // 0x2F8(0x8)
		UWidgetAnimation Anim_SelectedPressed_Transition; // 0x300(0x8)
		UWidgetAnimation Anim_SelectedFocused_Transition; // 0x308(0x8)
		UWidgetAnimation Anim_SelectedHovered_Transition; // 0x310(0x8)
		UWidgetAnimation Anim_Selected_Transition; // 0x318(0x8)
		UWidgetAnimation Anim_Disabled_Transition; // 0x320(0x8)
		UWidgetAnimation Anim_Pressed_Transition; // 0x328(0x8)
		UWidgetAnimation Anim_Focused_Transition; // 0x330(0x8)
		UWidgetAnimation Anim_Hovered_Transition; // 0x338(0x8)
		UFortMobileImage Image; // 0x340(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x348(0x8) UNKNOWN PROPERTY
		FSlateBrush Brush; // 0x350(0xB0)
		TEnumAsByte ToggleType; // 0x400(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x401(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic ImageMID; // 0x408(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Toggle.WBP_UIKit_Block_Toggle_C");
			return ret;
		}

		void RefreshImageMID(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D637B7500
		void SetSelected(bool Selected); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637B7200
		void SetToggleType(TEnumAsByte Type); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637B7000
		void SetSize(FVector2D Desired Size); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637B7100
		void SetMaterial(UMaterialInstance& InMaterial); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D637B7300
		void SetBrush(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D637B7400
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D637B7B00
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D637B7A00
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D637B7800
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D637B7C00
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D637B7D00
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent 0x15D637B7F00
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent 0x15D637B8000
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent 0x15D637B7E00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D637B7600
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D637B7900
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D637B7700
		void ExecuteUbergraph_WBP_UIKit_Block_Toggle(int32_t EntryPoint); // Flags: Final 0x15D637B8100
	};


	// Class /FortUILibrary/Systems/CoachMark/WBP_UIKit_CoachMark_Base.WBP_UIKit_CoachMark_Base_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x358 (0x750 - 0x3F8)
	class UWBP_UIKit_CoachMark_Base_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UWidgetAnimation Anim_Outro; // 0x400(0x8)
		UHorizontalBox Buttons; // 0x408(0x8)
		UGridPanel Content; // 0x410(0x8)
		UVerticalBox Description; // 0x418(0x8)
		UImage Image_Arrow; // 0x420(0x8)
		UImage Image_Background; // 0x428(0x8)
		UCommonRichTextBlock RichText_Description; // 0x430(0x8)
		UCommonRichTextBlock RichText_Header; // 0x438(0x8)
		UGridPanel TopGrid; // 0x440(0x8)
		UWBP_CaptureForPostBufferUpdate_C WBP_CaptureForPostBufferUpdate; // 0x448(0x8)
		UWBP_CaptureForPostBufferUpdate_C WBP_CaptureForPostBufferUpdate; // 0x450(0x8)
		USizeBox WidgetSize; // 0x458(0x8)
		TEnumAsByte ArrowPosition; // 0x460(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x461(0x7) UNKNOWN PROPERTY
		double OutsideOffset; // 0x468(0x8)
		FSlateBrush Brush_Icon; // 0x470(0xB0)
		float Angle_Icon; // 0x520(0x4)
		TEnumAsByte IconPosition; // 0x524(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x525(0x3) UNKNOWN PROPERTY
		FText TextHeader; // 0x528(0x10)
		TEnumAsByte JustificationHeader; // 0x538(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x539(0x7) UNKNOWN PROPERTY
		FText TextDescription; // 0x540(0x10)
		FSlateColor DefaultDescriptoinColor; // 0x550(0x14)
		TEnumAsByte JustificationDescription; // 0x564(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x565(0x3) UNKNOWN PROPERTY
		FText TextDismissButton; // 0x568(0x10)
		bool IsShowDismissButton; // 0x578(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x579(0x7) UNKNOWN PROPERTY
		FText TextOtherActionButton; // 0x580(0x10)
		bool IsShowOtherActionButton; // 0x590(0x1)
		unsigned char UnknownData14_6[0xF]; // 0x591(0xF) UNKNOWN PROPERTY
		FSlateBrush BackgroundBrush; // 0x5A0(0xB0)
		float Widget_Width; // 0x650(0x4)
		unsigned char UnknownData15_6[0x4]; // 0x654(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate ButtonDismissClicked; // 0x658(0x10)
		FMulticastInlineDelegate ButtonDismissHoldCompleted; // 0x668(0x10)
		FMulticastInlineDelegate ButtonOtherActionClicked; // 0x678(0x10)
		FMulticastInlineDelegate ButtonOtherActionHoldCompleted; // 0x688(0x10)
		double SafeZone; // 0x698(0x8)
		TArray In_Decorator_Classes; // 0x6A0(0x10)
		FDataTableRowHandle Input_Action_Other; // 0x6B0(0x10)
		FDataTableRowHandle Input_Action_Dismiss; // 0x6C0(0x10)
		UMaterialInstanceDynamic BackgroundDynamicMaterial; // 0x6D0(0x8)
		TWeakObjectPtr DismissButtonClass; // 0x6D8(0x20)
		UWBP_UIKit_Button_Regular_C DismissButton; // 0x6F8(0x8)
		TWeakObjectPtr OtherActionButtonClass; // 0x700(0x20)
		UWBP_UIKit_Button_Regular_C OtherActionButton; // 0x720(0x8)
		UClass HoldDataOther; // 0x728(0x8)
		bool RequiresHoldOther; // 0x730(0x1)
		unsigned char UnknownData16_6[0x7]; // 0x731(0x7) UNKNOWN PROPERTY
		UClass HoldDataDismiss; // 0x738(0x8)
		bool RequiresHoldDismiss; // 0x740(0x1)
		unsigned char UnknownData17_6[0x7]; // 0x741(0x7) UNKNOWN PROPERTY
		UImage Image_Icon; // 0x748(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/CoachMark/WBP_UIKit_CoachMark_Base.WBP_UIKit_CoachMark_Base_C");
			return ret;
		}

		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D87138100
		void InitBackground(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D87137500
		void UpdateVisibilityButtonBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D87136B00
		void Init Buttons(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D87137700
		void SetTextDescription(FText Text, bool& Empty); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D87136D00
		void SetTextHeader(FText Text, bool& Empty); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D87136C00
		void SetText(FText Text, UCommonRichTextBlock TextBlock, bool& Empty); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D87136E00
		void InitIcon(TEnumAsByte Direction); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D87137400
		void InitArrow(TEnumAsByte Position); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D87137600
		void Finished_CEF7D6F14519FD13EDD5C6A6991497C9(); // Flags: BlueprintCallable|BlueprintEvent 0x15D87137800
		void Finished_1CF1DF24483FC4198FBCA5A3D27BAEAB(); // Flags: BlueprintCallable|BlueprintEvent 0x15D87137900
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15D87138000
		void OnButtonDismissClicked(UCommonButtonBase Button); // Flags: BlueprintCallable|BlueprintEvent 0x15D87137300
		void OnButtonDismissHoldComplited(); // Flags: BlueprintCallable|BlueprintEvent 0x15D87137200
		void OnButtonOtherActionClicked(UCommonButtonBase Button); // Flags: BlueprintCallable|BlueprintEvent 0x15D87137100
		void OnButtonOtherActionHoldComplited(); // Flags: BlueprintCallable|BlueprintEvent 0x15D87137000
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D87136F00
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15D87137F00
		void ExecuteUbergraph_WBP_UIKit_CoachMark_Base(int32_t EntryPoint); // Flags: Final 0x15D87137A00
		void ButtonOtherActionHoldCompleted__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D87137B00
		void ButtonOtherActionClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D87137C00
		void ButtonDismissHoldCompleted__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D87137D00
		void ButtonDismissClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D87137E00
	};


	// Class /FortUILibrary/Systems/Items/WBP_UIKit_ItemDescription_Base.WBP_UIKit_ItemDescription_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x190 (0x448 - 0x2B8)
	class UWBP_UIKit_ItemDescription_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UGridPanel GameCompatible; // 0x2C0(0x8)
		UWrapBox ModeTagsBox; // 0x2C8(0x8)
		UWBP_UIKit_Tag_C RarityTag; // 0x2D0(0x8)
		UGridPanel Root; // 0x2D8(0x8)
		USizeBox SizeBox_Compatibilty; // 0x2E0(0x8)
		USizeBox SizeBoxTitle; // 0x2E8(0x8)
		UNamedSlot Slot_Bottom; // 0x2F0(0x8)
		UCommonRichTextBlock Text_Body; // 0x2F8(0x8)
		UCommonTextBlock Text_Compatibility; // 0x300(0x8)
		UCommonTextBlock Text_Title; // 0x308(0x8)
		FSlateFontInfo TitleFont; // 0x310(0x58)
		FSlateColor TitleColor; // 0x368(0x14)
		int32_t TagRow; // 0x37C(0x4)
		int32_t TitleRow; // 0x380(0x4)
		int32_t BodyTextRow; // 0x384(0x4)
		FMargin TitlePadding; // 0x388(0x10)
		FLinearColor TagTitleColor; // 0x398(0x10)
		FMargin TagPadding; // 0x3A8(0x10)
		FSlateColor BodyTextColor; // 0x3B8(0x14)
		bool HideBodyText; // 0x3CC(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x3CD(0x3) UNKNOWN PROPERTY
		FMargin BodyTextPadding; // 0x3D0(0x10)
		TEnumAsByte TitleWrap; // 0x3E0(0x1)
		bool HideCompatibility; // 0x3E1(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x3E2(0x2) UNKNOWN PROPERTY
		int32_t CompatibilityRow; // 0x3E4(0x4)
		FMargin CompatibilityPadding; // 0x3E8(0x10)
		UClass GameTagClass; // 0x3F8(0x8)
		TEnumAsByte GameTagType; // 0x400(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x401(0x7) UNKNOWN PROPERTY
		TArray GameTags; // 0x408(0x10)
		bool HideRarityTag; // 0x418(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x419(0x3) UNKNOWN PROPERTY
		float TitleMaxHeight; // 0x41C(0x4)
		bool TagWrapSizeDefault; // 0x420(0x1)
		bool TagWrapSizeMobile; // 0x421(0x1)
		bool HideCategoryText; // 0x422(0x1)
		bool HideStyleText; // 0x423(0x1)
		TEnumAsByte HorizontalAlignment; // 0x424(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x425(0x3) UNKNOWN PROPERTY
		UDataTable BodyTextCustomTextStyle; // 0x428(0x8)
		FSlateColor CompatibilityTitleColor; // 0x430(0x14)
		int32_t BottomSlotRow; // 0x444(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Items/WBP_UIKit_ItemDescription_Base.WBP_UIKit_ItemDescription_Base_C");
			return ret;
		}

		void SetMobileStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F3F00
		void Set Alignments(TEnumAsByte Alignment); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F0500
		void SetStyleTextVisibility(bool ShowText); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F3A00
		void ClearPlaceholderData(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F0A00
		void SetStyleText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F3B00
		void SetCompatibilityVisibility(bool Show); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F4000
		void SetCompatibilityTags(TSet Product Tags); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F4200
		void SetCompatibilityText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F4100
		void AddCompatibilityTags(TArray& GameTags); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F0C00
		void PresetForDesignTime(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F0600
		void SetWidgetLayout(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F3800
		void InitializeWidget(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F0800
		void SetRarityTagVisibility(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F3D00
		void SetRarityTagColors(FFortColorPalette& FortColorPalette); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB71F3E00
		void SetRarityText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F3C00
		void SetCategoryTextVisibility(bool ShowText); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F0100
		void SetCategoryText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F0200
		void SetBodyTextVisibility(bool Show Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F0300
		void SetBodyText(FText& Text); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB71F0400
		void SetTitleText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F3900
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB71F0700
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent 0x15DB71F0B00
		void ExecuteUbergraph_WBP_UIKit_ItemDescription_Base(int32_t EntryPoint); // Flags: Final 0x15DB71F0900
	};


	// Class /FortUILibrary/Systems/Tabs/BPI_UIKit_Collapsible.BPI_UIKit_Collapsible_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBPI_UIKit_Collapsible_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/BPI_UIKit_Collapsible.BPI_UIKit_Collapsible_C");
			return ret;
		}

		void SetIsCollapsed(bool IsCollapsed, bool SkipAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5C2C6E00
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_TabGroup_Base.WBP_UIKit_TabGroup_Base_C
	// Inherited from UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x330 (0x820 - 0x4F0)
	class UWBP_UIKit_TabGroup_Base_C : public UUIKitTabGroup	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4F0(0x8)
		UWidgetAnimation Anim_PromptSpaceChange; // 0x4F8(0x8)
		UGridPanel Next_Prompt; // 0x500(0x8)
		USizeBox Next_SizeBox; // 0x508(0x8)
		USpacer Next_Spacer; // 0x510(0x8)
		UCommonActionWidget NextTabAction; // 0x518(0x8)
		UGridPanel Prev_Prompt; // 0x520(0x8)
		USizeBox Prev_SizeBox; // 0x528(0x8)
		USpacer Prev_Spacer; // 0x530(0x8)
		UCommonActionWidget PrevTabAction; // 0x538(0x8)
		UGridPanel Root; // 0x540(0x8)
		UScrollBox ScrollBox_Tabs; // 0x548(0x8)
		UGridPanel TabsContainer; // 0x550(0x8)
		bool IsVertical; // 0x558(0x1)
		bool IsNaturalNavigation; // 0x559(0x1)
		TEnumAsByte TabGroupHorizontalAlignment; // 0x55A(0x1)
		TEnumAsByte TabGroupVerticalAlignment; // 0x55B(0x1)
		FMargin TabGroupPadding; // 0x55C(0x10)
		unsigned char UnknownData14_6[0x4]; // 0x56C(0x4) UNKNOWN PROPERTY
		double TabSpacing; // 0x570(0x8)
		FName InitialSelectedTabID; // 0x578(0x4)
		int32_t InitialSelectedTabIndex; // 0x57C(0x4)
		UClass ButtonClass; // 0x580(0x8)
		TMap ButtonClassOverride; // 0x588(0x50)
		bool UseMinButtonSize; // 0x5D8(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x5D9(0x3) UNKNOWN PROPERTY
		FIntPoint MinButtonSize; // 0x5DC(0x8)
		TEnumAsByte ButtonHorizontalAlignment; // 0x5E4(0x1)
		TEnumAsByte ButtonVerticalAlignment; // 0x5E5(0x1)
		unsigned char UnknownData16_6[0x2]; // 0x5E6(0x2) UNKNOWN PROPERTY
		FMargin ButtonPadding; // 0x5E8(0x10)
		FVector2D IconSize; // 0x5F8(0x10)
		FDataTableRowHandle Bumper_NextTab; // 0x608(0x10)
		FDataTableRowHandle Bumper_PrevTab; // 0x618(0x10)
		FDataTableRowHandle Trigger_NextTab; // 0x628(0x10)
		FDataTableRowHandle Trigger_PrevTab; // 0x638(0x10)
		FDataTableRowHandle BumperAndMouseScroll_NextTab; // 0x648(0x10)
		FDataTableRowHandle BumperAndMouseScroll_PrevTab; // 0x658(0x10)
		FDataTableRowHandle TriggerAndMouseScroll_NextTab; // 0x668(0x10)
		FDataTableRowHandle TriggerAndMouseScroll_PrevTab; // 0x678(0x10)
		TEnumAsByte InputActions; // 0x688(0x1)
		bool InputActionsWithMouseScroll; // 0x689(0x1)
		bool HidePrompts; // 0x68A(0x1)
		bool HideMouseAndKeyboardPrompts; // 0x68B(0x1)
		unsigned char UnknownData17_6[0x4]; // 0x68C(0x4) UNKNOWN PROPERTY
		double ReservedPromptSpace; // 0x690(0x8)
		bool AnimateReservedPromptSpace; // 0x698(0x1)
		unsigned char UnknownData18_6[0x7]; // 0x699(0x7) UNKNOWN PROPERTY
		double TimeToHidePrompts; // 0x6A0(0x8)
		double TimeToShowPrompts; // 0x6A8(0x8)
		TEnumAsByte NextPromptHorizontalAlignment; // 0x6B0(0x1)
		TEnumAsByte NextPromptVerticalAlignment; // 0x6B1(0x1)
		unsigned char UnknownData19_6[0x2]; // 0x6B2(0x2) UNKNOWN PROPERTY
		FMargin NextPromptPadding; // 0x6B4(0x10)
		bool IsPromptsVisible; // 0x6C4(0x1)
		unsigned char UnknownData20_6[0x3]; // 0x6C5(0x3) UNKNOWN PROPERTY
		UWBP_UIKit_Backplate_Base_C ContentBackplate; // 0x6C8(0x8)
		bool UseBackplate; // 0x6D0(0x1)
		unsigned char UnknownData21_6[0x7]; // 0x6D1(0x7) UNKNOWN PROPERTY
		UClass BackplateClass; // 0x6D8(0x8)
		TEnumAsByte BackplateBrightness; // 0x6E0(0x1)
		TEnumAsByte BackplateCornerRadius; // 0x6E1(0x1)
		unsigned char UnknownData22_6[0x6]; // 0x6E2(0x6) UNKNOWN PROPERTY
		UWBP_UIKit_Backplate_Base_C PrevPromptBackplate; // 0x6E8(0x8)
		UWBP_UIKit_Backplate_Base_C NextPromptBackplate; // 0x6F0(0x8)
		TEnumAsByte PrevPromptHorizontalAlignment; // 0x6F8(0x1)
		TEnumAsByte PrevPromptVerticalAlignment; // 0x6F9(0x1)
		unsigned char UnknownData23_6[0x2]; // 0x6FA(0x2) UNKNOWN PROPERTY
		FMargin PrevPromptPadding; // 0x6FC(0x10)
		bool UsePromptBackplate; // 0x70C(0x1)
		unsigned char UnknownData24_6[0x3]; // 0x70D(0x3) UNKNOWN PROPERTY
		UClass PromptsBackplateClass; // 0x710(0x8)
		TEnumAsByte PromptBackplateBrightness; // 0x718(0x1)
		TEnumAsByte PromptBackplateCornerRadius; // 0x719(0x1)
		unsigned char UnknownData25_6[0x6]; // 0x71A(0x6) UNKNOWN PROPERTY
		FVector2D PromptBackplateMinSize; // 0x720(0x10)
		bool PromptsInsideTabsBackplate; // 0x730(0x1)
		ECommonInputType CurrentInputType; // 0x731(0x1)
		unsigned char UnknownData26_6[0x6]; // 0x732(0x6) UNKNOWN PROPERTY
		UClass DividerClass; // 0x738(0x8)
		TArray Dividers; // 0x740(0x10)
		double DividerSpacing; // 0x750(0x8)
		FMargin DividerPadding; // 0x758(0x10)
		bool UseInitialTabs; // 0x768(0x1)
		ESlateVisibility ScrollBarVisibility; // 0x769(0x1)
		unsigned char UnknownData27_6[0x6]; // 0x76A(0x6) UNKNOWN PROPERTY
		TMap CachedDividers; // 0x770(0x50)
		TMap CachedSpacers; // 0x7C0(0x50)
		TArray InitialTabsData; // 0x810(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_TabGroup_Base.WBP_UIKit_TabGroup_Base_C");
			return ret;
		}

		void SequenceEvent__ENTRYPOINTWBP_UIKit_TabGroup_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F4900
		void SequenceEvent__ENTRYPOINTWBP_UIKit_TabGroup_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F6E00
		void SequenceEvent__ENTRYPOINTWBP_UIKit_TabGroup_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F8F00
		void RemoveDividerWidget(FName TabID); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71FB200
		void SetBackplateProperties(UWBP_UIKit_Backplate_Base_C Backplate, TEnumAsByte Brightness, TEnumAsByte Corner Radius); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75A2C00
		void RemoveBackplateForPrompts(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75A3F00
		void AddBackplateForPrompts(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71FBB00
		void RemoveBackplate(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71FA700
		void AddBackplate(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F8600
		void GetButtonClass(FName TabID, UClass& ButtonClass); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB71FB700
		void PresetForDesignTime(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F5700
		void RemoveSpacer(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71FC300
		void AddSpacerToGrid(FName& TabID, int32_t Index); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB75A0B00
		void ScrollOnTabSelection(FName TabNameID); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F5F00
		void CacheInitialDividers(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F6C00
		void AddDividerToGrid(UWBP_UIKit_Divider_Base_C Divider, int32_t Index, bool AddAfter); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75A0C00
		void SetupDivider(UWBP_UIKit_Divider_Base_C InputPin); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75A2D00
		void HandleAddDivider(FName& TabID, int32_t TabIndex, bool AddAfter); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F6800
		void InitialTabSelection(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F9200
		void SetInputActionsType(TEnumAsByte InputActions, bool InputActionsWithMouseScroll); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB75A3200
		void RemoveDividerByIndex(int32_t TabIndex, bool& DividerRemoved); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB75A4200
		void RemoveDivider(FName TabID, bool& DividerRemoved); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F9700
		void AddDividerByIndex(int32_t TabIndex, bool AddAfter); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB75A5D00
		void AddDivider(FName TabID, bool AddAfter); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F9300
		void RemoveTabs(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC7B400
		void RemoveTabByIndex(int32_t Index, bool& TabRemoved); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB75A0F00
		void AddTab(UMVVMViewModelBase Tab VM, FName Tab ID, int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F9400
		void CreateEmptyTabs(int32_t TabsCount); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6084A00
		void RemoveCachedWidgets(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB75A6100
		void RemoveTabGroupWidgets(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15DB71FDF00
		void OverrideInputActions(FDataTableRowHandle Next Tab, FDataTableRowHandle PreviousTab); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F9800
		void PopulateTabsFromData(TArray& Data); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71FC500
		void SetTabViewModel(FName TabID, TScriptInterface VM); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB614C400
		void GetPromptsVisibility(bool& IsVisible); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB75A1300
		void SetPromptsVisibility(bool ShowPrompts); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F6000
		void UpdatePromptsVisibility(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75A1600
		void UpdateInputActions(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F6A00
		void UpdateTabLayout(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F5100
		void RestoreTabSelection(FName TabNameID); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB6149F00
		void AddTabToGrid(UWidget Widget, int32_t Index); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F5600
		void SetupTabButton(FName Tab ID, UCommonButtonBase Tab Button); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75A6200
		void HandleCreatedTab(FName Tab ID, UCommonButtonBase Button); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71FA600
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB71F7B00
		void HandleTabCreation(FName TabNameID, UCommonButtonBase TabButton); // Flags: Event|Protected|BlueprintEvent 0x15DB71FB100
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB71F6B00
		void Event On Input Method Changed(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6148C00
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB71F6900
		void Trigger_End(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB75A2100
		void Event On Tab Selected(FName TabID); // Flags: BlueprintCallable|BlueprintEvent 0x15DB71FA800
		void Trigger_Start(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB71F7700
		void Event OnTab Button Removal(FName TabID, UCommonButtonBase TabButton); // Flags: BlueprintCallable|BlueprintEvent 0x15DB71F4D00
		void Repeater_PromptSpaceChange(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB71F7A00
		void ExecuteUbergraph_WBP_UIKit_TabGroup_Base(int32_t EntryPoint); // Flags: Final 0x15DB71FC200
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_TabGroupCompact_Base.WBP_UIKit_TabGroupCompact_Base_C
	// Inherited from UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x648 - 0x4F0)
	class UWBP_UIKit_TabGroupCompact_Base_C : public UUIKitTabGroup	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4F0(0x8)
		UGridPanel TabsContainer; // 0x4F8(0x8)
		bool IsVertical; // 0x500(0x1)
		bool IsNaturalNavigation; // 0x501(0x1)
		TEnumAsByte TabGroupHorizontalAlignment; // 0x502(0x1)
		TEnumAsByte TabGroupVerticalAlignment; // 0x503(0x1)
		FMargin TabGroupPadding; // 0x504(0x10)
		unsigned char UnknownData04_6[0x4]; // 0x514(0x4) UNKNOWN PROPERTY
		double TabSpacing; // 0x518(0x8)
		FName InitialSelectedTabID; // 0x520(0x4)
		int32_t InitialSelectedTabIndex; // 0x524(0x4)
		UClass ButtonClass; // 0x528(0x8)
		FIntPoint MinButtonSize; // 0x530(0x8)
		TEnumAsByte ButtonHorizontalAlignment; // 0x538(0x1)
		TEnumAsByte ButtonVerticalAlignment; // 0x539(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x53A(0x2) UNKNOWN PROPERTY
		FMargin ButtonPadding; // 0x53C(0x10)
		unsigned char UnknownData06_6[0x4]; // 0x54C(0x4) UNKNOWN PROPERTY
		FVector2D IconSize; // 0x550(0x10)
		UClass DividerClass; // 0x560(0x8)
		TArray Dividers; // 0x568(0x10)
		double DividerSpacing; // 0x578(0x8)
		FMargin DividerPadding; // 0x580(0x10)
		bool UseInitialTabs; // 0x590(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x591(0x7) UNKNOWN PROPERTY
		TMap CachedDividers; // 0x598(0x50)
		TMap CachedSpacers; // 0x5E8(0x50)
		TArray InitialTabsData; // 0x638(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_TabGroupCompact_Base.WBP_UIKit_TabGroupCompact_Base_C");
			return ret;
		}

		void RemoveDividerWidget(FName TabID); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F6100
		void RemoveSpacer(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F8700
		void AddSpacerToGrid(FName& TabID, int32_t Index); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB71F8900
		void CacheInitialDividers(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71FAB00
		void AddDividerToGrid(UWBP_UIKit_Divider_Base_C Divider, int32_t Index, bool AddAfter); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75A0E00
		void SetupDivider(UWBP_UIKit_Divider_Base_C InputPin); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB608D400
		void HandleAddDivider(FName& TabID, int32_t TabIndex, bool AddAfter); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB75A0400
		void InitialTabSelection(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71FE400
		void RemoveDividerByIndex(int32_t TabIndex, bool& DividerRemoved); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6088D00
		void RemoveDivider(FName TabID, bool& DividerRemoved); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB75A0300
		void AddDividerByIndex(int32_t TabIndex, bool AddAfter); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6148A00
		void AddDivider(FName TabID, bool AddAfter); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71F7F00
		void RemoveTabs(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71F9F00
		void RemoveTabByIndex(int32_t Index, bool& TabRemoved); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB75A3B00
		void AddTab(UMVVMViewModelBase Tab VM, FName Tab ID, int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB75A2E00
		void CreateEmptyTabs(int32_t TabsCount); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB75A2A00
		void RemoveCachedWidgets(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71FC400
		void RemoveTabGroupWidgets(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15DB71FE500
		void PopulateTabsFromData(TArray& Data); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71FDA00
		void SetTabViewModel(FName TabID, TScriptInterface VM); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB6141500
		void UpdateTabLayout(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75A3A00
		void RestoreTabSelection(FName TabNameID); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB6141E00
		void AddTabToGrid(UWidget Widget, int32_t Index); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB6084100
		void SetupTabButton(FName Tab ID, UCommonButtonBase Tab Button); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F7200
		void HandleCreatedTab(FName Tab ID, UCommonButtonBase Button); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB75A3100
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB75A2800
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB75A0800
		void HandleTabCreation(FName TabNameID, UCommonButtonBase TabButton); // Flags: Event|Protected|BlueprintEvent 0x15DB71FCF00
		void Event OnTab Button Removal(FName TabID, UCommonButtonBase TabButton); // Flags: BlueprintCallable|BlueprintEvent 0x15DB71F9A00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB75A0200
		void ExecuteUbergraph_WBP_UIKit_TabGroupCompact_Base(int32_t EntryPoint); // Flags: Final 0x15DB71F5500
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_TabContainer_Base.WBP_UIKit_TabContainer_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD9 (0x391 - 0x2B8)
	class UWBP_UIKit_TabContainer_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UWidgetAnimation HideArrow; // 0x2C0(0x8)
		UWidgetAnimation Expand; // 0x2C8(0x8)
		UBorder Border_Background; // 0x2D0(0x8)
		UBorder Border_Content; // 0x2D8(0x8)
		UGridPanel Grid_Layout; // 0x2E0(0x8)
		UImage Image_Arrow; // 0x2E8(0x8)
		UNamedSlot Slot_Tab; // 0x2F0(0x8)
		FName ContainerTabID; // 0x2F8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x2FC(0x4) UNKNOWN PROPERTY
		UClass ContainerTabgroupClass; // 0x300(0x8)
		bool SkipExpandAnimation; // 0x308(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x309(0x3) UNKNOWN PROPERTY
		float ExpandDuration; // 0x30C(0x4)
		bool IsExpanded; // 0x310(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x311(0x7) UNKNOWN PROPERTY
		UWBP_UIKit_TabGroupCompact_Base_C InnerTabGroup; // 0x318(0x8)
		FMulticastInlineDelegate OnInnerTabSelected; // 0x320(0x10)
		FMulticastInlineDelegate OnInnerTabClicked; // 0x330(0x10)
		FMulticastInlineDelegate OnInnerTabCreation; // 0x340(0x10)
		FMulticastInlineDelegate OnContainerTabGroupCreation; // 0x350(0x10)
		FMulticastInlineDelegate OnContainerExpandedStateChanged; // 0x360(0x10)
		FMargin InnerTabGroupPadding; // 0x370(0x10)
		FLinearColor Backplate_Color; // 0x380(0x10)
		bool AllowContainerInteractionOnGamepad; // 0x390(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_TabContainer_Base.WBP_UIKit_TabContainer_Base_C");
			return ret;
		}

		void SequenceEvent__ENTRYPOINTWBP_UIKit_TabContainer_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB75AFC00
		void Update Border Opacity(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB75AF500
		void SetArrowIsSelected(bool IsSelected); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75AFB00
		void HandleCollapsedStateChanged(bool IsCollapsed, bool SkipAnimation); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB71FE000
		void RefreshTabSlotEnabledState(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB75AFE00
		void AddTabToContainer(UMVVMViewModelBase TabViewModel, FName TabID, int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB75A2700
		void ClearInnerTabsSelection(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71FC700
		void RefreshTabSlotVisuals(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB75AFD00
		void SetArrowVisibilty(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB75AFA00
		void FocusSelectedInnerTab(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75A6000
		void DestroyTabGroupWidget(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F4700
		void ExpandToSelectedItem(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71FDD00
		void SetBackground(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB75AF900
		void SetIsExpanded(bool InIsExpanded, bool SkipAnim); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB75AF700
		void GetTabButton(UCommonButtonBase& TabButton); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB71F8A00
		void GetInnerTabGroupWidget(UWBP_UIKit_TabGroupCompact_Base_C& InnerTabGroupWidget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB71F5C00
		void ConstructTabGroup(); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB71F7500
		void InitContainer(UCommonButtonBase ParentTabButton, FName TabID); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB71FC800
		void TryFocusSelectedInnerTab(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB75AF600
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB75A3C00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB75AFF00
		void Event OnInnerTabSelected(FName TabID, UMVVMViewModelBase TabVM); // Flags: BlueprintCallable|BlueprintEvent 0x15DB71F6600
		void Event OnInnerTabClicked(FName TabID, UMVVMViewModelBase TabVM); // Flags: BlueprintCallable|BlueprintEvent 0x15DB71FAC00
		void SetIsCollapsed(bool IsCollapsed, bool SkipAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB75AF800
		void Event OnInnerTabCreation(FName TabID, UCommonButtonBase TabButton); // Flags: BlueprintCallable|BlueprintEvent 0x15DB71FBE00
		void Event OnTabButtonSelected(UCommonButtonBase Button, bool Selected); // Flags: BlueprintCallable|BlueprintEvent 0x15DB75A0700
		void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x15DB75A0900
		void OnMouseLeave(FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x15DB71F7900
		void ExecuteUbergraph_WBP_UIKit_TabContainer_Base(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB75A2400
		void OnInnerTabCreation__DelegateSignature(FName TabID, FName InnerTabID, UCommonButtonBase TabButton); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB75A1000
		void OnContainerExpandedStateChanged__DelegateSignature(FName TabID, bool IsExpanded); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6086B00
		void OnInnerTabClicked__DelegateSignature(FName TabID, FName InnerTabID, UMVVMViewModelBase TabViewModel); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB71FC100
		void OnContainerTabGroupCreation__DelegateSignature(UWBP_UIKit_TabGroupCompact_Base_C TabGroupWidget); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB71F9000
		void OnInnerTabSelected__DelegateSignature(FName TabID, FName InnerTabID, UMVVMViewModelBase TabViewModel); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB608EC00
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_SideNavigation_Base.WBP_UIKit_SideNavigation_Base_C
	// Inherited from UWBP_UIKit_TabGroup_Base_C -> UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1C9 (0x9E9 - 0x820)
	class UWBP_UIKit_SideNavigation_Base_C : public UWBP_UIKit_TabGroup_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x820(0x8)
		FMulticastInlineDelegate OnSideNavigationSelectionChanged; // 0x828(0x10)
		FMulticastInlineDelegate OnSideNavigationTabClicked; // 0x838(0x10)
		FMulticastInlineDelegate OnSideNavigationInnerTabClicked; // 0x848(0x10)
		bool UseInitialSideNavigationTabs; // 0x858(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x859(0x7) UNKNOWN PROPERTY
		TArray InitialSideNavigationTabs; // 0x860(0x10)
		FName PreviousSelectedTab; // 0x870(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x874(0x4) UNKNOWN PROPERTY
		TMap TabContainers; // 0x878(0x50)
		UClass TabContainerClass; // 0x8C8(0x8)
		UClass InnerTabGroupClass; // 0x8D0(0x8)
		UClass InnerTabButtonClassOverride; // 0x8D8(0x8)
		bool SkipExpandAnimation; // 0x8E0(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x8E1(0x3) UNKNOWN PROPERTY
		float ExpandDuration; // 0x8E4(0x4)
		unsigned char UnknownData12_6[0x8]; // 0x8E8(0x8) UNKNOWN PROPERTY
		FSlateBrush InnerTabGroupBackround; // 0x8F0(0xB0)
		bool AllowMultipleExpandedContainers; // 0x9A0(0x1)
		bool ShouldWaitForInnerTabCallback; // 0x9A1(0x1)
		unsigned char UnknownData13_6[0x2]; // 0x9A2(0x2) UNKNOWN PROPERTY
		FName LastNotifiedSelectedTabID; // 0x9A4(0x4)
		FName LastNotifiedInnerTabID; // 0x9A8(0x4)
		EDescendantScrollDestination ScrollDestinationMouse; // 0x9AC(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x9AD(0x3) UNKNOWN PROPERTY
		float ScrollPaddingMouse; // 0x9B0(0x4)
		EDescendantScrollDestination ScrollDestinationGamepad; // 0x9B4(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x9B5(0x3) UNKNOWN PROPERTY
		float ScrollPaddingGamepad; // 0x9B8(0x4)
		bool SelectInnerTabOnContainerExpand; // 0x9BC(0x1)
		unsigned char UnknownData16_6[0x3]; // 0x9BD(0x3) UNKNOWN PROPERTY
		FMargin InnerTabGroupPadding; // 0x9C0(0x10)
		bool EnableCollapsedState; // 0x9D0(0x1)
		bool SideNavigationIsCollapsed; // 0x9D1(0x1)
		unsigned char UnknownData17_6[0x6]; // 0x9D2(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSideNavigationCollapsedStateChanged; // 0x9D8(0x10)
		bool AllowContainerInteractionOnGamepad; // 0x9E8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_SideNavigation_Base.WBP_UIKit_SideNavigation_Base_C");
			return ret;
		}

		void SelectSideNavigationViewModel(UMVVMViewModelBase TabViewModel, bool bSuppressClickFeedback, bool& Success); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5CE73F00
		void SelectSideNavigationTab(FName TabID, FName InnerTabID, bool bSuppressClickFeedback, bool& Success); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5CE74000
		void SetIsCollapsed(bool IsCollapsed, bool SkipAnimation); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5CE73E00
		void GetSideNavigationTabViewModel(FName TabID, FName InnerTabID, UMVVMViewModelBase& TabViewModel); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE71300
		void GetSideNavigationSelectedButtonBase(UCommonButtonBase& Button); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE71400
		void GetSideNavigationButtonBaseByViewModel(UMVVMViewModelBase TabViewModel, UCommonButtonBase& ButtonBase); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE71500
		void GetInnerTabIdAtIndex(FName& TabID, int32_t Index, FName& InnerTabID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE71800
		void GetInnerTabsCount(FName TabID, int32_t& Count); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE71700
		void GetInnerTabButton(FName TabID, FName InnerTabID, UCommonButtonBase& TabButton); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE71900
		void GetSelectedInnerTabID(FName TabID, FName& InnerTabID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE71600
		void IsTabContainerEmpty(FName TabID, bool& IsEmpty); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE70C00
		void IsTabContainerExpanded(FName TabID, bool& IsExpanded); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE70B00
		void NotifySelectionChanged(FName TabID, FName InnerTabID, UMVVMViewModelBase TabViewModel); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D5CE70900
		void ExpandContainer(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D5CE71A00
		bool ShouldSelectOnFocus(); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE73C00
		bool ShouldDisplaySelectionWhenNotExpanded(); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE73D00
		void HandleInputMethodChanged(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5CE71000
		void HandleContainerExpandedStateChanged(FName TabID, bool IsExpanded); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D5CE71100
		void HandleTabClick(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D5CE70F00
		void UnexpandOtherContainers(FName ExceptTabID); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5CE73A00
		void CheckTabChanged(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75AEF00
		void ClearTabContainerSelection(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75AED00
		void CopyParentTabGroupProps(UWBP_UIKit_TabGroupCompact_Base_C Target); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15DB75AEC00
		void InjectTabContainer(FName TabID, UWBP_UIKit_TabContainer_Base_C& TabContainerWidget); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5CE70D00
		void ClearSideNavigationTabs(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB75AEE00
		void PopulateSideNavigationTabs(TArray& Data); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5CE70200
		void CreateTabContainer(FName& TabID, UWBP_UIKit_TabContainer_Base_C& TabContainerWidget); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB75AEB00
		void GetTabContainer(FName& TabID, UWBP_UIKit_TabContainer_Base_C& TabContainerWidget); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D5CE71200
		void RefreshTabSelectableState(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent 0x15D5CE74200
		void AddSideNavigationInnerTab(UMVVMViewModelBase TabViewModel, FName TabID, FName InnerTabID, int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB75AF100
		void AddSideNavigationTab(UMVVMViewModelBase TabViewModel, FName TabID, int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB75AF000
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB75AE900
		void Event OnUIKitTabSelected(FName TabID, UMVVMViewModelBase TabVM); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE71C00
		void Event OnUIKitTabClicked(FName TabID, UMVVMViewModelBase TabVM); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE71D00
		void Event On Input Method Changed(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15DB75AE800
		void Event OnInnerTabSelected(FName TabID, FName InnerTabID, UMVVMViewModelBase TabViewModel); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE71F00
		void Event OnInnerTabClicked(FName TabID, FName InnerTabID, UMVVMViewModelBase TabViewModel); // Flags: BlueprintCallable|BlueprintEvent 0x15DB75AEA00
		void Event OnInnerTabGroupCreation(UWBP_UIKit_TabGroupCompact_Base_C TabGroupWidget); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE72000
		void Event OnTabContainerExpandedStateChanged(FName TabID, bool IsExpanded); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE71E00
		void LatentDeselectAllTabs(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE70A00
		void ScrollToWidget(UWidget Widget, bool IsDelayed); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE74100
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5CE70100
		void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x15D5CE70800
		void OnMouseLeave(FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x15D5CE70700
		void HandleTabCreation(FName TabNameID, UCommonButtonBase TabButton); // Flags: Event|Protected|BlueprintEvent 0x15D5CE70E00
		void Event OnInnerTabCreation(FName TabID, FName InnerTabID, UCommonButtonBase TabButton); // Flags: BlueprintCallable|BlueprintEvent 0x15D5CE72100
		void ExecuteUbergraph_WBP_UIKit_SideNavigation_Base(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D5CE71B00
		void OnSideNavigationCollapsedStateChanged__DelegateSignature(bool IsCollapsed); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5CE70600
		void OnSideNavigationInnerTabClicked__DelegateSignature(FName TabID, FName InnerTabID, UMVVMViewModelBase TabViewModel); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5CE70500
		void OnSideNavigationTabClicked__DelegateSignature(FName TabID, bool IsTabContainerExpanded, UMVVMViewModelBase TabViewModel); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5CE70300
		void OnSideNavigationSelectionChanged__DelegateSignature(FName TabID, FName InnerTabID, UMVVMViewModelBase TabViewModel); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D5CE70400
	};

}
