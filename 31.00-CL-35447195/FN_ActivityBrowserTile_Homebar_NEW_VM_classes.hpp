#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityBrowserTile_Homebar_NEW_VM
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserTile_Homebar_NEW_VM.ActivityBrowserTile_Homebar_NEW_VM_C
	// Inherited from UFortActivityBrowserTile -> UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1468 - 0x1450)
	class UActivityBrowserTile_Homebar_NEW_VM_C : public UFortActivityBrowserTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x8)
		FMulticastInlineDelegate BroadcastClickToRow; // 0x1458(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserTile_Homebar_NEW_VM.ActivityBrowserTile_Homebar_NEW_VM_C");
			return ret;
		}

		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15DB6084200
		void BndEvt__ActivityBrowserTile_Homebar_NEW_VM_Display_TileDetails_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6087A00
		void ExecuteUbergraph_ActivityBrowserTile_Homebar_NEW_VM(int32_t EntryPoint); // Flags: Final 0x15DB6082600
		void BroadcastClickToRow__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB608F800
	};

}
