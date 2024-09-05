#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicGamesAssets
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EpicGamesAssets.PlayedSoundReplication
	// Inherited from AActor -> UObject
	// Size: 0x40 (0x2D0 - 0x290)
	class APlayedSoundReplication : public AActor	
	{
	public:
		double StartTime; // 0x290(0x8)
		bool bPlaySound2D; // 0x298(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x299(0x7) UNKNOWN PROPERTY
		UVerseAssetPtr* SoundAsset; // 0x2A0(0x8)
		UAudioComponent* AudioComponent; // 0x2A8(0x8)
		USoundAttenuation* SoundAttenuation; // 0x2B0(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x2B8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicGamesAssets.PlayedSoundReplication");
			return ret;
		}

		void OnSystemFinished(UAudioComponent* FinishedComponent); // Flags: Final|Native|Private, Memory Exec: 0x7FF7503ED064(relative to base address)
		void OnRep_SoundAsset(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7503ECFCC(relative to base address)
	};


	// Class EpicGamesAssets.SpawnedParticleSystemReplication
	// Inherited from AActor -> UObject
	// Size: 0x38 (0x2C8 - 0x290)
	class ASpawnedParticleSystemReplication : public AActor	
	{
	public:
		double StartTime; // 0x290(0x8)
		UVerseAssetPtr* VFXAsset; // 0x298(0x8)
		UNiagaraComponent* VFXComponent; // 0x2A0(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x2A8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicGamesAssets.SpawnedParticleSystemReplication");
			return ret;
		}

		void OnSystemFinished(UNiagaraComponent* FinishedComponent); // Flags: Final|Native|Private, Memory Exec: 0x7FF7503ED064(relative to base address)
		void OnRep_VFXAsset(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7503ED050(relative to base address)
		void OnRep_StartTime(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7503ECFE0(relative to base address)
	};

}
