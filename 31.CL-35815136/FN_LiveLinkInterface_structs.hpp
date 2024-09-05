#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LiveLinkInterface
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct LiveLinkInterface.LiveLinkSourceHandle
	// Size: 0x18 (0x18 - 0x0)
	struct FLiveLinkSourceHandle	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct LiveLinkInterface.LiveLinkBaseStaticData
	// Size: 0x10 (0x10 - 0x0)
	struct FLiveLinkBaseStaticData	
	{
	public:
		TArray<FName> PropertyNames; // 0x0(0x10)
	};


	// Struct LiveLinkInterface.LiveLinkSkeletonStaticData
	// Inherited from FLiveLinkBaseStaticData
	// Size: 0x20 (0x30 - 0x10)
	struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData	
	{
	public:
		TArray<FName> BoneNames; // 0x10(0x10)
		TArray<int32_t> BoneParents; // 0x20(0x10)
	};


	// Struct LiveLinkInterface.LiveLinkBaseFrameData
	// Size: 0xA0 (0xA0 - 0x0)
	struct FLiveLinkBaseFrameData	
	{
	public:
		FLiveLinkWorldTime WorldTime; // 0x0(0x10)
		FLiveLinkMetaData MetaData; // 0x10(0x60)
		TArray<float> PropertyValues; // 0x70(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x80(0x20) UNKNOWN PROPERTY
	};


	// Struct LiveLinkInterface.LiveLinkMetaData
	// Size: 0x60 (0x60 - 0x0)
	struct FLiveLinkMetaData	
	{
	public:
		TMap<FName, FString> StringMetadata; // 0x0(0x50)
		FQualifiedFrameTime SceneTime; // 0x50(0x10)
	};


	// Struct LiveLinkInterface.LiveLinkWorldTime
	// Size: 0x10 (0x10 - 0x0)
	struct FLiveLinkWorldTime	
	{
	public:
		double Time; // 0x0(0x8)
		double Offset; // 0x8(0x8)
	};


	// Struct LiveLinkInterface.LiveLinkAnimationFrameData
	// Inherited from FLiveLinkBaseFrameData
	// Size: 0x10 (0xB0 - 0xA0)
	struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData	
	{
	public:
		TArray<FTransform> Transforms; // 0xA0(0x10)
	};


	// Struct LiveLinkInterface.LiveLinkBaseBlueprintData
	// Size: 0x8 (0x8 - 0x0)
	struct FLiveLinkBaseBlueprintData	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct LiveLinkInterface.LiveLinkBasicBlueprintData
	// Inherited from FLiveLinkBaseBlueprintData
	// Size: 0xB0 (0xB8 - 0x8)
	struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData	
	{
	public:
		FLiveLinkBaseStaticData StaticData; // 0x8(0x10)
		FLiveLinkBaseFrameData FrameData; // 0x18(0xA0)
	};


	// Struct LiveLinkInterface.LiveLinkTransformStaticData
	// Inherited from FLiveLinkBaseStaticData
	// Size: 0x8 (0x18 - 0x10)
	struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData	
	{
	public:
		bool bIsLocationSupported; // 0x10(0x1)
		bool bIsRotationSupported; // 0x11(0x1)
		bool bIsScaleSupported; // 0x12(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
	};


	// Struct LiveLinkInterface.LiveLinkCameraStaticData
	// Inherited from FLiveLinkTransformStaticData -> FLiveLinkBaseStaticData
	// Size: 0x10 (0x28 - 0x18)
	struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData	
	{
	public:
		bool bIsFieldOfViewSupported; // 0x18(0x1)
		bool bIsAspectRatioSupported; // 0x19(0x1)
		bool bIsFocalLengthSupported; // 0x1A(0x1)
		bool bIsProjectionModeSupported; // 0x1B(0x1)
		float FilmBackWidth; // 0x1C(0x4)
		float FilmBackHeight; // 0x20(0x4)
		bool bIsApertureSupported; // 0x24(0x1)
		bool bIsFocusDistanceSupported; // 0x25(0x1)
		bool bIsDepthOfFieldSupported; // 0x26(0x1)
		unsigned char UnknownData00_7[0x1]; // 0x27(0x1) UNKNOWN PROPERTY
	};


	// Struct LiveLinkInterface.LiveLinkTransformFrameData
	// Inherited from FLiveLinkBaseFrameData
	// Size: 0x60 (0x100 - 0xA0)
	struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData	
	{
	public:
		FTransform Transform; // 0xA0(0x60)
	};


	// Struct LiveLinkInterface.LiveLinkCameraFrameData
	// Inherited from FLiveLinkTransformFrameData -> FLiveLinkBaseFrameData
	// Size: 0x20 (0x120 - 0x100)
	struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData	
	{
	public:
		float FieldOfView; // 0x100(0x4)
		float AspectRatio; // 0x104(0x4)
		float FocalLength; // 0x108(0x4)
		float Aperture; // 0x10C(0x4)
		float FocusDistance; // 0x110(0x4)
		ELiveLinkCameraProjectionMode ProjectionMode; // 0x114(0x1)
		unsigned char UnknownData00_7[0xB]; // 0x115(0xB) UNKNOWN PROPERTY
	};


	// Struct LiveLinkInterface.LiveLinkCameraBlueprintData
	// Inherited from FLiveLinkBaseBlueprintData
	// Size: 0x148 (0x150 - 0x8)
	struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData	
	{
	public:
		FLiveLinkCameraStaticData StaticData; // 0x8(0x28)
		FLiveLinkCameraFrameData FrameData; // 0x30(0x120)
	};


	// Struct LiveLinkInterface.LiveLinkGamepadInputDeviceStaticData
	// Inherited from FLiveLinkBaseStaticData
	// Size: 0x0 (0x10 - 0x10)
	struct FLiveLinkGamepadInputDeviceStaticData : public FLiveLinkBaseStaticData	
	{
	public:
	};


	// Struct LiveLinkInterface.LiveLinkGamepadInputDeviceFrameData
	// Inherited from FLiveLinkBaseFrameData
	// Size: 0x80 (0x120 - 0xA0)
	struct FLiveLinkGamepadInputDeviceFrameData : public FLiveLinkBaseFrameData	
	{
	public:
		float LeftAnalogX; // 0xA0(0x4)
		float LeftAnalogY; // 0xA4(0x4)
		float RightAnalogX; // 0xA8(0x4)
		float RightAnalogY; // 0xAC(0x4)
		float LeftTriggerAnalog; // 0xB0(0x4)
		float RightTriggerAnalog; // 0xB4(0x4)
		float LeftThumb; // 0xB8(0x4)
		float RightThumb; // 0xBC(0x4)
		float SpecialLeft; // 0xC0(0x4)
		float SpecialLeft_X; // 0xC4(0x4)
		float SpecialLeft_Y; // 0xC8(0x4)
		float SpecialRight; // 0xCC(0x4)
		float FaceButtonBottom; // 0xD0(0x4)
		float FaceButtonRight; // 0xD4(0x4)
		float FaceButtonLeft; // 0xD8(0x4)
		float FaceButtonTop; // 0xDC(0x4)
		float LeftShoulder; // 0xE0(0x4)
		float RightShoulder; // 0xE4(0x4)
		float LeftTriggerThreshold; // 0xE8(0x4)
		float RightTriggerThreshold; // 0xEC(0x4)
		float DPadUp; // 0xF0(0x4)
		float DPadDown; // 0xF4(0x4)
		float DPadRight; // 0xF8(0x4)
		float DPadLeft; // 0xFC(0x4)
		float LeftStickUp; // 0x100(0x4)
		float LeftStickDown; // 0x104(0x4)
		float LeftStickRight; // 0x108(0x4)
		float LeftStickLeft; // 0x10C(0x4)
		float RightStickUp; // 0x110(0x4)
		float RightStickDown; // 0x114(0x4)
		float RightStickRight; // 0x118(0x4)
		float RightStickLeft; // 0x11C(0x4)
	};


	// Struct LiveLinkInterface.LiveLinkGamepadInputDeviceBlueprintData
	// Inherited from FLiveLinkBaseBlueprintData
	// Size: 0x130 (0x138 - 0x8)
	struct FLiveLinkGamepadInputDeviceBlueprintData : public FLiveLinkBaseBlueprintData	
	{
	public:
		FLiveLinkGamepadInputDeviceStaticData StaticData; // 0x8(0x10)
		FLiveLinkGamepadInputDeviceFrameData FrameData; // 0x18(0x120)
	};


	// Struct LiveLinkInterface.LiveLinkLightStaticData
	// Inherited from FLiveLinkTransformStaticData -> FLiveLinkBaseStaticData
	// Size: 0x10 (0x28 - 0x18)
	struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData	
	{
	public:
		bool bIsTemperatureSupported; // 0x18(0x1)
		bool bIsIntensitySupported; // 0x19(0x1)
		bool bIsLightColorSupported; // 0x1A(0x1)
		bool bIsInnerConeAngleSupported; // 0x1B(0x1)
		bool bIsOuterConeAngleSupported; // 0x1C(0x1)
		bool bIsAttenuationRadiusSupported; // 0x1D(0x1)
		bool bIsSourceLenghtSupported; // 0x1E(0x1)
		bool bIsSourceRadiusSupported; // 0x1F(0x1)
		bool bIsSoftSourceRadiusSupported; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct LiveLinkInterface.LiveLinkLightFrameData
	// Inherited from FLiveLinkTransformFrameData -> FLiveLinkBaseFrameData
	// Size: 0x30 (0x130 - 0x100)
	struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData	
	{
	public:
		float Temperature; // 0x100(0x4)
		float Intensity; // 0x104(0x4)
		FColor LightColor; // 0x108(0x4)
		float InnerConeAngle; // 0x10C(0x4)
		float OuterConeAngle; // 0x110(0x4)
		float AttenuationRadius; // 0x114(0x4)
		float SourceRadius; // 0x118(0x4)
		float SoftSourceRadius; // 0x11C(0x4)
		float SourceLength; // 0x120(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x124(0xC) UNKNOWN PROPERTY
	};


	// Struct LiveLinkInterface.LiveLinkLightBlueprintData
	// Inherited from FLiveLinkBaseBlueprintData
	// Size: 0x158 (0x160 - 0x8)
	struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData	
	{
	public:
		FLiveLinkLightStaticData StaticData; // 0x8(0x28)
		FLiveLinkLightFrameData FrameData; // 0x30(0x130)
	};


	// Struct LiveLinkInterface.LiveLinkSourcePreset
	// Size: 0x28 (0x28 - 0x0)
	struct FLiveLinkSourcePreset	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		ULiveLinkSourceSettings* Settings; // 0x10(0x8)
		FText SourceType; // 0x18(0x10)
	};


	// Struct LiveLinkInterface.LiveLinkSubjectPreset
	// Size: 0x38 (0x38 - 0x0)
	struct FLiveLinkSubjectPreset	
	{
	public:
		FLiveLinkSubjectKey Key; // 0x0(0x14)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UClass* Role; // 0x18(0x8)
		ULiveLinkSubjectSettings* Settings; // 0x20(0x8)
		ULiveLinkVirtualSubject* VirtualSubject; // 0x28(0x8)
		bool bEnabled; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct LiveLinkInterface.LiveLinkSubjectKey
	// Size: 0x14 (0x14 - 0x0)
	struct FLiveLinkSubjectKey	
	{
	public:
		FGuid Source; // 0x0(0x10)
		FLiveLinkSubjectName SubjectName; // 0x10(0x4)
	};


	// Struct LiveLinkInterface.LiveLinkSubjectName
	// Size: 0x4 (0x4 - 0x0)
	struct FLiveLinkSubjectName	
	{
	public:
		FName Name; // 0x0(0x4)
	};


	// Struct LiveLinkInterface.LiveLinkRefSkeleton
	// Size: 0x20 (0x20 - 0x0)
	struct FLiveLinkRefSkeleton	
	{
	public:
		TArray<FName> BoneNames; // 0x0(0x10)
		TArray<int32_t> BoneParents; // 0x10(0x10)
	};


	// Struct LiveLinkInterface.LiveLinkSubjectRepresentation
	// Size: 0x10 (0x10 - 0x0)
	struct FLiveLinkSubjectRepresentation	
	{
	public:
		FLiveLinkSubjectName Subject; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UClass* Role; // 0x8(0x8)
	};


	// Struct LiveLinkInterface.LiveLinkTransformBlueprintData
	// Inherited from FLiveLinkBaseBlueprintData
	// Size: 0x118 (0x120 - 0x8)
	struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData	
	{
	public:
		FLiveLinkTransformStaticData StaticData; // 0x8(0x18)
		FLiveLinkTransformFrameData FrameData; // 0x20(0x100)
	};


	// Struct LiveLinkInterface.LiveLinkCurveConversionSettings
	// Size: 0x50 (0x50 - 0x0)
	struct FLiveLinkCurveConversionSettings	
	{
	public:
		TMap<FString, FSoftObjectPath> CurveConversionAssetMap; // 0x0(0x50)
	};


	// Struct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
	// Size: 0x60 (0x60 - 0x0)
	struct FLiveLinkSourceBufferManagementSettings	
	{
	public:
		bool bValidEngineTimeEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float ValidEngineTime; // 0x4(0x4)
		float EngineTimeOffset; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		double EngineTimeClockOffset; // 0x10(0x8)
		double SmoothEngineTimeOffset; // 0x18(0x8)
		bool bGenerateSubFrame; // 0x20(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		FFrameRate DetectedFrameRate; // 0x24(0x8)
		bool bUseTimecodeSmoothLatest; // 0x2C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		FFrameRate SourceTimecodeFrameRate; // 0x30(0x8)
		bool bValidTimecodeFrameEnabled; // 0x38(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		int32_t ValidTimecodeFrame; // 0x3C(0x4)
		float TimecodeFrameOffset; // 0x40(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		double TimecodeClockOffset; // 0x48(0x8)
		int32_t LatestOffset; // 0x50(0x4)
		int32_t MaxNumberOfFrameToBuffered; // 0x54(0x4)
		bool bKeepAtLeastOneFrame; // 0x58(0x1)
		unsigned char UnknownData06_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
	};


	// Struct LiveLinkInterface.LiveLinkSourceDebugInfo
	// Size: 0xC (0xC - 0x0)
	struct FLiveLinkSourceDebugInfo	
	{
	public:
		FLiveLinkSubjectName SubjectName; // 0x0(0x4)
		int32_t SnapshotIndex; // 0x4(0x4)
		int32_t NumberOfBufferAtSnapshot; // 0x8(0x4)
	};


	// Struct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
	// Size: 0xC (0xC - 0x0)
	struct FLiveLinkTimeSynchronizationSettings	
	{
	public:
		FFrameRate FrameRate; // 0x0(0x8)
		FFrameNumber FrameOffset; // 0x8(0x4)
	};


	// Struct LiveLinkInterface.LiveLinkInterpolationSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FLiveLinkInterpolationSettings	
	{
	public:
		bool bUseInterpolation; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float InterpolationOffset; // 0x4(0x4)
	};


	// Struct LiveLinkInterface.LiveLinkTime
	// Size: 0x18 (0x18 - 0x0)
	struct FLiveLinkTime	
	{
	public:
		double WorldTime; // 0x0(0x8)
		FQualifiedFrameTime SceneTime; // 0x8(0x10)
	};


	// Struct LiveLinkInterface.LiveLinkFrameRate
	// Inherited from FFrameRate
	// Size: 0x0 (0x8 - 0x8)
	struct FLiveLinkFrameRate : public FFrameRate	
	{
	public:
	};


	// Struct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
	// Size: 0x10 (0x10 - 0x0)
	struct FLiveLinkTimeCode_Base_DEPRECATED	
	{
	public:
		int32_t Seconds; // 0x0(0x4)
		int32_t Frames; // 0x4(0x4)
		FLiveLinkFrameRate FrameRate; // 0x8(0x8)
	};


	// Struct LiveLinkInterface.LiveLinkTimeCode
	// Inherited from FLiveLinkTimeCode_Base_DEPRECATED
	// Size: 0x0 (0x10 - 0x10)
	struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED	
	{
	public:
	};


	// Struct LiveLinkInterface.LiveLinkCurveElement
	// Size: 0x8 (0x8 - 0x0)
	struct FLiveLinkCurveElement	
	{
	public:
		FName CurveName; // 0x0(0x4)
		float CurveValue; // 0x4(0x4)
	};


	// Struct LiveLinkInterface.LiveLinkFrameData
	// Size: 0x90 (0x90 - 0x0)
	struct FLiveLinkFrameData	
	{
	public:
		TArray<FTransform> Transforms; // 0x0(0x10)
		TArray<FLiveLinkCurveElement> CurveElements; // 0x10(0x10)
		FLiveLinkWorldTime WorldTime; // 0x20(0x10)
		FLiveLinkMetaData MetaData; // 0x30(0x60)
	};


	// Struct LiveLinkInterface.SubjectMetadata
	// Size: 0x70 (0x70 - 0x0)
	struct FSubjectMetadata	
	{
	public:
		TMap<FName, FString> StringMetadata; // 0x0(0x50)
		Ftimecode SceneTimecode; // 0x50(0x14)
		unsigned char UnknownData00_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		FFrameRate SceneFramerate; // 0x68(0x8)
	};


	// Struct LiveLinkInterface.CachedSubjectFrame
	// Size: 0x160 (0x160 - 0x0)
	struct FCachedSubjectFrame	
	{
	public:
		unsigned char UnknownData00_2[0x160]; // 0x0(0x160) UNKNOWN PROPERTY
	};


	// Struct LiveLinkInterface.LiveLinkTransform
	// Size: 0x20 (0x20 - 0x0)
	struct FLiveLinkTransform	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct LiveLinkInterface.SubjectFrameHandle
	// Inherited from FLiveLinkBaseBlueprintData
	// Size: 0x10 (0x18 - 0x8)
	struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};

}
