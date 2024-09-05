#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarCore_Test
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DelMarCore_Test.DelMarTestControllerTrackScrubber
	// Inherited from UFortTestControllerBase -> UGauntletTestController -> UObject
	// Size: 0x68 (0xC0 - 0x58)
	class UDelMarTestControllerTrackScrubber : public UFortTestControllerBase	
	{
	public:
		unsigned char UnknownData00_1[0x68]; // 0x58(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore_Test.DelMarTestControllerTrackScrubber");
			return ret;
		}

		void ReceiveTrackScrubberCompletedProfiling(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518A2B98(relative to base address)
		void ReceiveRaceBeginEvent(FDelMarEvent_RaceActive& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7518A2B18(relative to base address)
	};

}
