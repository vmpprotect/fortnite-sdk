#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoFishing
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		TArray RollFishingCatchItems(UObject WorldContextObject, FGameplayTagContainer& FishingTags, FGameplayTag& BobType); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E1A900
		FJunoFishingCatchWeights RollFishingCatch(UObject WorldContextObject, FGameplayTagContainer& FishingTags, FGameplayTag& BobType); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E1A820
		FGameplayTag RollFishingBobType(FGameplayTagContainer& FishingTags); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E1A740
		FGameplayTagContainer GetFishingTags(AFortPlayerPawn PlayerPawn); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414E1A660
		void FireEvent_EndJunoFishingSession(AFortPlayerPawn PlayerPawn, UFortWorldItemDefinition ItemFished, bool bFromHotspot, bool bIsPlayerSpawnedHotspot, FString HotspotTierTag, FString WaterBodyName, FString CatchTypeName, AActor ItemUsedToFish); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414E1A580
		void FireEvent_BeginJunoFishingSession(AFortPlayerPawn PlayerPawn); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414E1A4A0
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
