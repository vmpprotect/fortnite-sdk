#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AIPatrolPath
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AIPatrolPath.AIPatrolPathEditorComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xA8 (0x5C0 - 0x518)
	class UAIPatrolPathEditorComponent : public UDebugDrawComponent	
	{
	public:
		unsigned char UnknownData00_1[0xA8]; // 0x518(0xA8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY
		TArray<FString> SharedOptionNames; // 0xC8(0x10)
		TWeakObjectPtr<UClass*> DefaultAIPawn; // 0xD8(0x20)
		UClass* PathRendererClass; // 0xF8(0x8)
		bool bAllowPartialPaths; // 0x100(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer UnableToPlaceNewDeviceTags; // 0x108(0x20)
		FNavAgentProperties CachedAIAgentProperties; // 0x128(0x30)
		UNavigationSystemV1* CachedNavSystem; // 0x158(0x8)
		ANavigationData* CachedNavData; // 0x160(0x8)
		UClass* CachedFilterClass; // 0x168(0x8)
		unsigned char UnknownData02_6[0x10]; // 0x170(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnNextPatrolPointFailedToReach; // 0x180(0x10)
		FMulticastInlineDelegate OnPatrolPointFailedToReach; // 0x190(0x10)
		FMulticastInlineDelegate OnPatrolPointReached; // 0x1A0(0x10)
		FMulticastInlineDelegate OnPatrolPathStarted; // 0x1B0(0x10)
		FMulticastInlineDelegate OnPatrolPathStopped; // 0x1C0(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x1D0(0x8) UNKNOWN PROPERTY
		TArray<AActor*> PatrolPath; // 0x1D8(0x10)
		FPatrolPathSegmentDetails PathSegmentDetails; // 0x1E8(0x108)
		unsigned char UnknownData04_6[0x10]; // 0x2F0(0x10) UNKNOWN PROPERTY
		UAIPatrolPathComponent* CopiedFrom; // 0x300(0x8)
		AActor* CurrentCloningNode; // 0x308(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x310(0x8) UNKNOWN PROPERTY
		UAIPatrolPathComponent* CopiedFromCut; // 0x318(0x8)
		AFortCreativePatrolPath* PatrolPathActor; // 0x320(0x8)
		AFortAthenaPatrolPoint* PatrolPointActor; // 0x328(0x8)
		TArray<UAIPatrolPathComponent*> MultiSelectActorToEnterList; // 0x330(0x10)
		unsigned char UnknownData06_6[0x68]; // 0x340(0x68) UNKNOWN PROPERTY
		bool bCurrentlyPropagatingSharedOptions; // 0x3A8(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x3A9(0x7) UNKNOWN PROPERTY
		UAIPatrolPathEditorComponent* PatrolPathEditorComponent; // 0x3B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AIPatrolPath.AIPatrolPathComponent");
			return ret;
		}

		void UpdateEditorComponent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		bool ShouldRenderPath(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRenderPath(bool bRenderPath); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512DF874(relative to base address)
		void SetPatrolPathGroup(EFortCreativePatrolPathGroup PatrolPathGroup); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512DF764(relative to base address)
		void SetPatrolPathEnabled(bool bIsEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512DF6E0(relative to base address)
		void SetPatrollingMode(EPatrollingMode NewMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512DF7E4(relative to base address)
		void RequestRenderPath(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512DF6CC(relative to base address)
		void RenderToNextPoint(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512DF6B8(relative to base address)
		void RenderToNextAndPreviousPoint(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512DF64C(relative to base address)
		bool RemovePoint(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512DF628(relative to base address)
		void PropagatePatrolPathPointIndexToDevice(int32_t NewPatrolPathPointIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PropagatePatrolPathIndexToDevice(int32_t NewPatrolPathIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PostFinishSpawningActor(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512DF614(relative to base address)
		void PatrolPointReached(AFortAthenaPatrolPoint* PathPoint, AAIController* Instigator, bool bReachedBackward); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512DF518(relative to base address)
		void PatrolPointFailedToReach(AFortAthenaPatrolPoint* PathPoint, AAIController* Instigator); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512DF454(relative to base address)
		void PatrolPathStopped(AAIController* Instigator); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512DF3D4(relative to base address)
		void PatrolPathStarted(AAIController* Instigator); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512DF354(relative to base address)
		void OnPatrolPathActorAssigned(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPathExtremitiesChanged(bool bIsStart, bool bIsEnd); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAnyPropertyChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void NotifyEditorUserOptionChanged(TArray<FString>& UserOptions); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E4ED060(relative to base address)
		void NextPatrolPointFailedToReach(AFortAthenaPatrolPoint* PathPoint, AAIController* PatrolInstigator); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512DF290(relative to base address)
		bool HasValidPatrolPath(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512DF244(relative to base address)
		int32_t GetPatrolPathPointIndexFromDevice(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetPatrolPathPointIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512DF220(relative to base address)
		UAIPatrolPathComponent GetPatrolPathPoint(int32_t InPatrolPathIndex, int32_t InPatrolPathPointIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512DF160(relative to base address)
		int32_t GetPatrolPathIndexFromDevice(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetPatrolPathIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512DF13C(relative to base address)
		EFortCreativePatrolPathGroup GetPatrolPathGroup(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		EPatrollingMode GetPatrollingMode(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UClass GetPatrolFilterOptions(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetNextAvailablePatrolPathIndex(int32_t& NextAvailableIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512DF068(relative to base address)
		TArray GetLinkedPatrolPoints(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512DEFFC(relative to base address)
		void GeneratePathPoints(EFortCreativePatrolPathGroup PatrolPathGroup, bool bGenerationCausedByDuplication); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512DEF38(relative to base address)
		bool CanNextPointBeReached(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512DEF18(relative to base address)
	};

}
