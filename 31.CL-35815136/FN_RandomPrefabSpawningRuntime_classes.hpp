#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: RandomPrefabSpawningRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class RandomPrefabSpawningRuntime.FortPrefabSpawner
	// Inherited from AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class AFortPrefabSpawner : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer RequiredProperties; // 0x298(0x20)
		bool bWorldReadyCalled; // 0x2B8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x2B9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RandomPrefabSpawningRuntime.FortPrefabSpawner");
			return ret;
		}
	};


	// Class RandomPrefabSpawningRuntime.FortRandomPrefabSpawnHelper
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UFortRandomPrefabSpawnHelper : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		TArray<FFortRandomPrefabData> AllPrefabs; // 0xB0(0x10)
		TArray<FFortRandomPrefabData> PrefabPool; // 0xC0(0x10)
		unsigned char UnknownData01_6[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY
		FScalableFloat bAcceptDuplicatesWhenOutOfUniquePrefabs; // 0xD8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RandomPrefabSpawningRuntime.FortRandomPrefabSpawnHelper");
			return ret;
		}
	};

}
