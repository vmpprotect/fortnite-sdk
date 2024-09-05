#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PointLight
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PointLight.PointLightNativeComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xD0 (0x170 - 0xA0)
	class UPointLightNativeComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData03_3[0x90]; // 0xA0(0x90) UNKNOWN PROPERTY
		UTimelineComponent ShortCircuitTimelineComponent; // 0x130(0x8)
		unsigned char UnknownData04_6[0x18]; // 0x138(0x18) UNKNOWN PROPERTY
		FLinearColor FlickerColor; // 0x150(0x10)
		float ShortCircuitMinDelay; // 0x160(0x4)
		float ShortCircuitMaxDelay; // 0x164(0x4)
		unsigned char UnknownData05_7[0x8]; // 0x168(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PointLight.PointLightNativeComponent");
			return ret;
		}

		void UpdateShortCircuit(); // Flags: Final|Native|Private 0x7FF414D89EA0
		void UpdateDeviceSettings(FPointLightRhythmParameters& RhythmParameters); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D89DC0
		void StopShortCircuitUpdate(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D89CE0
		void StartShortCircuitUpdate(UTimelineComponent ShortCircuitTimeline); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D89C00
		void StartRhythmUpdate(FTimerHandle& TimerHandle, float Rate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D89B20
	};

}
