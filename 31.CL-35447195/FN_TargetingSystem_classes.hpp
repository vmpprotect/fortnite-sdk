#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TargetingSystem
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class TargetingSystem.AbilityTask_PerformTargeting
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x30 (0xA8 - 0x78)
	class UAbilityTask_PerformTargeting : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnTargetReady; // 0x78(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x88(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.AbilityTask_PerformTargeting");
			return ret;
		}

		UAbilityTask_PerformTargeting PerformTargetingRequest(UGameplayAbility OwningAbility, UTargetingPreset InTargetingPreset, bool bAllowAsync); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41460E878
		UAbilityTask_PerformTargeting PerformFilteringRequest(UGameplayAbility OwningAbility, UTargetingPreset TargetingPreset, TArray InTargets, bool bAllowAsync); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41460E798
	};


	// Class TargetingSystem.AsyncAction_PerformTargeting
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UAsyncAction_PerformTargeting : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate Targeted; // 0x30(0x10)
		UTargetingPreset TargetingPreset; // 0x40(0x8)
		TWeakObjectPtr WeakSourceActor; // 0x48(0x8)
		TArray InitialTargets; // 0x50(0x10)
		FTargetingRequestHandle TargetingHandle; // 0x60(0x4)
		bool bUseAsyncTargeting : 1; // 0x64:0(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x65(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.AsyncAction_PerformTargeting");
			return ret;
		}

		UAsyncAction_PerformTargeting PerformTargetingRequest(AActor SourceActor, UTargetingPreset TargetingPreset, bool bUseAsyncTargeting); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41460EB18
		UAsyncAction_PerformTargeting PerformFilteringRequest(AActor SourceActor, UTargetingPreset TargetingPreset, bool bUseAsyncTargeting, TArray InTargets); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41460EA38
		FTargetingRequestHandle GetTargetingHandle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460E958
	};


	// Class TargetingSystem.TargetingTask
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTargetingTask : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.TargetingTask");
			return ret;
		}

		UTargetingSubsystem GetTargetingSubsystem(FTargetingRequestHandle& TargetingHandle); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41460EBF8
	};


	// Class TargetingSystem.TargetingFilterTask_BasicFilterTemplate
	// Inherited from UTargetingTask -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTargetingFilterTask_BasicFilterTemplate : public UTargetingTask	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.TargetingFilterTask_BasicFilterTemplate");
			return ret;
		}
	};


	// Class TargetingSystem.SimpleTargetingFilterTask
	// Inherited from UTargetingFilterTask_BasicFilterTemplate -> UTargetingTask -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USimpleTargetingFilterTask : public UTargetingFilterTask_BasicFilterTemplate	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.SimpleTargetingFilterTask");
			return ret;
		}

		bool BP_ShouldFilterTarget(FTargetingRequestHandle& TargetingHandle, FTargetingDefaultResultData& TargetData); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF41460ECD8
	};


	// Class TargetingSystem.SimpleTargetingSelectionTask
	// Inherited from UTargetingTask -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USimpleTargetingSelectionTask : public UTargetingTask	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.SimpleTargetingSelectionTask");
			return ret;
		}

		void SelectTargets(FTargetingRequestHandle& TargetingHandle, FTargetingSourceContext& SourceContext); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF41460EF78
		bool AddTargetActor(FTargetingRequestHandle& TargetingHandle, AActor Actor); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const 0x7FF41460EE98
		bool AddHitResult(FTargetingRequestHandle& TargetingHandle, FHitResult& HitResult); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const 0x7FF41460EDB8
	};


	// Class TargetingSystem.TargetingSortTask_Base
	// Inherited from UTargetingTask -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UTargetingSortTask_Base : public UTargetingTask	
	{
	public:
		bool bAscending : 1; // 0x28:0(0x1)
		bool bStableSort : 1; // 0x28:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.TargetingSortTask_Base");
			return ret;
		}
	};


	// Class TargetingSystem.SimpleTargetingSortTask
	// Inherited from UTargetingSortTask_Base -> UTargetingTask -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class USimpleTargetingSortTask : public UTargetingSortTask_Base	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.SimpleTargetingSortTask");
			return ret;
		}

		float BP_GetScoreForTarget(FTargetingRequestHandle& TargetingHandle, FTargetingDefaultResultData& TargetData); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF41460F058
	};


	// Class TargetingSystem.TargetingFilterTask_ActorClass
	// Inherited from UTargetingFilterTask_BasicFilterTemplate -> UTargetingTask -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UTargetingFilterTask_ActorClass : public UTargetingFilterTask_BasicFilterTemplate	
	{
	public:
		TArray RequiredActorClassFilters; // 0x28(0x10)
		TArray IgnoredActorClassFilters; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.TargetingFilterTask_ActorClass");
			return ret;
		}
	};


	// Class TargetingSystem.TargetingPreset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UTargetingPreset : public UDataAsset	
	{
	public:
		FTargetingTaskSet TargetingTaskSet; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.TargetingPreset");
			return ret;
		}
	};


	// Class TargetingSystem.TargetingSelectionTask_AOE
	// Inherited from UTargetingTask -> UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UTargetingSelectionTask_AOE : public UTargetingTask	
	{
	public:
		ETargetingAOEShape ShapeType; // 0x28(0x1)
		TEnumAsByte CollisionChannel; // 0x29(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		FCollisionProfileName CollisionProfileName; // 0x2C(0x4)
		TArray CollisionObjectTypes; // 0x30(0x10)
		FVector DefaultSourceOffset; // 0x40(0x18)
		bool bUseRelativeOffset : 1; // 0x58:0(0x1)
		bool bIgnoreSourceActor : 1; // 0x58:1(0x1)
		bool bIgnoreInstigatorActor : 1; // 0x58:2(0x1)
		bool bTraceComplex : 1; // 0x58:3(0x1)
		unsigned char UnknownData04_5[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		FVector HalfExtent; // 0x60(0x18)
		FScalableFloat Radius; // 0x78(0x28)
		FScalableFloat HalfHeight; // 0xA0(0x28)
		FName ComponentTag; // 0xC8(0x4)
		unsigned char UnknownData05_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.TargetingSelectionTask_AOE");
			return ret;
		}

		FQuat GetSourceRotation(FTargetingRequestHandle& TargetingHandle); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF41460F2F8
		FVector GetSourceOffset(FTargetingRequestHandle& TargetingHandle); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF41460F218
		FVector GetSourceLocation(FTargetingRequestHandle& TargetingHandle); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF41460F138
	};


	// Class TargetingSystem.TargetingSelectionTask_SourceActor
	// Inherited from UTargetingTask -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTargetingSelectionTask_SourceActor : public UTargetingTask	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.TargetingSelectionTask_SourceActor");
			return ret;
		}
	};


	// Class TargetingSystem.TargetingSelectionTask_Trace
	// Inherited from UTargetingTask -> UObject
	// Size: 0x148 (0x170 - 0x28)
	class UTargetingSelectionTask_Trace : public UTargetingTask	
	{
	public:
		ETargetingTraceType TraceType; // 0x28(0x1)
		TEnumAsByte TraceChannel; // 0x29(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		FCollisionProfileName CollisionProfileName; // 0x2C(0x4)
		FScalableFloat DefaultSweptTraceRadius; // 0x30(0x28)
		FScalableFloat DefaultSweptTraceCapsuleHalfHeight; // 0x58(0x28)
		FScalableFloat DefaultSweptTraceBoxHalfExtentX; // 0x80(0x28)
		FScalableFloat DefaultSweptTraceBoxHalfExtentY; // 0xA8(0x28)
		FScalableFloat DefaultSweptTraceBoxHalfExtentZ; // 0xD0(0x28)
		FRotator DefaultSweptTraceRotation; // 0xF8(0x18)
		FScalableFloat DefaultTraceLength; // 0x110(0x28)
		FVector DefaultSourceOffset; // 0x138(0x18)
		FVector ExplicitTraceDirection; // 0x150(0x18)
		bool bComplexTrace : 1; // 0x168:0(0x1)
		bool bIgnoreSourceActor : 1; // 0x168:1(0x1)
		bool bIgnoreInstigatorActor : 1; // 0x168:2(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x169(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.TargetingSelectionTask_Trace");
			return ret;
		}

		float GetTraceLength(FTargetingRequestHandle& TargetingHandle); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF41460FAD8
		FVector GetTraceDirection(FTargetingRequestHandle& TargetingHandle); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF41460F9F8
		FRotator GetSweptTraceRotation(FTargetingRequestHandle& TargetingHandle); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF41460F918
		float GetSweptTraceRadius(FTargetingRequestHandle& TargetingHandle); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF41460F838
		float GetSweptTraceCapsuleHalfHeight(FTargetingRequestHandle& TargetingHandle); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF41460F758
		FVector GetSweptTraceBoxHalfExtents(FTargetingRequestHandle& TargetingHandle); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF41460F678
		FVector GetSourceOffset(FTargetingRequestHandle& TargetingHandle); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF41460F598
		FVector GetSourceLocation(FTargetingRequestHandle& TargetingHandle); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF41460F4B8
		void GetAdditionalActorsToIgnore(FTargetingRequestHandle& TargetingHandle, TArray& OutAdditionalActorsToIgnore); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF41460F3D8
	};


	// Class TargetingSystem.TargetingSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UTargetingSubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		TArray AsyncTargetingRequests; // 0x40(0x10)
		unsigned char UnknownData03_7[0x28]; // 0x50(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.TargetingSubsystem");
			return ret;
		}

		FTargetingRequestHandle StartAsyncTargetingRequest(UTargetingPreset TargetingPreset, FTargetingSourceContext& InSourceContext, FDelegateProperty CompletionDynamicDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146100F8
		void RemoveAsyncTargetingRequestWithHandle(FTargetingRequestHandle& TargetingHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414610018
		void OverrideCollisionQueryTaskData(FTargetingRequestHandle TargetingHandle, FCollisionQueryTaskData& CollisionQueryDataOverride); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41460FF38
		FTargetingSourceContext GetTargetingSourceContext(FTargetingRequestHandle TargetingHandle); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460FE58
		void GetTargetingResultsActors(FTargetingRequestHandle TargetingHandle, TArray& Targets); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41460FD78
		void GetTargetingResults(FTargetingRequestHandle TargetingHandle, TArray& OutTargets); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41460FC98
		void ExecuteTargetingRequest(UTargetingPreset TargetingPreset, FTargetingSourceContext& InSourceContext, FDelegateProperty CompletionDynamicDelegate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41460FBB8
	};


	// Class TargetingSystem.TargetingFilterTask_SortByDistance
	// Inherited from UTargetingSortTask_Base -> UTargetingTask -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UTargetingFilterTask_SortByDistance : public UTargetingSortTask_Base	
	{
	public:
		bool bUseDistanceToNearestBlockingCollider; // 0x30(0x1)
		TEnumAsByte DistanceToCollisionChannel; // 0x31(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x32(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TargetingSystem.TargetingFilterTask_SortByDistance");
			return ret;
		}
	};

}
