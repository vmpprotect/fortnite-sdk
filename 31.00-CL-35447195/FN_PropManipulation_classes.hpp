#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PropManipulation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PropManipulation.PropManipulationNativeComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPropManipulationNativeComponent : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PropManipulation.PropManipulationNativeComponent");
			return ret;
		}

		void SetControlledObjectsVisibilityAndCollision(TArray InObjectsOfControl, bool InNewVisibility); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D8B480
		void RefreshTrackedActors(UPlayspaceComponent_SpatialActorTracker InPlaySpaceComponent_SpatialActorTracker); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D8B3A0
	};

}
