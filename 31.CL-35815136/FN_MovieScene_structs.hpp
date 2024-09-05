#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MovieScene
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MovieScene.ActorForWorldTransforms
	// Size: 0x14 (0x14 - 0x0)
	struct FActorForWorldTransforms	
	{
	public:
		TWeakObjectPtr<AActor*> Actor; // 0x0(0x8)
		TWeakObjectPtr<USceneComponent*> Component; // 0x8(0x8)
		FName SocketName; // 0x10(0x4)
	};


	// Struct MovieScene.MovieSceneDeterminismData
	// Size: 0x18 (0x18 - 0x0)
	struct FMovieSceneDeterminismData	
	{
	public:
		TArray<FFrameTime> Fences; // 0x0(0x10)
		bool bParentSequenceRequiresLowerFence; // 0x10(0x1)
		bool bParentSequenceRequiresUpperFence; // 0x11(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneBindingResolveResult
	// Size: 0x8 (0x8 - 0x0)
	struct FMovieSceneBindingResolveResult	
	{
	public:
		UObject* Object; // 0x0(0x8)
	};


	// Struct MovieScene.MovieSceneEmptyStruct
	// Size: 0x1 (0x1 - 0x0)
	struct FMovieSceneEmptyStruct	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneEvalTemplateBase
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneEvalTemplateBase	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneEvaluationKey
	// Size: 0xC (0xC - 0x0)
	struct FMovieSceneEvaluationKey	
	{
	public:
		FMovieSceneSequenceID SequenceID; // 0x0(0x4)
		FMovieSceneTrackIdentifier TrackIdentifier; // 0x4(0x4)
		uint32_t SectionIndex; // 0x8(0x4)
	};


	// Struct MovieScene.MovieSceneTrackIdentifier
	// Size: 0x4 (0x4 - 0x0)
	struct FMovieSceneTrackIdentifier	
	{
	public:
		uint32_t Value; // 0x0(0x4)
	};


	// Struct MovieScene.MovieSceneSequenceID
	// Size: 0x4 (0x4 - 0x0)
	struct FMovieSceneSequenceID	
	{
	public:
		uint32_t Value; // 0x0(0x4)
	};


	// Struct MovieScene.MovieSceneEvaluationOperand
	// Size: 0x14 (0x14 - 0x0)
	struct FMovieSceneEvaluationOperand	
	{
	public:
		FGuid ObjectBindingID; // 0x0(0x10)
		FMovieSceneSequenceID SequenceID; // 0x10(0x4)
	};


	// Struct MovieScene.MovieSceneKeyStruct
	// Size: 0x8 (0x8 - 0x0)
	struct FMovieSceneKeyStruct	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct MovieScene.GeneratedMovieSceneKeyStruct
	// Size: 0x50 (0x50 - 0x0)
	struct FGeneratedMovieSceneKeyStruct	
	{
	public:
		unsigned char UnknownData00_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneKeyTimeStruct
	// Inherited from FMovieSceneKeyStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct	
	{
	public:
		FFrameNumber Time; // 0x8(0x4)
		unsigned char UnknownData00_7[0x1C]; // 0xC(0x1C) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieScenePropertyBinding
	// Size: 0xC (0xC - 0x0)
	struct FMovieScenePropertyBinding	
	{
	public:
		FName PropertyName; // 0x0(0x4)
		FName PropertyPath; // 0x4(0x4)
		bool bCanUseClassLookup; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneSectionParameters
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieSceneSectionParameters	
	{
	public:
		FFrameNumber StartFrameOffset; // 0x0(0x4)
		bool bCanLoop; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FFrameNumber EndFrameOffset; // 0x8(0x4)
		FFrameNumber FirstLoopStartFrameOffset; // 0xC(0x4)
		float timescale; // 0x10(0x4)
		int32_t HierarchicalBias; // 0x14(0x4)
		EMovieSceneSubSectionFlags Flags; // 0x18(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		float StartOffset; // 0x1C(0x4)
		float PrerollTime; // 0x20(0x4)
		float PostrollTime; // 0x24(0x4)
	};


	// Struct MovieScene.MovieSceneSegmentIdentifier
	// Size: 0x4 (0x4 - 0x0)
	struct FMovieSceneSegmentIdentifier	
	{
	public:
		int32_t IdentifierIndex; // 0x0(0x4)
	};


	// Struct MovieScene.SectionEvaluationData
	// Size: 0xC (0xC - 0x0)
	struct FSectionEvaluationData	
	{
	public:
		int32_t ImplIndex; // 0x0(0x4)
		FFrameNumber ForcedTime; // 0x4(0x4)
		ESectionEvaluationFlags Flags; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneSegment
	// Size: 0x58 (0x58 - 0x0)
	struct FMovieSceneSegment	
	{
	public:
		unsigned char UnknownData00_2[0x58]; // 0x0(0x58) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneSequenceLoopCount
	// Size: 0x4 (0x4 - 0x0)
	struct FMovieSceneSequenceLoopCount	
	{
	public:
		int32_t Value; // 0x0(0x4)
	};


	// Struct MovieScene.MovieSceneSequencePlaybackSettings
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieSceneSequencePlaybackSettings	
	{
	public:
		bool bAutoPlay : 1; // 0x0:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FMovieSceneSequenceLoopCount LoopCount; // 0x4(0x4)
		FMovieSceneSequenceTickInterval TickInterval; // 0x8(0xC)
		float PlayRate; // 0x14(0x4)
		float StartTime; // 0x18(0x4)
		bool bRandomStartTime : 1; // 0x1C:0(0x1)
		bool bDisableMovementInput : 1; // 0x1C:1(0x1)
		bool bDisableLookAtInput : 1; // 0x1C:2(0x1)
		bool bHidePlayer : 1; // 0x1C:3(0x1)
		bool bHideHUD : 1; // 0x1C:4(0x1)
		bool bDisableCameraCuts : 1; // 0x1C:5(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		EMovieSceneCompletionModeOverride FinishCompletionStateOverride; // 0x20(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		bool bPauseAtEnd : 1; // 0x24:0(0x1)
		bool bInheritTickIntervalFromOwner : 1; // 0x24:1(0x1)
		bool bDynamicWeighting : 1; // 0x24:2(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneSequenceTickInterval
	// Size: 0xC (0xC - 0x0)
	struct FMovieSceneSequenceTickInterval	
	{
	public:
		float TickIntervalSeconds; // 0x0(0x4)
		float EvaluationBudgetMicroseconds; // 0x4(0x4)
		bool bTickWhenPaused; // 0x8(0x1)
		bool bAllowRounding; // 0x9(0x1)
		unsigned char UnknownData00_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneTimeTransform
	// Size: 0xC (0xC - 0x0)
	struct FMovieSceneTimeTransform	
	{
	public:
		float timescale; // 0x0(0x4)
		FFrameTime Offset; // 0x4(0x8)
	};


	// Struct MovieScene.MovieSceneChannel
	// Size: 0x50 (0x50 - 0x0)
	struct FMovieSceneChannel	
	{
	public:
		unsigned char UnknownData00_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneAudioTriggerChannel
	// Inherited from FMovieSceneChannel
	// Size: 0xA8 (0xF8 - 0x50)
	struct FMovieSceneAudioTriggerChannel : public FMovieSceneChannel	
	{
	public:
		TArray<FFrameNumber> Times; // 0x50(0x10)
		TArray<bool> Values; // 0x60(0x10)
		FMovieSceneKeyHandleMap KeyHandles; // 0x70(0x88)
	};


	// Struct MovieScene.MovieSceneKeyHandleMap
	// Inherited from FKeyHandleLookupTable
	// Size: 0x0 (0x88 - 0x88)
	struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable	
	{
	public:
	};


	// Struct MovieScene.MovieSceneBoolChannel
	// Inherited from FMovieSceneChannel
	// Size: 0xB8 (0x108 - 0x50)
	struct FMovieSceneBoolChannel : public FMovieSceneChannel	
	{
	public:
		TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap; // 0x50(0x1)
		TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap; // 0x51(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x52(0x6) UNKNOWN PROPERTY
		TArray<FFrameNumber> Times; // 0x58(0x10)
		bool DefaultValue; // 0x68(0x1)
		bool bHasDefaultValue; // 0x69(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x6A(0x6) UNKNOWN PROPERTY
		TArray<bool> Values; // 0x70(0x10)
		FMovieSceneKeyHandleMap KeyHandles; // 0x80(0x88)
	};


	// Struct MovieScene.MovieSceneByteChannel
	// Inherited from FMovieSceneChannel
	// Size: 0xB8 (0x108 - 0x50)
	struct FMovieSceneByteChannel : public FMovieSceneChannel	
	{
	public:
		TArray<FFrameNumber> Times; // 0x50(0x10)
		char DefaultValue; // 0x60(0x1)
		bool bHasDefaultValue; // 0x61(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x62(0x6) UNKNOWN PROPERTY
		TArray<char> Values; // 0x68(0x10)
		UEnum* Enum; // 0x78(0x8)
		FMovieSceneKeyHandleMap KeyHandles; // 0x80(0x88)
	};


	// Struct MovieScene.MovieSceneTangentData
	// Size: 0x14 (0x14 - 0x0)
	struct FMovieSceneTangentData	
	{
	public:
		float ArriveTangent; // 0x0(0x4)
		float LeaveTangent; // 0x4(0x4)
		float ArriveTangentWeight; // 0x8(0x4)
		float LeaveTangentWeight; // 0xC(0x4)
		TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode; // 0x10(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneDoubleValue
	// Size: 0x20 (0x20 - 0x0)
	struct FMovieSceneDoubleValue	
	{
	public:
		double Value; // 0x0(0x8)
		FMovieSceneTangentData Tangent; // 0x8(0x14)
		TEnumAsByte<ERichCurveInterpMode> InterpMode; // 0x1C(0x1)
		TEnumAsByte<ERichCurveTangentMode> TangentMode; // 0x1D(0x1)
		char PaddingByte; // 0x1E(0x1)
		unsigned char UnknownData00_7[0x1]; // 0x1F(0x1) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneDoubleChannel
	// Inherited from FMovieSceneChannel
	// Size: 0xC8 (0x118 - 0x50)
	struct FMovieSceneDoubleChannel : public FMovieSceneChannel	
	{
	public:
		TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap; // 0x50(0x1)
		TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap; // 0x51(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x52(0x6) UNKNOWN PROPERTY
		TArray<FFrameNumber> Times; // 0x58(0x10)
		TArray<FMovieSceneDoubleValue> Values; // 0x68(0x10)
		double DefaultValue; // 0x78(0x8)
		bool bHasDefaultValue; // 0x80(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
		FMovieSceneKeyHandleMap KeyHandles; // 0x88(0x88)
		FFrameRate TickResolution; // 0x110(0x8)
	};


	// Struct MovieScene.MovieSceneFloatValue
	// Size: 0x1C (0x1C - 0x0)
	struct FMovieSceneFloatValue	
	{
	public:
		float Value; // 0x0(0x4)
		FMovieSceneTangentData Tangent; // 0x4(0x14)
		TEnumAsByte<ERichCurveInterpMode> InterpMode; // 0x18(0x1)
		TEnumAsByte<ERichCurveTangentMode> TangentMode; // 0x19(0x1)
		char PaddingByte; // 0x1A(0x1)
		unsigned char UnknownData00_7[0x1]; // 0x1B(0x1) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneFloatChannel
	// Inherited from FMovieSceneChannel
	// Size: 0xC0 (0x110 - 0x50)
	struct FMovieSceneFloatChannel : public FMovieSceneChannel	
	{
	public:
		TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap; // 0x50(0x1)
		TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap; // 0x51(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x52(0x6) UNKNOWN PROPERTY
		TArray<FFrameNumber> Times; // 0x58(0x10)
		TArray<FMovieSceneFloatValue> Values; // 0x68(0x10)
		float DefaultValue; // 0x78(0x4)
		bool bHasDefaultValue; // 0x7C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
		FMovieSceneKeyHandleMap KeyHandles; // 0x80(0x88)
		FFrameRate TickResolution; // 0x108(0x8)
	};


	// Struct MovieScene.MovieSceneIntegerChannel
	// Inherited from FMovieSceneChannel
	// Size: 0xB8 (0x108 - 0x50)
	struct FMovieSceneIntegerChannel : public FMovieSceneChannel	
	{
	public:
		TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap; // 0x50(0x1)
		TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap; // 0x51(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x52(0x6) UNKNOWN PROPERTY
		TArray<FFrameNumber> Times; // 0x58(0x10)
		int32_t DefaultValue; // 0x68(0x4)
		bool bHasDefaultValue; // 0x6C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		TArray<int32_t> Values; // 0x70(0x10)
		FMovieSceneKeyHandleMap KeyHandles; // 0x80(0x88)
	};


	// Struct MovieScene.MovieSceneObjectPathChannelKeyValue
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieSceneObjectPathChannelKeyValue	
	{
	public:
		TWeakObjectPtr<UObject*> SoftPtr; // 0x0(0x20)
		UObject* HardPtr; // 0x20(0x8)
	};


	// Struct MovieScene.MovieSceneObjectPathChannel
	// Inherited from FMovieSceneChannel
	// Size: 0xD8 (0x128 - 0x50)
	struct FMovieSceneObjectPathChannel : public FMovieSceneChannel	
	{
	public:
		UClass* PropertyClass; // 0x50(0x8)
		TArray<FFrameNumber> Times; // 0x58(0x10)
		TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x68(0x10)
		FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x78(0x28)
		FMovieSceneKeyHandleMap KeyHandles; // 0xA0(0x88)
	};


	// Struct MovieScene.MovieSceneCompiledSequenceFlagStruct
	// Size: 0x1 (0x1 - 0x0)
	struct FMovieSceneCompiledSequenceFlagStruct	
	{
	public:
		bool bParentSequenceRequiresLowerFence : 1; // 0x0:0(0x1)
		bool bParentSequenceRequiresUpperFence : 1; // 0x0:1(0x1)
	};


	// Struct MovieScene.EasingComponentData
	// Size: 0x8 (0x8 - 0x0)
	struct FEasingComponentData	
	{
	public:
		UMovieSceneSection* Section; // 0x0(0x8)
	};


	// Struct MovieScene.MovieSceneTrackInstanceComponent
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneTrackInstanceComponent	
	{
	public:
		UMovieSceneSection* Owner; // 0x0(0x8)
		UClass* TrackInstanceClass; // 0x8(0x8)
	};


	// Struct MovieScene.MovieSceneEvaluationHookComponent
	// Size: 0x20 (0x20 - 0x0)
	struct FMovieSceneEvaluationHookComponent	
	{
	public:
		TScriptInterface<Class> Interface; // 0x0(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct MovieScene.TrackInstanceInputComponent
	// Size: 0x10 (0x10 - 0x0)
	struct FTrackInstanceInputComponent	
	{
	public:
		UMovieSceneSection* Section; // 0x0(0x8)
		int32_t OutputIndex; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneEntitySystemGraphNode
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieSceneEntitySystemGraphNode	
	{
	public:
		unsigned char UnknownData00_7[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
		UMovieSceneEntitySystem* System; // 0x20(0x8)
	};


	// Struct MovieScene.MovieSceneEntitySystemGraphNodes
	// Size: 0x38 (0x38 - 0x0)
	struct FMovieSceneEntitySystemGraphNodes	
	{
	public:
		unsigned char UnknownData00_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneEntitySystemGraph
	// Size: 0x190 (0x190 - 0x0)
	struct FMovieSceneEntitySystemGraph	
	{
	public:
		unsigned char UnknownData00_7[0xB8]; // 0x0(0xB8) UNKNOWN PROPERTY
		FMovieSceneEntitySystemGraphNodes Nodes; // 0xB8(0x38)
		unsigned char UnknownData01_7[0xA0]; // 0xF0(0xA0) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneEvaluationHookEvent
	// Size: 0x40 (0x40 - 0x0)
	struct FMovieSceneEvaluationHookEvent	
	{
	public:
		FMovieSceneEvaluationHookComponent Hook; // 0x0(0x20)
		unsigned char UnknownData00_7[0x20]; // 0x20(0x20) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneEvaluationHookEventContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneEvaluationHookEventContainer	
	{
	public:
		TArray<FMovieSceneEvaluationHookEvent> Events; // 0x0(0x10)
	};


	// Struct MovieScene.MovieSceneEvaluationInstanceKey
	// Size: 0x4 (0x4 - 0x0)
	struct FMovieSceneEvaluationInstanceKey	
	{
	public:
		unsigned char UnknownData00_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneTrackInstanceInput
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneTrackInstanceInput	
	{
	public:
		UMovieSceneSection* Section; // 0x0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneTrackInstanceEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneTrackInstanceEntry	
	{
	public:
		UObject* BoundObject; // 0x0(0x8)
		UMovieSceneTrackInstance* TrackInstance; // 0x8(0x8)
	};


	// Struct MovieScene.OptionalMovieSceneBlendType
	// Size: 0x2 (0x2 - 0x0)
	struct FOptionalMovieSceneBlendType	
	{
	public:
		EMovieSceneBlendType BlendType; // 0x0(0x1)
		bool bIsValid; // 0x1(0x1)
	};


	// Struct MovieScene.MovieSceneEvalTemplate
	// Inherited from FMovieSceneEvalTemplateBase
	// Size: 0x10 (0x20 - 0x10)
	struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase	
	{
	public:
		EMovieSceneCompletionMode CompletionMode; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UMovieSceneSection*> SourceSectionPtr; // 0x14(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneEvalTemplatePtr
	// Size: 0x88 (0x88 - 0x0)
	struct FMovieSceneEvalTemplatePtr	
	{
	public:
		unsigned char UnknownData00_2[0x88]; // 0x0(0x88) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneEvaluationFieldEntityKey
	// Size: 0xC (0xC - 0x0)
	struct FMovieSceneEvaluationFieldEntityKey	
	{
	public:
		TWeakObjectPtr<UObject*> EntityOwner; // 0x0(0x8)
		uint32_t EntityID; // 0x8(0x4)
	};


	// Struct MovieScene.MovieSceneEvaluationFieldEntity
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneEvaluationFieldEntity	
	{
	public:
		FMovieSceneEvaluationFieldEntityKey Key; // 0x0(0xC)
		int32_t SharedMetaDataIndex; // 0xC(0x4)
	};


	// Struct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneEvaluationFieldSharedEntityMetaData	
	{
	public:
		FGuid ObjectBindingID; // 0x0(0x10)
	};


	// Struct MovieScene.MovieSceneEvaluationFieldEntityMetaData
	// Size: 0x18 (0x18 - 0x0)
	struct FMovieSceneEvaluationFieldEntityMetaData	
	{
	public:
		FString OverrideBoundPropertyPath; // 0x0(0x10)
		FFrameNumber ForcedTime; // 0x10(0x4)
		ESectionEvaluationFlags Flags; // 0x14(0x1)
		bool bEvaluateInSequencePreRoll : 1; // 0x15:0(0x1)
		bool bEvaluateInSequencePostRoll : 1; // 0x15:1(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneEvaluationFieldEntityTree
	// Size: 0x60 (0x60 - 0x0)
	struct FMovieSceneEvaluationFieldEntityTree	
	{
	public:
		unsigned char UnknownData00_2[0x60]; // 0x0(0x60) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneEntityComponentField
	// Size: 0xF0 (0xF0 - 0x0)
	struct FMovieSceneEntityComponentField	
	{
	public:
		FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0(0x60)
		FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60(0x60)
		TArray<FMovieSceneEvaluationFieldEntity> Entities; // 0xC0(0x10)
		TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xD0(0x10)
		TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xE0(0x10)
	};


	// Struct MovieScene.MovieSceneEvaluationFieldTrackPtr
	// Size: 0x8 (0x8 - 0x0)
	struct FMovieSceneEvaluationFieldTrackPtr	
	{
	public:
		FMovieSceneSequenceID SequenceID; // 0x0(0x4)
		FMovieSceneTrackIdentifier TrackIdentifier; // 0x4(0x4)
	};


	// Struct MovieScene.MovieSceneEvaluationFieldSegmentPtr
	// Inherited from FMovieSceneEvaluationFieldTrackPtr
	// Size: 0x4 (0xC - 0x8)
	struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr	
	{
	public:
		FMovieSceneSegmentIdentifier SegmentID; // 0x8(0x4)
	};


	// Struct MovieScene.MovieSceneFieldEntry_EvaluationTrack
	// Size: 0xC (0xC - 0x0)
	struct FMovieSceneFieldEntry_EvaluationTrack	
	{
	public:
		FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0(0x8)
		uint16_t NumChildren; // 0x8(0x2)
		unsigned char UnknownData00_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneFieldEntry_ChildTemplate
	// Size: 0x8 (0x8 - 0x0)
	struct FMovieSceneFieldEntry_ChildTemplate	
	{
	public:
		uint16_t ChildIndex; // 0x0(0x2)
		ESectionEvaluationFlags Flags; // 0x2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		FFrameNumber ForcedTime; // 0x4(0x4)
	};


	// Struct MovieScene.MovieSceneEvaluationGroupLUTIndex
	// Size: 0x8 (0x8 - 0x0)
	struct FMovieSceneEvaluationGroupLUTIndex	
	{
	public:
		int32_t NumInitPtrs; // 0x0(0x4)
		int32_t NumEvalPtrs; // 0x4(0x4)
	};


	// Struct MovieScene.MovieSceneEvaluationGroup
	// Size: 0x30 (0x30 - 0x0)
	struct FMovieSceneEvaluationGroup	
	{
	public:
		TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0(0x10)
		TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10(0x10)
		TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20(0x10)
	};


	// Struct MovieScene.MovieSceneOrderedEvaluationKey
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneOrderedEvaluationKey	
	{
	public:
		FMovieSceneEvaluationKey Key; // 0x0(0xC)
		uint16_t SetupIndex; // 0xC(0x2)
		uint16_t TearDownIndex; // 0xE(0x2)
	};


	// Struct MovieScene.MovieSceneEvaluationMetaData
	// Size: 0x20 (0x20 - 0x0)
	struct FMovieSceneEvaluationMetaData	
	{
	public:
		TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0(0x10)
		TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10(0x10)
	};


	// Struct MovieScene.MovieSceneEvaluationField
	// Size: 0x30 (0x30 - 0x0)
	struct FMovieSceneEvaluationField	
	{
	public:
		TArray<FMovieSceneFrameRange> Ranges; // 0x0(0x10)
		TArray<FMovieSceneEvaluationGroup> Groups; // 0x10(0x10)
		TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20(0x10)
	};


	// Struct MovieScene.MovieSceneFrameRange
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneFrameRange	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneTemplateGenerationLedger
	// Size: 0xA8 (0xA8 - 0x0)
	struct FMovieSceneTemplateGenerationLedger	
	{
	public:
		FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8(0x50)
		TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58(0x50)
	};


	// Struct MovieScene.MovieSceneSubSectionData
	// Size: 0x1C (0x1C - 0x0)
	struct FMovieSceneSubSectionData	
	{
	public:
		TWeakObjectPtr<UMovieSceneSubSection*> Section; // 0x0(0x8)
		FGuid ObjectBindingID; // 0x8(0x10)
		ESectionEvaluationFlags Flags; // 0x18(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneEvaluationTemplateSerialNumber
	// Size: 0x4 (0x4 - 0x0)
	struct FMovieSceneEvaluationTemplateSerialNumber	
	{
	public:
		uint32_t Value; // 0x0(0x4)
	};


	// Struct MovieScene.MovieSceneEvaluationTemplate
	// Size: 0x160 (0x160 - 0x0)
	struct FMovieSceneEvaluationTemplate	
	{
	public:
		TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0(0x50)
		unsigned char UnknownData00_6[0x50]; // 0x50(0x50) UNKNOWN PROPERTY
		FGuid SequenceSignature; // 0xA0(0x10)
		FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xB0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xB8(0xA8)
	};


	// Struct MovieScene.MovieSceneEvaluationTrack
	// Size: 0x70 (0x70 - 0x0)
	struct FMovieSceneEvaluationTrack	
	{
	public:
		FGuid ObjectBindingID; // 0x0(0x10)
		uint16_t EvaluationPriority; // 0x10(0x2)
		EEvaluationMethod EvaluationMethod; // 0x12(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x13(0x1) UNKNOWN PROPERTY
		TWeakObjectPtr<UMovieSceneTrack*> SourceTrack; // 0x14(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TArray<FMovieSceneEvalTemplatePtr> ChildTemplates; // 0x20(0x10)
		FMovieSceneTrackImplementationPtr TrackTemplate; // 0x30(0x38)
		FName EvaluationGroup; // 0x68(0x4)
		bool bEvaluateInPreroll : 1; // 0x6C:0(0x1)
		bool bEvaluateInPostroll : 1; // 0x6C:1(0x1)
		bool bTearDownPriority : 1; // 0x6C:2(0x1)
		unsigned char UnknownData02_7[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneTrackImplementationPtr
	// Size: 0x38 (0x38 - 0x0)
	struct FMovieSceneTrackImplementationPtr	
	{
	public:
		unsigned char UnknownData00_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneRootEvaluationTemplateInstance
	// Size: 0x20 (0x20 - 0x0)
	struct FMovieSceneRootEvaluationTemplateInstance	
	{
	public:
		UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x0(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x8(0x18) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieScenePropertySectionData
	// Size: 0x18 (0x18 - 0x0)
	struct FMovieScenePropertySectionData	
	{
	public:
		FName PropertyName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString PropertyPath; // 0x8(0x10)
	};


	// Struct MovieScene.MovieScenePropertySectionTemplate
	// Inherited from FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x18 (0x38 - 0x20)
	struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate	
	{
	public:
		FMovieScenePropertySectionData PropertyData; // 0x20(0x18)
	};


	// Struct MovieScene.MovieSceneSubSequenceData
	// Size: 0x108 (0x108 - 0x0)
	struct FMovieSceneSubSequenceData	
	{
	public:
		FSoftObjectPath Sequence; // 0x0(0x18)
		FMovieSceneSequenceTransform OuterToInnerTransform; // 0x18(0x20)
		FMovieSceneSequenceTransform RootToSequenceTransform; // 0x38(0x20)
		FFrameRate TickResolution; // 0x58(0x8)
		FMovieSceneSequenceID DeterministicSequenceID; // 0x60(0x4)
		FMovieSceneFrameRange ParentPlayRange; // 0x64(0x10)
		FFrameNumber ParentStartFrameOffset; // 0x74(0x4)
		FFrameNumber ParentEndFrameOffset; // 0x78(0x4)
		FFrameNumber ParentFirstLoopStartFrameOffset; // 0x7C(0x4)
		bool bCanLoop; // 0x80(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x81(0x3) UNKNOWN PROPERTY
		FMovieSceneFrameRange PlayRange; // 0x84(0x10)
		FMovieSceneFrameRange FullPlayRange; // 0x94(0x10)
		FMovieSceneFrameRange UnwarpedPlayRange; // 0xA4(0x10)
		FMovieSceneFrameRange PreRollRange; // 0xB4(0x10)
		FMovieSceneFrameRange PostRollRange; // 0xC4(0x10)
		int16_t HierarchicalBias; // 0xD4(0x2)
		EMovieSceneSubSectionFlags AccumulatedFlags; // 0xD6(0x1)
		unsigned char UnknownData01_6[0x1]; // 0xD7(0x1) UNKNOWN PROPERTY
		FMovieSceneSequenceInstanceDataPtr InstanceData; // 0xD8(0x18)
		unsigned char UnknownData02_6[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FGuid SubSectionSignature; // 0xF8(0x10)
	};


	// Struct MovieScene.MovieSceneSequenceInstanceDataPtr
	// Size: 0x18 (0x18 - 0x0)
	struct FMovieSceneSequenceInstanceDataPtr	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneSequenceTransform
	// Size: 0x20 (0x20 - 0x0)
	struct FMovieSceneSequenceTransform	
	{
	public:
		FMovieSceneTimeTransform LinearTransform; // 0x0(0xC)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10(0x10)
	};


	// Struct MovieScene.MovieSceneNestedSequenceTransform
	// Size: 0x14 (0x14 - 0x0)
	struct FMovieSceneNestedSequenceTransform	
	{
	public:
		FMovieSceneTimeTransform LinearTransform; // 0x0(0xC)
		FMovieSceneTimeWarping Warping; // 0xC(0x8)
	};


	// Struct MovieScene.MovieSceneTimeWarping
	// Size: 0x8 (0x8 - 0x0)
	struct FMovieSceneTimeWarping	
	{
	public:
		FFrameNumber Start; // 0x0(0x4)
		FFrameNumber End; // 0x4(0x4)
	};


	// Struct MovieScene.MovieSceneSequenceHierarchyNode
	// Size: 0x18 (0x18 - 0x0)
	struct FMovieSceneSequenceHierarchyNode	
	{
	public:
		FMovieSceneSequenceID ParentID; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FMovieSceneSequenceID> Children; // 0x8(0x10)
	};


	// Struct MovieScene.MovieSceneSubSequenceTreeEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FMovieSceneSubSequenceTreeEntry	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneSubSequenceTree
	// Size: 0x60 (0x60 - 0x0)
	struct FMovieSceneSubSequenceTree	
	{
	public:
		unsigned char UnknownData00_2[0x60]; // 0x0(0x60) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneSequenceHierarchy
	// Size: 0x120 (0x120 - 0x0)
	struct FMovieSceneSequenceHierarchy	
	{
	public:
		FMovieSceneSequenceHierarchyNode RootNode; // 0x0(0x18)
		FMovieSceneSubSequenceTree Tree; // 0x18(0x60)
		TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x78(0x50)
		TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xC8(0x50)
		EMovieSceneServerClientMask AccumulatedNetworkMask; // 0x118(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x119(0x7) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneWarpCounter
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneWarpCounter	
	{
	public:
		TArray<uint32_t> WarpCounts; // 0x0(0x10)
	};


	// Struct MovieScene.MovieSceneTrackImplementation
	// Inherited from FMovieSceneEvalTemplateBase
	// Size: 0x0 (0x10 - 0x10)
	struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase	
	{
	public:
	};


	// Struct MovieScene.MovieSceneExpansionState
	// Size: 0x1 (0x1 - 0x0)
	struct FMovieSceneExpansionState	
	{
	public:
		bool bExpanded; // 0x0(0x1)
	};


	// Struct MovieScene.MovieSceneEditorData
	// Size: 0xF0 (0xF0 - 0x0)
	struct FMovieSceneEditorData	
	{
	public:
		TMap<FString, FMovieSceneExpansionState> ExpansionStates; // 0x0(0x50)
		TArray<FString> PinnedNodes; // 0x50(0x10)
		double ViewStart; // 0x60(0x8)
		double ViewEnd; // 0x68(0x8)
		double WorkStart; // 0x70(0x8)
		double WorkEnd; // 0x78(0x8)
		TSet<FFrameNumber> MarkedFrames; // 0x80(0x50)
		FFloatRange WorkingRange; // 0xD0(0x10)
		FFloatRange ViewRange; // 0xE0(0x10)
	};


	// Struct MovieScene.MovieSceneTrackLabels
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneTrackLabels	
	{
	public:
		TArray<FString> Strings; // 0x0(0x10)
	};


	// Struct MovieScene.MovieSceneObjectBindingIDs
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneObjectBindingIDs	
	{
	public:
		TArray<FMovieSceneObjectBindingID> Ids; // 0x0(0x10)
	};


	// Struct MovieScene.MovieSceneObjectBindingID
	// Size: 0x18 (0x18 - 0x0)
	struct FMovieSceneObjectBindingID	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		int32_t SequenceID; // 0x10(0x4)
		int32_t ResolveParentIndex; // 0x14(0x4)
	};


	// Struct MovieScene.MovieSceneSectionGroup
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneSectionGroup	
	{
	public:
		TArray<TWeakObjectPtr> Sections; // 0x0(0x10)
	};


	// Struct MovieScene.MovieSceneMarkedFrame
	// Size: 0x20 (0x20 - 0x0)
	struct FMovieSceneMarkedFrame	
	{
	public:
		FFrameNumber FrameNumber; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Label; // 0x8(0x10)
		bool bIsDeterminismFence; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneBinding
	// Size: 0x30 (0x30 - 0x0)
	struct FMovieSceneBinding	
	{
	public:
		FGuid ObjectGuid; // 0x0(0x10)
		FString BindingName; // 0x10(0x10)
		TArray<UMovieSceneTrack*> Tracks; // 0x20(0x10)
	};


	// Struct MovieScene.MovieSceneBindingOverrideData
	// Size: 0x40 (0x40 - 0x0)
	struct FMovieSceneBindingOverrideData	
	{
	public:
		FMovieSceneObjectBindingID ObjectBindingID; // 0x0(0x18)
		TWeakObjectPtr<UObject*> Object; // 0x18(0x20)
		bool bOverridesDefault; // 0x38(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneBindingProxy
	// Size: 0x18 (0x18 - 0x0)
	struct FMovieSceneBindingProxy	
	{
	public:
		FGuid BindingID; // 0x0(0x10)
		UMovieSceneSequence* Sequence; // 0x10(0x8)
	};


	// Struct MovieScene.MovieSceneBindingReference
	// Size: 0x30 (0x30 - 0x0)
	struct FMovieSceneBindingReference	
	{
	public:
		FGuid ID; // 0x0(0x10)
		FUniversalObjectLocator Locator; // 0x10(0x10)
		ELocatorResolveFlags ResolveFlags; // 0x20(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		UMovieSceneCustomBinding* CustomBinding; // 0x28(0x8)
	};


	// Struct MovieScene.MovieSceneBindingResolveParams
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieSceneBindingResolveParams	
	{
	public:
		UMovieSceneSequence* Sequence; // 0x0(0x8)
		FGuid ObjectBindingID; // 0x8(0x10)
		FMovieSceneSequenceID SequenceID; // 0x18(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UObject* Context; // 0x20(0x8)
	};


	// Struct MovieScene.MovieSceneBindingReferences
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneBindingReferences	
	{
	public:
		TArray<FMovieSceneBindingReference> SortedReferences; // 0x0(0x10)
	};


	// Struct MovieScene.MovieSceneDynamicBindingPayloadVariable
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieSceneDynamicBindingPayloadVariable	
	{
	public:
		FSoftObjectPath ObjectValue; // 0x0(0x18)
		FString Value; // 0x18(0x10)
	};


	// Struct MovieScene.MovieSceneDynamicBinding
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieSceneDynamicBinding	
	{
	public:
		UFunction* Function; // 0x0(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x8(0x20) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneDynamicBindingResolveParams
	// Size: 0x20 (0x20 - 0x0)
	struct FMovieSceneDynamicBindingResolveParams	
	{
	public:
		UMovieSceneSequence* Sequence; // 0x0(0x8)
		FGuid ObjectBindingID; // 0x8(0x10)
		UMovieSceneSequence* RootSequence; // 0x18(0x8)
	};


	// Struct MovieScene.MovieSceneDynamicBindingResolveResult
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneDynamicBindingResolveResult	
	{
	public:
		UObject* Object; // 0x0(0x8)
		bool bIsPossessedObject; // 0x8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneDynamicBindingContainer
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieSceneDynamicBindingContainer	
	{
	public:
		FMovieSceneDynamicBinding DynamicBinding; // 0x0(0x28)
	};


	// Struct MovieScene.MovieScenePossessable
	// Size: 0x80 (0x80 - 0x0)
	struct FMovieScenePossessable	
	{
	public:
		TArray<FName> Tags; // 0x0(0x10)
		FMovieSceneDynamicBinding DynamicBinding; // 0x10(0x28)
		FGuid Guid; // 0x38(0x10)
		FString Name; // 0x48(0x10)
		FGuid ParentGuid; // 0x58(0x10)
		FMovieSceneObjectBindingID SpawnableObjectBindingID; // 0x68(0x18)
	};


	// Struct MovieScene.MovieSceneSectionEvalOptions
	// Size: 0x2 (0x2 - 0x0)
	struct FMovieSceneSectionEvalOptions	
	{
	public:
		bool bCanEditCompletionMode; // 0x0(0x1)
		EMovieSceneCompletionMode CompletionMode; // 0x1(0x1)
	};


	// Struct MovieScene.MovieSceneEasingSettings
	// Size: 0x38 (0x38 - 0x0)
	struct FMovieSceneEasingSettings	
	{
	public:
		int32_t AutoEaseInDuration; // 0x0(0x4)
		int32_t AutoEaseOutDuration; // 0x4(0x4)
		TScriptInterface<Class> EaseIn; // 0x8(0x10)
		bool bManualEaseIn; // 0x18(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		int32_t ManualEaseInDuration; // 0x1C(0x4)
		TScriptInterface<Class> EaseOut; // 0x20(0x10)
		bool bManualEaseOut; // 0x30(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		int32_t ManualEaseOutDuration; // 0x34(0x4)
	};


	// Struct MovieScene.MovieSceneTimecodeSource
	// Size: 0x18 (0x18 - 0x0)
	struct FMovieSceneTimecodeSource	
	{
	public:
		Ftimecode timecode; // 0x0(0x14)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneSequenceInstanceData
	// Size: 0x8 (0x8 - 0x0)
	struct FMovieSceneSequenceInstanceData	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneSequenceReplProperties
	// Size: 0x14 (0x14 - 0x0)
	struct FMovieSceneSequenceReplProperties	
	{
	public:
		FFrameTime LastKnownPosition; // 0x0(0x8)
		TEnumAsByte<EMovieScenePlayerStatus> LastKnownStatus; // 0x8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t LastKnownNumLoops; // 0xC(0x4)
		int32_t LastKnownSerialNumber; // 0x10(0x4)
	};


	// Struct MovieScene.MovieSceneSequencePlaybackParams
	// Size: 0x40 (0x40 - 0x0)
	struct FMovieSceneSequencePlaybackParams	
	{
	public:
		FFrameTime Frame; // 0x0(0x8)
		float Time; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FString MarkedFrame; // 0x10(0x10)
		Ftimecode timecode; // 0x20(0x14)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		EMovieScenePositionType PositionType; // 0x38(0x1)
		EUpdatePositionMethod UpdateMethod; // 0x39(0x1)
		bool bHasJumped; // 0x3A(0x1)
		unsigned char UnknownData02_7[0x5]; // 0x3B(0x5) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneSequencePlayToParams
	// Size: 0x1 (0x1 - 0x0)
	struct FMovieSceneSequencePlayToParams	
	{
	public:
		bool bExclusive; // 0x0(0x1)
	};


	// Struct MovieScene.MovieSceneSpawnable
	// Size: 0xE0 (0xE0 - 0x0)
	struct FMovieSceneSpawnable	
	{
	public:
		FTransform SpawnTransform; // 0x0(0x60)
		TArray<FName> Tags; // 0x60(0x10)
		bool bContinuouslyRespawn; // 0x70(0x1)
		bool bNetAddressableName; // 0x71(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x72(0x6) UNKNOWN PROPERTY
		FMovieSceneDynamicBinding DynamicBinding; // 0x78(0x28)
		FGuid Guid; // 0xA0(0x10)
		FString Name; // 0xB0(0x10)
		UObject* ObjectTemplate; // 0xC0(0x8)
		TArray<FGuid> ChildPossessables; // 0xC8(0x10)
		ESpawnOwnership Ownership; // 0xD8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD9(0x3) UNKNOWN PROPERTY
		FName LevelName; // 0xDC(0x4)
	};


	// Struct MovieScene.MovieSceneTrackEvalOptions
	// Size: 0x4 (0x4 - 0x0)
	struct FMovieSceneTrackEvalOptions	
	{
	public:
		bool bCanEvaluateNearestSection : 1; // 0x0:0(0x1)
		bool bEvalNearestSection : 1; // 0x0:1(0x1)
		bool bEvaluateInPreroll : 1; // 0x0:2(0x1)
		bool bEvaluateInPostroll : 1; // 0x0:3(0x1)
		bool bEvaluateNearestSection : 1; // 0x0:4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneTrackDisplayOptions
	// Size: 0x4 (0x4 - 0x0)
	struct FMovieSceneTrackDisplayOptions	
	{
	public:
		bool bShowVerticalFrames : 1; // 0x0:0(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
	};


	// Struct MovieScene.MovieSceneTrackEvaluationFieldEntry
	// Size: 0x20 (0x20 - 0x0)
	struct FMovieSceneTrackEvaluationFieldEntry	
	{
	public:
		UMovieSceneSection* Section; // 0x0(0x8)
		FFrameNumberRange Range; // 0x8(0x10)
		FFrameNumber ForcedTime; // 0x18(0x4)
		ESectionEvaluationFlags Flags; // 0x1C(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x1D(0x1) UNKNOWN PROPERTY
		int16_t LegacySortOrder; // 0x1E(0x2)
	};


	// Struct MovieScene.MovieSceneTrackEvaluationField
	// Size: 0x10 (0x10 - 0x0)
	struct FMovieSceneTrackEvaluationField	
	{
	public:
		TArray<FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0(0x10)
	};


	// Struct MovieScene.TestMovieSceneEvalTemplate
	// Inherited from FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x0 (0x20 - 0x20)
	struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate	
	{
	public:
	};

}
