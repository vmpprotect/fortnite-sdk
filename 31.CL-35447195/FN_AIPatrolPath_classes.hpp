#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AIPatrolPath
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AIPatrolPath.AIPatrolPathEditorComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xA8 (0x5C0 - 0x518)
	class UAIPatrolPathEditorComponent : public UDebugDrawComponent	
	{
	public:
		unsigned char UnknownData01_1[0xA8]; // 0x518(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIPatrolPath.AIPatrolPathEditorComponent");
			return ret;
		}
	};


	// Class AIPatrolPath.AIPatrolPathComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x318 (0x3B8 - 0xA0)
	class UAIPatrolPathComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData08_3[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY
		TArray SharedOptionNames; // 0xC8(0x10)
		TWeakObjectPtr DefaultAIPawn; // 0xD8(0x20)
		UClass PathRendererClass; // 0xF8(0x8)
		bool bAllowPartialPaths; // 0x100(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer UnableToPlaceNewDeviceTags; // 0x108(0x20)
		FNavAgentProperties CachedAIAgentProperties; // 0x128(0x30)
		UNavigationSystemV1 CachedNavSystem; // 0x158(0x8)
		ANavigationData CachedNavData; // 0x160(0x8)
		UClass CachedFilterClass; // 0x168(0x8)
		unsigned char UnknownData10_6[0x10]; // 0x170(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnNextPatrolPointFailedToReach; // 0x180(0x10)
		FMulticastInlineDelegate OnPatrolPointFailedToReach; // 0x190(0x10)
		FMulticastInlineDelegate OnPatrolPointReached; // 0x1A0(0x10)
		FMulticastInlineDelegate OnPatrolPathStarted; // 0x1B0(0x10)
		FMulticastInlineDelegate OnPatrolPathStopped; // 0x1C0(0x10)
		unsigned char UnknownData11_6[0x8]; // 0x1D0(0x8) UNKNOWN PROPERTY
		TArray PatrolPath; // 0x1D8(0x10)
		FPatrolPathSegmentDetails PathSegmentDetails; // 0x1E8(0x108)
		unsigned char UnknownData12_6[0x10]; // 0x2F0(0x10) UNKNOWN PROPERTY
		UAIPatrolPathComponent CopiedFrom; // 0x300(0x8)
		AActor CurrentCloningNode; // 0x308(0x8)
		unsigned char UnknownData13_6[0x8]; // 0x310(0x8) UNKNOWN PROPERTY
		UAIPatrolPathComponent CopiedFromCut; // 0x318(0x8)
		AFortCreativePatrolPath PatrolPathActor; // 0x320(0x8)
		AFortAthenaPatrolPoint PatrolPointActor; // 0x328(0x8)
		TArray MultiSelectActorToEnterList; // 0x330(0x10)
		unsigned char UnknownData14_6[0x68]; // 0x340(0x68) UNKNOWN PROPERTY
		bool bCurrentlyPropagatingSharedOptions; // 0x3A8(0x1)
		unsigned char UnknownData15_6[0x7]; // 0x3A9(0x7) UNKNOWN PROPERTY
		UAIPatrolPathEditorComponent PatrolPathEditorComponent; // 0x3B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIPatrolPath.AIPatrolPathComponent");
			return ret;
		}

		void UpdateEditorComponent(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE3ED8
		bool ShouldRenderPath(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414CE3DF8
		void SetRenderPath(bool bRenderPath); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE3D18
		void SetPatrolPathGroup(EFortCreativePatrolPathGroup PatrolPathGroup); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE3C38
		void SetPatrolPathEnabled(bool bIsEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE3B58
		void SetPatrollingMode(EPatrollingMode NewMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE3A78
		void RequestRenderPath(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE3998
		void RenderToNextPoint(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE38B8
		void RenderToNextAndPreviousPoint(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE37D8
		bool RemovePoint(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE36F8
		void PropagatePatrolPathPointIndexToDevice(int32_t NewPatrolPathPointIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE3618
		void PropagatePatrolPathIndexToDevice(int32_t NewPatrolPathIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE3538
		void PostFinishSpawningActor(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE3458
		void PatrolPointReached(AFortAthenaPatrolPoint PathPoint, AAIController Instigator, bool bReachedBackward); // Flags: Final|Native|Private 0x7FF414CE3378
		void PatrolPointFailedToReach(AFortAthenaPatrolPoint PathPoint, AAIController Instigator); // Flags: Final|Native|Private 0x7FF414CE3298
		void PatrolPathStopped(AAIController Instigator); // Flags: Final|Native|Private 0x7FF414CE31B8
		void PatrolPathStarted(AAIController Instigator); // Flags: Final|Native|Private 0x7FF414CE30D8
		void OnPatrolPathActorAssigned(); // Flags: Event|Public|BlueprintEvent 0x7FF414CE2FF8
		void OnPathExtremitiesChanged(bool bIsStart, bool bIsEnd); // Flags: Event|Public|BlueprintEvent 0x7FF414CE2F18
		void OnAnyPropertyChanged(); // Flags: Final|Native|Protected 0x7FF414CE2E38
		void NotifyEditorUserOptionChanged(TArray& UserOptions); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414CE2D58
		void NextPatrolPointFailedToReach(AFortAthenaPatrolPoint PathPoint, AAIController PatrolInstigator); // Flags: Final|Native|Private 0x7FF414CE2C78
		bool HasValidPatrolPath(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CE2B98
		int32_t GetPatrolPathPointIndexFromDevice(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414CE2AB8
		int32_t GetPatrolPathPointIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CE29D8
		UAIPatrolPathComponent GetPatrolPathPoint(int32_t InPatrolPathIndex, int32_t InPatrolPathPointIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CE28F8
		int32_t GetPatrolPathIndexFromDevice(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414CE2818
		int32_t GetPatrolPathIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CE2738
		EFortCreativePatrolPathGroup GetPatrolPathGroup(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414CE2658
		EPatrollingMode GetPatrollingMode(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414CE2578
		UClass GetPatrolFilterOptions(); // Flags: Event|Public|BlueprintEvent 0x7FF414CE2498
		bool GetNextAvailablePatrolPathIndex(int32_t& NextAvailableIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CE23B8
		TArray GetLinkedPatrolPoints(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CE22D8
		void GeneratePathPoints(EFortCreativePatrolPathGroup PatrolPathGroup, bool bGenerationCausedByDuplication); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CE21F8
		bool CanNextPointBeReached(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CE2118
	};

}
