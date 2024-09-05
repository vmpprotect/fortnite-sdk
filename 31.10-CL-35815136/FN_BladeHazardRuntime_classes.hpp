#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BladeHazardRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class BladeHazardRuntime.FortBladeHazard
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x18 (0x9A0 - 0x988)
	class AFortBladeHazard : public ABuildingGameplayActor	
	{
	public:
		EFortSawBladeSpinningDirection SpinningDirection; // 0x988(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x989(0x7) UNKNOWN PROPERTY
		TArray<FTransform> CustomForceDirections; // 0x990(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BladeHazardRuntime.FortBladeHazard");
			return ret;
		}

		FVector GetForceDirectionForHit(FHitResult& Hit); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751201580(relative to base address)
	};

}
