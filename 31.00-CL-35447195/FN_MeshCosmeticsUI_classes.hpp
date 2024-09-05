#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MeshCosmeticsUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MeshCosmeticsUI.FortVariantRedirectorTile
	// Inherited from UFortVariantEditorWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE8 (0x4A0 - 0x3B8)
	class UFortVariantRedirectorTile : public UFortVariantEditorWidgetBase	
	{
	public:
		UDynamicEntryBox EntryBox_VariantOptions; // 0x3B8(0x8)
		UCommonTextBlock Text_VariantName; // 0x3C0(0x8)
		TWeakObjectPtr SprayCustomizerClass; // 0x3C8(0x20)
		UFortVariantSprayCustomizerConfig SprayCustomizerConfig; // 0x3E8(0x8)
		FDataTableRowHandle ClearAllSlotsInputAction; // 0x3F0(0x10)
		FDataTableRowHandle RandomizeSpraysInputAction; // 0x400(0x10)
		TWeakObjectPtr ItemDefinition; // 0x410(0x8)
		TArray LoadedEmotesToRandomize; // 0x418(0x10)
		FMulticastInlineDelegate OnVariantEngagedEvent; // 0x428(0x10)
		unsigned char UnknownData01_7[0x68]; // 0x438(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmeticsUI.FortVariantRedirectorTile");
			return ret;
		}

		void OnVariantChangedEvent__DelegateSignature(FMcpVariantChannelInfo& InChannelInfo); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF414093CE8
		UWidget HandleBoundaryNavigation(EUINavigation InNavigation); // Flags: Final|Native|Private 0x7FF414093C08
		UWidget GetButtonToFocus(); // Flags: Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414093B28
	};


	// Class MeshCosmeticsUI.FortVariantSprayCustomizerConfig
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UFortVariantSprayCustomizerConfig : public UDataAsset	
	{
	public:
		TMap SprayCustomizerOptions; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmeticsUI.FortVariantSprayCustomizerConfig");
			return ret;
		}
	};


	// Class MeshCosmeticsUI.FortVariantRedirectorTileButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x13F0 - 0x1390)
	class UFortVariantRedirectorTileButton : public UCommonButtonBase	
	{
	public:
		UOverlay ImageOverlay; // 0x1390(0x8)
		UFortLazyImage LazyImage_TileIcon; // 0x1398(0x8)
		ERedirectorTileDisplayMode DisplayMode; // 0x13A0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x13A1(0x3) UNKNOWN PROPERTY
		float SlotOpacitySprayAssigned; // 0x13A4(0x4)
		float SlotOpacitySprayNotAssigned; // 0x13A8(0x4)
		unsigned char UnknownData03_7[0x44]; // 0x13AC(0x44) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmeticsUI.FortVariantRedirectorTileButton");
			return ret;
		}
	};


	// Class MeshCosmeticsUI.FortVariantSprayCustomizer
	// Inherited from UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x878 - 0x720)
	class UFortVariantSprayCustomizer : public UFortItemPreviewScreen	
	{
	public:
		UCommonButtonBase Button_Back; // 0x720(0x8)
		UCommonButtonBase Button_Confirm; // 0x728(0x8)
		UCommonButtonBase Button_HideArchivedItems; // 0x730(0x8)
		UCommonButtonBase Button_ShowArchivedItems; // 0x738(0x8)
		UWidget Widget_ArchivedItemsButtons; // 0x740(0x8)
		UCommonButtonBase Button_SpraysTab; // 0x748(0x8)
		UCommonButtonBase Button_SettingsTab; // 0x750(0x8)
		UCommonButtonBase Button_TouchClose; // 0x758(0x8)
		UCommonActionWidget ActionWidget_TabLeft; // 0x760(0x8)
		UCommonActionWidget ActionWidget_TabRight; // 0x768(0x8)
		UCommonActivatableWidgetSwitcher Switcher_Tabs; // 0x770(0x8)
		UWidget Widget_Sprays; // 0x778(0x8)
		UWidget Widget_Settings; // 0x780(0x8)
		UFortVariantItemTexturePicker TexturePicker_Sprays; // 0x788(0x8)
		UFortVariantSprayCustomizerSetting Setting_Saturation; // 0x790(0x8)
		UFortVariantSprayCustomizerSetting Setting_Wear; // 0x798(0x8)
		UFortVariantSprayCustomizerSetting Setting_Scale; // 0x7A0(0x8)
		FDataTableRowHandle TabLeftAction; // 0x7A8(0x10)
		FDataTableRowHandle TabRightAction; // 0x7B8(0x10)
		FGameplayTag ItemShopPreviewSceneChangerTag; // 0x7C8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x7CC(0x4) UNKNOWN PROPERTY
		UCommonButtonGroupLegacy TabButtonGroup; // 0x7D0(0x8)
		UFortCustomizableObjectSprayVariant SprayVariant; // 0x7D8(0x8)
		unsigned char UnknownData03_7[0x98]; // 0x7E0(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmeticsUI.FortVariantSprayCustomizer");
			return ret;
		}

		void BP_SetVariantEditorMode(bool bIsLockerMode); // Flags: Event|Protected|BlueprintEvent 0x7FF414CFEFF8
		void BP_SetChannelSlotIcon(TWeakObjectPtr& ChannelSlotIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CFEF18
	};


	// Class MeshCosmeticsUI.FortVariantSprayCustomizerSetting
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x2F8 - 0x2B8)
	class UFortVariantSprayCustomizerSetting : public UUserWidget	
	{
	public:
		UAnalogSlider Slider_Value; // 0x2B8(0x8)
		float CommitDelay; // 0x2C0(0x4)
		unsigned char UnknownData01_7[0x34]; // 0x2C4(0x34) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting");
			return ret;
		}

		void HandleSliderValueChanged(float NormalizedValue); // Flags: Final|Native|Private 0x7FF414CFF298
		void BP_OnSetConstraints(FFloatRange& Constraints); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CFF1B8
		void BP_OnChangeValue(float Value, float NormalizedValue); // Flags: Event|Protected|BlueprintEvent 0x7FF414CFF0D8
	};

}
