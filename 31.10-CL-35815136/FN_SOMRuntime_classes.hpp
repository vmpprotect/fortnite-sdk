#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SOMRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SOMRuntime.FortScriptedObjectMovement_GridProviderInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortScriptedObjectMovement_GridProviderInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SOMRuntime.FortScriptedObjectMovement_GridProviderInterface");
			return ret;
		}
	};


	// Class SOMRuntime.FortScriptedObjectMovement_WorldPhaseSite
	// Inherited from AActor -> UObject
	// Size: 0x1C8 (0x458 - 0x290)
	class AFortScriptedObjectMovement_WorldPhaseSite : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		TArray<FFortScriptedObjectMovementPhaseData> Phases; // 0x298(0x10)
		FScalableFloat NumSimulatenousMovingObjects; // 0x2A8(0x28)
		FScalableFloat PhaseIntervalSeconds; // 0x2D0(0x28)
		unsigned char UnknownData01_6[0x20]; // 0x2F8(0x20) UNKNOWN PROPERTY
		FScriptedObjectMovement_Grid BaseGrid; // 0x318(0xC8)
		FScriptedObjectMovement_DynamicPathContext InProgressPath; // 0x3E0(0x38)
		TArray<UFortScriptedObjectMovement_Slot*> LeavingSlotStack; // 0x418(0x10)
		TArray<UFortScriptedObjectMovement_Slot*> DestinationSlotStack; // 0x428(0x10)
		TArray<UFortScriptedObjectMovement_Slot*> OverflowSlotStack; // 0x438(0x10)
		TArray<AFortScriptedObjectMovement_MovableObjectBase*> CurrentlyMovingObjects; // 0x448(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SOMRuntime.FortScriptedObjectMovement_WorldPhaseSite");
			return ret;
		}
	};


	// Class SOMRuntime.FortScriptedObjectMovement_SlotDefinition
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortScriptedObjectMovement_SlotDefinition : public UPrimaryDataAsset	
	{
	public:
		UClass* ScriptedObjectClass; // 0x30(0x8)
		float ObjectScale; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SOMRuntime.FortScriptedObjectMovement_SlotDefinition");
			return ret;
		}
	};


	// Class SOMRuntime.FortScriptedObjectMovement_Slot
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x5B0 - 0x590)
	class UFortScriptedObjectMovement_Slot : public UStaticMeshComponent	
	{
	public:
		UFortScriptedObjectMovement_SlotDefinition* SlotDefinition; // 0x590(0x8)
		int32_t ObjectRemoveOrder; // 0x598(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x59C(0x4) UNKNOWN PROPERTY
		AFortScriptedObjectMovement_MovableObjectBase* SlottedObject; // 0x5A0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x5A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SOMRuntime.FortScriptedObjectMovement_Slot");
			return ret;
		}
	};


	// Class SOMRuntime.FortScriptedObjectMovement_Structure
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class AFortScriptedObjectMovement_Structure : public AActor	
	{
	public:
		TArray<UFortScriptedObjectMovement_Slot*> CachedObjectSlots; // 0x290(0x10)
		TArray<UFortScriptedObjectMovement_SlotDefinition*> CachedSlotDefinitions; // 0x2A0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SOMRuntime.FortScriptedObjectMovement_Structure");
			return ret;
		}
	};


	// Class SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x120 (0x1C0 - 0xA0)
	class UFortGameStateComponent_ScriptedObjectMovementManager : public UFortGameStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TArray<AFortScriptedObjectMovement_WorldPhaseSite*> WorldPhaseSites; // 0xA8(0x10)
		unsigned char UnknownData01_6[0x98]; // 0xB8(0x98) UNKNOWN PROPERTY
		TArray<AScriptedObjectMovement_StaticPath*> RegisteredStaticPaths; // 0x150(0x10)
		AScriptedObjectMovement_StaticPath* CurrentlyMovingStaticPath; // 0x160(0x8)
		unsigned char UnknownData02_6[0x28]; // 0x168(0x28) UNKNOWN PROPERTY
		FScalableFloat StaticPathCooldownBetweenMoves; // 0x190(0x28)
		unsigned char UnknownData03_7[0x8]; // 0x1B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager");
			return ret;
		}

		void HandleCurrentPlaylistReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75122288C(relative to base address)
	};


	// Class SOMRuntime.FortScriptedObjectMovement_MovableObjectBase
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x218 (0xBA0 - 0x988)
	class AFortScriptedObjectMovement_MovableObjectBase : public ABuildingGameplayActor	
	{
	public:
		unsigned char UnknownData00_3[0x78]; // 0x988(0x78) UNKNOWN PROPERTY
		int32_t Editor_SkipMasterPathIndex; // 0xA00(0x4)
		int32_t Editor_SkipSubPathIndex; // 0xA04(0x4)
		int32_t Editor_NumStepsPerClick; // 0xA08(0x4)
		unsigned char UnknownData01_6[0x24]; // 0xA0C(0x24) UNKNOWN PROPERTY
		UFortScriptedObjectMovement_SlotDefinition* AssignedSlotDefinition; // 0xA30(0x8)
		FScriptedObjectMovement_DynamicPathContext MovementPath; // 0xA38(0x38)
		unsigned char UnknownData02_6[0x8]; // 0xA70(0x8) UNKNOWN PROPERTY
		UStaticMesh* ScriptedObjectMesh; // 0xA78(0x8)
		unsigned char UnknownData03_6[0x18]; // 0xA80(0x18) UNKNOWN PROPERTY
		bool bDebugStaticMovement; // 0xA98(0x1)
		bool bWaitingForBeginPlaySkip; // 0xA99(0x1)
		unsigned char UnknownData04_6[0x6]; // 0xA9A(0x6) UNKNOWN PROPERTY
		AScriptedObjectMovement_StaticPath* StaticFollowPath; // 0xAA0(0x8)
		unsigned char UnknownData05_6[0x8]; // 0xAA8(0x8) UNKNOWN PROPERTY
		FScriptedObjectMovement_StaticPathStepData CurrentStepData; // 0xAB0(0xF0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase");
			return ret;
		}

		void SetCanEverAffectNavigation(bool bCanEverAffectNavigation, UActorComponent* TargetActorComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D8950C(relative to base address)
		void OnRep_CurrentStepData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751222AF4(relative to base address)
		void NotifyStaticPathStepComplete(bool bReachedBeginPlaySkipStep); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751222A74(relative to base address)
		void HandleSlotDefinitionSlotted(UFortScriptedObjectMovement_SlotDefinition* SlotDefinition); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7512229BC(relative to base address)
		float GetStaticPathZOffsetHeight(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751221F60(relative to base address)
		void GetStaticPathTravelingBounds(FVector& OutBoxExtent); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751221E98(relative to base address)
		UStaticMeshComponent GetScriptedObjectStaticMeshComponent(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748BB9D7C(relative to base address)
		void Editor_TryJumpToStartStep(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751221E70(relative to base address)
		void Editor_ResetObject(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751221DEC(relative to base address)
		void Editor_PreviousStep(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void Editor_NextStep(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void Editor_DebugLogStaticPathTravelIndex(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751221DD8(relative to base address)
		void Editor_ClearResetObjectLocation(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751221DB4(relative to base address)
		void ConfigureStaticMeshToSlotDefinition(UFortScriptedObjectMovement_SlotDefinition* SlotDefinition, UStaticMeshComponent* StaticMeshComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751221CE0(relative to base address)
		void CheatDrawKeyframes(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void Cheat_NetMulticast_SendDebugTimerInfo(float ServerTimeWhenQueryInvoked, float RemainingTime); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF751221C18(relative to base address)
		bool BlockOverlappingStaticPathSteps(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74E5410FC(relative to base address)
		void BeginMovingToStaticPathNode(FScriptedObjectMovement_StaticPathStepData& StepData); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751221B58(relative to base address)
	};


	// Class SOMRuntime.ScriptedObjectMovement_CalendarCheatDefinition
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UScriptedObjectMovement_CalendarCheatDefinition : public UPrimaryDataAsset	
	{
	public:
		TArray<FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData> CheatCalendarEvents; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SOMRuntime.ScriptedObjectMovement_CalendarCheatDefinition");
			return ret;
		}
	};


	// Class SOMRuntime.ScriptedObjectMovement_StaticPath
	// Inherited from AActor -> UObject
	// Size: 0x250 (0x4E0 - 0x290)
	class AScriptedObjectMovement_StaticPath : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x290(0x18) UNKNOWN PROPERTY
		USplineComponent* MasterSplinePath; // 0x2A8(0x8)
		TArray<FScriptedObjectMovement_StaticPathTravelerData> PathTravelers; // 0x2B0(0x10)
		TArray<FScriptedObjectMovement_StaticPathSplineInputKeyData> SplineData; // 0x2C0(0x10)
		float StepSpacingDistance; // 0x2D0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2D4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UScriptedObjectMovement_CalendarCheatDefinition*> CheatCalendarEventDefinition; // 0x2D8(0x20)
		FGameplayTag MovementStyleTag; // 0x2F8(0x4)
		unsigned char UnknownData02_6[0x7C]; // 0x2FC(0x7C) UNKNOWN PROPERTY
		FString EnterSplineCalendarEvent; // 0x378(0x10)
		FString ExitSplineCalendarEvent; // 0x388(0x10)
		TArray<FStaticPathCalendarSplinePointGroup> OrderedCalendarEventPointGroups; // 0x398(0x10)
		unsigned char UnknownData03_6[0x128]; // 0x3A8(0x128) UNKNOWN PROPERTY
		UFortAsyncAction_CalendarMultiEventWatcher* CalendarWatcherAction; // 0x4D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SOMRuntime.ScriptedObjectMovement_StaticPath");
			return ret;
		}

		void UnlockAllPathsFromBeingRegenerated(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751222B08(relative to base address)
		void LockAllPathNodesFromBeingRegenerated(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751222A40(relative to base address)
		void HandleCalendarEventUpdated(FString EventName, FTimespan TimeUntilEnd, FTimespan TimeSinceBegin, float TimespanRatio); // Flags: Native|Protected|HasDefaults, Memory Exec: 0x7FF75122258C(relative to base address)
		void HandleCalendarEventEnded(FString EventName, FTimespan TimeUntilEnd, FTimespan TimeSinceBegin, float TimespanRatio); // Flags: Native|Protected|HasDefaults, Memory Exec: 0x7FF75122228C(relative to base address)
		void HandleCalendarEventActive(FString EventName, FTimespan TimeUntilEnd, FTimespan TimeSinceBegin, float TimespanRatio); // Flags: Native|Protected|HasDefaults, Memory Exec: 0x7FF751221F8C(relative to base address)
		void GeneratePathData(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751221E84(relative to base address)
	};

}
