#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Missions
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void Any Player Pawn Near Location(double DistanceToCheck, FVector Location, TArray& Ignore Player Pawns, UObject __WorldContext, bool& IsPawnNearLocation, TArray& PawnsNearLocation); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17E300
		void GetSeasonalEventManager(UObject WorldContextObject, UObject __WorldContext, UFortSeasonalEventManager& SeasonalEventManager); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6B17D100
		void NPC_CanBeElemental(FGameplayTag PawnTag, UObject __WorldContext, bool& Value); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17C700
		void LaunchHoverboard(AActor HoverboardActor, FVector LaunchVelocity, FName ForceFeedbackTag, UObject __WorldContext, bool& Success); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17C900
		void NPC_ConvertTagToNameText(FGameplayTag PawnTag, UObject __WorldContext, FText& Name); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B17FF00
		void CheckBasicVectorToActorLineOfSight(FVector Vector A, AActor Actor B, FVector Actor B Location Offset, TEnumAsByte TraceChannel, TEnumAsByte DrawDebugType, double DrawTime, TArray& ActorsToIgnore, bool bTraceComplex, bool bRequireThatTraceHitActorB, UObject __WorldContext, bool& In Line Of Sight, double& Distance); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17DD00
		void CheckBasicActorLineOfSight(AActor Actor A, FVector ActorA Location Offset, AActor Actor B, FVector Actor B Location Offset, bool UseActorHalfHeightForSight, TEnumAsByte TraceChannel, TEnumAsByte DrawDebugType, double DrawTime, bool bTraceComplex, UObject __WorldContext, bool& In Line Of Sight, double& Distance); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17DE00
		void NPC_LockThenRotateInPlace(bool LockedInPlace, AFortPlayerPawn PlayerPawn, AFortAIPawn SurvivorPawn, UObject __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17FC00
		void GetControllersNearActorThatRequireQuestObjective(double Distance, AActor Actor, UFortQuestItemDefinition Quest Item, FName Quest Item Backend Objective Name, UObject __WorldContext, TArray& PlayerControllersNearbyThatRequireQuest, bool& SuccessfullyFoundPlayer); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17D400
		void HaveAllPlayersCompletedQuest(UFortQuestItemDefinition QuestItem, UObject __WorldContext, bool& AllPlayersCompletedQuest); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17CC00
		void HasPlayerCompletedQuestObjectiveHandle(AFortPlayerController PlayerController, UFortQuestItemDefinition QuestReference, FDataTableRowHandle QuestBackendObjectiveHandle, UObject __WorldContext, AFortPlayerController& PlayerControllerOut, bool& CompletedQuestObjective); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B17CD00
		void DoesAnyPlayerRequireQuestObjective(UFortQuestItemDefinition QuestReference, FDataTableRowHandle QuestObjectiveHandle, UObject __WorldContext, TArray& PlayerControllersWhoRequireObjective, bool& SomebodyRequiresObjective); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17DA00
		void HideParticleComponentsAttachedToMesh(UStaticMeshComponent MeshComponent, UObject __WorldContext, bool& SuccessfullyDeactivatedParticle); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17CB00
		void HasPlayerCompletedQuestObjective(AFortPlayerController PlayerController, UFortQuestItemDefinition QuestReference, FName QuestBackendObjectiveName, UObject __WorldContext, AFortPlayerController& PlayerControllerOut, bool& CompletedQuestObjective); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B17CE00
		void GetContributingControllersNearActor(double Distance, AActor Actor, UObject __WorldContext, TArray& PlayerControllersNearby, bool& SuccessfullyFoundPlayer); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17D500
		void PointLocationsBetweenTwoVectors(FVector Vector 1, FVector Vector 2, int32_t HowManyPoints, UObject __WorldContext, TArray& VectorPoints, bool& SuccessfullyFoundPoints); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17FB00
		void GetCurrentDifficulty(UObject __WorldContext, double& Difficulty, bool& Success); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B17D300
		void ApplyDifficultyOffset(FName RowName, double BaseDifficulty, UObject __WorldContext, bool& Success); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B17E000
		void DistanceBetweenTwoVectors(FVector Vector1, FVector vector2, UObject __WorldContext, double& Distance); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B17DC00
		void HasPlayerCompletedQuest(AFortPlayerController PlayerController, UFortQuestItemDefinition QuestReference, FName QuestBackendName, UObject __WorldContext, AFortPlayerController& PlayerControllerOut, bool& CompletedQuest); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B17CF00
		void SeperatePlayersWhoNeedQuest(UFortQuestItemDefinition QuestItemReference, FName QuestObjectiveBackendName, UObject __WorldContext, TArray& PlayersWhoNeedQuest, TArray& PlayersWhoDoNotNeedQuest); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17F700
		void BasicBuildingItemDrop(TEnumAsByte Item Drop Level, FVector LootDropLocation, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D6B17DF00
		void GetBuildingRecommendation(FName RowName, UObject __WorldContext, int32_t& BuildingCount, bool& RowFound); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B17D600
		void Random_360_VectorInRange(double MinDistance, double MaxDistance, UObject __WorldContext, FVector& Random Vector Result ); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B17F900
		void AnyPawnNearActor(double DistanceToCheck, AActor Actor, UObject __WorldContext, bool& IsPawnNearActor, TArray& PawnsNearActor); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17E200
		void GiveQuestUpdateToPlayers(UFortQuestItemDefinition Quest Reference, FName Quest Objective Backend Name, FDataTableRowHandle ObjectiveStatEvent, TArray& PlayerControllersForUpdate, UObject __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B17D000
		void DropChance(double DropPercentChance, UObject __WorldContext, bool& DropResult); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B17D800
		void AnyPlayerNearActor(double DistanceToCheck, AActor Actor, UObject __WorldContext, bool& IsPlayerNearActor, TArray& PlayersNearActor); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17E100
		void FlashObjectiveUI(AFortObjectiveBase Objective Reference, UObject __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17D700
		void NPC_DroneStopRescue(AActor Actor, AActor Instigator, UObject __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17FD00
		void NPC_DroneStartRescue(AActor Actor, AActor Instigator, UObject __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17FE00
		void ListPlayersWhoNeedQuest(UFortQuestItemDefinition Quest Reference, FName Quest Backend Name, UObject __WorldContext, TArray& Player Controllers Who Require The Quest, bool& DoesAnyoneRequireTheQuest); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17C800
		void DoesAnyoneRequireQuest(UFortQuestItemDefinition QuestReference, FName Quest Backend Name, UObject __WorldContext, bool& SomePlayerNeedsTheQuest); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17DB00
		void QuestObjectiveCountAchieved(AFortPlayerController PlayerControllerReference, UFortQuestItemDefinition Quest Item Reference, FDataTableRowHandle ObjectiveStatHandle, UObject __WorldContext, int32_t& Quest Count Achieved, int32_t& Quest Count Required, bool& SuccessfullyFoundCount); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B17FA00
		void HighlightQuestActor(AActor ActorToHighlight, bool HighlightEnabled, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D6B17CA00
		void DoesPlayerHaveQuest(AFortPlayerController PlayerController, UFortQuestItemDefinition Quest Item Reference, FName Quest Item Objective Backend Name, UObject __WorldContext, bool& QuestValid, AFortPlayerController& PlayerControllerRef); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D6B17D900
		void GetObjectiveBadgeIconBrush(AFortObjectiveBase Objective, FGameplayTag RewardTag, UObject __WorldContext, FSlateBrush& IconBrush); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6B17D200
		void UnRegisterUI UpdatesWithDamageEvents(AActor ActorToUnRegisterWith, AFortMissionState MissionState, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D6B17F600
		void RegisterUI UpdatesWithDamageEvents(AActor ActorToRegisterWith, AFortMissionState MissionState, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D6B17F800
	};

}
