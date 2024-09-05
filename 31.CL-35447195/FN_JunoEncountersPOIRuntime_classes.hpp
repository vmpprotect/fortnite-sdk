#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoEncountersPOIRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoEncountersPOIRuntime.JunoEncounterAnchorComponent_CampAnchor
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UJunoEncounterAnchorComponent_CampAnchor : public UGameFrameworkComponent	
	{
	public:
		FGameplayTagContainer SupportedCampTags; // 0xA0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEncountersPOIRuntime.JunoEncounterAnchorComponent_CampAnchor");
			return ret;
		}
	};


	// Class JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoPOIEncounterPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoPOIEncounterPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoEncountersPOIRuntime.JunoPOIEncounterPlayspaceComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x270 (0x368 - 0xF8)
	class UJunoPOIEncounterPlayspaceComponent : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr EncounterPrefabClass; // 0x100(0x20)
		TArray VariantQueries; // 0x120(0x10)
		FScalableFloat RerollCooldownTime; // 0x130(0x28)
		TWeakObjectPtr POIPlayspaceVolume; // 0x158(0x8)
		TWeakObjectPtr EncounterPrefab; // 0x160(0x8)
		unsigned char UnknownData04_6[0x18]; // 0x168(0x18) UNKNOWN PROPERTY
		FJunoPOIEncounterSaveData EncounterConfigData; // 0x180(0x160)
		TWeakObjectPtr EncounterCategoryTable; // 0x2E0(0x20)
		unsigned char UnknownData05_7[0x68]; // 0x300(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEncountersPOIRuntime.JunoPOIEncounterPlayspaceComponent");
			return ret;
		}
	};


	// Class JunoEncountersPOIRuntime.JunoSpawnActorTaskHelper
	// Inherited from USpawnActorTaskHelper -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UJunoSpawnActorTaskHelper : public USpawnActorTaskHelper	
	{
	public:
		FGameplayTag PersistenceID; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEncountersPOIRuntime.JunoSpawnActorTaskHelper");
			return ret;
		}
	};


	// Class JunoEncountersPOIRuntime.JunoWaitForCampActorTaskHelper
	// Inherited from UObject
	// Size: 0x70 (0x98 - 0x28)
	class UJunoWaitForCampActorTaskHelper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x70]; // 0x28(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEncountersPOIRuntime.JunoWaitForCampActorTaskHelper");
			return ret;
		}
	};


	// Class JunoEncountersPOIRuntime.EncounterCaveGameplayVolume
	// Inherited from AEncounterGameplayVolume -> AGameplayVolume -> AActor -> UObject
	// Size: 0x0 (0x438 - 0x438)
	class AEncounterCaveGameplayVolume : public AEncounterGameplayVolume	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEncountersPOIRuntime.EncounterCaveGameplayVolume");
			return ret;
		}
	};


	// Class JunoEncountersPOIRuntime.EncounterPOIGameplayVolume
	// Inherited from AEncounterGameplayVolume -> AGameplayVolume -> AActor -> UObject
	// Size: 0x0 (0x438 - 0x438)
	class AEncounterPOIGameplayVolume : public AEncounterGameplayVolume	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEncountersPOIRuntime.EncounterPOIGameplayVolume");
			return ret;
		}
	};


	// Class JunoEncountersPOIRuntime.JunoEncounterStaticPointProvider
	// Inherited from AEncounterStaticPointProvider -> AFortAthenaLivingWorldStaticPointProvider -> AActor -> UObject
	// Size: 0x70 (0x400 - 0x390)
	class AJunoEncounterStaticPointProvider : public AEncounterStaticPointProvider	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x390(0x10) UNKNOWN PROPERTY
		FJunoLivingWorldPointProviderEventLimiter EventLimiter; // 0x3A0(0x20)
		TArray ConditionalTags; // 0x3C0(0x10)
		FGuid SavedActorGuid; // 0x3D0(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x3E0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEncountersPOIRuntime.JunoEncounterStaticPointProvider");
			return ret;
		}
	};


	// Class JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x160 (0x1B8 - 0x58)
	class UJunoPOIEncounterPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoPOIEncounterSaveData SavedEncounterState; // 0x58(0x160)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoEncountersPOIRuntime.JunoPOIEncounterPrefab
	// Inherited from ALivingWorldEncounterPrefab -> AFortAthenaLivingWorldPrefab -> AFortLevelInstancePrefab -> ABuildingLevelInstance -> ABuildingActor -> AActor -> UObject
	// Size: 0x10 (0x9E8 - 0x9D8)
	class AJunoPOIEncounterPrefab : public ALivingWorldEncounterPrefab	
	{
	public:
		bool bEncounterShouldBeLoaded; // 0x9D8(0x1)
		bool bEncounterIsInitialized; // 0x9D9(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x9DA(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr POIPlayspaceComponent; // 0x9DC(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x9E4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEncountersPOIRuntime.JunoPOIEncounterPrefab");
			return ret;
		}

		void OnRep_EncounterShouldBeLoaded(); // Flags: Final|Native|Private 0x7FF414E18520
		void OnRep_EncounterInitialized(); // Flags: Final|Native|Private 0x7FF414E18440
	};


	// Class JunoEncountersPOIRuntime.JunoPOIEncounterSpawner
	// Inherited from AActor -> UObject
	// Size: 0x28 (0x2B8 - 0x290)
	class AJunoPOIEncounterSpawner : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr POIEncountersPlayspace; // 0x298(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x2A0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoEncountersPOIRuntime.JunoPOIEncounterSpawner");
			return ret;
		}
	};

}
