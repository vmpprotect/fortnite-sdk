#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarCore_Test
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DelMarCore_Test.DelMarTestControllerTrackScrubber
	// Inherited from UFortTestControllerBase -> UGauntletTestController -> UObject
	// Size: 0x68 (0xC0 - 0x58)
	class UDelMarTestControllerTrackScrubber : public UFortTestControllerBase	
	{
	public:
		unsigned char UnknownData01_1[0x68]; // 0x58(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore_Test.DelMarTestControllerTrackScrubber");
			return ret;
		}

		void ReceiveTrackScrubberCompletedProfiling(); // Flags: Final|Native|Protected 0x7FF414DC7EE0
		void ReceiveRaceBeginEvent(FDelMarEvent_RaceActive& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DC7E00
	};

}
