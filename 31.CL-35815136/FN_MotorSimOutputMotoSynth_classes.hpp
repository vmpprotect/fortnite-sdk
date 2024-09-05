#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotorSimOutputMotoSynth
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MotorSimOutputMotoSynth.MotorSimOutputMotoSynth
	// Inherited from USynthComponentMoto -> USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA20 - 0xA20)
	class UMotorSimOutputMotoSynth : public USynthComponentMoto	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorSimOutputMotoSynth.MotorSimOutputMotoSynth");
			return ret;
		}
	};

}
