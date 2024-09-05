#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActivityCategoryTilePanelBase
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityCategoryTilePanelBase.ActivityCategoryTilePanelBase_C
	// Inherited from UFortActivityCategoryTilePanel -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x378 - 0x348)
	class UActivityCategoryTilePanelBase_C : public UFortActivityCategoryTilePanel	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x8)
		UWidgetAnimation* OnMoveUpOutOfView; // 0x350(0x8)
		UWidgetAnimation* ActiveInactivate; // 0x358(0x8)
		UVerticalBox* VerticalBox_Content; // 0x360(0x8)
		double EntryHeight; // 0x368(0x8)
		double EntryWidth; // 0x370(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityCategoryTilePanelBase.ActivityCategoryTilePanelBase_C");
			return ret;
		}

		void MoveUpOutOfView(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoveDownIntoView(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnableMouseWheelInput(bool bListenForInput); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetActive(bool IsActive); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityCategoryTilePanelBase(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
