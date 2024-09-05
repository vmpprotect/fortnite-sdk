#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VolumetricRegion
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void RefreshTrackedActors(UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7512D1558(relative to base address)
	};

}
