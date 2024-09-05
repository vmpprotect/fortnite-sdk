#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BladeHazardRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class BladeHazardRuntime.FortBladeHazard
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x18 (0x9A0 - 0x988)
	class AFortBladeHazard : public ABuildingGameplayActor	
	{
	public:
		EFortSawBladeSpinningDirection SpinningDirection; // 0x988(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x989(0x7) UNKNOWN PROPERTY
		TArray CustomForceDirections; // 0x990(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BladeHazardRuntime.FortBladeHazard");
			return ret;
		}

		FVector GetForceDirectionForHit(FHitResult& Hit); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CC9838
	};

}
