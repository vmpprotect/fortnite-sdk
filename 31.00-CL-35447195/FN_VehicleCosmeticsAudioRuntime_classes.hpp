#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VehicleCosmeticsAudioRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VehicleCosmeticsAudioRuntime.GameFeatureAction_OverrideMaxLoadedVehicleAudio
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UGameFeatureAction_OverrideMaxLoadedVehicleAudio : public UGameFeatureAction	
	{
	public:
		int32_t DefaultSetting; // 0x28(0x4)
		int32_t XB1Setting; // 0x2C(0x4)
		int32_t XSXSetting; // 0x30(0x4)
		int32_t PS4Setting; // 0x34(0x4)
		int32_t PS5Setting; // 0x38(0x4)
		int32_t MobileSetting; // 0x3C(0x4)
		int32_t SwitchSetting; // 0x40(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x44(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsAudioRuntime.GameFeatureAction_OverrideMaxLoadedVehicleAudio");
			return ret;
		}
	};


	// Class VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController
	// Inherited from AFortVehicleAudioController -> AActor -> UObject
	// Size: 0x30 (0x418 - 0x3E8)
	class AVehicleCosmeticsAudioController : public AFortVehicleAudioController	
	{
	public:
		TWeakObjectPtr CachedEngineAudioItem; // 0x3E8(0x20)
		unsigned char UnknownData01_7[0x10]; // 0x408(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController");
			return ret;
		}

		void UpdateAudioData(UVehicleAudioCosmeticData CosmeticData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC4F98
		void HandleEngineAudioItemUpdated(TWeakObjectPtr EngineAudioItem); // Flags: Final|Native|Public 0x7FF414BC4EB8
		void HandleEngineAudioCosmeticsFailed(FVehicleCosmeticsFailureInfo ReasonInfo); // Flags: Final|Native|Public 0x7FF414BC4DD8
		void BP_OnEngineAudioDataLoaded(USoundBase Sound); // Flags: Event|Public|BlueprintEvent 0x7FF414BC4CF8
		void BP_OnEngineAudioDataEjected(); // Flags: Event|Public|BlueprintEvent 0x7FF414BC4C18
		void BP_OnCosmeticsFailed(FVehicleCosmeticsFailureInfo ReasonInfo); // Flags: Event|Public|BlueprintEvent 0x7FF414BC4B38
		void BP_OnCosmeticsDataUpdated(UVehicleAudioCosmeticData CosmeticData); // Flags: Event|Public|BlueprintEvent 0x7FF414BC4A58
	};


	// Class VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioManager
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x78 (0xB8 - 0x40)
	class UVehicleCosmeticsAudioManager : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData04_3[0x20]; // 0x40(0x20) UNKNOWN PROPERTY
		TArray LoadedAssets; // 0x60(0x10)
		unsigned char UnknownData05_6[0x10]; // 0x70(0x10) UNKNOWN PROPERTY
		int32_t DefaultMaxLoadedCosmetics; // 0x80(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		TArray DistancePriorities; // 0x88(0x10)
		float LocalPlayerCosmeticPriority; // 0x98(0x4)
		float PartyPlayerCosmeticPriority; // 0x9C(0x4)
		float LicensedCosmeticPriority; // 0xA0(0x4)
		float TickInterval; // 0xA4(0x4)
		unsigned char UnknownData07_7[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioManager");
			return ret;
		}

		void UnregisterVehcle(TScriptInterface Vehicle); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414BC5318
		void SetVehicleBudgetOverride(int32_t NewBudget); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414BC5238
		void RemoveVehicleBudgetOverride(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414BC5158
		void RegisterVehicleWithAsset(FVehicleCosmeticLoadRequestInfo& RequestInfo); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BC5078
	};


	// Class VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioUser
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVehicleCosmeticsAudioUser : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioUser");
			return ret;
		}
	};

}
