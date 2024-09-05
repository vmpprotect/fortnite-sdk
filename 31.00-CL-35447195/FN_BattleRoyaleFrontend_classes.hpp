#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BattleRoyaleFrontend
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class BattleRoyaleFrontend.BattleRoyaleFrontendExperienceFlow
	// Inherited from UObject
	// Size: 0x118 (0x140 - 0x28)
	class UBattleRoyaleFrontendExperienceFlow : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		TArray DefaultFlowStepArray; // 0x48(0x10)
		TArray FirstTimeSeasonFlowStepArray; // 0x58(0x10)
		TMap BRVideoRating; // 0x68(0x50)
		unsigned char UnknownData04_6[0x18]; // 0xB8(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr VideoPlayerClass; // 0xD0(0x20)
		unsigned char UnknownData05_6[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		UClass HabaneroIntroModalClass; // 0xF8(0x8)
		TWeakObjectPtr FireModeSelectionReminderModalClass; // 0x100(0x20)
		TWeakObjectPtr FireModeSelectionScreenClass; // 0x120(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattleRoyaleFrontend.BattleRoyaleFrontendExperienceFlow");
			return ret;
		}

		void HandleVideoTerminalError(EBaseMediaTerminalErrorReason Reason); // Flags: Final|Native|Private 0x7FF414CC8958
		void HandleSeasonTrailerEnded(); // Flags: Final|Native|Private 0x7FF414CC8878
		void FinishTrailerStep(); // Flags: Final|Native|Private 0x7FF414CC8798
	};

}
