#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityBrowserTile_NEW_VM
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserTile_NEW_VM.ActivityBrowserTile_NEW_VM_C
	// Inherited from UFortActivityBrowserTile -> UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x1458 - 0x1450)
	class UActivityBrowserTile_NEW_VM_C : public UFortActivityBrowserTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserTile_NEW_VM.ActivityBrowserTile_NEW_VM_C");
			return ret;
		}

		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15DB6141700
		void ExecuteUbergraph_ActivityBrowserTile_NEW_VM(int32_t EntryPoint); // Flags: Final 0x15DB6149600
	};

}
