#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Targeting
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /ScoutDrone/Targeting/TargetingSelectionTask_Trace_ScoutDroneAvatar.TargetingSelectionTask_Trace_ScoutDroneAvatar_C
	// Inherited from UTargetingSelectionTask_Trace -> UTargetingTask -> UObject
	// Size: 0x0 (0x170 - 0x170)
	class UTargetingSelectionTask_Trace_ScoutDroneAvatar_C : public UTargetingSelectionTask_Trace	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/Targeting/TargetingSelectionTask_Trace_ScoutDroneAvatar.TargetingSelectionTask_Trace_ScoutDroneAvatar_C");
			return ret;
		}

		FVector GetTraceDirection(FTargetingRequestHandle& TargetingHandle); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /ScoutDrone/Targeting/TargetingSelectionTask_Trace_ScoutDrone.TargetingSelectionTask_Trace_ScoutDrone_C
	// Inherited from UTargetingSelectionTask_Trace -> UTargetingTask -> UObject
	// Size: 0x0 (0x170 - 0x170)
	class UTargetingSelectionTask_Trace_ScoutDrone_C : public UTargetingSelectionTask_Trace	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/Targeting/TargetingSelectionTask_Trace_ScoutDrone.TargetingSelectionTask_Trace_ScoutDrone_C");
			return ret;
		}

		FVector GetSourceLocation(FTargetingRequestHandle& TargetingHandle); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetPlayerViewpointForTargetingHandle(FTargetingRequestHandle TargetingHandle, FTransform& PlayerViewPoint, bool& bViewpointValid); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector GetTraceDirection(FTargetingRequestHandle& TargetingHandle); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
