#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SidewaysCodeUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SidewaysCodeUI.SidewaysWidgetBase
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x328 - 0x318)
	class USidewaysWidgetBase : public UFortHUDElementWidget	
	{
	public:
		AFortPlayspaceReplicatedState* ReplicatedState; // 0x318(0x8)
		ESidewaysState CurrentSidewaysState; // 0x320(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x321(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SidewaysCodeUI.SidewaysWidgetBase");
			return ret;
		}

		void OnSidewaysStateChanged(USidewaysStateComponent* SidewaysStateComponent, ASidewaysPlayspace* NewPlayspace, ESidewaysState OldState, ESidewaysState NewState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751241CF8(relative to base address)
		void OnParamUpdated(FGameplayTag& UpdatedParam); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExitSideways(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnterSideways(ASidewaysPlayspace* Playspace); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsValidPlayspace(ASidewaysPlayspace* Playspace); // Flags: Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeVariables(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleFortPawnChanged(AFortPawn* PossessedPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751241C78(relative to base address)
		void ConfigureUIFromPlayspace(ASidewaysPlayspace* Playspace); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
