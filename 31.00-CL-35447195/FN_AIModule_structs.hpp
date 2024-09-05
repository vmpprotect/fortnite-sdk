#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AIModule
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct AIModule.ActorPerceptionUpdateInfo
	// Size: 0x60 (0x60 - 0x0)
	struct FActorPerceptionUpdateInfo	
	{
	public:
		int32_t TargetId; // 0x0(0x4)
		TWeakObjectPtr Target; // 0x4(0x8)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FAIStimulus Stimulus; // 0x10(0x50)
	};


	// Struct AIModule.AIStimulus
	// Size: 0x50 (0x50 - 0x0)
	struct FAIStimulus	
	{
	public:
		float Age; // 0x0(0x4)
		float ExpirationAge; // 0x4(0x4)
		float Strength; // 0x8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector StimulusLocation; // 0x10(0x18)
		FVector ReceiverLocation; // 0x28(0x18)
		FName tag; // 0x40(0x4)
		unsigned char UnknownData05_6[0x8]; // 0x44(0x8) UNKNOWN PROPERTY
		unsigned char UnknownBit06 : 1; // 0x4C:0(0x1) UNKNOWN PROPERTY
		bool bSuccessfullySensed : 1; // 0x4C:1(0x1)
		unsigned char UnknownData07_7[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
	};


	// Struct AIModule.AIRequestID
	// Size: 0x4 (0x4 - 0x0)
	struct FAIRequestID	
	{
	public:
		uint32_t RequestID; // 0x0(0x4)
	};


	// Struct AIModule.EnvNamedValue
	// Size: 0xC (0xC - 0x0)
	struct FEnvNamedValue	
	{
	public:
		FName ParamName; // 0x0(0x4)
		EAIParamType ParamType; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float Value; // 0x8(0x4)
	};


	// Struct AIModule.AIDynamicParam
	// Size: 0x38 (0x38 - 0x0)
	struct FAIDynamicParam	
	{
	public:
		FName ParamName; // 0x0(0x4)
		EAIParamType ParamType; // 0x4(0x1)
		bool bAllowBBKey : 1; // 0x5:0(0x1)
		unsigned char UnknownData02_5[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		float Value; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FBlackboardKeySelector BBKey; // 0x10(0x28)
	};


	// Struct AIModule.BlackboardKeySelector
	// Size: 0x28 (0x28 - 0x0)
	struct FBlackboardKeySelector	
	{
	public:
		TArray AllowedTypes; // 0x0(0x10)
		FName SelectedKeyName; // 0x10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UClass SelectedKeyType; // 0x18(0x8)
		int32_t SelectedKeyID; // 0x20(0x4)
		bool bNoneIsAllowedValue : 1; // 0x24:0(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
	};


	// Struct AIModule.AIMoveRequest
	// Size: 0x50 (0x50 - 0x0)
	struct FAIMoveRequest	
	{
	public:
		TWeakObjectPtr GoalActor; // 0x0(0x8)
		unsigned char UnknownData01_7[0x48]; // 0x8(0x48) UNKNOWN PROPERTY
	};


	// Struct AIModule.IntervalCountdown
	// Size: 0x8 (0x8 - 0x0)
	struct FIntervalCountdown	
	{
	public:
		float Interval; // 0x0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
	};


	// Struct AIModule.EnvDirection
	// Size: 0x20 (0x20 - 0x0)
	struct FEnvDirection	
	{
	public:
		UClass LineFrom; // 0x0(0x8)
		UClass LineTo; // 0x8(0x8)
		UClass Rotation; // 0x10(0x8)
		TEnumAsByte DirMode; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct AIModule.EnvTraceData
	// Size: 0x38 (0x38 - 0x0)
	struct FEnvTraceData	
	{
	public:
		int32_t VersionNum; // 0x0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UClass NavigationFilter; // 0x8(0x8)
		float ProjectDown; // 0x10(0x4)
		float ProjectUp; // 0x14(0x4)
		float ExtentX; // 0x18(0x4)
		float ExtentY; // 0x1C(0x4)
		float ExtentZ; // 0x20(0x4)
		float PostProjectionVerticalOffset; // 0x24(0x4)
		TEnumAsByte TraceChannel; // 0x28(0x1)
		TEnumAsByte SerializedChannel; // 0x29(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		FName TraceProfileName; // 0x2C(0x4)
		TEnumAsByte TraceShape; // 0x30(0x1)
		TEnumAsByte TraceMode; // 0x31(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		bool bTraceComplex : 1; // 0x34:0(0x1)
		bool bOnlyBlockingHits : 1; // 0x34:1(0x1)
		bool bCanTraceOnNavMesh : 1; // 0x34:2(0x1)
		bool bCanTraceOnGeometry : 1; // 0x34:3(0x1)
		bool bCanDisableTrace : 1; // 0x34:4(0x1)
		bool bCanProjectDown : 1; // 0x34:5(0x1)
		unsigned char UnknownData07_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
	};


	// Struct AIModule.EnvOverlapData
	// Size: 0x30 (0x30 - 0x0)
	struct FEnvOverlapData	
	{
	public:
		float ExtentX; // 0x0(0x4)
		float ExtentY; // 0x4(0x4)
		float ExtentZ; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector ShapeOffset; // 0x10(0x18)
		TEnumAsByte OverlapChannel; // 0x28(0x1)
		TEnumAsByte OverlapShape; // 0x29(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		bool bOnlyBlockingHits : 1; // 0x2C:0(0x1)
		bool bOverlapComplex : 1; // 0x2C:1(0x1)
		bool bSkipOverlapQuerier : 1; // 0x2C:2(0x1)
		unsigned char UnknownData05_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
	};


	// Struct AIModule.EnvQueryResult
	// Size: 0x40 (0x40 - 0x0)
	struct FEnvQueryResult	
	{
	public:
		unsigned char UnknownData03_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		UClass ItemType; // 0x10(0x8)
		unsigned char UnknownData04_6[0x14]; // 0x18(0x14) UNKNOWN PROPERTY
		int32_t OptionIndex; // 0x2C(0x4)
		int32_t QueryID; // 0x30(0x4)
		unsigned char UnknownData05_7[0xC]; // 0x34(0xC) UNKNOWN PROPERTY
	};


	// Struct AIModule.EQSParametrizedQueryExecutionRequest
	// Size: 0x48 (0x48 - 0x0)
	struct FEQSParametrizedQueryExecutionRequest	
	{
	public:
		UEnvQuery QueryTemplate; // 0x0(0x8)
		TArray QueryConfig; // 0x8(0x10)
		FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18(0x28)
		TEnumAsByte RunMode; // 0x40(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		bool bUseBBKeyForQueryTemplate : 1; // 0x44:0(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
	};


	// Struct AIModule.GenericTeamId
	// Size: 0x1 (0x1 - 0x0)
	struct FGenericTeamId	
	{
	public:
		char TeamID; // 0x0(0x1)
	};


	// Struct AIModule.SimpleIndexedHandleBase
	// Size: 0x4 (0x4 - 0x0)
	struct FSimpleIndexedHandleBase	
	{
	public:
		unsigned char UnknownData01_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct AIModule.IndexedHandleBase
	// Inherited from FSimpleIndexedHandleBase
	// Size: 0x4 (0x8 - 0x4)
	struct FIndexedHandleBase : public FSimpleIndexedHandleBase	
	{
	public:
		unsigned char UnknownData01_1[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
	};


	// Struct AIModule.CompactIndexedHandleBase
	// Size: 0x4 (0x4 - 0x0)
	struct FCompactIndexedHandleBase	
	{
	public:
		unsigned char UnknownData01_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct AIModule.SequentialIDBase
	// Size: 0x4 (0x4 - 0x0)
	struct FSequentialIDBase	
	{
	public:
		uint32_t Value; // 0x0(0x4)
	};


	// Struct AIModule.ValueOrBlackboardKeyBase
	// Size: 0x8 (0x8 - 0x0)
	struct FValueOrBlackboardKeyBase	
	{
	public:
		FName Key; // 0x0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
	};


	// Struct AIModule.ValueOrBBKey_Bool
	// Inherited from FValueOrBlackboardKeyBase
	// Size: 0x4 (0xC - 0x8)
	struct FValueOrBBKey_Bool : public FValueOrBlackboardKeyBase	
	{
	public:
		bool DefaultValue; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct AIModule.ValueOrBBKey_Class
	// Inherited from FValueOrBlackboardKeyBase
	// Size: 0x10 (0x18 - 0x8)
	struct FValueOrBBKey_Class : public FValueOrBlackboardKeyBase	
	{
	public:
		UClass DefaultValue; // 0x8(0x8)
		UClass BaseClass; // 0x10(0x8)
	};


	// Struct AIModule.ValueOrBBKey_Enum
	// Inherited from FValueOrBlackboardKeyBase
	// Size: 0x20 (0x28 - 0x8)
	struct FValueOrBBKey_Enum : public FValueOrBlackboardKeyBase	
	{
	public:
		char DefaultValue; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		UEnum EnumType; // 0x10(0x8)
		FString NativeEnumTypeName; // 0x18(0x10)
	};


	// Struct AIModule.ValueOrBBKey_Float
	// Inherited from FValueOrBlackboardKeyBase
	// Size: 0x4 (0xC - 0x8)
	struct FValueOrBBKey_Float : public FValueOrBlackboardKeyBase	
	{
	public:
		float DefaultValue; // 0x8(0x4)
	};


	// Struct AIModule.ValueOrBBKey_Int32
	// Inherited from FValueOrBlackboardKeyBase
	// Size: 0x4 (0xC - 0x8)
	struct FValueOrBBKey_Int32 : public FValueOrBlackboardKeyBase	
	{
	public:
		int32_t DefaultValue; // 0x8(0x4)
	};


	// Struct AIModule.ValueOrBBKey_Name
	// Inherited from FValueOrBlackboardKeyBase
	// Size: 0x4 (0xC - 0x8)
	struct FValueOrBBKey_Name : public FValueOrBlackboardKeyBase	
	{
	public:
		FName DefaultValue; // 0x8(0x4)
	};


	// Struct AIModule.ValueOrBBKey_String
	// Inherited from FValueOrBlackboardKeyBase
	// Size: 0x10 (0x18 - 0x8)
	struct FValueOrBBKey_String : public FValueOrBlackboardKeyBase	
	{
	public:
		FString DefaultValue; // 0x8(0x10)
	};


	// Struct AIModule.ValueOrBBKey_Object
	// Inherited from FValueOrBlackboardKeyBase
	// Size: 0x10 (0x18 - 0x8)
	struct FValueOrBBKey_Object : public FValueOrBlackboardKeyBase	
	{
	public:
		UObject DefaultValue; // 0x8(0x8)
		UClass BaseClass; // 0x10(0x8)
	};


	// Struct AIModule.ValueOrBBKey_Rotator
	// Inherited from FValueOrBlackboardKeyBase
	// Size: 0x18 (0x20 - 0x8)
	struct FValueOrBBKey_Rotator : public FValueOrBlackboardKeyBase	
	{
	public:
		FRotator DefaultValue; // 0x8(0x18)
	};


	// Struct AIModule.ValueOrBBKey_Vector
	// Inherited from FValueOrBlackboardKeyBase
	// Size: 0x18 (0x20 - 0x8)
	struct FValueOrBBKey_Vector : public FValueOrBlackboardKeyBase	
	{
	public:
		FVector DefaultValue; // 0x8(0x18)
	};


	// Struct AIModule.ValueOrBBKey_Struct
	// Inherited from FValueOrBlackboardKeyBase
	// Size: 0x10 (0x18 - 0x8)
	struct FValueOrBBKey_Struct : public FValueOrBlackboardKeyBase	
	{
	public:
		FInstancedStruct DefaultValue; // 0x8(0x10)
	};


	// Struct AIModule.PawnActionEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FPawnActionEvent	
	{
	public:
		UPawnAction Action; // 0x0(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct AIModule.PawnActionStack
	// Size: 0x8 (0x8 - 0x0)
	struct FPawnActionStack	
	{
	public:
		UPawnAction TopAction; // 0x0(0x8)
	};


	// Struct AIModule.BehaviorTreeTemplateInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FBehaviorTreeTemplateInfo	
	{
	public:
		UBehaviorTree Asset; // 0x0(0x8)
		UBTCompositeNode Template; // 0x8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct AIModule.BlackboardEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FBlackboardEntry	
	{
	public:
		FName EntryName; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UBlackboardKeyType KeyType; // 0x8(0x8)
		bool bInstanceSynced : 1; // 0x10:0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct AIModule.BTDecoratorLogic
	// Size: 0x4 (0x4 - 0x0)
	struct FBTDecoratorLogic	
	{
	public:
		TEnumAsByte Operation; // 0x0(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x1(0x1) UNKNOWN PROPERTY
		uint16_t Number; // 0x2(0x2)
	};


	// Struct AIModule.BTCompositeChild
	// Size: 0x30 (0x30 - 0x0)
	struct FBTCompositeChild	
	{
	public:
		UBTCompositeNode ChildComposite; // 0x0(0x8)
		UBTTaskNode ChildTask; // 0x8(0x8)
		TArray Decorators; // 0x10(0x10)
		TArray DecoratorOps; // 0x20(0x10)
	};


	// Struct AIModule.AIDataProviderValue
	// Size: 0x20 (0x20 - 0x0)
	struct FAIDataProviderValue	
	{
	public:
		unsigned char UnknownData02_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		UAIDataProvider DataBinding; // 0x10(0x8)
		FName DataField; // 0x18(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct AIModule.AIDataProviderTypedValue
	// Inherited from FAIDataProviderValue
	// Size: 0x10 (0x30 - 0x20)
	struct FAIDataProviderTypedValue : public FAIDataProviderValue	
	{
	public:
		UClass PropertyType; // 0x20(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct AIModule.AIDataProviderStructValue
	// Inherited from FAIDataProviderValue
	// Size: 0x10 (0x30 - 0x20)
	struct FAIDataProviderStructValue : public FAIDataProviderValue	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x20(0x10) UNKNOWN PROPERTY
	};


	// Struct AIModule.AIDataProviderIntValue
	// Inherited from FAIDataProviderTypedValue -> FAIDataProviderValue
	// Size: 0x8 (0x38 - 0x30)
	struct FAIDataProviderIntValue : public FAIDataProviderTypedValue	
	{
	public:
		int32_t DefaultValue; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct AIModule.AIDataProviderFloatValue
	// Inherited from FAIDataProviderTypedValue -> FAIDataProviderValue
	// Size: 0x8 (0x38 - 0x30)
	struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue	
	{
	public:
		float DefaultValue; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct AIModule.AIDataProviderBoolValue
	// Inherited from FAIDataProviderTypedValue -> FAIDataProviderValue
	// Size: 0x8 (0x38 - 0x30)
	struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue	
	{
	public:
		bool DefaultValue; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct AIModule.EnvQueryManagerConfig
	// Size: 0x30 (0x30 - 0x0)
	struct FEnvQueryManagerConfig	
	{
	public:
		float MaxAllowedTestingTime; // 0x0(0x4)
		bool bTestQueriesUsingBreadth; // 0x4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t QueryCountWarningThreshold; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		double QueryCountWarningInterval; // 0x10(0x8)
		double ExecutionTimeWarningSeconds; // 0x18(0x8)
		double HandlingResultTimeWarningSeconds; // 0x20(0x8)
		double GenerationTimeWarningSeconds; // 0x28(0x8)
	};


	// Struct AIModule.EnvQueryRequest
	// Size: 0x68 (0x68 - 0x0)
	struct FEnvQueryRequest	
	{
	public:
		UEnvQuery QueryTemplate; // 0x0(0x8)
		UObject Owner; // 0x8(0x8)
		UWorld World; // 0x10(0x8)
		unsigned char UnknownData01_7[0x50]; // 0x18(0x50) UNKNOWN PROPERTY
	};


	// Struct AIModule.EnvQueryInstanceCache
	// Size: 0x180 (0x180 - 0x0)
	struct FEnvQueryInstanceCache	
	{
	public:
		UEnvQuery Template; // 0x0(0x8)
		unsigned char UnknownData01_7[0x178]; // 0x8(0x178) UNKNOWN PROPERTY
	};


	// Struct AIModule.CrowdAvoidanceConfig
	// Size: 0x1C (0x1C - 0x0)
	struct FCrowdAvoidanceConfig	
	{
	public:
		float VelocityBias; // 0x0(0x4)
		float DesiredVelocityWeight; // 0x4(0x4)
		float CurrentVelocityWeight; // 0x8(0x4)
		float SideBiasWeight; // 0xC(0x4)
		float ImpactTimeWeight; // 0x10(0x4)
		float ImpactTimeRange; // 0x14(0x4)
		char CustomPatternIdx; // 0x18(0x1)
		char AdaptiveDivisions; // 0x19(0x1)
		char AdaptiveRings; // 0x1A(0x1)
		char AdaptiveDepth; // 0x1B(0x1)
	};


	// Struct AIModule.CrowdAvoidanceSamplingPattern
	// Size: 0x20 (0x20 - 0x0)
	struct FCrowdAvoidanceSamplingPattern	
	{
	public:
		TArray Angles; // 0x0(0x10)
		TArray Radii; // 0x10(0x10)
	};


	// Struct AIModule.RecastGraphWrapper
	// Size: 0xB8 (0xB8 - 0x0)
	struct FRecastGraphWrapper	
	{
	public:
		ARecastNavMesh RecastNavMeshActor; // 0x0(0x8)
		unsigned char UnknownData01_7[0xB0]; // 0x8(0xB0) UNKNOWN PROPERTY
	};


	// Struct AIModule.ActorPerceptionBlueprintInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FActorPerceptionBlueprintInfo	
	{
	public:
		AActor Target; // 0x0(0x8)
		TArray LastSensedStimuli; // 0x8(0x10)
		bool bIsHostile : 1; // 0x18:0(0x1)
		bool bIsFriendly : 1; // 0x18:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct AIModule.AISenseAffiliationFilter
	// Size: 0x4 (0x4 - 0x0)
	struct FAISenseAffiliationFilter	
	{
	public:
		bool bDetectEnemies : 1; // 0x0:0(0x1)
		bool bDetectNeutrals : 1; // 0x0:1(0x1)
		bool bDetectFriendlies : 1; // 0x0:2(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
	};


	// Struct AIModule.AIDamageEvent
	// Size: 0x50 (0x50 - 0x0)
	struct FAIDamageEvent	
	{
	public:
		float Amount; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Location; // 0x8(0x18)
		FVector HitLocation; // 0x20(0x18)
		AActor DamagedActor; // 0x38(0x8)
		AActor Instigator; // 0x40(0x8)
		FName tag; // 0x48(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct AIModule.AINoiseEvent
	// Size: 0x38 (0x38 - 0x0)
	struct FAINoiseEvent	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FVector NoiseLocation; // 0x8(0x18)
		float Loudness; // 0x20(0x4)
		float MaxRange; // 0x24(0x4)
		AActor Instigator; // 0x28(0x8)
		FName tag; // 0x30(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct AIModule.AIPredictionEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FAIPredictionEvent	
	{
	public:
		AActor Requestor; // 0x0(0x8)
		AActor PredictedActor; // 0x8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct AIModule.AISightEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FAISightEvent	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		AActor SeenActor; // 0x8(0x8)
		AActor Observer; // 0x10(0x8)
	};


	// Struct AIModule.AITeamStimulusEvent
	// Size: 0x50 (0x50 - 0x0)
	struct FAITeamStimulusEvent	
	{
	public:
		unsigned char UnknownData01_7[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
		AActor Broadcaster; // 0x40(0x8)
		AActor Enemy; // 0x48(0x8)
	};


	// Struct AIModule.AITouchEvent
	// Size: 0x30 (0x30 - 0x0)
	struct FAITouchEvent	
	{
	public:
		unsigned char UnknownData02_7[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
		AActor TouchReceiver; // 0x18(0x8)
		AActor OtherActor; // 0x20(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};

}
