#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PointLight
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PointLight.PointLightNativeComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xD0 (0x170 - 0xA0)
	class UPointLightNativeComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x90]; // 0xA0(0x90) UNKNOWN PROPERTY
		UTimelineComponent* ShortCircuitTimelineComponent; // 0x130(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x138(0x18) UNKNOWN PROPERTY
		FLinearColor FlickerColor; // 0x150(0x10)
		float ShortCircuitMinDelay; // 0x160(0x4)
		float ShortCircuitMaxDelay; // 0x164(0x4)
		unsigned char UnknownData02_7[0x8]; // 0x168(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PointLight.PointLightNativeComponent");
			return ret;
		}

		void UpdateShortCircuit(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516CC06C(relative to base address)
		void UpdateDeviceSettings(FPointLightRhythmParameters& RhythmParameters); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7516CBFDC(relative to base address)
		void StopShortCircuitUpdate(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516CBFC8(relative to base address)
		void StartShortCircuitUpdate(UTimelineComponent* ShortCircuitTimeline); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516CBE04(relative to base address)
		void StartRhythmUpdate(FTimerHandle& TimerHandle, float Rate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7516CBCF4(relative to base address)
	};

}
