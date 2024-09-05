#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityCategoryTilePanelBase
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityCategoryTilePanelBase.ActivityCategoryTilePanelBase_C
	// Inherited from UFortActivityCategoryTilePanel -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x380 - 0x350)
	class UActivityCategoryTilePanelBase_C : public UFortActivityCategoryTilePanel	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x8)
		UWidgetAnimation OnMoveUpOutOfView; // 0x358(0x8)
		UWidgetAnimation ActiveInactivate; // 0x360(0x8)
		UVerticalBox VerticalBox_Content; // 0x368(0x8)
		double EntryHeight; // 0x370(0x8)
		double EntryWidth; // 0x378(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityCategoryTilePanelBase.ActivityCategoryTilePanelBase_C");
			return ret;
		}

		void MoveUpOutOfView(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F92F500
		void MoveDownIntoView(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F92F600
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5F92F400
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5F92F300
		void EnableMouseWheelInput(bool bListenForInput); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F92F800
		void SetActive(bool IsActive); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F92F200
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5F92F900
		void ExecuteUbergraph_ActivityCategoryTilePanelBase(int32_t EntryPoint); // Flags: Final 0x15D5F92F700
	};

}
