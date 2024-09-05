#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CustomControlsUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CustomControlsUI.CustomControlsUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class ACustomControlsUIDirector : public ADynamicUIDirectorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsUI.CustomControlsUIDirector");
			return ret;
		}

		void BP_OnOptionsDeactivated(UCustomControlOptions_Base* Options); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnOptionsActivated(UCustomControlOptions_Base* Options); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CustomControlsUI.TwinStickCursorWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2B8 - 0x2B0)
	class UTwinStickCursorWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsUI.TwinStickCursorWidget");
			return ret;
		}
	};

}
