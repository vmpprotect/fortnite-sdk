#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MidMatchAssignedGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		TWeakObjectPtr AssignedObjectiveLocationEnvQuery; // 0x198(0x20)
		TArray AssignedObjectives; // 0x1B8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective");
			return ret;
		}

		void StartAssignedObjectives(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D04938
		void OnAssignedObjectiveReady(FFortAssignedObjectiveData& ObjectiveData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D04858
		FVector CalculateSquadAvgLocation(char SquadID, UObject WorldContextObject); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414D04778
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
		unsigned char UnknownData01_7[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchAssignedGameplayRuntime.FortQueryTest_ClosestPlayersToObjectiveDeltaDistance");
			return ret;
		}
	};

}
