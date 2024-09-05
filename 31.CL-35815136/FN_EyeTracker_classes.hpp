#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EyeTracker
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EyeTracker.EyeTrackerFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EyeTracker.EyeTrackerFunctionLibrary");
			return ret;
		}

		void SetEyeTrackedPlayer(APlayerController* PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74BCACAF0(relative to base address)
		bool IsStereoGazeDataAvailable(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BCACAAC(relative to base address)
		bool IsEyeTrackerConnected(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74BCACA60(relative to base address)
		bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BCAC9C8(relative to base address)
		bool GetGazeData(FEyeTrackerGazeData& OutGazeData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74BCAC8D0(relative to base address)
	};

}
