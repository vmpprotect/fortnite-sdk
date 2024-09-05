#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Missions
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMissionBlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C");
			return ret;
		}

		void Any Player Pawn Near Location(double DistanceToCheck, FVector Location, TArray<AFortPlayerPawn*>& Ignore Player Pawns, UObject* __WorldContext, bool& IsPawnNearLocation, TArray<AFortPawn*>& PawnsNearLocation); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSeasonalEventManager(UObject* WorldContextObject, UObject* __WorldContext, UFortSeasonalEventManager* SeasonalEventManager); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NPC_CanBeElemental(FGameplayTag PawnTag, UObject* __WorldContext, bool& Value); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LaunchHoverboard(AActor* HoverboardActor, FVector LaunchVelocity, FName ForceFeedbackTag, UObject* __WorldContext, bool& Success); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NPC_ConvertTagToNameText(FGameplayTag PawnTag, UObject* __WorldContext, FText& Name); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CheckBasicVectorToActorLineOfSight(FVector Vector A, AActor* Actor B, FVector Actor B Location Offset, TEnumAsByte<ETraceTypeQuery> TraceChannel, TEnumAsByte<EDrawDebugTrace> DrawDebugType, double DrawTime, TArray<AActor*>& ActorsToIgnore, bool bTraceComplex, bool bRequireThatTraceHitActorB, UObject* __WorldContext, bool& In Line Of Sight, double& Distance); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CheckBasicActorLineOfSight(AActor* Actor A, FVector ActorA Location Offset, AActor* Actor B, FVector Actor B Location Offset, bool UseActorHalfHeightForSight, TEnumAsByte<ETraceTypeQuery> TraceChannel, TEnumAsByte<EDrawDebugTrace> DrawDebugType, double DrawTime, bool bTraceComplex, UObject* __WorldContext, bool& In Line Of Sight, double& Distance); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NPC_LockThenRotateInPlace(bool LockedInPlace, AFortPlayerPawn* PlayerPawn, AFortAIPawn* SurvivorPawn, UObject* __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetControllersNearActorThatRequireQuestObjective(double Distance, AActor* Actor, UFortQuestItemDefinition* Quest Item, FName Quest Item Backend Objective Name, UObject* __WorldContext, TArray<AFortPlayerController*>& PlayerControllersNearbyThatRequireQuest, bool& SuccessfullyFoundPlayer); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HaveAllPlayersCompletedQuest(UFortQuestItemDefinition* QuestItem, UObject* __WorldContext, bool& AllPlayersCompletedQuest); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HasPlayerCompletedQuestObjectiveHandle(AFortPlayerController* PlayerController, UFortQuestItemDefinition* QuestReference, FDataTableRowHandle QuestBackendObjectiveHandle, UObject* __WorldContext, AFortPlayerController* PlayerControllerOut, bool& CompletedQuestObjective); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DoesAnyPlayerRequireQuestObjective(UFortQuestItemDefinition* QuestReference, FDataTableRowHandle QuestObjectiveHandle, UObject* __WorldContext, TArray<AFortPlayerController*>& PlayerControllersWhoRequireObjective, bool& SomebodyRequiresObjective); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideParticleComponentsAttachedToMesh(UStaticMeshComponent* MeshComponent, UObject* __WorldContext, bool& SuccessfullyDeactivatedParticle); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HasPlayerCompletedQuestObjective(AFortPlayerController* PlayerController, UFortQuestItemDefinition* QuestReference, FName QuestBackendObjectiveName, UObject* __WorldContext, AFortPlayerController* PlayerControllerOut, bool& CompletedQuestObjective); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetContributingControllersNearActor(double Distance, AActor* Actor, UObject* __WorldContext, TArray<AFortPlayerController*>& PlayerControllersNearby, bool& SuccessfullyFoundPlayer); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PointLocationsBetweenTwoVectors(FVector Vector 1, FVector Vector 2, int32_t HowManyPoints, UObject* __WorldContext, TArray<FVector>& VectorPoints, bool& SuccessfullyFoundPoints); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCurrentDifficulty(UObject* __WorldContext, double& Difficulty, bool& Success); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyDifficultyOffset(FName RowName, double BaseDifficulty, UObject* __WorldContext, bool& Success); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DistanceBetweenTwoVectors(FVector Vector1, FVector vector2, UObject* __WorldContext, double& Distance); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HasPlayerCompletedQuest(AFortPlayerController* PlayerController, UFortQuestItemDefinition* QuestReference, FName QuestBackendName, UObject* __WorldContext, AFortPlayerController* PlayerControllerOut, bool& CompletedQuest); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SeperatePlayersWhoNeedQuest(UFortQuestItemDefinition* QuestItemReference, FName QuestObjectiveBackendName, UObject* __WorldContext, TArray<AFortPlayerController*>& PlayersWhoNeedQuest, TArray<AFortPlayerController*>& PlayersWhoDoNotNeedQuest); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BasicBuildingItemDrop(TEnumAsByte<EnumEventWorldItemDrop> Item Drop Level, FVector LootDropLocation, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetBuildingRecommendation(FName RowName, UObject* __WorldContext, int32_t& BuildingCount, bool& RowFound); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Random_360_VectorInRange(double MinDistance, double MaxDistance, UObject* __WorldContext, FVector& Random Vector Result ); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnyPawnNearActor(double DistanceToCheck, AActor* Actor, UObject* __WorldContext, bool& IsPawnNearActor, TArray<AFortPawn*>& PawnsNearActor); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GiveQuestUpdateToPlayers(UFortQuestItemDefinition* Quest Reference, FName Quest Objective Backend Name, FDataTableRowHandle ObjectiveStatEvent, TArray<AFortPlayerController*>& PlayerControllersForUpdate, UObject* __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DropChance(double DropPercentChance, UObject* __WorldContext, bool& DropResult); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnyPlayerNearActor(double DistanceToCheck, AActor* Actor, UObject* __WorldContext, bool& IsPlayerNearActor, TArray<AFortPlayerPawn*>& PlayersNearActor); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FlashObjectiveUI(AFortObjectiveBase* Objective Reference, UObject* __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NPC_DroneStopRescue(AActor* Actor, AActor* Instigator, UObject* __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NPC_DroneStartRescue(AActor* Actor, AActor* Instigator, UObject* __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ListPlayersWhoNeedQuest(UFortQuestItemDefinition* Quest Reference, FName Quest Backend Name, UObject* __WorldContext, TArray<AFortPlayerController*>& Player Controllers Who Require The Quest, bool& DoesAnyoneRequireTheQuest); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DoesAnyoneRequireQuest(UFortQuestItemDefinition* QuestReference, FName Quest Backend Name, UObject* __WorldContext, bool& SomePlayerNeedsTheQuest); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void QuestObjectiveCountAchieved(AFortPlayerController* PlayerControllerReference, UFortQuestItemDefinition* Quest Item Reference, FDataTableRowHandle ObjectiveStatHandle, UObject* __WorldContext, int32_t& Quest Count Achieved, int32_t& Quest Count Required, bool& SuccessfullyFoundCount); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HighlightQuestActor(AActor* ActorToHighlight, bool HighlightEnabled, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DoesPlayerHaveQuest(AFortPlayerController* PlayerController, UFortQuestItemDefinition* Quest Item Reference, FName Quest Item Objective Backend Name, UObject* __WorldContext, bool& QuestValid, AFortPlayerController* PlayerControllerRef); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetObjectiveBadgeIconBrush(AFortObjectiveBase* Objective, FGameplayTag RewardTag, UObject* __WorldContext, FSlateBrush& IconBrush); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnRegisterUI UpdatesWithDamageEvents(AActor* ActorToUnRegisterWith, AFortMissionState* MissionState, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RegisterUI UpdatesWithDamageEvents(AActor* ActorToRegisterWith, AFortMissionState* MissionState, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
