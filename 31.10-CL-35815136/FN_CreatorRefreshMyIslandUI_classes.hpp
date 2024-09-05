#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CreatorRefreshMyIslandUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CreatorRefreshMyIslandUI.FortCreativeMyIslandSideNavWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x418 - 0x3F0)
	class UFortCreativeMyIslandSideNavWidget : public UCommonActivatableWidget	
	{
	public:
		FDataTableRowHandle SearchInputActionRow; // 0x3F0(0x10)
		FDataTableRowHandle ClearSearchInputActionRow; // 0x400(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x410(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreatorRefreshMyIslandUI.FortCreativeMyIslandSideNavWidget");
			return ret;
		}

		void SetSearchInputEnabled(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751712CAC(relative to base address)
		void SetClearSearchInputEnabled(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751712C24(relative to base address)
		void OnSearchInput(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnClearSearchInput(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
