#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StoreSelectionUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class StoreSelectionUI.FortStoreSelectionData
	// Inherited from UFortGameFeatureData -> UGameFeatureData -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x40 (0x580 - 0x540)
	class UFortStoreSelectionData : public UFortGameFeatureData	
	{
	public:
		TWeakObjectPtr StoreSelectionScreenClass; // 0x540(0x20)
		FText RegularStoreSelectedText; // 0x560(0x10)
		FText NonRegularStoreSelectedText; // 0x570(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StoreSelectionUI.FortStoreSelectionData");
			return ret;
		}
	};


	// Class StoreSelectionUI.FortStoreSelectionOptionEntry
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1400 - 0x13E0)
	class UFortStoreSelectionOptionEntry : public UCommonButtonLegacy	
	{
	public:
		UFortLazyImage Image_Icon; // 0x13E0(0x8)
		UCommonTextBlock Text_Description; // 0x13E8(0x8)
		UCommonTextBlock Text_Price; // 0x13F0(0x8)
		UCommonRichTextBlock RichText_Label; // 0x13F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StoreSelectionUI.FortStoreSelectionOptionEntry");
			return ret;
		}
	};


	// Class StoreSelectionUI.FortStoreSelectionScreen
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x348 (0x878 - 0x530)
	class UFortStoreSelectionScreen : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x530(0x8) UNKNOWN PROPERTY
		UCommonButtonGroupLegacy EntryBoxButtonGroup; // 0x538(0x8)
		UFortRealMoneyOffer StoreOffer; // 0x540(0x8)
		UCommonLoadGuard StoreOfferLoadGuard; // 0x548(0x8)
		UCommonTextBlock Text_Header; // 0x550(0x8)
		UDynamicEntryBox DynamicEntryBox_Options; // 0x558(0x8)
		UCommonButtonLegacy Button_Continue; // 0x560(0x8)
		UCommonButtonLegacy Button_Cancel; // 0x568(0x8)
		UCommonRichTextBlock RichText_InitiallySelectedHint; // 0x570(0x8)
		TScriptInterface PurchaseChoiceOwner; // 0x578(0x10)
		TArray StoreOptions; // 0x588(0x10)
		TWeakObjectPtr SoftDisplayAsset; // 0x598(0x20)
		FItemData ItemData; // 0x5B8(0x2A0)
		FText OptionalLabels; // 0x858(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StoreSelectionUI.FortStoreSelectionScreen");
			return ret;
		}
	};

}
