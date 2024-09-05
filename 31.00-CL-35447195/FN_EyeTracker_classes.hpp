#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EyeTracker
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void SetEyeTrackedPlayer(APlayerController PlayerController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414499C58
		bool IsStereoGazeDataAvailable(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414499B78
		bool IsEyeTrackerConnected(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414499A98
		bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144999B8
		bool GetGazeData(FEyeTrackerGazeData& OutGazeData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144998D8
	};

}
