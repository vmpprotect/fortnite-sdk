#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SpecialEventGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SpecialEventGameplayRuntime.SpecialClientEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FSpecialClientEvent	
	{
	public:
		AFortPlayerControllerAthena PlayerController; // 0x0(0x8)
		float TimeSeconds; // 0x8(0x4)
		FGameplayTag EventTag; // 0xC(0x4)
		int32_t Count; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventStatArrayEntry
	// Inherited from FFastArraySerializerItem
	// Size: 0x34 (0x40 - 0xC)
	struct FSpecialEventStatArrayEntry : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData02_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		USpecialEventStatComponent StatComponent; // 0x10(0x8)
		AActor Owner; // 0x18(0x8)
		int32_t StatDefinitionIndex; // 0x20(0x4)
		FSpecialEventStatDefinition StatDefinitionCopy; // 0x24(0x10)
		float Value; // 0x34(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventStatDefinition
	// Size: 0x10 (0x10 - 0x0)
	struct FSpecialEventStatDefinition	
	{
	public:
		FGameplayTag LookupTag; // 0x0(0x4)
		float Min; // 0x4(0x4)
		float Max; // 0x8(0x4)
		float DefaultValue; // 0xC(0x4)
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventTODMSubphaseData
	// Size: 0x18 (0x18 - 0x0)
	struct FSpecialEventTODMSubphaseData	
	{
	public:
		float PhaseTime; // 0x0(0x4)
		ESpecialEventTODMModifyType ModifyType; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		UClass SpawnClass; // 0x8(0x8)
		float TimeOfDay; // 0x10(0x4)
		float SpeedFactor; // 0x14(0x4)
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventTODMPhaseData
	// Size: 0x20 (0x20 - 0x0)
	struct FSpecialEventTODMPhaseData	
	{
	public:
		FGameplayTag PhaseTag; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray SubphaseDataArray; // 0x8(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventMathEaseData
	// Size: 0xC (0xC - 0x0)
	struct FSpecialEventMathEaseData	
	{
	public:
		TEnumAsByte EasingFunc; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float BlendExp; // 0x4(0x4)
		int32_t Steps; // 0x8(0x4)
	};


	// Struct SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ComponentDefinition
	// Size: 0x18 (0x18 - 0x0)
	struct FDestroyActorsAndComponentsMutator_ComponentDefinition	
	{
	public:
		FString ComponentName; // 0x0(0x10)
		EDestroyActorsAndComponentsMutator_ComponentNameComparisonType NameComparisonType; // 0x10(0x1)
		bool bDestroyOnServer; // 0x11(0x1)
		bool bDestroyOnClient; // 0x12(0x1)
		bool bPromoteChildrenOfDestroyedComponents; // 0x13(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ActorDefinition
	// Size: 0x70 (0x70 - 0x0)
	struct FDestroyActorsAndComponentsMutator_ActorDefinition	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		TWeakObjectPtr SoftActorClass; // 0x20(0x20)
		bool bStartEnabled; // 0x40(0x1)
		bool bDestroyActorOnServer; // 0x41(0x1)
		bool bDestroyActorOnClient; // 0x42(0x1)
		bool bNetForceOnActorDestroy; // 0x43(0x1)
		bool bShouldModifyLevelOnActorDestroy; // 0x44(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		TArray ComponentDefinitions; // 0x48(0x10)
		bool bCurrentlyEnabled; // 0x58(0x1)
		bool bPermanentlyDisabled; // 0x59(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY
		TArray ActorsToProcess; // 0x60(0x10)
	};


	// Struct SpecialEventGameplayRuntime.FakeKillRelevancyVictim
	// Size: 0x20 (0x20 - 0x0)
	struct FFakeKillRelevancyVictim	
	{
	public:
		AFortPlayerStateAthena PlayerState; // 0x0(0x8)
		FVector DeathLocation; // 0x8(0x18)
	};


	// Struct SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataEntry
	// Inherited from FFastArraySerializerItem
	// Size: 0x2C (0x38 - 0xC)
	struct FFakeKillRelevancyPlayerDataEntry : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData02_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray Victims; // 0x10(0x10)
		FGameplayTag Reason; // 0x20(0x4)
		int32_t PhaseNum; // 0x24(0x4)
		int32_t WaveNum; // 0x28(0x4)
		float RelevancyDelay; // 0x2C(0x4)
		float RelevancyChangeServerWorldTime; // 0x30(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FFakeKillRelevancyPlayerDataArray : public FFastArraySerializer	
	{
	public:
		TArray Entries; // 0x108(0x10)
		UFortControllerComponent_FakeKillRelevancy ControllerComponent; // 0x118(0x8)
	};


	// Struct SpecialEventGameplayRuntime.FakeKillRelevancyPhaseData
	// Size: 0x30 (0x30 - 0x0)
	struct FFakeKillRelevancyPhaseData	
	{
	public:
		unsigned char UnknownData02_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		FGameplayTag Reason; // 0x10(0x4)
		int32_t NumWavesExpected; // 0x14(0x4)
		int32_t WaveNum; // 0x18(0x4)
		float RelevancyDelay; // 0x1C(0x4)
		unsigned char UnknownData03_7[0x10]; // 0x20(0x10) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.FakeKillRelevancyBucket
	// Size: 0x10 (0x10 - 0x0)
	struct FFakeKillRelevancyBucket	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.FakeKillRelevancySupergroup
	// Size: 0x20 (0x20 - 0x0)
	struct FFakeKillRelevancySupergroup	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.FakeKillRelevancyTestParameters
	// Size: 0x38 (0x38 - 0x0)
	struct FFakeKillRelevancyTestParameters	
	{
	public:
		unsigned char UnknownData01_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventMapData
	// Size: 0x20 (0x20 - 0x0)
	struct FSpecialEventMapData	
	{
	public:
		FGameplayTag MapTag; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray MapNames; // 0x8(0x10)
		bool bReplicatedHasBeenUnloaded; // 0x18(0x1)
		bool bHasBeenUnloaded; // 0x19(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.FortDelayRTMMData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortDelayRTMMData	
	{
	public:
		bool bDelayRTTM; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MinRTTMDelay; // 0x4(0x4)
		float MaxRTTMDelay; // 0x8(0x4)
		float Timestamp; // 0xC(0x4)
	};


	// Struct SpecialEventGameplayRuntime.FortSpecialEventGEData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortSpecialEventGEData	
	{
	public:
		UClass GameplayEffect; // 0x0(0x8)
		int32_t Level; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.FortSpecialEventOverrideParts
	// Size: 0x20 (0x20 - 0x0)
	struct FFortSpecialEventOverrideParts	
	{
	public:
		TArray OverrideParts; // 0x0(0x10)
		FFortSpecialEventGEData GameplayEffectToApplyOnSwap; // 0x10(0x10)
	};


	// Struct SpecialEventGameplayRuntime.BuffetBubblesReplicatedData
	// Size: 0x80 (0x80 - 0x0)
	struct FBuffetBubblesReplicatedData	
	{
	public:
		FTransform RelativeTransform; // 0x0(0x60)
		FVector RelativeVelocity; // 0x60(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.BuffetBubblesDebugData
	// Size: 0xF0 (0xF0 - 0x0)
	struct FBuffetBubblesDebugData	
	{
	public:
		unsigned char UnknownData01_2[0xF0]; // 0x0(0xF0) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.BuffetFlyingRicochetReplicatedData
	// Size: 0x20 (0x20 - 0x0)
	struct FBuffetFlyingRicochetReplicatedData	
	{
	public:
		float StartTime; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Velocity; // 0x8(0x18)
	};


	// Struct SpecialEventGameplayRuntime.CustomTickComonentQualitySettings
	// Size: 0x14 (0x14 - 0x0)
	struct FCustomTickComonentQualitySettings	
	{
	public:
		int32_t NumFramesToSkipBetweenEvaluations; // 0x0(0x4)
		int32_t MinFramesToSkipBetweenCustomTicks; // 0x4(0x4)
		int32_t MaxFramesToSkipBetweenCustomTicks; // 0x8(0x4)
		float InnerDistance; // 0xC(0x4)
		float OuterDistance; // 0x10(0x4)
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventAudioHapticsAction
	// Size: 0x20 (0x20 - 0x0)
	struct FSpecialEventAudioHapticsAction	
	{
	public:
		float LoudnessFloor; // 0x0(0x4)
		float LoudnessCeiling; // 0x4(0x4)
		float HapticsIntensity; // 0x8(0x4)
		int32_t ChannelIndex; // 0xC(0x4)
		bool bAffectsLeftLarge : 1; // 0x10:0(0x1)
		bool bAffectsLeftSmall : 1; // 0x10:1(0x1)
		bool bAffectsRightLarge : 1; // 0x10:2(0x1)
		bool bAffectsRightSmall : 1; // 0x10:3(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x11(0xF) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventCursorMode
	// Size: 0x2E8 (0x2E8 - 0x0)
	struct FSpecialEventCursorMode	
	{
	public:
		UClass WidgetClass; // 0x0(0x8)
		bool bAllowDebugCursorDrawing; // 0x8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		FSpecialEventMathEaseData GamepadMoveEaseData; // 0xC(0xC)
		FScalableFloat GamepadMoveSpeed; // 0x18(0x28)
		FSpecialEventMathEaseData TouchMoveEaseData; // 0x40(0xC)
		unsigned char UnknownData05_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FScalableFloat TouchMoveSpeed; // 0x50(0x28)
		float TouchDeadzoneTreshold; // 0x78(0x4)
		float TouchAttenuator; // 0x7C(0x4)
		FScalableFloat MinCursorPercentForAdditiveRotationPitch; // 0x80(0x28)
		FScalableFloat MinCursorPercentForAdditiveRotationYaw; // 0xA8(0x28)
		FScalableFloat MaxAdditiveRotationPitch; // 0xD0(0x28)
		FScalableFloat MaxAdditiveRotationYaw; // 0xF8(0x28)
		FScalableFloat AdditiveRotationInterpSpeed; // 0x120(0x28)
		FScalableFloat ZoomInInterpSpeed; // 0x148(0x28)
		FScalableFloat ZoomOutInterpSpeed; // 0x170(0x28)
		FScalableFloat ZoomAdditiveFOV; // 0x198(0x28)
		FScalableFloat GamepadZoomMoveSpeed; // 0x1C0(0x28)
		FScalableFloat TouchZoomMoveSpeed; // 0x1E8(0x28)
		bool bAllowTrace; // 0x210(0x1)
		TEnumAsByte TraceChannel; // 0x211(0x1)
		unsigned char UnknownData06_6[0x6]; // 0x212(0x6) UNKNOWN PROPERTY
		FScalableFloat SweepRadius; // 0x218(0x28)
		FScalableFloat TraceDistance; // 0x240(0x28)
		FScalableFloat bTraceComplex; // 0x268(0x28)
		FScalableFloat RecenterAfterNoInputDelay; // 0x290(0x28)
		FScalableFloat RecenterInterpSpeed; // 0x2B8(0x28)
		unsigned char UnknownData07_7[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventCursorStackEntry
	// Size: 0xC (0xC - 0x0)
	struct FSpecialEventCursorStackEntry	
	{
	public:
		FGameplayTag CursorModeTag; // 0x0(0x4)
		TWeakObjectPtr InstigatingObject; // 0x4(0x8)
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventPhaseComponentNetModeInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FSpecialEventPhaseComponentNetModeInfo	
	{
	public:
		ESpecialEventPhaseComponentNetModeType NetModeType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UClass ComponentClass; // 0x8(0x8)
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventRewindComponentStateData
	// Size: 0x8 (0x8 - 0x0)
	struct FSpecialEventRewindComponentStateData	
	{
	public:
		ESpecialEventRewindComponentState State; // 0x0(0x1)
		char StateChangedCount; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float ServerWorldTime; // 0x4(0x4)
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame
	// Inherited from FFastArraySerializerItem
	// Size: 0x4 (0x10 - 0xC)
	struct FSpecialEventRewindComponentFrame : public FFastArraySerializerItem	
	{
	public:
		float ServerWorldTime; // 0xC(0x4)
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording
	// Size: 0x20 (0x20 - 0x0)
	struct FSpecialEventRewindComponentRecording	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		USpecialEventRewindComponent RewindComponent; // 0x8(0x8)
		int32_t StartFrameIndex; // 0x10(0x4)
		int32_t EndFrameIndex; // 0x14(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame_PlayerPawn
	// Inherited from FSpecialEventRewindComponentFrame -> FFastArraySerializerItem
	// Size: 0x20 (0x30 - 0x10)
	struct FSpecialEventRewindComponentFrame_PlayerPawn : public FSpecialEventRewindComponentFrame	
	{
	public:
		FVector_NetQuantize Location; // 0x10(0x18)
		char CompressedYaw; // 0x28(0x1)
		char CompressedControlRotationPitch; // 0x29(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventRewindComponentRecordingFastArray_PlayerPawn
	// Inherited from FFastArraySerializer
	// Size: 0x10 (0x118 - 0x108)
	struct FSpecialEventRewindComponentRecordingFastArray_PlayerPawn : public FFastArraySerializer	
	{
	public:
		TArray Frames; // 0x108(0x10)
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording_PlayerPawn
	// Inherited from FSpecialEventRewindComponentRecording
	// Size: 0x0 (0x20 - 0x20)
	struct FSpecialEventRewindComponentRecording_PlayerPawn : public FSpecialEventRewindComponentRecording	
	{
	public:
	};


	// Struct SpecialEventGameplayRuntime.PhaseLevelEntryBase
	// Size: 0x60 (0x60 - 0x0)
	struct FPhaseLevelEntryBase	
	{
	public:
		unsigned char UnknownData03_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		bool bLoadLevelOnScriptStart; // 0x8(0x1)
		bool bLevelStartsVisible; // 0x9(0x1)
		bool bUnloadLevelOnPhaseEnd; // 0xA(0x1)
		bool bMakeVisibleOnPhaseStart; // 0xB(0x1)
		unsigned char UnknownData04_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer MakeVisibleAtPhaseTags; // 0x10(0x20)
		FGameplayTagContainer UnloadLevelAtPhaseTags; // 0x30(0x20)
		unsigned char UnknownData05_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.PhaseLevelEntry
	// Inherited from FPhaseLevelEntryBase
	// Size: 0x70 (0xD0 - 0x60)
	struct FPhaseLevelEntry : public FPhaseLevelEntryBase	
	{
	public:
		TWeakObjectPtr LevelToLoad; // 0x60(0x20)
		FString LevelName; // 0x80(0x10)
		bool bExcludeFromServerPreload; // 0x90(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		FVector Location; // 0x98(0x18)
		FRotator Rotation; // 0xB0(0x18)
		ULevelStreamingDynamic LevelInstance; // 0xC8(0x8)
	};


	// Struct SpecialEventGameplayRuntime.PhaseDataLayerEntry
	// Inherited from FPhaseLevelEntryBase
	// Size: 0x20 (0x80 - 0x60)
	struct FPhaseDataLayerEntry : public FPhaseLevelEntryBase	
	{
	public:
		UDataLayerAsset DataLayerAsset; // 0x60(0x8)
		bool bIsRecursive; // 0x68(0x1)
		unsigned char UnknownData01_7[0x17]; // 0x69(0x17) UNKNOWN PROPERTY
	};


	// Struct SpecialEventGameplayRuntime.PhaseInfo
	// Size: 0x98 (0x98 - 0x0)
	struct FPhaseInfo	
	{
	public:
		FGameplayTag PhaseTag; // 0x0(0x4)
		float PhaseDuration; // 0x4(0x4)
		bool bSetRelevancyMode; // 0x8(0x1)
		ESpecialRelevancyMode RelevancyMode; // 0x9(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
		int32_t NumOfSquadsInRelevancyGroup; // 0xC(0x4)
		FGameplayTagContainer RequireLevelsFromPhaseTags; // 0x10(0x20)
		bool bStartNextPhaseOnPhaseFinished; // 0x30(0x1)
		bool bGarbageCollectAtPhaseStartOnServer; // 0x31(0x1)
		bool bGarbageCollectAtPhaseStartOnClient; // 0x32(0x1)
		unsigned char UnknownData05_6[0x5]; // 0x33(0x5) UNKNOWN PROPERTY
		TWeakObjectPtr ReplicatedLevelSequenceActorClass; // 0x38(0x20)
		UClass ReplicatedLevelSequenceActorClass_HardRef; // 0x58(0x8)
		TWeakObjectPtr LevelSequenceActor; // 0x60(0x8)
		unsigned char UnknownData06_6[0x1]; // 0x68(0x1) UNKNOWN PROPERTY
		bool bDestroySpawnedLevelSequenceActorOnPhaseEnd; // 0x69(0x1)
		unsigned char UnknownData07_6[0x6]; // 0x6A(0x6) UNKNOWN PROPERTY
		ASpecialEventPhase PhaseActor; // 0x70(0x8)
		TArray Levels; // 0x78(0x10)
		TArray DataLayers; // 0x88(0x10)
	};


	// Struct SpecialEventGameplayRuntime.SpecialEventStatArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FSpecialEventStatArray : public FFastArraySerializer	
	{
	public:
		TArray Stats; // 0x108(0x10)
		USpecialEventStatComponent StatComponent; // 0x118(0x8)
	};

}
