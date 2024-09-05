#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarTrackRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DelMarTrackRuntime.DelMarTrackBase
	// Inherited from AFortCreativeDeviceProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x80 (0xC68 - 0xBE8)
	class ADelMarTrackBase : public AFortCreativeDeviceProp	
	{
	public:
		unsigned char UnknownData04_3[0x20]; // 0xBE8(0x20) UNKNOWN PROPERTY
		UDelMarTrackPaletteTheme TrackPalette_V2; // 0xC08(0x8)
		UDelMarTrackPointData TrackSplinePointData; // 0xC10(0x8)
		UDelMarTrackSplineComponent Spline; // 0xC18(0x8)
		TArray TrackPropData; // 0xC20(0x10)
		TArray SegmentCollections; // 0xC30(0x10)
		float DefaultMaxTrackWidth; // 0xC40(0x4)
		int32_t TotalSegmentActors; // 0xC44(0x4)
		float TrackLength; // 0xC48(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xC4C(0x4) UNKNOWN PROPERTY
		UDelMarTrackPalette TrackPalette; // 0xC50(0x8)
		bool bEnableGlobalMaterialCollectionIndex; // 0xC58(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xC59(0x3) UNKNOWN PROPERTY
		uint32_t GlobalMaterialCollectionIndex; // 0xC5C(0x4)
		bool bForceValidOOBTube; // 0xC60(0x1)
		bool bForceValidTrack; // 0xC61(0x1)
		unsigned char UnknownData07_7[0x6]; // 0xC62(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackBase");
			return ret;
		}

		void SetTrackTypeTagAtIndex(int32_t SplineIndex, FGameplayTag& tag); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414D99E20
		void RebuildTrack(); // Flags: Final|Native|Public 0x7FF414D99D40
		void PreSplineSegmentGenerated(UDelMarTrackSplineComponent SplineComp, int32_t PointIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414D99C60
		void PreRebuildTrack_BP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D99B80
		void PostSplineSegmentGenerated(UDelMarTrackSplineComponent SplineComp, int32_t PointIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414D99AA0
		void PostRebuildTrack_BP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D999C0
		void OnSplinePointRemoved(UDelMarTrackSplineComponent InSpline, int32_t SplineIndex); // Flags: Final|Native|Protected 0x7FF414D998E0
		void OnSplinePointChanged(UDelMarTrackSplineComponent InSpline, int32_t SplineIndex); // Flags: Final|Native|Protected 0x7FF414D99800
		void OnSplinePointAdded(UDelMarTrackSplineComponent InSpline, int32_t SplineIndex); // Flags: Final|Native|Protected 0x7FF414D99720
		void OnSplineClosedLoopChanged(UDelMarTrackSplineComponent InSpline, int32_t SplineIndex); // Flags: Final|Native|Protected 0x7FF414D99640
		void OnMetadataChanged(UDelMarTrackSplineComponent InSpline, int32_t SplineIndex); // Flags: Final|Native|Protected 0x7FF414D99560
		bool IsTrackable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D99480
		bool IsSecondary(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D993A0
		bool IsPrimary(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D992C0
		bool IsPointInOOBTube(FVector& Point); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414D991E0
		bool IsDistanceWithinRange(float InDistance, float StartDistance, float EndDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D99100
		bool IsCosmetic(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D99020
		void InitializeSpline(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D98F40
		UClass GetTransitionSegmentClass(int32_t FromSplineIndex, int32_t ToSplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D98E60
		UClass GetStartCapClass(int32_t SplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D98D80
		FGameplayTag GetSegmentTrackTypeTag(int32_t SplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D98CA0
		UClass GetSegmentClassAtSplinePoint(int32_t SplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D98BC0
		int32_t GetPreviousSplineSegment(int32_t InSplineSegmentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D98AE0
		int32_t GetPreviousSplinePoint(int32_t InSplinePoint); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D98A00
		int32_t GetNextSplineSegmentIndexWithActor(int32_t SplineSegmentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D98920
		int32_t GetNextSplineSegment(int32_t InSplineSegmentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D98840
		int32_t GetNextSplinePoint(int32_t InSplinePoint); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D98760
		FDelMarSplinePointMetaData GetMetaDataAtSplinePoint(int32_t SplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D98680
		float GetLoopDistance(float InTotalDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D985A0
		float GetForwardDistance(float Start, float End); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D984C0
		UClass GetEndCapClass(int32_t SplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D983E0
		FDelMarTrackPointDistanceRange GetDistanceRangeFromPointRange(FDelMarTrackPointIndexRange& InRange); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414D98300
		TArray GetAllTrackSegmentActors(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D98220
		bool ForceValidTrack(int32_t SplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D98140
		bool ForceValidOOBTube(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D98060
		void ConvertTrackTagsToV2(); // Flags: Final|Native|Public 0x7FF414D97F80
	};


	// Class DelMarTrackRuntime.DelMarTrack
	// Inherited from ADelMarTrackBase -> AFortCreativeDeviceProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x58 (0xCC0 - 0xC68)
	class ADelMarTrack : public ADelMarTrackBase	
	{
	public:
		EDelMarTrackType TrackType; // 0xC68(0x1)
		bool bUserSelectedStartTrack; // 0xC69(0x1)
		unsigned char UnknownData04_6[0x6]; // 0xC6A(0x6) UNKNOWN PROPERTY
		ADelMarTrack StartTrackConnection; // 0xC70(0x8)
		bool bUserSelectedEndTrack; // 0xC78(0x1)
		unsigned char UnknownData05_6[0x7]; // 0xC79(0x7) UNKNOWN PROPERTY
		ADelMarTrack EndTrackConnection; // 0xC80(0x8)
		float ParentStartDistance; // 0xC88(0x4)
		float ParentEndDistance; // 0xC8C(0x4)
		float PrimaryStartDistance; // 0xC90(0x4)
		float PrimaryEndDistance; // 0xC94(0x4)
		float PrimarySegmentLength; // 0xC98(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xC9C(0x4) UNKNOWN PROPERTY
		UClass OobTubeClass; // 0xCA0(0x8)
		TWeakObjectPtr AttachedOobTube; // 0xCA8(0x8)
		unsigned char UnknownData07_7[0x10]; // 0xCB0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrack");
			return ret;
		}

		bool SplitTrackAtPoint(int32_t SplitAtPoint); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D9A7C0
		bool MergeTrack(ADelMarTrack OtherTrack, bool MergeToEndPoint, bool CopyFromStartPoint); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D9A6E0
		ADelMarTrack GetSecondaryStartTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9A600
		ADelMarTrack GetSecondaryEndTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9A520
		float GetSecondaryDistance(float DistanceOnPrimaryTrack); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9A440
		float GetPrimaryStartDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9A360
		float GetPrimaryLength(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9A280
		float GetPrimaryEndDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9A1A0
		float GetPrimaryDistance(float DistanceOnThisTrack); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9A0C0
		float GetParentStartDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D99FE0
		float GetParentEndDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D99F00
	};


	// Class DelMarTrackRuntime.DelMarTrackBlueprintFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarTrackBlueprintFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackBlueprintFunctionLibrary");
			return ret;
		}

		bool TrackPositionDebugDrawEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D9A980
		bool IsTrackRadiusCheckDisabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D9A8A0
	};


	// Class DelMarTrackRuntime.DelMarTrackCustomizationInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarTrackCustomizationInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackCustomizationInterface");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackSegmentBase
	// Inherited from AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class ADelMarTrackSegmentBase : public AActor	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		bool bIgnoreSplineLength; // 0x298(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x299(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr Track; // 0x29C(0x8)
		unsigned char UnknownData06_6[0x4]; // 0x2A4(0x4) UNKNOWN PROPERTY
		UDelMarTrackMatLayerComponent MaterialLayerComponent; // 0x2A8(0x8)
		float BeginDistanceAlongSpline; // 0x2B0(0x4)
		float EndDistanceAlongSpline; // 0x2B4(0x4)
		int32_t TrackSegmentIndex; // 0x2B8(0x4)
		unsigned char UnknownData07_7[0x4]; // 0x2BC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackSegmentBase");
			return ret;
		}

		USplineMeshComponent GetSplineMeshComponent(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414D9AC20
		FDelMarTrackPointDistanceRange GetSplineDistanceRange(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9AB40
		bool ContainsDistanceAlongSpline(float DistanceAlongSpline); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9AA60
	};


	// Class DelMarTrackRuntime.DelMarTrackCustomSegment
	// Inherited from ADelMarTrackSegmentBase -> AActor -> UObject
	// Size: 0x8 (0x2C8 - 0x2C0)
	class ADelMarTrackCustomSegment : public ADelMarTrackSegmentBase	
	{
	public:
		float SegmentLength; // 0x2C0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackCustomSegment");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackMaterialCollection
	// Inherited from UDataAsset -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UDelMarTrackMaterialCollection : public UDataAsset	
	{
	public:
		uint32_t SelectedIndex; // 0x30(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray Materials; // 0x38(0x10)
		unsigned char UnknownData03_7[0x18]; // 0x48(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackMaterialCollection");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackMatLayerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UDelMarTrackMatLayerComponent : public UActorComponent	
	{
	public:
		TWeakObjectPtr RoadMesh; // 0xA0(0x8)
		TWeakObjectPtr Track; // 0xA8(0x8)
		UDelMarTrackMaterialCollection MaterialCollection; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackMatLayerComponent");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackMeshCustomization
	// Inherited from USplineMeshComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x6D0 - 0x6C0)
	class UDelMarTrackMeshCustomization : public USplineMeshComponent	
	{
	public:
		unsigned char UnknownData02_3[0x9]; // 0x6C0(0x9) UNKNOWN PROPERTY
		bool bIsADefaultCustomization; // 0x6C9(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x6CA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackMeshCustomization");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackOobTube
	// Inherited from AActor -> UObject
	// Size: 0xE0 (0x370 - 0x290)
	class ADelMarTrackOobTube : public AActor	
	{
	public:
		ADelMarTrack AttachedTrack; // 0x290(0x8)
		UDelMarTrackSplineComponent Spline; // 0x298(0x8)
		UDelMarTrackOobTubePointData SplinePointData; // 0x2A0(0x8)
		TWeakObjectPtr TubeMeshComponentClass; // 0x2A8(0x20)
		TArray OobTubeMeshSections; // 0x2C8(0x10)
		TWeakObjectPtr TubeMesh; // 0x2D8(0x20)
		TMap TransitionMeshes; // 0x2F8(0x50)
		float DefaultTransitionMeshLength; // 0x348(0x4)
		int32_t DefaultNumSubsections; // 0x34C(0x4)
		float SmallestSubsectionLength; // 0x350(0x4)
		float MinimumMeshScale; // 0x354(0x4)
		unsigned char UnknownData01_7[0x18]; // 0x358(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackOobTube");
			return ret;
		}

		void OnPostContructedOOBTube(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D9B5C0
		void OnConstructTubeMesh(USplineMeshComponent TubeMeshComponent, bool bIsTransitionMesh, bool bIsTransitionIn); // Flags: Event|Protected|BlueprintEvent 0x7FF414D9B4E0
		void OnAttachedTrackPointRemoved(UDelMarTrackSplineComponent InSpline, int32_t PointIndex); // Flags: Final|Native|Private 0x7FF414D9B400
		void OnAttachedTrackPointChanged(UDelMarTrackSplineComponent InSpline, int32_t PointIndex); // Flags: Final|Native|Private 0x7FF414D9B320
		void OnAttachedTrackPointAdded(UDelMarTrackSplineComponent InSpline, int32_t PointIndex); // Flags: Final|Native|Private 0x7FF414D9B240
		bool IsSplinePointOffset(int32_t PointIndex); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D9B160
		bool IsAttachedToSecondaryTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9B080
		bool IsAttachedToPrimaryTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9AFA0
		bool HasTubeMeshAtDistance(float InDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9AEC0
		FGameplayTag GetSplinePointTagAtIndex(int32_t PointIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9ADE0
		EDelMarTrackOobTubeTransitionType DetermineTubeMeshTransitionType(int32_t CurrentPointIndex, int32_t NextPointIndex); // Flags: Native|Event|Protected|BlueprintEvent|Const 0x7FF414D9AD00
	};


	// Class DelMarTrackRuntime.DelMarTrackOobTubePointData
	// Inherited from USplineMetadata -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDelMarTrackOobTubePointData : public USplineMetadata	
	{
	public:
		TArray MetaData; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackOobTubePointData");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackOobTubePositionalRenderingComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x110 - 0xA0)
	class UDelMarTrackOobTubePositionalRenderingComponent : public UControllerComponent	
	{
	public:
		TWeakObjectPtr PlayerPositionComponent; // 0xA0(0x8)
		TSet ActiveOOBTubeMeshes; // 0xA8(0x50)
		ADelMarTrackOobTube ActiveOOBTube; // 0xF8(0x8)
		float RenderDistanceInFrontOfPlayer; // 0x100(0x4)
		float RenderDistanceBehindPlayer; // 0x104(0x4)
		float UpdateIntervalInSeconds; // 0x108(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackOobTubePositionalRenderingComponent");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackOobTubeProxy
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarTrackOobTubeProxy : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy");
			return ret;
		}

		double GetSplineVisualizationOffset(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D9BDA0
		FDelMarTrackOobTubePointMetaData GetSplineMetadata(int32_t PointIndex); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D9BCC0
		USplineComponent GetSplineComponent(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D9BBE0
		double GetSmallestSubsectionLength(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D9BB00
		AActor GetOobTubeActor(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D9BA20
		double GetMinimumMeshScale(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D9B940
		double GetDefaultTransitionMeshLength(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D9B860
		int32_t GetDefaultSubsectionCount(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D9B780
		ADelMarTrack GetAttachedTrack(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D9B6A0
	};


	// Class DelMarTrackRuntime.DelMarTrackOobTubeCollectionProxy
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDelMarTrackOobTubeCollectionProxy : public UObject	
	{
	public:
		UClass OobTubeClass; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackOobTubeCollectionProxy");
			return ret;
		}

		void RegisterOobTube(AActor OobTubeActor); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414D9C040
		UDelMarTrackOobTubeProxy GetOobTubeProxy(int32_t OobTubeIndex); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414D9BF60
		int32_t GetNumOobTubeProxies(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D9BE80
	};


	// Class DelMarTrackRuntime.DelMarTrackPaletteTrackType
	// Inherited from UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UDelMarTrackPaletteTrackType : public UDataAsset	
	{
	public:
		TArray StyleArray; // 0x30(0x10)
		bool bShouldOOBTubeFunnel; // 0x40(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		UStaticMesh OOBTubeMeshOverride; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackPaletteTrackType");
			return ret;
		}

		void AddSegmentClassActorToStyle(FGameplayTag& StyleTag, UClass SegmentClass); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF414D9C120
	};


	// Class DelMarTrackRuntime.DelMarTrackPaletteTransitions
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UDelMarTrackPaletteTransitions : public UDataAsset	
	{
	public:
		TArray TransitionArray; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackPaletteTransitions");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackPaletteTheme
	// Inherited from UDataAsset -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class UDelMarTrackPaletteTheme : public UDataAsset	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FName ThemeName; // 0x38(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FString ThemeDescription; // 0x40(0x10)
		TArray Tracks; // 0x50(0x10)
		UDelMarTrackPaletteTransitions Transitions; // 0x60(0x8)
		UStaticMesh OOBTubeMesh; // 0x68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackPaletteTheme");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackPerformanceScrubber
	// Inherited from AActor -> UObject
	// Size: 0xB8 (0x348 - 0x290)
	class ADelMarTrackPerformanceScrubber : public AActor	
	{
	public:
		UCameraComponent Camera; // 0x290(0x8)
		TWeakObjectPtr Spline; // 0x298(0x8)
		FString SplineSelection; // 0x2A0(0x10)
		int32_t ScrubUnits; // 0x2B0(0x4)
		float CameraHeightOffset; // 0x2B4(0x4)
		UCurveFloat FloatCurve; // 0x2B8(0x8)
		int32_t RuntimeSpeed; // 0x2C0(0x4)
		bool bRunCsvProfilerDuringScrub : 1; // 0x2C4:0(0x1)
		unsigned char UnknownData03_5[0x1B]; // 0x2C5(0x1B) UNKNOWN PROPERTY
		int32_t ScrubUnitMax; // 0x2E0(0x4)
		bool bRuntimeEnabled : 1; // 0x2E4:0(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x2E5(0x3) UNKNOWN PROPERTY
		TMap StringToSplineMap; // 0x2E8(0x50)
		UTimelineComponent Timeline; // 0x338(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x340(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber");
			return ret;
		}

		TArray UpdateSplines(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D9C820
		void TimelineTickFloatCallback(float Progress); // Flags: Final|Native|Protected 0x7FF414D9C740
		void TimelineTickCallback(); // Flags: Final|Native|Protected 0x7FF414D9C660
		void TimelineFinishedCallback(); // Flags: Final|Native|Protected 0x7FF414D9C580
		void ReceiveRuntimeTrackScrubbingStart(); // Flags: Final|Native|Protected 0x7FF414D9C4A0
		void ReceiveRuntimeTrackScrubbingSpeed(); // Flags: Final|Native|Protected 0x7FF414D9C3C0
		void ClientStopScrub(); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414D9C2E0
		void ClientStartScrub(); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414D9C200
	};


	// Class DelMarTrackRuntime.DelMarTrackRoadProp
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x10 (0xBE8 - 0xBD8)
	class ADelMarTrackRoadProp : public ABuildingProp	
	{
	public:
		EDelMarTrackRoadPropType RoadPropType; // 0xBD8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xBD9(0x7) UNKNOWN PROPERTY
		UDelMarTrackSnapToComponent SnapToComponent; // 0xBE0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackRoadProp");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackSegmentCollectionSpawnDataProvider
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarTrackSegmentCollectionSpawnDataProvider : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackSegmentCollectionSpawnDataProvider");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UDelMarTrackSettings : public UDeveloperSettings	
	{
	public:
		FGameplayTag RootTrackTag; // 0x30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray TagConverterData; // 0x38(0x10)
		FGameplayTag DefaultConverterTag; // 0x48(0x4)
		FGameplayTag HiddenTrackTag; // 0x4C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackSettings");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackSnapToComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x250 - 0x220)
	class UDelMarTrackSnapToComponent : public USceneComponent	
	{
	public:
		FVector OffsetToOwnerActor; // 0x220(0x18)
		unsigned char UnknownData01_7[0x18]; // 0x238(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackSnapToComponent");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackSnapToSplinePointComponent
	// Inherited from UDelMarTrackSnapToComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x270 - 0x250)
	class UDelMarTrackSnapToSplinePointComponent : public UDelMarTrackSnapToComponent	
	{
	public:
		USplineComponent SplineToSnapTo; // 0x250(0x8)
		EDelMarTrackSplinePointSnapMode SplinePointSnapMode; // 0x258(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x259(0x3) UNKNOWN PROPERTY
		int32_t SplinePointIndexToSnapTo; // 0x25C(0x4)
		unsigned char UnknownData03_7[0x10]; // 0x260(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackSnapToSplinePointComponent");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackStaticMeshSegment
	// Inherited from ADelMarTrackSegmentBase -> AActor -> UObject
	// Size: 0x8 (0x2C8 - 0x2C0)
	class ADelMarTrackStaticMeshSegment : public ADelMarTrackSegmentBase	
	{
	public:
		UStaticMeshComponent StaticMeshComponent; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackStaticMeshSegment");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackPositionComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x2A0 - 0x220)
	class UDelMarTrackPositionComponent : public USceneComponent	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0x220(0x30) UNKNOWN PROPERTY
		FTrackPosition ActiveTrackPosition; // 0x250(0x20)
		float TrackRadius; // 0x270(0x4)
		unsigned char UnknownData03_7[0x24]; // 0x274(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackPositionComponent");
			return ret;
		}

		void SetActiveTrack(ADelMarTrackBase Track, int32_t TrackSegmentIndex, bool bForce); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D9DA80
		bool IsTouchingTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9D9A0
		bool IsOnPrimaryTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9D8C0
		bool HasValidPosition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9D7E0
		FVector GetWorldUpVectorAlongSpline(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9D700
		FTransform GetWorldTransformAlongSpline(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9D620
		FVector GetWorldRightVectorAlongSpline(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9D540
		FVector GetWorldLocationAlongSpline(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9D460
		FVector GetWorldDirectionAlongSpline(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9D380
		float GetRawDistanceAlongSpline(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9D2A0
		FVector GetRawClosestSplineLocation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9D1C0
		FVector GetPrimaryWorldLocationAlongSpline(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9D0E0
		ADelMarTrackBase GetPrimaryTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9D000
		float GetPrimaryDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9CF20
		FVector GetLastKnowGoodSplineLocation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9CE40
		float GetDistanceAlongSpline(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9CD60
		float GetActiveTrackRadius(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9CC80
		FTrackPosition GetActiveTrackPosition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9CBA0
		float GetActiveTrackDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9CAC0
		ADelMarTrackBase GetActiveTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9C9E0
		int32_t GetActiveSegmentIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9C900
	};


	// Class DelMarTrackRuntime.DelMarTrackVehiclePositionComponent
	// Inherited from UDelMarTrackPositionComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x2A0 - 0x298)
	class UDelMarTrackVehiclePositionComponent : public UDelMarTrackPositionComponent	
	{
	public:
		AFortAthenaVehicle Vehicle; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackVehiclePositionComponent");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UDelMarTrackManager : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_3[0x30]; // 0x30(0x30) UNKNOWN PROPERTY
		TArray DelMarTracks; // 0x60(0x10)
		ADelMarTrackBase PrimaryTrack; // 0x70(0x8)
		ADelMarTrackBase LowestTrack; // 0x78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackManager");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackPalette
	// Inherited from UDataAsset -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UDelMarTrackPalette : public UDataAsset	
	{
	public:
		TArray Palette; // 0x30(0x10)
		TArray Transitions; // 0x40(0x10)
		TArray Caps; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackPalette");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackPrefabSegment
	// Inherited from ADelMarTrackSegmentBase -> AActor -> UObject
	// Size: 0x18 (0x2D8 - 0x2C0)
	class ADelMarTrackPrefabSegment : public ADelMarTrackSegmentBase	
	{
	public:
		float TangentLength; // 0x2C0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C4(0x4) UNKNOWN PROPERTY
		UStaticMeshComponent PrefabStaticMesh; // 0x2C8(0x8)
		FName StartSocketName; // 0x2D0(0x4)
		FName EndSocketName; // 0x2D4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackPrefabSegment");
			return ret;
		}

		TArray GetSockets(); // Flags: Final|Native|Private|Const 0x7FF414D9DB60
	};


	// Class DelMarTrackRuntime.DelMarTrackSegmentInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarTrackSegmentInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackSegmentInterface");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackPointData
	// Inherited from USplineMetadata -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UDelMarTrackPointData : public USplineMetadata	
	{
	public:
		TArray MetaData; // 0x28(0x10)
		UDelMarTrackSplineComponent Spline; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackPointData");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackSplineComponent
	// Inherited from USplineComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x610 - 0x560)
	class UDelMarTrackSplineComponent : public USplineComponent	
	{
	public:
		int32_t WorldPlaneLookupSubsteps; // 0x560(0x4)
		unsigned char UnknownData02_6[0x94]; // 0x564(0x94) UNKNOWN PROPERTY
		TArray RotationalMinimalFrameNormals; // 0x5F8(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x608(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackSplineComponent");
			return ret;
		}

		bool IsDistanceWithinRange(float InDistance, float StartDistance, float EndDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9EB20
		bool IsDistanceBehindOtherDistance(float Distance, float OtherDistance, float BaseDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9EA40
		bool IsDistanceAheadOfOtherDistance(float Distance, float OtherDistance, float BaseDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9E960
		int32_t GetSplinePointClosestToWorldLocation(FVector& WorldLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9E880
		int32_t GetSplinePointClosestToDistanceAlongSpline(float DistanceAlongSpline); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9E7A0
		int32_t GetSplinePointAtDistanceAlongSpline(float DistanceAlongSpline); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9E6C0
		FVector GetRotationalMinimalUpVectorAtSplinePoint(int32_t SplinePoint, TEnumAsByte CoordinateSpace); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9E5E0
		FVector GetRotationalMinimalUpVectorAtDistanceAlongSpline(float DistanceAlongSpline, TEnumAsByte CoordinateSpace); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9E500
		TArray GetRotationalMinimalFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9E420
		int32_t GetPreviousSplineSegment(int32_t InSplineSegmentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9E340
		int32_t GetPreviousSplinePoint(int32_t InSplinePoint); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9E260
		int32_t GetNextSplineSegment(int32_t InSplineSegmentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9E180
		int32_t GetNextSplinePoint(int32_t InSplinePoint); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9E0A0
		float GetLoopDistance(float InTotalDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9DFC0
		float GetForwardDistance(float Start, float End); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D9DEE0
		FClosestLocationToWorldPlaneResult FindInputKeyForNeighboringSegmentClosestToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal, int32_t SegmentIndex, int32_t& OutClosestSegmentIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9DE00
		FClosestLocationToWorldPlaneResult FindClosestLocationToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal, TEnumAsByte CoordinateSpace); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9DD20
		FClosestLocationToWorldPlaneResult FindClosestLocationForSegmentToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal, int32_t SegmentIndex, TEnumAsByte CoordinateSpace); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D9DC40
	};


	// Class DelMarTrackRuntime.DelMarTrackSplineMeshSegment
	// Inherited from ADelMarTrackSegmentBase -> AActor -> UObject
	// Size: 0x10 (0x2D0 - 0x2C0)
	class ADelMarTrackSplineMeshSegment : public ADelMarTrackSegmentBase	
	{
	public:
		USplineMeshComponent SplineMesh; // 0x2C0(0x8)
		float SegmentLengthScaler; // 0x2C8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2CC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackSplineMeshSegment");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackVariableSplineMeshSegment
	// Inherited from ADelMarTrackSplineMeshSegment -> ADelMarTrackSegmentBase -> AActor -> UObject
	// Size: 0x50 (0x320 - 0x2D0)
	class ADelMarTrackVariableSplineMeshSegment : public ADelMarTrackSplineMeshSegment	
	{
	public:
		TMap VariableStaticMeshes; // 0x2D0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackVariableSplineMeshSegment");
			return ret;
		}
	};


	// Class DelMarTrackRuntime.DelMarTrackTubeAudioComponent
	// Inherited from UAudioShapePrimitiveComponent -> UAudioShapeComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x250 - 0x1F8)
	class UDelMarTrackTubeAudioComponent : public UAudioShapePrimitiveComponent	
	{
	public:
		float Radius; // 0x1F8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x1FC(0x4) UNKNOWN PROPERTY
		FBox SplineAABB; // 0x200(0x38)
		USplineComponent Spline; // 0x238(0x8)
		ADelMarTrackOobTube ParentOobTube; // 0x240(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x248(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackTubeAudioComponent");
			return ret;
		}

		void SetSpline(USplineComponent NewSpline); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D9ECE0
		void SetRadius(float InRadius); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D9EC00
	};

}
