#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SpecialSurfaceCoverageRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SpecialSurfaceCoverageRuntime.FortGameStateComponent_SurfaceCoverageMap
	// Inherited from UFortGameStateComponent_SurfaceOverride -> UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x110 - 0xA8)
	class UFortGameStateComponent_SurfaceCoverageMap : public UFortGameStateComponent_SurfaceOverride	
	{
	public:
		unsigned char UnknownData01_1[0x68]; // 0xA8(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialSurfaceCoverageRuntime.FortGameStateComponent_SurfaceCoverageMap");
			return ret;
		}

		bool UpdateCoverageMap(UObject WorldContextObject, UTextureRenderTarget2D SpecialSurfaceRenderTarget, FVector& InTopLeftWorldCoordinate, FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D4CE18
	};

}
