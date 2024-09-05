#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CoreUObject
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct CoreUObject.ARFilter
	// Size: 0x150 (0x150 - 0x0)
	struct FARFilter	
	{
	public:
		TArray PackageNames; // 0x0(0x10)
		TArray PackagePaths; // 0x10(0x10)
		TArray SoftObjectPaths; // 0x20(0x10)
		TArray ClassNames; // 0x30(0x10)
		TArray ClassPaths; // 0x40(0x10)
		unsigned char UnknownData02_6[0x50]; // 0x50(0x50) UNKNOWN PROPERTY
		TSet RecursiveClassesExclusionSet; // 0xA0(0x50)
		TSet RecursiveClassPathsExclusionSet; // 0xF0(0x50)
		bool bRecursivePaths; // 0x140(0x1)
		bool bRecursiveClasses; // 0x141(0x1)
		bool bIncludeOnlyOnDiskAssets; // 0x142(0x1)
		unsigned char UnknownData03_7[0xD]; // 0x143(0xD) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.TopLevelAssetPath
	// Size: 0x8 (0x8 - 0x0)
	struct FTopLevelAssetPath	
	{
	public:
		FName PackageName; // 0x0(0x4)
		FName AssetName; // 0x4(0x4)
	};


	// Struct CoreUObject.SoftObjectPath
	// Size: 0x18 (0x18 - 0x0)
	struct FSoftObjectPath	
	{
	public:
		FTopLevelAssetPath AssetPath; // 0x0(0x8)
		FString SubPathString; // 0x8(0x10)
	};


	// Struct CoreUObject.AssetBundleData
	// Size: 0x10 (0x10 - 0x0)
	struct FAssetBundleData	
	{
	public:
		TArray Bundles; // 0x0(0x10)
	};


	// Struct CoreUObject.AssetBundleEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FAssetBundleEntry	
	{
	public:
		FName BundleName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray AssetPaths; // 0x8(0x10)
	};


	// Struct CoreUObject.AssetData
	// Size: 0x38 (0x38 - 0x0)
	struct FAssetData	
	{
	public:
		FName PackageName; // 0x0(0x4)
		FName PackagePath; // 0x4(0x4)
		FName AssetName; // 0x8(0x4)
		FName AssetClass; // 0xC(0x4)
		FTopLevelAssetPath AssetClassPath; // 0x10(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x18(0x20) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.AutomationEvent
	// Size: 0x38 (0x38 - 0x0)
	struct FAutomationEvent	
	{
	public:
		EAutomationEventType Type; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString Message; // 0x8(0x10)
		FString Context; // 0x18(0x10)
		FGuid Artifact; // 0x28(0x10)
	};


	// Struct CoreUObject.Guid
	// Size: 0x10 (0x10 - 0x0)
	struct FGuid	
	{
	public:
		int32_t A; // 0x0(0x4)
		int32_t B; // 0x4(0x4)
		int32_t C; // 0x8(0x4)
		int32_t D; // 0xC(0x4)
	};


	// Struct CoreUObject.AutomationExecutionEntry
	// Size: 0x58 (0x58 - 0x0)
	struct FAutomationExecutionEntry	
	{
	public:
		FAutomationEvent Event; // 0x0(0x38)
		FString Filename; // 0x38(0x10)
		int32_t LineNumber; // 0x48(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FDateTime Timestamp; // 0x50(0x8)
	};


	// Struct CoreUObject.DateTime
	// Size: 0x8 (0x8 - 0x0)
	struct FDateTime	
	{
	public:
		int64_t Ticks; // 0x0(0x8)
	};


	// Struct CoreUObject.Box
	// Size: 0x38 (0x38 - 0x0)
	struct FBox	
	{
	public:
		FVector Min; // 0x0(0x18)
		FVector Max; // 0x18(0x18)
		bool IsValid; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.Vector
	// Size: 0x18 (0x18 - 0x0)
	struct FVector	
	{
	public:
		double X; // 0x0(0x8)
		double Y; // 0x8(0x8)
		double Z; // 0x10(0x8)
	};


	// Struct CoreUObject.Box2D
	// Size: 0x28 (0x28 - 0x0)
	struct FBox2D	
	{
	public:
		FVector2D Min; // 0x0(0x10)
		FVector2D Max; // 0x10(0x10)
		bool bIsValid; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.Vector2D
	// Size: 0x10 (0x10 - 0x0)
	struct FVector2D	
	{
	public:
		double X; // 0x0(0x8)
		double Y; // 0x8(0x8)
	};


	// Struct CoreUObject.Box2f
	// Size: 0x14 (0x14 - 0x0)
	struct FBox2f	
	{
	public:
		FVector2f Min; // 0x0(0x8)
		FVector2f Max; // 0x8(0x8)
		bool bIsValid; // 0x10(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.Vector2f
	// Size: 0x8 (0x8 - 0x0)
	struct FVector2f	
	{
	public:
		float X; // 0x0(0x4)
		float Y; // 0x4(0x4)
	};


	// Struct CoreUObject.Box3d
	// Size: 0x38 (0x38 - 0x0)
	struct FBox3d	
	{
	public:
		FVector3d Min; // 0x0(0x18)
		FVector3d Max; // 0x18(0x18)
		bool IsValid; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.Vector3d
	// Size: 0x18 (0x18 - 0x0)
	struct FVector3d	
	{
	public:
		double X; // 0x0(0x8)
		double Y; // 0x8(0x8)
		double Z; // 0x10(0x8)
	};


	// Struct CoreUObject.Box3f
	// Size: 0x1C (0x1C - 0x0)
	struct FBox3f	
	{
	public:
		FVector3f Min; // 0x0(0xC)
		FVector3f Max; // 0xC(0xC)
		bool IsValid; // 0x18(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.Vector3f
	// Size: 0xC (0xC - 0x0)
	struct FVector3f	
	{
	public:
		float X; // 0x0(0x4)
		float Y; // 0x4(0x4)
		float Z; // 0x8(0x4)
	};


	// Struct CoreUObject.BoxSphereBounds
	// Size: 0x38 (0x38 - 0x0)
	struct FBoxSphereBounds	
	{
	public:
		FVector Origin; // 0x0(0x18)
		FVector BoxExtent; // 0x18(0x18)
		double SphereRadius; // 0x30(0x8)
	};


	// Struct CoreUObject.BoxSphereBounds3d
	// Size: 0x38 (0x38 - 0x0)
	struct FBoxSphereBounds3d	
	{
	public:
		FVector3d Origin; // 0x0(0x18)
		FVector3d BoxExtent; // 0x18(0x18)
		double SphereRadius; // 0x30(0x8)
	};


	// Struct CoreUObject.BoxSphereBounds3f
	// Size: 0x1C (0x1C - 0x0)
	struct FBoxSphereBounds3f	
	{
	public:
		FVector3f Origin; // 0x0(0xC)
		FVector3f BoxExtent; // 0xC(0xC)
		float SphereRadius; // 0x18(0x4)
	};


	// Struct CoreUObject.Color
	// Size: 0x4 (0x4 - 0x0)
	struct FColor	
	{
	public:
		char B; // 0x0(0x1)
		char G; // 0x1(0x1)
		char R; // 0x2(0x1)
		char A; // 0x3(0x1)
	};


	// Struct CoreUObject.DirectoryPath
	// Size: 0x10 (0x10 - 0x0)
	struct FDirectoryPath	
	{
	public:
		FString Path; // 0x0(0x10)
	};


	// Struct CoreUObject.DoubleRange
	// Size: 0x20 (0x20 - 0x0)
	struct FDoubleRange	
	{
	public:
		FDoubleRangeBound LowerBound; // 0x0(0x10)
		FDoubleRangeBound UpperBound; // 0x10(0x10)
	};


	// Struct CoreUObject.DoubleRangeBound
	// Size: 0x10 (0x10 - 0x0)
	struct FDoubleRangeBound	
	{
	public:
		TEnumAsByte Type; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		double Value; // 0x8(0x8)
	};


	// Struct CoreUObject.FallbackStruct
	// Size: 0x1 (0x1 - 0x0)
	struct FFallbackStruct	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.FilePath
	// Size: 0x10 (0x10 - 0x0)
	struct FFilePath	
	{
	public:
		FString FilePath; // 0x0(0x10)
	};


	// Struct CoreUObject.FloatInterval
	// Size: 0x8 (0x8 - 0x0)
	struct FFloatInterval	
	{
	public:
		float Min; // 0x0(0x4)
		float Max; // 0x4(0x4)
	};


	// Struct CoreUObject.FloatRange
	// Size: 0x10 (0x10 - 0x0)
	struct FFloatRange	
	{
	public:
		FFloatRangeBound LowerBound; // 0x0(0x8)
		FFloatRangeBound UpperBound; // 0x8(0x8)
	};


	// Struct CoreUObject.FloatRangeBound
	// Size: 0x8 (0x8 - 0x0)
	struct FFloatRangeBound	
	{
	public:
		TEnumAsByte Type; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Value; // 0x4(0x4)
	};


	// Struct CoreUObject.FrameNumber
	// Size: 0x4 (0x4 - 0x0)
	struct FFrameNumber	
	{
	public:
		int32_t Value; // 0x0(0x4)
	};


	// Struct CoreUObject.FrameNumberRange
	// Size: 0x10 (0x10 - 0x0)
	struct FFrameNumberRange	
	{
	public:
		FFrameNumberRangeBound LowerBound; // 0x0(0x8)
		FFrameNumberRangeBound UpperBound; // 0x8(0x8)
	};


	// Struct CoreUObject.FrameNumberRangeBound
	// Size: 0x8 (0x8 - 0x0)
	struct FFrameNumberRangeBound	
	{
	public:
		TEnumAsByte Type; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FFrameNumber Value; // 0x4(0x4)
	};


	// Struct CoreUObject.FrameRate
	// Size: 0x8 (0x8 - 0x0)
	struct FFrameRate	
	{
	public:
		int32_t Numerator; // 0x0(0x4)
		int32_t Denominator; // 0x4(0x4)
	};


	// Struct CoreUObject.FrameTime
	// Size: 0x8 (0x8 - 0x0)
	struct FFrameTime	
	{
	public:
		FFrameNumber FrameNumber; // 0x0(0x4)
		float SubFrame; // 0x4(0x4)
	};


	// Struct CoreUObject.InputDeviceId
	// Size: 0x4 (0x4 - 0x0)
	struct FInputDeviceId	
	{
	public:
		int32_t InternalId; // 0x0(0x4)
	};


	// Struct CoreUObject.Int32Interval
	// Size: 0x8 (0x8 - 0x0)
	struct FInt32Interval	
	{
	public:
		int32_t Min; // 0x0(0x4)
		int32_t Max; // 0x4(0x4)
	};


	// Struct CoreUObject.Int32Point
	// Size: 0x8 (0x8 - 0x0)
	struct FInt32Point	
	{
	public:
		int32_t X; // 0x0(0x4)
		int32_t Y; // 0x4(0x4)
	};


	// Struct CoreUObject.Int32Range
	// Size: 0x10 (0x10 - 0x0)
	struct FInt32Range	
	{
	public:
		FInt32RangeBound LowerBound; // 0x0(0x8)
		FInt32RangeBound UpperBound; // 0x8(0x8)
	};


	// Struct CoreUObject.Int32RangeBound
	// Size: 0x8 (0x8 - 0x0)
	struct FInt32RangeBound	
	{
	public:
		TEnumAsByte Type; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t Value; // 0x4(0x4)
	};


	// Struct CoreUObject.Int32Rect
	// Size: 0x10 (0x10 - 0x0)
	struct FInt32Rect	
	{
	public:
		FInt32Point Min; // 0x0(0x8)
		FInt32Point Max; // 0x8(0x8)
	};


	// Struct CoreUObject.Int32Vector
	// Size: 0xC (0xC - 0x0)
	struct FInt32Vector	
	{
	public:
		int32_t X; // 0x0(0x4)
		int32_t Y; // 0x4(0x4)
		int32_t Z; // 0x8(0x4)
	};


	// Struct CoreUObject.Int32Vector2
	// Size: 0x8 (0x8 - 0x0)
	struct FInt32Vector2	
	{
	public:
		int32_t X; // 0x0(0x4)
		int32_t Y; // 0x4(0x4)
	};


	// Struct CoreUObject.Int32Vector4
	// Size: 0x10 (0x10 - 0x0)
	struct FInt32Vector4	
	{
	public:
		int32_t X; // 0x0(0x4)
		int32_t Y; // 0x4(0x4)
		int32_t Z; // 0x8(0x4)
		int32_t W; // 0xC(0x4)
	};


	// Struct CoreUObject.Int64Point
	// Size: 0x10 (0x10 - 0x0)
	struct FInt64Point	
	{
	public:
		int64_t X; // 0x0(0x8)
		int64_t Y; // 0x8(0x8)
	};


	// Struct CoreUObject.Int64Rect
	// Size: 0x20 (0x20 - 0x0)
	struct FInt64Rect	
	{
	public:
		FInt64Point Min; // 0x0(0x10)
		FInt64Point Max; // 0x10(0x10)
	};


	// Struct CoreUObject.Int64Vector
	// Size: 0x18 (0x18 - 0x0)
	struct FInt64Vector	
	{
	public:
		int64_t X; // 0x0(0x8)
		int64_t Y; // 0x8(0x8)
		int64_t Z; // 0x10(0x8)
	};


	// Struct CoreUObject.Int64Vector2
	// Size: 0x10 (0x10 - 0x0)
	struct FInt64Vector2	
	{
	public:
		int64_t X; // 0x0(0x8)
		int64_t Y; // 0x8(0x8)
	};


	// Struct CoreUObject.Int64Vector4
	// Size: 0x20 (0x20 - 0x0)
	struct FInt64Vector4	
	{
	public:
		int64_t X; // 0x0(0x8)
		int64_t Y; // 0x8(0x8)
		int64_t Z; // 0x10(0x8)
		int64_t W; // 0x18(0x8)
	};


	// Struct CoreUObject.InterpCurveFloat
	// Size: 0x18 (0x18 - 0x0)
	struct FInterpCurveFloat	
	{
	public:
		TArray Points; // 0x0(0x10)
		bool bIsLooped; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float LoopKeyOffset; // 0x14(0x4)
	};


	// Struct CoreUObject.InterpCurvePointFloat
	// Size: 0x14 (0x14 - 0x0)
	struct FInterpCurvePointFloat	
	{
	public:
		float InVal; // 0x0(0x4)
		float OutVal; // 0x4(0x4)
		float ArriveTangent; // 0x8(0x4)
		float LeaveTangent; // 0xC(0x4)
		TEnumAsByte InterpMode; // 0x10(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.InterpCurveLinearColor
	// Size: 0x18 (0x18 - 0x0)
	struct FInterpCurveLinearColor	
	{
	public:
		TArray Points; // 0x0(0x10)
		bool bIsLooped; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float LoopKeyOffset; // 0x14(0x4)
	};


	// Struct CoreUObject.InterpCurvePointLinearColor
	// Size: 0x38 (0x38 - 0x0)
	struct FInterpCurvePointLinearColor	
	{
	public:
		float InVal; // 0x0(0x4)
		FLinearColor OutVal; // 0x4(0x10)
		FLinearColor ArriveTangent; // 0x14(0x10)
		FLinearColor LeaveTangent; // 0x24(0x10)
		TEnumAsByte InterpMode; // 0x34(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.LinearColor
	// Size: 0x10 (0x10 - 0x0)
	struct FLinearColor	
	{
	public:
		float R; // 0x0(0x4)
		float G; // 0x4(0x4)
		float B; // 0x8(0x4)
		float A; // 0xC(0x4)
	};


	// Struct CoreUObject.InterpCurvePointQuat
	// Size: 0x80 (0x80 - 0x0)
	struct FInterpCurvePointQuat	
	{
	public:
		float InVal; // 0x0(0x4)
		unsigned char UnknownData02_6[0xC]; // 0x4(0xC) UNKNOWN PROPERTY
		FQuat OutVal; // 0x10(0x20)
		FQuat ArriveTangent; // 0x30(0x20)
		FQuat LeaveTangent; // 0x50(0x20)
		TEnumAsByte InterpMode; // 0x70(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x71(0xF) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.Quat
	// Size: 0x20 (0x20 - 0x0)
	struct FQuat	
	{
	public:
		double X; // 0x0(0x8)
		double Y; // 0x8(0x8)
		double Z; // 0x10(0x8)
		double W; // 0x18(0x8)
	};


	// Struct CoreUObject.InterpCurvePointTwoVectors
	// Size: 0xA0 (0xA0 - 0x0)
	struct FInterpCurvePointTwoVectors	
	{
	public:
		float InVal; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FTwoVectors OutVal; // 0x8(0x30)
		FTwoVectors ArriveTangent; // 0x38(0x30)
		FTwoVectors LeaveTangent; // 0x68(0x30)
		TEnumAsByte InterpMode; // 0x98(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.TwoVectors
	// Size: 0x30 (0x30 - 0x0)
	struct FTwoVectors	
	{
	public:
		FVector v1; // 0x0(0x18)
		FVector v2; // 0x18(0x18)
	};


	// Struct CoreUObject.InterpCurvePointVector
	// Size: 0x58 (0x58 - 0x0)
	struct FInterpCurvePointVector	
	{
	public:
		float InVal; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector OutVal; // 0x8(0x18)
		FVector ArriveTangent; // 0x20(0x18)
		FVector LeaveTangent; // 0x38(0x18)
		TEnumAsByte InterpMode; // 0x50(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.InterpCurvePointVector2D
	// Size: 0x40 (0x40 - 0x0)
	struct FInterpCurvePointVector2D	
	{
	public:
		float InVal; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector2D OutVal; // 0x8(0x10)
		FVector2D ArriveTangent; // 0x18(0x10)
		FVector2D LeaveTangent; // 0x28(0x10)
		TEnumAsByte InterpMode; // 0x38(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.InterpCurveQuat
	// Size: 0x18 (0x18 - 0x0)
	struct FInterpCurveQuat	
	{
	public:
		TArray Points; // 0x0(0x10)
		bool bIsLooped; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float LoopKeyOffset; // 0x14(0x4)
	};


	// Struct CoreUObject.InterpCurveTwoVectors
	// Size: 0x18 (0x18 - 0x0)
	struct FInterpCurveTwoVectors	
	{
	public:
		TArray Points; // 0x0(0x10)
		bool bIsLooped; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float LoopKeyOffset; // 0x14(0x4)
	};


	// Struct CoreUObject.InterpCurveVector
	// Size: 0x18 (0x18 - 0x0)
	struct FInterpCurveVector	
	{
	public:
		TArray Points; // 0x0(0x10)
		bool bIsLooped; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float LoopKeyOffset; // 0x14(0x4)
	};


	// Struct CoreUObject.InterpCurveVector2D
	// Size: 0x18 (0x18 - 0x0)
	struct FInterpCurveVector2D	
	{
	public:
		TArray Points; // 0x0(0x10)
		bool bIsLooped; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float LoopKeyOffset; // 0x14(0x4)
	};


	// Struct CoreUObject.IntPoint
	// Size: 0x8 (0x8 - 0x0)
	struct FIntPoint	
	{
	public:
		int32_t X; // 0x0(0x4)
		int32_t Y; // 0x4(0x4)
	};


	// Struct CoreUObject.IntRect
	// Size: 0x10 (0x10 - 0x0)
	struct FIntRect	
	{
	public:
		FIntPoint Min; // 0x0(0x8)
		FIntPoint Max; // 0x8(0x8)
	};


	// Struct CoreUObject.IntVector
	// Size: 0xC (0xC - 0x0)
	struct FIntVector	
	{
	public:
		int32_t X; // 0x0(0x4)
		int32_t Y; // 0x4(0x4)
		int32_t Z; // 0x8(0x4)
	};


	// Struct CoreUObject.IntVector2
	// Size: 0x8 (0x8 - 0x0)
	struct FIntVector2	
	{
	public:
		int32_t X; // 0x0(0x4)
		int32_t Y; // 0x4(0x4)
	};


	// Struct CoreUObject.IntVector4
	// Size: 0x10 (0x10 - 0x0)
	struct FIntVector4	
	{
	public:
		int32_t X; // 0x0(0x4)
		int32_t Y; // 0x4(0x4)
		int32_t Z; // 0x8(0x4)
		int32_t W; // 0xC(0x4)
	};


	// Struct CoreUObject.Matrix
	// Size: 0x80 (0x80 - 0x0)
	struct FMatrix	
	{
	public:
		FPlane XPlane; // 0x0(0x20)
		FPlane YPlane; // 0x20(0x20)
		FPlane ZPlane; // 0x40(0x20)
		FPlane WPlane; // 0x60(0x20)
	};


	// Struct CoreUObject.Plane
	// Inherited from FVector
	// Size: 0x8 (0x20 - 0x18)
	struct FPlane : public FVector	
	{
	public:
		double W; // 0x18(0x8)
	};


	// Struct CoreUObject.Matrix44d
	// Size: 0x80 (0x80 - 0x0)
	struct FMatrix44d	
	{
	public:
		FPlane4d XPlane; // 0x0(0x20)
		FPlane4d YPlane; // 0x20(0x20)
		FPlane4d ZPlane; // 0x40(0x20)
		FPlane4d WPlane; // 0x60(0x20)
	};


	// Struct CoreUObject.Plane4d
	// Inherited from FVector3d
	// Size: 0x8 (0x20 - 0x18)
	struct FPlane4d : public FVector3d	
	{
	public:
		double W; // 0x18(0x8)
	};


	// Struct CoreUObject.Matrix44f
	// Size: 0x40 (0x40 - 0x0)
	struct FMatrix44f	
	{
	public:
		FPlane4f XPlane; // 0x0(0x10)
		FPlane4f YPlane; // 0x10(0x10)
		FPlane4f ZPlane; // 0x20(0x10)
		FPlane4f WPlane; // 0x30(0x10)
	};


	// Struct CoreUObject.Plane4f
	// Inherited from FVector3f
	// Size: 0x4 (0x10 - 0xC)
	struct FPlane4f : public FVector3f	
	{
	public:
		float W; // 0xC(0x4)
	};


	// Struct CoreUObject.OrientedBox
	// Size: 0x78 (0x78 - 0x0)
	struct FOrientedBox	
	{
	public:
		FVector Center; // 0x0(0x18)
		FVector AxisX; // 0x18(0x18)
		FVector AxisY; // 0x30(0x18)
		FVector AxisZ; // 0x48(0x18)
		double ExtentX; // 0x60(0x8)
		double ExtentY; // 0x68(0x8)
		double ExtentZ; // 0x70(0x8)
	};


	// Struct CoreUObject.PackedNormal
	// Size: 0x4 (0x4 - 0x0)
	struct FPackedNormal	
	{
	public:
		char X; // 0x0(0x1)
		char Y; // 0x1(0x1)
		char Z; // 0x2(0x1)
		char W; // 0x3(0x1)
	};


	// Struct CoreUObject.PackedRGB10A2N
	// Size: 0x4 (0x4 - 0x0)
	struct FPackedRGB10A2N	
	{
	public:
		int32_t Packed; // 0x0(0x4)
	};


	// Struct CoreUObject.PackedRGBA16N
	// Size: 0x8 (0x8 - 0x0)
	struct FPackedRGBA16N	
	{
	public:
		int32_t XY; // 0x0(0x4)
		int32_t ZW; // 0x4(0x4)
	};


	// Struct CoreUObject.PlatformInputDeviceState
	// Size: 0x8 (0x8 - 0x0)
	struct FPlatformInputDeviceState	
	{
	public:
		FPlatformUserId OwningPlatformUser; // 0x0(0x4)
		EInputDeviceConnectionState ConnectionState; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.PlatformUserId
	// Size: 0x4 (0x4 - 0x0)
	struct FPlatformUserId	
	{
	public:
		int32_t InternalId; // 0x0(0x4)
	};


	// Struct CoreUObject.PolyglotTextData
	// Size: 0xB0 (0xB0 - 0x0)
	struct FPolyglotTextData	
	{
	public:
		ELocalizedTextSourceCategory category; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString NativeCulture; // 0x8(0x10)
		FString NameSpace; // 0x18(0x10)
		FString Key; // 0x28(0x10)
		FString NativeString; // 0x38(0x10)
		TMap LocalizedStrings; // 0x48(0x50)
		bool bIsMinimalPatch; // 0x98(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
		FText CachedText; // 0xA0(0x10)
	};


	// Struct CoreUObject.PrimaryAssetId
	// Size: 0x8 (0x8 - 0x0)
	struct FPrimaryAssetId	
	{
	public:
		FPrimaryAssetType PrimaryAssetType; // 0x0(0x4)
		FName PrimaryAssetName; // 0x4(0x4)
	};


	// Struct CoreUObject.PrimaryAssetType
	// Size: 0x4 (0x4 - 0x0)
	struct FPrimaryAssetType	
	{
	public:
		FName Name; // 0x0(0x4)
	};


	// Struct CoreUObject.QualifiedFrameTime
	// Size: 0x10 (0x10 - 0x0)
	struct FQualifiedFrameTime	
	{
	public:
		FFrameTime Time; // 0x0(0x8)
		FFrameRate Rate; // 0x8(0x8)
	};


	// Struct CoreUObject.Quat4d
	// Size: 0x20 (0x20 - 0x0)
	struct FQuat4d	
	{
	public:
		double X; // 0x0(0x8)
		double Y; // 0x8(0x8)
		double Z; // 0x10(0x8)
		double W; // 0x18(0x8)
	};


	// Struct CoreUObject.Quat4f
	// Size: 0x10 (0x10 - 0x0)
	struct FQuat4f	
	{
	public:
		float X; // 0x0(0x4)
		float Y; // 0x4(0x4)
		float Z; // 0x8(0x4)
		float W; // 0xC(0x4)
	};


	// Struct CoreUObject.RandomStream
	// Size: 0x8 (0x8 - 0x0)
	struct FRandomStream	
	{
	public:
		int32_t InitialSeed; // 0x0(0x4)
		int32_t Seed; // 0x4(0x4)
	};


	// Struct CoreUObject.Ray
	// Size: 0x30 (0x30 - 0x0)
	struct FRay	
	{
	public:
		FVector Origin; // 0x0(0x18)
		FVector Direction; // 0x18(0x18)
	};


	// Struct CoreUObject.Ray3d
	// Size: 0x30 (0x30 - 0x0)
	struct FRay3d	
	{
	public:
		FVector3d Origin; // 0x0(0x18)
		FVector3d Direction; // 0x18(0x18)
	};


	// Struct CoreUObject.Ray3f
	// Size: 0x18 (0x18 - 0x0)
	struct FRay3f	
	{
	public:
		FVector3f Origin; // 0x0(0xC)
		FVector3f Direction; // 0xC(0xC)
	};


	// Struct CoreUObject.Rotator
	// Size: 0x18 (0x18 - 0x0)
	struct FRotator	
	{
	public:
		double pitch; // 0x0(0x8)
		double Yaw; // 0x8(0x8)
		double Roll; // 0x10(0x8)
	};


	// Struct CoreUObject.Rotator3d
	// Size: 0x18 (0x18 - 0x0)
	struct FRotator3d	
	{
	public:
		double pitch; // 0x0(0x8)
		double Yaw; // 0x8(0x8)
		double Roll; // 0x10(0x8)
	};


	// Struct CoreUObject.Rotator3f
	// Size: 0xC (0xC - 0x0)
	struct FRotator3f	
	{
	public:
		float pitch; // 0x0(0x4)
		float Yaw; // 0x4(0x4)
		float Roll; // 0x8(0x4)
	};


	// Struct CoreUObject.SoftClassPath
	// Inherited from FSoftObjectPath
	// Size: 0x0 (0x18 - 0x18)
	struct FSoftClassPath : public FSoftObjectPath	
	{
	public:
	};


	// Struct CoreUObject.Sphere
	// Size: 0x20 (0x20 - 0x0)
	struct FSphere	
	{
	public:
		FVector Center; // 0x0(0x18)
		double W; // 0x18(0x8)
	};


	// Struct CoreUObject.Sphere3d
	// Size: 0x20 (0x20 - 0x0)
	struct FSphere3d	
	{
	public:
		FVector3d Center; // 0x0(0x18)
		double W; // 0x18(0x8)
	};


	// Struct CoreUObject.Sphere3f
	// Size: 0x10 (0x10 - 0x0)
	struct FSphere3f	
	{
	public:
		FVector3f Center; // 0x0(0xC)
		float W; // 0xC(0x4)
	};


	// Struct CoreUObject.TemplateString
	// Size: 0x10 (0x10 - 0x0)
	struct FTemplateString	
	{
	public:
		FString Template; // 0x0(0x10)
	};


	// Struct CoreUObject.TestUndeclaredScriptStructObjectReferencesTest
	// Size: 0x48 (0x48 - 0x0)
	struct FTestUndeclaredScriptStructObjectReferencesTest	
	{
	public:
		UObject StrongObjectPointer; // 0x0(0x8)
		TWeakObjectPtr SoftObjectPointer; // 0x8(0x20)
		FSoftObjectPath SoftObjectPath; // 0x28(0x18)
		TWeakObjectPtr WeakObjectPointer; // 0x40(0x8)
	};


	// Struct CoreUObject.TestUninitializedScriptStructMembersTest
	// Size: 0x18 (0x18 - 0x0)
	struct FTestUninitializedScriptStructMembersTest	
	{
	public:
		UObject UninitializedObjectReference; // 0x0(0x8)
		UObject InitializedObjectReference; // 0x8(0x8)
		float UnusedValue; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.timecode
	// Size: 0x14 (0x14 - 0x0)
	struct Ftimecode	
	{
	public:
		int32_t Hours; // 0x0(0x4)
		int32_t Minutes; // 0x4(0x4)
		int32_t Seconds; // 0x8(0x4)
		int32_t Frames; // 0xC(0x4)
		bool bDropFrameFormat; // 0x10(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.Timespan
	// Size: 0x8 (0x8 - 0x0)
	struct FTimespan	
	{
	public:
		int64_t Ticks; // 0x0(0x8)
	};


	// Struct CoreUObject.Transform
	// Size: 0x60 (0x60 - 0x0)
	struct FTransform	
	{
	public:
		FQuat Rotation; // 0x0(0x20)
		FVector Translation; // 0x20(0x18)
		unsigned char UnknownData02_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FVector Scale3D; // 0x40(0x18)
		unsigned char UnknownData03_7[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.Transform3d
	// Size: 0x60 (0x60 - 0x0)
	struct FTransform3d	
	{
	public:
		FQuat4d Rotation; // 0x0(0x20)
		FVector3d Translation; // 0x20(0x18)
		unsigned char UnknownData02_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FVector3d Scale3D; // 0x40(0x18)
		unsigned char UnknownData03_7[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.Transform3f
	// Size: 0x30 (0x30 - 0x0)
	struct FTransform3f	
	{
	public:
		FQuat4f Rotation; // 0x0(0x10)
		FVector3f Translation; // 0x10(0xC)
		unsigned char UnknownData02_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FVector3f Scale3D; // 0x20(0xC)
		unsigned char UnknownData03_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.Uint32Point
	// Size: 0x8 (0x8 - 0x0)
	struct FUint32Point	
	{
	public:
		int32_t X; // 0x0(0x4)
		int32_t Y; // 0x4(0x4)
	};


	// Struct CoreUObject.Uint32Rect
	// Size: 0x10 (0x10 - 0x0)
	struct FUint32Rect	
	{
	public:
		FUint32Point Min; // 0x0(0x8)
		FUint32Point Max; // 0x8(0x8)
	};


	// Struct CoreUObject.Uint32Vector
	// Size: 0xC (0xC - 0x0)
	struct FUint32Vector	
	{
	public:
		uint32_t X; // 0x0(0x4)
		uint32_t Y; // 0x4(0x4)
		uint32_t Z; // 0x8(0x4)
	};


	// Struct CoreUObject.Uint32Vector2
	// Size: 0x8 (0x8 - 0x0)
	struct FUint32Vector2	
	{
	public:
		uint32_t X; // 0x0(0x4)
		uint32_t Y; // 0x4(0x4)
	};


	// Struct CoreUObject.Uint32Vector4
	// Size: 0x10 (0x10 - 0x0)
	struct FUint32Vector4	
	{
	public:
		uint32_t X; // 0x0(0x4)
		uint32_t Y; // 0x4(0x4)
		uint32_t Z; // 0x8(0x4)
		uint32_t W; // 0xC(0x4)
	};


	// Struct CoreUObject.Uint64Point
	// Size: 0x10 (0x10 - 0x0)
	struct FUint64Point	
	{
	public:
		int64_t X; // 0x0(0x8)
		int64_t Y; // 0x8(0x8)
	};


	// Struct CoreUObject.Uint64Rect
	// Size: 0x20 (0x20 - 0x0)
	struct FUint64Rect	
	{
	public:
		FUint64Point Min; // 0x0(0x10)
		FUint64Point Max; // 0x10(0x10)
	};


	// Struct CoreUObject.Uint64Vector
	// Size: 0x18 (0x18 - 0x0)
	struct FUint64Vector	
	{
	public:
		uint64_t X; // 0x0(0x8)
		uint64_t Y; // 0x8(0x8)
		uint64_t Z; // 0x10(0x8)
	};


	// Struct CoreUObject.Uint64Vector2
	// Size: 0x10 (0x10 - 0x0)
	struct FUint64Vector2	
	{
	public:
		uint64_t X; // 0x0(0x8)
		uint64_t Y; // 0x8(0x8)
	};


	// Struct CoreUObject.Uint64Vector4
	// Size: 0x20 (0x20 - 0x0)
	struct FUint64Vector4	
	{
	public:
		uint64_t X; // 0x0(0x8)
		uint64_t Y; // 0x8(0x8)
		uint64_t Z; // 0x10(0x8)
		uint64_t W; // 0x18(0x8)
	};


	// Struct CoreUObject.UintPoint
	// Size: 0x8 (0x8 - 0x0)
	struct FUintPoint	
	{
	public:
		int32_t X; // 0x0(0x4)
		int32_t Y; // 0x4(0x4)
	};


	// Struct CoreUObject.UintRect
	// Size: 0x10 (0x10 - 0x0)
	struct FUintRect	
	{
	public:
		FUintPoint Min; // 0x0(0x8)
		FUintPoint Max; // 0x8(0x8)
	};


	// Struct CoreUObject.UintVector
	// Size: 0xC (0xC - 0x0)
	struct FUintVector	
	{
	public:
		uint32_t X; // 0x0(0x4)
		uint32_t Y; // 0x4(0x4)
		uint32_t Z; // 0x8(0x4)
	};


	// Struct CoreUObject.UintVector2
	// Size: 0x8 (0x8 - 0x0)
	struct FUintVector2	
	{
	public:
		uint32_t X; // 0x0(0x4)
		uint32_t Y; // 0x4(0x4)
	};


	// Struct CoreUObject.UintVector4
	// Size: 0x10 (0x10 - 0x0)
	struct FUintVector4	
	{
	public:
		uint32_t X; // 0x0(0x4)
		uint32_t Y; // 0x4(0x4)
		uint32_t Z; // 0x8(0x4)
		uint32_t W; // 0xC(0x4)
	};


	// Struct CoreUObject.Vector4
	// Size: 0x20 (0x20 - 0x0)
	struct FVector4	
	{
	public:
		double X; // 0x0(0x8)
		double Y; // 0x8(0x8)
		double Z; // 0x10(0x8)
		double W; // 0x18(0x8)
	};


	// Struct CoreUObject.Vector4d
	// Size: 0x20 (0x20 - 0x0)
	struct FVector4d	
	{
	public:
		double X; // 0x0(0x8)
		double Y; // 0x8(0x8)
		double Z; // 0x10(0x8)
		double W; // 0x18(0x8)
	};


	// Struct CoreUObject.Vector4f
	// Size: 0x10 (0x10 - 0x0)
	struct FVector4f	
	{
	public:
		float X; // 0x0(0x4)
		float Y; // 0x4(0x4)
		float Z; // 0x8(0x4)
		float W; // 0xC(0x4)
	};


	// Struct CoreUObject.InstancedStruct
	// Size: 0x10 (0x10 - 0x0)
	struct FInstancedStruct	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.InstancedPropertyBag
	// Size: 0x10 (0x10 - 0x0)
	struct FInstancedPropertyBag	
	{
	public:
		FInstancedStruct Value; // 0x0(0x10)
	};


	// Struct CoreUObject.TestInstanceDataObjectStruct
	// Size: 0x10 (0x10 - 0x0)
	struct FTestInstanceDataObjectStruct	
	{
	public:
		int32_t A; // 0x0(0x4)
		int32_t B; // 0x4(0x4)
		int32_t C; // 0x8(0x4)
		int32_t D; // 0xC(0x4)
	};


	// Struct CoreUObject.TestInstanceDataObjectStructAlternate
	// Size: 0x18 (0x18 - 0x0)
	struct FTestInstanceDataObjectStructAlternate	
	{
	public:
		float B; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		int64_t C; // 0x8(0x8)
		int32_t D; // 0x10(0x4)
		int32_t E; // 0x14(0x4)
	};


	// Struct CoreUObject.OverriddenPropertyNodeID
	// Size: 0x10 (0x10 - 0x0)
	struct FOverriddenPropertyNodeID	
	{
	public:
		FName Path; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UObject Object; // 0x8(0x8)
	};


	// Struct CoreUObject.OverriddenPropertyNode
	// Size: 0x68 (0x68 - 0x0)
	struct FOverriddenPropertyNode	
	{
	public:
		FOverriddenPropertyNodeID NodeId; // 0x0(0x10)
		EOverriddenPropertyOperation Operation; // 0x10(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		TMap SubPropertyNodeKeys; // 0x18(0x50)
	};


	// Struct CoreUObject.OverriddenPropertySet
	// Size: 0x68 (0x68 - 0x0)
	struct FOverriddenPropertySet	
	{
	public:
		UObject Owner; // 0x0(0x8)
		TSet OverriddenPropertyNodes; // 0x8(0x50)
		unsigned char UnknownData01_7[0x10]; // 0x58(0x10) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.PropertyTextFName
	// Size: 0x18 (0x18 - 0x0)
	struct FPropertyTextFName	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.PropertyTextString
	// Size: 0x20 (0x20 - 0x0)
	struct FPropertyTextString	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.InstancedStructContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FInstancedStructContainer	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.PropertyBagContainerTypes
	// Size: 0x3 (0x3 - 0x0)
	struct FPropertyBagContainerTypes	
	{
	public:
		unsigned char UnknownData01_2[0x3]; // 0x0(0x3) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.PropertyBagPropertyDescMetaData
	// Size: 0x18 (0x18 - 0x0)
	struct FPropertyBagPropertyDescMetaData	
	{
	public:
		FName Key; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Value; // 0x8(0x10)
	};


	// Struct CoreUObject.PropertyBagPropertyDesc
	// Size: 0x28 (0x28 - 0x0)
	struct FPropertyBagPropertyDesc	
	{
	public:
		UObject ValueTypeObject; // 0x0(0x8)
		FGuid ID; // 0x8(0x10)
		FName Name; // 0x18(0x4)
		EPropertyBagPropertyType ValueType; // 0x1C(0x1)
		FPropertyBagContainerTypes ContainerTypes; // 0x1D(0x3)
		unsigned char UnknownData01_7[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.PropertyBagMissingStruct
	// Size: 0x1 (0x1 - 0x0)
	struct FPropertyBagMissingStruct	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.SharedStruct
	// Size: 0x10 (0x10 - 0x0)
	struct FSharedStruct	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.ConstSharedStruct
	// Size: 0x10 (0x10 - 0x0)
	struct FConstSharedStruct	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.ObjectCookedMetaDataStore
	// Size: 0x50 (0x50 - 0x0)
	struct FObjectCookedMetaDataStore	
	{
	public:
		TMap ObjectMetaData; // 0x0(0x50)
	};


	// Struct CoreUObject.FieldCookedMetaDataStore
	// Size: 0x50 (0x50 - 0x0)
	struct FFieldCookedMetaDataStore	
	{
	public:
		TMap FieldMetaData; // 0x0(0x50)
	};


	// Struct CoreUObject.StructCookedMetaDataStore
	// Size: 0xA0 (0xA0 - 0x0)
	struct FStructCookedMetaDataStore	
	{
	public:
		FObjectCookedMetaDataStore ObjectMetaData; // 0x0(0x50)
		TMap PropertiesMetaData; // 0x50(0x50)
	};


	// Struct CoreUObject.PerPlatformInt
	// Size: 0x4 (0x4 - 0x0)
	struct FPerPlatformInt	
	{
	public:
		int32_t Default; // 0x0(0x4)
	};


	// Struct CoreUObject.FreezablePerPlatformInt
	// Size: 0x4 (0x4 - 0x0)
	struct FFreezablePerPlatformInt	
	{
	public:
		unsigned char UnknownData01_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct CoreUObject.PerPlatformFloat
	// Size: 0x4 (0x4 - 0x0)
	struct FPerPlatformFloat	
	{
	public:
		float Default; // 0x0(0x4)
	};


	// Struct CoreUObject.PerPlatformBool
	// Size: 0x1 (0x1 - 0x0)
	struct FPerPlatformBool	
	{
	public:
		bool Default; // 0x0(0x1)
	};


	// Struct CoreUObject.PerPlatformFrameRate
	// Size: 0x8 (0x8 - 0x0)
	struct FPerPlatformFrameRate	
	{
	public:
		FFrameRate Default; // 0x0(0x8)
	};

}
