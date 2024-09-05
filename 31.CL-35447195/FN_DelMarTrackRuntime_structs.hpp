#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarTrackRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct DelMarTrackRuntime.DelMarTrackAddedEvent
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarTrackAddedEvent	
	{
	public:
		TWeakObjectPtr Track; // 0x0(0x8)
	};


	// Struct DelMarTrackRuntime.DelMarTrackMaterialCollectionEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarTrackMaterialCollectionEntry	
	{
	public:
		TArray MICs; // 0x0(0x10)
	};


	// Struct DelMarTrackRuntime.DelMarTrackOobTubeMeshSection
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarTrackOobTubeMeshSection	
	{
	public:
		USplineMeshComponent TubeMesh; // 0x0(0x8)
		int32_t PointIndex; // 0x8(0x4)
		float StartDistanceAlongSpline; // 0xC(0x4)
		float EndDistanceAlongSpline; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarTrackRuntime.DelMarTrackOobTubePointMetaData
	// Size: 0x28 (0x28 - 0x0)
	struct FDelMarTrackOobTubePointMetaData	
	{
	public:
		FVector2D LocationOffset; // 0x0(0x10)
		FVector2D ScaleOffset; // 0x10(0x10)
		int32_t NumSubsections; // 0x20(0x4)
		bool bShouldGenerateTube; // 0x24(0x1)
		bool bShouldMirrorAttachedTrackPoint; // 0x25(0x1)
		bool bIgnoreAutoTransitionScaling; // 0x26(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x27(0x1) UNKNOWN PROPERTY
	};


	// Struct DelMarTrackRuntime.DelMarTrackPaletteTransitionEntry_v2
	// Size: 0x40 (0x40 - 0x0)
	struct FDelMarTrackPaletteTransitionEntry_v2	
	{
	public:
		FGameplayTag TagA; // 0x0(0x4)
		FGameplayTag TagB; // 0x4(0x4)
		UClass TRANSITION; // 0x8(0x8)
		bool bUseReverse; // 0x10(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		UClass Reverse; // 0x18(0x8)
		bool bEnableOOBTubeTransitions; // 0x20(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		UStaticMesh OOBTubeTransitionMesh; // 0x28(0x8)
		bool bOverrideReverseOOBTubeMesh; // 0x30(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		UStaticMesh ReverseOOBTubeTransitionMesh; // 0x38(0x8)
	};


	// Struct DelMarTrackRuntime.DelMarTrackPaletteTrackTypeEntry
	// Size: 0x38 (0x38 - 0x0)
	struct FDelMarTrackPaletteTrackTypeEntry	
	{
	public:
		FGameplayTag StyleTag; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray SegmentActors; // 0x8(0x10)
		UClass FrontEndcap; // 0x18(0x8)
		bool bIsFrontEndcapReversable; // 0x20(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		UClass BackEndcap; // 0x28(0x8)
		UTexture WidgetImage; // 0x30(0x8)
	};


	// Struct DelMarTrackRuntime.DelMarTrackPointDistanceRange
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarTrackPointDistanceRange	
	{
	public:
		float BeginDistanceAlongSpline; // 0x0(0x4)
		float EndDistanceAlongSpline; // 0x4(0x4)
	};


	// Struct DelMarTrackRuntime.DelMarTrackPointIndexRange
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarTrackPointIndexRange	
	{
	public:
		int32_t BeginPointIndex; // 0x0(0x4)
		int32_t EndPointIndex; // 0x4(0x4)
	};


	// Struct DelMarTrackRuntime.DelMarTrackProp
	// Size: 0x68 (0x68 - 0x0)
	struct FDelMarTrackProp	
	{
	public:
		TWeakObjectPtr SkeletalMesh; // 0x0(0x20)
		TWeakObjectPtr StaticMesh; // 0x20(0x20)
		TWeakObjectPtr Blueprint; // 0x40(0x20)
		EDelMarTrackPropType PropType; // 0x60(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarTrackRuntime.DelMarTrackPropSection
	// Size: 0xF0 (0xF0 - 0x0)
	struct FDelMarTrackPropSection	
	{
	public:
		TArray RangesToApplyTo; // 0x0(0x10)
		FDelMarTrackProp PropToPlace; // 0x10(0x68)
		int32_t NumPropsToPlace; // 0x78(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		double DistanceBetweenProps; // 0x80(0x8)
		FName CustomizationPlacementBase; // 0x88(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		double PlacementBeginPadding; // 0x90(0x8)
		double PlacementEndPadding; // 0x98(0x8)
		double PlacementDistanceOffset; // 0xA0(0x8)
		FVector PlacementScale; // 0xA8(0x18)
		FRotator PlacementRotationOffset; // 0xC0(0x18)
		EDelMarTrackSide SupportedTrackSide; // 0xD8(0x1)
		EDelMarTrackPropPlacementPosition PlacementPosition; // 0xD9(0x1)
		EDelMarTrackPropPlacementSpread PlacementSpread; // 0xDA(0x1)
		unsigned char UnknownData05_6[0x5]; // 0xDB(0x5) UNKNOWN PROPERTY
		FString RangesToApplyToEditorString; // 0xE0(0x10)
	};


	// Struct DelMarTrackRuntime.DelMarTrackSegmentSpawnInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarTrackSegmentSpawnInfo	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct DelMarTrackRuntime.DelMarTrackSegmentCollectionProxyData
	// Size: 0x30 (0x30 - 0x0)
	struct FDelMarTrackSegmentCollectionProxyData	
	{
	public:
		unsigned char UnknownData01_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct DelMarTrackRuntime.DelMarSegmentActorCollection
	// Size: 0x28 (0x28 - 0x0)
	struct FDelMarSegmentActorCollection	
	{
	public:
		TArray Segments; // 0x0(0x10)
		ADelMarTrackBase Track; // 0x10(0x8)
		TArray PropComponents; // 0x18(0x10)
	};


	// Struct DelMarTrackRuntime.DelMarTrackTagConverterData
	// Size: 0xC (0xC - 0x0)
	struct FDelMarTrackTagConverterData	
	{
	public:
		FGameplayTag v1Tag; // 0x0(0x4)
		bool bCheckCustomizations; // 0x4(0x1)
		bool bNeedRightRail; // 0x5(0x1)
		bool bNeedLeftRail; // 0x6(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x7(0x1) UNKNOWN PROPERTY
		FGameplayTag v2Tag; // 0x8(0x4)
	};


	// Struct DelMarTrackRuntime.DelMarTrackTransformData
	// Size: 0x70 (0x70 - 0x0)
	struct FDelMarTrackTransformData	
	{
	public:
		TWeakObjectPtr Track; // 0x0(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform TrackTransform; // 0x10(0x60)
	};


	// Struct DelMarTrackRuntime.DelMarTrackPaletteTransitionEntry
	// Size: 0x58 (0x58 - 0x0)
	struct FDelMarTrackPaletteTransitionEntry	
	{
	public:
		FGameplayTag TypeA; // 0x0(0x4)
		FGameplayTag TypeB; // 0x4(0x4)
		TWeakObjectPtr AtoB; // 0x8(0x20)
		TWeakObjectPtr BtoA; // 0x28(0x20)
		FString Title; // 0x48(0x10)
	};


	// Struct DelMarTrackRuntime.DelMarTrackCapEntry
	// Size: 0x48 (0x48 - 0x0)
	struct FDelMarTrackCapEntry	
	{
	public:
		FGameplayTag tag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr StartCap; // 0x8(0x20)
		TWeakObjectPtr EndCap; // 0x28(0x20)
	};


	// Struct DelMarTrackRuntime.DelMarTrackPaletteEntry
	// Size: 0x48 (0x48 - 0x0)
	struct FDelMarTrackPaletteEntry	
	{
	public:
		FGameplayTag TrackTypeTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr TrackSegmentClass; // 0x8(0x20)
		TArray MeshCustomizations; // 0x28(0x10)
		FString Title; // 0x38(0x10)
	};


	// Struct DelMarTrackRuntime.TrackPosition
	// Size: 0x20 (0x20 - 0x0)
	struct FTrackPosition	
	{
	public:
		ADelMarTrackBase Track; // 0x0(0x8)
		float DistanceAlongSpline; // 0x8(0x4)
		float RawDistanceAlongSpline; // 0xC(0x4)
		float DistanceToVehicleSquared; // 0x10(0x4)
		float LastKnownGoodDistance; // 0x14(0x4)
		int32_t SegmentIndex; // 0x18(0x4)
		bool bIsValid; // 0x1C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct DelMarTrackRuntime.DelMarSplineSegmentInfo
	// Size: 0xC8 (0xC8 - 0x0)
	struct FDelMarSplineSegmentInfo	
	{
	public:
		unsigned char UnknownData01_2[0xC8]; // 0x0(0xC8) UNKNOWN PROPERTY
	};


	// Struct DelMarTrackRuntime.DelMarSplinePointMetaData
	// Size: 0x80 (0x80 - 0x0)
	struct FDelMarSplinePointMetaData	
	{
	public:
		FGameplayTag TrackTypeTag; // 0x0(0x4)
		float TrackRadius; // 0x4(0x4)
		bool bForceValidTrack; // 0x8(0x1)
		bool bUseStableRoll; // 0x9(0x1)
		bool bUseFrontEndcap; // 0xA(0x1)
		bool bUseBackEndcap; // 0xB(0x1)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr SegmentClass; // 0x10(0x20)
		TMap EnabledMeshCustomizations; // 0x30(0x50)
	};


	// Struct DelMarTrackRuntime.ClosestLocationToWorldPlaneResult
	// Size: 0x20 (0x20 - 0x0)
	struct FClosestLocationToWorldPlaneResult	
	{
	public:
		FVector Location; // 0x0(0x18)
		float Key; // 0x18(0x4)
		float DistanceToPlane; // 0x1C(0x4)
	};


	// Struct DelMarTrackRuntime.DelMarRotationalMinimalFrame
	// Size: 0x68 (0x68 - 0x0)
	struct FDelMarRotationalMinimalFrame	
	{
	public:
		float InputKey; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Origin; // 0x8(0x18)
		FVector Tangent; // 0x20(0x18)
		FVector RotationAxis; // 0x38(0x18)
		FVector Normal; // 0x50(0x18)
	};

}
