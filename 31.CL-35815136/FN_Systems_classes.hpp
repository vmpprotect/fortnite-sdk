#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Systems
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C
	// Inherited from UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x3 (0x2E3 - 0x2E0)
	class UWBP_UIKit_Block_Base_C : public UUIKitBlock	
	{
	public:
		bool IsSelectable; // 0x2E0(0x1)
		bool IsSelected; // 0x2E1(0x1)
		bool IsLocked; // 0x2E2(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C");
			return ret;
		}

		void SetBlockVisibility(bool Visible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsSelectable(bool Is Selectable); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetIsSelectable(bool& IsSelectable); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsLocked(bool Is Locked); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetIsLocked(bool& IsLocked); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsSelected(bool IsSelected); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetIsSelected(bool& IsSelected); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C
	// Inherited from UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x6D (0x350 - 0x2E3)
	class UWBP_UIKit_Block_Image_C : public UWBP_UIKit_Block_Base_C	
	{
	public:
		unsigned char UnknownData00_3[0x5]; // 0x2E3(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E8(0x8)
		UWidgetAnimation* Anim_SelectedDisabled_Transition; // 0x2F0(0x8)
		UWidgetAnimation* Anim_SelectedPressed_Transition; // 0x2F8(0x8)
		UWidgetAnimation* Anim_SelectedFocused_Transition; // 0x300(0x8)
		UWidgetAnimation* Anim_SelectedHovered_Transition; // 0x308(0x8)
		UWidgetAnimation* Anim_Selected_Transition; // 0x310(0x8)
		UWidgetAnimation* Anim_Disabled_Transition; // 0x318(0x8)
		UWidgetAnimation* Anim_Pressed_Transition; // 0x320(0x8)
		UWidgetAnimation* Anim_Focused_Transition; // 0x328(0x8)
		UWidgetAnimation* Anim_Hovered_Transition; // 0x330(0x8)
		UFortMobileImage* Image; // 0x338(0x8)
		UMaterialInstance* ImageMaterial; // 0x340(0x8)
		UMaterialInstanceDynamic* ImageMID; // 0x348(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C");
			return ret;
		}

		void RefreshImageMID(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSize(FVector2D Desired Size); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTextureWithParameter(FName ParameterName, UTexture2D* InTexture); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTexture(UTexture2D* InTexture); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMaterial(UMaterialInstance* InMaterial); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBrush(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnhoveredRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionHoveredRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Block_Image(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_BlockBackground_Base.WBP_UIKit_BlockBackground_Base_C
	// Inherited from UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x2D (0x310 - 0x2E3)
	class UWBP_UIKit_BlockBackground_Base_C : public UWBP_UIKit_Block_Base_C	
	{
	public:
		unsigned char UnknownData00_3[0x5]; // 0x2E3(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E8(0x8)
		UMaterialInstance* BackgroundMaterial; // 0x2F0(0x8)
		UMaterialInstanceDynamic* BackgroundDynamicMaterial; // 0x2F8(0x8)
		UMaterialInstance* OutlineMaterial; // 0x300(0x8)
		UMaterialInstanceDynamic* OutlineDynamicMaterial; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_BlockBackground_Base.WBP_UIKit_BlockBackground_Base_C");
			return ret;
		}

		void RefreshOutlineMID(UMaterialInstanceDynamic* Outline MID); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOutlineMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOutlineBrush(FSlateBrush& In Brush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshBackgroundMID(UMaterialInstanceDynamic* Background MID); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundBrush(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_BlockBackground_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C
	// Inherited from UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x370 - 0x310)
	class UWBP_UIKit_Block_BackgroundGeneric_C : public UWBP_UIKit_BlockBackground_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x8)
		UWidgetAnimation* Anim_SelectedDisabled_Transition; // 0x318(0x8)
		UWidgetAnimation* Anim_SelectedPressed_Transition; // 0x320(0x8)
		UWidgetAnimation* Anim_SelectedFocused_Transition; // 0x328(0x8)
		UWidgetAnimation* Anim_SelectedHovered_Transition; // 0x330(0x8)
		UWidgetAnimation* Anim_Selected_Transition; // 0x338(0x8)
		UWidgetAnimation* Anim_Disabled_Transition; // 0x340(0x8)
		UWidgetAnimation* Anim_Pressed_Transition; // 0x348(0x8)
		UWidgetAnimation* Anim_Focused_Transition; // 0x350(0x8)
		UWidgetAnimation* Anim_Hovered_Transition; // 0x358(0x8)
		UFortMobileImage* Fill; // 0x360(0x8)
		UFortMobileImage* Outline; // 0x368(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C");
			return ret;
		}

		void SetOutlineMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOutlineBrush(FSlateBrush& In Brush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundBrush(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnhoveredRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionHoveredRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Block_BackgroundGeneric(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_InputField_Background.WBP_UIKit_Block_InputField_Background_C
	// Inherited from UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x29 (0x339 - 0x310)
	class UWBP_UIKit_Block_InputField_Background_C : public UWBP_UIKit_BlockBackground_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x8)
		UWidgetAnimation* Anim_Disabled_Transition; // 0x318(0x8)
		UWidgetAnimation* Anim_Pressed_Transition; // 0x320(0x8)
		UWidgetAnimation* Anim_Focused_Transition; // 0x328(0x8)
		UImage* Backing; // 0x330(0x8)
		bool SelectionIsAvailable; // 0x338(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_InputField_Background.WBP_UIKit_Block_InputField_Background_C");
			return ret;
		}

		void SetCornerRadius(bool Radius in Pixels, double TopLeft, double TopRight, double BottomRight, double BottomLeft); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundBrush(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Block_InputField_Background(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C
	// Inherited from UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x3D (0x320 - 0x2E3)
	class UWBP_UIKit_Block_EditableText_C : public UWBP_UIKit_Block_Base_C	
	{
	public:
		unsigned char UnknownData00_3[0x5]; // 0x2E3(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E8(0x8)
		UWidgetAnimation* Anim_Disabled_Transition; // 0x2F0(0x8)
		UWidgetAnimation* Anim_Pressed_Transition; // 0x2F8(0x8)
		UWidgetAnimation* Anim_Focused_Transition; // 0x300(0x8)
		UWidgetAnimation* Anim_Hovered_Transition; // 0x308(0x8)
		UUIKitEditableText* EditableText; // 0x310(0x8)
		UMaterialInstanceDynamic* FontDynamicMaterial; // 0x318(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C");
			return ret;
		}

		void SetFilledState(bool IsEmpty); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMobileFontSizeMultiplier(float MobileFontSizeMultiplier); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetJustification(TEnumAsByte<ETextJustify> Justification); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMinDesiredWidth(double Min Width); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsPassword(bool IsPassword); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetReadOnly(bool IsReadOnly); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFontMaterial(UMaterialInstance* Material Instance); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFont(FSlateFontInfo Font); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHintText(FText Hint Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAddedToFocusPath(FFocusEvent InFocusEvent); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_Block_EditableText_EditableText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(FText& Text); // Flags: HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Block_EditableText(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C
	// Inherited from UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x6D (0x350 - 0x2E3)
	class UWBP_UIKit_Block_Text_C : public UWBP_UIKit_Block_Base_C	
	{
	public:
		unsigned char UnknownData00_3[0x5]; // 0x2E3(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E8(0x8)
		UWidgetAnimation* Anim_SelectedDisabled_Transition; // 0x2F0(0x8)
		UWidgetAnimation* Anim_SelectedPressed_Transition; // 0x2F8(0x8)
		UWidgetAnimation* Anim_SelectedFocused_Transition; // 0x300(0x8)
		UWidgetAnimation* Anim_SelectedHovered_Transition; // 0x308(0x8)
		UWidgetAnimation* Anim_Selected_Transition; // 0x310(0x8)
		UWidgetAnimation* Anim_Disabled_Transition; // 0x318(0x8)
		UWidgetAnimation* Anim_Pressed_Transition; // 0x320(0x8)
		UWidgetAnimation* Anim_Focused_Transition; // 0x328(0x8)
		UWidgetAnimation* Anim_Hovered_Transition; // 0x330(0x8)
		UCommonTextBlock* TextBlock; // 0x338(0x8)
		UMaterialInstanceDynamic* FontMID; // 0x340(0x8)
		UMaterialInstanceDynamic* OutlineMID; // 0x348(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C");
			return ret;
		}

		bool HasOutline(); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshOutlineMID(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshFontMID(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMobileFontSizeMultiplier(double MobileFontSizeMultiplier); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWrapping(bool IsAutoWrap, int32_t WrapTextAt); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetJustification(TEnumAsByte<ETextJustify> Justification); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTransformPolicy(ETextTransformPolicy Transform Policy); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOutlineSize(int32_t Size); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOutlineMaterial(UMaterialInstance* In Material); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFontMaterial(UMaterialInstance* In Material); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFont(FSlateFontInfo& Font); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetText(FText Text); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionPressedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnhoveredRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionHoveredRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionReleasedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Block_Text(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C
	// Inherited from UFortCTAButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40A (0x17FA - 0x13F0)
	class UWBP_UIKit_ButtonCTA_Base_C : public UFortCTAButton	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x13F0(0x8)
		UWidgetAnimation* Anim_Pressed_Base; // 0x13F8(0x8)
		UWBP_UIKit_Block_BackgroundWithOutline_C* Block_Background; // 0x1400(0x8)
		UWBP_UIKit_Block_Text_C* Block_Text; // 0x1408(0x8)
		UImage* HoldIcon; // 0x1410(0x8)
		UImage* HoldProgressBar; // 0x1418(0x8)
		UGridPanel* Prompt; // 0x1420(0x8)
		UGridPanel* Root; // 0x1428(0x8)
		USpacer* Spacer_BottomRight; // 0x1430(0x8)
		USpacer* Spacer_TopLeft; // 0x1438(0x8)
		UVerticalBox* texts; // 0x1440(0x8)
		FSlateFontInfo LargePrimaryFont; // 0x1448(0x58)
		FSlateFontInfo LargeSecondaryFont; // 0x14A0(0x58)
		FSlateFontInfo MediumPrimaryFont; // 0x14F8(0x58)
		FSlateFontInfo MeduimSecondaryFont; // 0x1550(0x58)
		FSlateFontInfo SmallPrimaryFont; // 0x15A8(0x58)
		FSlateFontInfo SmallSecondaryFont; // 0x1600(0x58)
		TEnumAsByte<E_UI_ButtonSize> ButtonSize; // 0x1658(0x1)
		bool OverrideSecondaryTextSize; // 0x1659(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x165A(0x6) UNKNOWN PROPERTY
		double OverrideSecondaryTextSizeMultiplier; // 0x1660(0x8)
		UMaterialInstance* BackgroundMaterial; // 0x1668(0x8)
		UMaterialInstance* BorderMaterial; // 0x1670(0x8)
		int32_t LargeHeight; // 0x1678(0x4)
		int32_t MediumHeight; // 0x167C(0x4)
		int32_t SmallHeight; // 0x1680(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1684(0x4) UNKNOWN PROPERTY
		UWBP_UIKit_Block_Text_C* Block_SecondaryText; // 0x1688(0x8)
		UWBP_UIKit_Block_Image_C* Block_Icon; // 0x1690(0x8)
		bool HasText; // 0x1698(0x1)
		bool HasIcon; // 0x1699(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x169A(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFocusChanged; // 0x16A0(0x10)
		double MobileFontSizeMultiplierLarge; // 0x16B0(0x8)
		double MobileFontSizeMultiplierMedium; // 0x16B8(0x8)
		double MobileFontSizeMultiplierSmall; // 0x16C0(0x8)
		int32_t MobileMinWidth; // 0x16C8(0x4)
		bool OverrideDefaultHeight; // 0x16CC(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x16CD(0x3) UNKNOWN PROPERTY
		int32_t MobileMinHeight; // 0x16D0(0x4)
		int32_t MobileLargeHeight; // 0x16D4(0x4)
		int32_t MobileMediumHeight; // 0x16D8(0x4)
		int32_t MobileSmallHeight; // 0x16DC(0x4)
		double MobileFontSizeMultiplierSecondaryLarge; // 0x16E0(0x8)
		double MobileFontSizeMultiplierSecondaryMedium; // 0x16E8(0x8)
		double MobileFontSizeMultiplierSecondarySmall; // 0x16F0(0x8)
		bool OverrideDefaultMobileFontSizeMultiplier; // 0x16F8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x16F9(0x7) UNKNOWN PROPERTY
		double MobileFontSizeMultiplierOverride; // 0x1700(0x8)
		bool LastEnabledEvent; // 0x1708(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x1709(0x7) UNKNOWN PROPERTY
		double FadeInTime; // 0x1710(0x8)
		double FadeOutTime; // 0x1718(0x8)
		USoundBase* PressedSound; // 0x1720(0x8)
		USoundBase* HoveredSound; // 0x1728(0x8)
		USoundBase* HoldPressedSound; // 0x1730(0x8)
		USoundBase* HoldSound; // 0x1738(0x8)
		USoundBase* HoldReleasedSound; // 0x1740(0x8)
		USoundBase* HoldCompletedSound; // 0x1748(0x8)
		UAudioComponent* HoldSoundAudioComponent; // 0x1750(0x8)
		UAudioComponent* PressedSoundAudioComponent; // 0x1758(0x8)
		ECommonInputType CurrentInputType; // 0x1760(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x1761(0x7) UNKNOWN PROPERTY
		UMaterialInstance* IconMaterial; // 0x1768(0x8)
		UTexture2D* Icon; // 0x1770(0x8)
		bool IconBeforeText; // 0x1778(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x1779(0x7) UNKNOWN PROPERTY
		FVector2D LargeIconSize; // 0x1780(0x10)
		FVector2D MediumIconSize; // 0x1790(0x10)
		FVector2D SmallIconSize; // 0x17A0(0x10)
		FMulticastInlineDelegate OnHoldCompleted; // 0x17B0(0x10)
		double MobileFontSizeMultiplierSecondaryOverride; // 0x17C0(0x8)
		double CurrentHoldProgress; // 0x17C8(0x8)
		UMaterialInstanceDynamic* HoldProgressMID; // 0x17D0(0x8)
		FMulticastInlineDelegate OnHoldActionProgress; // 0x17D8(0x10)
		FMargin IconPadding; // 0x17E8(0x10)
		bool EnableOnWidgetStyled; // 0x17F8(0x1)
		bool IsDarkMode; // 0x17F9(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C");
			return ret;
		}

		void IsHoldable(bool& Holdable); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Icon Dark Mode(bool IsDark); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PresetForDesignTime(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeOutSound(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShouldPlayHoldSound(bool& Holdable); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySoundHoldCompleted(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopSoundHoldReleased(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySoundHoldPressed(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySoundPressed(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySoundHovered(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBackground(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateButtonPadding(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateButtonSIze(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateFonts(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHoldPercentage(double HeldPercentageValue); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBorderMaterial(UMaterialInstance* BorderMaterial, bool IsAdditive); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsPromptIcon(bool& Valid); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetButtonIsEnabled(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowPromptFallbackAction(bool Show); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePrompt(ECommonInputType InputType); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPrompt(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundMaterial(UMaterialInstance* Background); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveBlock(UWBP_UIKit_Block_Base_C* bLock); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddIconBlock(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitIcon(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddSecondTextBlock(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSecondText_BP(FText SecondaryText); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetText_BP(FText Text); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeButton(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetButtonState(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowInputActionText(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconMaterial(UMaterialInstance* IconMaterial); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIcon(UObject* Icon); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetButtonSize(TEnumAsByte<E_UI_ButtonSize> ButtonSize); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFocusLost(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFocusReceived(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EventOnFocusedManually(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_SetSecondaryText(FText& ButtonSecondaryText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_SetText(FText& ButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputActionUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActionProgress(float HeldPercent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputActionTriggered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnPressed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHoldActionProgress__DelegateSignature(double HeldPercent); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHoldCompleted__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFocusChanged__DelegateSignature(bool HasFocus); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/StatusIndicator/WBP_UIKit_StatusIndicator_Base.WBP_UIKit_StatusIndicator_Base_C
	// Inherited from UFortBangWrapper_NUI -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xEC (0x3DC - 0x2F0)
	class UWBP_UIKit_StatusIndicator_Base_C : public UFortBangWrapper_NUI	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F0(0x8)
		UWidgetAnimation* Anim_Intro; // 0x2F8(0x8)
		UImage* Image_BackgroundWithOutline; // 0x300(0x8)
		UGridPanel* Root; // 0x308(0x8)
		int32_t Count; // 0x310(0x4)
		TEnumAsByte<E_UI_StatusIndicator_Configuration> Configuration; // 0x314(0x1)
		TEnumAsByte<E_UI_StatusIndicator_Type> Type; // 0x315(0x1)
		bool OverrideStatusIndicatorVisibility; // 0x316(0x1)
		TEnumAsByte<E_UI_StatusIndicator_Size> IconSize; // 0x317(0x1)
		UObject* Icon; // 0x318(0x8)
		bool OverrideStatusIndicatorState; // 0x320(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x321(0x7) UNKNOWN PROPERTY
		UCommonTextBlock* Indicator_Text; // 0x328(0x8)
		UImage* Indicator_Icon; // 0x330(0x8)
		UMaterialInstanceDynamic* BackgroundDynamicMaterial; // 0x338(0x8)
		UMaterialInterface* BackgroundMaterial; // 0x340(0x8)
		FSlateFontInfo Font; // 0x348(0x58)
		float SizeDot; // 0x3A0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3A4(0x4) UNKNOWN PROPERTY
		double SizeNumber; // 0x3A8(0x8)
		double SizeIconCompact; // 0x3B0(0x8)
		double SizeIconDefault; // 0x3B8(0x8)
		double MobileIconSizeMultiplierCompact; // 0x3C0(0x8)
		double MobileIconSizeMultipierDefault; // 0x3C8(0x8)
		double MobileIconSizeMultiplierDot; // 0x3D0(0x8)
		float Mobile_Font_Size_MultiplierNumeric; // 0x3D8(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/StatusIndicator/WBP_UIKit_StatusIndicator_Base.WBP_UIKit_StatusIndicator_Base_C");
			return ret;
		}

		void Select Float with Boolean(double FALSE, double TRUE, bool Boolean, double& Output); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Fotmat Text(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeStatusIndicator(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIcon(UObject* IconAsset); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PassBangTypeFromBP(EFortBangType EBangType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSize(TEnumAsByte<E_UI_StatusIndicator_Size> IconSize); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIndicatorType(TEnumAsByte<E_UI_StatusIndicator_Type> IndicatorType); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerReset(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerIntro(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIndicatorConfiguration(int32_t InCount, TEnumAsByte<E_UI_StatusIndicator_Configuration> IndicatorConfig); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStopCallout(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartCallout(FName TutorialObjectiveName, ETutorialType TutorialType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBangStateChanged(bool bEnabled, int32_t Count); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OverrideCount(int32_t Count); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_StatusIndicator_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C
	// Inherited from UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1DD (0x1585 - 0x13A8)
	class UWBP_UIKit_InputField_Base_C : public UUIKitModularButton	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x13B0(0x8)
		UWBP_UIKit_Block_EditableText_C* Block_EditableText; // 0x13B8(0x8)
		UWBP_UIKit_Block_Outline_C* Block_Outline; // 0x13C0(0x8)
		UGridPanel* Content; // 0x13C8(0x8)
		UGridPanel* Main; // 0x13D0(0x8)
		USizeBox* SizeBox; // 0x13D8(0x8)
		UNamedSlot* Slot_Main; // 0x13E0(0x8)
		FMulticastInlineDelegate OnTextChanged; // 0x13E8(0x10)
		FMulticastInlineDelegate OnTextCommited; // 0x13F8(0x10)
		FText Text; // 0x1408(0x10)
		double Mobile_Text_Size_Multiplier; // 0x1418(0x8)
		FText Hint_Text; // 0x1420(0x10)
		FSlateFontInfo Font; // 0x1430(0x58)
		TEnumAsByte<ETextJustify> TextJustification; // 0x1488(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1489(0x3) UNKNOWN PROPERTY
		FMargin TextPadding; // 0x148C(0x10)
		bool IsPassword; // 0x149C(0x1)
		bool IsReadOnly; // 0x149D(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x149E(0x2) UNKNOWN PROPERTY
		FS_UI_BoolFloat WidthOverride; // 0x14A0(0x10)
		FS_UI_BoolFloat HeightOverride; // 0x14B0(0x10)
		bool UseBackground; // 0x14C0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x14C1(0x7) UNKNOWN PROPERTY
		UWBP_UIKit_BlockBackground_Base_C* Block_Background; // 0x14C8(0x8)
		UClass* BackgroundClass; // 0x14D0(0x8)
		UMaterialInstance* BackgroundMaterial; // 0x14D8(0x8)
		bool UseIcon; // 0x14E0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x14E1(0x7) UNKNOWN PROPERTY
		UClass* IconClass; // 0x14E8(0x8)
		UWBP_UIKit_Block_Image_C* Block_Icon; // 0x14F0(0x8)
		UTexture2D* Icon; // 0x14F8(0x8)
		FS_UI_Image IconProperties; // 0x1500(0x58)
		bool UsePixels; // 0x1558(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x1559(0x7) UNKNOWN PROPERTY
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

		void SetInputIconDarkMode(bool UseDark); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Is Text Empty(bool IsEmpty); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateIconVisibility(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMaxTextCharacters(bool& IsTextTrimmed); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PresetForDesignTime(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconProperties(FS_UI_Image Data); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddIcon(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridNudge(UWidget* Widget, FVector2D Nudge); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridPadding(UWidget* Widget, FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridLayer(UWidget* Widget, int32_t Layer); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridAlignment(UWidget* Widget, TEnumAsByte<EHorizontalAlignment> Horizontal, TEnumAsByte<EVerticalAlignment> Vertical); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridColumnAndRow(UWidget* Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPlacement(UWidget* Widget, FS_UI_Placement Placement); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Cleanup(UWidget* Widget); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddBackground(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetEditableText(bool SetTextFields); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSize(FS_UI_BoolFloat Width, FS_UI_BoolFloat Height); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIcon(UTexture2D* Icon); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHintText(FText Hint Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextChanged_Event(FText& Text); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextCommitted_Event(FText& Text, TEnumAsByte<ETextCommit> CommitMethod); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnPressed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_ButtonGeneric_Base_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputIconUpdated__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_InputField_Base(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextCommited__DelegateSignature(FText Text, TEnumAsByte<ETextCommit> Commit method); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextChanged__DelegateSignature(FText Text); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Backplate/WBP_UIKit_Backplate_Base.WBP_UIKit_Backplate_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x328 - 0x2B0)
	class UWBP_UIKit_Backplate_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UImage* Backplate; // 0x2B8(0x8)
		TEnumAsByte<E_UI_BackplateBrightness> Brightness; // 0x2C0(0x1)
		TEnumAsByte<E_UI_BackplateCornerRadius> CornerRadius; // 0x2C1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2C2(0x6) UNKNOWN PROPERTY
		UMaterialInstance* BackplateMaterial; // 0x2C8(0x8)
		FS_UI_BackplateCornerRadiusValues Corners; // 0x2D0(0x28)
		FS_UI_BackplateCornerRadiusValues MobileCorners; // 0x2F8(0x28)
		UMaterialInstanceDynamic* BackplateMID; // 0x320(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Backplate/WBP_UIKit_Backplate_Base.WBP_UIKit_Backplate_Base_C");
			return ret;
		}

		void RefreshBackplateMID(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackplateMaterial(UMaterialInstance* Material Instance); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBrightness(TEnumAsByte<E_UI_BackplateBrightness> Brightness); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCornerRadius(TEnumAsByte<E_UI_BackplateCornerRadius> Corner Radius); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Backplate_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C
	// Inherited from UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x398 (0x1740 - 0x13A8)
	class UWBP_UIKit_ButtonGeneric_Base_C : public UUIKitModularButton	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x13B0(0x8)
		UWidgetAnimation* Anim_Focused_Base; // 0x13B8(0x8)
		UImage* HoldIcon; // 0x13C0(0x8)
		UImage* HoldProgressBar; // 0x13C8(0x8)
		UGridPanel* Main; // 0x13D0(0x8)
		UStackBox* Main_Stack; // 0x13D8(0x8)
		USizeBox* Main_StackSize; // 0x13E0(0x8)
		UGridPanel* Prompt; // 0x13E8(0x8)
		UGridPanel* Root; // 0x13F0(0x8)
		UNamedSlot* Slot_Background; // 0x13F8(0x8)
		UNamedSlot* Slot_Main; // 0x1400(0x8)
		UCommonVisualAttachment* VisualAttachment; // 0x1408(0x8)
		TEnumAsByte<EHorizontalAlignment> ContentHorizontalAlignment; // 0x1410(0x1)
		TEnumAsByte<EVerticalAlignment> ContentVerticalAlignment; // 0x1411(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x1412(0x2) UNKNOWN PROPERTY
		FMargin ButtonPadding; // 0x1414(0x10)
		unsigned char UnknownData02_6[0x4]; // 0x1424(0x4) UNKNOWN PROPERTY
		double FadeInTime; // 0x1428(0x8)
		double FadeOutTime; // 0x1430(0x8)
		USoundBase* PressedSound; // 0x1438(0x8)
		USoundBase* HoveredSound; // 0x1440(0x8)
		USoundBase* HoldPressedSound; // 0x1448(0x8)
		USoundBase* HoldSound; // 0x1450(0x8)
		USoundBase* HoldReleasedSound; // 0x1458(0x8)
		USoundBase* HoldCompletedSound; // 0x1460(0x8)
		UAudioComponent* HoldSoundAudioComponent; // 0x1468(0x8)
		UAudioComponent* PressedSoundAudioComponent; // 0x1470(0x8)
		FText Text; // 0x1478(0x10)
		bool UseIconBlock; // 0x1488(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1489(0x7) UNKNOWN PROPERTY
		UClass* IconClass; // 0x1490(0x8)
		UMaterialInstance* IconMaterial; // 0x1498(0x8)
		UTexture2D* Icon; // 0x14A0(0x8)
		FVector2D IconSize; // 0x14A8(0x10)
		TEnumAsByte<EHorizontalAlignment> IconHorizontalAlignment; // 0x14B8(0x1)
		TEnumAsByte<EVerticalAlignment> IconVerticalAlignment; // 0x14B9(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x14BA(0x2) UNKNOWN PROPERTY
		FMargin IconPadding; // 0x14BC(0x10)
		bool UseBackgroundBlock; // 0x14CC(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x14CD(0x3) UNKNOWN PROPERTY
		UClass* BackgroundClass; // 0x14D0(0x8)
		UMaterialInstance* BackgroundMaterial; // 0x14D8(0x8)
		UMaterialInstance* OutlineMaterial; // 0x14E0(0x8)
		TEnumAsByte<EHorizontalAlignment> PromptHorizontalAlignment; // 0x14E8(0x1)
		TEnumAsByte<EVerticalAlignment> PromptVerticalAlignment; // 0x14E9(0x1)
		bool ShouldPromptImpactLayout; // 0x14EA(0x1)
		unsigned char UnknownData06_6[0x1]; // 0x14EB(0x1) UNKNOWN PROPERTY
		FMargin PromptPadding; // 0x14EC(0x10)
		unsigned char UnknownData07_6[0x4]; // 0x14FC(0x4) UNKNOWN PROPERTY
		FVector2D PromptNudge; // 0x1500(0x10)
		double MobileFontSizeMultiplier; // 0x1510(0x8)
		bool OverrideDefaultMobileFontSizeMultiplier; // 0x1518(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x1519(0x7) UNKNOWN PROPERTY
		double MobileFontSizeMultiplierOverride; // 0x1520(0x8)
		int32_t MobileMinWidth; // 0x1528(0x4)
		int32_t MobileMinHeight; // 0x152C(0x4)
		FMulticastInlineDelegate OnHoldCompleted; // 0x1530(0x10)
		UMaterialInstanceDynamic* InputActionProgressMaterial; // 0x1540(0x8)
		UWBP_UIKit_BlockBackground_Base_C* Block_Background; // 0x1548(0x8)
		UWBP_UIKit_Block_Text_C* Block_Text; // 0x1550(0x8)
		UWBP_UIKit_Block_Text_C* Block_SecondText; // 0x1558(0x8)
		UWBP_UIKit_Block_Image_C* Block_Icon; // 0x1560(0x8)
		UWBP_UIKit_StatusIndicator_C* StatusIndicator; // 0x1568(0x8)
		ECommonInputType CurrentInputType; // 0x1570(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x1571(0x7) UNKNOWN PROPERTY
		double CurrentHoldProgress; // 0x1578(0x8)
		bool UseTextBlock; // 0x1580(0x1)
		unsigned char UnknownData10_6[0x7]; // 0x1581(0x7) UNKNOWN PROPERTY
		UClass* TextClass; // 0x1588(0x8)
		FSlateFontInfo Font; // 0x1590(0x58)
		TEnumAsByte<E_UI_Alignment> TextBlockAlignment; // 0x15E8(0x1)
		bool IsTextOutsideBackground; // 0x15E9(0x1)
		bool ShouldTextImpactLayout; // 0x15EA(0x1)
		ETextTransformPolicy TextTransformPolicy; // 0x15EB(0x1)
		FMargin TextPadding; // 0x15EC(0x10)
		unsigned char UnknownData11_6[0x4]; // 0x15FC(0x4) UNKNOWN PROPERTY
		FVector2D TextNudge; // 0x1600(0x10)
		FMargin MobileButtonPadding; // 0x1610(0x10)
		bool IsInstantSelection; // 0x1620(0x1)
		bool LastEnabledEvent; // 0x1621(0x1)
		unsigned char UnknownData12_6[0x6]; // 0x1622(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHoldActionProgress; // 0x1628(0x10)
		FMulticastInlineDelegate OnReleased; // 0x1638(0x10)
		bool EnableFocusedSelectedState; // 0x1648(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x1649(0x7) UNKNOWN PROPERTY
		FVector2D VisualAttachmentContentAnchor; // 0x1650(0x10)
		bool UseStatusIndicator; // 0x1660(0x1)
		unsigned char UnknownData14_6[0x7]; // 0x1661(0x7) UNKNOWN PROPERTY
		UClass* StatusIndicatorClass; // 0x1668(0x8)
		TEnumAsByte<E_UI_StatusIndicator_Configuration> Configuration; // 0x1670(0x1)
		TEnumAsByte<E_UI_StatusIndicator_Type> Type; // 0x1671(0x1)
		TEnumAsByte<EHorizontalAlignment> StatusIndicatorHorizontalAlignment; // 0x1672(0x1)
		TEnumAsByte<EVerticalAlignment> StatusIndicatorVerticalAlignment; // 0x1673(0x1)
		FMargin StatusIndicatorPadding; // 0x1674(0x10)
		unsigned char UnknownData15_6[0x4]; // 0x1684(0x4) UNKNOWN PROPERTY
		FVector2D StatusIndicatorNudge; // 0x1688(0x10)
		bool UseSecondTextBlock; // 0x1698(0x1)
		unsigned char UnknownData16_6[0x7]; // 0x1699(0x7) UNKNOWN PROPERTY
		UClass* SecondTextClass; // 0x16A0(0x8)
		FText SecondText; // 0x16A8(0x10)
		FSlateFontInfo SecondFont; // 0x16B8(0x58)
		TEnumAsByte<E_UI_Alignment> SecondTextBlockAlignment; // 0x1710(0x1)
		ETextTransformPolicy SecondTextTransformPolicy; // 0x1711(0x1)
		unsigned char UnknownData17_6[0x2]; // 0x1712(0x2) UNKNOWN PROPERTY
		FMargin SecondTextPadding; // 0x1714(0x10)
		TEnumAsByte<ETextJustify> TextJustification; // 0x1724(0x1)
		TEnumAsByte<ETextJustify> TextSecondJustification; // 0x1725(0x1)
		TEnumAsByte<EHorizontalAlignment> VisualAttachmentHorizontalAlignment; // 0x1726(0x1)
		TEnumAsByte<EVerticalAlignment> VisualAttachmentVerticalAlignment; // 0x1727(0x1)
		bool UseDisabledVisualsOnLocked; // 0x1728(0x1)
		TEnumAsByte<E_UI_StatusIndicator_Size> Icon_Size; // 0x1729(0x1)
		bool UseDarkInputIcon; // 0x172A(0x1)
		unsigned char UnknownData18_6[0x5]; // 0x172B(0x5) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnBlockTextSet; // 0x1730(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C");
			return ret;
		}

		void SetInputIconDarkMode(bool UseDark); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Language Direction(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetButtonIsEnabled(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetButtonState(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RequestInstantSelection(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetButtonPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetButtonContentAlignment(TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetButtonMinSize(int32_t Min Width, int32_t Min Height); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeOutSound(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySoundHoldCompleted(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySoundHoldReleased(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySoundHoldPressed(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySoundPressed(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySoundHovered(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PresetForDesignTime(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsPromptHoldable(bool& Holdable); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsPromptIcon(bool& Valid); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowPromptFallbackAction(bool Show); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHoldPercentage(double HoldPercentage); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBlocksIsSelected(bool IsSelected); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearPrompt(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePrompt(ECommonInputType InputType); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPrompt(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddStatusIndicator(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveIconBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetBackgroundDynamicMaterial(UMaterialInstanceDynamic* Dynamic Material); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateInputPrompt(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateStatusIndicator(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBackground(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundMaterials(UMaterialInstance* Background MI, UMaterialInstance* Outline MI); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetStatusIndicatorConfiguration(TEnumAsByte<E_UI_StatusIndicator_Configuration> Configuration, int32_t Count); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetStatusIndicatorType(TEnumAsByte<E_UI_StatusIndicator_Type> Type); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetStatusIndicator(EFortBangType BangType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconAlignment(TEnumAsByte<EHorizontalAlignment> Horizontal, TEnumAsByte<EVerticalAlignment> Vertical); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddIconBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddSecondTextBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddTextBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddBackground(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateIcon(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSecondText(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateText(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateButton(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconSize(FVector2D Icon); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconMaterial(UMaterialInstance* Material Instance); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconTexture(UTexture2D* Icon); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIcon(UObject* Icon); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFont(FSlateFontInfo In Font); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTextNudge(FVector2D TextNudge); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTextPadding(FMargin TextPadding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPreviewData(UMVVMViewModelBase* VM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetData(UUIKitSelectableButtonViewModel* VM Button); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActionProgress(float HeldPercent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputActionTriggered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnPressed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnLockedChanged(bool bIsLocked); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_UIKit_ButtonGeneric_Base_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputIconUpdated__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ButtonGeneric_Base(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBlockTextSet__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReleased__DelegateSignature(UWBP_UIKit_ButtonGeneric_Base_C* Button); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHoldActionProgress__DelegateSignature(double HoldPercentage); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHoldCompleted__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_Divider_Base.WBP_UIKit_Divider_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x2F0 - 0x2B0)
	class UWBP_UIKit_Divider_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UImage* DividerBar; // 0x2B8(0x8)
		FLinearColor Div_Color_and_Opacity; // 0x2C0(0x10)
		double Div_Width; // 0x2D0(0x8)
		FMargin Div_Padding; // 0x2D8(0x10)
		double Div_Width_Mobile; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_Divider_Base.WBP_UIKit_Divider_Base_C");
			return ret;
		}

		void SetMobileStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDividerPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDividerSpacing(double Spacing, bool IsVertical); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDividerOrientation(bool IsVertical); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Divider_Base(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x41 (0x2F1 - 0x2B0)
	class UWBP_UIKit_Scrim_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UWidgetAnimation* Anim_FadeOut; // 0x2B8(0x8)
		UWidgetAnimation* Anim_FadeIn; // 0x2C0(0x8)
		UButton* ClickCatcher; // 0x2C8(0x8)
		UImage* OverlayBlur; // 0x2D0(0x8)
		UPostBufferUpdate* PostBufferUpdate; // 0x2D8(0x8)
		UWBP_CaptureForPostBufferUpdate_C* PostBufferUpdate_UpdateBacktoDefault; // 0x2E0(0x8)
		double Blur; // 0x2E8(0x8)
		bool UseClickCatcher; // 0x2F0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C");
			return ret;
		}

		void SetClickCatch(bool Enable); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDimMaterial(UMaterialInstance* Material Instance); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDimColor(FLinearColor Color); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBlur(float Blur Strength); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeOut(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeIn(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Scrim(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_Tabs_Base.WBP_UIKit_Tabs_Base_C
	// Inherited from UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x234 (0x71C - 0x4E8)
	class UWBP_UIKit_Tabs_Base_C : public UUIKitTabGroup	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4E8(0x8)
		UWidgetAnimation* Anim_PromptSpaceChange; // 0x4F0(0x8)
		UGridPanel* Main; // 0x4F8(0x8)
		UGridPanel* Next_Prompt; // 0x500(0x8)
		USizeBox* Next_SizeBox; // 0x508(0x8)
		USpacer* Next_Spacer; // 0x510(0x8)
		UCommonActionWidget* NextTabAction; // 0x518(0x8)
		UGridPanel* Prev_Prompt; // 0x520(0x8)
		USizeBox* Prev_SizeBox; // 0x528(0x8)
		USpacer* Prev_Spacer; // 0x530(0x8)
		UCommonActionWidget* PrevTabAction; // 0x538(0x8)
		UGridPanel* Root; // 0x540(0x8)
		UNamedSlot* Slot_Root; // 0x548(0x8)
		UNamedSlot* Slot_Tabs; // 0x550(0x8)
		UGridPanel* TabsContainer; // 0x558(0x8)
		FName InitialSelectedTabID; // 0x560(0x4)
		int32_t InitialSelectedTabIndex; // 0x564(0x4)
		bool IsVertical; // 0x568(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x569(0x7) UNKNOWN PROPERTY
		UClass* ButtonClass; // 0x570(0x8)
		int32_t MinButtonWidth; // 0x578(0x4)
		int32_t MinButtonHeight; // 0x57C(0x4)
		TEnumAsByte<EHorizontalAlignment> ButtonHorizontalAlignment; // 0x580(0x1)
		TEnumAsByte<EVerticalAlignment> ButtonVerticalAlignment; // 0x581(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x582(0x6) UNKNOWN PROPERTY
		double TabSpacing; // 0x588(0x8)
		FVector2D IconSize; // 0x590(0x10)
		bool IsNaturalNavigation; // 0x5A0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x5A1(0x7) UNKNOWN PROPERTY
		FDataTableRowHandle Bumper_NextTab; // 0x5A8(0x10)
		FDataTableRowHandle Bumper_PrevTab; // 0x5B8(0x10)
		FDataTableRowHandle Trigger_NextTab; // 0x5C8(0x10)
		FDataTableRowHandle Trigger_PrevTab; // 0x5D8(0x10)
		FDataTableRowHandle BumperAndMouseScroll_NextTab; // 0x5E8(0x10)
		FDataTableRowHandle BumperAndMouseScroll_PrevTab; // 0x5F8(0x10)
		FDataTableRowHandle TriggerAndMouseScroll_NextTab; // 0x608(0x10)
		FDataTableRowHandle TriggerAndMouseScroll_PrevTab; // 0x618(0x10)
		TEnumAsByte<E_UI_TabsInputActionType> InputActions; // 0x628(0x1)
		bool InputActionsWithMouseScroll; // 0x629(0x1)
		TEnumAsByte<EHorizontalAlignment> NextPromptHorizontalAlignment; // 0x62A(0x1)
		TEnumAsByte<EVerticalAlignment> NextPromptVerticalAlignment; // 0x62B(0x1)
		bool HidePrompts; // 0x62C(0x1)
		bool HideMouseAndKeyboardPrompts; // 0x62D(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x62E(0x2) UNKNOWN PROPERTY
		double ReservedPromptSpace; // 0x630(0x8)
		bool AnimateReservedPromptSpace; // 0x638(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x639(0x7) UNKNOWN PROPERTY
		double TimeToHidePrompts; // 0x640(0x8)
		double TimeToShowPrompts; // 0x648(0x8)
		FMargin NextPromptPadding; // 0x650(0x10)
		TEnumAsByte<E_UI_Alignment> SelectionAlignment; // 0x660(0x1)
		bool UseDividers; // 0x661(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x662(0x6) UNKNOWN PROPERTY
		UClass* DividerClass; // 0x668(0x8)
		double DividerSpacing; // 0x670(0x8)
		bool IsPromptsVisible; // 0x678(0x1)
		TEnumAsByte<EHorizontalAlignment> TabGroupHorizontalAlignment; // 0x679(0x1)
		TEnumAsByte<EVerticalAlignment> TabGroupVerticalAlignment; // 0x67A(0x1)
		unsigned char UnknownData06_6[0x1]; // 0x67B(0x1) UNKNOWN PROPERTY
		FMargin TabGroupPadding; // 0x67C(0x10)
		unsigned char UnknownData07_6[0x4]; // 0x68C(0x4) UNKNOWN PROPERTY
		UWBP_UIKit_Backplate_Base_C* ContentBackplate; // 0x690(0x8)
		bool UseBackplate; // 0x698(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x699(0x7) UNKNOWN PROPERTY
		UClass* BackplateClass; // 0x6A0(0x8)
		TEnumAsByte<E_UI_BackplateBrightness> BackplateBrightness; // 0x6A8(0x1)
		TEnumAsByte<E_UI_BackplateCornerRadius> BackplateCornerRadius; // 0x6A9(0x1)
		unsigned char UnknownData09_6[0x6]; // 0x6AA(0x6) UNKNOWN PROPERTY
		UWBP_UIKit_Backplate_Base_C* PrevPromptBackplate; // 0x6B0(0x8)
		UWBP_UIKit_Backplate_Base_C* NextPromptBackplate; // 0x6B8(0x8)
		UWBP_UIKit_Divider_Base_C* ContentDivider; // 0x6C0(0x8)
		FName CurrentSubGroupID; // 0x6C8(0x4)
		int32_t DividersCount; // 0x6CC(0x4)
		bool NoSpacingAfterDivider; // 0x6D0(0x1)
		bool UsePromptBackplate; // 0x6D1(0x1)
		unsigned char UnknownData10_6[0x6]; // 0x6D2(0x6) UNKNOWN PROPERTY
		UClass* PromptsBackplateClass; // 0x6D8(0x8)
		TEnumAsByte<E_UI_BackplateBrightness> PromptBackplateBrightness; // 0x6E0(0x1)
		TEnumAsByte<E_UI_BackplateCornerRadius> PromptBackplateCornerRadius; // 0x6E1(0x1)
		TEnumAsByte<EHorizontalAlignment> PrevPromptHorizontalAlignment; // 0x6E2(0x1)
		TEnumAsByte<EVerticalAlignment> PrevPromptVerticalAlignment; // 0x6E3(0x1)
		FMargin PrevPromptPadding; // 0x6E4(0x10)
		unsigned char UnknownData11_6[0x4]; // 0x6F4(0x4) UNKNOWN PROPERTY
		double PromptBackplateMinWidth; // 0x6F8(0x8)
		double PromptBackplateMinHeight; // 0x700(0x8)
		bool PromptsInsideTabsBackplate; // 0x708(0x1)
		ECommonInputType CurrentInputType; // 0x709(0x1)
		unsigned char UnknownData12_6[0x2]; // 0x70A(0x2) UNKNOWN PROPERTY
		FMargin DividerPadding; // 0x70C(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_Tabs_Base.WBP_UIKit_Tabs_Base_C");
			return ret;
		}

		void SequenceEvent__ENTRYPOINTWBP_UIKit_Tabs_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SequenceEvent__ENTRYPOINTWBP_UIKit_Tabs_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SequenceEvent__ENTRYPOINTWBP_UIKit_Tabs_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetButtonClass(UUIKitTabGroupButtonViewModel* TabVM, UClass* ButtonClass); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearTabGroup(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackplateProperties(UWBP_UIKit_Backplate_Base_C* Backplate, TEnumAsByte<E_UI_BackplateBrightness> Brightness, TEnumAsByte<E_UI_BackplateCornerRadius> Corner Radius); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddBackplate(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddButtonToGrid(UWidget* Widget, int32_t Index); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddDividerToGrid(UWBP_UIKit_Divider_Base_C* Divider, int32_t Index); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PresetForDesignTime(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Cleanup(UWidget* Widget); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridNudge(UWidget* Widget, FVector2D Nudge); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetInputActionsType(TEnumAsByte<E_UI_TabsInputActionType> InputActions, bool InputActionsWithMouseScroll); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridPadding(UWidget* Widget, FMargin Padding); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridLayer(UWidget* Widget, int32_t Layer); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridAlignment(UWidget* Widget, TEnumAsByte<EHorizontalAlignment> Horizontal, TEnumAsByte<EVerticalAlignment> Vertical); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridColumnAndRow(UWidget* Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPlacement(UWidget* Widget, FS_UI_Placement Placement); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddDivider(int32_t Index, FName SubGroup); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OverrideInputActions(FDataTableRowHandle Next Tab, FDataTableRowHandle PreviousTab); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPromptsVisibility(bool ShowPrompts); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePromptsVisibility(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Tabs Data(TArray<UUIKitTabGroupButtonViewModel*>& InTabs Data); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateInputActions(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupTabButton(FName Tab ID, UCommonButtonBase* CreatedButtonReference); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateTabLayout(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RestoreTabSelection(FName TabNameID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Trigger_End(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Trigger_Start(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTabCreation(FName TabNameID, UCommonButtonBase* TabButton); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Repeater_PromptSpaceChange(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Input Method Changed(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Tabs_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x56C (0x81C - 0x2B0)
	class UWBP_UIKit_Dialog_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UUIKitDialogViewModel* UIKitDialogViewModel; // 0x2B8(0x8)
		UWidgetAnimation* Anim_OnDeactivate_Base; // 0x2C0(0x8)
		UWidgetAnimation* Anim_OnActivate_Base; // 0x2C8(0x8)
		UHorizontalBox* ButtonsContainer; // 0x2D0(0x8)
		UGridPanel* Content; // 0x2D8(0x8)
		UGridPanel* Main; // 0x2E0(0x8)
		UWBP_CaptureForPostBufferUpdate_C* PostBufferUpdate_Content; // 0x2E8(0x8)
		UGridPanel* Root; // 0x2F0(0x8)
		UScrollBox* ScrollBox_Text; // 0x2F8(0x8)
		USizeBox* SizeBox_Dialog; // 0x300(0x8)
		UNamedSlot* Slot_Background; // 0x308(0x8)
		UNamedSlot* Slot_Content; // 0x310(0x8)
		UNamedSlot* Slot_Main; // 0x318(0x8)
		UNamedSlot* Slot_Root; // 0x320(0x8)
		UHorizontalBox* TitleContainer; // 0x328(0x8)
		TArray<UWBP_UIKit_ButtonCTA_Base_C*> ButtonWidgets; // 0x330(0x10)
		UCommonButtonGroupBase* ButtonGroup; // 0x340(0x8)
		FMulticastInlineDelegate DialogButtonClickedDispatcher; // 0x348(0x10)
		UDataTable* DefaultInputActionDataTable; // 0x358(0x8)
		UWBP_UIKit_Scrim_C* Scrim; // 0x360(0x8)
		bool UseScrim; // 0x368(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x369(0x7) UNKNOWN PROPERTY
		double Blur; // 0x370(0x8)
		FLinearColor DimColor; // 0x378(0x10)
		UMaterialInstance* DimMaterial; // 0x388(0x8)
		bool UseClickCatch; // 0x390(0x1)
		bool UseTitle; // 0x391(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x392(0x6) UNKNOWN PROPERTY
		UCommonTextBlock* ContentTitle; // 0x398(0x8)
		UCommonTextBlock* ContentText; // 0x3A0(0x8)
		UCommonRichTextBlock* ContentRichText; // 0x3A8(0x8)
		TEnumAsByte<E_UI_DialogTextType> UseText; // 0x3B0(0x1)
		bool UseTitleImage; // 0x3B1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x3B2(0x6) UNKNOWN PROPERTY
		FS_UI_Text TitleProperties; // 0x3B8(0xC0)
		FS_UI_Text TextProperties; // 0x478(0xC0)
		UImage* ContentImage; // 0x538(0x8)
		bool UseImage; // 0x540(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x541(0x7) UNKNOWN PROPERTY
		FS_UI_Image ImageProperties; // 0x548(0x58)
		UImage* ContentBackground; // 0x5A0(0x8)
		bool UseBackplate; // 0x5A8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x5A9(0x7) UNKNOWN PROPERTY
		FS_UI_Backplate BackplateProperties; // 0x5B0(0x50)
		bool UseBackground; // 0x600(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x601(0x7) UNKNOWN PROPERTY
		FS_UI_Image BackgroundProperties; // 0x608(0x58)
		FS_UI_SizeBox DialogSIze; // 0x660(0x80)
		FS_UI_DialogButtons Buttons; // 0x6E0(0x70)
		FS_UI_Placement DialogPlacement; // 0x750(0x40)
		UWBP_UIKit_Backplate_Base_C* ContentBackplate; // 0x790(0x8)
		UMaterialInstanceDynamic* ImageMID; // 0x798(0x8)
		FS_UI_BackplateCornerRadiusValues CornerRadiusValues; // 0x7A0(0x28)
		UImage* ContentTitleImage; // 0x7C8(0x8)
		TEnumAsByte<EHorizontalAlignment> TitleImageHorizontalAligment; // 0x7D0(0x1)
		TEnumAsByte<EVerticalAlignment> TitleImageVerticalAligment; // 0x7D1(0x1)
		unsigned char UnknownData06_6[0x6]; // 0x7D2(0x6) UNKNOWN PROPERTY
		double TitleImageSizeX; // 0x7D8(0x8)
		double TitleImageSizeY; // 0x7E0(0x8)
		TEnumAsByte<EHorizontalAlignment> TitleTextHorizontalAligment; // 0x7E8(0x1)
		TEnumAsByte<EVerticalAlignment> TitleTextVerticalAligment; // 0x7E9(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x7EA(0x2) UNKNOWN PROPERTY
		FMargin TitleImagePadding; // 0x7EC(0x10)
		FMargin TitleTextPadding; // 0x7FC(0x10)
		FSlateChildSize TitleTextSizeRule; // 0x80C(0x8)
		FSlateChildSize TitleImageSizeRule; // 0x814(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C");
			return ret;
		}

		void SetUIKitDialogViewModel(UUIKitDialogViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDialogTitleImage(UMaterialInstance* MaterialInstance); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTitleTextProperties(UWidget* Widget); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTitleImageProperties(UImage* Image); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeDialog(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PresetForDesignTime(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Cleanup(UWidget* Widget); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearButtonWidgets(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundProperties(FS_UI_Image& Data); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackplateProperties(FS_UI_Backplate& Data); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddBackground(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddBackplate(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetImageProperties(FS_UI_Image& Data); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddImage(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTextProperties(FS_UI_Text Data); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddText(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTitleProperties(FS_UI_Text Data); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddTitle(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetScrim(float Blur Strength, FLinearColor Color, UMaterialInstance* Material Instance, bool Enable); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddScrim(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetButtonFocus(int32_t& Focus Index); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetButton(UWBP_UIKit_ButtonCTA_Base_C* Button, UUIKitDialogButtonViewModel* Button Data); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetButtonsProperties(FS_UI_DialogButtons& Data); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeactivateDialog(UWidgetAnimation* OutroAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivateDialog(UWidgetAnimation* IntroAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDialogImage(UTexture2D* Texture); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddDialogButtons(TArray<UUIKitDialogButtonViewModel*>& Action Buttons); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDialogText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDialogTitle(FText Title); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDialogData(UUIKitDialogViewModel* Data); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSizeBox(FS_UI_SizeBox& Data); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridNudge(UWidget* Widget, FVector2D Nudge); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridPadding(UWidget* Widget, FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridLayer(UWidget* Widget, int32_t Layer); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridAlignment(UWidget* Widget, TEnumAsByte<EHorizontalAlignment> Horizontal, TEnumAsByte<EVerticalAlignment> Vertical); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridColumnAndRow(UWidget* Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPlacement(UWidget* Widget, FS_UI_Placement Placement); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDialogButtonClicked(UCommonButtonBase* AssociatedButton, int32_t ButtonIndex); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Dialog_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DialogButtonClickedDispatcher__DelegateSignature(int32_t ButtonIndex); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Toggle.WBP_UIKit_Block_Toggle_C
	// Inherited from UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x11D (0x400 - 0x2E3)
	class UWBP_UIKit_Block_Toggle_C : public UWBP_UIKit_Block_Base_C	
	{
	public:
		unsigned char UnknownData00_3[0x5]; // 0x2E3(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E8(0x8)
		UWidgetAnimation* Anim_SelectedDisabled_Transition; // 0x2F0(0x8)
		UWidgetAnimation* Anim_SelectedPressed_Transition; // 0x2F8(0x8)
		UWidgetAnimation* Anim_SelectedFocused_Transition; // 0x300(0x8)
		UWidgetAnimation* Anim_SelectedHovered_Transition; // 0x308(0x8)
		UWidgetAnimation* Anim_Selected_Transition; // 0x310(0x8)
		UWidgetAnimation* Anim_Disabled_Transition; // 0x318(0x8)
		UWidgetAnimation* Anim_Pressed_Transition; // 0x320(0x8)
		UWidgetAnimation* Anim_Focused_Transition; // 0x328(0x8)
		UWidgetAnimation* Anim_Hovered_Transition; // 0x330(0x8)
		UFortMobileImage* Image; // 0x338(0x8)
		FSlateBrush Brush; // 0x340(0xB0)
		TEnumAsByte<E_UI_ToggleType> ToggleType; // 0x3F0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x3F1(0x7) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* ImageMID; // 0x3F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Toggle.WBP_UIKit_Block_Toggle_C");
			return ret;
		}

		void RefreshImageMID(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSelected(bool Selected); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetToggleType(TEnumAsByte<E_UI_ToggleType> Type); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSize(FVector2D Desired Size); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMaterial(UMaterialInstance* InMaterial); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBrush(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDisabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionEnabledRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Block_Toggle(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ItemShopTile/WBP_MPItemShop_Tile_Base.WBP_MPItemShop_Tile_Base_C
	// Inherited from UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1A9 (0x1551 - 0x13A8)
	class UWBP_MPItemShop_Tile_Base_C : public UUIKitModularButton	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x13B0(0x8)
		UTextBlock* Base_OfferName; // 0x13B8(0x8)
		UTextBlock* Base_OfferDescription; // 0x13C0(0x8)
		UWBP_ItemShopTile_Highlight_C* Base_Highlight; // 0x13C8(0x8)
		UWBP_PriceSwitcher_Base_C* Base_PriceSwitcher; // 0x13D0(0x8)
		EItemShopCurrency PreviewCurrency; // 0x13D8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x13D9(0x7) UNKNOWN PROPERTY
		FVector2D 1x1TileSizeRatio; // 0x13E0(0x10)
		EItemShopTileSize TileSizeType; // 0x13F0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x13F1(0x7) UNKNOWN PROPERTY
		UClass* HighlightClass; // 0x13F8(0x8)
		TEnumAsByte<E_PriceSwitcherState> PreviewPriceInfoSwitcherState; // 0x1400(0x1)
		EViolatorIntensity PreviewHighlightIntensity; // 0x1401(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x1402(0x6) UNKNOWN PROPERTY
		UClass* PriceSwitcherClass; // 0x1408(0x8)
		UWBP_MPItemShop_TagRotator_Base_C* Base_TagRotator; // 0x1410(0x8)
		UCommonLoadGuard* Base_LoadGuard; // 0x1418(0x8)
		USizeBox* Base_SizeBox_Image; // 0x1420(0x8)
		USizeBox* Base_SizeBox_OfferInfo; // 0x1428(0x8)
		bool TagFullPreviewEnabled; // 0x1430(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1431(0x7) UNKNOWN PROPERTY
		UClass* TagRotatorClass; // 0x1438(0x8)
		UOverlay* Base_Overlay_Price; // 0x1440(0x8)
		UOverlay* Base_Overlay_TagRotator; // 0x1448(0x8)
		FTimerHandle PresentationSwapTimerHandle; // 0x1450(0x8)
		TArray<UMaterialInterface*> PresentationMaterials; // 0x1458(0x10)
		UImage* Base_Image_Offer; // 0x1468(0x8)
		UMaterialInterface* DefaultPresentationMaterial; // 0x1470(0x8)
		UImage* Base_Image_NextOffer; // 0x1478(0x8)
		UWidgetAnimation* Base_PresentationSwapAnim; // 0x1480(0x8)
		FMulticastInlineDelegate OnTileFocused; // 0x1488(0x10)
		FText CrewBlingShortDescriptionText; // 0x1498(0x10)
		FText SubscriptionShortDescriptionText; // 0x14A8(0x10)
		bool IsActive; // 0x14B8(0x1)
		bool IsDetailsOfferShown_; // 0x14B9(0x1)
		bool ForceToShowDetails; // 0x14BA(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x14BB(0x1) UNKNOWN PROPERTY
		float TimeBetweenPresentations; // 0x14BC(0x4)
		float TimeBetweenTagChanges; // 0x14C0(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x14C4(0x4) UNKNOWN PROPERTY
		double TagHeight; // 0x14C8(0x8)
		double TagHeight_Mobile; // 0x14D0(0x8)
		int32_t PresentationsAmount; // 0x14D8(0x4)
		int32_t CurrentPresentationIndex; // 0x14DC(0x4)
		int32_t ItemsInOfferAmount; // 0x14E0(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x14E4(0x4) UNKNOWN PROPERTY
		FText PreviewOfferName; // 0x14E8(0x10)
		FText PreviewHighlightText; // 0x14F8(0x10)
		TArray<FText> PreviewTagTexts; // 0x1508(0x10)
		FText PreviewOfferDescription; // 0x1518(0x10)
		int32_t PreviewPrice; // 0x1528(0x4)
		int32_t PreviewRegularPrice; // 0x152C(0x4)
		bool PreviewSuppressStrikethroughPrice; // 0x1530(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x1531(0x3) UNKNOWN PROPERTY
		FMargin HighlightPadding; // 0x1534(0x10)
		EItemShopTileSize PreviewTileSizeType; // 0x1544(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x1545(0x3) UNKNOWN PROPERTY
		UMaterialInterface* PreviewPresentationMaterial; // 0x1548(0x8)
		bool IsHoverDisabled; // 0x1550(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ItemShopTile/WBP_MPItemShop_Tile_Base.WBP_MPItemShop_Tile_Base_C");
			return ret;
		}

		void Start3DPreview(bool IsAnExternalCall); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Abstract_SetItemPreviewCycleState(bool IsEnabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Abstract_GetCosmeticItemsInOffer(TArray<UItemShopPreviewData*>& CosmeticItems); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Abstract_SetItemsToPreview(TArray<UItemShopPreviewData*>& ItemsToPreview); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Abstract_GetOfferVM(UFortItemShopOfferVM* OfferVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Abstract_SetOfferVM(UFortItemShopOfferVM* OfferVM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResumeOrPauseSwapTimer(bool ShouldResume); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHighlightActiveState(bool InIsActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetStrikethroughPriceVisibility(int32_t Price, int32_t RegularPrice, bool SuppressStrikethrough, ESlateVisibility& StrikethroughPriceVisibility); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetPriceFormattedText(int32_t Price, EItemShopCurrency Currency, FString CurrencySubType, FText& PriceText); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDesignTimePreviewData(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t Abstract_GetCosmeticItemsAmount(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Abstract_Is3dItemPreviewEnabled(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeTile(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDescriptionVisibility(ESlateVisibility InVisibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetOfferDescriptionVisibility(FText InDescription, bool IsSubscription, bool IsCrewBling, bool IsLevelBundle, bool IsSpecialOffer, ESlateVisibility& Visibility); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Abstract_SetCosmeticItemsInOffer(TArray<UFortItemVM*>& GrantedItems); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Abstract_ShowOfferDetails(bool IsImmediate); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Abstract_HideOfferDetails(bool IsImmediate); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CorrectInputVisualState(ECommonInputType CurrentInputType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearTimers(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Abstract Get First Granted Item Image(TWeakObjectPtr<UTexture2D*>& LargePreviewImage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTagTexts(TArray<FText>& Tags); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTileAnchor(FVector2D& PixelPosition); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsMobileFrontend(bool& bIsMobileFrontend); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Abstract_SetPeekState(bool IsInPeekState); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetActiveState(bool IsActiveState); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateTagRotator(UOverlay* Overlay); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetOfferDescriptionText(FText InDescription, bool IsSubscription, bool IsCrewBling, FText& ShortDescription); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ParsePresentations(TArray<FFortItemShopLoadedPresentation>& Array, TArray<UMaterialInterface*>& ParsedMaterials, TArray<UTexture2D*>& ParsedTextures, bool& FoundMaterials); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPresentationsWidgets(UImage* NextOfferImage, UWidgetAnimation* SwapAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetLegacyImage(UFortStoreFrontOfferInfo* OfferInfo, TWeakObjectPtr<UObject*>& SoftTileImage, bool& IsValidAsset); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTexturePresentation(UTexture2D* Texture); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHoveredStateVisual(bool IsHovered); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetNextPresentationIndex(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetOfferImageMaterials(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleNoLoadedPresentations(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateImagesPresentationMaterials(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPresentationsLoadingState(bool IsLoading, bool ShouldClearPresentationsArray); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartShowingPresentations(FDelegateProperty PresentationSwapDelegate); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCommonWidgets(UTextBlock* OfferNameWidget, UTextBlock* OfferDescriptionWidget, USizeBox* SizeBoxOfferInfo, USizeBox* SizeBoxOfferImage, UCommonLoadGuard* LoadGuard, UImage* OfferImage); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetUnhoveredState(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHoveredState(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateHighlight(UOverlay* OverlayContainer); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHighlightIntensity(EViolatorIntensity Intensity); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTileSize(FVector2D TileSize); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreatePriceSwitcher(UOverlay* OverayContainer); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOfferDescription(FText OfferDescription); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCurrency(EItemShopCurrency CurrencyType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHighlightText(FText HighlightText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOfferName(FText OfferName); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_F9862CD04D614DDBCE6551BBA997A5CA(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_658BDEF64A724A55F60C4387E1CCD440(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_18E3CEB147F13C263A3192A186A9CD04(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPresentationsLoaded(TArray<FFortItemShopLoadedPresentation>& LoadedPresentations); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetMaterialPresentations(TArray<UMaterialInterface*>& Materials); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAddedToFocusPath(FFocusEvent InFocusEvent); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetFallbackImage(UFortStoreFrontOfferInfo* OfferInfo); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPresentationSwap(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputMethodChanged(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHandle3dPreview(bool IsAnExternalCall); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Disable Hover(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_MPItemShop_Tile_Base(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileFocused__DelegateSignature(UUserWidget* FocusedTile); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ItemShopTile/WBP_PriceSwitcher_Base.WBP_PriceSwitcher_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x2F0 (0x5A0 - 0x2B0)
	class UWBP_PriceSwitcher_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UWidgetAnimation* Hover; // 0x2B8(0x8)
		UHorizontalBox* HB_PriceContainer; // 0x2C0(0x8)
		UImage* Image_Currency; // 0x2C8(0x8)
		UImage* Image_Strike; // 0x2D0(0x8)
		UOverlay* Overlay_RegularPrice; // 0x2D8(0x8)
		UImage* PlayStationStoreLogo; // 0x2E0(0x8)
		USizeBox* SizeBox_PriceStateSwitcher; // 0x2E8(0x8)
		USpacer* Spacer; // 0x2F0(0x8)
		USpacer* Spacer; // 0x2F8(0x8)
		UCommonVisibilitySwitcher* Switcher_BottomInfo; // 0x300(0x8)
		UOverlay* SwitcherState_NotOwned; // 0x308(0x8)
		UOverlay* SwitcherState_Owned; // 0x310(0x8)
		UOverlay* SwitcherState_SubscriptionInfo; // 0x318(0x8)
		UCommonTextBlock* Text_Owned; // 0x320(0x8)
		UCommonTextBlock* Text_Price; // 0x328(0x8)
		UCommonTextBlock* Text_RegularPrice; // 0x330(0x8)
		UCommonTextBlock* Text_SubInfo; // 0x338(0x8)
		FText OwnedText; // 0x340(0x10)
		TEnumAsByte<E_PriceSwitcherState> PreviewPriceState; // 0x350(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x351(0x3) UNKNOWN PROPERTY
		int32_t PreviewPrice; // 0x354(0x4)
		int32_t PreviewRegularPrice; // 0x358(0x4)
		EItemShopCurrency PreviewCurrency; // 0x35C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x35D(0x3) UNKNOWN PROPERTY
		UTexture2D* VBucksIcon; // 0x360(0x8)
		FVector2D CurrencyImageSize; // 0x368(0x10)
		UTexture2D* RealMoneyIcon; // 0x378(0x8)
		bool PreviewPlayStationPlatform; // 0x380(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x381(0x7) UNKNOWN PROPERTY
		FSlateFontInfo PriceTextFont; // 0x388(0x58)
		bool SuppressStrikethrough; // 0x3E0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x3E1(0x7) UNKNOWN PROPERTY
		FSlateFontInfo OwnedTextFont; // 0x3E8(0x58)
		FSlateFontInfo RegularPriceTextFont; // 0x440(0x58)
		FSlateFontInfo SpecialOfferTextFont; // 0x498(0x58)
		FVector2D DefaultCurrencyImageScale; // 0x4F0(0x10)
		FVector2D MobileCurrencyImageScale; // 0x500(0x10)
		bool PreviewMobileState; // 0x510(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x511(0x7) UNKNOWN PROPERTY
		double StrikeLineRotateAngle; // 0x518(0x8)
		float WidgetHeight; // 0x520(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x524(0x4) UNKNOWN PROPERTY
		UMaterialInterface* StrikeLineMaterial; // 0x528(0x8)
		FMargin DefaultPricePadding; // 0x530(0x10)
		FMargin MobilePricePadding; // 0x540(0x10)
		FText SubscriptionDefaultStatusText; // 0x550(0x10)
		FText SubscriptionActiveStatusText; // 0x560(0x10)
		FText SubscriptionPaymentErrorStatusText; // 0x570(0x10)
		FMargin DefaultRegularPricePadding; // 0x580(0x10)
		FMargin MobileRegularPricePadding; // 0x590(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ItemShopTile/WBP_PriceSwitcher_Base.WBP_PriceSwitcher_Base_C");
			return ret;
		}

		void GetSubInfoText(EMcpSubscriptionState SubscriptionState, bool IsSubscription, FText& SubInfoText); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetPriceInfoState(bool IsOwned, bool IsSubscriptionOffer, bool IsProgressiveCosmetic, TEnumAsByte<E_PriceSwitcherState>& SwitcherState); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSubInfoText(FText SubInfoText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FlipHorizontalBoxLayout(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldShowPSLogo(EItemShopCurrency Currency); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCurrency(EItemShopCurrency Currency); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetStrikethroughPriceVisibility(ESlateVisibility Visibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetStrikethroughPriceVisibility(int32_t Price, int32_t OriginalPrice, bool SuppressStrikethrough, ESlateVisibility& StrikethroughPriceVisibility); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRegularPrice(FText Price); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPrice(FText Price); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeWidget(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSwitcherState(TEnumAsByte<E_PriceSwitcherState> PriceState); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHovered(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUnhovered(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMobileState(bool InMobileState); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_PriceSwitcher_Base(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ItemShopTile/WBP_ItemShopTile_Highlight.WBP_ItemShopTile_Highlight_C
	// Inherited from UWBP_UIKit_Highlight_Base_C -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x168 (0x580 - 0x418)
	class UWBP_ItemShopTile_Highlight_C : public UWBP_UIKit_Highlight_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x8)
		UWidgetAnimation* Hovered; // 0x420(0x8)
		UWidgetAnimation* Hide; // 0x428(0x8)
		UWidgetAnimation* Reveal; // 0x430(0x8)
		FText PreviewHighlightText; // 0x438(0x10)
		EViolatorIntensity PreviewHighlightIntensity; // 0x448(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x449(0x3) UNKNOWN PROPERTY
		float MinHeight; // 0x44C(0x4)
		USoundBase* AppearSound; // 0x450(0x8)
		USoundBase* HideSound; // 0x458(0x8)
		bool IsActive; // 0x460(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x461(0x7) UNKNOWN PROPERTY
		FSlateFontInfo LowIntensityFontInfo; // 0x468(0x58)
		FSlateFontInfo MediumIntensityFontInfo; // 0x4C0(0x58)
		FSlateFontInfo HighIntensityFontInfo; // 0x518(0x58)
		FMargin TextPadding; // 0x570(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ItemShopTile/WBP_ItemShopTile_Highlight.WBP_ItemShopTile_Highlight_C");
			return ret;
		}

		void InitializeHighlight(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHighlightSize(TEnumAsByte<E_UI_HighlightSize> FontSize); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWidth(double MaxWidth); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowDesignTimePreview(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSizeBox(float MinHeight, float MaxWidth); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHighlightText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHighlightIntensity(EViolatorIntensity ViolatorIntensity); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHovered(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUnhovered(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActivated(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeactivated(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ItemShopTile_Highlight(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_SideNavigation_Base.WBP_UIKit_SideNavigation_Base_C
	// Inherited from UWBP_UIKit_TabGroup_Base_C -> UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1C1 (0x9D9 - 0x818)
	class UWBP_UIKit_SideNavigation_Base_C : public UWBP_UIKit_TabGroup_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x818(0x8)
		FMulticastInlineDelegate OnSideNavigationSelectionChanged; // 0x820(0x10)
		FMulticastInlineDelegate OnSideNavigationTabClicked; // 0x830(0x10)
		FMulticastInlineDelegate OnSideNavigationInnerTabClicked; // 0x840(0x10)
		bool UseInitialSideNavigationTabs; // 0x850(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x851(0x7) UNKNOWN PROPERTY
		TArray<FS_UI_TabContainerData> InitialSideNavigationTabs; // 0x858(0x10)
		FName PreviousSelectedTab; // 0x868(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x86C(0x4) UNKNOWN PROPERTY
		TMap<FName, UWBP_UIKit_TabContainer_Base_C*> TabContainers; // 0x870(0x50)
		UClass* TabContainerClass; // 0x8C0(0x8)
		UClass* InnerTabGroupClass; // 0x8C8(0x8)
		UClass* InnerTabButtonClassOverride; // 0x8D0(0x8)
		bool SkipExpandAnimation; // 0x8D8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x8D9(0x3) UNKNOWN PROPERTY
		float ExpandDuration; // 0x8DC(0x4)
		FSlateBrush InnerTabGroupBackround; // 0x8E0(0xB0)
		bool AllowMultipleExpandedContainers; // 0x990(0x1)
		bool ShouldWaitForInnerTabCallback; // 0x991(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x992(0x2) UNKNOWN PROPERTY
		FName LastNotifiedSelectedTabID; // 0x994(0x4)
		FName LastNotifiedInnerTabID; // 0x998(0x4)
		EDescendantScrollDestination ScrollDestinationMouse; // 0x99C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x99D(0x3) UNKNOWN PROPERTY
		float ScrollPaddingMouse; // 0x9A0(0x4)
		EDescendantScrollDestination ScrollDestinationGamepad; // 0x9A4(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x9A5(0x3) UNKNOWN PROPERTY
		float ScrollPaddingGamepad; // 0x9A8(0x4)
		bool SelectInnerTabOnContainerExpand; // 0x9AC(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x9AD(0x3) UNKNOWN PROPERTY
		FMargin InnerTabGroupPadding; // 0x9B0(0x10)
		bool EnableCollapsedState; // 0x9C0(0x1)
		bool SideNavigationIsCollapsed; // 0x9C1(0x1)
		unsigned char UnknownData07_6[0x6]; // 0x9C2(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSideNavigationCollapsedStateChanged; // 0x9C8(0x10)
		bool AllowContainerInteractionOnGamepad; // 0x9D8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_SideNavigation_Base.WBP_UIKit_SideNavigation_Base_C");
			return ret;
		}

		void SelectSideNavigationViewModel(UMVVMViewModelBase* TabViewModel, bool bSuppressClickFeedback, bool& Success); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SelectSideNavigationTab(FName TabID, FName InnerTabID, bool bSuppressClickFeedback, bool& Success); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsCollapsed(bool IsCollapsed, bool SkipAnimation); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSideNavigationTabViewModel(FName TabID, FName InnerTabID, UMVVMViewModelBase* TabViewModel); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSideNavigationSelectedButtonBase(UCommonButtonBase* Button); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSideNavigationButtonBaseByViewModel(UMVVMViewModelBase* TabViewModel, UCommonButtonBase* ButtonBase); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetInnerTabIdAtIndex(FName& TabID, int32_t Index, FName& InnerTabID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetInnerTabsCount(FName TabID, int32_t& Count); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetInnerTabButton(FName TabID, FName InnerTabID, UCommonButtonBase* TabButton); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSelectedInnerTabID(FName TabID, FName& InnerTabID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsTabContainerEmpty(FName TabID, bool& IsEmpty); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsTabContainerExpanded(FName TabID, bool& IsExpanded); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifySelectionChanged(FName TabID, FName InnerTabID, UMVVMViewModelBase* TabViewModel); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExpandContainer(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldSelectOnFocus(); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldDisplaySelectionWhenNotExpanded(); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputMethodChanged(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleContainerExpandedStateChanged(FName TabID, bool IsExpanded); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTabClick(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnexpandOtherContainers(FName ExceptTabID); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CheckTabChanged(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearTabContainerSelection(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CopyParentTabGroupProps(UWBP_UIKit_TabGroupCompact_Base_C* Target); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InjectTabContainer(FName TabID, UWBP_UIKit_TabContainer_Base_C* TabContainerWidget); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearSideNavigationTabs(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PopulateSideNavigationTabs(TArray<FS_UI_TabContainerData>& Data); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateTabContainer(FName& TabID, UWBP_UIKit_TabContainer_Base_C* TabContainerWidget); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTabContainer(FName& TabID, UWBP_UIKit_TabContainer_Base_C* TabContainerWidget); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshTabSelectableState(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddSideNavigationInnerTab(UMVVMViewModelBase* TabViewModel, FName TabID, FName InnerTabID, int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddSideNavigationTab(UMVVMViewModelBase* TabViewModel, FName TabID, int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnUIKitTabSelected(FName TabID, UMVVMViewModelBase* TabVM); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnUIKitTabClicked(FName TabID, UMVVMViewModelBase* TabVM); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Input Method Changed(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnInnerTabSelected(FName TabID, FName InnerTabID, UMVVMViewModelBase* TabViewModel); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnInnerTabClicked(FName TabID, FName InnerTabID, UMVVMViewModelBase* TabViewModel); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnInnerTabGroupCreation(UWBP_UIKit_TabGroupCompact_Base_C* TabGroupWidget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnTabContainerExpandedStateChanged(FName TabID, bool IsExpanded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LatentDeselectAllTabs(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScrollToWidget(UWidget* Widget, bool IsDelayed); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMouseLeave(FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTabCreation(FName TabNameID, UCommonButtonBase* TabButton); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnInnerTabCreation(FName TabID, FName InnerTabID, UCommonButtonBase* TabButton); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_SideNavigation_Base(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSideNavigationCollapsedStateChanged__DelegateSignature(bool IsCollapsed); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSideNavigationInnerTabClicked__DelegateSignature(FName TabID, FName InnerTabID, UMVVMViewModelBase* TabViewModel); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSideNavigationTabClicked__DelegateSignature(FName TabID, bool IsTabContainerExpanded, UMVVMViewModelBase* TabViewModel); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSideNavigationSelectionChanged__DelegateSignature(FName TabID, FName InnerTabID, UMVVMViewModelBase* TabViewModel); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_TabContainer_Base.WBP_UIKit_TabContainer_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD9 (0x389 - 0x2B0)
	class UWBP_UIKit_TabContainer_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UWidgetAnimation* HideArrow; // 0x2B8(0x8)
		UWidgetAnimation* Expand; // 0x2C0(0x8)
		UBorder* Border_Background; // 0x2C8(0x8)
		UBorder* Border_Content; // 0x2D0(0x8)
		UGridPanel* Grid_Layout; // 0x2D8(0x8)
		UImage* Image_Arrow; // 0x2E0(0x8)
		UNamedSlot* Slot_Tab; // 0x2E8(0x8)
		FName ContainerTabID; // 0x2F0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		UClass* ContainerTabgroupClass; // 0x2F8(0x8)
		bool SkipExpandAnimation; // 0x300(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x301(0x3) UNKNOWN PROPERTY
		float ExpandDuration; // 0x304(0x4)
		bool IsExpanded; // 0x308(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x309(0x7) UNKNOWN PROPERTY
		UWBP_UIKit_TabGroupCompact_Base_C* InnerTabGroup; // 0x310(0x8)
		FMulticastInlineDelegate OnInnerTabSelected; // 0x318(0x10)
		FMulticastInlineDelegate OnInnerTabClicked; // 0x328(0x10)
		FMulticastInlineDelegate OnInnerTabCreation; // 0x338(0x10)
		FMulticastInlineDelegate OnContainerTabGroupCreation; // 0x348(0x10)
		FMulticastInlineDelegate OnContainerExpandedStateChanged; // 0x358(0x10)
		FMargin InnerTabGroupPadding; // 0x368(0x10)
		FLinearColor Backplate_Color; // 0x378(0x10)
		bool AllowContainerInteractionOnGamepad; // 0x388(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_TabContainer_Base.WBP_UIKit_TabContainer_Base_C");
			return ret;
		}

		void SequenceEvent__ENTRYPOINTWBP_UIKit_TabContainer_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Border Opacity(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetArrowIsSelected(bool IsSelected); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCollapsedStateChanged(bool IsCollapsed, bool SkipAnimation); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshTabSlotEnabledState(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddTabToContainer(UMVVMViewModelBase* TabViewModel, FName TabID, int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearInnerTabsSelection(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshTabSlotVisuals(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetArrowVisibilty(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FocusSelectedInnerTab(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyTabGroupWidget(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExpandToSelectedItem(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackground(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsExpanded(bool InIsExpanded, bool SkipAnim); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTabButton(UCommonButtonBase* TabButton); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetInnerTabGroupWidget(UWBP_UIKit_TabGroupCompact_Base_C* InnerTabGroupWidget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConstructTabGroup(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitContainer(UCommonButtonBase* ParentTabButton, FName TabID); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TryFocusSelectedInnerTab(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnInnerTabSelected(FName TabID, UMVVMViewModelBase* TabVM); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnInnerTabClicked(FName TabID, UMVVMViewModelBase* TabVM); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsCollapsed(bool IsCollapsed, bool SkipAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnInnerTabCreation(FName TabID, UCommonButtonBase* TabButton); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnTabButtonSelected(UCommonButtonBase* Button, bool Selected); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMouseLeave(FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_TabContainer_Base(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInnerTabCreation__DelegateSignature(FName TabID, FName InnerTabID, UCommonButtonBase* TabButton); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContainerExpandedStateChanged__DelegateSignature(FName TabID, bool IsExpanded); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInnerTabClicked__DelegateSignature(FName TabID, FName InnerTabID, UMVVMViewModelBase* TabViewModel); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContainerTabGroupCreation__DelegateSignature(UWBP_UIKit_TabGroupCompact_Base_C* TabGroupWidget); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInnerTabSelected__DelegateSignature(FName TabID, FName InnerTabID, UMVVMViewModelBase* TabViewModel); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_TabGroupCompact_Base.WBP_UIKit_TabGroupCompact_Base_C
	// Inherited from UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x640 - 0x4E8)
	class UWBP_UIKit_TabGroupCompact_Base_C : public UUIKitTabGroup	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4E8(0x8)
		UGridPanel* TabsContainer; // 0x4F0(0x8)
		bool IsVertical; // 0x4F8(0x1)
		bool IsNaturalNavigation; // 0x4F9(0x1)
		TEnumAsByte<EHorizontalAlignment> TabGroupHorizontalAlignment; // 0x4FA(0x1)
		TEnumAsByte<EVerticalAlignment> TabGroupVerticalAlignment; // 0x4FB(0x1)
		FMargin TabGroupPadding; // 0x4FC(0x10)
		unsigned char UnknownData00_6[0x4]; // 0x50C(0x4) UNKNOWN PROPERTY
		double TabSpacing; // 0x510(0x8)
		FName InitialSelectedTabID; // 0x518(0x4)
		int32_t InitialSelectedTabIndex; // 0x51C(0x4)
		UClass* ButtonClass; // 0x520(0x8)
		FIntPoint MinButtonSize; // 0x528(0x8)
		TEnumAsByte<EHorizontalAlignment> ButtonHorizontalAlignment; // 0x530(0x1)
		TEnumAsByte<EVerticalAlignment> ButtonVerticalAlignment; // 0x531(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x532(0x2) UNKNOWN PROPERTY
		FMargin ButtonPadding; // 0x534(0x10)
		unsigned char UnknownData02_6[0x4]; // 0x544(0x4) UNKNOWN PROPERTY
		FVector2D IconSize; // 0x548(0x10)
		UClass* DividerClass; // 0x558(0x8)
		TArray<FS_UI_DividerPosition> Dividers; // 0x560(0x10)
		double DividerSpacing; // 0x570(0x8)
		FMargin DividerPadding; // 0x578(0x10)
		bool UseInitialTabs; // 0x588(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x589(0x7) UNKNOWN PROPERTY
		TMap<FName, FS_UI_DividerData> CachedDividers; // 0x590(0x50)
		TMap<FName, USpacer*> CachedSpacers; // 0x5E0(0x50)
		TArray<FUIKitTabData> InitialTabsData; // 0x630(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_TabGroupCompact_Base.WBP_UIKit_TabGroupCompact_Base_C");
			return ret;
		}

		void RemoveDividerWidget(FName TabID); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveSpacer(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddSpacerToGrid(FName& TabID, int32_t Index); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CacheInitialDividers(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddDividerToGrid(UWBP_UIKit_Divider_Base_C* Divider, int32_t Index, bool AddAfter); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupDivider(UWBP_UIKit_Divider_Base_C* InputPin); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAddDivider(FName& TabID, int32_t TabIndex, bool AddAfter); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitialTabSelection(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveDividerByIndex(int32_t TabIndex, bool& DividerRemoved); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveDivider(FName TabID, bool& DividerRemoved); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddDividerByIndex(int32_t TabIndex, bool AddAfter); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddDivider(FName TabID, bool AddAfter); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveTabs(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveTabByIndex(int32_t Index, bool& TabRemoved); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddTab(UMVVMViewModelBase* Tab VM, FName Tab ID, int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateEmptyTabs(int32_t TabsCount); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveCachedWidgets(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveTabGroupWidgets(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PopulateTabsFromData(TArray<FUIKitTabData>& Data); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTabViewModel(FName TabID, TScriptInterface<Class> VM); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateTabLayout(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RestoreTabSelection(FName TabNameID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddTabToGrid(UWidget* Widget, int32_t Index); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupTabButton(FName Tab ID, UCommonButtonBase* Tab Button); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCreatedTab(FName Tab ID, UCommonButtonBase* Button); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTabCreation(FName TabNameID, UCommonButtonBase* TabButton); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnTab Button Removal(FName TabID, UCommonButtonBase* TabButton); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_TabGroupCompact_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		void SetIsCollapsed(bool IsCollapsed, bool SkipAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ProgressBar/WBP_UIKit_ProgressBar_Base.WBP_UIKit_ProgressBar_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x190 (0x440 - 0x2B0)
	class UWBP_UIKit_ProgressBar_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UWidgetAnimation* Anim_ProgressWithDeltaDecay_Base; // 0x2B8(0x8)
		UWidgetAnimation* Anim_ProgressWithDelta_Base; // 0x2C0(0x8)
		UWidgetAnimation* Anim_Progress_Base; // 0x2C8(0x8)
		UImage* ProgressBar; // 0x2D0(0x8)
		bool UseDeltaBar; // 0x2D8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2D9(0x3) UNKNOWN PROPERTY
		FLinearColor DeltaColor; // 0x2DC(0x10)
		bool UseDeltaDecay; // 0x2EC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2ED(0x3) UNKNOWN PROPERTY
		FLinearColor DeltaDecayColor; // 0x2F0(0x10)
		FLinearColor ColorA; // 0x300(0x10)
		FLinearColor ColorB; // 0x310(0x10)
		FLinearColor ColorC; // 0x320(0x10)
		FLinearColor EmptyColor; // 0x330(0x10)
		UMaterialInstanceDynamic* ProgressBarMID; // 0x340(0x8)
		double ProgressValue; // 0x348(0x8)
		double DurationTime; // 0x350(0x8)
		bool UseCircular; // 0x358(0x1)
		bool UseSegments; // 0x359(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x35A(0x2) UNKNOWN PROPERTY
		int32_t SegmentsCount; // 0x35C(0x4)
		double SeparatorThickness_PX; // 0x360(0x8)
		bool SnapToSegments; // 0x368(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x369(0x7) UNKNOWN PROPERTY
		UMaterialInstance* LinearMaterial; // 0x370(0x8)
		double LinearSDF_Sharpness; // 0x378(0x8)
		double CornerRoundness; // 0x380(0x8)
		bool UseOutline; // 0x388(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x389(0x7) UNKNOWN PROPERTY
		double Outline_PX; // 0x390(0x8)
		double Width; // 0x398(0x8)
		double Height; // 0x3A0(0x8)
		bool UseRoundedProgress; // 0x3A8(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x3A9(0x7) UNKNOWN PROPERTY
		UMaterialInstance* CircularMaterial; // 0x3B0(0x8)
		double Thickness_PX; // 0x3B8(0x8)
		double SDF_Sharpness; // 0x3C0(0x8)
		bool FillClockwise; // 0x3C8(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x3C9(0x7) UNKNOWN PROPERTY
		double StartAngle; // 0x3D0(0x8)
		double EndAngle; // 0x3D8(0x8)
		double EdgeOffset_PX; // 0x3E0(0x8)
		double RotationAngle; // 0x3E8(0x8)
		bool UseGlow; // 0x3F0(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x3F1(0x7) UNKNOWN PROPERTY
		double GlowIntensity; // 0x3F8(0x8)
		bool UseGlowColor; // 0x400(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x401(0x3) UNKNOWN PROPERTY
		FLinearColor GlowColor; // 0x404(0x10)
		bool UseBehindCircle; // 0x414(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x415(0x3) UNKNOWN PROPERTY
		FLinearColor BehindCircleColor; // 0x418(0x10)
		UWidgetAnimation* CurrentProgressAnimation; // 0x428(0x8)
		FMulticastInlineDelegate OnProgressTransitionFinished; // 0x430(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ProgressBar/WBP_UIKit_ProgressBar_Base.WBP_UIKit_ProgressBar_Base_C");
			return ret;
		}

		void SetSharpness(double Sharpness); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeProgressBar(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAnimateProgressChangeFinished(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetProgressGlow(bool UseGlow, double Intensity, bool UseGlowColor, FLinearColor Color); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCircularParameters(bool FillClokcwise, double Thickness_PX, double StartAngle, double EndAngle, double RotationAngle, double EdgeOffset_PX, bool UseBehindCircle, FLinearColor BehindCircleColor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetLiniarParameters(double CornerRoundness); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOutline(bool UseOutline, double OutlinePX); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSegments(bool UseSegments, bool SnapToSegments, double SegmentsCount, double SeparatorThickness); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetEmptyColor(FLinearColor EmptyColor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDeltaColor(FLinearColor DeltaStartColor, FLinearColor DeltaEndColor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDeltaVisibility(bool ShowDelta); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDurationTime(double DurationTime); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSize(double InWidth, double InHeight); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetType(bool IsCircular, bool IsRounded); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimateProgressChange(double CurrentProgress, double TargetProgress, double TimeDuration, UWidgetAnimation* ProgressAnimation); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFillColors(FLinearColor ColorA, FLinearColor ColorB, FLinearColor ColorC); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetProgressTransition(double Progress); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetProgress(double Progress); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ProgressBar_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnProgressTransitionFinished__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Items/WBP_UIKit_ItemDescription_Base.WBP_UIKit_ItemDescription_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1BC (0x46C - 0x2B0)
	class UWBP_UIKit_ItemDescription_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UWBP_UIKit_Tag_C* EquippedTag; // 0x2B8(0x8)
		UGridPanel* GameCompatible; // 0x2C0(0x8)
		UWrapBox* ModeTagsBox; // 0x2C8(0x8)
		UWBP_UIKit_Tag_C* RarityTag; // 0x2D0(0x8)
		UGridPanel* Root; // 0x2D8(0x8)
		USizeBox* SizeBox_Compatibilty; // 0x2E0(0x8)
		USizeBox* SizeBoxTitle; // 0x2E8(0x8)
		UNamedSlot* Slot_Bottom; // 0x2F0(0x8)
		UCommonRichTextBlock* Text_Body; // 0x2F8(0x8)
		UCommonTextBlock* Text_Compatibility; // 0x300(0x8)
		UCommonTextBlock* Text_Title; // 0x308(0x8)
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
		unsigned char UnknownData00_6[0x3]; // 0x3CD(0x3) UNKNOWN PROPERTY
		FMargin BodyTextPadding; // 0x3D0(0x10)
		TEnumAsByte<E_UIKit_ItemDescription_TextWrapType> TitleWrap; // 0x3E0(0x1)
		bool HideCompatibility; // 0x3E1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x3E2(0x2) UNKNOWN PROPERTY
		int32_t CompatibilityRow; // 0x3E4(0x4)
		FMargin CompatibilityPadding; // 0x3E8(0x10)
		UClass* GameTagClass; // 0x3F8(0x8)
		TEnumAsByte<E_UI_TagType> GameTagType; // 0x400(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x401(0x7) UNKNOWN PROPERTY
		TArray<FText> GameTags; // 0x408(0x10)
		bool HideRarityTag; // 0x418(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x419(0x3) UNKNOWN PROPERTY
		float TitleMaxHeight; // 0x41C(0x4)
		bool TagWrapSizeDefault; // 0x420(0x1)
		bool TagWrapSizeMobile; // 0x421(0x1)
		bool HideCategoryText; // 0x422(0x1)
		bool HideStyleText; // 0x423(0x1)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x424(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x425(0x3) UNKNOWN PROPERTY
		UDataTable* BodyTextCustomTextStyle; // 0x428(0x8)
		FSlateColor CompatibilityTitleColor; // 0x430(0x14)
		int32_t BottomSlotRow; // 0x444(0x4)
		bool CanShowEquippedTag; // 0x448(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x449(0x3) UNKNOWN PROPERTY
		FLinearColor EquippedTagBackgroundColor; // 0x44C(0x10)
		FLinearColor EquippedTagForegroundColor; // 0x45C(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Items/WBP_UIKit_ItemDescription_Base.WBP_UIKit_ItemDescription_Base_C");
			return ret;
		}

		void SetMobileStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Alignments(TEnumAsByte<EHorizontalAlignment> Alignment); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetStyleTextVisibility(bool ShowText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearPlaceholderData(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetStyleText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCompatibilityVisibility(bool Show); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCompatibilityTags(TSet<FGameplayTag> Product Tags); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCompatibilityText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddCompatibilityTags(TArray<FText>& GameTags); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PresetForDesignTime(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWidgetLayout(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeWidget(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRarityTagVisibility(bool ShowTag); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRarityTagColors(FFortColorPalette& FortColorPalette); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRarityText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCategoryTextVisibility(bool ShowText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCategoryText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBodyTextVisibility(bool Show Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBodyText(FText& Text); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTitleText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ItemDescription_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_TabGroup_Base.WBP_UIKit_TabGroup_Base_C
	// Inherited from UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x330 (0x818 - 0x4E8)
	class UWBP_UIKit_TabGroup_Base_C : public UUIKitTabGroup	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4E8(0x8)
		UWidgetAnimation* Anim_PromptSpaceChange; // 0x4F0(0x8)
		UGridPanel* Next_Prompt; // 0x4F8(0x8)
		USizeBox* Next_SizeBox; // 0x500(0x8)
		USpacer* Next_Spacer; // 0x508(0x8)
		UCommonActionWidget* NextTabAction; // 0x510(0x8)
		UGridPanel* Prev_Prompt; // 0x518(0x8)
		USizeBox* Prev_SizeBox; // 0x520(0x8)
		USpacer* Prev_Spacer; // 0x528(0x8)
		UCommonActionWidget* PrevTabAction; // 0x530(0x8)
		UGridPanel* Root; // 0x538(0x8)
		UScrollBox* ScrollBox_Tabs; // 0x540(0x8)
		UGridPanel* TabsContainer; // 0x548(0x8)
		bool IsVertical; // 0x550(0x1)
		bool IsNaturalNavigation; // 0x551(0x1)
		TEnumAsByte<EHorizontalAlignment> TabGroupHorizontalAlignment; // 0x552(0x1)
		TEnumAsByte<EVerticalAlignment> TabGroupVerticalAlignment; // 0x553(0x1)
		FMargin TabGroupPadding; // 0x554(0x10)
		unsigned char UnknownData00_6[0x4]; // 0x564(0x4) UNKNOWN PROPERTY
		double TabSpacing; // 0x568(0x8)
		FName InitialSelectedTabID; // 0x570(0x4)
		int32_t InitialSelectedTabIndex; // 0x574(0x4)
		UClass* ButtonClass; // 0x578(0x8)
		TMap<FName, UClass*> ButtonClassOverride; // 0x580(0x50)
		bool UseMinButtonSize; // 0x5D0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5D1(0x3) UNKNOWN PROPERTY
		FIntPoint MinButtonSize; // 0x5D4(0x8)
		TEnumAsByte<EHorizontalAlignment> ButtonHorizontalAlignment; // 0x5DC(0x1)
		TEnumAsByte<EVerticalAlignment> ButtonVerticalAlignment; // 0x5DD(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x5DE(0x2) UNKNOWN PROPERTY
		FMargin ButtonPadding; // 0x5E0(0x10)
		FVector2D IconSize; // 0x5F0(0x10)
		FDataTableRowHandle Bumper_NextTab; // 0x600(0x10)
		FDataTableRowHandle Bumper_PrevTab; // 0x610(0x10)
		FDataTableRowHandle Trigger_NextTab; // 0x620(0x10)
		FDataTableRowHandle Trigger_PrevTab; // 0x630(0x10)
		FDataTableRowHandle BumperAndMouseScroll_NextTab; // 0x640(0x10)
		FDataTableRowHandle BumperAndMouseScroll_PrevTab; // 0x650(0x10)
		FDataTableRowHandle TriggerAndMouseScroll_NextTab; // 0x660(0x10)
		FDataTableRowHandle TriggerAndMouseScroll_PrevTab; // 0x670(0x10)
		TEnumAsByte<E_UI_TabsInputActionType> InputActions; // 0x680(0x1)
		bool InputActionsWithMouseScroll; // 0x681(0x1)
		bool HidePrompts; // 0x682(0x1)
		bool HideMouseAndKeyboardPrompts; // 0x683(0x1)
		unsigned char UnknownData03_6[0x4]; // 0x684(0x4) UNKNOWN PROPERTY
		double ReservedPromptSpace; // 0x688(0x8)
		bool AnimateReservedPromptSpace; // 0x690(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x691(0x7) UNKNOWN PROPERTY
		double TimeToHidePrompts; // 0x698(0x8)
		double TimeToShowPrompts; // 0x6A0(0x8)
		TEnumAsByte<EHorizontalAlignment> NextPromptHorizontalAlignment; // 0x6A8(0x1)
		TEnumAsByte<EVerticalAlignment> NextPromptVerticalAlignment; // 0x6A9(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x6AA(0x2) UNKNOWN PROPERTY
		FMargin NextPromptPadding; // 0x6AC(0x10)
		bool IsPromptsVisible; // 0x6BC(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x6BD(0x3) UNKNOWN PROPERTY
		UWBP_UIKit_Backplate_Base_C* ContentBackplate; // 0x6C0(0x8)
		bool UseBackplate; // 0x6C8(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x6C9(0x7) UNKNOWN PROPERTY
		UClass* BackplateClass; // 0x6D0(0x8)
		TEnumAsByte<E_UI_BackplateBrightness> BackplateBrightness; // 0x6D8(0x1)
		TEnumAsByte<E_UI_BackplateCornerRadius> BackplateCornerRadius; // 0x6D9(0x1)
		unsigned char UnknownData08_6[0x6]; // 0x6DA(0x6) UNKNOWN PROPERTY
		UWBP_UIKit_Backplate_Base_C* PrevPromptBackplate; // 0x6E0(0x8)
		UWBP_UIKit_Backplate_Base_C* NextPromptBackplate; // 0x6E8(0x8)
		TEnumAsByte<EHorizontalAlignment> PrevPromptHorizontalAlignment; // 0x6F0(0x1)
		TEnumAsByte<EVerticalAlignment> PrevPromptVerticalAlignment; // 0x6F1(0x1)
		unsigned char UnknownData09_6[0x2]; // 0x6F2(0x2) UNKNOWN PROPERTY
		FMargin PrevPromptPadding; // 0x6F4(0x10)
		bool UsePromptBackplate; // 0x704(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x705(0x3) UNKNOWN PROPERTY
		UClass* PromptsBackplateClass; // 0x708(0x8)
		TEnumAsByte<E_UI_BackplateBrightness> PromptBackplateBrightness; // 0x710(0x1)
		TEnumAsByte<E_UI_BackplateCornerRadius> PromptBackplateCornerRadius; // 0x711(0x1)
		unsigned char UnknownData11_6[0x6]; // 0x712(0x6) UNKNOWN PROPERTY
		FVector2D PromptBackplateMinSize; // 0x718(0x10)
		bool PromptsInsideTabsBackplate; // 0x728(0x1)
		ECommonInputType CurrentInputType; // 0x729(0x1)
		unsigned char UnknownData12_6[0x6]; // 0x72A(0x6) UNKNOWN PROPERTY
		UClass* DividerClass; // 0x730(0x8)
		TArray<FS_UI_DividerPosition> Dividers; // 0x738(0x10)
		double DividerSpacing; // 0x748(0x8)
		FMargin DividerPadding; // 0x750(0x10)
		bool UseInitialTabs; // 0x760(0x1)
		ESlateVisibility ScrollBarVisibility; // 0x761(0x1)
		unsigned char UnknownData13_6[0x6]; // 0x762(0x6) UNKNOWN PROPERTY
		TMap<FName, FS_UI_DividerData> CachedDividers; // 0x768(0x50)
		TMap<FName, USpacer*> CachedSpacers; // 0x7B8(0x50)
		TArray<FUIKitTabData> InitialTabsData; // 0x808(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_TabGroup_Base.WBP_UIKit_TabGroup_Base_C");
			return ret;
		}

		void SequenceEvent__ENTRYPOINTWBP_UIKit_TabGroup_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SequenceEvent__ENTRYPOINTWBP_UIKit_TabGroup_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SequenceEvent__ENTRYPOINTWBP_UIKit_TabGroup_Base(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveDividerWidget(FName TabID); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackplateProperties(UWBP_UIKit_Backplate_Base_C* Backplate, TEnumAsByte<E_UI_BackplateBrightness> Brightness, TEnumAsByte<E_UI_BackplateCornerRadius> Corner Radius); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveBackplateForPrompts(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddBackplateForPrompts(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveBackplate(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddBackplate(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetButtonClass(FName TabID, UClass* ButtonClass); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PresetForDesignTime(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveSpacer(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddSpacerToGrid(FName& TabID, int32_t Index); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScrollOnTabSelection(FName TabNameID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CacheInitialDividers(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddDividerToGrid(UWBP_UIKit_Divider_Base_C* Divider, int32_t Index, bool AddAfter); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupDivider(UWBP_UIKit_Divider_Base_C* InputPin); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAddDivider(FName& TabID, int32_t TabIndex, bool AddAfter); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitialTabSelection(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetInputActionsType(TEnumAsByte<E_UI_TabsInputActionType> InputActions, bool InputActionsWithMouseScroll); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveDividerByIndex(int32_t TabIndex, bool& DividerRemoved); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveDivider(FName TabID, bool& DividerRemoved); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddDividerByIndex(int32_t TabIndex, bool AddAfter); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddDivider(FName TabID, bool AddAfter); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveTabs(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveTabByIndex(int32_t Index, bool& TabRemoved); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddTab(UMVVMViewModelBase* Tab VM, FName Tab ID, int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateEmptyTabs(int32_t TabsCount); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveCachedWidgets(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveTabGroupWidgets(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OverrideInputActions(FDataTableRowHandle Next Tab, FDataTableRowHandle PreviousTab); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PopulateTabsFromData(TArray<FUIKitTabData>& Data); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTabViewModel(FName TabID, TScriptInterface<Class> VM); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetPromptsVisibility(bool& IsVisible); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPromptsVisibility(bool ShowPrompts); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePromptsVisibility(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateInputActions(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateTabLayout(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RestoreTabSelection(FName TabNameID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddTabToGrid(UWidget* Widget, int32_t Index); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupTabButton(FName Tab ID, UCommonButtonBase* Tab Button); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCreatedTab(FName Tab ID, UCommonButtonBase* Button); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTabCreation(FName TabNameID, UCommonButtonBase* TabButton); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Input Method Changed(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Trigger_End(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Tab Selected(FName TabID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Trigger_Start(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnTab Button Removal(FName TabID, UCommonButtonBase* TabButton); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Repeater_PromptSpaceChange(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_TabGroup_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/CoachMark/WBP_UIKit_CoachMark_Base.WBP_UIKit_CoachMark_Base_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x360 (0x750 - 0x3F0)
	class UWBP_UIKit_CoachMark_Base_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)
		UWidgetAnimation* Anim_Outro; // 0x3F8(0x8)
		UHorizontalBox* Buttons; // 0x400(0x8)
		UGridPanel* Content; // 0x408(0x8)
		UVerticalBox* Description; // 0x410(0x8)
		UImage* Image_Arrow; // 0x418(0x8)
		UImage* Image_Background; // 0x420(0x8)
		UCommonRichTextBlock* RichText_Description; // 0x428(0x8)
		UCommonRichTextBlock* RichText_Header; // 0x430(0x8)
		UGridPanel* TopGrid; // 0x438(0x8)
		UWBP_CaptureForPostBufferUpdate_C* WBP_CaptureForPostBufferUpdate; // 0x440(0x8)
		UWBP_CaptureForPostBufferUpdate_C* WBP_CaptureForPostBufferUpdate; // 0x448(0x8)
		USizeBox* WidgetSize; // 0x450(0x8)
		TEnumAsByte<E_UI_OutBoardPosition> ArrowPosition; // 0x458(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x459(0x7) UNKNOWN PROPERTY
		double OutsideOffset; // 0x460(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x468(0x8) UNKNOWN PROPERTY
		FSlateBrush Brush_Icon; // 0x470(0xB0)
		float Angle_Icon; // 0x520(0x4)
		TEnumAsByte<E_UI_DirectionLeftRightNone> IconPosition; // 0x524(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x525(0x3) UNKNOWN PROPERTY
		FText TextHeader; // 0x528(0x10)
		TEnumAsByte<ETextJustify> JustificationHeader; // 0x538(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x539(0x7) UNKNOWN PROPERTY
		FText TextDescription; // 0x540(0x10)
		FSlateColor DefaultDescriptoinColor; // 0x550(0x14)
		TEnumAsByte<ETextJustify> JustificationDescription; // 0x564(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x565(0x3) UNKNOWN PROPERTY
		FText TextDismissButton; // 0x568(0x10)
		bool IsShowDismissButton; // 0x578(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x579(0x7) UNKNOWN PROPERTY
		FText TextOtherActionButton; // 0x580(0x10)
		bool IsShowOtherActionButton; // 0x590(0x1)
		unsigned char UnknownData06_6[0xF]; // 0x591(0xF) UNKNOWN PROPERTY
		FSlateBrush BackgroundBrush; // 0x5A0(0xB0)
		float Widget_Width; // 0x650(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x654(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate ButtonDismissClicked; // 0x658(0x10)
		FMulticastInlineDelegate ButtonDismissHoldCompleted; // 0x668(0x10)
		FMulticastInlineDelegate ButtonOtherActionClicked; // 0x678(0x10)
		FMulticastInlineDelegate ButtonOtherActionHoldCompleted; // 0x688(0x10)
		double SafeZone; // 0x698(0x8)
		TArray<UClass*> In_Decorator_Classes; // 0x6A0(0x10)
		FDataTableRowHandle Input_Action_Other; // 0x6B0(0x10)
		FDataTableRowHandle Input_Action_Dismiss; // 0x6C0(0x10)
		UMaterialInstanceDynamic* BackgroundDynamicMaterial; // 0x6D0(0x8)
		TWeakObjectPtr<UClass*> DismissButtonClass; // 0x6D8(0x20)
		UWBP_UIKit_Button_Regular_C* DismissButton; // 0x6F8(0x8)
		TWeakObjectPtr<UClass*> OtherActionButtonClass; // 0x700(0x20)
		UWBP_UIKit_Button_Regular_C* OtherActionButton; // 0x720(0x8)
		UClass* HoldDataOther; // 0x728(0x8)
		bool RequiresHoldOther; // 0x730(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x731(0x7) UNKNOWN PROPERTY
		UClass* HoldDataDismiss; // 0x738(0x8)
		bool RequiresHoldDismiss; // 0x740(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x741(0x7) UNKNOWN PROPERTY
		UImage* Image_Icon; // 0x748(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/CoachMark/WBP_UIKit_CoachMark_Base.WBP_UIKit_CoachMark_Base_C");
			return ret;
		}

		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitBackground(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateVisibilityButtonBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Init Buttons(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTextDescription(FText Text, bool& Empty); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTextHeader(FText Text, bool& Empty); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetText(FText Text, UCommonRichTextBlock* TextBlock, bool& Empty); // Flags: Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitIcon(TEnumAsByte<E_UI_DirectionLeftRightNone> Direction); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitArrow(TEnumAsByte<E_UI_OutBoardPosition> Position); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_CEF7D6F14519FD13EDD5C6A6991497C9(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_1CF1DF24483FC4198FBCA5A3D27BAEAB(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnButtonDismissClicked(UCommonButtonBase* Button); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnButtonDismissHoldComplited(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnButtonOtherActionClicked(UCommonButtonBase* Button); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnButtonOtherActionHoldComplited(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_CoachMark_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ButtonOtherActionHoldCompleted__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ButtonOtherActionClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ButtonDismissHoldCompleted__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ButtonDismissClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Tag/WBP_UIKit_Tag_Base.WBP_UIKit_Tag_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x298 (0x548 - 0x2B0)
	class UWBP_UIKit_Tag_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UImage* Background; // 0x2B8(0x8)
		UGridPanel* GridText_AndOptionalIcon; // 0x2C0(0x8)
		USpacer* LabelSpacer; // 0x2C8(0x8)
		UGridPanel* TagContainer; // 0x2D0(0x8)
		UCommonTextBlock* Text_Label; // 0x2D8(0x8)
		UCommonTextBlock* Text_Tag; // 0x2E0(0x8)
		TEnumAsByte<E_UI_TagType> TagType; // 0x2E8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2E9(0x7) UNKNOWN PROPERTY
		FText TagText; // 0x2F0(0x10)
		FLinearColor TagColor; // 0x300(0x10)
		FMargin TagPadding; // 0x310(0x10)
		FLinearColor LabelColor; // 0x320(0x10)
		FMargin LabelPadding; // 0x330(0x10)
		FLinearColor BackgroundColor; // 0x340(0x10)
		UMaterialInstance* BackgroundMaterial; // 0x350(0x8)
		FText LabelText; // 0x358(0x10)
		FSlateFontInfo RarityFont; // 0x368(0x58)
		FSlateFontInfo PrimaryFont; // 0x3C0(0x58)
		FSlateFontInfo TertiaryFont_Bold; // 0x418(0x58)
		FSlateFontInfo TertiaryFont_Regular; // 0x470(0x58)
		FLinearColor StyleColor; // 0x4C8(0x10)
		FMargin StylePadding; // 0x4D8(0x10)
		FText StyleText; // 0x4E8(0x10)
		bool UseIcon; // 0x4F8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x4F9(0x7) UNKNOWN PROPERTY
		UImage* IconWidget; // 0x500(0x8)
		bool IconLeftAligned; // 0x508(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x509(0x7) UNKNOWN PROPERTY
		UMaterialInstance* IconMaterial; // 0x510(0x8)
		FVector2D IconSize; // 0x518(0x10)
		FLinearColor IconColor; // 0x528(0x10)
		FMargin IconPadding; // 0x538(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tag/WBP_UIKit_Tag_Base.WBP_UIKit_Tag_Base_C");
			return ret;
		}

		void SetIconPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconColor(FLinearColor Color); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconSize(FVector2D IconSize); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconMaterial(UMaterialInstance* IconMaterial); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddIcon(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetStyleTextPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetStyleTextColor(FLinearColor Color); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetStyleText(FText Text); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetLabelTextPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetLabelTextColor(FLinearColor Color); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetLabelText(FText Text); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTagBackgroundColor(FLinearColor Color); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTagVisibility(bool Visible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTagTextPadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTagTextColor(FLinearColor Color); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTagType(TEnumAsByte<E_UI_TagType> Type); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTagText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeTag(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Tag_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Badge/WBP_UIKit_Badge_Base.WBP_UIKit_Badge_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D8 (0x488 - 0x2B0)
	class UWBP_UIKit_Badge_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UImage* Background; // 0x2B8(0x8)
		UGridPanel* Content; // 0x2C0(0x8)
		UWBP_UIKit_StatusIndicator_C* StatusIndicator; // 0x2C8(0x8)
		UCommonTextBlock* Text_Badge; // 0x2D0(0x8)
		FText BadgeText; // 0x2D8(0x10)
		TEnumAsByte<E_UI_BadgeType> BadgeType; // 0x2E8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2E9(0x7) UNKNOWN PROPERTY
		FSlateFontInfo TextFont; // 0x2F0(0x58)
		FSlateFontInfo NumericFont; // 0x348(0x58)
		TEnumAsByte<E_UI_BadgeIndicatorType> IndicatorConfig; // 0x3A0(0x1)
		TEnumAsByte<E_UI_StatusIndicator_Type> Indicator_Type; // 0x3A1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x3A2(0x6) UNKNOWN PROPERTY
		UObject* IndicatorIcon; // 0x3A8(0x8)
		TEnumAsByte<E_UI_BadgeSize> BadgeSize; // 0x3B0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x3B1(0x3) UNKNOWN PROPERTY
		FMargin BadgePadding_Compact; // 0x3B4(0x10)
		FMargin BadgePadding_Default; // 0x3C4(0x10)
		unsigned char UnknownData03_6[0x4]; // 0x3D4(0x4) UNKNOWN PROPERTY
		FSlateFontInfo NumericFont_Compact; // 0x3D8(0x58)
		FSlateFontInfo TextFont_Compact; // 0x430(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Badge/WBP_UIKit_Badge_Base.WBP_UIKit_Badge_Base_C");
			return ret;
		}

		void RefreshBadge(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBadgeSize(TEnumAsByte<E_UI_BadgeSize> BadgeSize); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIndicatorType(TEnumAsByte<E_UI_StatusIndicator_Type> IndicatorType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIndicatorIcon(UObject* IconAsset); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIndicatorConfiguration(TEnumAsByte<E_UI_BadgeIndicatorType> Config); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBadgeType(TEnumAsByte<E_UI_BadgeType> Type); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeBadge(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBadgeText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Badge_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Throbber/WBP_UIKit_Throbber_Base.WBP_UIKit_Throbber_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x39 (0x2E9 - 0x2B0)
	class UWBP_UIKit_Throbber_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UImage* Throbber; // 0x2B8(0x8)
		TEnumAsByte<E_UI_ThrobberSize> ThrobberSize; // 0x2C0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2C1(0x3) UNKNOWN PROPERTY
		int32_t SizeSmall; // 0x2C4(0x4)
		int32_t SizeMedium; // 0x2C8(0x4)
		int32_t SizeLarge; // 0x2CC(0x4)
		TEnumAsByte<E_UI_ThrobberType> ThrobberStyle; // 0x2D0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2D1(0x7) UNKNOWN PROPERTY
		UMaterialInstance* MonochromaticInstance; // 0x2D8(0x8)
		UMaterialInstanceDynamic* CurrentMaterialInstance; // 0x2E0(0x8)
		bool DisplayBackground; // 0x2E8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Throbber/WBP_UIKit_Throbber_Base.WBP_UIKit_Throbber_Base_C");
			return ret;
		}

		void SetBackgroundVisibility(bool ShowBackground); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeStyle(TEnumAsByte<E_UI_ThrobberType> StyleType); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetThrobberSize(TEnumAsByte<E_UI_ThrobberSize> Size); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeThrobber(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Throbber_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Items/WBP_UIKit_ItemCard_Base.WBP_UIKit_ItemCard_Base_C
	// Inherited from UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x2B0 (0x1740 - 0x1490)
	class UWBP_UIKit_ItemCard_Base_C : public UUIKitHoldableModularButton	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x8)
		UWidgetAnimation* Anim_Hovered_Base; // 0x1498(0x8)
		UImage* Background; // 0x14A0(0x8)
		UWBP_UIKit_Block_Outline_C* Block_Outline; // 0x14A8(0x8)
		UImage* Compatibility_Icon; // 0x14B0(0x8)
		UWBP_CosmeticGating_WarningIcon_C* CosmeticGating_Icon; // 0x14B8(0x8)
		UWBP_UIKit_EquippedState_C* EquippedState_Outline; // 0x14C0(0x8)
		UGridPanel* IconsContainer; // 0x14C8(0x8)
		UFortLazyImage* LazyImage_Item; // 0x14D0(0x8)
		UGridPanel* LeftIndicators; // 0x14D8(0x8)
		UGridPanel* RightIndicators; // 0x14E0(0x8)
		UGridPanel* Root; // 0x14E8(0x8)
		USizeBox* SizeBox; // 0x14F0(0x8)
		UNamedSlot* Slot_Background; // 0x14F8(0x8)
		UNamedSlot* Slot_Custom; // 0x1500(0x8)
		UNamedSlot* Slot_Main; // 0x1508(0x8)
		UWBP_UIKit_Transference_C* UIKit_Transference; // 0x1510(0x8)
		FVector2D ItemCardSize; // 0x1518(0x10)
		UMaterialInstance* ItemMaterial; // 0x1528(0x8)
		TWeakObjectPtr<UObject*> ItemImage; // 0x1530(0x20)
		UMaterialInstanceDynamic* ItemDynamicMaterial; // 0x1550(0x8)
		FVector2D MobileItemSize; // 0x1558(0x10)
		FVector2D MobileRewardItemSize; // 0x1568(0x10)
		double ItemScaleDelta; // 0x1578(0x8)
		USoundBase* HoveredSound; // 0x1580(0x8)
		USoundBase* PressedSound; // 0x1588(0x8)
		bool IsEquippedStateSet; // 0x1590(0x1)
		bool IsLockedStateSet; // 0x1591(0x1)
		bool IsFavoriteStateSet; // 0x1592(0x1)
		bool IsArchiveStateSet; // 0x1593(0x1)
		unsigned char UnknownData00_6[0x4]; // 0x1594(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> Fallback_Image; // 0x1598(0x20)
		FMulticastInlineDelegate OnCardHovered; // 0x15B8(0x10)
		FMulticastInlineDelegate OnCardUnhovered; // 0x15C8(0x10)
		bool IsConflictStateSet; // 0x15D8(0x1)
		bool IsNewStateSet; // 0x15D9(0x1)
		bool ShowSmallAgeGateIcon; // 0x15DA(0x1)
		bool IsAgeGateStateSet; // 0x15DB(0x1)
		unsigned char UnknownData01_6[0x4]; // 0x15DC(0x4) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* BackgroundDynamicMaterial; // 0x15E0(0x8)
		bool Is_Equipped; // 0x15E8(0x1)
		bool Is_Secondary_Equipped; // 0x15E9(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x15EA(0x6) UNKNOWN PROPERTY
		UMaterialInterface* DefaultBackgroundMaterial; // 0x15F0(0x8)
		int32_t Equipped_Slot; // 0x15F8(0x4)
		bool ShowEquipNumbers; // 0x15FC(0x1)
		bool UseAdaptiveBackground; // 0x15FD(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x15FE(0x2) UNKNOWN PROPERTY
		UFortItemPreviewWidget* PreviewWidget; // 0x1600(0x8)
		TArray<FName> Preview_Actions; // 0x1608(0x10)
		UWBP_UIKit_ContextMenuAnchorButton_Base_C* Context_Menu; // 0x1618(0x8)
		bool ShouldClose; // 0x1620(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1621(0x7) UNKNOWN PROPERTY
		TMap<TEnumAsByte, UWBP_UIKit_StatusIndicator_Base_C*> StatusIndicatorCache; // 0x1628(0x50)
		TMap<TEnumAsByte, FS_UIKit_StatusIndicatorSpawnParams> StatusIndicators; // 0x1678(0x50)
		TMap<TEnumAsByte, int32_t> OverrideBangCounts; // 0x16C8(0x50)
		bool IsButtonFocused; // 0x1718(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x1719(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> Slot_Icon; // 0x1720(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Items/WBP_UIKit_ItemCard_Base.WBP_UIKit_ItemCard_Base_C");
			return ret;
		}

		void SetItemIsEquippedInOtherCategory(bool IsEquippedInOtherCategory); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OverrideStatusIndicatorBangCount(TEnumAsByte<E_UIKit_ItemCardStatusIndicator> Indicator, int32_t Value); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FindCachedStatusIndicator(TEnumAsByte<E_UIKit_ItemCardStatusIndicator> IndicatorType, UWBP_UIKit_StatusIndicator_Base_C* Status Indicator, bool& Valid); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UGridPanel FindStatusIndicatorPlacementContainer(TEnumAsByte<E_UIKit_StatusIndicatorPlacement> Placement); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveStatusIndicator(TEnumAsByte<E_UIKit_ItemCardStatusIndicator> Indicator); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Status Indicator Visibility(TEnumAsByte<E_UIKit_ItemCardStatusIndicator> Indicator, bool Visibility); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SelectCard(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFocusState(bool IsFocused); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Bind Preview Actions(UFortItemPreviewWidget* Preview Widget, UWBP_UIKit_ContextMenuAnchorButton_Base_C* Context Menu, UFortItemVM* Item VM); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Secondary Action Button Clicked(FName NameId); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Primary Preview Action Button Clicked(FName NameId); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Context Menu Action(UWBP_UIKit_ContextMenuAnchorButton_Base_C* Context Menu, FName Preview Action ID, FText Preview Action Text, int32_t In Action Info Sort Priority, FDataTableRowHandle In Action Info Interaction, FDelegateProperty& Preview Action IteractionDelegate); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundBlendMode(bool UseAdaptiveColor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetAnimationState(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Refresh Equipped Visibility(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Item Is Juno(bool IsIconVisible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Custom Widget(UFortItemVM* ItemVM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetIsItemAgeGatedFortCurrentExperience(UFortItemDefinition* Item Def, bool& Is Item Gated); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetIconStates(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetAreItemsAgeGated(TArray<UFortItemVM*>& ItemVMs, bool& Is Item Gated); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetIsItemAgeGated(UFortItemDefinition* Item Def, bool& Is Item Gated); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemIsAgeGated(bool IsAgeGated); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemIsNew(bool Is New); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PresetForDesignTime(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Default Background(FLinearColor Color 1, FLinearColor Color 2, float GradientStart, float GradientEnd, float GradientAngle); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySoundPressed(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySoundHovered(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridNudge(UWidget* Widget, FVector2D Nudge); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridPadding(UWidget* Widget, FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridLayer(UWidget* Widget, int32_t Layer); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridAlignment(UWidget* Widget, TEnumAsByte<EHorizontalAlignment> Horizontal, TEnumAsByte<EVerticalAlignment> Vertical); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGridColumnAndRow(UWidget* Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemAnimationScale(double& Item Scale); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemIsArchived(bool Is Archived); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemHasConflict(bool HasConflict); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemIsFavorite(bool Is Favorite); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemIsLocked(bool Is Locked); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemIsEquippedSecondary(bool Is Equipped, bool ShowEquippedSlotIndex, int32_t EquippedSlotIndex, TWeakObjectPtr<UObject*> SlotIcon); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemIsEquipped(bool Is Equipped); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemIsMultiGame(bool Has Transference); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemIsRestricted(bool IsCompatible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemIsEnhanced(bool Is Enhanced); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Item Color(FSlateColor VariantColor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemImage(TWeakObjectPtr<UObject*> Item Image); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemMaterial(UMaterialInstance* Material Instance); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateRoundCorners(UMaterialInstanceDynamic* DynamicMaterialInstance); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemCardSize(FVector2D ItemSize); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeItemCard(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_3676C6CA4C3EB62147F5FD96AF4186A1(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetAsyncBackground(TWeakObjectPtr<UMaterialInterface*> MaterialInterfaceValue); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ItemCard_Base(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCardUnhovered__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCardHovered__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Items/WBP_UIKit_EquippedState.WBP_UIKit_EquippedState_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x190 (0x440 - 0x2B0)
	class UWBP_UIKit_EquippedState_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UCommonVisibilitySwitcher* EmoteDisplaySwitcher; // 0x2B8(0x8)
		UFortLazyImage* EmoteWheelPositionImage; // 0x2C0(0x8)
		UCommonBorder* EquippedSection; // 0x2C8(0x8)
		UCommonBorder* Outline; // 0x2D0(0x8)
		UCommonTextBlock* Text_EquippedSlot; // 0x2D8(0x8)
		FSlateBrush OutlineColor; // 0x2E0(0xB0)
		FSlateBrush SlotColor; // 0x390(0xB0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Items/WBP_UIKit_EquippedState.WBP_UIKit_EquippedState_C");
			return ret;
		}

		void SetEquippedState(bool IsCurrentSlotEquipped, bool DisplaySlot, FText EquippedSlot, TWeakObjectPtr<UObject*> SlotImage); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_EquippedState(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Items/WBP_UIKit_Transference.WBP_UIKit_Transference_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2D8 - 0x2B0)
	class UWBP_UIKit_Transference_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UImage* Image; // 0x2B8(0x8)
		double MobileSizeMultiplier; // 0x2C0(0x8)
		FVector2D Size; // 0x2C8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Items/WBP_UIKit_Transference.WBP_UIKit_Transference_C");
			return ret;
		}

		void SetRoundedCorners(bool Is Rounded); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSize(FVector2D Size); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHasTransferenceModes(TSet<char> Compatible Modes); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHasTransference(bool Has Transference); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsEnhanced(bool Is Enhanced); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Transference(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ContextMenu/WBP_UIKit_ContextMenuAnchorButton_Base.WBP_UIKit_ContextMenuAnchorButton_Base_C
	// Inherited from UUIKitContextMenuAnchor -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x148 (0x450 - 0x308)
	class UWBP_UIKit_ContextMenuAnchorButton_Base_C : public UUIKitContextMenuAnchor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x8)
		UGridPanel* GridPanel_Root; // 0x310(0x8)
		TEnumAsByte<EMenuPlacement> MenuPlacement; // 0x318(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x319(0x7) UNKNOWN PROPERTY
		UUIKitContextMenuViewModel* ViewModel; // 0x320(0x8)
		UUIKitContextMenuActionContext* InteractionContext; // 0x328(0x8)
		UTexture2D* ButtonIcon; // 0x330(0x8)
		FText ButtonText; // 0x338(0x10)
		FSlateFontInfo Button_Text_Font; // 0x348(0x58)
		UMaterialInstance* Button_Background_Material; // 0x3A0(0x8)
		UMaterialInstance* Button_Outline_Material; // 0x3A8(0x8)
		FMargin Button_Padding; // 0x3B0(0x10)
		FMulticastInlineDelegate OnContextMenuOpened; // 0x3C0(0x10)
		FMulticastInlineDelegate OnContextMenuClosed; // 0x3D0(0x10)
		UWBP_UIKit_ButtonGeneric_Base_C* ContextMenuButton; // 0x3E0(0x8)
		UClass* ButtonClass; // 0x3E8(0x8)
		UWBP_UIKit_ContextMenu_C* SpawnedMenu; // 0x3F0(0x8)
		bool CloseMenuOnContextClicked; // 0x3F8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x3F9(0x7) UNKNOWN PROPERTY
		FDataTableRowHandle Triggering_Input_Action; // 0x400(0x10)
		FDataTableRowHandle BackActionHandle; // 0x410(0x10)
		bool UseBottomBarButtons; // 0x420(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x421(0x3) UNKNOWN PROPERTY
		int32_t Min_Width; // 0x424(0x4)
		int32_t Min_Height; // 0x428(0x4)
		bool UseQuickHotkeys; // 0x42C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x42D(0x3) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHovered; // 0x430(0x10)
		FMulticastInlineDelegate OnUnhovered; // 0x440(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ContextMenu/WBP_UIKit_ContextMenuAnchorButton_Base.WBP_UIKit_ContextMenuAnchorButton_Base_C");
			return ret;
		}

		void Update Quick Actions(); // Flags: Private|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Toggle Quick Actions(bool Enabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Focus for STW(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBackPressed(bool& bPassThrough); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CloseMenu(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePadding(FMargin Padding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBackground(UMaterialInstance* Background MI, UMaterialInstance* Outline MI); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateTextFont(FSlateFontInfo In Font); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateIcon(UTexture2D* Icon); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetContext(UUIKitContextMenuActionContext* InteractionContext_Data); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Init Context Menu(UObject* Widget); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMouseLeave(FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnButtonBaseClicked_ContextMenuButtonDynamic(UCommonButtonBase* Button); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleContextMenu(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextClicked(UObject* Item); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnMenuSpawned(UUserWidget* Widget); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__TestCall_PopupMenuAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ContextMenuAnchorButton_Base(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUnhovered__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHovered__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextMenuClosed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextMenuOpened__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ContextMenu/WBP_UIKit_ContextMenu.WBP_UIKit_ContextMenu_C
	// Inherited from UUIKitContextMenu -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x39 (0x431 - 0x3F8)
	class UWBP_UIKit_ContextMenu_C : public UUIKitContextMenu	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UUIKitContextMenuViewModel* UIKitContextMenuViewModel; // 0x400(0x8)
		UWidgetAnimation* Show; // 0x408(0x8)
		UCommonListView* Content; // 0x410(0x8)
		UImage* MouseCatcher; // 0x418(0x8)
		UWBP_BottomBarDecoyButton_C* WBP_BottomBarDecoyButton_Back; // 0x420(0x8)
		UWBP_BottomBarDecoyButton_C* WBP_BottomBarDecoyButton_Select; // 0x428(0x8)
		bool UseBottomBarButtons; // 0x430(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ContextMenu/WBP_UIKit_ContextMenu.WBP_UIKit_ContextMenu_C");
			return ret;
		}

		void SetUIKitContextMenuViewModel(UUIKitContextMenuViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitActions(TArray<UUIKitContextMenuActionWrapper*>& Actions); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply On_MouseCatcher_MouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Bottom Bar Button Visibility(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputMethodChanged(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ContextMenu(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ContextMenu/WBP_UIKit_ContextMenuListEntry.WBP_UIKit_ContextMenuListEntry_C
	// Inherited from UWBP_UIKit_Button_Generic_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x1780 - 0x1758)
	class UWBP_UIKit_ContextMenuListEntry_C : public UWBP_UIKit_Button_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1758(0x8)
		UWBP_UIKit_Block_Outline_C* WBP_UIKit_Block_Outline; // 0x1760(0x8)
		FDataTableRowHandle Interaction; // 0x1768(0x10)
		UUIKitContextMenuActionWrapper* Action; // 0x1778(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ContextMenu/WBP_UIKit_ContextMenuListEntry.WBP_UIKit_ContextMenuListEntry_C");
			return ret;
		}

		void OnLoaded_680981444C98AAB9F2F09C9F8D08AAA5(UObject* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InputMethodChanged(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_ContextMenuListEntry(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Highlight/WBP_UIKit_Highlight_Base.WBP_UIKit_Highlight_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x168 (0x418 - 0x2B0)
	class UWBP_UIKit_Highlight_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UImage* Background; // 0x2B8(0x8)
		USizeBox* SB_WidthLimit; // 0x2C0(0x8)
		UCommonTextBlock* Text_Highlight; // 0x2C8(0x8)
		FSlateFontInfo HighlightFont_Default; // 0x2D0(0x58)
		FS_UI_HighlightColors HighlightColors; // 0x328(0x50)
		TEnumAsByte<E_UI_HighlightType> HighlightType; // 0x378(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x379(0x7) UNKNOWN PROPERTY
		FText HighlightText; // 0x380(0x10)
		double MaxWidth; // 0x390(0x8)
		TEnumAsByte<E_UI_HighlightSize> HighlightSize; // 0x398(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x399(0x7) UNKNOWN PROPERTY
		FSlateFontInfo HighlightFont_Compact; // 0x3A0(0x58)
		FMargin HighlightPadding_Compact; // 0x3F8(0x10)
		FMargin Highlight_PaddingDefault; // 0x408(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Highlight/WBP_UIKit_Highlight_Base.WBP_UIKit_Highlight_Base_C");
			return ret;
		}

		void SetWidth(double MaxWidth); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetType(TEnumAsByte<E_UI_HighlightType> Type); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetText(FText Text); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeHighlight(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHighlightSize(TEnumAsByte<E_UI_HighlightSize> FontSize); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundStyle(TEnumAsByte<E_UI_HighlightType> HighlightType); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTextColor(FLinearColor Color); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnWidgetStyled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Highlight_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ItemShopTile/WBP_ItemShopTile_Base.WBP_ItemShopTile_Base_C
	// Inherited from UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x61 (0x1409 - 0x13A8)
	class UWBP_ItemShopTile_Base_C : public UUIKitModularButton	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x13B0(0x8)
		FMulticastInlineDelegate OnTileFocused; // 0x13B8(0x10)
		FVector2D 1x1TileSizeRatio; // 0x13C8(0x10)
		TArray<TScriptInterface> Components; // 0x13D8(0x10)
		FText CrewBlingShortDescriptionText; // 0x13E8(0x10)
		FText SubscriptionShortDescriptionText; // 0x13F8(0x10)
		bool IsHoverDisabled; // 0x1408(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ItemShopTile/WBP_ItemShopTile_Base.WBP_ItemShopTile_Base_C");
			return ret;
		}

		void GetTileWidget(UUserWidget* NewParam); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetOfferVM(UFortItemShopOfferVM* OfferVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTileAnchor(FVector2D& Anchor); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetOfferDescriptionVisibility(FText Description, bool IsSubscription, bool IsCrewBling, bool IsLevelBundle, bool IsSpecialOffer, ESlateVisibility& Visibility); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetOfferDescriptionText(FText Description, bool IsSubscription, bool IsCrewBling, FText& ShortDescription); // Flags: Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RegisterComponents(TArray<TScriptInterface>& Components); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOfferVM(UFortItemShopOfferVM* OfferVM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTileDimensions(FVector2D Dimensions); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHoveredState(bool IsHovered, bool IsImmediate); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPeekState(bool IsPeeked); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetTile(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAddedToFocusPath(FFocusEvent InFocusEvent); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RequestLoadPresentations(FString DisplayAssetPath); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Request3DPreview(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Disable Hover(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeTile(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRowState(TEnumAsByte<E_ItemShop_RowState> InRowState); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ItemShopTile_Base(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileFocused__DelegateSignature(UUserWidget* FocusedTile); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ItemShopTile/BPI_ItemShopTile.BPI_ItemShopTile_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBPI_ItemShopTile_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ItemShopTile/BPI_ItemShopTile.BPI_ItemShopTile_C");
			return ret;
		}

		void InitializeTile(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTileWidget(UUserWidget* NewParam); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Request3DPreview(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RequestLoadPresentations(FString DisplayAssetPath); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTileAnchor(FVector2D& Anchor); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTileDimensions(FVector2D Dimensions); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHoveredState(bool IsHovered, bool IsImmediate); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPeekState(bool IsPeeked); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRowState(TEnumAsByte<E_ItemShop_RowState> InRowState); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetTile(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetOfferVM(UFortItemShopOfferVM* OfferVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOfferVM(UFortItemShopOfferVM* OfferVM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_Tabs_Categories_Base.WBP_UIKit_Tabs_Categories_Base_C
	// Inherited from UWBP_UIKit_Tabs_C -> UWBP_UIKit_Tabs_Base_C -> UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x868 - 0x730)
	class UWBP_UIKit_Tabs_Categories_Base_C : public UWBP_UIKit_Tabs_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x730(0x8)
		UClass* CategoryClass; // 0x738(0x8)
		UClass* CategoryButtonClass; // 0x740(0x8)
		UClass* CategoryTabGroupClass; // 0x748(0x8)
		TArray<UUIKitTabGroupCategoryViewModel*> Local_Categories_View_Models; // 0x750(0x10)
		float ExpandAnimationDuration; // 0x760(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x764(0x4) UNKNOWN PROPERTY
		TArray<UWBP_UIKit_TabCategory_Base_C*> CategoryContainers; // 0x768(0x10)
		bool Skip_Expand_Animation; // 0x778(0x1)
		bool AllowMultipleExpandedCategories; // 0x779(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x77A(0x6) UNKNOWN PROPERTY
		FSlateBrush TabGroupBackground; // 0x780(0xB0)
		FMulticastInlineDelegate OnCategoryButtonClicked; // 0x830(0x10)
		FMulticastInlineDelegate OnCategoryTabSelected; // 0x840(0x10)
		FMulticastInlineDelegate OnCategoryTabClicked; // 0x850(0x10)
		bool AllowEmptyCategories; // 0x860(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x861(0x3) UNKNOWN PROPERTY
		FName Previous_Selected_Category; // 0x864(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_Tabs_Categories_Base.WBP_UIKit_Tabs_Categories_Base_C");
			return ret;
		}

		void AddButtonToGrid(UWidget* Widget, int32_t Index); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CheckCategoryChanged(FName CategoryID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsCategoryExpanded(FName CategoryID, bool& IsExpanded); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearCategorySelection(FName CategoryID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshFocusOnSelectionState(ECommonInputType InputType); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshCategorySelectableState(FName CategoryID, ECommonInputType InputType); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldDisplaySelectionOnCollapsedCategory(); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifyCategoryClicked(FName TabID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCategoryExpandedStateChanged(FName CategoryID, bool IsExpanded); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCategoryClick(FName CategoryID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExpandCategory(FName CategoryID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CopyTabsProps(UWBP_UIKit_Tabs_Base_C* Target); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsCategoryViewModelValid(UUIKitTabGroupCategoryViewModel* CategoryVM, bool& IsValid); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UCommonButtonBase GetCategorySelectedTabButton(FName CategoryID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UCommonButtonBase GetCategoryTabButton(FName CategoryID, FName TabNameID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCategoryViewModelByIndex(int32_t Index, UUIKitTabGroupCategoryViewModel* category); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCategoryViewModelByID(FName CategoryID, UUIKitTabGroupCategoryViewModel* category); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCategoryContainer(FName CategoryID, UWBP_UIKit_TabCategory_Base_C* Container); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCategoriesData(TArray<UUIKitTabGroupCategoryViewModel*>& Categories); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CollapseOthers(FName ExceptCategoryID); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateCategoryContainer(UWBP_UIKit_TabCategory_Base_C* Container); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnTabSelected(FName TabID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnCategoryTabSelected(FName CategoryID, FName TabID, UUIKitTabGroupButtonViewModel* TabVM); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnCategoryTabsInitialised(UWBP_UIKit_Tabs_Base_C* Tabs); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnCategoryTabClicked(FName CategoryID, FName TabID, UUIKitTabGroupButtonViewModel* TabVM); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnTabClicked(FName TabID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LatentDeselectAllCategories(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnCategoryExpandedStateChanged(FName CategoryID, bool IsExpanded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Input Method Changed(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Tabs_Categories_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryTabClicked__DelegateSignature(FName CategoryID, FName TabID, UUIKitTabGroupButtonViewModel* TabVM); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryTabSelected__DelegateSignature(FName CategoryID, FName TabID, UUIKitTabGroupButtonViewModel* TabVM); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryButtonClicked__DelegateSignature(UCommonButtonBase* Button, FName CategoryID, bool IsCategoryExpanded); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/Tabs/WBP_UIKit_TabCategory_Base.WBP_UIKit_TabCategory_Base_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x360 - 0x2B0)
	class UWBP_UIKit_TabCategory_Base_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UWidgetAnimation* Collapse_Horizontal; // 0x2B8(0x8)
		UWidgetAnimation* Collapse_Vertical; // 0x2C0(0x8)
		UBorder* Border_Background; // 0x2C8(0x8)
		UBorder* Border_Content; // 0x2D0(0x8)
		UImage* CollapsedArrow; // 0x2D8(0x8)
		UGridPanel* GridLayout; // 0x2E0(0x8)
		UOverlay* Overlay_Category; // 0x2E8(0x8)
		UNamedSlot* Slot_Category; // 0x2F0(0x8)
		bool Is_Vertical; // 0x2F8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2F9(0x3) UNKNOWN PROPERTY
		FName CategoryID; // 0x2FC(0x4)
		bool Is_Expanded; // 0x300(0x1)
		bool Skip_Expand_Animation; // 0x301(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x302(0x6) UNKNOWN PROPERTY
		UWBP_UIKit_Tabs_Base_C* CategoryTabs; // 0x308(0x8)
		float ExpandDuration; // 0x310(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x314(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCategoryTabSelected; // 0x318(0x10)
		FMulticastInlineDelegate OnCategoryTabsCreation; // 0x328(0x10)
		UClass* CategoryTabsClass; // 0x338(0x8)
		FMulticastInlineDelegate OnCategoryTabClicked; // 0x340(0x10)
		FMulticastInlineDelegate OnCategoryExpandedStateChanged; // 0x350(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/Tabs/WBP_UIKit_TabCategory_Base.WBP_UIKit_TabCategory_Base_C");
			return ret;
		}

		void ClearCategorySelection(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshHeaderVisuals(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetArrowVisibilty(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FocusSelectedCategoryTab(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExpandToSelectedItem(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackground(FSlateBrush& InBrush); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsExpanded(bool InIsExpanded, bool SkipAnim); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCategoryTabs(UWBP_UIKit_Tabs_Base_C* InnerTabs); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConstructTabGroup(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitContainer(UCommonButtonBase* HeaderTabButton, UUIKitTabGroupCategoryViewModel* CategoryVM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshGridFill(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshLayout(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnCategoryTabSelected(FName TabID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event OnCategoryTabClicked(FName TabID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TryFocusSelectedCategoryTab(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_TabCategory_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryExpandedStateChanged__DelegateSignature(FName CategoryID, bool IsExpanded); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryTabClicked__DelegateSignature(FName CategoryID, FName TabID, UUIKitTabGroupButtonViewModel* TabVM); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryTabsCreation__DelegateSignature(UWBP_UIKit_Tabs_Base_C* Tabs); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryTabSelected__DelegateSignature(FName CategoryID, FName TabID, UUIKitTabGroupButtonViewModel* TabVM); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /FortUILibrary/Systems/ItemShopTile/WBP_MPItemShop_TagRotator_Base.WBP_MPItemShop_TagRotator_Base_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x170 (0x448 - 0x2D8)
	class UWBP_MPItemShop_TagRotator_Base_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2D8(0x8)
		UWidgetAnimation* UnhoverCollapsed; // 0x2E0(0x8)
		UWidgetAnimation* HoverCollapsed; // 0x2E8(0x8)
		UWidgetAnimation* UnhoverFull; // 0x2F0(0x8)
		UWidgetAnimation* HoverFull; // 0x2F8(0x8)
		UWidgetAnimation* TextIn; // 0x300(0x8)
		UWidgetAnimation* TextOut; // 0x308(0x8)
		UBorder* Border_Background; // 0x310(0x8)
		UBorder* Border_Text; // 0x318(0x8)
		USizeBox* SizeBox_All; // 0x320(0x8)
		USpacer* Spacer_IconSpace_Left; // 0x328(0x8)
		USpacer* Spacer_IconSpace_Right; // 0x330(0x8)
		UCommonTextBlock* Text_Tag; // 0x338(0x8)
		float TimeBetweenTitleChanges; // 0x340(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x344(0x4) UNKNOWN PROPERTY
		FTimerHandle TimerHandle; // 0x348(0x8)
		int32_t CurrentTitleIndex; // 0x350(0x4)
		int32_t NumTitles; // 0x354(0x4)
		bool IsFullPreviewEnabled; // 0x358(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x359(0x7) UNKNOWN PROPERTY
		double TagHeight; // 0x360(0x8)
		double TagHeight_Mobile; // 0x368(0x8)
		UMaterialInterface* TagMaterial; // 0x370(0x8)
		FSlateFontInfo TagFont; // 0x378(0x58)
		ETextTransformPolicy TagTransformPolicy; // 0x3D0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x3D1(0x3) UNKNOWN PROPERTY
		FMargin TagPadding; // 0x3D4(0x10)
		bool IsFocused; // 0x3E4(0x1)
		bool PreviewFullInfoEnabled; // 0x3E5(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x3E6(0x2) UNKNOWN PROPERTY
		FText PreviewTitleText; // 0x3E8(0x10)
		UMaterialInstanceDynamic* TagMID; // 0x3F8(0x8)
		FSlateColor TextColor; // 0x400(0x14)
		unsigned char UnknownData04_6[0x4]; // 0x414(0x4) UNKNOWN PROPERTY
		FVector2D IconSpacerSize; // 0x418(0x10)
		double HoverAnimationLerp; // 0x428(0x8)
		bool IsEnhanced; // 0x430(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x431(0x7) UNKNOWN PROPERTY
		TArray<FText> TagTexts; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortUILibrary/Systems/ItemShopTile/WBP_MPItemShop_TagRotator_Base.WBP_MPItemShop_TagRotator_Base_C");
			return ret;
		}

		void Is TagText Visible(bool& bTagIsVisible); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayUnhoverAnimation(bool IsImmediate); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayHoverAnimation(bool IsImmediate); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowFirstTitle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHoverAnimationLerp(double LerpValue); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnhancedUpdated(bool IsEnhanced); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeTagRotator(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Focused State(bool IsFocused, bool IsImmediate); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateTagText(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionToNextTitle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextsUpdated(TArray<FText>& texts); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_4BEA4BB84D2F7E74F9B8E7BD39D43FCB(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_93579D2D45D380D158A40DBE05447600(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTagExit(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTagEnter(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_MPItemShop_TagRotator_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
