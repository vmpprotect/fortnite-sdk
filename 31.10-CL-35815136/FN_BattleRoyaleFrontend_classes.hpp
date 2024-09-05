#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BattleRoyaleFrontend
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class BattleRoyaleFrontend.BattleRoyaleFrontendExperienceFlow
	// Inherited from UObject
	// Size: 0x118 (0x140 - 0x28)
	class UBattleRoyaleFrontendExperienceFlow : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		TArray<FString> DefaultFlowStepArray; // 0x48(0x10)
		TArray<FString> FirstTimeSeasonFlowStepArray; // 0x58(0x10)
		TMap<FString, FString> BRVideoRating; // 0x68(0x50)
		unsigned char UnknownData01_6[0x18]; // 0xB8(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> VideoPlayerClass; // 0xD0(0x20)
		unsigned char UnknownData02_6[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		UClass* HabaneroIntroModalClass; // 0xF8(0x8)
		TWeakObjectPtr<UClass*> FireModeSelectionReminderModalClass; // 0x100(0x20)
		TWeakObjectPtr<UClass*> FireModeSelectionScreenClass; // 0x120(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattleRoyaleFrontend.BattleRoyaleFrontendExperienceFlow");
			return ret;
		}

		void HandleVideoTerminalError(EBaseMediaTerminalErrorReason Reason); // Flags: Final|Native|Private, Memory Exec: 0x7FF7511EBE90(relative to base address)
		void HandleSeasonTrailerEnded(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7511EBE7C(relative to base address)
		void HandleBattlePassTrailerEnded(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7511EBE68(relative to base address)
		void FinishTrailerStep(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7511EBE54(relative to base address)
	};

}
