#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BP_SurfaceTrackingComponent_FortPawn
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /FortniteCore/BP_SurfaceTrackingComponent_FortPawn.BP_SurfaceTrackingComponent_FortPawn_C
	// Inherited from UFortSurfaceTrackingComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x188 - 0x188)
	class UBP_SurfaceTrackingComponent_FortPawn_C : public UFortSurfaceTrackingComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FortniteCore/BP_SurfaceTrackingComponent_FortPawn.BP_SurfaceTrackingComponent_FortPawn_C");
			return ret;
		}
	};

}
