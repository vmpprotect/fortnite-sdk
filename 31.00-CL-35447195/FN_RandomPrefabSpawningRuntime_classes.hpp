#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RandomPrefabSpawningRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class RandomPrefabSpawningRuntime.FortPrefabSpawner
	// Inherited from AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class AFortPrefabSpawner : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer RequiredProperties; // 0x298(0x20)
		bool bWorldReadyCalled; // 0x2B8(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x2B9(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		TArray AllPrefabs; // 0xB0(0x10)
		TArray PrefabPool; // 0xC0(0x10)
		unsigned char UnknownData03_6[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY
		FScalableFloat bAcceptDuplicatesWhenOutOfUniquePrefabs; // 0xD8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RandomPrefabSpawningRuntime.FortRandomPrefabSpawnHelper");
			return ret;
		}
	};

}
