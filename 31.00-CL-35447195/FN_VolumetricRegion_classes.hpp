#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VolumetricRegion
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VolumetricRegion.VolumetricRegionNativeComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UVolumetricRegionNativeComponent : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VolumetricRegion.VolumetricRegionNativeComponent");
			return ret;
		}

		void RefreshTrackedActors(UPlayspaceComponent_SpatialActorTracker InPlaySpaceComponent_SpatialActorTracker); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CDFC58
	};

}
