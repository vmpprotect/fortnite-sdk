#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MidMatchAssignedGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective
	// Inherited from UFortGameStateComponent_MidMatchObjectiveParent -> UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x128 (0x1D0 - 0xA8)
	class UFortGameStateComponent_AssignedObjective : public UFortGameStateComponent_MidMatchObjectiveParent	
	{
	public:
		FScalableFloat IdealNumSquadsPerObjective; // 0xA8(0x28)
		FScalableFloat bAllowUnopposedSquads; // 0xD0(0x28)
		FScalableFloat MinPairedSquadDistForUnopposed; // 0xF8(0x28)
		FScalableFloat UnopposedSquad_FakeSquadMaxSafeZonePct; // 0x120(0x28)
		FScalableFloat UnopposedSquad_FakeSquadMinDistToSquad; // 0x148(0x28)
		FScalableFloat SpawnObjectivesInsideSafeZonePct; // 0x170(0x28)
		TWeakObjectPtr<UEnvQuery*> AssignedObjectiveLocationEnvQuery; // 0x198(0x20)
		TArray<FFortAssignedObjectiveData> AssignedObjectives; // 0x1B8(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective");
			return ret;
		}

		void StartAssignedObjectives(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void OnAssignedObjectiveReady(FFortAssignedObjectiveData& ObjectiveData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector CalculateSquadAvgLocation(char SquadID, UObject* WorldContextObject); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7513EBE4C(relative to base address)
	};


	// Class MidMatchAssignedGameplayRuntime.FortQueryContext_SpawnedObjectiveLocations
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_SpawnedObjectiveLocations : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchAssignedGameplayRuntime.FortQueryContext_SpawnedObjectiveLocations");
			return ret;
		}
	};


	// Class MidMatchAssignedGameplayRuntime.FortQueryContext_SquadAvgLocationsForObjective
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_SquadAvgLocationsForObjective : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchAssignedGameplayRuntime.FortQueryContext_SquadAvgLocationsForObjective");
			return ret;
		}
	};


	// Class MidMatchAssignedGameplayRuntime.FortQueryTest_ClosestPlayersToObjectiveDeltaDistance
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x200 - 0x1F8)
	class UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance : public UEnvQueryTest	
	{
	public:
		bool bUseDistance2D; // 0x1F8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchAssignedGameplayRuntime.FortQueryTest_ClosestPlayersToObjectiveDeltaDistance");
			return ret;
		}
	};

}
