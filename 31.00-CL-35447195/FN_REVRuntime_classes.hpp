#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: REVRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class REVRuntime.REVComponent
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x8B0 - 0x880)
	class UREVComponent : public USynthComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x880(0x8) UNKNOWN PROPERTY
		UREVModel Model; // 0x888(0x8)
		URevSettings SimSettings; // 0x890(0x8)
		float PitchMultiplier; // 0x898(0x4)
		unsigned char UnknownData03_7[0x14]; // 0x89C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/REVRuntime.REVComponent");
			return ret;
		}

		void UpdateSimSettings(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBCD38
		void UpdateParameters(float InPitch, float InRPM, float InThrottle, float InVelocity, int32_t InGear, bool bInEnableShifting); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBCC58
		void SetSettings(URevSettings InSettings); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBCB78
		void SetRevModel(UREVModel InModel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBCA98
	};


	// Class REVRuntime.REVModel
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UREVModel : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		float SampleRate; // 0x58(0x4)
		int32_t NumChannels; // 0x5C(0x4)
		unsigned char UnknownData03_7[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/REVRuntime.REVModel");
			return ret;
		}
	};


	// Class REVRuntime.RevSettings
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class URevSettings : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		float UpShiftDuration; // 0x30(0x4)
		float UpShiftAttackDuration; // 0x34(0x4)
		float UpShiftAttackVolumeSpike; // 0x38(0x4)
		float UpShiftAttackRPM; // 0x3C(0x4)
		float UpShiftAttackThrottleTime; // 0x40(0x4)
		float UpShiftWobblePitchFreq; // 0x44(0x4)
		float UpShiftWobblePitchAmp; // 0x48(0x4)
		bool UpShiftWobbleEnabled; // 0x4C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		float UpShiftWobbleVolFreq; // 0x50(0x4)
		float UpShiftWobbleVolAmp; // 0x54(0x4)
		float UpShiftWobbleDuration; // 0x58(0x4)
		float DownShiftDuration; // 0x5C(0x4)
		float PopDuration; // 0x60(0x4)
		float ClutchRPMSpike; // 0x64(0x4)
		float ClutchRPMSpikeDuration; // 0x68(0x4)
		float ClutchRPMMergeTime; // 0x6C(0x4)
		unsigned char UnknownData05_7[0x10]; // 0x70(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/REVRuntime.RevSettings");
			return ret;
		}

		void UpdateSettings(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BBCE18
	};

}
