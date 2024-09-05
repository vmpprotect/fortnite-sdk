#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MeshCosmeticsUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MeshCosmeticsUI.FortVariantRedirectorTile
	// Inherited from UFortVariantEditorWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE8 (0x498 - 0x3B0)
	class UFortVariantRedirectorTile : public UFortVariantEditorWidgetBase	
	{
	public:
		UDynamicEntryBox* EntryBox_VariantOptions; // 0x3B0(0x8)
		UCommonTextBlock* Text_VariantName; // 0x3B8(0x8)
		TWeakObjectPtr<UClass*> SprayCustomizerClass; // 0x3C0(0x20)
		UFortVariantSprayCustomizerConfig* SprayCustomizerConfig; // 0x3E0(0x8)
		FDataTableRowHandle ClearAllSlotsInputAction; // 0x3E8(0x10)
		FDataTableRowHandle RandomizeSpraysInputAction; // 0x3F8(0x10)
		TWeakObjectPtr<UAthenaCosmeticItemDefinition*> ItemDefinition; // 0x408(0x8)
		TArray<FFortVariantRedirectorTileLoadedEmoteToRandomize> LoadedEmotesToRandomize; // 0x410(0x10)
		FMulticastInlineDelegate OnVariantEngagedEvent; // 0x420(0x10)
		unsigned char UnknownData00_7[0x68]; // 0x430(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmeticsUI.FortVariantRedirectorTile");
			return ret;
		}

		void OnVariantChangedEvent__DelegateSignature(FMcpVariantChannelInfo& InChannelInfo); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget HandleBoundaryNavigation(EUINavigation InNavigation); // Flags: Final|Native|Private, Memory Exec: 0x7FF7513BFBC0(relative to base address)
		UWidget GetButtonToFocus(); // Flags: Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EEF7FEC(relative to base address)
	};


	// Class MeshCosmeticsUI.FortVariantSprayCustomizerConfig
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UFortVariantSprayCustomizerConfig : public UDataAsset	
	{
	public:
		TMap<FGameplayTag, FFortVariantSprayCustomizerCosmeticOptions> SprayCustomizerOptions; // 0x30(0x50)

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
		UOverlay* ImageOverlay; // 0x1390(0x8)
		UFortLazyImage* LazyImage_TileIcon; // 0x1398(0x8)
		ERedirectorTileDisplayMode DisplayMode; // 0x13A0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x13A1(0x3) UNKNOWN PROPERTY
		float SlotOpacitySprayAssigned; // 0x13A4(0x4)
		float SlotOpacitySprayNotAssigned; // 0x13A8(0x4)
		unsigned char UnknownData01_7[0x44]; // 0x13AC(0x44) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmeticsUI.FortVariantRedirectorTileButton");
			return ret;
		}
	};


	// Class MeshCosmeticsUI.FortVariantSprayCustomizer
	// Inherited from UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x870 - 0x718)
	class UFortVariantSprayCustomizer : public UFortItemPreviewScreen	
	{
	public:
		UCommonButtonBase* Button_Back; // 0x718(0x8)
		UCommonButtonBase* Button_Confirm; // 0x720(0x8)
		UCommonButtonBase* Button_HideArchivedItems; // 0x728(0x8)
		UCommonButtonBase* Button_ShowArchivedItems; // 0x730(0x8)
		UWidget* Widget_ArchivedItemsButtons; // 0x738(0x8)
		UCommonButtonBase* Button_SpraysTab; // 0x740(0x8)
		UCommonButtonBase* Button_SettingsTab; // 0x748(0x8)
		UCommonButtonBase* Button_TouchClose; // 0x750(0x8)
		UCommonActionWidget* ActionWidget_TabLeft; // 0x758(0x8)
		UCommonActionWidget* ActionWidget_TabRight; // 0x760(0x8)
		UCommonActivatableWidgetSwitcher* Switcher_Tabs; // 0x768(0x8)
		UWidget* Widget_Sprays; // 0x770(0x8)
		UWidget* Widget_Settings; // 0x778(0x8)
		UFortVariantItemTexturePicker* TexturePicker_Sprays; // 0x780(0x8)
		UFortVariantSprayCustomizerSetting* Setting_Saturation; // 0x788(0x8)
		UFortVariantSprayCustomizerSetting* Setting_Wear; // 0x790(0x8)
		UFortVariantSprayCustomizerSetting* Setting_Scale; // 0x798(0x8)
		FDataTableRowHandle TabLeftAction; // 0x7A0(0x10)
		FDataTableRowHandle TabRightAction; // 0x7B0(0x10)
		FGameplayTag ItemShopPreviewSceneChangerTag; // 0x7C0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x7C4(0x4) UNKNOWN PROPERTY
		UCommonButtonGroupLegacy* TabButtonGroup; // 0x7C8(0x8)
		UFortCustomizableObjectSprayVariant* SprayVariant; // 0x7D0(0x8)
		unsigned char UnknownData01_7[0x98]; // 0x7D8(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmeticsUI.FortVariantSprayCustomizer");
			return ret;
		}

		void BP_SetVariantEditorMode(bool bIsLockerMode); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_SetChannelSlotIcon(TWeakObjectPtr<UObject*>& ChannelSlotIcon); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MeshCosmeticsUI.FortVariantSprayCustomizerSetting
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x2F0 - 0x2B0)
	class UFortVariantSprayCustomizerSetting : public UUserWidget	
	{
	public:
		UAnalogSlider* Slider_Value; // 0x2B0(0x8)
		float CommitDelay; // 0x2B8(0x4)
		unsigned char UnknownData00_7[0x34]; // 0x2BC(0x34) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting");
			return ret;
		}

		void HandleSliderValueChanged(float NormalizedValue); // Flags: Final|Native|Private, Memory Exec: 0x7FF7513BFC50(relative to base address)
		void BP_OnSetConstraints(FFloatRange& Constraints); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnChangeValue(float Value, float NormalizedValue); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
