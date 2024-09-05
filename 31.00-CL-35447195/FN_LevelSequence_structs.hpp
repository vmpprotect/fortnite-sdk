#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LevelSequence
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct LevelSequence.LevelSequenceCameraSettings
	// Size: 0x2 (0x2 - 0x0)
	struct FLevelSequenceCameraSettings	
	{
	public:
		bool bOverrideAspectRatioAxisConstraint; // 0x0(0x1)
		TEnumAsByte AspectRatioAxisConstraint; // 0x1(0x1)
	};


	// Struct LevelSequence.LegacyLazyObjectPtrFragment
	// Size: 0x10 (0x10 - 0x0)
	struct FLegacyLazyObjectPtrFragment	
	{
	public:
		FGuid LazyObjectId; // 0x0(0x10)
	};


	// Struct LevelSequence.LevelSequenceLegacyObjectReference
	// Size: 0x20 (0x20 - 0x0)
	struct FLevelSequenceLegacyObjectReference	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct LevelSequence.LevelSequenceObjectReferenceMap
	// Size: 0x50 (0x50 - 0x0)
	struct FLevelSequenceObjectReferenceMap	
	{
	public:
		unsigned char UnknownData01_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct LevelSequence.BoundActorProxy
	// Size: 0x1 (0x1 - 0x0)
	struct FBoundActorProxy	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct LevelSequence.LevelSequenceAnimSequenceLinkItem
	// Size: 0x70 (0x70 - 0x0)
	struct FLevelSequenceAnimSequenceLinkItem	
	{
	public:
		FGuid SkelTrackGuid; // 0x0(0x10)
		FSoftObjectPath PathToAnimSequence; // 0x10(0x18)
		bool bExportTransforms; // 0x28(0x1)
		bool bExportMorphTargets; // 0x29(0x1)
		bool bExportAttributeCurves; // 0x2A(0x1)
		bool bExportMaterialCurves; // 0x2B(0x1)
		EAnimInterpolationType Interpolation; // 0x2C(0x1)
		TEnumAsByte CurveInterpolation; // 0x2D(0x1)
		bool bRecordInWorldSpace; // 0x2E(0x1)
		bool bEvaluateAllSkeletalMeshComponents; // 0x2F(0x1)
		TArray IncludeAnimationNames; // 0x30(0x10)
		TArray ExcludeAnimationNames; // 0x40(0x10)
		FFrameNumber WarmUpFrames; // 0x50(0x4)
		FFrameNumber DelayBeforeStart; // 0x54(0x4)
		bool bUseCustomTimeRange; // 0x58(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		FFrameNumber CustomStartFrame; // 0x5C(0x4)
		FFrameNumber CustomEndFrame; // 0x60(0x4)
		FFrameRate CustomDisplayRate; // 0x64(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct LevelSequence.LevelSequenceBindingReference
	// Size: 0x38 (0x38 - 0x0)
	struct FLevelSequenceBindingReference	
	{
	public:
		FString PackageName; // 0x0(0x10)
		FSoftObjectPath ExternalObjectPath; // 0x10(0x18)
		FString ObjectPath; // 0x28(0x10)
	};


	// Struct LevelSequence.LevelSequenceBindingReferenceArray
	// Size: 0x10 (0x10 - 0x0)
	struct FLevelSequenceBindingReferenceArray	
	{
	public:
		TArray References; // 0x0(0x10)
	};


	// Struct LevelSequence.UpgradedLevelSequenceBindingReferences
	// Inherited from FMovieSceneBindingReferences
	// Size: 0x0 (0x10 - 0x10)
	struct FUpgradedLevelSequenceBindingReferences : public FMovieSceneBindingReferences	
	{
	public:
	};


	// Struct LevelSequence.LevelSequenceBindingReferences
	// Size: 0xF0 (0xF0 - 0x0)
	struct FLevelSequenceBindingReferences	
	{
	public:
		TMap BindingIdToReferences; // 0x0(0x50)
		TSet AnimSequenceInstances; // 0x50(0x50)
		TSet PostProcessInstances; // 0xA0(0x50)
	};


	// Struct LevelSequence.LevelSequenceObject
	// Size: 0x30 (0x30 - 0x0)
	struct FLevelSequenceObject	
	{
	public:
		TLazyObjectPtr ObjectOrOwner; // 0x0(0x18)
		FString ComponentName; // 0x18(0x10)
		TWeakObjectPtr CachedComponent; // 0x28(0x8)
	};


	// Struct LevelSequence.LevelSequencePlayerSnapshot
	// Size: 0xA0 (0xA0 - 0x0)
	struct FLevelSequencePlayerSnapshot	
	{
	public:
		FString RootName; // 0x0(0x10)
		FQualifiedFrameTime RootTime; // 0x10(0x10)
		FQualifiedFrameTime SourceTime; // 0x20(0x10)
		FString CurrentShotName; // 0x30(0x10)
		FQualifiedFrameTime CurrentShotLocalTime; // 0x40(0x10)
		FQualifiedFrameTime CurrentShotSourceTime; // 0x50(0x10)
		FString SourceTimecode; // 0x60(0x10)
		TWeakObjectPtr CameraComponent; // 0x70(0x20)
		ULevelSequence ActiveShot; // 0x90(0x8)
		FMovieSceneSequenceID ShotID; // 0x98(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
	};

}
