#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActivityBrowserTile_Homebar_NEW_VM
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityBrowserTile_Homebar_NEW_VM(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BroadcastClickToRow__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
