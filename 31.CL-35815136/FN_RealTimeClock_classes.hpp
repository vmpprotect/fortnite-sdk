#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: RealTimeClock
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class RealTimeClock.RealTimeClockBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URealTimeClockBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RealTimeClock.RealTimeClockBlueprintLibrary");
			return ret;
		}

		FDateTime AddTimeToDate(FDateTime& DateTime, FTimespan& Timespan); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516D64C4(relative to base address)
	};

}
