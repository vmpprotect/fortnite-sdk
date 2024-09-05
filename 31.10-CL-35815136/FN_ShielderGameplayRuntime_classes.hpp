#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ShielderGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ShielderGameplayRuntime.ShielderCollisionHelperComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x128 - 0xA0)
	class UShielderCollisionHelperComponent : public UGameFrameworkComponent	
	{
	public:
		ABuildingGameplayActor* ShielderBGA; // 0xA0(0x8)
		FVector StaticOffset; // 0xA8(0x18)
		FVector AimOffset; // 0xC0(0x18)
		FVector AimOffset2D; // 0xD8(0x18)
		float PitchMultiplier; // 0xF0(0x4)
		float PitchMin; // 0xF4(0x4)
		float PitchMax; // 0xF8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		FScalableFloat ShouldUpdateShielderSkelMesh; // 0x100(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ShielderGameplayRuntime.ShielderCollisionHelperComponent");
			return ret;
		}
	};

}
