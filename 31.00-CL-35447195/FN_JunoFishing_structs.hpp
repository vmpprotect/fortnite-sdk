#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoFishing
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoFishing.JunoFishingWeight
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoFishingWeight	
	{
	public:
		FGameplayTag tag; // 0x0(0x4)
		float Weight; // 0x4(0x4)
	};


	// Struct JunoFishing.JunoFishingBobWeights
	// Inherited from FTableRowBase
	// Size: 0x38 (0x40 - 0x8)
	struct FJunoFishingBobWeights : public FTableRowBase	
	{
	public:
		FGameplayTag BobType; // 0x8(0x4)
		float BaselineWeight; // 0xC(0x4)
		FGameplayTagContainer RequiredTags; // 0x10(0x20)
		TArray Weights; // 0x30(0x10)
	};


	// Struct JunoFishing.JunoFishingCatchWeights
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FJunoFishingCatchWeights : public FTableRowBase	
	{
	public:
		FGameplayTag BobType; // 0x8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray ItemsToCatch; // 0x10(0x10)
		FName LootTierGroupToCatch; // 0x20(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TArray Weights; // 0x28(0x10)
	};


	// Struct JunoFishing.JunoPlayerFishingTelemetryData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoPlayerFishingTelemetryData	
	{
	public:
		float TimeFishingSessionBegan; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UFortWorldItemDefinition ResultItem; // 0x8(0x8)
		TWeakObjectPtr ItemUsedToFish; // 0x10(0x8)
		bool bFromHotspot; // 0x18(0x1)
		bool bIsPlayerSpawnedHotspot; // 0x19(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
		FString HotspotTierTag; // 0x20(0x10)
		FString WaterBodyName; // 0x30(0x10)
		FString CatchTypeName; // 0x40(0x10)
	};

}
