#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksSettingsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SparksSettingsRuntime.SparksClientSettingRecordPartition
	// Inherited from UFortClientSettingRecordPartition -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class USparksClientSettingRecordPartition : public UFortClientSettingRecordPartition	
	{
	public:
		float GameplayMusicVolume; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSettingsRuntime.SparksClientSettingRecordPartition");
			return ret;
		}

		void SetGameplayMusicVolume(float NewVolume); // Flags: Final|Native|Public, Memory Exec: 0x7FF7510E9A78(relative to base address)
		float GetGameplayMusicVolume(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF7496973C8(relative to base address)
	};


	// Class SparksSettingsRuntime.SparksSettingsControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class USparksSettingsControllerComponent : public UControllerComponent	
	{
	public:
		USoundControlBusMix* SparksMix; // 0xA0(0x8)
		USoundControlBus* SparksBus; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSettingsRuntime.SparksSettingsControllerComponent");
			return ret;
		}

		void UpdateSparksMixFromPartition(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF7510E9B04(relative to base address)
		USparksClientSettingRecordPartition GetSparksClientSettingRecordPartition(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF7510E9A54(relative to base address)
	};

}
