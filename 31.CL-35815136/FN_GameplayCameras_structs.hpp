#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayCameras
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GameplayCameras.CameraFramingZone
	// Size: 0x40 (0x40 - 0x0)
	struct FCameraFramingZone	
	{
	public:
		FDoubleCameraParameter LeftMargin; // 0x0(0x10)
		FDoubleCameraParameter TopMargin; // 0x10(0x10)
		FDoubleCameraParameter RightMargin; // 0x20(0x10)
		FDoubleCameraParameter BottomMargin; // 0x30(0x10)
	};


	// Struct GameplayCameras.DoubleCameraParameter
	// Size: 0x10 (0x10 - 0x0)
	struct FDoubleCameraParameter	
	{
	public:
		double Value; // 0x0(0x8)
		UDoubleCameraVariable* Variable; // 0x8(0x8)
	};


	// Struct GameplayCameras.CameraNodeEvaluatorAllocationInfo
	// Size: 0x4 (0x4 - 0x0)
	struct FCameraNodeEvaluatorAllocationInfo	
	{
	public:
		int16_t TotalSizeof; // 0x0(0x2)
		int16_t MaxAlignof; // 0x2(0x2)
	};


	// Struct GameplayCameras.BooleanCameraParameter
	// Size: 0x10 (0x10 - 0x0)
	struct FBooleanCameraParameter	
	{
	public:
		bool Value; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UBooleanCameraVariable* Variable; // 0x8(0x8)
	};


	// Struct GameplayCameras.Integer32CameraParameter
	// Size: 0x10 (0x10 - 0x0)
	struct FInteger32CameraParameter	
	{
	public:
		int32_t Value; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UInteger32CameraVariable* Variable; // 0x8(0x8)
	};


	// Struct GameplayCameras.FloatCameraParameter
	// Size: 0x10 (0x10 - 0x0)
	struct FFloatCameraParameter	
	{
	public:
		float Value; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UFloatCameraVariable* Variable; // 0x8(0x8)
	};


	// Struct GameplayCameras.Vector2fCameraParameter
	// Size: 0x10 (0x10 - 0x0)
	struct FVector2fCameraParameter	
	{
	public:
		FVector2f Value; // 0x0(0x8)
		UVector2fCameraVariable* Variable; // 0x8(0x8)
	};


	// Struct GameplayCameras.Vector2dCameraParameter
	// Size: 0x18 (0x18 - 0x0)
	struct FVector2dCameraParameter	
	{
	public:
		FVector2D Value; // 0x0(0x10)
		UVector2dCameraVariable* Variable; // 0x10(0x8)
	};


	// Struct GameplayCameras.Vector3fCameraParameter
	// Size: 0x18 (0x18 - 0x0)
	struct FVector3fCameraParameter	
	{
	public:
		FVector3f Value; // 0x0(0xC)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UVector3fCameraVariable* Variable; // 0x10(0x8)
	};


	// Struct GameplayCameras.Vector3dCameraParameter
	// Size: 0x20 (0x20 - 0x0)
	struct FVector3dCameraParameter	
	{
	public:
		FVector3d Value; // 0x0(0x18)
		UVector3dCameraVariable* Variable; // 0x18(0x8)
	};


	// Struct GameplayCameras.Vector4fCameraParameter
	// Size: 0x20 (0x20 - 0x0)
	struct FVector4fCameraParameter	
	{
	public:
		FVector4f Value; // 0x0(0x10)
		UVector4fCameraVariable* Variable; // 0x10(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayCameras.Vector4dCameraParameter
	// Size: 0x30 (0x30 - 0x0)
	struct FVector4dCameraParameter	
	{
	public:
		FVector4d Value; // 0x0(0x20)
		UVector4dCameraVariable* Variable; // 0x20(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayCameras.Rotator3fCameraParameter
	// Size: 0x18 (0x18 - 0x0)
	struct FRotator3fCameraParameter	
	{
	public:
		FRotator3f Value; // 0x0(0xC)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		URotator3fCameraVariable* Variable; // 0x10(0x8)
	};


	// Struct GameplayCameras.Rotator3dCameraParameter
	// Size: 0x20 (0x20 - 0x0)
	struct FRotator3dCameraParameter	
	{
	public:
		FRotator3d Value; // 0x0(0x18)
		URotator3dCameraVariable* Variable; // 0x18(0x8)
	};


	// Struct GameplayCameras.Transform3fCameraParameter
	// Size: 0x40 (0x40 - 0x0)
	struct FTransform3fCameraParameter	
	{
	public:
		FTransform3f Value; // 0x0(0x30)
		UTransform3fCameraVariable* Variable; // 0x30(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayCameras.Transform3dCameraParameter
	// Size: 0x70 (0x70 - 0x0)
	struct FTransform3dCameraParameter	
	{
	public:
		FTransform3d Value; // 0x0(0x60)
		UTransform3dCameraVariable* Variable; // 0x60(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayCameras.CameraRigProxyTableEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FCameraRigProxyTableEntry	
	{
	public:
		UCameraRigProxyAsset* CameraRigProxy; // 0x0(0x8)
		UCameraRigAsset* CameraRig; // 0x8(0x8)
	};


	// Struct GameplayCameras.CameraVariableID
	// Size: 0x4 (0x4 - 0x0)
	struct FCameraVariableID	
	{
	public:
		uint32_t Value; // 0x0(0x4)
	};


	// Struct GameplayCameras.CameraVariableDefinition
	// Size: 0xC (0xC - 0x0)
	struct FCameraVariableDefinition	
	{
	public:
		FCameraVariableID VariableID; // 0x0(0x4)
		ECameraVariableType VariableType; // 0x4(0x4)
		bool bIsPrivate; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct GameplayCameras.CameraVariableTableAllocationInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FCameraVariableTableAllocationInfo	
	{
	public:
		TArray<FCameraVariableDefinition> VariableDefinitions; // 0x0(0x10)
	};


	// Struct GameplayCameras.FOscillator
	// Size: 0xC (0xC - 0x0)
	struct FFOscillator	
	{
	public:
		float Amplitude; // 0x0(0x4)
		float Frequency; // 0x4(0x4)
		TEnumAsByte<EInitialOscillatorOffset> InitialOffset; // 0x8(0x1)
		EOscillatorWaveform Waveform; // 0x9(0x1)
		unsigned char UnknownData00_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};


	// Struct GameplayCameras.ROscillator
	// Size: 0x24 (0x24 - 0x0)
	struct FROscillator	
	{
	public:
		FFOscillator pitch; // 0x0(0xC)
		FFOscillator Yaw; // 0xC(0xC)
		FFOscillator Roll; // 0x18(0xC)
	};


	// Struct GameplayCameras.VOscillator
	// Size: 0x24 (0x24 - 0x0)
	struct FVOscillator	
	{
	public:
		FFOscillator X; // 0x0(0xC)
		FFOscillator Y; // 0xC(0xC)
		FFOscillator Z; // 0x18(0xC)
	};


	// Struct GameplayCameras.CameraAnimationParams
	// Size: 0x48 (0x48 - 0x0)
	struct FCameraAnimationParams	
	{
	public:
		float PlayRate; // 0x0(0x4)
		float Scale; // 0x4(0x4)
		ECameraAnimationEasingType EaseInType; // 0x8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float EaseInDuration; // 0xC(0x4)
		ECameraAnimationEasingType EaseOutType; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float EaseOutDuration; // 0x14(0x4)
		bool bLoop; // 0x18(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		int32_t StartOffset; // 0x1C(0x4)
		bool bRandomStartTime; // 0x20(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		float DurationOverride; // 0x24(0x4)
		ECameraAnimationPlaySpace Playspace; // 0x28(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FRotator UserPlaySpaceRot; // 0x30(0x18)
	};


	// Struct GameplayCameras.CameraAnimationHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FCameraAnimationHandle	
	{
	public:
		unsigned char UnknownData00_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct GameplayCameras.ActiveCameraAnimationInfo
	// Size: 0x78 (0x78 - 0x0)
	struct FActiveCameraAnimationInfo	
	{
	public:
		UCameraAnimationSequence* Sequence; // 0x0(0x8)
		FCameraAnimationParams Params; // 0x8(0x48)
		FCameraAnimationHandle Handle; // 0x50(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		UCameraAnimationSequencePlayer* Player; // 0x58(0x8)
		UCameraAnimationSequenceCameraStandIn* CameraStandIn; // 0x60(0x8)
		float EaseInCurrentTime; // 0x68(0x4)
		float EaseOutCurrentTime; // 0x6C(0x4)
		bool bIsEasingIn; // 0x70(0x1)
		bool bIsEasingOut; // 0x71(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x72(0x6) UNKNOWN PROPERTY
	};


	// Struct GameplayCameras.CameraPose
	// Size: 0x70 (0x70 - 0x0)
	struct FCameraPose	
	{
	public:
		FVector3d Location; // 0x0(0x18)
		FRotator3d Rotation; // 0x18(0x18)
		double TargetDistance; // 0x30(0x8)
		float FieldOfView; // 0x38(0x4)
		float FocalLength; // 0x3C(0x4)
		float Aperture; // 0x40(0x4)
		float FocusDistance; // 0x44(0x4)
		float SensorWidth; // 0x48(0x4)
		float SensorHeight; // 0x4C(0x4)
		float SqueezeFactor; // 0x50(0x4)
		float NearClippingPlane; // 0x54(0x4)
		float FarClippingPlane; // 0x58(0x4)
		bool ConstrainAspectRatio; // 0x5C(0x1)
		TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint; // 0x5D(0x1)
		unsigned char UnknownData00_7[0x12]; // 0x5E(0x12) UNKNOWN PROPERTY
	};


	// Struct GameplayCameras.CameraRigAllocationInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FCameraRigAllocationInfo	
	{
	public:
		FCameraNodeEvaluatorAllocationInfo EvaluatorInfo; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FCameraVariableTableAllocationInfo VariableTableInfo; // 0x8(0x10)
	};


	// Struct GameplayCameras.CameraRigInterface
	// Size: 0x20 (0x20 - 0x0)
	struct FCameraRigInterface	
	{
	public:
		FString DisplayName; // 0x0(0x10)
		TArray<UCameraRigInterfaceParameter*> InterfaceParameters; // 0x10(0x10)
	};


	// Struct GameplayCameras.BlueprintCameraDirectorEvaluationParams
	// Size: 0x10 (0x10 - 0x0)
	struct FBlueprintCameraDirectorEvaluationParams	
	{
	public:
		float DeltaTime; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UObject* EvaluationContextOwner; // 0x8(0x8)
	};


	// Struct GameplayCameras.BlueprintCameraDirectorEvaluationResult
	// Size: 0x10 (0x10 - 0x0)
	struct FBlueprintCameraDirectorEvaluationResult	
	{
	public:
		TArray<UCameraRigProxyAsset*> ActiveCameraRigs; // 0x0(0x10)
	};


	// Struct GameplayCameras.PerlinNoiseShaker
	// Size: 0x8 (0x8 - 0x0)
	struct FPerlinNoiseShaker	
	{
	public:
		float Amplitude; // 0x0(0x4)
		float Frequency; // 0x4(0x4)
	};


	// Struct GameplayCameras.WaveOscillator
	// Size: 0xC (0xC - 0x0)
	struct FWaveOscillator	
	{
	public:
		float Amplitude; // 0x0(0x4)
		float Frequency; // 0x4(0x4)
		EInitialWaveOscillatorOffsetType InitialOffsetType; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};

}
