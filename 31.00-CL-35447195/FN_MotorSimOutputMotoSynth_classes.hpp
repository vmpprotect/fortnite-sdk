#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MotorSimOutputMotoSynth
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
