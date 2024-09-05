#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoFishing
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoFishing.JunoFishingAnalytics
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoFishingAnalytics : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoFishing.JunoFishingAnalytics");
			return ret;
		}
	};


	// Class JunoFishing.JunoFishingBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoFishingBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoFishing.JunoFishingBlueprintLibrary");
			return ret;
		}

		TArray RollFishingCatchItems(UObject* WorldContextObject, FGameplayTagContainer& FishingTags, FGameplayTag& BobType); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C47810(relative to base address)
		FJunoFishingCatchWeights RollFishingCatch(UObject* WorldContextObject, FGameplayTagContainer& FishingTags, FGameplayTag& BobType); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C47664(relative to base address)
		FGameplayTag RollFishingBobType(FGameplayTagContainer& FishingTags); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C475A0(relative to base address)
		FGameplayTagContainer GetFishingTags(AFortPlayerPawn* PlayerPawn); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751C47508(relative to base address)
		void FireEvent_EndJunoFishingSession(AFortPlayerPawn* PlayerPawn, UFortWorldItemDefinition* ItemFished, bool bFromHotspot, bool bIsPlayerSpawnedHotspot, FString HotspotTierTag, FString WaterBodyName, FString CatchTypeName, AActor* ItemUsedToFish); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751C47220(relative to base address)
		void FireEvent_BeginJunoFishingSession(AFortPlayerPawn* PlayerPawn); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751C4718C(relative to base address)
	};


	// Class JunoFishing.JunoPlayerControllerComponent_FishingAnalytics
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UJunoPlayerControllerComponent_FishingAnalytics : public UControllerComponent	
	{
	public:
		FJunoPlayerFishingTelemetryData PlayerFishingTelemetryData; // 0xA0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoFishing.JunoPlayerControllerComponent_FishingAnalytics");
			return ret;
		}
	};

}
