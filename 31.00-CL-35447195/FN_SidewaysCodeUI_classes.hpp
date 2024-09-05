#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SidewaysCodeUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SidewaysCodeUI.SidewaysWidgetBase
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x330 - 0x320)
	class USidewaysWidgetBase : public UFortHUDElementWidget	
	{
	public:
		AFortPlayspaceReplicatedState ReplicatedState; // 0x320(0x8)
		ESidewaysState CurrentSidewaysState; // 0x328(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x329(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidewaysCodeUI.SidewaysWidgetBase");
			return ret;
		}

		void OnSidewaysStateChanged(USidewaysStateComponent SidewaysStateComponent, ASidewaysPlayspace NewPlayspace, ESidewaysState OldState, ESidewaysState NewState); // Flags: Final|Native|Protected 0x7FF414CCD038
		void OnParamUpdated(FGameplayTag& UpdatedParam); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CCCF58
		void OnExitSideways(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCCE78
		void OnEnterSideways(ASidewaysPlayspace Playspace); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCCD98
		bool IsValidPlayspace(ASidewaysPlayspace Playspace); // Flags: Event|Protected|BlueprintEvent|Const 0x7FF414CCCCB8
		void InitializeVariables(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCCBD8
		void HandleFortPawnChanged(AFortPawn PossessedPawn); // Flags: Final|Native|Protected 0x7FF414CCCAF8
		void ConfigureUIFromPlayspace(ASidewaysPlayspace Playspace); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCCA18
	};

}
