#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WBP_Discover_Tile_Library
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/WBP_Discover_Tile_Library.WBP_Discover_Tile_Library_C
	// Inherited from UFortActivityBrowserLibraryTile -> UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1418 - 0x1400)
	class UWBP_Discover_Tile_Library_C : public UFortActivityBrowserLibraryTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1400(0x8)
		UWBP_UIKit_Button_Generic_C Button_Library; // 0x1408(0x8)
		UWBP_UIKit_CoachMark_C WBP_UIKit_CoachMark; // 0x1410(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/WBP_Discover_Tile_Library.WBP_Discover_Tile_Library_C");
			return ret;
		}

		void OnPrimaryContentPushed_49E49E2B4FEF75C2747B9E8D8F627F49(UCommonActivatableWidget ActivatableWidget); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EF400
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB53EF600
		void BndEvt__WBP_Discover_Tile_Library_WBP_UIKit_CoachMark_K2Node_ComponentBoundEvent_0_ButtonOtherActionClicked__DelegateSignature(); // Flags: BlueprintEvent 0x15DB53EF700
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB53EF300
		void BndEvt__WBP_Discover_Tile_Library_Button_Library_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB53EF900
		void BndEvt__WBP_Discover_Tile_Library_Button_Library_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB53EF800
		void ExecuteUbergraph_WBP_Discover_Tile_Library(int32_t EntryPoint); // Flags: Final 0x15DB53EF500
	};

}
