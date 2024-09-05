#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarTrackRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DelMarTrackRuntime.DelMarTrackBase
	// Inherited from AFortCreativeDeviceProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x80 (0xC68 - 0xBE8)
	class ADelMarTrackBase : public AFortCreativeDeviceProp	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0xBE8(0x20) UNKNOWN PROPERTY
		UDelMarTrackPaletteTheme* TrackPalette_V2; // 0xC08(0x8)
		UDelMarTrackPointData* TrackSplinePointData; // 0xC10(0x8)
		UDelMarTrackSplineComponent* Spline; // 0xC18(0x8)
		TArray<FDelMarTrackPropSection> TrackPropData; // 0xC20(0x10)
		TArray<FDelMarSegmentActorCollection> SegmentCollections; // 0xC30(0x10)
		float DefaultMaxTrackWidth; // 0xC40(0x4)
		int32_t TotalSegmentActors; // 0xC44(0x4)
		float TrackLength; // 0xC48(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC4C(0x4) UNKNOWN PROPERTY
		UDelMarTrackPalette* TrackPalette; // 0xC50(0x8)
		bool bEnableGlobalMaterialCollectionIndex; // 0xC58(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xC59(0x3) UNKNOWN PROPERTY
		uint32_t GlobalMaterialCollectionIndex; // 0xC5C(0x4)
		bool bForceValidOOBTube; // 0xC60(0x1)
		bool bForceValidTrack; // 0xC61(0x1)
		unsigned char UnknownData03_7[0x6]; // 0xC62(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackBase");
			return ret;
		}

		void SetTrackTypeTagAtIndex(int32_t SplineIndex, FGameplayTag& Tag); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751724858(relative to base address)
		void RebuildTrack(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751724844(relative to base address)
		void PreSplineSegmentGenerated(UDelMarTrackSplineComponent* SplineComp, int32_t PointIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreRebuildTrack_BP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PostSplineSegmentGenerated(UDelMarTrackSplineComponent* SplineComp, int32_t PointIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PostRebuildTrack_BP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSplinePointRemoved(UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751724780(relative to base address)
		void OnSplinePointChanged(UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517246BC(relative to base address)
		void OnSplinePointAdded(UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517245F8(relative to base address)
		void OnSplineClosedLoopChanged(UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751724534(relative to base address)
		void OnMetadataChanged(UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751724470(relative to base address)
		bool IsTrackable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517240F0(relative to base address)
		bool IsSecondary(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723FD4(relative to base address)
		bool IsPrimary(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723FB0(relative to base address)
		bool IsPointInOOBTube(FVector& Point); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsDistanceWithinRange(float InDistance, float StartDistance, float EndDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723EB0(relative to base address)
		bool IsCosmetic(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723E8C(relative to base address)
		void InitializeSpline(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UClass GetTransitionSegmentClass(int32_t FromSplineIndex, int32_t ToSplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723CBC(relative to base address)
		UClass GetStartCapClass(int32_t SplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723C30(relative to base address)
		FGameplayTag GetSegmentTrackTypeTag(int32_t SplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723B08(relative to base address)
		UClass GetSegmentClassAtSplinePoint(int32_t SplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723A7C(relative to base address)
		int32_t GetPreviousSplineSegment(int32_t InSplineSegmentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723854(relative to base address)
		int32_t GetPreviousSplinePoint(int32_t InSplinePoint); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723854(relative to base address)
		int32_t GetNextSplineSegmentIndexWithActor(int32_t SplineSegmentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517237C8(relative to base address)
		int32_t GetNextSplineSegment(int32_t InSplineSegmentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723738(relative to base address)
		int32_t GetNextSplinePoint(int32_t InSplinePoint); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517236A8(relative to base address)
		FDelMarSplinePointMetaData GetMetaDataAtSplinePoint(int32_t SplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723614(relative to base address)
		float GetLoopDistance(float InTotalDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723580(relative to base address)
		float GetForwardDistance(float Start, float End); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517234B4(relative to base address)
		UClass GetEndCapClass(int32_t SplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723428(relative to base address)
		FDelMarTrackPointDistanceRange GetDistanceRangeFromPointRange(FDelMarTrackPointIndexRange& InRange); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723390(relative to base address)
		TArray GetAllTrackSegmentActors(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517232E4(relative to base address)
		bool ForceValidTrack(int32_t SplineIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723258(relative to base address)
		bool ForceValidOOBTube(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723240(relative to base address)
		void ConvertTrackTagsToV2(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751723164(relative to base address)
	};


	// Class DelMarTrackRuntime.DelMarTrack
	// Inherited from ADelMarTrackBase -> AFortCreativeDeviceProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x58 (0xCC0 - 0xC68)
	class ADelMarTrack : public ADelMarTrackBase	
	{
	public:
		EDelMarTrackType TrackType; // 0xC68(0x1)
		bool bUserSelectedStartTrack; // 0xC69(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xC6A(0x6) UNKNOWN PROPERTY
		ADelMarTrack* StartTrackConnection; // 0xC70(0x8)
		bool bUserSelectedEndTrack; // 0xC78(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xC79(0x7) UNKNOWN PROPERTY
		ADelMarTrack* EndTrackConnection; // 0xC80(0x8)
		float ParentStartDistance; // 0xC88(0x4)
		float ParentEndDistance; // 0xC8C(0x4)
		float PrimaryStartDistance; // 0xC90(0x4)
		float PrimaryEndDistance; // 0xC94(0x4)
		float PrimarySegmentLength; // 0xC98(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC9C(0x4) UNKNOWN PROPERTY
		UClass* OobTubeClass; // 0xCA0(0x8)
		TWeakObjectPtr<ADelMarTrackOobTube*> AttachedOobTube; // 0xCA8(0x8)
		unsigned char UnknownData03_7[0x10]; // 0xCB0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrack");
			return ret;
		}

		bool SplitTrackAtPoint(int32_t SplitAtPoint); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751724948(relative to base address)
		bool MergeTrack(ADelMarTrack* OtherTrack, bool MergeToEndPoint, bool CopyFromStartPoint); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751724114(relative to base address)
		ADelMarTrack GetSecondaryStartTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723A64(relative to base address)
		ADelMarTrack GetSecondaryEndTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723A4C(relative to base address)
		float GetSecondaryDistance(float DistanceOnPrimaryTrack); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517239BC(relative to base address)
		float GetPrimaryStartDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517239A4(relative to base address)
		float GetPrimaryLength(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75172398C(relative to base address)
		float GetPrimaryEndDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723974(relative to base address)
		float GetPrimaryDistance(float DistanceOnThisTrack); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517238E4(relative to base address)
		float GetParentStartDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74914A610(relative to base address)
		float GetParentEndDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E8B71B8(relative to base address)
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

		bool TrackPositionDebugDrawEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7517249D4(relative to base address)
		bool IsTrackRadiusCheckDisabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7517240D4(relative to base address)
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
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		bool bIgnoreSplineLength; // 0x298(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x299(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<ADelMarTrackBase*> Track; // 0x29C(0x8)
		unsigned char UnknownData02_6[0x4]; // 0x2A4(0x4) UNKNOWN PROPERTY
		UDelMarTrackMatLayerComponent* MaterialLayerComponent; // 0x2A8(0x8)
		float BeginDistanceAlongSpline; // 0x2B0(0x4)
		float EndDistanceAlongSpline; // 0x2B4(0x4)
		int32_t TrackSegmentIndex; // 0x2B8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x2BC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackSegmentBase");
			return ret;
		}

		USplineMeshComponent GetSplineMeshComponent(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF748985DB4(relative to base address)
		FDelMarTrackPointDistanceRange GetSplineDistanceRange(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75172B6B8(relative to base address)
		bool ContainsDistanceAlongSpline(float DistanceAlongSpline); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75172B500(relative to base address)
	};


	// Class DelMarTrackRuntime.DelMarTrackCustomSegment
	// Inherited from ADelMarTrackSegmentBase -> AActor -> UObject
	// Size: 0x8 (0x2C8 - 0x2C0)
	class ADelMarTrackCustomSegment : public ADelMarTrackSegmentBase	
	{
	public:
		float SegmentLength; // 0x2C0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C4(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray<FDelMarTrackMaterialCollectionEntry> Materials; // 0x38(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x48(0x18) UNKNOWN PROPERTY

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
		TWeakObjectPtr<UStaticMeshComponent*> RoadMesh; // 0xA0(0x8)
		TWeakObjectPtr<ADelMarTrackBase*> Track; // 0xA8(0x8)
		UDelMarTrackMaterialCollection* MaterialCollection; // 0xB0(0x8)

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
		unsigned char UnknownData00_3[0x9]; // 0x6C0(0x9) UNKNOWN PROPERTY
		bool bIsADefaultCustomization; // 0x6C9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x6CA(0x6) UNKNOWN PROPERTY

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
		ADelMarTrack* AttachedTrack; // 0x290(0x8)
		UDelMarTrackSplineComponent* Spline; // 0x298(0x8)
		UDelMarTrackOobTubePointData* SplinePointData; // 0x2A0(0x8)
		TWeakObjectPtr<UClass*> TubeMeshComponentClass; // 0x2A8(0x20)
		TArray<FDelMarTrackOobTubeMeshSection> OobTubeMeshSections; // 0x2C8(0x10)
		TWeakObjectPtr<UStaticMesh*> TubeMesh; // 0x2D8(0x20)
		TMap<EDelMarTrackOobTubeTransitionType, TWeakObjectPtr> TransitionMeshes; // 0x2F8(0x50)
		float DefaultTransitionMeshLength; // 0x348(0x4)
		int32_t DefaultNumSubsections; // 0x34C(0x4)
		float SmallestSubsectionLength; // 0x350(0x4)
		float MinimumMeshScale; // 0x354(0x4)
		unsigned char UnknownData00_7[0x18]; // 0x358(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackOobTube");
			return ret;
		}

		void OnPostContructedOOBTube(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConstructTubeMesh(USplineMeshComponent* TubeMeshComponent, bool bIsTransitionMesh, bool bIsTransitionIn); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAttachedTrackPointRemoved(UDelMarTrackSplineComponent* InSpline, int32_t PointIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF7517243AC(relative to base address)
		void OnAttachedTrackPointChanged(UDelMarTrackSplineComponent* InSpline, int32_t PointIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF7517242E8(relative to base address)
		void OnAttachedTrackPointAdded(UDelMarTrackSplineComponent* InSpline, int32_t PointIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751724224(relative to base address)
		bool IsSplinePointOffset(int32_t PointIndex); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723FF8(relative to base address)
		bool IsAttachedToSecondaryTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723E50(relative to base address)
		bool IsAttachedToPrimaryTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723E0C(relative to base address)
		bool HasTubeMeshAtDistance(float InDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723D7C(relative to base address)
		FGameplayTag GetSplinePointTagAtIndex(int32_t PointIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751723B98(relative to base address)
		EDelMarTrackOobTubeTransitionType DetermineTubeMeshTransitionType(int32_t CurrentPointIndex, int32_t NextPointIndex); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF751723178(relative to base address)
	};


	// Class DelMarTrackRuntime.DelMarTrackOobTubePointData
	// Inherited from USplineMetadata -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDelMarTrackOobTubePointData : public USplineMetadata	
	{
	public:
		TArray<FDelMarTrackOobTubePointMetaData> MetaData; // 0x28(0x10)

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
		TWeakObjectPtr<UDelMarTrackPositionComponent*> PlayerPositionComponent; // 0xA0(0x8)
		TSet<USplineMeshComponent*> ActiveOOBTubeMeshes; // 0xA8(0x50)
		ADelMarTrackOobTube* ActiveOOBTube; // 0xF8(0x8)
		float RenderDistanceInFrontOfPlayer; // 0x100(0x4)
		float RenderDistanceBehindPlayer; // 0x104(0x4)
		float UpdateIntervalInSeconds; // 0x108(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY

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

		double GetSplineVisualizationOffset(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF75172B790(relative to base address)
		FDelMarTrackOobTubePointMetaData GetSplineMetadata(int32_t PointIndex); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF75172B6E0(relative to base address)
		USplineComponent GetSplineComponent(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C5A3348(relative to base address)
		double GetSmallestSubsectionLength(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF75172B68C(relative to base address)
		AActor GetOobTubeActor(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74E047ACC(relative to base address)
		double GetMinimumMeshScale(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF75172B5CC(relative to base address)
		double GetDefaultTransitionMeshLength(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF75172B5A0(relative to base address)
		int32_t GetDefaultSubsectionCount(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C39ED80(relative to base address)
		ADelMarTrack GetAttachedTrack(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF748E00E28(relative to base address)
	};


	// Class DelMarTrackRuntime.DelMarTrackOobTubeCollectionProxy
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDelMarTrackOobTubeCollectionProxy : public UObject	
	{
	public:
		UClass* OobTubeClass; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackOobTubeCollectionProxy");
			return ret;
		}

		void RegisterOobTube(AActor* OobTubeActor); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D87CD00(relative to base address)
		UDelMarTrackOobTubeProxy GetOobTubeProxy(int32_t OobTubeIndex); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75172B5F8(relative to base address)
		int32_t GetNumOobTubeProxies(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C388678(relative to base address)
	};


	// Class DelMarTrackRuntime.DelMarTrackPaletteTrackType
	// Inherited from UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UDelMarTrackPaletteTrackType : public UDataAsset	
	{
	public:
		TArray<FDelMarTrackPaletteTrackTypeEntry> StyleArray; // 0x30(0x10)
		bool bShouldOOBTubeFunnel; // 0x40(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		UStaticMesh* OOBTubeMeshOverride; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackPaletteTrackType");
			return ret;
		}

		void AddSegmentClassActorToStyle(FGameplayTag& StyleTag, UClass* SegmentClass); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75172B3F4(relative to base address)
	};


	// Class DelMarTrackRuntime.DelMarTrackPaletteTransitions
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UDelMarTrackPaletteTransitions : public UDataAsset	
	{
	public:
		TArray<FDelMarTrackPaletteTransitionEntry_v2> TransitionArray; // 0x30(0x10)

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
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FName ThemeName; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FString ThemeDescription; // 0x40(0x10)
		TArray<UDelMarTrackPaletteTrackType*> Tracks; // 0x50(0x10)
		UDelMarTrackPaletteTransitions* Transitions; // 0x60(0x8)
		UStaticMesh* OOBTubeMesh; // 0x68(0x8)

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
		UCameraComponent* Camera; // 0x290(0x8)
		TWeakObjectPtr<UDelMarTrackSplineComponent*> Spline; // 0x298(0x8)
		FString SplineSelection; // 0x2A0(0x10)
		int32_t ScrubUnits; // 0x2B0(0x4)
		float CameraHeightOffset; // 0x2B4(0x4)
		UCurveFloat* FloatCurve; // 0x2B8(0x8)
		int32_t RuntimeSpeed; // 0x2C0(0x4)
		bool bRunCsvProfilerDuringScrub : 1; // 0x2C4:0(0x1)
		unsigned char UnknownData00_5[0x1B]; // 0x2C5(0x1B) UNKNOWN PROPERTY
		int32_t ScrubUnitMax; // 0x2E0(0x4)
		bool bRuntimeEnabled : 1; // 0x2E4:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x2E5(0x3) UNKNOWN PROPERTY
		TMap<FString, UDelMarTrackSplineComponent*> StringToSplineMap; // 0x2E8(0x50)
		UTimelineComponent* Timeline; // 0x338(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x340(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber");
			return ret;
		}

		TArray UpdateSplines(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75172B928(relative to base address)
		void TimelineTickFloatCallback(float Progress); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75172B8A8(relative to base address)
		void TimelineTickCallback(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75172B884(relative to base address)
		void TimelineFinishedCallback(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75172B84C(relative to base address)
		void ReceiveRuntimeTrackScrubbingStart(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75172B828(relative to base address)
		void ReceiveRuntimeTrackScrubbingSpeed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75172B7BC(relative to base address)
		void ClientStopScrub(); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF748BA0AC4(relative to base address)
		void ClientStartScrub(); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF747E38E94(relative to base address)
	};


	// Class DelMarTrackRuntime.DelMarTrackRoadProp
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x10 (0xBE8 - 0xBD8)
	class ADelMarTrackRoadProp : public ABuildingProp	
	{
	public:
		EDelMarTrackRoadPropType RoadPropType; // 0xBD8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xBD9(0x7) UNKNOWN PROPERTY
		UDelMarTrackSnapToComponent* SnapToComponent; // 0xBE0(0x8)

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
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray<FDelMarTrackTagConverterData> TagConverterData; // 0x38(0x10)
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
		unsigned char UnknownData00_7[0x18]; // 0x238(0x18) UNKNOWN PROPERTY

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
		USplineComponent* SplineToSnapTo; // 0x250(0x8)
		EDelMarTrackSplinePointSnapMode SplinePointSnapMode; // 0x258(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x259(0x3) UNKNOWN PROPERTY
		int32_t SplinePointIndexToSnapTo; // 0x25C(0x4)
		unsigned char UnknownData01_7[0x10]; // 0x260(0x10) UNKNOWN PROPERTY

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
		UStaticMeshComponent* StaticMeshComponent; // 0x2C0(0x8)

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
		unsigned char UnknownData00_3[0x30]; // 0x220(0x30) UNKNOWN PROPERTY
		FTrackPosition ActiveTrackPosition; // 0x250(0x20)
		float TrackRadius; // 0x270(0x4)
		unsigned char UnknownData01_7[0x24]; // 0x274(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackPositionComponent");
			return ret;
		}

		void SetActiveTrack(ADelMarTrackBase* Track, int32_t TrackSegmentIndex, bool bForce); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75173C2A8(relative to base address)
		bool IsTouchingTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74ED1E5FC(relative to base address)
		bool IsOnPrimaryTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173C260(relative to base address)
		bool HasValidPosition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173BF50(relative to base address)
		FVector GetWorldUpVectorAlongSpline(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173BED0(relative to base address)
		FTransform GetWorldTransformAlongSpline(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173BE54(relative to base address)
		FVector GetWorldRightVectorAlongSpline(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173BDD4(relative to base address)
		FVector GetWorldLocationAlongSpline(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173BD9C(relative to base address)
		FVector GetWorldDirectionAlongSpline(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173BD64(relative to base address)
		float GetRawDistanceAlongSpline(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B7B0(relative to base address)
		FVector GetRawClosestSplineLocation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B730(relative to base address)
		FVector GetPrimaryWorldLocationAlongSpline(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B6F8(relative to base address)
		ADelMarTrackBase GetPrimaryTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B6D4(relative to base address)
		float GetPrimaryDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B6AC(relative to base address)
		FVector GetLastKnowGoodSplineLocation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B3F8(relative to base address)
		float GetDistanceAlongSpline(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B28C(relative to base address)
		float GetActiveTrackRadius(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B308(relative to base address)
		FTrackPosition GetActiveTrackPosition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B2A4(relative to base address)
		float GetActiveTrackDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B28C(relative to base address)
		ADelMarTrackBase GetActiveTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B274(relative to base address)
		int32_t GetActiveSegmentIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FE10350(relative to base address)
	};


	// Class DelMarTrackRuntime.DelMarTrackVehiclePositionComponent
	// Inherited from UDelMarTrackPositionComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x2A0 - 0x298)
	class UDelMarTrackVehiclePositionComponent : public UDelMarTrackPositionComponent	
	{
	public:
		AFortAthenaVehicle* Vehicle; // 0x298(0x8)

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
		unsigned char UnknownData00_3[0x30]; // 0x30(0x30) UNKNOWN PROPERTY
		TArray<ADelMarTrackBase*> DelMarTracks; // 0x60(0x10)
		ADelMarTrackBase* PrimaryTrack; // 0x70(0x8)
		ADelMarTrackBase* LowestTrack; // 0x78(0x8)

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
		TArray<FDelMarTrackPaletteEntry> Palette; // 0x30(0x10)
		TArray<FDelMarTrackPaletteTransitionEntry> Transitions; // 0x40(0x10)
		TArray<FDelMarTrackCapEntry> Caps; // 0x50(0x10)

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
		unsigned char UnknownData00_6[0x4]; // 0x2C4(0x4) UNKNOWN PROPERTY
		UStaticMeshComponent* PrefabStaticMesh; // 0x2C8(0x8)
		FName StartSocketName; // 0x2D0(0x4)
		FName EndSocketName; // 0x2D4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackPrefabSegment");
			return ret;
		}

		TArray GetSockets(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF75173BB34(relative to base address)
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
		TArray<FDelMarSplinePointMetaData> MetaData; // 0x28(0x10)
		UDelMarTrackSplineComponent* Spline; // 0x38(0x8)

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
		unsigned char UnknownData00_6[0x94]; // 0x564(0x94) UNKNOWN PROPERTY
		TArray<FDelMarRotationalMinimalFrame> RotationalMinimalFrameNormals; // 0x5F8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x608(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackSplineComponent");
			return ret;
		}

		bool IsDistanceWithinRange(float InDistance, float StartDistance, float EndDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173C164(relative to base address)
		bool IsDistanceBehindOtherDistance(float Distance, float OtherDistance, float BaseDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173C064(relative to base address)
		bool IsDistanceAheadOfOtherDistance(float Distance, float OtherDistance, float BaseDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173BF68(relative to base address)
		int32_t GetSplinePointClosestToWorldLocation(FVector& WorldLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173BC90(relative to base address)
		int32_t GetSplinePointClosestToDistanceAlongSpline(float DistanceAlongSpline); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173BC00(relative to base address)
		int32_t GetSplinePointAtDistanceAlongSpline(float DistanceAlongSpline); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173BB70(relative to base address)
		FVector GetRotationalMinimalUpVectorAtSplinePoint(int32_t SplinePoint, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173BA64(relative to base address)
		FVector GetRotationalMinimalUpVectorAtDistanceAlongSpline(float DistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B840(relative to base address)
		TArray GetRotationalMinimalFrames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B7C8(relative to base address)
		int32_t GetPreviousSplineSegment(int32_t InSplineSegmentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B620(relative to base address)
		int32_t GetPreviousSplinePoint(int32_t InSplinePoint); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B620(relative to base address)
		int32_t GetNextSplineSegment(int32_t InSplineSegmentIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B594(relative to base address)
		int32_t GetNextSplinePoint(int32_t InSplinePoint); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B508(relative to base address)
		float GetLoopDistance(float InTotalDistance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B478(relative to base address)
		float GetForwardDistance(float Start, float End); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B330(relative to base address)
		FClosestLocationToWorldPlaneResult FindInputKeyForNeighboringSegmentClosestToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal, int32_t SegmentIndex, int32_t& OutClosestSegmentIndex); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173B020(relative to base address)
		FClosestLocationToWorldPlaneResult FindClosestLocationToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173AE0C(relative to base address)
		FClosestLocationToWorldPlaneResult FindClosestLocationForSegmentToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal, int32_t SegmentIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75173AB9C(relative to base address)
	};


	// Class DelMarTrackRuntime.DelMarTrackSplineMeshSegment
	// Inherited from ADelMarTrackSegmentBase -> AActor -> UObject
	// Size: 0x10 (0x2D0 - 0x2C0)
	class ADelMarTrackSplineMeshSegment : public ADelMarTrackSegmentBase	
	{
	public:
		USplineMeshComponent* SplineMesh; // 0x2C0(0x8)
		float SegmentLengthScaler; // 0x2C8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2CC(0x4) UNKNOWN PROPERTY

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
		TMap<int32_t, UStaticMesh*> VariableStaticMeshes; // 0x2D0(0x50)

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
		unsigned char UnknownData00_6[0x4]; // 0x1FC(0x4) UNKNOWN PROPERTY
		FBox SplineAABB; // 0x200(0x38)
		USplineComponent* Spline; // 0x238(0x8)
		ADelMarTrackOobTube* ParentOobTube; // 0x240(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x248(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTrackRuntime.DelMarTrackTubeAudioComponent");
			return ret;
		}

		void SetSpline(USplineComponent* NewSpline); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75173C3A4(relative to base address)
		void SetRadius(float InRadius); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC76F34(relative to base address)
	};

}
