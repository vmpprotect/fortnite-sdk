#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreatorRefreshMyIslandUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CreatorRefreshMyIslandUI.FortCreativeMyIslandSideNavWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x420 - 0x3F8)
	class UFortCreativeMyIslandSideNavWidget : public UCommonActivatableWidget	
	{
	public:
		FDataTableRowHandle SearchInputActionRow; // 0x3F8(0x10)
		FDataTableRowHandle ClearSearchInputActionRow; // 0x408(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x418(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreatorRefreshMyIslandUI.FortCreativeMyIslandSideNavWidget");
			return ret;
		}

		void SetSearchInputEnabled(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D97DC0
		void SetClearSearchInputEnabled(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D97CE0
		void OnSearchInput(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D97C00
		void OnClearSearchInput(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D97B20
	};

}
