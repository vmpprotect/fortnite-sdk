#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DynamicPoiPointProviderRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DynamicPoiPointProviderRuntime.AIServiceDynamicPoiPointProvider
	// Inherited from UAthenaAIService -> UObject
	// Size: 0x50 (0xC8 - 0x78)
	class UAIServiceDynamicPoiPointProvider : public UAthenaAIService	
	{
	public:
		FGameplayTagContainer DynamicPOIPointProviderTags; // 0x78(0x20)
		TArray MaxActorConditions; // 0x98(0x10)
		int32_t DefaultMaxActorCount; // 0xA8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		UAthenaAIServicePlayerBots CachedAIServicePlayerBots; // 0xB0(0x8)
		TArray DynamicPoiPointProviders; // 0xB8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicPoiPointProviderRuntime.AIServiceDynamicPoiPointProvider");
			return ret;
		}
	};


	// Class DynamicPoiPointProviderRuntime.DynamicPoiPointProvider
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class UDynamicPoiPointProvider : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		AFortGameStateAthena CachedGameState; // 0x30(0x8)
		UFortAthenaLivingWorldManager CachedLivingWorldManager; // 0x38(0x8)
		FGameplayTagContainer PointProviderFiltersTags; // 0x40(0x20)
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x60(0x68)
		FBox Box; // 0xC8(0x38)
		TArray Locations; // 0x100(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicPoiPointProviderRuntime.DynamicPoiPointProvider");
			return ret;
		}
	};

}
