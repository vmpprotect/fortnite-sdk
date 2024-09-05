#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MovieSceneTracks
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MovieSceneTracks.MovieScenePreAnimatedMaterialParameters
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieScenePreAnimatedMaterialParameters	
	{
	public:
		UMaterialInterface PreviousMaterial; // 0x0(0x8)
		TWeakObjectPtr SoftPreviousMaterial; // 0x8(0x20)
	};


	// Struct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieSceneCameraShakeSourceTrigger	
	{
	public:
		UClass ShakeClass; // 0x0(0x8)
		float PlayScale; // 0x8(0x4)
		ECameraShakePlaySpace Playspace; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FRotator UserDefinedPlaySpace; // 0x10(0x18)
	};


	// Struct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
	// Inherited from FMovieSceneChannel
	// Size: 0xA8 (0xF8 - 0x50)
	struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel	
	{
	public:
		TArray KeyTimes; // 0x50(0x10)
		TArray KeyValues; // 0x60(0x10)
		FMovieSceneKeyHandleMap KeyHandles; // 0x70(0x88)
	};


	// Struct MovieSceneTracks.MovieSceneDoublePerlinNoiseChannel
	// Inherited from FMovieSceneChannel
	// Size: 0x18 (0x68 - 0x50)
	struct FMovieSceneDoublePerlinNoiseChannel : public FMovieSceneChannel	
	{
	public:
		FPerlinNoiseParams PerlinNoiseParams; // 0x50(0x18)
	};


	// Struct MovieSceneTracks.PerlinNoiseParams
	// Size: 0x18 (0x18 - 0x0)
	struct FPerlinNoiseParams	
	{
	public:
		float Frequency; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		double Amplitude; // 0x8(0x8)
		float Offset; // 0x10(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneEventPayloadVariable
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieSceneEventPayloadVariable	
	{
	public:
		FSoftObjectPath ObjectValue; // 0x0(0x18)
		FString Value; // 0x18(0x10)
	};


	// Struct MovieSceneTracks.MovieSceneEventPtrs
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieSceneEventPtrs	
	{
	public:
		UFunction Function; // 0x0(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x8(0x20) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneEvent
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieSceneEvent	
	{
	public:
		FMovieSceneEventPtrs Ptrs; // 0x0(0x28)
	};


	// Struct MovieSceneTracks.MovieSceneEventChannel
	// Inherited from FMovieSceneChannel
	// Size: 0xA8 (0xF8 - 0x50)
	struct FMovieSceneEventChannel : public FMovieSceneChannel	
	{
	public:
		TArray KeyTimes; // 0x50(0x10)
		TArray KeyValues; // 0x60(0x10)
		FMovieSceneKeyHandleMap KeyHandles; // 0x70(0x88)
	};


	// Struct MovieSceneTracks.MovieSceneFloatPerlinNoiseChannel
	// Inherited from FMovieSceneChannel
	// Size: 0x18 (0x68 - 0x50)
	struct FMovieSceneFloatPerlinNoiseChannel : public FMovieSceneChannel	
	{
	public:
		FPerlinNoiseParams PerlinNoiseParams; // 0x50(0x18)
	};


	// Struct MovieSceneTracks.MovieSceneStringChannel
	// Inherited from FMovieSceneChannel
	// Size: 0xC0 (0x110 - 0x50)
	struct FMovieSceneStringChannel : public FMovieSceneChannel	
	{
	public:
		TArray Times; // 0x50(0x10)
		TArray Values; // 0x60(0x10)
		FString DefaultValue; // 0x70(0x10)
		bool bHasDefaultValue; // 0x80(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
		FMovieSceneKeyHandleMap KeyHandles; // 0x88(0x88)
	};


	// Struct MovieSceneTracks.MovieScene3DPathSectionTemplate
	// Inherited from FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x130 (0x150 - 0x20)
	struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate	
	{
	public:
		FMovieSceneObjectBindingID PathBindingID; // 0x20(0x18)
		FMovieSceneFloatChannel TimingCurve; // 0x38(0x110)
		MovieScene3DPathSection_Axis FrontAxisEnum; // 0x148(0x1)
		MovieScene3DPathSection_Axis UpAxisEnum; // 0x149(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x14A(0x2) UNKNOWN PROPERTY
		bool bFollow : 1; // 0x14C:0(0x1)
		bool bReverse : 1; // 0x14C:1(0x1)
		bool bForceUpright : 1; // 0x14C:2(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x14D(0x3) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
	// Inherited from FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x130 (0x150 - 0x20)
	struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate	
	{
	public:
		FMovieScenePropertySectionData PropertyData; // 0x20(0x18)
		FMovieSceneActorReferenceData ActorReferenceData; // 0x38(0x118)
	};


	// Struct MovieSceneTracks.MovieSceneActorReferenceData
	// Inherited from FMovieSceneChannel
	// Size: 0xC8 (0x118 - 0x50)
	struct FMovieSceneActorReferenceData : public FMovieSceneChannel	
	{
	public:
		TArray KeyTimes; // 0x50(0x10)
		FMovieSceneActorReferenceKey DefaultValue; // 0x60(0x20)
		TArray KeyValues; // 0x80(0x10)
		FMovieSceneKeyHandleMap KeyHandles; // 0x90(0x88)
	};


	// Struct MovieSceneTracks.MovieSceneActorReferenceKey
	// Size: 0x20 (0x20 - 0x0)
	struct FMovieSceneActorReferenceKey	
	{
	public:
		FMovieSceneObjectBindingID Object; // 0x0(0x18)
		FName ComponentName; // 0x18(0x4)
		FName SocketName; // 0x1C(0x4)
	};


	// Struct MovieSceneTracks.MovieSceneBaseCacheSectionTemplateParameters
	// Size: 0x8 (0x8 - 0x0)
	struct FMovieSceneBaseCacheSectionTemplateParameters	
	{
	public:
		FFrameNumber SectionStartTime; // 0x0(0x4)
		FFrameNumber SectionEndTime; // 0x4(0x4)
	};


	// Struct MovieSceneTracks.MovieSceneEventSectionTemplate
	// Inherited from FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x100 (0x120 - 0x20)
	struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate	
	{
	public:
		FMovieSceneEventSectionData EventData; // 0x20(0xF8)
		bool bFireEventsWhenForwards : 1; // 0x118:0(0x1)
		bool bFireEventsWhenBackwards : 1; // 0x118:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x119(0x7) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneEventSectionData
	// Inherited from FMovieSceneChannel
	// Size: 0xA8 (0xF8 - 0x50)
	struct FMovieSceneEventSectionData : public FMovieSceneChannel	
	{
	public:
		TArray Times; // 0x50(0x10)
		TArray KeyValues; // 0x60(0x10)
		FMovieSceneKeyHandleMap KeyHandles; // 0x70(0x88)
	};


	// Struct MovieSceneTracks.EventPayload
	// Size: 0x40 (0x40 - 0x0)
	struct FEventPayload	
	{
	public:
		FName EventName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FMovieSceneEventParameters Parameters; // 0x8(0x38)
	};


	// Struct MovieSceneTracks.MovieSceneEventParameters
	// Size: 0x38 (0x38 - 0x0)
	struct FMovieSceneEventParameters	
	{
	public:
		unsigned char UnknownData01_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneParameterSectionTemplate
	// Inherited from FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x60 (0x80 - 0x20)
	struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate	
	{
	public:
		TArray Scalars; // 0x20(0x10)
		TArray Bools; // 0x30(0x10)
		TArray Vector2Ds; // 0x40(0x10)
		TArray Vectors; // 0x50(0x10)
		TArray Colors; // 0x60(0x10)
		TArray Transforms; // 0x70(0x10)
	};


	// Struct MovieSceneTracks.TransformParameterNameAndCurves
	// Size: 0x998 (0x998 - 0x0)
	struct FTransformParameterNameAndCurves	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FMovieSceneFloatChannel Translation; // 0x8(0x330)
		FMovieSceneFloatChannel Rotation; // 0x338(0x330)
		FMovieSceneFloatChannel Scale; // 0x668(0x330)
	};


	// Struct MovieSceneTracks.ColorParameterNameAndCurves
	// Size: 0x448 (0x448 - 0x0)
	struct FColorParameterNameAndCurves	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FMovieSceneFloatChannel RedCurve; // 0x8(0x110)
		FMovieSceneFloatChannel GreenCurve; // 0x118(0x110)
		FMovieSceneFloatChannel BlueCurve; // 0x228(0x110)
		FMovieSceneFloatChannel AlphaCurve; // 0x338(0x110)
	};


	// Struct MovieSceneTracks.VectorParameterNameAndCurves
	// Size: 0x338 (0x338 - 0x0)
	struct FVectorParameterNameAndCurves	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FMovieSceneFloatChannel XCurve; // 0x8(0x110)
		FMovieSceneFloatChannel YCurve; // 0x118(0x110)
		FMovieSceneFloatChannel ZCurve; // 0x228(0x110)
	};


	// Struct MovieSceneTracks.Vector2DParameterNameAndCurves
	// Size: 0x228 (0x228 - 0x0)
	struct FVector2DParameterNameAndCurves	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FMovieSceneFloatChannel XCurve; // 0x8(0x110)
		FMovieSceneFloatChannel YCurve; // 0x118(0x110)
	};


	// Struct MovieSceneTracks.BoolParameterNameAndCurve
	// Size: 0x110 (0x110 - 0x0)
	struct FBoolParameterNameAndCurve	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FMovieSceneBoolChannel ParameterCurve; // 0x8(0x108)
	};


	// Struct MovieSceneTracks.ScalarParameterNameAndCurve
	// Size: 0x118 (0x118 - 0x0)
	struct FScalarParameterNameAndCurve	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FMovieSceneFloatChannel ParameterCurve; // 0x8(0x110)
	};


	// Struct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
	// Inherited from FMovieSceneParameterSectionTemplate -> FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x0 (0x80 - 0x80)
	struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate	
	{
	public:
	};


	// Struct MovieSceneTracks.MovieSceneParticleSectionTemplate
	// Inherited from FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x108 (0x128 - 0x20)
	struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate	
	{
	public:
		FMovieSceneParticleChannel ParticleKeys; // 0x20(0x108)
	};


	// Struct MovieSceneTracks.MovieSceneParticleChannel
	// Inherited from FMovieSceneByteChannel -> FMovieSceneChannel
	// Size: 0x0 (0x108 - 0x108)
	struct FMovieSceneParticleChannel : public FMovieSceneByteChannel	
	{
	public:
	};


	// Struct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
	// Inherited from FMovieScenePropertySectionTemplate -> FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x108 (0x140 - 0x38)
	struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate	
	{
	public:
		FMovieSceneBoolChannel BoolCurve; // 0x38(0x108)
	};


	// Struct MovieSceneTracks.LevelVisibilityComponentData
	// Size: 0x8 (0x8 - 0x0)
	struct FLevelVisibilityComponentData	
	{
	public:
		UMovieSceneLevelVisibilitySection Section; // 0x0(0x8)
	};


	// Struct MovieSceneTracks.MovieSceneDataLayerComponentData
	// Size: 0x8 (0x8 - 0x0)
	struct FMovieSceneDataLayerComponentData	
	{
	public:
		UMovieSceneDataLayerSection Section; // 0x0(0x8)
	};


	// Struct MovieSceneTracks.ConstraintComponentData
	// Size: 0x18 (0x18 - 0x0)
	struct FConstraintComponentData	
	{
	public:
		FGuid ConstraintID; // 0x0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneSkeletalAnimationComponentData
	// Size: 0x8 (0x8 - 0x0)
	struct FMovieSceneSkeletalAnimationComponentData	
	{
	public:
		UMovieSceneSkeletalAnimationSection Section; // 0x0(0x8)
	};


	// Struct MovieSceneTracks.MovieSceneAudioComponentData
	// Size: 0x8 (0x8 - 0x0)
	struct FMovieSceneAudioComponentData	
	{
	public:
		UMovieSceneAudioSection Section; // 0x0(0x8)
	};


	// Struct MovieSceneTracks.MovieSceneCameraShakeComponentData
	// Size: 0x40 (0x40 - 0x0)
	struct FMovieSceneCameraShakeComponentData	
	{
	public:
		FMovieSceneCameraShakeSectionData SectionData; // 0x0(0x28)
		FFrameNumber SectionStartTime; // 0x28(0x4)
		FFrameNumber SectionEndTime; // 0x2C(0x4)
		FGuid SectionSignature; // 0x30(0x10)
	};


	// Struct MovieSceneTracks.MovieSceneCameraShakeSectionData
	// Size: 0x28 (0x28 - 0x0)
	struct FMovieSceneCameraShakeSectionData	
	{
	public:
		UClass ShakeClass; // 0x0(0x8)
		float PlayScale; // 0x8(0x4)
		ECameraShakePlaySpace Playspace; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FRotator UserDefinedPlaySpace; // 0x10(0x18)
	};


	// Struct MovieSceneTracks.MovieSceneCameraShakeInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FMovieSceneCameraShakeInstanceData	
	{
	public:
		UCameraShakeBase ShakeInstance; // 0x0(0x8)
		FGuid SectionSignature; // 0x8(0x10)
		bool bManagedByPreviewer; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneAudioInputData
	// Size: 0x30 (0x30 - 0x0)
	struct FMovieSceneAudioInputData	
	{
	public:
		FName FloatInputs; // 0x0(0x24)
		FName StringInput; // 0x24(0x4)
		FName BoolInput; // 0x28(0x4)
		FName IntInput; // 0x2C(0x4)
	};


	// Struct MovieSceneTracks.MovieScene3DLocationKeyStruct
	// Inherited from FMovieSceneKeyStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct	
	{
	public:
		FVector Location; // 0x8(0x18)
		FFrameNumber Time; // 0x20(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x24(0x1C) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieScene3DRotationKeyStruct
	// Inherited from FMovieSceneKeyStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct	
	{
	public:
		FRotator Rotation; // 0x8(0x18)
		FFrameNumber Time; // 0x20(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x24(0x1C) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieScene3DScaleKeyStruct
	// Inherited from FMovieSceneKeyStruct
	// Size: 0x28 (0x30 - 0x8)
	struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct	
	{
	public:
		FVector3f Scale; // 0x8(0xC)
		FFrameNumber Time; // 0x14(0x4)
		unsigned char UnknownData01_7[0x18]; // 0x18(0x18) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieScene3DTransformKeyStruct
	// Inherited from FMovieSceneKeyStruct
	// Size: 0x58 (0x60 - 0x8)
	struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct	
	{
	public:
		FVector Location; // 0x8(0x18)
		FRotator Rotation; // 0x20(0x18)
		FVector3f Scale; // 0x38(0xC)
		FFrameNumber Time; // 0x44(0x4)
		unsigned char UnknownData01_7[0x18]; // 0x48(0x18) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneTransformMask
	// Size: 0x4 (0x4 - 0x0)
	struct FMovieSceneTransformMask	
	{
	public:
		uint32_t Mask; // 0x0(0x4)
	};


	// Struct MovieSceneTracks.MovieSceneBaseCacheParams
	// Size: 0x20 (0x20 - 0x0)
	struct FMovieSceneBaseCacheParams	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FFrameNumber FirstLoopStartFrameOffset; // 0x8(0x4)
		FFrameNumber StartFrameOffset; // 0xC(0x4)
		FFrameNumber EndFrameOffset; // 0x10(0x4)
		float PlayRate; // 0x14(0x4)
		bool bReverse : 1; // 0x18:0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneColorKeyStruct
	// Inherited from FMovieSceneKeyStruct
	// Size: 0x30 (0x38 - 0x8)
	struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct	
	{
	public:
		FLinearColor Color; // 0x8(0x10)
		FFrameNumber Time; // 0x18(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x1C(0x1C) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.ScalarMaterialParameterInfoAndCurve
	// Size: 0x120 (0x120 - 0x0)
	struct FScalarMaterialParameterInfoAndCurve	
	{
	public:
		FMaterialParameterInfo ParameterInfo; // 0x0(0xC)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FMovieSceneFloatChannel ParameterCurve; // 0x10(0x110)
	};


	// Struct MovieSceneTracks.ColorMaterialParameterInfoAndCurves
	// Size: 0x450 (0x450 - 0x0)
	struct FColorMaterialParameterInfoAndCurves	
	{
	public:
		FMaterialParameterInfo ParameterInfo; // 0x0(0xC)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FMovieSceneFloatChannel RedCurve; // 0x10(0x110)
		FMovieSceneFloatChannel GreenCurve; // 0x120(0x110)
		FMovieSceneFloatChannel BlueCurve; // 0x230(0x110)
		FMovieSceneFloatChannel AlphaCurve; // 0x340(0x110)
	};


	// Struct MovieSceneTracks.MovieSceneConsoleVariableCollection
	// Size: 0x18 (0x18 - 0x0)
	struct FMovieSceneConsoleVariableCollection	
	{
	public:
		TScriptInterface Interface; // 0x0(0x10)
		bool bOnlyIncludeChecked; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneCVarOverrides
	// Size: 0x50 (0x50 - 0x0)
	struct FMovieSceneCVarOverrides	
	{
	public:
		TMap ValuesByCVar; // 0x0(0x50)
	};


	// Struct MovieSceneTracks.MovieSceneSkeletalAnimationParams
	// Size: 0x148 (0x148 - 0x0)
	struct FMovieSceneSkeletalAnimationParams	
	{
	public:
		UAnimSequenceBase Animation; // 0x0(0x8)
		FFrameNumber FirstLoopStartFrameOffset; // 0x8(0x4)
		FFrameNumber StartFrameOffset; // 0xC(0x4)
		FFrameNumber EndFrameOffset; // 0x10(0x4)
		float PlayRate; // 0x14(0x4)
		bool bReverse : 1; // 0x18:0(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		FName SlotName; // 0x1C(0x4)
		UMirrorDataTable MirrorDataTable; // 0x20(0x8)
		FMovieSceneFloatChannel Weight; // 0x28(0x110)
		bool bSkipAnimNotifiers; // 0x138(0x1)
		bool bForceCustomMode; // 0x139(0x1)
		ESwapRootBone SwapRootBone; // 0x13A(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x13B(0x1) UNKNOWN PROPERTY
		float StartOffset; // 0x13C(0x4)
		float EndOffset; // 0x140(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x144(0x4) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneFloatVectorKeyStructBase
	// Inherited from FMovieSceneKeyStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FMovieSceneFloatVectorKeyStructBase : public FMovieSceneKeyStruct	
	{
	public:
		FFrameNumber Time; // 0x8(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0xC(0x1C) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneVector2fKeyStruct
	// Inherited from FMovieSceneFloatVectorKeyStructBase -> FMovieSceneKeyStruct
	// Size: 0x8 (0x30 - 0x28)
	struct FMovieSceneVector2fKeyStruct : public FMovieSceneFloatVectorKeyStructBase	
	{
	public:
		FVector2f Vector; // 0x28(0x8)
	};


	// Struct MovieSceneTracks.MovieSceneVector3fKeyStruct
	// Inherited from FMovieSceneFloatVectorKeyStructBase -> FMovieSceneKeyStruct
	// Size: 0x10 (0x38 - 0x28)
	struct FMovieSceneVector3fKeyStruct : public FMovieSceneFloatVectorKeyStructBase	
	{
	public:
		FVector3f Vector; // 0x28(0xC)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneVector4fKeyStruct
	// Inherited from FMovieSceneFloatVectorKeyStructBase -> FMovieSceneKeyStruct
	// Size: 0x18 (0x40 - 0x28)
	struct FMovieSceneVector4fKeyStruct : public FMovieSceneFloatVectorKeyStructBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FVector4f Vector; // 0x30(0x10)
	};


	// Struct MovieSceneTracks.MovieSceneDoubleVectorKeyStructBase
	// Inherited from FMovieSceneKeyStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FMovieSceneDoubleVectorKeyStructBase : public FMovieSceneKeyStruct	
	{
	public:
		FFrameNumber Time; // 0x8(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0xC(0x1C) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.MovieSceneVector2DKeyStruct
	// Inherited from FMovieSceneDoubleVectorKeyStructBase -> FMovieSceneKeyStruct
	// Size: 0x10 (0x38 - 0x28)
	struct FMovieSceneVector2DKeyStruct : public FMovieSceneDoubleVectorKeyStructBase	
	{
	public:
		FVector2D Vector; // 0x28(0x10)
	};


	// Struct MovieSceneTracks.MovieSceneVector3dKeyStruct
	// Inherited from FMovieSceneDoubleVectorKeyStructBase -> FMovieSceneKeyStruct
	// Size: 0x18 (0x40 - 0x28)
	struct FMovieSceneVector3dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase	
	{
	public:
		FVector3d Vector; // 0x28(0x18)
	};


	// Struct MovieSceneTracks.MovieSceneVector4dKeyStruct
	// Inherited from FMovieSceneDoubleVectorKeyStructBase -> FMovieSceneKeyStruct
	// Size: 0x28 (0x50 - 0x28)
	struct FMovieSceneVector4dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FVector4d Vector; // 0x30(0x20)
	};


	// Struct MovieSceneTracks.MovieSceneEventTriggerData
	// Size: 0x48 (0x48 - 0x0)
	struct FMovieSceneEventTriggerData	
	{
	public:
		FMovieSceneEventPtrs Ptrs; // 0x0(0x28)
		FGuid ObjectBindingID; // 0x28(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
	};


	// Struct MovieSceneTracks.ComponentMaterialInfo
	// Size: 0xC (0xC - 0x0)
	struct FComponentMaterialInfo	
	{
	public:
		FName MaterialSlotName; // 0x0(0x4)
		int32_t MaterialSlotIndex; // 0x4(0x4)
		EComponentMaterialType MaterialType; // 0x8(0x4)
	};


	// Struct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
	// Size: 0x80 (0x80 - 0x0)
	struct FMovieSceneSkeletalAnimRootMotionTrackParams	
	{
	public:
		unsigned char UnknownData01_2[0x80]; // 0x0(0x80) UNKNOWN PROPERTY
	};

}
