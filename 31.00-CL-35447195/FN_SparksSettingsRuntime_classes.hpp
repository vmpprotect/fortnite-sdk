#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksSettingsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksSettingsRuntime.SparksClientSettingRecordPartition
	// Inherited from UFortClientSettingRecordPartition -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class USparksClientSettingRecordPartition : public UFortClientSettingRecordPartition	
	{
	public:
		float GameplayMusicVolume; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSettingsRuntime.SparksClientSettingRecordPartition");
			return ret;
		}

		void SetGameplayMusicVolume(float NewVolume); // Flags: Final|Native|Public 0x7FF414C394B8
		float GetGameplayMusicVolume(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF414C393D8
	};


	// Class SparksSettingsRuntime.SparksSettingsControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class USparksSettingsControllerComponent : public UControllerComponent	
	{
	public:
		USoundControlBusMix SparksMix; // 0xA0(0x8)
		USoundControlBus SparksBus; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSettingsRuntime.SparksSettingsControllerComponent");
			return ret;
		}

		void UpdateSparksMixFromPartition(); // Flags: Final|Native|Public|Const 0x7FF414C39678
		USparksClientSettingRecordPartition GetSparksClientSettingRecordPartition(); // Flags: Final|Native|Public|Const 0x7FF414C39598
	};

}
